// Lean compiler output
// Module: VampireReplay.Reconstruct.Rules.Rewrite
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
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_parents(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_varSorts(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_boundVarSorts(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_coverVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_clause_x3f(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Vampire_Reconstruct_instantiateAt_spec__0_spec__0___redArg(lean_object*, lean_object*);
uint8_t lp_vampireReplay_Vampire_Term_isVar(lean_object*);
lean_object* lp_vampireReplay_Vampire_Term_symbol_x3f(lean_object*);
lean_object* lp_vampireReplay_Vampire_Term_args(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lp_vampireReplay_Vampire_Reconstruct_symbolExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
uint32_t lp_vampireReplay_Vampire_Term_functor(lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
uint32_t lp_vampireReplay_Vampire_Term_var(lean_object*);
lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1___redArg(lean_object*, uint32_t);
lean_object* lp_vampireReplay_Vampire_Clause_literals(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_instantiateAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_substitutedVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_term(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_throwIntroduced___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_literalPolarity___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_shared___redArg(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Literal_args(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_Option_instBEq_beq___at___00Lean_Meta_Grind_Arith_Linear_propagateIneq_spec__0(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t lp_vampireReplay_Vampire_Literal_isEquality(lean_object*);
lean_object* lp_vampireReplay_Vampire_Literal_symbol_x3f(lean_object*);
uint32_t lp_vampireReplay_Vampire_Literal_predicate(lean_object*);
lean_object* lp_vampireReplay_Vampire_Literal_sort_x3f(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_sortType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_junction(lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_sharedClause___redArg(lean_object*, lean_object*);
lean_object* l_Array_zipIdx___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_carryAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Lean_Meta_forallBoundedTelescope___at___00Vampire_Reconstruct_relateLiterals_spec__6___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_placeLiteral(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_carryPast(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_app_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_app_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_leaf_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_leaf_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_vampireReplay_Vampire_Reconstruct_Rewrite_instBEqTree_beq(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_vampireReplay_Array_isEqvAux___at___00Vampire_Reconstruct_Rewrite_instBEqTree_beq_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Array_isEqvAux___at___00Vampire_Reconstruct_Rewrite_instBEqTree_beq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_instBEqTree_beq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_vampireReplay_Array_isEqvAux___at___00Vampire_Reconstruct_Rewrite_instBEqTree_beq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Array_isEqvAux___at___00Vampire_Reconstruct_Rewrite_instBEqTree_beq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_vampireReplay_Vampire_Reconstruct_Rewrite_instBEqTree___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_vampireReplay_Vampire_Reconstruct_Rewrite_instBEqTree_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_instBEqTree___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Rewrite_instBEqTree___closed__0_value;
LEAN_EXPORT const lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_instBEqTree = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Rewrite_instBEqTree___closed__0_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Rewrite_instInhabitedTree_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_instInhabitedTree_default___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Rewrite_instInhabitedTree_default___closed__0_value;
static const lean_array_object lp_vampireReplay_Vampire_Reconstruct_Rewrite_instInhabitedTree_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_instInhabitedTree_default___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Rewrite_instInhabitedTree_default___closed__1_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Rewrite_instInhabitedTree_default___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Rewrite_instInhabitedTree_default___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Rewrite_instInhabitedTree_default___closed__1_value)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_instInhabitedTree_default___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Rewrite_instInhabitedTree_default___closed__2_value;
LEAN_EXPORT const lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_instInhabitedTree_default = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Rewrite_instInhabitedTree_default___closed__2_value;
LEAN_EXPORT const lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_instInhabitedTree = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Rewrite_instInhabitedTree_default___closed__2_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "term has unknown functor "};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__0 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__1;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "variable X"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__2 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__3;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = " has no recorded sort"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__4 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__4_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__5;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__6;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__7;
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_toExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "the symbol"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_toExpr___closed__0 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_toExpr___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_toExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_toExpr_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_toExpr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_toExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_replacing(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_replacing_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_replacing_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_replacing___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Not"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__0 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__0_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__0_value),LEAN_SCALAR_PTR_LITERAL(185, 11, 203, 55, 27, 192, 137, 230)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__1 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__1_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__2;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "literal has unknown predicate "};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__3 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__3_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__4;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "equality literal with "};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__5 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__5_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__6;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " arguments"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__7 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__7_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__8;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__9 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__9_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__9_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__10 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__10_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "equality literal without a recorded argument sort"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__11 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__11_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__12;
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "the equation is not one:"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__0 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__1;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "neither side of"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__2 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__3;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "\nis the term"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__4 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__4_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__5;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "\nthe equation was matched at"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__6 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__6_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__7;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "symm"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__8 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__8_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__9_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__9_value_aux_0),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__8_value),LEAN_SCALAR_PTR_LITERAL(220, 149, 144, 59, 77, 93, 25, 217)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__9 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__9_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = "the step did not record which side of the equation it used"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__10 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__10_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__11;
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewrittenOf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "the premise being rewritten is not a clause"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewrittenOf___closed__0 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewrittenOf___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewrittenOf___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewrittenOf___closed__1;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewrittenOf___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "the step did not record the term it rewrote"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewrittenOf___closed__2 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewrittenOf___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewrittenOf___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewrittenOf___closed__3;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewrittenOf___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "the step did not record the literal it rewrote"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewrittenOf___closed__4 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewrittenOf___closed__4_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewrittenOf___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewrittenOf___closed__5;
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewrittenOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewrittenOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "the premise has no literal "};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith___closed__0 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith___closed__1;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith___closed__2 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith___closed__2_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith___closed__2_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith___closed__3 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith___closed__3_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "subst"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith___closed__4 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith___closed__4_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__9_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith___closed__5_value_aux_0),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith___closed__4_value),LEAN_SCALAR_PTR_LITERAL(149, 118, 254, 162, 44, 0, 123, 68)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith___closed__5 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith___closed__5_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clauseAbstracting_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clauseAbstracting_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clauseAbstracting___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Or"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clauseAbstracting___closed__0 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clauseAbstracting___closed__0_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clauseAbstracting___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clauseAbstracting___closed__0_value),LEAN_SCALAR_PTR_LITERAL(34, 237, 162, 225, 217, 98, 205, 196)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clauseAbstracting___closed__1 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clauseAbstracting___closed__1_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clauseAbstracting___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clauseAbstracting___closed__2 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clauseAbstracting___closed__2_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clauseAbstracting___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clauseAbstracting___closed__2_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clauseAbstracting___closed__3 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clauseAbstracting___closed__3_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clauseAbstracting(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clauseAbstracting___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clausePartsOf_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "a clause of "};
static const lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clausePartsOf_spec__0___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clausePartsOf_spec__0___redArg___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clausePartsOf_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clausePartsOf_spec__0___redArg___closed__1;
static const lean_string_object lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clausePartsOf_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = " literals is not one:"};
static const lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clausePartsOf_spec__0___redArg___closed__2 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clausePartsOf_spec__0___redArg___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clausePartsOf_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clausePartsOf_spec__0___redArg___closed__3;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clausePartsOf_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clausePartsOf_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clausePartsOf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clausePartsOf___closed__0 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clausePartsOf___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clausePartsOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clausePartsOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clausePartsOf_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clausePartsOf_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clauseRewritten(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clauseRewritten___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_demodulation___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_demodulation___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_demodulation___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_demodulation___lam__1___boxed(lean_object**);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Rewrite_demodulation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "demodulation should have two premises, got "};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_demodulation___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Rewrite_demodulation___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Rewrite_demodulation___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_demodulation___closed__1;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Rewrite_demodulation___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "demodulation should have two premises"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_demodulation___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Rewrite_demodulation___closed__2_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Rewrite_demodulation___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_demodulation___closed__3;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_demodulation(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_demodulation___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__2(uint32_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__3(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trans"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__4___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__4___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__4___boxed(lean_object**);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Ne"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__5___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__5___closed__0_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__5___closed__0_value),LEAN_SCALAR_PTR_LITERAL(161, 247, 70, 70, 118, 145, 235, 92)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__5___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__5___closed__1_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__5___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__5___closed__2_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__5___closed__2_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__5___closed__3 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__5___closed__3_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Classical"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__5___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__5___closed__4_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__5___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "byCases"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__5___closed__5 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__5___closed__5_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__5___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__5___closed__4_value),LEAN_SCALAR_PTR_LITERAL(40, 236, 220, 79, 38, 141, 161, 150)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__5___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__5___closed__6_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__5___closed__5_value),LEAN_SCALAR_PTR_LITERAL(240, 75, 32, 165, 126, 243, 120, 233)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__5___closed__6 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__5___closed__6_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__5___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__6___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__7___boxed(lean_object**);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "superposition should have two premises, got "};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___closed__1;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "superposition should have two premises"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___closed__2_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___closed__3;
static const lean_closure_object lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___closed__4_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = "superposition did not record which literal is the equation"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___closed__5 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___closed__5_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___closed__6;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_ctorIdx(lean_object* v_x_1_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
else
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_ctorIdx___boxed(lean_object* v_x_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_ctorIdx(v_x_4_);
lean_dec_ref(v_x_4_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_ctorElim___redArg(lean_object* v_t_6_, lean_object* v_k_7_){
_start:
{
if (lean_obj_tag(v_t_6_) == 0)
{
lean_object* v_name_8_; lean_object* v_head_9_; lean_object* v_args_10_; lean_object* v___x_11_; 
v_name_8_ = lean_ctor_get(v_t_6_, 0);
lean_inc_ref(v_name_8_);
v_head_9_ = lean_ctor_get(v_t_6_, 1);
lean_inc(v_head_9_);
v_args_10_ = lean_ctor_get(v_t_6_, 2);
lean_inc_ref(v_args_10_);
lean_dec_ref_known(v_t_6_, 3);
v___x_11_ = lean_apply_3(v_k_7_, v_name_8_, v_head_9_, v_args_10_);
return v___x_11_;
}
else
{
lean_object* v_e_12_; lean_object* v___x_13_; 
v_e_12_ = lean_ctor_get(v_t_6_, 0);
lean_inc_ref(v_e_12_);
lean_dec_ref_known(v_t_6_, 1);
v___x_13_ = lean_apply_1(v_k_7_, v_e_12_);
return v___x_13_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_ctorElim(lean_object* v_motive__1_14_, lean_object* v_ctorIdx_15_, lean_object* v_t_16_, lean_object* v_h_17_, lean_object* v_k_18_){
_start:
{
lean_object* v___x_19_; 
v___x_19_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_ctorElim___redArg(v_t_16_, v_k_18_);
return v___x_19_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_ctorElim___boxed(lean_object* v_motive__1_20_, lean_object* v_ctorIdx_21_, lean_object* v_t_22_, lean_object* v_h_23_, lean_object* v_k_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_ctorElim(v_motive__1_20_, v_ctorIdx_21_, v_t_22_, v_h_23_, v_k_24_);
lean_dec(v_ctorIdx_21_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_app_elim___redArg(lean_object* v_t_26_, lean_object* v_app_27_){
_start:
{
lean_object* v___x_28_; 
v___x_28_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_ctorElim___redArg(v_t_26_, v_app_27_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_app_elim(lean_object* v_motive__1_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_app_32_){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_ctorElim___redArg(v_t_30_, v_app_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_leaf_elim___redArg(lean_object* v_t_34_, lean_object* v_leaf_35_){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_ctorElim___redArg(v_t_34_, v_leaf_35_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_leaf_elim(lean_object* v_motive__1_37_, lean_object* v_t_38_, lean_object* v_h_39_, lean_object* v_leaf_40_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_ctorElim___redArg(v_t_38_, v_leaf_40_);
return v___x_41_;
}
}
LEAN_EXPORT uint8_t lp_vampireReplay_Vampire_Reconstruct_Rewrite_instBEqTree_beq(lean_object* v_x_42_, lean_object* v_x_43_){
_start:
{
if (lean_obj_tag(v_x_42_) == 0)
{
if (lean_obj_tag(v_x_43_) == 0)
{
lean_object* v_name_44_; lean_object* v_head_45_; lean_object* v_args_46_; lean_object* v_name_47_; lean_object* v_head_48_; lean_object* v_args_49_; uint8_t v___x_50_; 
v_name_44_ = lean_ctor_get(v_x_42_, 0);
v_head_45_ = lean_ctor_get(v_x_42_, 1);
v_args_46_ = lean_ctor_get(v_x_42_, 2);
v_name_47_ = lean_ctor_get(v_x_43_, 0);
v_head_48_ = lean_ctor_get(v_x_43_, 1);
v_args_49_ = lean_ctor_get(v_x_43_, 2);
v___x_50_ = lean_string_dec_eq(v_name_44_, v_name_47_);
if (v___x_50_ == 0)
{
return v___x_50_;
}
else
{
uint8_t v___x_51_; 
v___x_51_ = l_Option_instBEq_beq___at___00Lean_Meta_Grind_Arith_Linear_propagateIneq_spec__0(v_head_45_, v_head_48_);
if (v___x_51_ == 0)
{
return v___x_51_;
}
else
{
lean_object* v___x_52_; lean_object* v___x_53_; uint8_t v___x_54_; 
v___x_52_ = lean_array_get_size(v_args_46_);
v___x_53_ = lean_array_get_size(v_args_49_);
v___x_54_ = lean_nat_dec_eq(v___x_52_, v___x_53_);
if (v___x_54_ == 0)
{
return v___x_54_;
}
else
{
uint8_t v___x_55_; 
v___x_55_ = lp_vampireReplay_Array_isEqvAux___at___00Vampire_Reconstruct_Rewrite_instBEqTree_beq_spec__0___redArg(v_args_46_, v_args_49_, v___x_52_);
return v___x_55_;
}
}
}
}
else
{
uint8_t v___x_56_; 
v___x_56_ = 0;
return v___x_56_;
}
}
else
{
if (lean_obj_tag(v_x_43_) == 1)
{
lean_object* v_e_57_; lean_object* v_e_58_; uint8_t v___x_59_; 
v_e_57_ = lean_ctor_get(v_x_42_, 0);
v_e_58_ = lean_ctor_get(v_x_43_, 0);
v___x_59_ = lean_expr_eqv(v_e_57_, v_e_58_);
return v___x_59_;
}
else
{
uint8_t v___x_60_; 
v___x_60_ = 0;
return v___x_60_;
}
}
}
}
LEAN_EXPORT uint8_t lp_vampireReplay_Array_isEqvAux___at___00Vampire_Reconstruct_Rewrite_instBEqTree_beq_spec__0___redArg(lean_object* v_xs_61_, lean_object* v_ys_62_, lean_object* v_x_63_){
_start:
{
lean_object* v_zero_64_; uint8_t v_isZero_65_; 
v_zero_64_ = lean_unsigned_to_nat(0u);
v_isZero_65_ = lean_nat_dec_eq(v_x_63_, v_zero_64_);
if (v_isZero_65_ == 1)
{
lean_dec(v_x_63_);
return v_isZero_65_;
}
else
{
lean_object* v_one_66_; lean_object* v_n_67_; lean_object* v___x_68_; lean_object* v___x_69_; uint8_t v___x_70_; 
v_one_66_ = lean_unsigned_to_nat(1u);
v_n_67_ = lean_nat_sub(v_x_63_, v_one_66_);
lean_dec(v_x_63_);
v___x_68_ = lean_array_fget_borrowed(v_xs_61_, v_n_67_);
v___x_69_ = lean_array_fget_borrowed(v_ys_62_, v_n_67_);
v___x_70_ = lp_vampireReplay_Vampire_Reconstruct_Rewrite_instBEqTree_beq(v___x_68_, v___x_69_);
if (v___x_70_ == 0)
{
lean_dec(v_n_67_);
return v___x_70_;
}
else
{
v_x_63_ = v_n_67_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Array_isEqvAux___at___00Vampire_Reconstruct_Rewrite_instBEqTree_beq_spec__0___redArg___boxed(lean_object* v_xs_72_, lean_object* v_ys_73_, lean_object* v_x_74_){
_start:
{
uint8_t v_res_75_; lean_object* v_r_76_; 
v_res_75_ = lp_vampireReplay_Array_isEqvAux___at___00Vampire_Reconstruct_Rewrite_instBEqTree_beq_spec__0___redArg(v_xs_72_, v_ys_73_, v_x_74_);
lean_dec_ref(v_ys_73_);
lean_dec_ref(v_xs_72_);
v_r_76_ = lean_box(v_res_75_);
return v_r_76_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_instBEqTree_beq___boxed(lean_object* v_x_77_, lean_object* v_x_78_){
_start:
{
uint8_t v_res_79_; lean_object* v_r_80_; 
v_res_79_ = lp_vampireReplay_Vampire_Reconstruct_Rewrite_instBEqTree_beq(v_x_77_, v_x_78_);
lean_dec_ref(v_x_78_);
lean_dec_ref(v_x_77_);
v_r_80_ = lean_box(v_res_79_);
return v_r_80_;
}
}
LEAN_EXPORT uint8_t lp_vampireReplay_Array_isEqvAux___at___00Vampire_Reconstruct_Rewrite_instBEqTree_beq_spec__0(lean_object* v_xs_81_, lean_object* v_ys_82_, lean_object* v_hsz_83_, lean_object* v_x_84_, lean_object* v_x_85_){
_start:
{
uint8_t v___x_86_; 
v___x_86_ = lp_vampireReplay_Array_isEqvAux___at___00Vampire_Reconstruct_Rewrite_instBEqTree_beq_spec__0___redArg(v_xs_81_, v_ys_82_, v_x_84_);
return v___x_86_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Array_isEqvAux___at___00Vampire_Reconstruct_Rewrite_instBEqTree_beq_spec__0___boxed(lean_object* v_xs_87_, lean_object* v_ys_88_, lean_object* v_hsz_89_, lean_object* v_x_90_, lean_object* v_x_91_){
_start:
{
uint8_t v_res_92_; lean_object* v_r_93_; 
v_res_92_ = lp_vampireReplay_Array_isEqvAux___at___00Vampire_Reconstruct_Rewrite_instBEqTree_beq_spec__0(v_xs_87_, v_ys_88_, v_hsz_89_, v_x_90_, v_x_91_);
lean_dec_ref(v_ys_88_);
lean_dec_ref(v_xs_87_);
v_r_93_ = lean_box(v_res_92_);
return v_r_93_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__1(void){
_start:
{
lean_object* v___x_106_; lean_object* v___x_107_; 
v___x_106_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__0));
v___x_107_ = l_Lean_stringToMessageData(v___x_106_);
return v___x_107_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__3(void){
_start:
{
lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_109_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__2));
v___x_110_ = l_Lean_stringToMessageData(v___x_109_);
return v___x_110_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__5(void){
_start:
{
lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_112_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__4));
v___x_113_ = l_Lean_stringToMessageData(v___x_112_);
return v___x_113_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__6(void){
_start:
{
lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_114_ = lean_box(0);
v___x_115_ = lean_unsigned_to_nat(16u);
v___x_116_ = lean_mk_array(v___x_115_, v___x_114_);
return v___x_116_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__7(void){
_start:
{
lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; 
v___x_117_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__6, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__6_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__6);
v___x_118_ = lean_unsigned_to_nat(0u);
v___x_119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_119_, 0, v___x_118_);
lean_ctor_set(v___x_119_, 1, v___x_117_);
return v___x_119_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf(lean_object* v_vars_120_, lean_object* v_bindings_121_, lean_object* v_t_122_, lean_object* v_a_123_, lean_object* v_a_124_, lean_object* v_a_125_, lean_object* v_a_126_, lean_object* v_a_127_, lean_object* v_a_128_){
_start:
{
uint8_t v___x_130_; 
v___x_130_ = lp_vampireReplay_Vampire_Term_isVar(v_t_122_);
if (v___x_130_ == 0)
{
lean_object* v___x_131_; 
v___x_131_ = lp_vampireReplay_Vampire_Term_symbol_x3f(v_t_122_);
if (lean_obj_tag(v___x_131_) == 1)
{
lean_object* v_val_132_; lean_object* v___x_134_; uint8_t v_isShared_135_; uint8_t v_isSharedCheck_178_; 
v_val_132_ = lean_ctor_get(v___x_131_, 0);
v_isSharedCheck_178_ = !lean_is_exclusive(v___x_131_);
if (v_isSharedCheck_178_ == 0)
{
v___x_134_ = v___x_131_;
v_isShared_135_ = v_isSharedCheck_178_;
goto v_resetjp_133_;
}
else
{
lean_inc(v_val_132_);
lean_dec(v___x_131_);
v___x_134_ = lean_box(0);
v_isShared_135_ = v_isSharedCheck_178_;
goto v_resetjp_133_;
}
v_resetjp_133_:
{
lean_object* v_name_136_; lean_object* v_a_138_; lean_object* v___x_160_; 
v_name_136_ = lean_ctor_get(v_val_132_, 0);
lean_inc_ref_n(v_name_136_, 2);
lean_dec(v_val_132_);
v___x_160_ = lp_vampireReplay_Vampire_Reconstruct_symbolExpr(v_name_136_, v_a_123_, v_a_124_, v_a_125_, v_a_126_, v_a_127_, v_a_128_);
if (lean_obj_tag(v___x_160_) == 0)
{
lean_object* v_a_161_; lean_object* v___x_163_; 
v_a_161_ = lean_ctor_get(v___x_160_, 0);
lean_inc(v_a_161_);
lean_dec_ref_known(v___x_160_, 1);
if (v_isShared_135_ == 0)
{
lean_ctor_set(v___x_134_, 0, v_a_161_);
v___x_163_ = v___x_134_;
goto v_reusejp_162_;
}
else
{
lean_object* v_reuseFailAlloc_164_; 
v_reuseFailAlloc_164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_164_, 0, v_a_161_);
v___x_163_ = v_reuseFailAlloc_164_;
goto v_reusejp_162_;
}
v_reusejp_162_:
{
v_a_138_ = v___x_163_;
goto v___jp_137_;
}
}
else
{
lean_object* v_a_165_; lean_object* v___x_167_; uint8_t v_isShared_168_; uint8_t v_isSharedCheck_177_; 
lean_del_object(v___x_134_);
v_a_165_ = lean_ctor_get(v___x_160_, 0);
v_isSharedCheck_177_ = !lean_is_exclusive(v___x_160_);
if (v_isSharedCheck_177_ == 0)
{
v___x_167_ = v___x_160_;
v_isShared_168_ = v_isSharedCheck_177_;
goto v_resetjp_166_;
}
else
{
lean_inc(v_a_165_);
lean_dec(v___x_160_);
v___x_167_ = lean_box(0);
v_isShared_168_ = v_isSharedCheck_177_;
goto v_resetjp_166_;
}
v_resetjp_166_:
{
uint8_t v___y_170_; uint8_t v___x_175_; 
v___x_175_ = l_Lean_Exception_isInterrupt(v_a_165_);
if (v___x_175_ == 0)
{
uint8_t v___x_176_; 
lean_inc(v_a_165_);
v___x_176_ = l_Lean_Exception_isRuntime(v_a_165_);
v___y_170_ = v___x_176_;
goto v___jp_169_;
}
else
{
v___y_170_ = v___x_175_;
goto v___jp_169_;
}
v___jp_169_:
{
if (v___y_170_ == 0)
{
lean_object* v___x_171_; 
lean_del_object(v___x_167_);
lean_dec(v_a_165_);
v___x_171_ = lean_box(0);
v_a_138_ = v___x_171_;
goto v___jp_137_;
}
else
{
lean_object* v___x_173_; 
lean_dec_ref(v_name_136_);
lean_dec_ref(v_t_122_);
if (v_isShared_168_ == 0)
{
v___x_173_ = v___x_167_;
goto v_reusejp_172_;
}
else
{
lean_object* v_reuseFailAlloc_174_; 
v_reuseFailAlloc_174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_174_, 0, v_a_165_);
v___x_173_ = v_reuseFailAlloc_174_;
goto v_reusejp_172_;
}
v_reusejp_172_:
{
return v___x_173_;
}
}
}
}
}
v___jp_137_:
{
lean_object* v___x_139_; size_t v_sz_140_; size_t v___x_141_; lean_object* v___x_142_; 
v___x_139_ = lp_vampireReplay_Vampire_Term_args(v_t_122_);
v_sz_140_ = lean_array_size(v___x_139_);
v___x_141_ = ((size_t)0ULL);
v___x_142_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf_spec__0(v_vars_120_, v_bindings_121_, v_sz_140_, v___x_141_, v___x_139_, v_a_123_, v_a_124_, v_a_125_, v_a_126_, v_a_127_, v_a_128_);
if (lean_obj_tag(v___x_142_) == 0)
{
lean_object* v_a_143_; lean_object* v___x_145_; uint8_t v_isShared_146_; uint8_t v_isSharedCheck_151_; 
v_a_143_ = lean_ctor_get(v___x_142_, 0);
v_isSharedCheck_151_ = !lean_is_exclusive(v___x_142_);
if (v_isSharedCheck_151_ == 0)
{
v___x_145_ = v___x_142_;
v_isShared_146_ = v_isSharedCheck_151_;
goto v_resetjp_144_;
}
else
{
lean_inc(v_a_143_);
lean_dec(v___x_142_);
v___x_145_ = lean_box(0);
v_isShared_146_ = v_isSharedCheck_151_;
goto v_resetjp_144_;
}
v_resetjp_144_:
{
lean_object* v___x_147_; lean_object* v___x_149_; 
v___x_147_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_147_, 0, v_name_136_);
lean_ctor_set(v___x_147_, 1, v_a_138_);
lean_ctor_set(v___x_147_, 2, v_a_143_);
if (v_isShared_146_ == 0)
{
lean_ctor_set(v___x_145_, 0, v___x_147_);
v___x_149_ = v___x_145_;
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
else
{
lean_object* v_a_152_; lean_object* v___x_154_; uint8_t v_isShared_155_; uint8_t v_isSharedCheck_159_; 
lean_dec(v_a_138_);
lean_dec_ref(v_name_136_);
v_a_152_ = lean_ctor_get(v___x_142_, 0);
v_isSharedCheck_159_ = !lean_is_exclusive(v___x_142_);
if (v_isSharedCheck_159_ == 0)
{
v___x_154_ = v___x_142_;
v_isShared_155_ = v_isSharedCheck_159_;
goto v_resetjp_153_;
}
else
{
lean_inc(v_a_152_);
lean_dec(v___x_142_);
v___x_154_ = lean_box(0);
v_isShared_155_ = v_isSharedCheck_159_;
goto v_resetjp_153_;
}
v_resetjp_153_:
{
lean_object* v___x_157_; 
if (v_isShared_155_ == 0)
{
v___x_157_ = v___x_154_;
goto v_reusejp_156_;
}
else
{
lean_object* v_reuseFailAlloc_158_; 
v_reuseFailAlloc_158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_158_, 0, v_a_152_);
v___x_157_ = v_reuseFailAlloc_158_;
goto v_reusejp_156_;
}
v_reusejp_156_:
{
return v___x_157_;
}
}
}
}
}
}
else
{
lean_object* v___x_179_; uint32_t v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; 
lean_dec(v___x_131_);
v___x_179_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__1, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__1_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__1);
v___x_180_ = lp_vampireReplay_Vampire_Term_functor(v_t_122_);
lean_dec_ref(v_t_122_);
v___x_181_ = lean_uint32_to_nat(v___x_180_);
v___x_182_ = l_Nat_reprFast(v___x_181_);
v___x_183_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_183_, 0, v___x_182_);
v___x_184_ = l_Lean_MessageData_ofFormat(v___x_183_);
v___x_185_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_185_, 0, v___x_179_);
lean_ctor_set(v___x_185_, 1, v___x_184_);
v___x_186_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_185_, v_a_125_, v_a_126_, v_a_127_, v_a_128_);
return v___x_186_;
}
}
else
{
uint32_t v___x_187_; lean_object* v___x_188_; 
v___x_187_ = lp_vampireReplay_Vampire_Term_var(v_t_122_);
lean_dec_ref(v_t_122_);
v___x_188_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1___redArg(v_bindings_121_, v___x_187_);
if (lean_obj_tag(v___x_188_) == 0)
{
lean_object* v___x_189_; 
v___x_189_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1___redArg(v_vars_120_, v___x_187_);
if (lean_obj_tag(v___x_189_) == 1)
{
lean_object* v_val_190_; lean_object* v___x_192_; uint8_t v_isShared_193_; uint8_t v_isSharedCheck_198_; 
v_val_190_ = lean_ctor_get(v___x_189_, 0);
v_isSharedCheck_198_ = !lean_is_exclusive(v___x_189_);
if (v_isSharedCheck_198_ == 0)
{
v___x_192_ = v___x_189_;
v_isShared_193_ = v_isSharedCheck_198_;
goto v_resetjp_191_;
}
else
{
lean_inc(v_val_190_);
lean_dec(v___x_189_);
v___x_192_ = lean_box(0);
v_isShared_193_ = v_isSharedCheck_198_;
goto v_resetjp_191_;
}
v_resetjp_191_:
{
lean_object* v___x_195_; 
if (v_isShared_193_ == 0)
{
v___x_195_ = v___x_192_;
goto v_reusejp_194_;
}
else
{
lean_object* v_reuseFailAlloc_197_; 
v_reuseFailAlloc_197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_197_, 0, v_val_190_);
v___x_195_ = v_reuseFailAlloc_197_;
goto v_reusejp_194_;
}
v_reusejp_194_:
{
lean_object* v___x_196_; 
v___x_196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_196_, 0, v___x_195_);
return v___x_196_;
}
}
}
else
{
lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; 
lean_dec(v___x_189_);
v___x_199_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__3, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__3_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__3);
v___x_200_ = lean_uint32_to_nat(v___x_187_);
v___x_201_ = l_Nat_reprFast(v___x_200_);
v___x_202_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_202_, 0, v___x_201_);
v___x_203_ = l_Lean_MessageData_ofFormat(v___x_202_);
v___x_204_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_204_, 0, v___x_199_);
lean_ctor_set(v___x_204_, 1, v___x_203_);
v___x_205_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__5, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__5_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__5);
v___x_206_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_206_, 0, v___x_204_);
lean_ctor_set(v___x_206_, 1, v___x_205_);
v___x_207_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_206_, v_a_125_, v_a_126_, v_a_127_, v_a_128_);
return v___x_207_;
}
}
else
{
lean_object* v_val_208_; lean_object* v___x_209_; 
v_val_208_ = lean_ctor_get(v___x_188_, 0);
lean_inc(v_val_208_);
lean_dec_ref_known(v___x_188_, 1);
v___x_209_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__7, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__7_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__7);
v_bindings_121_ = v___x_209_;
v_t_122_ = v_val_208_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf_spec__0(lean_object* v_vars_211_, lean_object* v_bindings_212_, size_t v_sz_213_, size_t v_i_214_, lean_object* v_bs_215_, lean_object* v___y_216_, lean_object* v___y_217_, lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_){
_start:
{
uint8_t v___x_223_; 
v___x_223_ = lean_usize_dec_lt(v_i_214_, v_sz_213_);
if (v___x_223_ == 0)
{
lean_object* v___x_224_; 
v___x_224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_224_, 0, v_bs_215_);
return v___x_224_;
}
else
{
lean_object* v_v_225_; lean_object* v___x_226_; 
v_v_225_ = lean_array_uget_borrowed(v_bs_215_, v_i_214_);
lean_inc(v_v_225_);
v___x_226_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf(v_vars_211_, v_bindings_212_, v_v_225_, v___y_216_, v___y_217_, v___y_218_, v___y_219_, v___y_220_, v___y_221_);
if (lean_obj_tag(v___x_226_) == 0)
{
lean_object* v_a_227_; lean_object* v___x_228_; lean_object* v_bs_x27_229_; size_t v___x_230_; size_t v___x_231_; lean_object* v___x_232_; 
v_a_227_ = lean_ctor_get(v___x_226_, 0);
lean_inc(v_a_227_);
lean_dec_ref_known(v___x_226_, 1);
v___x_228_ = lean_unsigned_to_nat(0u);
v_bs_x27_229_ = lean_array_uset(v_bs_215_, v_i_214_, v___x_228_);
v___x_230_ = ((size_t)1ULL);
v___x_231_ = lean_usize_add(v_i_214_, v___x_230_);
v___x_232_ = lean_array_uset(v_bs_x27_229_, v_i_214_, v_a_227_);
v_i_214_ = v___x_231_;
v_bs_215_ = v___x_232_;
goto _start;
}
else
{
lean_object* v_a_234_; lean_object* v___x_236_; uint8_t v_isShared_237_; uint8_t v_isSharedCheck_241_; 
lean_dec_ref(v_bs_215_);
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
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf_spec__0___boxed(lean_object* v_vars_242_, lean_object* v_bindings_243_, lean_object* v_sz_244_, lean_object* v_i_245_, lean_object* v_bs_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_, lean_object* v___y_251_, lean_object* v___y_252_, lean_object* v___y_253_){
_start:
{
size_t v_sz_boxed_254_; size_t v_i_boxed_255_; lean_object* v_res_256_; 
v_sz_boxed_254_ = lean_unbox_usize(v_sz_244_);
lean_dec(v_sz_244_);
v_i_boxed_255_ = lean_unbox_usize(v_i_245_);
lean_dec(v_i_245_);
v_res_256_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf_spec__0(v_vars_242_, v_bindings_243_, v_sz_boxed_254_, v_i_boxed_255_, v_bs_246_, v___y_247_, v___y_248_, v___y_249_, v___y_250_, v___y_251_, v___y_252_);
lean_dec(v___y_252_);
lean_dec_ref(v___y_251_);
lean_dec(v___y_250_);
lean_dec_ref(v___y_249_);
lean_dec(v___y_248_);
lean_dec_ref(v___y_247_);
lean_dec_ref(v_bindings_243_);
lean_dec_ref(v_vars_242_);
return v_res_256_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___boxed(lean_object* v_vars_257_, lean_object* v_bindings_258_, lean_object* v_t_259_, lean_object* v_a_260_, lean_object* v_a_261_, lean_object* v_a_262_, lean_object* v_a_263_, lean_object* v_a_264_, lean_object* v_a_265_, lean_object* v_a_266_){
_start:
{
lean_object* v_res_267_; 
v_res_267_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf(v_vars_257_, v_bindings_258_, v_t_259_, v_a_260_, v_a_261_, v_a_262_, v_a_263_, v_a_264_, v_a_265_);
lean_dec(v_a_265_);
lean_dec_ref(v_a_264_);
lean_dec(v_a_263_);
lean_dec_ref(v_a_262_);
lean_dec(v_a_261_);
lean_dec_ref(v_a_260_);
lean_dec_ref(v_bindings_258_);
lean_dec_ref(v_vars_257_);
return v_res_267_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_toExpr(lean_object* v_x_269_, lean_object* v_a_270_, lean_object* v_a_271_, lean_object* v_a_272_, lean_object* v_a_273_, lean_object* v_a_274_, lean_object* v_a_275_){
_start:
{
if (lean_obj_tag(v_x_269_) == 0)
{
lean_object* v_name_277_; lean_object* v_head_278_; lean_object* v_args_279_; size_t v_sz_280_; size_t v___x_281_; lean_object* v___x_282_; 
v_name_277_ = lean_ctor_get(v_x_269_, 0);
lean_inc_ref(v_name_277_);
v_head_278_ = lean_ctor_get(v_x_269_, 1);
lean_inc(v_head_278_);
v_args_279_ = lean_ctor_get(v_x_269_, 2);
lean_inc_ref(v_args_279_);
lean_dec_ref_known(v_x_269_, 3);
v_sz_280_ = lean_array_size(v_args_279_);
v___x_281_ = ((size_t)0ULL);
v___x_282_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_toExpr_spec__0(v_sz_280_, v___x_281_, v_args_279_, v_a_270_, v_a_271_, v_a_272_, v_a_273_, v_a_274_, v_a_275_);
if (lean_obj_tag(v___x_282_) == 0)
{
lean_object* v_a_283_; lean_object* v___x_284_; 
v_a_283_ = lean_ctor_get(v___x_282_, 0);
lean_inc(v_a_283_);
lean_dec_ref_known(v___x_282_, 1);
lean_inc_ref(v_name_277_);
v___x_284_ = lp_vampireReplay_Vampire_Reconstruct_interpreted(v_name_277_, v_a_283_, v_a_270_, v_a_271_, v_a_272_, v_a_273_, v_a_274_, v_a_275_);
if (lean_obj_tag(v___x_284_) == 0)
{
lean_object* v_a_285_; lean_object* v___x_287_; uint8_t v_isShared_288_; uint8_t v_isSharedCheck_300_; 
v_a_285_ = lean_ctor_get(v___x_284_, 0);
v_isSharedCheck_300_ = !lean_is_exclusive(v___x_284_);
if (v_isSharedCheck_300_ == 0)
{
v___x_287_ = v___x_284_;
v_isShared_288_ = v_isSharedCheck_300_;
goto v_resetjp_286_;
}
else
{
lean_inc(v_a_285_);
lean_dec(v___x_284_);
v___x_287_ = lean_box(0);
v_isShared_288_ = v_isSharedCheck_300_;
goto v_resetjp_286_;
}
v_resetjp_286_:
{
if (lean_obj_tag(v_a_285_) == 1)
{
lean_object* v_val_289_; lean_object* v___x_291_; 
lean_dec(v_a_283_);
lean_dec(v_head_278_);
lean_dec_ref(v_name_277_);
v_val_289_ = lean_ctor_get(v_a_285_, 0);
lean_inc(v_val_289_);
lean_dec_ref_known(v_a_285_, 1);
if (v_isShared_288_ == 0)
{
lean_ctor_set(v___x_287_, 0, v_val_289_);
v___x_291_ = v___x_287_;
goto v_reusejp_290_;
}
else
{
lean_object* v_reuseFailAlloc_292_; 
v_reuseFailAlloc_292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_292_, 0, v_val_289_);
v___x_291_ = v_reuseFailAlloc_292_;
goto v_reusejp_290_;
}
v_reusejp_290_:
{
return v___x_291_;
}
}
else
{
lean_dec(v_a_285_);
if (lean_obj_tag(v_head_278_) == 1)
{
lean_object* v_val_293_; lean_object* v___x_294_; lean_object* v___x_296_; 
lean_dec_ref(v_name_277_);
v_val_293_ = lean_ctor_get(v_head_278_, 0);
lean_inc(v_val_293_);
lean_dec_ref_known(v_head_278_, 1);
v___x_294_ = l_Lean_mkAppN(v_val_293_, v_a_283_);
lean_dec(v_a_283_);
if (v_isShared_288_ == 0)
{
lean_ctor_set(v___x_287_, 0, v___x_294_);
v___x_296_ = v___x_287_;
goto v_reusejp_295_;
}
else
{
lean_object* v_reuseFailAlloc_297_; 
v_reuseFailAlloc_297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_297_, 0, v___x_294_);
v___x_296_ = v_reuseFailAlloc_297_;
goto v_reusejp_295_;
}
v_reusejp_295_:
{
return v___x_296_;
}
}
else
{
lean_object* v___x_298_; lean_object* v___x_299_; 
lean_del_object(v___x_287_);
lean_dec(v_a_283_);
lean_dec(v_head_278_);
v___x_298_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_toExpr___closed__0));
v___x_299_ = lp_vampireReplay_Vampire_Reconstruct_throwIntroduced___redArg(v___x_298_, v_name_277_, v_a_270_, v_a_271_, v_a_272_, v_a_273_, v_a_274_, v_a_275_);
return v___x_299_;
}
}
}
}
else
{
lean_object* v_a_301_; lean_object* v___x_303_; uint8_t v_isShared_304_; uint8_t v_isSharedCheck_308_; 
lean_dec(v_a_283_);
lean_dec(v_head_278_);
lean_dec_ref(v_name_277_);
v_a_301_ = lean_ctor_get(v___x_284_, 0);
v_isSharedCheck_308_ = !lean_is_exclusive(v___x_284_);
if (v_isSharedCheck_308_ == 0)
{
v___x_303_ = v___x_284_;
v_isShared_304_ = v_isSharedCheck_308_;
goto v_resetjp_302_;
}
else
{
lean_inc(v_a_301_);
lean_dec(v___x_284_);
v___x_303_ = lean_box(0);
v_isShared_304_ = v_isSharedCheck_308_;
goto v_resetjp_302_;
}
v_resetjp_302_:
{
lean_object* v___x_306_; 
if (v_isShared_304_ == 0)
{
v___x_306_ = v___x_303_;
goto v_reusejp_305_;
}
else
{
lean_object* v_reuseFailAlloc_307_; 
v_reuseFailAlloc_307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_307_, 0, v_a_301_);
v___x_306_ = v_reuseFailAlloc_307_;
goto v_reusejp_305_;
}
v_reusejp_305_:
{
return v___x_306_;
}
}
}
}
else
{
lean_object* v_a_309_; lean_object* v___x_311_; uint8_t v_isShared_312_; uint8_t v_isSharedCheck_316_; 
lean_dec(v_head_278_);
lean_dec_ref(v_name_277_);
v_a_309_ = lean_ctor_get(v___x_282_, 0);
v_isSharedCheck_316_ = !lean_is_exclusive(v___x_282_);
if (v_isSharedCheck_316_ == 0)
{
v___x_311_ = v___x_282_;
v_isShared_312_ = v_isSharedCheck_316_;
goto v_resetjp_310_;
}
else
{
lean_inc(v_a_309_);
lean_dec(v___x_282_);
v___x_311_ = lean_box(0);
v_isShared_312_ = v_isSharedCheck_316_;
goto v_resetjp_310_;
}
v_resetjp_310_:
{
lean_object* v___x_314_; 
if (v_isShared_312_ == 0)
{
v___x_314_ = v___x_311_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_315_; 
v_reuseFailAlloc_315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_315_, 0, v_a_309_);
v___x_314_ = v_reuseFailAlloc_315_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
return v___x_314_;
}
}
}
}
else
{
lean_object* v_e_317_; lean_object* v___x_319_; uint8_t v_isShared_320_; uint8_t v_isSharedCheck_324_; 
v_e_317_ = lean_ctor_get(v_x_269_, 0);
v_isSharedCheck_324_ = !lean_is_exclusive(v_x_269_);
if (v_isSharedCheck_324_ == 0)
{
v___x_319_ = v_x_269_;
v_isShared_320_ = v_isSharedCheck_324_;
goto v_resetjp_318_;
}
else
{
lean_inc(v_e_317_);
lean_dec(v_x_269_);
v___x_319_ = lean_box(0);
v_isShared_320_ = v_isSharedCheck_324_;
goto v_resetjp_318_;
}
v_resetjp_318_:
{
lean_object* v___x_322_; 
if (v_isShared_320_ == 0)
{
lean_ctor_set_tag(v___x_319_, 0);
v___x_322_ = v___x_319_;
goto v_reusejp_321_;
}
else
{
lean_object* v_reuseFailAlloc_323_; 
v_reuseFailAlloc_323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_323_, 0, v_e_317_);
v___x_322_ = v_reuseFailAlloc_323_;
goto v_reusejp_321_;
}
v_reusejp_321_:
{
return v___x_322_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_toExpr_spec__0(size_t v_sz_325_, size_t v_i_326_, lean_object* v_bs_327_, lean_object* v___y_328_, lean_object* v___y_329_, lean_object* v___y_330_, lean_object* v___y_331_, lean_object* v___y_332_, lean_object* v___y_333_){
_start:
{
uint8_t v___x_335_; 
v___x_335_ = lean_usize_dec_lt(v_i_326_, v_sz_325_);
if (v___x_335_ == 0)
{
lean_object* v___x_336_; 
v___x_336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_336_, 0, v_bs_327_);
return v___x_336_;
}
else
{
lean_object* v_v_337_; lean_object* v___x_338_; 
v_v_337_ = lean_array_uget_borrowed(v_bs_327_, v_i_326_);
lean_inc(v_v_337_);
v___x_338_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_toExpr(v_v_337_, v___y_328_, v___y_329_, v___y_330_, v___y_331_, v___y_332_, v___y_333_);
if (lean_obj_tag(v___x_338_) == 0)
{
lean_object* v_a_339_; lean_object* v___x_340_; lean_object* v_bs_x27_341_; size_t v___x_342_; size_t v___x_343_; lean_object* v___x_344_; 
v_a_339_ = lean_ctor_get(v___x_338_, 0);
lean_inc(v_a_339_);
lean_dec_ref_known(v___x_338_, 1);
v___x_340_ = lean_unsigned_to_nat(0u);
v_bs_x27_341_ = lean_array_uset(v_bs_327_, v_i_326_, v___x_340_);
v___x_342_ = ((size_t)1ULL);
v___x_343_ = lean_usize_add(v_i_326_, v___x_342_);
v___x_344_ = lean_array_uset(v_bs_x27_341_, v_i_326_, v_a_339_);
v_i_326_ = v___x_343_;
v_bs_327_ = v___x_344_;
goto _start;
}
else
{
lean_object* v_a_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_353_; 
lean_dec_ref(v_bs_327_);
v_a_346_ = lean_ctor_get(v___x_338_, 0);
v_isSharedCheck_353_ = !lean_is_exclusive(v___x_338_);
if (v_isSharedCheck_353_ == 0)
{
v___x_348_ = v___x_338_;
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_a_346_);
lean_dec(v___x_338_);
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
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_toExpr_spec__0___boxed(lean_object* v_sz_354_, lean_object* v_i_355_, lean_object* v_bs_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_, lean_object* v___y_362_, lean_object* v___y_363_){
_start:
{
size_t v_sz_boxed_364_; size_t v_i_boxed_365_; lean_object* v_res_366_; 
v_sz_boxed_364_ = lean_unbox_usize(v_sz_354_);
lean_dec(v_sz_354_);
v_i_boxed_365_ = lean_unbox_usize(v_i_355_);
lean_dec(v_i_355_);
v_res_366_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_toExpr_spec__0(v_sz_boxed_364_, v_i_boxed_365_, v_bs_356_, v___y_357_, v___y_358_, v___y_359_, v___y_360_, v___y_361_, v___y_362_);
lean_dec(v___y_362_);
lean_dec_ref(v___y_361_);
lean_dec(v___y_360_);
lean_dec_ref(v___y_359_);
lean_dec(v___y_358_);
lean_dec_ref(v___y_357_);
return v_res_366_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_toExpr___boxed(lean_object* v_x_367_, lean_object* v_a_368_, lean_object* v_a_369_, lean_object* v_a_370_, lean_object* v_a_371_, lean_object* v_a_372_, lean_object* v_a_373_, lean_object* v_a_374_){
_start:
{
lean_object* v_res_375_; 
v_res_375_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_toExpr(v_x_367_, v_a_368_, v_a_369_, v_a_370_, v_a_371_, v_a_372_, v_a_373_);
lean_dec(v_a_373_);
lean_dec_ref(v_a_372_);
lean_dec(v_a_371_);
lean_dec_ref(v_a_370_);
lean_dec(v_a_369_);
lean_dec_ref(v_a_368_);
return v_res_375_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_replacing(lean_object* v_target_376_, lean_object* v_x_377_, lean_object* v_x_378_){
_start:
{
if (lean_obj_tag(v_x_378_) == 0)
{
lean_object* v_name_379_; lean_object* v_head_380_; lean_object* v_args_381_; uint8_t v___x_382_; lean_object* v___x_384_; uint8_t v_isShared_385_; uint8_t v_isSharedCheck_393_; 
v_name_379_ = lean_ctor_get(v_x_378_, 0);
lean_inc_ref(v_name_379_);
v_head_380_ = lean_ctor_get(v_x_378_, 1);
lean_inc(v_head_380_);
v_args_381_ = lean_ctor_get(v_x_378_, 2);
lean_inc_ref(v_args_381_);
v___x_382_ = lp_vampireReplay_Vampire_Reconstruct_Rewrite_instBEqTree_beq(v_x_378_, v_target_376_);
v_isSharedCheck_393_ = !lean_is_exclusive(v_x_378_);
if (v_isSharedCheck_393_ == 0)
{
lean_object* v_unused_394_; lean_object* v_unused_395_; lean_object* v_unused_396_; 
v_unused_394_ = lean_ctor_get(v_x_378_, 2);
lean_dec(v_unused_394_);
v_unused_395_ = lean_ctor_get(v_x_378_, 1);
lean_dec(v_unused_395_);
v_unused_396_ = lean_ctor_get(v_x_378_, 0);
lean_dec(v_unused_396_);
v___x_384_ = v_x_378_;
v_isShared_385_ = v_isSharedCheck_393_;
goto v_resetjp_383_;
}
else
{
lean_dec(v_x_378_);
v___x_384_ = lean_box(0);
v_isShared_385_ = v_isSharedCheck_393_;
goto v_resetjp_383_;
}
v_resetjp_383_:
{
if (v___x_382_ == 0)
{
size_t v_sz_386_; size_t v___x_387_; lean_object* v___x_388_; lean_object* v___x_390_; 
v_sz_386_ = lean_array_size(v_args_381_);
v___x_387_ = ((size_t)0ULL);
v___x_388_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_replacing_spec__0(v_target_376_, v_x_377_, v_sz_386_, v___x_387_, v_args_381_);
if (v_isShared_385_ == 0)
{
lean_ctor_set(v___x_384_, 2, v___x_388_);
v___x_390_ = v___x_384_;
goto v_reusejp_389_;
}
else
{
lean_object* v_reuseFailAlloc_391_; 
v_reuseFailAlloc_391_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_391_, 0, v_name_379_);
lean_ctor_set(v_reuseFailAlloc_391_, 1, v_head_380_);
lean_ctor_set(v_reuseFailAlloc_391_, 2, v___x_388_);
v___x_390_ = v_reuseFailAlloc_391_;
goto v_reusejp_389_;
}
v_reusejp_389_:
{
return v___x_390_;
}
}
else
{
lean_object* v___x_392_; 
lean_del_object(v___x_384_);
lean_dec_ref(v_args_381_);
lean_dec(v_head_380_);
lean_dec_ref(v_name_379_);
v___x_392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_392_, 0, v_x_377_);
return v___x_392_;
}
}
}
else
{
uint8_t v___x_397_; 
v___x_397_ = lp_vampireReplay_Vampire_Reconstruct_Rewrite_instBEqTree_beq(v_x_378_, v_target_376_);
if (v___x_397_ == 0)
{
lean_dec_ref(v_x_377_);
return v_x_378_;
}
else
{
lean_object* v___x_399_; uint8_t v_isShared_400_; uint8_t v_isSharedCheck_404_; 
v_isSharedCheck_404_ = !lean_is_exclusive(v_x_378_);
if (v_isSharedCheck_404_ == 0)
{
lean_object* v_unused_405_; 
v_unused_405_ = lean_ctor_get(v_x_378_, 0);
lean_dec(v_unused_405_);
v___x_399_ = v_x_378_;
v_isShared_400_ = v_isSharedCheck_404_;
goto v_resetjp_398_;
}
else
{
lean_dec(v_x_378_);
v___x_399_ = lean_box(0);
v_isShared_400_ = v_isSharedCheck_404_;
goto v_resetjp_398_;
}
v_resetjp_398_:
{
lean_object* v___x_402_; 
if (v_isShared_400_ == 0)
{
lean_ctor_set(v___x_399_, 0, v_x_377_);
v___x_402_ = v___x_399_;
goto v_reusejp_401_;
}
else
{
lean_object* v_reuseFailAlloc_403_; 
v_reuseFailAlloc_403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_403_, 0, v_x_377_);
v___x_402_ = v_reuseFailAlloc_403_;
goto v_reusejp_401_;
}
v_reusejp_401_:
{
return v___x_402_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_replacing_spec__0(lean_object* v_target_406_, lean_object* v_x_407_, size_t v_sz_408_, size_t v_i_409_, lean_object* v_bs_410_){
_start:
{
uint8_t v___x_411_; 
v___x_411_ = lean_usize_dec_lt(v_i_409_, v_sz_408_);
if (v___x_411_ == 0)
{
lean_dec_ref(v_x_407_);
return v_bs_410_;
}
else
{
lean_object* v_v_412_; lean_object* v___x_413_; lean_object* v_bs_x27_414_; lean_object* v___x_415_; size_t v___x_416_; size_t v___x_417_; lean_object* v___x_418_; 
v_v_412_ = lean_array_uget(v_bs_410_, v_i_409_);
v___x_413_ = lean_unsigned_to_nat(0u);
v_bs_x27_414_ = lean_array_uset(v_bs_410_, v_i_409_, v___x_413_);
lean_inc_ref(v_x_407_);
v___x_415_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_replacing(v_target_406_, v_x_407_, v_v_412_);
v___x_416_ = ((size_t)1ULL);
v___x_417_ = lean_usize_add(v_i_409_, v___x_416_);
v___x_418_ = lean_array_uset(v_bs_x27_414_, v_i_409_, v___x_415_);
v_i_409_ = v___x_417_;
v_bs_410_ = v___x_418_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_replacing_spec__0___boxed(lean_object* v_target_420_, lean_object* v_x_421_, lean_object* v_sz_422_, lean_object* v_i_423_, lean_object* v_bs_424_){
_start:
{
size_t v_sz_boxed_425_; size_t v_i_boxed_426_; lean_object* v_res_427_; 
v_sz_boxed_425_ = lean_unbox_usize(v_sz_422_);
lean_dec(v_sz_422_);
v_i_boxed_426_ = lean_unbox_usize(v_i_423_);
lean_dec(v_i_423_);
v_res_427_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_replacing_spec__0(v_target_420_, v_x_421_, v_sz_boxed_425_, v_i_boxed_426_, v_bs_424_);
lean_dec_ref(v_target_420_);
return v_res_427_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_replacing___boxed(lean_object* v_target_428_, lean_object* v_x_429_, lean_object* v_x_430_){
_start:
{
lean_object* v_res_431_; 
v_res_431_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_replacing(v_target_428_, v_x_429_, v_x_430_);
lean_dec_ref(v_target_428_);
return v_res_431_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt_spec__0(lean_object* v_vars_432_, lean_object* v_bindings_433_, lean_object* v_hole_434_, size_t v_sz_435_, size_t v_i_436_, lean_object* v_bs_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_, lean_object* v___y_443_){
_start:
{
uint8_t v___x_445_; 
v___x_445_ = lean_usize_dec_lt(v_i_436_, v_sz_435_);
if (v___x_445_ == 0)
{
lean_object* v___x_446_; 
lean_dec(v_hole_434_);
v___x_446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_446_, 0, v_bs_437_);
return v___x_446_;
}
else
{
lean_object* v_v_447_; lean_object* v___x_448_; 
v_v_447_ = lean_array_uget_borrowed(v_bs_437_, v_i_436_);
lean_inc(v_v_447_);
v___x_448_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf(v_vars_432_, v_bindings_433_, v_v_447_, v___y_438_, v___y_439_, v___y_440_, v___y_441_, v___y_442_, v___y_443_);
if (lean_obj_tag(v___x_448_) == 0)
{
lean_object* v_a_449_; lean_object* v___x_450_; lean_object* v_bs_x27_451_; lean_object* v___y_453_; 
v_a_449_ = lean_ctor_get(v___x_448_, 0);
lean_inc(v_a_449_);
lean_dec_ref_known(v___x_448_, 1);
v___x_450_ = lean_unsigned_to_nat(0u);
v_bs_x27_451_ = lean_array_uset(v_bs_437_, v_i_436_, v___x_450_);
if (lean_obj_tag(v_hole_434_) == 0)
{
lean_object* v___x_467_; 
v___x_467_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_toExpr(v_a_449_, v___y_438_, v___y_439_, v___y_440_, v___y_441_, v___y_442_, v___y_443_);
v___y_453_ = v___x_467_;
goto v___jp_452_;
}
else
{
lean_object* v_val_468_; lean_object* v_fst_469_; lean_object* v_snd_470_; lean_object* v___x_471_; lean_object* v___x_472_; 
v_val_468_ = lean_ctor_get(v_hole_434_, 0);
v_fst_469_ = lean_ctor_get(v_val_468_, 0);
v_snd_470_ = lean_ctor_get(v_val_468_, 1);
lean_inc(v_snd_470_);
v___x_471_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_replacing(v_fst_469_, v_snd_470_, v_a_449_);
v___x_472_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_toExpr(v___x_471_, v___y_438_, v___y_439_, v___y_440_, v___y_441_, v___y_442_, v___y_443_);
v___y_453_ = v___x_472_;
goto v___jp_452_;
}
v___jp_452_:
{
if (lean_obj_tag(v___y_453_) == 0)
{
lean_object* v_a_454_; size_t v___x_455_; size_t v___x_456_; lean_object* v___x_457_; 
v_a_454_ = lean_ctor_get(v___y_453_, 0);
lean_inc(v_a_454_);
lean_dec_ref_known(v___y_453_, 1);
v___x_455_ = ((size_t)1ULL);
v___x_456_ = lean_usize_add(v_i_436_, v___x_455_);
v___x_457_ = lean_array_uset(v_bs_x27_451_, v_i_436_, v_a_454_);
v_i_436_ = v___x_456_;
v_bs_437_ = v___x_457_;
goto _start;
}
else
{
lean_object* v_a_459_; lean_object* v___x_461_; uint8_t v_isShared_462_; uint8_t v_isSharedCheck_466_; 
lean_dec_ref(v_bs_x27_451_);
lean_dec(v_hole_434_);
v_a_459_ = lean_ctor_get(v___y_453_, 0);
v_isSharedCheck_466_ = !lean_is_exclusive(v___y_453_);
if (v_isSharedCheck_466_ == 0)
{
v___x_461_ = v___y_453_;
v_isShared_462_ = v_isSharedCheck_466_;
goto v_resetjp_460_;
}
else
{
lean_inc(v_a_459_);
lean_dec(v___y_453_);
v___x_461_ = lean_box(0);
v_isShared_462_ = v_isSharedCheck_466_;
goto v_resetjp_460_;
}
v_resetjp_460_:
{
lean_object* v___x_464_; 
if (v_isShared_462_ == 0)
{
v___x_464_ = v___x_461_;
goto v_reusejp_463_;
}
else
{
lean_object* v_reuseFailAlloc_465_; 
v_reuseFailAlloc_465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_465_, 0, v_a_459_);
v___x_464_ = v_reuseFailAlloc_465_;
goto v_reusejp_463_;
}
v_reusejp_463_:
{
return v___x_464_;
}
}
}
}
}
else
{
lean_object* v_a_473_; lean_object* v___x_475_; uint8_t v_isShared_476_; uint8_t v_isSharedCheck_480_; 
lean_dec_ref(v_bs_437_);
lean_dec(v_hole_434_);
v_a_473_ = lean_ctor_get(v___x_448_, 0);
v_isSharedCheck_480_ = !lean_is_exclusive(v___x_448_);
if (v_isSharedCheck_480_ == 0)
{
v___x_475_ = v___x_448_;
v_isShared_476_ = v_isSharedCheck_480_;
goto v_resetjp_474_;
}
else
{
lean_inc(v_a_473_);
lean_dec(v___x_448_);
v___x_475_ = lean_box(0);
v_isShared_476_ = v_isSharedCheck_480_;
goto v_resetjp_474_;
}
v_resetjp_474_:
{
lean_object* v___x_478_; 
if (v_isShared_476_ == 0)
{
v___x_478_ = v___x_475_;
goto v_reusejp_477_;
}
else
{
lean_object* v_reuseFailAlloc_479_; 
v_reuseFailAlloc_479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_479_, 0, v_a_473_);
v___x_478_ = v_reuseFailAlloc_479_;
goto v_reusejp_477_;
}
v_reusejp_477_:
{
return v___x_478_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt_spec__0___boxed(lean_object* v_vars_481_, lean_object* v_bindings_482_, lean_object* v_hole_483_, lean_object* v_sz_484_, lean_object* v_i_485_, lean_object* v_bs_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_, lean_object* v___y_491_, lean_object* v___y_492_, lean_object* v___y_493_){
_start:
{
size_t v_sz_boxed_494_; size_t v_i_boxed_495_; lean_object* v_res_496_; 
v_sz_boxed_494_ = lean_unbox_usize(v_sz_484_);
lean_dec(v_sz_484_);
v_i_boxed_495_ = lean_unbox_usize(v_i_485_);
lean_dec(v_i_485_);
v_res_496_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt_spec__0(v_vars_481_, v_bindings_482_, v_hole_483_, v_sz_boxed_494_, v_i_boxed_495_, v_bs_486_, v___y_487_, v___y_488_, v___y_489_, v___y_490_, v___y_491_, v___y_492_);
lean_dec(v___y_492_);
lean_dec_ref(v___y_491_);
lean_dec(v___y_490_);
lean_dec_ref(v___y_489_);
lean_dec(v___y_488_);
lean_dec_ref(v___y_487_);
lean_dec_ref(v_bindings_482_);
lean_dec_ref(v_vars_481_);
return v_res_496_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__2(void){
_start:
{
lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; 
v___x_500_ = lean_box(0);
v___x_501_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__1));
v___x_502_ = l_Lean_Expr_const___override(v___x_501_, v___x_500_);
return v___x_502_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__4(void){
_start:
{
lean_object* v___x_504_; lean_object* v___x_505_; 
v___x_504_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__3));
v___x_505_ = l_Lean_stringToMessageData(v___x_504_);
return v___x_505_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__6(void){
_start:
{
lean_object* v___x_507_; lean_object* v___x_508_; 
v___x_507_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__5));
v___x_508_ = l_Lean_stringToMessageData(v___x_507_);
return v___x_508_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__8(void){
_start:
{
lean_object* v___x_510_; lean_object* v___x_511_; 
v___x_510_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__7));
v___x_511_ = l_Lean_stringToMessageData(v___x_510_);
return v___x_511_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__12(void){
_start:
{
lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_516_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__11));
v___x_517_ = l_Lean_stringToMessageData(v___x_516_);
return v___x_517_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt(lean_object* v_vars_518_, lean_object* v_bindings_519_, lean_object* v_l_520_, lean_object* v_hole_521_, lean_object* v_a_522_, lean_object* v_a_523_, lean_object* v_a_524_, lean_object* v_a_525_, lean_object* v_a_526_, lean_object* v_a_527_){
_start:
{
lean_object* v_atom_530_; lean_object* v___y_531_; lean_object* v___y_532_; lean_object* v___x_540_; size_t v_sz_541_; size_t v___x_542_; lean_object* v___x_543_; 
lean_inc_ref(v_l_520_);
v___x_540_ = lp_vampireReplay_Vampire_Literal_args(v_l_520_);
v_sz_541_ = lean_array_size(v___x_540_);
v___x_542_ = ((size_t)0ULL);
v___x_543_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt_spec__0(v_vars_518_, v_bindings_519_, v_hole_521_, v_sz_541_, v___x_542_, v___x_540_, v_a_522_, v_a_523_, v_a_524_, v_a_525_, v_a_526_, v_a_527_);
if (lean_obj_tag(v___x_543_) == 0)
{
lean_object* v_a_544_; uint8_t v___x_545_; 
v_a_544_ = lean_ctor_get(v___x_543_, 0);
lean_inc(v_a_544_);
lean_dec_ref_known(v___x_543_, 1);
v___x_545_ = lp_vampireReplay_Vampire_Literal_isEquality(v_l_520_);
if (v___x_545_ == 0)
{
lean_object* v___x_546_; 
v___x_546_ = lp_vampireReplay_Vampire_Literal_symbol_x3f(v_l_520_);
if (lean_obj_tag(v___x_546_) == 1)
{
lean_object* v_val_547_; lean_object* v_name_548_; lean_object* v___x_549_; 
v_val_547_ = lean_ctor_get(v___x_546_, 0);
lean_inc(v_val_547_);
lean_dec_ref_known(v___x_546_, 1);
v_name_548_ = lean_ctor_get(v_val_547_, 0);
lean_inc_ref_n(v_name_548_, 2);
lean_dec(v_val_547_);
v___x_549_ = lp_vampireReplay_Vampire_Reconstruct_interpreted(v_name_548_, v_a_544_, v_a_522_, v_a_523_, v_a_524_, v_a_525_, v_a_526_, v_a_527_);
if (lean_obj_tag(v___x_549_) == 0)
{
lean_object* v_a_550_; 
v_a_550_ = lean_ctor_get(v___x_549_, 0);
lean_inc(v_a_550_);
lean_dec_ref_known(v___x_549_, 1);
if (lean_obj_tag(v_a_550_) == 0)
{
lean_object* v___x_551_; 
v___x_551_ = lp_vampireReplay_Vampire_Reconstruct_symbolExpr(v_name_548_, v_a_522_, v_a_523_, v_a_524_, v_a_525_, v_a_526_, v_a_527_);
if (lean_obj_tag(v___x_551_) == 0)
{
lean_object* v_a_552_; lean_object* v___x_553_; 
v_a_552_ = lean_ctor_get(v___x_551_, 0);
lean_inc(v_a_552_);
lean_dec_ref_known(v___x_551_, 1);
v___x_553_ = l_Lean_mkAppN(v_a_552_, v_a_544_);
lean_dec(v_a_544_);
v_atom_530_ = v___x_553_;
v___y_531_ = v_a_522_;
v___y_532_ = v_a_523_;
goto v___jp_529_;
}
else
{
lean_dec(v_a_544_);
lean_dec_ref(v_l_520_);
return v___x_551_;
}
}
else
{
lean_object* v_val_554_; 
lean_dec_ref(v_name_548_);
lean_dec(v_a_544_);
v_val_554_ = lean_ctor_get(v_a_550_, 0);
lean_inc(v_val_554_);
lean_dec_ref_known(v_a_550_, 1);
v_atom_530_ = v_val_554_;
v___y_531_ = v_a_522_;
v___y_532_ = v_a_523_;
goto v___jp_529_;
}
}
else
{
lean_object* v_a_555_; lean_object* v___x_557_; uint8_t v_isShared_558_; uint8_t v_isSharedCheck_562_; 
lean_dec_ref(v_name_548_);
lean_dec(v_a_544_);
lean_dec_ref(v_l_520_);
v_a_555_ = lean_ctor_get(v___x_549_, 0);
v_isSharedCheck_562_ = !lean_is_exclusive(v___x_549_);
if (v_isSharedCheck_562_ == 0)
{
v___x_557_ = v___x_549_;
v_isShared_558_ = v_isSharedCheck_562_;
goto v_resetjp_556_;
}
else
{
lean_inc(v_a_555_);
lean_dec(v___x_549_);
v___x_557_ = lean_box(0);
v_isShared_558_ = v_isSharedCheck_562_;
goto v_resetjp_556_;
}
v_resetjp_556_:
{
lean_object* v___x_560_; 
if (v_isShared_558_ == 0)
{
v___x_560_ = v___x_557_;
goto v_reusejp_559_;
}
else
{
lean_object* v_reuseFailAlloc_561_; 
v_reuseFailAlloc_561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_561_, 0, v_a_555_);
v___x_560_ = v_reuseFailAlloc_561_;
goto v_reusejp_559_;
}
v_reusejp_559_:
{
return v___x_560_;
}
}
}
}
else
{
lean_object* v___x_563_; uint32_t v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; 
lean_dec(v___x_546_);
lean_dec(v_a_544_);
v___x_563_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__4, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__4_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__4);
v___x_564_ = lp_vampireReplay_Vampire_Literal_predicate(v_l_520_);
lean_dec_ref(v_l_520_);
v___x_565_ = lean_uint32_to_nat(v___x_564_);
v___x_566_ = l_Nat_reprFast(v___x_565_);
v___x_567_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_567_, 0, v___x_566_);
v___x_568_ = l_Lean_MessageData_ofFormat(v___x_567_);
v___x_569_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_569_, 0, v___x_563_);
lean_ctor_set(v___x_569_, 1, v___x_568_);
v___x_570_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_569_, v_a_524_, v_a_525_, v_a_526_, v_a_527_);
return v___x_570_;
}
}
else
{
lean_object* v___x_571_; 
v___x_571_ = lp_vampireReplay_Vampire_Literal_sort_x3f(v_l_520_);
if (lean_obj_tag(v___x_571_) == 1)
{
lean_object* v_val_572_; lean_object* v___x_574_; uint8_t v_isShared_575_; uint8_t v_isSharedCheck_612_; 
v_val_572_ = lean_ctor_get(v___x_571_, 0);
v_isSharedCheck_612_ = !lean_is_exclusive(v___x_571_);
if (v_isSharedCheck_612_ == 0)
{
v___x_574_ = v___x_571_;
v_isShared_575_ = v_isSharedCheck_612_;
goto v_resetjp_573_;
}
else
{
lean_inc(v_val_572_);
lean_dec(v___x_571_);
v___x_574_ = lean_box(0);
v_isShared_575_ = v_isSharedCheck_612_;
goto v_resetjp_573_;
}
v_resetjp_573_:
{
lean_object* v___x_576_; lean_object* v___x_577_; uint8_t v___x_578_; 
v___x_576_ = lean_array_get_size(v_a_544_);
v___x_577_ = lean_unsigned_to_nat(2u);
v___x_578_ = lean_nat_dec_eq(v___x_576_, v___x_577_);
if (v___x_578_ == 0)
{
lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; 
lean_del_object(v___x_574_);
lean_dec(v_val_572_);
lean_dec(v_a_544_);
lean_dec_ref(v_l_520_);
v___x_579_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__6, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__6_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__6);
v___x_580_ = l_Nat_reprFast(v___x_576_);
v___x_581_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_581_, 0, v___x_580_);
v___x_582_ = l_Lean_MessageData_ofFormat(v___x_581_);
v___x_583_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_583_, 0, v___x_579_);
lean_ctor_set(v___x_583_, 1, v___x_582_);
v___x_584_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__8, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__8_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__8);
v___x_585_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_585_, 0, v___x_583_);
lean_ctor_set(v___x_585_, 1, v___x_584_);
v___x_586_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_585_, v_a_524_, v_a_525_, v_a_526_, v_a_527_);
return v___x_586_;
}
else
{
lean_object* v___x_587_; 
v___x_587_ = lp_vampireReplay_Vampire_Reconstruct_sortType(v_val_572_, v_a_522_, v_a_523_, v_a_524_, v_a_525_, v_a_526_, v_a_527_);
if (lean_obj_tag(v___x_587_) == 0)
{
lean_object* v_a_588_; lean_object* v___x_590_; uint8_t v_isShared_591_; uint8_t v_isSharedCheck_611_; 
v_a_588_ = lean_ctor_get(v___x_587_, 0);
v_isSharedCheck_611_ = !lean_is_exclusive(v___x_587_);
if (v_isSharedCheck_611_ == 0)
{
v___x_590_ = v___x_587_;
v_isShared_591_ = v_isSharedCheck_611_;
goto v_resetjp_589_;
}
else
{
lean_inc(v_a_588_);
lean_dec(v___x_587_);
v___x_590_ = lean_box(0);
v_isShared_591_ = v_isSharedCheck_611_;
goto v_resetjp_589_;
}
v_resetjp_589_:
{
lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_598_; 
v___x_592_ = lean_unsigned_to_nat(0u);
v___x_593_ = lean_array_fget(v_a_544_, v___x_592_);
v___x_594_ = lean_unsigned_to_nat(1u);
v___x_595_ = lean_array_fget(v_a_544_, v___x_594_);
lean_dec(v_a_544_);
v___x_596_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__10));
if (v_isShared_575_ == 0)
{
lean_ctor_set(v___x_574_, 0, v_a_588_);
v___x_598_ = v___x_574_;
goto v_reusejp_597_;
}
else
{
lean_object* v_reuseFailAlloc_610_; 
v_reuseFailAlloc_610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_610_, 0, v_a_588_);
v___x_598_ = v_reuseFailAlloc_610_;
goto v_reusejp_597_;
}
v_reusejp_597_:
{
lean_object* v___x_600_; 
if (v_isShared_591_ == 0)
{
lean_ctor_set_tag(v___x_590_, 1);
lean_ctor_set(v___x_590_, 0, v___x_593_);
v___x_600_ = v___x_590_;
goto v_reusejp_599_;
}
else
{
lean_object* v_reuseFailAlloc_609_; 
v_reuseFailAlloc_609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_609_, 0, v___x_593_);
v___x_600_ = v_reuseFailAlloc_609_;
goto v_reusejp_599_;
}
v_reusejp_599_:
{
lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; 
v___x_601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_601_, 0, v___x_595_);
v___x_602_ = lean_unsigned_to_nat(3u);
v___x_603_ = lean_mk_empty_array_with_capacity(v___x_602_);
v___x_604_ = lean_array_push(v___x_603_, v___x_598_);
v___x_605_ = lean_array_push(v___x_604_, v___x_600_);
v___x_606_ = lean_array_push(v___x_605_, v___x_601_);
v___x_607_ = l_Lean_Meta_mkAppOptM(v___x_596_, v___x_606_, v_a_524_, v_a_525_, v_a_526_, v_a_527_);
if (lean_obj_tag(v___x_607_) == 0)
{
lean_object* v_a_608_; 
v_a_608_ = lean_ctor_get(v___x_607_, 0);
lean_inc(v_a_608_);
lean_dec_ref_known(v___x_607_, 1);
v_atom_530_ = v_a_608_;
v___y_531_ = v_a_522_;
v___y_532_ = v_a_523_;
goto v___jp_529_;
}
else
{
lean_dec_ref(v_l_520_);
return v___x_607_;
}
}
}
}
}
else
{
lean_del_object(v___x_574_);
lean_dec(v_a_544_);
lean_dec_ref(v_l_520_);
return v___x_587_;
}
}
}
}
else
{
lean_object* v___x_613_; lean_object* v___x_614_; 
lean_dec(v___x_571_);
lean_dec(v_a_544_);
lean_dec_ref(v_l_520_);
v___x_613_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__12, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__12_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__12);
v___x_614_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_613_, v_a_524_, v_a_525_, v_a_526_, v_a_527_);
return v___x_614_;
}
}
}
else
{
lean_object* v_a_615_; lean_object* v___x_617_; uint8_t v_isShared_618_; uint8_t v_isSharedCheck_622_; 
lean_dec_ref(v_l_520_);
v_a_615_ = lean_ctor_get(v___x_543_, 0);
v_isSharedCheck_622_ = !lean_is_exclusive(v___x_543_);
if (v_isSharedCheck_622_ == 0)
{
v___x_617_ = v___x_543_;
v_isShared_618_ = v_isSharedCheck_622_;
goto v_resetjp_616_;
}
else
{
lean_inc(v_a_615_);
lean_dec(v___x_543_);
v___x_617_ = lean_box(0);
v_isShared_618_ = v_isSharedCheck_622_;
goto v_resetjp_616_;
}
v_resetjp_616_:
{
lean_object* v___x_620_; 
if (v_isShared_618_ == 0)
{
v___x_620_ = v___x_617_;
goto v_reusejp_619_;
}
else
{
lean_object* v_reuseFailAlloc_621_; 
v_reuseFailAlloc_621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_621_, 0, v_a_615_);
v___x_620_ = v_reuseFailAlloc_621_;
goto v_reusejp_619_;
}
v_reusejp_619_:
{
return v___x_620_;
}
}
}
v___jp_529_:
{
lean_object* v___x_533_; lean_object* v_a_534_; uint8_t v___x_535_; 
v___x_533_ = lp_vampireReplay_Vampire_Reconstruct_literalPolarity___redArg(v_l_520_, v___y_531_);
lean_dec_ref(v_l_520_);
v_a_534_ = lean_ctor_get(v___x_533_, 0);
lean_inc(v_a_534_);
lean_dec_ref(v___x_533_);
v___x_535_ = lean_unbox(v_a_534_);
lean_dec(v_a_534_);
if (v___x_535_ == 0)
{
lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; 
v___x_536_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__2, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__2_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__2);
v___x_537_ = l_Lean_Expr_app___override(v___x_536_, v_atom_530_);
v___x_538_ = lp_vampireReplay_Vampire_Reconstruct_shared___redArg(v___x_537_, v___y_532_);
return v___x_538_;
}
else
{
lean_object* v___x_539_; 
v___x_539_ = lp_vampireReplay_Vampire_Reconstruct_shared___redArg(v_atom_530_, v___y_532_);
return v___x_539_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___boxed(lean_object* v_vars_623_, lean_object* v_bindings_624_, lean_object* v_l_625_, lean_object* v_hole_626_, lean_object* v_a_627_, lean_object* v_a_628_, lean_object* v_a_629_, lean_object* v_a_630_, lean_object* v_a_631_, lean_object* v_a_632_, lean_object* v_a_633_){
_start:
{
lean_object* v_res_634_; 
v_res_634_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt(v_vars_623_, v_bindings_624_, v_l_625_, v_hole_626_, v_a_627_, v_a_628_, v_a_629_, v_a_630_, v_a_631_, v_a_632_);
lean_dec(v_a_632_);
lean_dec_ref(v_a_631_);
lean_dec(v_a_630_);
lean_dec_ref(v_a_629_);
lean_dec(v_a_628_);
lean_dec_ref(v_a_627_);
lean_dec_ref(v_bindings_624_);
lean_dec_ref(v_vars_623_);
return v_res_634_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__1(void){
_start:
{
lean_object* v___x_636_; lean_object* v___x_637_; 
v___x_636_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__0));
v___x_637_ = l_Lean_stringToMessageData(v___x_636_);
return v___x_637_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__3(void){
_start:
{
lean_object* v___x_639_; lean_object* v___x_640_; 
v___x_639_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__2));
v___x_640_ = l_Lean_stringToMessageData(v___x_639_);
return v___x_640_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__5(void){
_start:
{
lean_object* v___x_642_; lean_object* v___x_643_; 
v___x_642_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__4));
v___x_643_ = l_Lean_stringToMessageData(v___x_642_);
return v___x_643_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__7(void){
_start:
{
lean_object* v___x_645_; lean_object* v___x_646_; 
v___x_645_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__6));
v___x_646_ = l_Lean_stringToMessageData(v___x_645_);
return v___x_646_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__11(void){
_start:
{
lean_object* v___x_652_; lean_object* v___x_653_; 
v___x_652_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__10));
v___x_653_ = l_Lean_stringToMessageData(v___x_652_);
return v___x_653_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation(lean_object* v_use_654_, lean_object* v_vars_655_, lean_object* v_proof_656_, lean_object* v_stated_657_, lean_object* v_a_658_, lean_object* v_a_659_, lean_object* v_a_660_, lean_object* v_a_661_, lean_object* v_a_662_, lean_object* v_a_663_){
_start:
{
lean_object* v_term_665_; 
v_term_665_ = lean_ctor_get(v_use_654_, 1);
if (lean_obj_tag(v_term_665_) == 1)
{
lean_object* v_val_666_; lean_object* v___x_667_; 
v_val_666_ = lean_ctor_get(v_term_665_, 0);
lean_inc(v_val_666_);
v___x_667_ = lp_vampireReplay_Vampire_Reconstruct_substitutedVars(v_use_654_, v_vars_655_, v_a_658_, v_a_659_, v_a_660_, v_a_661_, v_a_662_, v_a_663_);
lean_dec_ref(v_use_654_);
if (lean_obj_tag(v___x_667_) == 0)
{
lean_object* v_a_668_; lean_object* v___x_669_; 
v_a_668_ = lean_ctor_get(v___x_667_, 0);
lean_inc(v_a_668_);
lean_dec_ref_known(v___x_667_, 1);
v___x_669_ = lp_vampireReplay_Vampire_Reconstruct_term(v_a_668_, v_val_666_, v_a_658_, v_a_659_, v_a_660_, v_a_661_, v_a_662_, v_a_663_);
lean_dec(v_a_668_);
if (lean_obj_tag(v___x_669_) == 0)
{
lean_object* v_a_670_; lean_object* v___x_671_; lean_object* v_a_672_; lean_object* v___x_673_; lean_object* v___x_674_; uint8_t v___x_675_; 
v_a_670_ = lean_ctor_get(v___x_669_, 0);
lean_inc(v_a_670_);
lean_dec_ref_known(v___x_669_, 1);
lean_inc_ref(v_stated_657_);
v___x_671_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_stated_657_, v_a_661_);
v_a_672_ = lean_ctor_get(v___x_671_, 0);
lean_inc(v_a_672_);
lean_dec_ref(v___x_671_);
v___x_673_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__10));
v___x_674_ = lean_unsigned_to_nat(3u);
v___x_675_ = l_Lean_Expr_isAppOfArity(v_a_672_, v___x_673_, v___x_674_);
if (v___x_675_ == 0)
{
lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; 
lean_dec(v_a_672_);
lean_dec(v_a_670_);
lean_dec_ref(v_proof_656_);
v___x_676_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__1, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__1_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__1);
v___x_677_ = l_Lean_indentExpr(v_stated_657_);
v___x_678_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_678_, 0, v___x_676_);
lean_ctor_set(v___x_678_, 1, v___x_677_);
v___x_679_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_678_, v_a_660_, v_a_661_, v_a_662_, v_a_663_);
return v___x_679_;
}
else
{
lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; 
v___x_680_ = l_Lean_Expr_appFn_x21(v_a_672_);
v___x_681_ = l_Lean_Expr_appArg_x21(v___x_680_);
lean_dec_ref(v___x_680_);
lean_inc(v_a_670_);
lean_inc_ref(v___x_681_);
v___x_682_ = l_Lean_Meta_isExprDefEq(v___x_681_, v_a_670_, v_a_660_, v_a_661_, v_a_662_, v_a_663_);
if (lean_obj_tag(v___x_682_) == 0)
{
lean_object* v_a_683_; lean_object* v___x_685_; uint8_t v_isShared_686_; uint8_t v_isSharedCheck_738_; 
v_a_683_ = lean_ctor_get(v___x_682_, 0);
v_isSharedCheck_738_ = !lean_is_exclusive(v___x_682_);
if (v_isSharedCheck_738_ == 0)
{
v___x_685_ = v___x_682_;
v_isShared_686_ = v_isSharedCheck_738_;
goto v_resetjp_684_;
}
else
{
lean_inc(v_a_683_);
lean_dec(v___x_682_);
v___x_685_ = lean_box(0);
v_isShared_686_ = v_isSharedCheck_738_;
goto v_resetjp_684_;
}
v_resetjp_684_:
{
lean_object* v___x_687_; uint8_t v___x_688_; 
v___x_687_ = l_Lean_Expr_appArg_x21(v_a_672_);
lean_dec(v_a_672_);
v___x_688_ = lean_unbox(v_a_683_);
lean_dec(v_a_683_);
if (v___x_688_ == 0)
{
lean_object* v___x_689_; 
lean_del_object(v___x_685_);
lean_inc(v_a_670_);
v___x_689_ = l_Lean_Meta_isExprDefEq(v___x_687_, v_a_670_, v_a_660_, v_a_661_, v_a_662_, v_a_663_);
if (lean_obj_tag(v___x_689_) == 0)
{
lean_object* v_a_690_; uint8_t v___x_691_; 
v_a_690_ = lean_ctor_get(v___x_689_, 0);
lean_inc(v_a_690_);
lean_dec_ref_known(v___x_689_, 1);
v___x_691_ = lean_unbox(v_a_690_);
lean_dec(v_a_690_);
if (v___x_691_ == 0)
{
lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; 
lean_dec_ref(v___x_681_);
lean_dec_ref(v_proof_656_);
v___x_692_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__3, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__3_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__3);
v___x_693_ = l_Lean_indentExpr(v_stated_657_);
v___x_694_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_694_, 0, v___x_692_);
lean_ctor_set(v___x_694_, 1, v___x_693_);
v___x_695_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__5, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__5_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__5);
v___x_696_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_696_, 0, v___x_694_);
lean_ctor_set(v___x_696_, 1, v___x_695_);
v___x_697_ = l_Lean_indentExpr(v_a_670_);
v___x_698_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_698_, 0, v___x_696_);
lean_ctor_set(v___x_698_, 1, v___x_697_);
v___x_699_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__7, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__7_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__7);
v___x_700_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_700_, 0, v___x_698_);
lean_ctor_set(v___x_700_, 1, v___x_699_);
v___x_701_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_700_, v_a_660_, v_a_661_, v_a_662_, v_a_663_);
return v___x_701_;
}
else
{
lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; 
lean_dec_ref(v_stated_657_);
v___x_702_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__9));
v___x_703_ = lean_unsigned_to_nat(1u);
v___x_704_ = lean_mk_empty_array_with_capacity(v___x_703_);
v___x_705_ = lean_array_push(v___x_704_, v_proof_656_);
v___x_706_ = l_Lean_Meta_mkAppM(v___x_702_, v___x_705_, v_a_660_, v_a_661_, v_a_662_, v_a_663_);
if (lean_obj_tag(v___x_706_) == 0)
{
lean_object* v_a_707_; lean_object* v___x_709_; uint8_t v_isShared_710_; uint8_t v_isSharedCheck_716_; 
v_a_707_ = lean_ctor_get(v___x_706_, 0);
v_isSharedCheck_716_ = !lean_is_exclusive(v___x_706_);
if (v_isSharedCheck_716_ == 0)
{
v___x_709_ = v___x_706_;
v_isShared_710_ = v_isSharedCheck_716_;
goto v_resetjp_708_;
}
else
{
lean_inc(v_a_707_);
lean_dec(v___x_706_);
v___x_709_ = lean_box(0);
v_isShared_710_ = v_isSharedCheck_716_;
goto v_resetjp_708_;
}
v_resetjp_708_:
{
lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_714_; 
v___x_711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_711_, 0, v___x_681_);
lean_ctor_set(v___x_711_, 1, v_a_707_);
v___x_712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_712_, 0, v_a_670_);
lean_ctor_set(v___x_712_, 1, v___x_711_);
if (v_isShared_710_ == 0)
{
lean_ctor_set(v___x_709_, 0, v___x_712_);
v___x_714_ = v___x_709_;
goto v_reusejp_713_;
}
else
{
lean_object* v_reuseFailAlloc_715_; 
v_reuseFailAlloc_715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_715_, 0, v___x_712_);
v___x_714_ = v_reuseFailAlloc_715_;
goto v_reusejp_713_;
}
v_reusejp_713_:
{
return v___x_714_;
}
}
}
else
{
lean_object* v_a_717_; lean_object* v___x_719_; uint8_t v_isShared_720_; uint8_t v_isSharedCheck_724_; 
lean_dec_ref(v___x_681_);
lean_dec(v_a_670_);
v_a_717_ = lean_ctor_get(v___x_706_, 0);
v_isSharedCheck_724_ = !lean_is_exclusive(v___x_706_);
if (v_isSharedCheck_724_ == 0)
{
v___x_719_ = v___x_706_;
v_isShared_720_ = v_isSharedCheck_724_;
goto v_resetjp_718_;
}
else
{
lean_inc(v_a_717_);
lean_dec(v___x_706_);
v___x_719_ = lean_box(0);
v_isShared_720_ = v_isSharedCheck_724_;
goto v_resetjp_718_;
}
v_resetjp_718_:
{
lean_object* v___x_722_; 
if (v_isShared_720_ == 0)
{
v___x_722_ = v___x_719_;
goto v_reusejp_721_;
}
else
{
lean_object* v_reuseFailAlloc_723_; 
v_reuseFailAlloc_723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_723_, 0, v_a_717_);
v___x_722_ = v_reuseFailAlloc_723_;
goto v_reusejp_721_;
}
v_reusejp_721_:
{
return v___x_722_;
}
}
}
}
}
else
{
lean_object* v_a_725_; lean_object* v___x_727_; uint8_t v_isShared_728_; uint8_t v_isSharedCheck_732_; 
lean_dec_ref(v___x_681_);
lean_dec(v_a_670_);
lean_dec_ref(v_stated_657_);
lean_dec_ref(v_proof_656_);
v_a_725_ = lean_ctor_get(v___x_689_, 0);
v_isSharedCheck_732_ = !lean_is_exclusive(v___x_689_);
if (v_isSharedCheck_732_ == 0)
{
v___x_727_ = v___x_689_;
v_isShared_728_ = v_isSharedCheck_732_;
goto v_resetjp_726_;
}
else
{
lean_inc(v_a_725_);
lean_dec(v___x_689_);
v___x_727_ = lean_box(0);
v_isShared_728_ = v_isSharedCheck_732_;
goto v_resetjp_726_;
}
v_resetjp_726_:
{
lean_object* v___x_730_; 
if (v_isShared_728_ == 0)
{
v___x_730_ = v___x_727_;
goto v_reusejp_729_;
}
else
{
lean_object* v_reuseFailAlloc_731_; 
v_reuseFailAlloc_731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_731_, 0, v_a_725_);
v___x_730_ = v_reuseFailAlloc_731_;
goto v_reusejp_729_;
}
v_reusejp_729_:
{
return v___x_730_;
}
}
}
}
else
{
lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_736_; 
lean_dec_ref(v___x_681_);
lean_dec_ref(v_stated_657_);
v___x_733_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_733_, 0, v___x_687_);
lean_ctor_set(v___x_733_, 1, v_proof_656_);
v___x_734_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_734_, 0, v_a_670_);
lean_ctor_set(v___x_734_, 1, v___x_733_);
if (v_isShared_686_ == 0)
{
lean_ctor_set(v___x_685_, 0, v___x_734_);
v___x_736_ = v___x_685_;
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
lean_object* v_a_739_; lean_object* v___x_741_; uint8_t v_isShared_742_; uint8_t v_isSharedCheck_746_; 
lean_dec_ref(v___x_681_);
lean_dec(v_a_672_);
lean_dec(v_a_670_);
lean_dec_ref(v_stated_657_);
lean_dec_ref(v_proof_656_);
v_a_739_ = lean_ctor_get(v___x_682_, 0);
v_isSharedCheck_746_ = !lean_is_exclusive(v___x_682_);
if (v_isSharedCheck_746_ == 0)
{
v___x_741_ = v___x_682_;
v_isShared_742_ = v_isSharedCheck_746_;
goto v_resetjp_740_;
}
else
{
lean_inc(v_a_739_);
lean_dec(v___x_682_);
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
else
{
lean_object* v_a_747_; lean_object* v___x_749_; uint8_t v_isShared_750_; uint8_t v_isSharedCheck_754_; 
lean_dec_ref(v_stated_657_);
lean_dec_ref(v_proof_656_);
v_a_747_ = lean_ctor_get(v___x_669_, 0);
v_isSharedCheck_754_ = !lean_is_exclusive(v___x_669_);
if (v_isSharedCheck_754_ == 0)
{
v___x_749_ = v___x_669_;
v_isShared_750_ = v_isSharedCheck_754_;
goto v_resetjp_748_;
}
else
{
lean_inc(v_a_747_);
lean_dec(v___x_669_);
v___x_749_ = lean_box(0);
v_isShared_750_ = v_isSharedCheck_754_;
goto v_resetjp_748_;
}
v_resetjp_748_:
{
lean_object* v___x_752_; 
if (v_isShared_750_ == 0)
{
v___x_752_ = v___x_749_;
goto v_reusejp_751_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v_a_747_);
v___x_752_ = v_reuseFailAlloc_753_;
goto v_reusejp_751_;
}
v_reusejp_751_:
{
return v___x_752_;
}
}
}
}
else
{
lean_object* v_a_755_; lean_object* v___x_757_; uint8_t v_isShared_758_; uint8_t v_isSharedCheck_762_; 
lean_dec(v_val_666_);
lean_dec_ref(v_stated_657_);
lean_dec_ref(v_proof_656_);
v_a_755_ = lean_ctor_get(v___x_667_, 0);
v_isSharedCheck_762_ = !lean_is_exclusive(v___x_667_);
if (v_isSharedCheck_762_ == 0)
{
v___x_757_ = v___x_667_;
v_isShared_758_ = v_isSharedCheck_762_;
goto v_resetjp_756_;
}
else
{
lean_inc(v_a_755_);
lean_dec(v___x_667_);
v___x_757_ = lean_box(0);
v_isShared_758_ = v_isSharedCheck_762_;
goto v_resetjp_756_;
}
v_resetjp_756_:
{
lean_object* v___x_760_; 
if (v_isShared_758_ == 0)
{
v___x_760_ = v___x_757_;
goto v_reusejp_759_;
}
else
{
lean_object* v_reuseFailAlloc_761_; 
v_reuseFailAlloc_761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_761_, 0, v_a_755_);
v___x_760_ = v_reuseFailAlloc_761_;
goto v_reusejp_759_;
}
v_reusejp_759_:
{
return v___x_760_;
}
}
}
}
else
{
lean_object* v___x_763_; lean_object* v___x_764_; 
lean_dec_ref(v_stated_657_);
lean_dec_ref(v_proof_656_);
lean_dec_ref(v_use_654_);
v___x_763_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__11, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__11_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___closed__11);
v___x_764_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_763_, v_a_660_, v_a_661_, v_a_662_, v_a_663_);
return v___x_764_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation___boxed(lean_object* v_use_765_, lean_object* v_vars_766_, lean_object* v_proof_767_, lean_object* v_stated_768_, lean_object* v_a_769_, lean_object* v_a_770_, lean_object* v_a_771_, lean_object* v_a_772_, lean_object* v_a_773_, lean_object* v_a_774_, lean_object* v_a_775_){
_start:
{
lean_object* v_res_776_; 
v_res_776_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation(v_use_765_, v_vars_766_, v_proof_767_, v_stated_768_, v_a_769_, v_a_770_, v_a_771_, v_a_772_, v_a_773_, v_a_774_);
lean_dec(v_a_774_);
lean_dec_ref(v_a_773_);
lean_dec(v_a_772_);
lean_dec_ref(v_a_771_);
lean_dec(v_a_770_);
lean_dec_ref(v_a_769_);
lean_dec_ref(v_vars_766_);
return v_res_776_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewrittenOf___closed__1(void){
_start:
{
lean_object* v___x_778_; lean_object* v___x_779_; 
v___x_778_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewrittenOf___closed__0));
v___x_779_ = l_Lean_stringToMessageData(v___x_778_);
return v___x_779_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewrittenOf___closed__3(void){
_start:
{
lean_object* v___x_781_; lean_object* v___x_782_; 
v___x_781_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewrittenOf___closed__2));
v___x_782_ = l_Lean_stringToMessageData(v___x_781_);
return v___x_782_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewrittenOf___closed__5(void){
_start:
{
lean_object* v___x_784_; lean_object* v___x_785_; 
v___x_784_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewrittenOf___closed__4));
v___x_785_ = l_Lean_stringToMessageData(v___x_784_);
return v___x_785_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewrittenOf(lean_object* v_parent_786_, lean_object* v_use_787_, lean_object* v_vars_788_, lean_object* v_a_789_, lean_object* v_a_790_, lean_object* v_a_791_, lean_object* v_a_792_, lean_object* v_a_793_, lean_object* v_a_794_){
_start:
{
lean_object* v_literal_796_; 
v_literal_796_ = lean_ctor_get(v_use_787_, 0);
lean_inc(v_literal_796_);
if (lean_obj_tag(v_literal_796_) == 1)
{
lean_object* v_term_797_; 
v_term_797_ = lean_ctor_get(v_use_787_, 1);
lean_inc(v_term_797_);
if (lean_obj_tag(v_term_797_) == 1)
{
uint8_t v_rewritesWholePremise_798_; lean_object* v_bindings_799_; lean_object* v_val_800_; lean_object* v_val_801_; lean_object* v___x_802_; 
v_rewritesWholePremise_798_ = lean_ctor_get_uint8(v_use_787_, sizeof(void*)*3 + 4);
v_bindings_799_ = lean_ctor_get(v_use_787_, 2);
lean_inc_ref(v_bindings_799_);
lean_dec_ref(v_use_787_);
v_val_800_ = lean_ctor_get(v_literal_796_, 0);
lean_inc(v_val_800_);
lean_dec_ref_known(v_literal_796_, 1);
v_val_801_ = lean_ctor_get(v_term_797_, 0);
lean_inc(v_val_801_);
lean_dec_ref_known(v_term_797_, 1);
v___x_802_ = lp_vampireReplay_Vampire_Unit_clause_x3f(v_parent_786_);
if (lean_obj_tag(v___x_802_) == 1)
{
lean_object* v_val_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v_bindings_806_; lean_object* v___x_807_; 
v_val_803_ = lean_ctor_get(v___x_802_, 0);
lean_inc(v_val_803_);
lean_dec_ref_known(v___x_802_, 1);
v___x_804_ = lean_array_to_list(v_bindings_799_);
v___x_805_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__7, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__7_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__7);
v_bindings_806_ = lp_vampireReplay_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Vampire_Reconstruct_instantiateAt_spec__0_spec__0___redArg(v___x_804_, v___x_805_);
lean_dec(v___x_804_);
v___x_807_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf(v_vars_788_, v_bindings_806_, v_val_801_, v_a_789_, v_a_790_, v_a_791_, v_a_792_, v_a_793_, v_a_794_);
if (lean_obj_tag(v___x_807_) == 0)
{
lean_object* v_a_808_; lean_object* v___x_810_; uint8_t v_isShared_811_; uint8_t v_isSharedCheck_819_; 
v_a_808_ = lean_ctor_get(v___x_807_, 0);
v_isSharedCheck_819_ = !lean_is_exclusive(v___x_807_);
if (v_isSharedCheck_819_ == 0)
{
v___x_810_ = v___x_807_;
v_isShared_811_ = v_isSharedCheck_819_;
goto v_resetjp_809_;
}
else
{
lean_inc(v_a_808_);
lean_dec(v___x_807_);
v___x_810_ = lean_box(0);
v_isShared_811_ = v_isSharedCheck_819_;
goto v_resetjp_809_;
}
v_resetjp_809_:
{
lean_object* v___x_812_; uint32_t v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_817_; 
v___x_812_ = lp_vampireReplay_Vampire_Clause_literals(v_val_803_);
v___x_813_ = lean_unbox_uint32(v_val_800_);
lean_dec(v_val_800_);
v___x_814_ = lean_uint32_to_nat(v___x_813_);
v___x_815_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_815_, 0, v___x_812_);
lean_ctor_set(v___x_815_, 1, v_bindings_806_);
lean_ctor_set(v___x_815_, 2, v___x_814_);
lean_ctor_set(v___x_815_, 3, v_a_808_);
lean_ctor_set_uint8(v___x_815_, sizeof(void*)*4, v_rewritesWholePremise_798_);
if (v_isShared_811_ == 0)
{
lean_ctor_set(v___x_810_, 0, v___x_815_);
v___x_817_ = v___x_810_;
goto v_reusejp_816_;
}
else
{
lean_object* v_reuseFailAlloc_818_; 
v_reuseFailAlloc_818_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_818_, 0, v___x_815_);
v___x_817_ = v_reuseFailAlloc_818_;
goto v_reusejp_816_;
}
v_reusejp_816_:
{
return v___x_817_;
}
}
}
else
{
lean_object* v_a_820_; lean_object* v___x_822_; uint8_t v_isShared_823_; uint8_t v_isSharedCheck_827_; 
lean_dec_ref(v_bindings_806_);
lean_dec(v_val_803_);
lean_dec(v_val_800_);
v_a_820_ = lean_ctor_get(v___x_807_, 0);
v_isSharedCheck_827_ = !lean_is_exclusive(v___x_807_);
if (v_isSharedCheck_827_ == 0)
{
v___x_822_ = v___x_807_;
v_isShared_823_ = v_isSharedCheck_827_;
goto v_resetjp_821_;
}
else
{
lean_inc(v_a_820_);
lean_dec(v___x_807_);
v___x_822_ = lean_box(0);
v_isShared_823_ = v_isSharedCheck_827_;
goto v_resetjp_821_;
}
v_resetjp_821_:
{
lean_object* v___x_825_; 
if (v_isShared_823_ == 0)
{
v___x_825_ = v___x_822_;
goto v_reusejp_824_;
}
else
{
lean_object* v_reuseFailAlloc_826_; 
v_reuseFailAlloc_826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_826_, 0, v_a_820_);
v___x_825_ = v_reuseFailAlloc_826_;
goto v_reusejp_824_;
}
v_reusejp_824_:
{
return v___x_825_;
}
}
}
}
else
{
lean_object* v___x_828_; lean_object* v___x_829_; 
lean_dec(v___x_802_);
lean_dec(v_val_801_);
lean_dec(v_val_800_);
lean_dec_ref(v_bindings_799_);
v___x_828_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewrittenOf___closed__1, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewrittenOf___closed__1_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewrittenOf___closed__1);
v___x_829_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_828_, v_a_791_, v_a_792_, v_a_793_, v_a_794_);
return v___x_829_;
}
}
else
{
lean_object* v___x_830_; lean_object* v___x_831_; 
lean_dec(v_term_797_);
lean_dec_ref_known(v_literal_796_, 1);
lean_dec_ref(v_use_787_);
lean_dec_ref(v_parent_786_);
v___x_830_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewrittenOf___closed__3, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewrittenOf___closed__3_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewrittenOf___closed__3);
v___x_831_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_830_, v_a_791_, v_a_792_, v_a_793_, v_a_794_);
return v___x_831_;
}
}
else
{
lean_object* v___x_832_; lean_object* v___x_833_; 
lean_dec(v_literal_796_);
lean_dec_ref(v_use_787_);
lean_dec_ref(v_parent_786_);
v___x_832_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewrittenOf___closed__5, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewrittenOf___closed__5_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewrittenOf___closed__5);
v___x_833_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_832_, v_a_791_, v_a_792_, v_a_793_, v_a_794_);
return v___x_833_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewrittenOf___boxed(lean_object* v_parent_834_, lean_object* v_use_835_, lean_object* v_vars_836_, lean_object* v_a_837_, lean_object* v_a_838_, lean_object* v_a_839_, lean_object* v_a_840_, lean_object* v_a_841_, lean_object* v_a_842_, lean_object* v_a_843_){
_start:
{
lean_object* v_res_844_; 
v_res_844_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewrittenOf(v_parent_834_, v_use_835_, v_vars_836_, v_a_837_, v_a_838_, v_a_839_, v_a_840_, v_a_841_, v_a_842_);
lean_dec(v_a_842_);
lean_dec_ref(v_a_841_);
lean_dec(v_a_840_);
lean_dec_ref(v_a_839_);
lean_dec(v_a_838_);
lean_dec_ref(v_a_837_);
lean_dec_ref(v_vars_836_);
return v_res_844_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith___lam__0(lean_object* v_target_845_, lean_object* v_vars_846_, lean_object* v_bindings_847_, lean_object* v___x_848_, uint8_t v___x_849_, lean_object* v_x_850_, lean_object* v___y_851_, lean_object* v___y_852_, lean_object* v___y_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_){
_start:
{
lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; 
lean_inc_ref(v_x_850_);
v___x_858_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_858_, 0, v_target_845_);
lean_ctor_set(v___x_858_, 1, v_x_850_);
v___x_859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_859_, 0, v___x_858_);
v___x_860_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt(v_vars_846_, v_bindings_847_, v___x_848_, v___x_859_, v___y_851_, v___y_852_, v___y_853_, v___y_854_, v___y_855_, v___y_856_);
if (lean_obj_tag(v___x_860_) == 0)
{
lean_object* v_a_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; uint8_t v___x_865_; uint8_t v___x_866_; lean_object* v___x_867_; 
v_a_861_ = lean_ctor_get(v___x_860_, 0);
lean_inc(v_a_861_);
lean_dec_ref_known(v___x_860_, 1);
v___x_862_ = lean_unsigned_to_nat(1u);
v___x_863_ = lean_mk_empty_array_with_capacity(v___x_862_);
v___x_864_ = lean_array_push(v___x_863_, v_x_850_);
v___x_865_ = 0;
v___x_866_ = 1;
v___x_867_ = l_Lean_Meta_mkLambdaFVars(v___x_864_, v_a_861_, v___x_865_, v___x_849_, v___x_865_, v___x_849_, v___x_866_, v___y_853_, v___y_854_, v___y_855_, v___y_856_);
lean_dec_ref(v___x_864_);
return v___x_867_;
}
else
{
lean_dec_ref(v_x_850_);
return v___x_860_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith___lam__0___boxed(lean_object* v_target_868_, lean_object* v_vars_869_, lean_object* v_bindings_870_, lean_object* v___x_871_, lean_object* v___x_872_, lean_object* v_x_873_, lean_object* v___y_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_){
_start:
{
uint8_t v___x_2357__boxed_881_; lean_object* v_res_882_; 
v___x_2357__boxed_881_ = lean_unbox(v___x_872_);
v_res_882_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith___lam__0(v_target_868_, v_vars_869_, v_bindings_870_, v___x_871_, v___x_2357__boxed_881_, v_x_873_, v___y_874_, v___y_875_, v___y_876_, v___y_877_, v___y_878_, v___y_879_);
lean_dec(v___y_879_);
lean_dec_ref(v___y_878_);
lean_dec(v___y_877_);
lean_dec_ref(v___y_876_);
lean_dec(v___y_875_);
lean_dec_ref(v___y_874_);
lean_dec_ref(v_bindings_870_);
lean_dec_ref(v_vars_869_);
return v_res_882_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith___closed__1(void){
_start:
{
lean_object* v___x_884_; lean_object* v___x_885_; 
v___x_884_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith___closed__0));
v___x_885_ = l_Lean_stringToMessageData(v___x_884_);
return v___x_885_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith(lean_object* v_rw_893_, lean_object* v_vars_894_, lean_object* v_heq_895_, lean_object* v_to_896_, lean_object* v_i_897_, lean_object* v_h_898_, lean_object* v_a_899_, lean_object* v_a_900_, lean_object* v_a_901_, lean_object* v_a_902_, lean_object* v_a_903_, lean_object* v_a_904_){
_start:
{
lean_object* v_literals_906_; lean_object* v_bindings_907_; lean_object* v_target_908_; lean_object* v___x_909_; uint8_t v___x_910_; 
v_literals_906_ = lean_ctor_get(v_rw_893_, 0);
lean_inc_ref(v_literals_906_);
v_bindings_907_ = lean_ctor_get(v_rw_893_, 1);
lean_inc_ref(v_bindings_907_);
v_target_908_ = lean_ctor_get(v_rw_893_, 3);
lean_inc_ref(v_target_908_);
lean_dec_ref(v_rw_893_);
v___x_909_ = lean_array_get_size(v_literals_906_);
v___x_910_ = lean_nat_dec_lt(v_i_897_, v___x_909_);
if (v___x_910_ == 0)
{
lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; 
lean_dec_ref(v_target_908_);
lean_dec_ref(v_bindings_907_);
lean_dec_ref(v_literals_906_);
lean_dec_ref(v_h_898_);
lean_dec_ref(v_to_896_);
lean_dec_ref(v_heq_895_);
lean_dec_ref(v_vars_894_);
v___x_911_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith___closed__1, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith___closed__1_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith___closed__1);
v___x_912_ = l_Nat_reprFast(v_i_897_);
v___x_913_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_913_, 0, v___x_912_);
v___x_914_ = l_Lean_MessageData_ofFormat(v___x_913_);
v___x_915_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_915_, 0, v___x_911_);
lean_ctor_set(v___x_915_, 1, v___x_914_);
v___x_916_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_915_, v_a_901_, v_a_902_, v_a_903_, v_a_904_);
return v___x_916_;
}
else
{
lean_object* v___x_917_; 
lean_inc_ref(v_target_908_);
v___x_917_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_toExpr(v_target_908_, v_a_899_, v_a_900_, v_a_901_, v_a_902_, v_a_903_, v_a_904_);
if (lean_obj_tag(v___x_917_) == 0)
{
lean_object* v_a_918_; lean_object* v___x_920_; uint8_t v_isShared_921_; uint8_t v_isSharedCheck_960_; 
v_a_918_ = lean_ctor_get(v___x_917_, 0);
v_isSharedCheck_960_ = !lean_is_exclusive(v___x_917_);
if (v_isSharedCheck_960_ == 0)
{
v___x_920_ = v___x_917_;
v_isShared_921_ = v_isSharedCheck_960_;
goto v_resetjp_919_;
}
else
{
lean_inc(v_a_918_);
lean_dec(v___x_917_);
v___x_920_ = lean_box(0);
v_isShared_921_ = v_isSharedCheck_960_;
goto v_resetjp_919_;
}
v_resetjp_919_:
{
lean_object* v___x_922_; 
lean_inc(v_a_904_);
lean_inc_ref(v_a_903_);
lean_inc(v_a_902_);
lean_inc_ref(v_a_901_);
lean_inc(v_a_918_);
v___x_922_ = lean_infer_type(v_a_918_, v_a_901_, v_a_902_, v_a_903_, v_a_904_);
if (lean_obj_tag(v___x_922_) == 0)
{
lean_object* v_a_923_; lean_object* v___x_925_; uint8_t v_isShared_926_; uint8_t v_isSharedCheck_959_; 
v_a_923_ = lean_ctor_get(v___x_922_, 0);
v_isSharedCheck_959_ = !lean_is_exclusive(v___x_922_);
if (v_isSharedCheck_959_ == 0)
{
v___x_925_ = v___x_922_;
v_isShared_926_ = v_isSharedCheck_959_;
goto v_resetjp_924_;
}
else
{
lean_inc(v_a_923_);
lean_dec(v___x_922_);
v___x_925_ = lean_box(0);
v_isShared_926_ = v_isSharedCheck_959_;
goto v_resetjp_924_;
}
v_resetjp_924_:
{
lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___f_929_; lean_object* v___x_930_; lean_object* v___x_931_; 
v___x_927_ = lean_array_fget(v_literals_906_, v_i_897_);
lean_dec(v_i_897_);
lean_dec_ref(v_literals_906_);
v___x_928_ = lean_box(v___x_910_);
v___f_929_ = lean_alloc_closure((void*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith___lam__0___boxed), 13, 5);
lean_closure_set(v___f_929_, 0, v_target_908_);
lean_closure_set(v___f_929_, 1, v_vars_894_);
lean_closure_set(v___f_929_, 2, v_bindings_907_);
lean_closure_set(v___f_929_, 3, v___x_927_);
lean_closure_set(v___f_929_, 4, v___x_928_);
v___x_930_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith___closed__3));
lean_inc(v_a_923_);
v___x_931_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_930_, v_a_923_, v___f_929_, v_a_899_, v_a_900_, v_a_901_, v_a_902_, v_a_903_, v_a_904_);
if (lean_obj_tag(v___x_931_) == 0)
{
lean_object* v_a_932_; lean_object* v___x_934_; uint8_t v_isShared_935_; uint8_t v_isSharedCheck_958_; 
v_a_932_ = lean_ctor_get(v___x_931_, 0);
v_isSharedCheck_958_ = !lean_is_exclusive(v___x_931_);
if (v_isSharedCheck_958_ == 0)
{
v___x_934_ = v___x_931_;
v_isShared_935_ = v_isSharedCheck_958_;
goto v_resetjp_933_;
}
else
{
lean_inc(v_a_932_);
lean_dec(v___x_931_);
v___x_934_ = lean_box(0);
v_isShared_935_ = v_isSharedCheck_958_;
goto v_resetjp_933_;
}
v_resetjp_933_:
{
lean_object* v___x_936_; lean_object* v___x_938_; 
v___x_936_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith___closed__5));
if (v_isShared_935_ == 0)
{
lean_ctor_set_tag(v___x_934_, 1);
lean_ctor_set(v___x_934_, 0, v_a_923_);
v___x_938_ = v___x_934_;
goto v_reusejp_937_;
}
else
{
lean_object* v_reuseFailAlloc_957_; 
v_reuseFailAlloc_957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_957_, 0, v_a_923_);
v___x_938_ = v_reuseFailAlloc_957_;
goto v_reusejp_937_;
}
v_reusejp_937_:
{
lean_object* v___x_940_; 
if (v_isShared_926_ == 0)
{
lean_ctor_set_tag(v___x_925_, 1);
lean_ctor_set(v___x_925_, 0, v_a_932_);
v___x_940_ = v___x_925_;
goto v_reusejp_939_;
}
else
{
lean_object* v_reuseFailAlloc_956_; 
v_reuseFailAlloc_956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_956_, 0, v_a_932_);
v___x_940_ = v_reuseFailAlloc_956_;
goto v_reusejp_939_;
}
v_reusejp_939_:
{
lean_object* v___x_942_; 
if (v_isShared_921_ == 0)
{
lean_ctor_set_tag(v___x_920_, 1);
v___x_942_ = v___x_920_;
goto v_reusejp_941_;
}
else
{
lean_object* v_reuseFailAlloc_955_; 
v_reuseFailAlloc_955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_955_, 0, v_a_918_);
v___x_942_ = v_reuseFailAlloc_955_;
goto v_reusejp_941_;
}
v_reusejp_941_:
{
lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; 
v___x_943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_943_, 0, v_to_896_);
v___x_944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_944_, 0, v_heq_895_);
v___x_945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_945_, 0, v_h_898_);
v___x_946_ = lean_unsigned_to_nat(6u);
v___x_947_ = lean_mk_empty_array_with_capacity(v___x_946_);
v___x_948_ = lean_array_push(v___x_947_, v___x_938_);
v___x_949_ = lean_array_push(v___x_948_, v___x_940_);
v___x_950_ = lean_array_push(v___x_949_, v___x_942_);
v___x_951_ = lean_array_push(v___x_950_, v___x_943_);
v___x_952_ = lean_array_push(v___x_951_, v___x_944_);
v___x_953_ = lean_array_push(v___x_952_, v___x_945_);
v___x_954_ = l_Lean_Meta_mkAppOptM(v___x_936_, v___x_953_, v_a_901_, v_a_902_, v_a_903_, v_a_904_);
return v___x_954_;
}
}
}
}
}
else
{
lean_del_object(v___x_925_);
lean_dec(v_a_923_);
lean_del_object(v___x_920_);
lean_dec(v_a_918_);
lean_dec_ref(v_h_898_);
lean_dec_ref(v_to_896_);
lean_dec_ref(v_heq_895_);
return v___x_931_;
}
}
}
else
{
lean_del_object(v___x_920_);
lean_dec(v_a_918_);
lean_dec_ref(v_target_908_);
lean_dec_ref(v_bindings_907_);
lean_dec_ref(v_literals_906_);
lean_dec_ref(v_h_898_);
lean_dec(v_i_897_);
lean_dec_ref(v_to_896_);
lean_dec_ref(v_heq_895_);
lean_dec_ref(v_vars_894_);
return v___x_922_;
}
}
}
else
{
lean_dec_ref(v_target_908_);
lean_dec_ref(v_bindings_907_);
lean_dec_ref(v_literals_906_);
lean_dec_ref(v_h_898_);
lean_dec(v_i_897_);
lean_dec_ref(v_to_896_);
lean_dec_ref(v_heq_895_);
lean_dec_ref(v_vars_894_);
return v___x_917_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith___boxed(lean_object* v_rw_961_, lean_object* v_vars_962_, lean_object* v_heq_963_, lean_object* v_to_964_, lean_object* v_i_965_, lean_object* v_h_966_, lean_object* v_a_967_, lean_object* v_a_968_, lean_object* v_a_969_, lean_object* v_a_970_, lean_object* v_a_971_, lean_object* v_a_972_, lean_object* v_a_973_){
_start:
{
lean_object* v_res_974_; 
v_res_974_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith(v_rw_961_, v_vars_962_, v_heq_963_, v_to_964_, v_i_965_, v_h_966_, v_a_967_, v_a_968_, v_a_969_, v_a_970_, v_a_971_, v_a_972_);
lean_dec(v_a_972_);
lean_dec_ref(v_a_971_);
lean_dec(v_a_970_);
lean_dec_ref(v_a_969_);
lean_dec(v_a_968_);
lean_dec_ref(v_a_967_);
return v_res_974_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clauseAbstracting_spec__0(lean_object* v_rw_975_, lean_object* v_vars_976_, lean_object* v_x_977_, size_t v_sz_978_, size_t v_i_979_, lean_object* v_bs_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_){
_start:
{
uint8_t v___x_988_; 
v___x_988_ = lean_usize_dec_lt(v_i_979_, v_sz_978_);
if (v___x_988_ == 0)
{
lean_object* v___x_989_; 
v___x_989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_989_, 0, v_bs_980_);
return v___x_989_;
}
else
{
lean_object* v_v_990_; lean_object* v_fst_991_; lean_object* v_snd_992_; lean_object* v___x_994_; uint8_t v_isShared_995_; uint8_t v_isSharedCheck_1029_; 
v_v_990_ = lean_array_uget(v_bs_980_, v_i_979_);
v_fst_991_ = lean_ctor_get(v_v_990_, 0);
v_snd_992_ = lean_ctor_get(v_v_990_, 1);
v_isSharedCheck_1029_ = !lean_is_exclusive(v_v_990_);
if (v_isSharedCheck_1029_ == 0)
{
v___x_994_ = v_v_990_;
v_isShared_995_ = v_isSharedCheck_1029_;
goto v_resetjp_993_;
}
else
{
lean_inc(v_snd_992_);
lean_inc(v_fst_991_);
lean_dec(v_v_990_);
v___x_994_ = lean_box(0);
v_isShared_995_ = v_isSharedCheck_1029_;
goto v_resetjp_993_;
}
v_resetjp_993_:
{
lean_object* v_bindings_996_; lean_object* v_literal_997_; uint8_t v_wholePremise_998_; lean_object* v_target_999_; lean_object* v___x_1000_; lean_object* v_bs_x27_1001_; lean_object* v___y_1003_; uint8_t v___y_1021_; uint8_t v___x_1028_; 
v_bindings_996_ = lean_ctor_get(v_rw_975_, 1);
v_literal_997_ = lean_ctor_get(v_rw_975_, 2);
v_wholePremise_998_ = lean_ctor_get_uint8(v_rw_975_, sizeof(void*)*4);
v_target_999_ = lean_ctor_get(v_rw_975_, 3);
v___x_1000_ = lean_unsigned_to_nat(0u);
v_bs_x27_1001_ = lean_array_uset(v_bs_980_, v_i_979_, v___x_1000_);
v___x_1028_ = lean_nat_dec_eq(v_snd_992_, v_literal_997_);
lean_dec(v_snd_992_);
if (v___x_1028_ == 0)
{
v___y_1021_ = v_wholePremise_998_;
goto v___jp_1020_;
}
else
{
v___y_1021_ = v___x_1028_;
goto v___jp_1020_;
}
v___jp_1002_:
{
if (lean_obj_tag(v___y_1003_) == 0)
{
lean_object* v_a_1004_; size_t v___x_1005_; size_t v___x_1006_; lean_object* v___x_1007_; 
v_a_1004_ = lean_ctor_get(v___y_1003_, 0);
lean_inc(v_a_1004_);
lean_dec_ref_known(v___y_1003_, 1);
v___x_1005_ = ((size_t)1ULL);
v___x_1006_ = lean_usize_add(v_i_979_, v___x_1005_);
v___x_1007_ = lean_array_uset(v_bs_x27_1001_, v_i_979_, v_a_1004_);
v_i_979_ = v___x_1006_;
v_bs_980_ = v___x_1007_;
goto _start;
}
else
{
lean_object* v_a_1009_; lean_object* v___x_1011_; uint8_t v_isShared_1012_; uint8_t v_isSharedCheck_1016_; 
lean_dec_ref(v_bs_x27_1001_);
v_a_1009_ = lean_ctor_get(v___y_1003_, 0);
v_isSharedCheck_1016_ = !lean_is_exclusive(v___y_1003_);
if (v_isSharedCheck_1016_ == 0)
{
v___x_1011_ = v___y_1003_;
v_isShared_1012_ = v_isSharedCheck_1016_;
goto v_resetjp_1010_;
}
else
{
lean_inc(v_a_1009_);
lean_dec(v___y_1003_);
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
v___jp_1017_:
{
lean_object* v___x_1018_; lean_object* v___x_1019_; 
v___x_1018_ = lean_box(0);
v___x_1019_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt(v_vars_976_, v_bindings_996_, v_fst_991_, v___x_1018_, v___y_981_, v___y_982_, v___y_983_, v___y_984_, v___y_985_, v___y_986_);
v___y_1003_ = v___x_1019_;
goto v___jp_1002_;
}
v___jp_1020_:
{
if (v___y_1021_ == 0)
{
lean_del_object(v___x_994_);
goto v___jp_1017_;
}
else
{
if (lean_obj_tag(v_x_977_) == 0)
{
lean_del_object(v___x_994_);
goto v___jp_1017_;
}
else
{
lean_object* v_val_1022_; lean_object* v___x_1024_; 
v_val_1022_ = lean_ctor_get(v_x_977_, 0);
lean_inc(v_val_1022_);
lean_inc_ref(v_target_999_);
if (v_isShared_995_ == 0)
{
lean_ctor_set(v___x_994_, 1, v_val_1022_);
lean_ctor_set(v___x_994_, 0, v_target_999_);
v___x_1024_ = v___x_994_;
goto v_reusejp_1023_;
}
else
{
lean_object* v_reuseFailAlloc_1027_; 
v_reuseFailAlloc_1027_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1027_, 0, v_target_999_);
lean_ctor_set(v_reuseFailAlloc_1027_, 1, v_val_1022_);
v___x_1024_ = v_reuseFailAlloc_1027_;
goto v_reusejp_1023_;
}
v_reusejp_1023_:
{
lean_object* v___x_1025_; lean_object* v___x_1026_; 
v___x_1025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1025_, 0, v___x_1024_);
v___x_1026_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt(v_vars_976_, v_bindings_996_, v_fst_991_, v___x_1025_, v___y_981_, v___y_982_, v___y_983_, v___y_984_, v___y_985_, v___y_986_);
v___y_1003_ = v___x_1026_;
goto v___jp_1002_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clauseAbstracting_spec__0___boxed(lean_object* v_rw_1030_, lean_object* v_vars_1031_, lean_object* v_x_1032_, lean_object* v_sz_1033_, lean_object* v_i_1034_, lean_object* v_bs_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_){
_start:
{
size_t v_sz_boxed_1043_; size_t v_i_boxed_1044_; lean_object* v_res_1045_; 
v_sz_boxed_1043_ = lean_unbox_usize(v_sz_1033_);
lean_dec(v_sz_1033_);
v_i_boxed_1044_ = lean_unbox_usize(v_i_1034_);
lean_dec(v_i_1034_);
v_res_1045_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clauseAbstracting_spec__0(v_rw_1030_, v_vars_1031_, v_x_1032_, v_sz_boxed_1043_, v_i_boxed_1044_, v_bs_1035_, v___y_1036_, v___y_1037_, v___y_1038_, v___y_1039_, v___y_1040_, v___y_1041_);
lean_dec(v___y_1041_);
lean_dec_ref(v___y_1040_);
lean_dec(v___y_1039_);
lean_dec_ref(v___y_1038_);
lean_dec(v___y_1037_);
lean_dec_ref(v___y_1036_);
lean_dec(v_x_1032_);
lean_dec_ref(v_vars_1031_);
lean_dec_ref(v_rw_1030_);
return v_res_1045_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clauseAbstracting(lean_object* v_rw_1052_, lean_object* v_vars_1053_, lean_object* v_x_1054_, lean_object* v_a_1055_, lean_object* v_a_1056_, lean_object* v_a_1057_, lean_object* v_a_1058_, lean_object* v_a_1059_, lean_object* v_a_1060_){
_start:
{
lean_object* v_literals_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; size_t v_sz_1065_; size_t v___x_1066_; lean_object* v___x_1067_; 
v_literals_1062_ = lean_ctor_get(v_rw_1052_, 0);
v___x_1063_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_literals_1062_);
v___x_1064_ = l_Array_zipIdx___redArg(v_literals_1062_, v___x_1063_);
v_sz_1065_ = lean_array_size(v___x_1064_);
v___x_1066_ = ((size_t)0ULL);
v___x_1067_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clauseAbstracting_spec__0(v_rw_1052_, v_vars_1053_, v_x_1054_, v_sz_1065_, v___x_1066_, v___x_1064_, v_a_1055_, v_a_1056_, v_a_1057_, v_a_1058_, v_a_1059_, v_a_1060_);
lean_dec_ref(v_rw_1052_);
if (lean_obj_tag(v___x_1067_) == 0)
{
lean_object* v_a_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; 
v_a_1068_ = lean_ctor_get(v___x_1067_, 0);
lean_inc(v_a_1068_);
lean_dec_ref_known(v___x_1067_, 1);
v___x_1069_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clauseAbstracting___closed__1));
v___x_1070_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clauseAbstracting___closed__3));
v___x_1071_ = lp_vampireReplay_Vampire_Reconstruct_junction(v___x_1069_, v___x_1070_, v_a_1068_);
v___x_1072_ = lp_vampireReplay_Vampire_Reconstruct_sharedClause___redArg(v___x_1071_, v_a_1056_);
return v___x_1072_;
}
else
{
lean_object* v_a_1073_; lean_object* v___x_1075_; uint8_t v_isShared_1076_; uint8_t v_isSharedCheck_1080_; 
v_a_1073_ = lean_ctor_get(v___x_1067_, 0);
v_isSharedCheck_1080_ = !lean_is_exclusive(v___x_1067_);
if (v_isSharedCheck_1080_ == 0)
{
v___x_1075_ = v___x_1067_;
v_isShared_1076_ = v_isSharedCheck_1080_;
goto v_resetjp_1074_;
}
else
{
lean_inc(v_a_1073_);
lean_dec(v___x_1067_);
v___x_1075_ = lean_box(0);
v_isShared_1076_ = v_isSharedCheck_1080_;
goto v_resetjp_1074_;
}
v_resetjp_1074_:
{
lean_object* v___x_1078_; 
if (v_isShared_1076_ == 0)
{
v___x_1078_ = v___x_1075_;
goto v_reusejp_1077_;
}
else
{
lean_object* v_reuseFailAlloc_1079_; 
v_reuseFailAlloc_1079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1079_, 0, v_a_1073_);
v___x_1078_ = v_reuseFailAlloc_1079_;
goto v_reusejp_1077_;
}
v_reusejp_1077_:
{
return v___x_1078_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clauseAbstracting___boxed(lean_object* v_rw_1081_, lean_object* v_vars_1082_, lean_object* v_x_1083_, lean_object* v_a_1084_, lean_object* v_a_1085_, lean_object* v_a_1086_, lean_object* v_a_1087_, lean_object* v_a_1088_, lean_object* v_a_1089_, lean_object* v_a_1090_){
_start:
{
lean_object* v_res_1091_; 
v_res_1091_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clauseAbstracting(v_rw_1081_, v_vars_1082_, v_x_1083_, v_a_1084_, v_a_1085_, v_a_1086_, v_a_1087_, v_a_1088_, v_a_1089_);
lean_dec(v_a_1089_);
lean_dec_ref(v_a_1088_);
lean_dec(v_a_1087_);
lean_dec_ref(v_a_1086_);
lean_dec(v_a_1085_);
lean_dec_ref(v_a_1084_);
lean_dec(v_x_1083_);
lean_dec_ref(v_vars_1082_);
return v_res_1091_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clausePartsOf_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_1093_; lean_object* v___x_1094_; 
v___x_1093_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clausePartsOf_spec__0___redArg___closed__0));
v___x_1094_ = l_Lean_stringToMessageData(v___x_1093_);
return v___x_1094_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clausePartsOf_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_1096_; lean_object* v___x_1097_; 
v___x_1096_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clausePartsOf_spec__0___redArg___closed__2));
v___x_1097_ = l_Lean_stringToMessageData(v___x_1096_);
return v___x_1097_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clausePartsOf_spec__0___redArg(lean_object* v_count_1098_, lean_object* v_whole_1099_, lean_object* v_range_1100_, lean_object* v_b_1101_, lean_object* v_i_1102_, lean_object* v___y_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_){
_start:
{
lean_object* v_stop_1108_; lean_object* v_step_1109_; uint8_t v___x_1110_; 
v_stop_1108_ = lean_ctor_get(v_range_1100_, 1);
v_step_1109_ = lean_ctor_get(v_range_1100_, 2);
v___x_1110_ = lean_nat_dec_lt(v_i_1102_, v_stop_1108_);
if (v___x_1110_ == 0)
{
lean_object* v___x_1111_; 
lean_dec(v_i_1102_);
lean_dec_ref(v_whole_1099_);
lean_dec(v_count_1098_);
v___x_1111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1111_, 0, v_b_1101_);
return v___x_1111_;
}
else
{
lean_object* v_fst_1112_; lean_object* v_snd_1113_; lean_object* v___x_1115_; uint8_t v_isShared_1116_; uint8_t v_isSharedCheck_1148_; 
v_fst_1112_ = lean_ctor_get(v_b_1101_, 0);
v_snd_1113_ = lean_ctor_get(v_b_1101_, 1);
v_isSharedCheck_1148_ = !lean_is_exclusive(v_b_1101_);
if (v_isSharedCheck_1148_ == 0)
{
v___x_1115_ = v_b_1101_;
v_isShared_1116_ = v_isSharedCheck_1148_;
goto v_resetjp_1114_;
}
else
{
lean_inc(v_snd_1113_);
lean_inc(v_fst_1112_);
lean_dec(v_b_1101_);
v___x_1115_ = lean_box(0);
v_isShared_1116_ = v_isSharedCheck_1148_;
goto v_resetjp_1114_;
}
v_resetjp_1114_:
{
lean_object* v___x_1127_; lean_object* v___x_1128_; uint8_t v___x_1129_; 
v___x_1127_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clauseAbstracting___closed__1));
v___x_1128_ = lean_unsigned_to_nat(2u);
v___x_1129_ = l_Lean_Expr_isAppOfArity(v_snd_1113_, v___x_1127_, v___x_1128_);
if (v___x_1129_ == 0)
{
lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v_a_1140_; lean_object* v___x_1142_; uint8_t v_isShared_1143_; uint8_t v_isSharedCheck_1147_; 
lean_del_object(v___x_1115_);
lean_dec(v_snd_1113_);
lean_dec(v_fst_1112_);
lean_dec(v_i_1102_);
v___x_1130_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clausePartsOf_spec__0___redArg___closed__1, &lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clausePartsOf_spec__0___redArg___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clausePartsOf_spec__0___redArg___closed__1);
v___x_1131_ = l_Nat_reprFast(v_count_1098_);
v___x_1132_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1132_, 0, v___x_1131_);
v___x_1133_ = l_Lean_MessageData_ofFormat(v___x_1132_);
v___x_1134_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1134_, 0, v___x_1130_);
lean_ctor_set(v___x_1134_, 1, v___x_1133_);
v___x_1135_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clausePartsOf_spec__0___redArg___closed__3, &lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clausePartsOf_spec__0___redArg___closed__3_once, _init_lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clausePartsOf_spec__0___redArg___closed__3);
v___x_1136_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1136_, 0, v___x_1134_);
lean_ctor_set(v___x_1136_, 1, v___x_1135_);
v___x_1137_ = l_Lean_indentExpr(v_whole_1099_);
v___x_1138_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1138_, 0, v___x_1136_);
lean_ctor_set(v___x_1138_, 1, v___x_1137_);
v___x_1139_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1138_, v___y_1103_, v___y_1104_, v___y_1105_, v___y_1106_);
v_a_1140_ = lean_ctor_get(v___x_1139_, 0);
v_isSharedCheck_1147_ = !lean_is_exclusive(v___x_1139_);
if (v_isSharedCheck_1147_ == 0)
{
v___x_1142_ = v___x_1139_;
v_isShared_1143_ = v_isSharedCheck_1147_;
goto v_resetjp_1141_;
}
else
{
lean_inc(v_a_1140_);
lean_dec(v___x_1139_);
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
else
{
goto v___jp_1117_;
}
v___jp_1117_:
{
lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1123_; 
v___x_1118_ = l_Lean_Expr_appFn_x21(v_snd_1113_);
v___x_1119_ = l_Lean_Expr_appArg_x21(v___x_1118_);
lean_dec_ref(v___x_1118_);
v___x_1120_ = lean_array_push(v_fst_1112_, v___x_1119_);
v___x_1121_ = l_Lean_Expr_appArg_x21(v_snd_1113_);
lean_dec(v_snd_1113_);
if (v_isShared_1116_ == 0)
{
lean_ctor_set(v___x_1115_, 1, v___x_1121_);
lean_ctor_set(v___x_1115_, 0, v___x_1120_);
v___x_1123_ = v___x_1115_;
goto v_reusejp_1122_;
}
else
{
lean_object* v_reuseFailAlloc_1126_; 
v_reuseFailAlloc_1126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1126_, 0, v___x_1120_);
lean_ctor_set(v_reuseFailAlloc_1126_, 1, v___x_1121_);
v___x_1123_ = v_reuseFailAlloc_1126_;
goto v_reusejp_1122_;
}
v_reusejp_1122_:
{
lean_object* v___x_1124_; 
v___x_1124_ = lean_nat_add(v_i_1102_, v_step_1109_);
lean_dec(v_i_1102_);
v_b_1101_ = v___x_1123_;
v_i_1102_ = v___x_1124_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clausePartsOf_spec__0___redArg___boxed(lean_object* v_count_1149_, lean_object* v_whole_1150_, lean_object* v_range_1151_, lean_object* v_b_1152_, lean_object* v_i_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_){
_start:
{
lean_object* v_res_1159_; 
v_res_1159_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clausePartsOf_spec__0___redArg(v_count_1149_, v_whole_1150_, v_range_1151_, v_b_1152_, v_i_1153_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_);
lean_dec(v___y_1157_);
lean_dec_ref(v___y_1156_);
lean_dec(v___y_1155_);
lean_dec_ref(v___y_1154_);
lean_dec_ref(v_range_1151_);
return v_res_1159_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clausePartsOf(lean_object* v_whole_1162_, lean_object* v_count_1163_, lean_object* v_a_1164_, lean_object* v_a_1165_, lean_object* v_a_1166_, lean_object* v_a_1167_, lean_object* v_a_1168_, lean_object* v_a_1169_){
_start:
{
lean_object* v___x_1171_; uint8_t v___x_1172_; 
v___x_1171_ = lean_unsigned_to_nat(0u);
v___x_1172_ = lean_nat_dec_eq(v_count_1163_, v___x_1171_);
if (v___x_1172_ == 0)
{
lean_object* v_parts_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; 
v_parts_1173_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clausePartsOf___closed__0));
v___x_1174_ = lean_unsigned_to_nat(1u);
v___x_1175_ = lean_nat_sub(v_count_1163_, v___x_1174_);
v___x_1176_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1176_, 0, v___x_1171_);
lean_ctor_set(v___x_1176_, 1, v___x_1175_);
lean_ctor_set(v___x_1176_, 2, v___x_1174_);
lean_inc_ref(v_whole_1162_);
v___x_1177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1177_, 0, v_parts_1173_);
lean_ctor_set(v___x_1177_, 1, v_whole_1162_);
v___x_1178_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clausePartsOf_spec__0___redArg(v_count_1163_, v_whole_1162_, v___x_1176_, v___x_1177_, v___x_1171_, v_a_1166_, v_a_1167_, v_a_1168_, v_a_1169_);
lean_dec_ref_known(v___x_1176_, 3);
if (lean_obj_tag(v___x_1178_) == 0)
{
lean_object* v_a_1179_; lean_object* v___x_1181_; uint8_t v_isShared_1182_; uint8_t v_isSharedCheck_1189_; 
v_a_1179_ = lean_ctor_get(v___x_1178_, 0);
v_isSharedCheck_1189_ = !lean_is_exclusive(v___x_1178_);
if (v_isSharedCheck_1189_ == 0)
{
v___x_1181_ = v___x_1178_;
v_isShared_1182_ = v_isSharedCheck_1189_;
goto v_resetjp_1180_;
}
else
{
lean_inc(v_a_1179_);
lean_dec(v___x_1178_);
v___x_1181_ = lean_box(0);
v_isShared_1182_ = v_isSharedCheck_1189_;
goto v_resetjp_1180_;
}
v_resetjp_1180_:
{
lean_object* v_fst_1183_; lean_object* v_snd_1184_; lean_object* v___x_1185_; lean_object* v___x_1187_; 
v_fst_1183_ = lean_ctor_get(v_a_1179_, 0);
lean_inc(v_fst_1183_);
v_snd_1184_ = lean_ctor_get(v_a_1179_, 1);
lean_inc(v_snd_1184_);
lean_dec(v_a_1179_);
v___x_1185_ = lean_array_push(v_fst_1183_, v_snd_1184_);
if (v_isShared_1182_ == 0)
{
lean_ctor_set(v___x_1181_, 0, v___x_1185_);
v___x_1187_ = v___x_1181_;
goto v_reusejp_1186_;
}
else
{
lean_object* v_reuseFailAlloc_1188_; 
v_reuseFailAlloc_1188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1188_, 0, v___x_1185_);
v___x_1187_ = v_reuseFailAlloc_1188_;
goto v_reusejp_1186_;
}
v_reusejp_1186_:
{
return v___x_1187_;
}
}
}
else
{
lean_object* v_a_1190_; lean_object* v___x_1192_; uint8_t v_isShared_1193_; uint8_t v_isSharedCheck_1197_; 
v_a_1190_ = lean_ctor_get(v___x_1178_, 0);
v_isSharedCheck_1197_ = !lean_is_exclusive(v___x_1178_);
if (v_isSharedCheck_1197_ == 0)
{
v___x_1192_ = v___x_1178_;
v_isShared_1193_ = v_isSharedCheck_1197_;
goto v_resetjp_1191_;
}
else
{
lean_inc(v_a_1190_);
lean_dec(v___x_1178_);
v___x_1192_ = lean_box(0);
v_isShared_1193_ = v_isSharedCheck_1197_;
goto v_resetjp_1191_;
}
v_resetjp_1191_:
{
lean_object* v___x_1195_; 
if (v_isShared_1193_ == 0)
{
v___x_1195_ = v___x_1192_;
goto v_reusejp_1194_;
}
else
{
lean_object* v_reuseFailAlloc_1196_; 
v_reuseFailAlloc_1196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1196_, 0, v_a_1190_);
v___x_1195_ = v_reuseFailAlloc_1196_;
goto v_reusejp_1194_;
}
v_reusejp_1194_:
{
return v___x_1195_;
}
}
}
}
else
{
lean_object* v___x_1198_; lean_object* v___x_1199_; 
lean_dec(v_count_1163_);
lean_dec_ref(v_whole_1162_);
v___x_1198_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clausePartsOf___closed__0));
v___x_1199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1199_, 0, v___x_1198_);
return v___x_1199_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clausePartsOf___boxed(lean_object* v_whole_1200_, lean_object* v_count_1201_, lean_object* v_a_1202_, lean_object* v_a_1203_, lean_object* v_a_1204_, lean_object* v_a_1205_, lean_object* v_a_1206_, lean_object* v_a_1207_, lean_object* v_a_1208_){
_start:
{
lean_object* v_res_1209_; 
v_res_1209_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clausePartsOf(v_whole_1200_, v_count_1201_, v_a_1202_, v_a_1203_, v_a_1204_, v_a_1205_, v_a_1206_, v_a_1207_);
lean_dec(v_a_1207_);
lean_dec_ref(v_a_1206_);
lean_dec(v_a_1205_);
lean_dec_ref(v_a_1204_);
lean_dec(v_a_1203_);
lean_dec_ref(v_a_1202_);
return v_res_1209_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clausePartsOf_spec__0(lean_object* v_count_1210_, lean_object* v_whole_1211_, lean_object* v_range_1212_, lean_object* v_b_1213_, lean_object* v_i_1214_, lean_object* v_hs_1215_, lean_object* v_hl_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_){
_start:
{
lean_object* v___x_1224_; 
v___x_1224_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clausePartsOf_spec__0___redArg(v_count_1210_, v_whole_1211_, v_range_1212_, v_b_1213_, v_i_1214_, v___y_1219_, v___y_1220_, v___y_1221_, v___y_1222_);
return v___x_1224_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clausePartsOf_spec__0___boxed(lean_object* v_count_1225_, lean_object* v_whole_1226_, lean_object* v_range_1227_, lean_object* v_b_1228_, lean_object* v_i_1229_, lean_object* v_hs_1230_, lean_object* v_hl_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_, lean_object* v___y_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_){
_start:
{
lean_object* v_res_1239_; 
v_res_1239_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clausePartsOf_spec__0(v_count_1225_, v_whole_1226_, v_range_1227_, v_b_1228_, v_i_1229_, v_hs_1230_, v_hl_1231_, v___y_1232_, v___y_1233_, v___y_1234_, v___y_1235_, v___y_1236_, v___y_1237_);
lean_dec(v___y_1237_);
lean_dec_ref(v___y_1236_);
lean_dec(v___y_1235_);
lean_dec_ref(v___y_1234_);
lean_dec(v___y_1233_);
lean_dec_ref(v___y_1232_);
lean_dec_ref(v_range_1227_);
return v_res_1239_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clauseRewritten(lean_object* v_rw_1240_, lean_object* v_vars_1241_, lean_object* v_stated_1242_, lean_object* v_to_1243_, lean_object* v_a_1244_, lean_object* v_a_1245_, lean_object* v_a_1246_, lean_object* v_a_1247_, lean_object* v_a_1248_, lean_object* v_a_1249_){
_start:
{
uint8_t v_wholePremise_1251_; 
v_wholePremise_1251_ = lean_ctor_get_uint8(v_rw_1240_, sizeof(void*)*4);
if (v_wholePremise_1251_ == 0)
{
lean_object* v_literals_1252_; lean_object* v_bindings_1253_; lean_object* v_literal_1254_; lean_object* v_target_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; 
v_literals_1252_ = lean_ctor_get(v_rw_1240_, 0);
lean_inc_ref(v_literals_1252_);
v_bindings_1253_ = lean_ctor_get(v_rw_1240_, 1);
lean_inc_ref(v_bindings_1253_);
v_literal_1254_ = lean_ctor_get(v_rw_1240_, 2);
lean_inc(v_literal_1254_);
v_target_1255_ = lean_ctor_get(v_rw_1240_, 3);
lean_inc_ref(v_target_1255_);
lean_dec_ref(v_rw_1240_);
v___x_1256_ = lean_array_get_size(v_literals_1252_);
v___x_1257_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clausePartsOf(v_stated_1242_, v___x_1256_, v_a_1244_, v_a_1245_, v_a_1246_, v_a_1247_, v_a_1248_, v_a_1249_);
if (lean_obj_tag(v___x_1257_) == 0)
{
lean_object* v_a_1258_; uint8_t v___x_1259_; 
v_a_1258_ = lean_ctor_get(v___x_1257_, 0);
lean_inc(v_a_1258_);
lean_dec_ref_known(v___x_1257_, 1);
v___x_1259_ = lean_nat_dec_lt(v_literal_1254_, v___x_1256_);
if (v___x_1259_ == 0)
{
lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; 
lean_dec(v_a_1258_);
lean_dec_ref(v_target_1255_);
lean_dec_ref(v_bindings_1253_);
lean_dec_ref(v_literals_1252_);
lean_dec_ref(v_to_1243_);
v___x_1260_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith___closed__1, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith___closed__1_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith___closed__1);
v___x_1261_ = l_Nat_reprFast(v_literal_1254_);
v___x_1262_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1262_, 0, v___x_1261_);
v___x_1263_ = l_Lean_MessageData_ofFormat(v___x_1262_);
v___x_1264_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1264_, 0, v___x_1260_);
lean_ctor_set(v___x_1264_, 1, v___x_1263_);
v___x_1265_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1264_, v_a_1246_, v_a_1247_, v_a_1248_, v_a_1249_);
return v___x_1265_;
}
else
{
lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; 
v___x_1266_ = lean_array_fget(v_literals_1252_, v_literal_1254_);
lean_dec_ref(v_literals_1252_);
v___x_1267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1267_, 0, v_target_1255_);
lean_ctor_set(v___x_1267_, 1, v_to_1243_);
v___x_1268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1268_, 0, v___x_1267_);
v___x_1269_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt(v_vars_1241_, v_bindings_1253_, v___x_1266_, v___x_1268_, v_a_1244_, v_a_1245_, v_a_1246_, v_a_1247_, v_a_1248_, v_a_1249_);
lean_dec_ref(v_bindings_1253_);
if (lean_obj_tag(v___x_1269_) == 0)
{
lean_object* v_a_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; 
v_a_1270_ = lean_ctor_get(v___x_1269_, 0);
lean_inc(v_a_1270_);
lean_dec_ref_known(v___x_1269_, 1);
v___x_1271_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clauseAbstracting___closed__1));
v___x_1272_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clauseAbstracting___closed__3));
v___x_1273_ = lean_array_set(v_a_1258_, v_literal_1254_, v_a_1270_);
lean_dec(v_literal_1254_);
v___x_1274_ = lp_vampireReplay_Vampire_Reconstruct_junction(v___x_1271_, v___x_1272_, v___x_1273_);
v___x_1275_ = lp_vampireReplay_Vampire_Reconstruct_sharedClause___redArg(v___x_1274_, v_a_1245_);
return v___x_1275_;
}
else
{
lean_dec(v_a_1258_);
lean_dec(v_literal_1254_);
return v___x_1269_;
}
}
}
else
{
lean_object* v_a_1276_; lean_object* v___x_1278_; uint8_t v_isShared_1279_; uint8_t v_isSharedCheck_1283_; 
lean_dec_ref(v_target_1255_);
lean_dec(v_literal_1254_);
lean_dec_ref(v_bindings_1253_);
lean_dec_ref(v_literals_1252_);
lean_dec_ref(v_to_1243_);
v_a_1276_ = lean_ctor_get(v___x_1257_, 0);
v_isSharedCheck_1283_ = !lean_is_exclusive(v___x_1257_);
if (v_isSharedCheck_1283_ == 0)
{
v___x_1278_ = v___x_1257_;
v_isShared_1279_ = v_isSharedCheck_1283_;
goto v_resetjp_1277_;
}
else
{
lean_inc(v_a_1276_);
lean_dec(v___x_1257_);
v___x_1278_ = lean_box(0);
v_isShared_1279_ = v_isSharedCheck_1283_;
goto v_resetjp_1277_;
}
v_resetjp_1277_:
{
lean_object* v___x_1281_; 
if (v_isShared_1279_ == 0)
{
v___x_1281_ = v___x_1278_;
goto v_reusejp_1280_;
}
else
{
lean_object* v_reuseFailAlloc_1282_; 
v_reuseFailAlloc_1282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1282_, 0, v_a_1276_);
v___x_1281_ = v_reuseFailAlloc_1282_;
goto v_reusejp_1280_;
}
v_reusejp_1280_:
{
return v___x_1281_;
}
}
}
}
else
{
lean_object* v___x_1284_; lean_object* v___x_1285_; 
lean_dec_ref(v_stated_1242_);
v___x_1284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1284_, 0, v_to_1243_);
v___x_1285_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clauseAbstracting(v_rw_1240_, v_vars_1241_, v___x_1284_, v_a_1244_, v_a_1245_, v_a_1246_, v_a_1247_, v_a_1248_, v_a_1249_);
lean_dec_ref_known(v___x_1284_, 1);
return v___x_1285_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clauseRewritten___boxed(lean_object* v_rw_1286_, lean_object* v_vars_1287_, lean_object* v_stated_1288_, lean_object* v_to_1289_, lean_object* v_a_1290_, lean_object* v_a_1291_, lean_object* v_a_1292_, lean_object* v_a_1293_, lean_object* v_a_1294_, lean_object* v_a_1295_, lean_object* v_a_1296_){
_start:
{
lean_object* v_res_1297_; 
v_res_1297_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clauseRewritten(v_rw_1286_, v_vars_1287_, v_stated_1288_, v_to_1289_, v_a_1290_, v_a_1291_, v_a_1292_, v_a_1293_, v_a_1294_, v_a_1295_);
lean_dec(v_a_1295_);
lean_dec_ref(v_a_1294_);
lean_dec(v_a_1293_);
lean_dec_ref(v_a_1292_);
lean_dec(v_a_1291_);
lean_dec_ref(v_a_1290_);
lean_dec_ref(v_vars_1287_);
return v_res_1297_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_demodulation___lam__0(lean_object* v_a_1298_, lean_object* v_a_1299_, lean_object* v_snd_1300_, lean_object* v___x_1301_, uint8_t v___x_1302_, lean_object* v_x_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_){
_start:
{
lean_object* v___x_1311_; 
lean_inc_ref(v_x_1303_);
v___x_1311_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clauseRewritten(v_a_1298_, v_a_1299_, v_snd_1300_, v_x_1303_, v___y_1304_, v___y_1305_, v___y_1306_, v___y_1307_, v___y_1308_, v___y_1309_);
if (lean_obj_tag(v___x_1311_) == 0)
{
lean_object* v_a_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; uint8_t v___x_1315_; uint8_t v___x_1316_; lean_object* v___x_1317_; 
v_a_1312_ = lean_ctor_get(v___x_1311_, 0);
lean_inc(v_a_1312_);
lean_dec_ref_known(v___x_1311_, 1);
v___x_1313_ = lean_mk_empty_array_with_capacity(v___x_1301_);
v___x_1314_ = lean_array_push(v___x_1313_, v_x_1303_);
v___x_1315_ = 0;
v___x_1316_ = 1;
v___x_1317_ = l_Lean_Meta_mkLambdaFVars(v___x_1314_, v_a_1312_, v___x_1315_, v___x_1302_, v___x_1315_, v___x_1302_, v___x_1316_, v___y_1306_, v___y_1307_, v___y_1308_, v___y_1309_);
lean_dec_ref(v___x_1314_);
return v___x_1317_;
}
else
{
lean_dec_ref(v_x_1303_);
return v___x_1311_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_demodulation___lam__0___boxed(lean_object* v_a_1318_, lean_object* v_a_1319_, lean_object* v_snd_1320_, lean_object* v___x_1321_, lean_object* v___x_1322_, lean_object* v_x_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_){
_start:
{
uint8_t v___x_15131__boxed_1331_; lean_object* v_res_1332_; 
v___x_15131__boxed_1331_ = lean_unbox(v___x_1322_);
v_res_1332_ = lp_vampireReplay_Vampire_Reconstruct_Rewrite_demodulation___lam__0(v_a_1318_, v_a_1319_, v_snd_1320_, v___x_1321_, v___x_15131__boxed_1331_, v_x_1323_, v___y_1324_, v___y_1325_, v___y_1326_, v___y_1327_, v___y_1328_, v___y_1329_);
lean_dec(v___y_1329_);
lean_dec_ref(v___y_1328_);
lean_dec(v___y_1327_);
lean_dec_ref(v___y_1326_);
lean_dec(v___y_1325_);
lean_dec_ref(v___y_1324_);
lean_dec(v___x_1321_);
lean_dec_ref(v_a_1319_);
return v_res_1332_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_demodulation___lam__1(lean_object* v___x_1333_, lean_object* v___x_1334_, lean_object* v_unit_1335_, lean_object* v___x_1336_, lean_object* v_a_1337_, lean_object* v_fst_1338_, lean_object* v_snd_1339_, lean_object* v___x_1340_, lean_object* v_a_1341_, lean_object* v_fst_1342_, lean_object* v_snd_1343_, lean_object* v___x_1344_, uint8_t v___x_1345_, lean_object* v_xs_1346_, lean_object* v_target_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_){
_start:
{
lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; size_t v_sz_1358_; size_t v___x_1359_; lean_object* v___x_1360_; 
v___x_1355_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__6, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__6_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__6);
v___x_1356_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1356_, 0, v___x_1333_);
lean_ctor_set(v___x_1356_, 1, v___x_1355_);
v___x_1357_ = l_Array_zip___redArg(v_xs_1346_, v___x_1334_);
v_sz_1358_ = lean_array_size(v___x_1357_);
v___x_1359_ = ((size_t)0ULL);
v___x_1360_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__0___redArg(v___x_1357_, v_sz_1358_, v___x_1359_, v___x_1356_);
lean_dec_ref(v___x_1357_);
if (lean_obj_tag(v___x_1360_) == 0)
{
lean_object* v_a_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; 
v_a_1361_ = lean_ctor_get(v___x_1360_, 0);
lean_inc(v_a_1361_);
lean_dec_ref_known(v___x_1360_, 1);
v___x_1362_ = lp_vampireReplay_Vampire_Unit_boundVarSorts(v_unit_1335_);
lean_inc_ref(v___x_1336_);
v___x_1363_ = lp_vampireReplay_Vampire_Reconstruct_coverVars(v___x_1336_, v_a_1361_, v___x_1362_, v___y_1348_, v___y_1349_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_);
lean_dec_ref(v___x_1362_);
if (lean_obj_tag(v___x_1363_) == 0)
{
lean_object* v_a_1364_; lean_object* v___x_1365_; 
v_a_1364_ = lean_ctor_get(v___x_1363_, 0);
lean_inc(v_a_1364_);
lean_dec_ref_known(v___x_1363_, 1);
lean_inc_ref(v_a_1337_);
lean_inc_ref(v___x_1336_);
v___x_1365_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewrittenOf(v___x_1336_, v_a_1337_, v_a_1364_, v___y_1348_, v___y_1349_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_);
if (lean_obj_tag(v___x_1365_) == 0)
{
lean_object* v_a_1366_; lean_object* v___x_1367_; 
v_a_1366_ = lean_ctor_get(v___x_1365_, 0);
lean_inc(v_a_1366_);
lean_dec_ref_known(v___x_1365_, 1);
v___x_1367_ = lp_vampireReplay_Vampire_Reconstruct_instantiateAt(v___x_1336_, v_a_1337_, v_a_1364_, v_fst_1338_, v_snd_1339_, v___y_1348_, v___y_1349_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_);
if (lean_obj_tag(v___x_1367_) == 0)
{
lean_object* v_a_1368_; lean_object* v_fst_1369_; lean_object* v_snd_1370_; lean_object* v___x_1371_; 
v_a_1368_ = lean_ctor_get(v___x_1367_, 0);
lean_inc(v_a_1368_);
lean_dec_ref_known(v___x_1367_, 1);
v_fst_1369_ = lean_ctor_get(v_a_1368_, 0);
lean_inc(v_fst_1369_);
v_snd_1370_ = lean_ctor_get(v_a_1368_, 1);
lean_inc(v_snd_1370_);
lean_dec(v_a_1368_);
lean_inc_ref(v_a_1341_);
v___x_1371_ = lp_vampireReplay_Vampire_Reconstruct_instantiateAt(v___x_1340_, v_a_1341_, v_a_1364_, v_fst_1342_, v_snd_1343_, v___y_1348_, v___y_1349_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_);
if (lean_obj_tag(v___x_1371_) == 0)
{
lean_object* v_a_1372_; lean_object* v_fst_1373_; lean_object* v_snd_1374_; lean_object* v___x_1375_; 
v_a_1372_ = lean_ctor_get(v___x_1371_, 0);
lean_inc(v_a_1372_);
lean_dec_ref_known(v___x_1371_, 1);
v_fst_1373_ = lean_ctor_get(v_a_1372_, 0);
lean_inc(v_fst_1373_);
v_snd_1374_ = lean_ctor_get(v_a_1372_, 1);
lean_inc(v_snd_1374_);
lean_dec(v_a_1372_);
v___x_1375_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation(v_a_1341_, v_a_1364_, v_fst_1373_, v_snd_1374_, v___y_1348_, v___y_1349_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_);
if (lean_obj_tag(v___x_1375_) == 0)
{
lean_object* v_a_1376_; lean_object* v_snd_1377_; lean_object* v_fst_1378_; lean_object* v_snd_1379_; lean_object* v_target_1380_; lean_object* v___x_1381_; 
v_a_1376_ = lean_ctor_get(v___x_1375_, 0);
lean_inc(v_a_1376_);
lean_dec_ref_known(v___x_1375_, 1);
v_snd_1377_ = lean_ctor_get(v_a_1376_, 1);
lean_inc(v_snd_1377_);
lean_dec(v_a_1376_);
v_fst_1378_ = lean_ctor_get(v_snd_1377_, 0);
lean_inc(v_fst_1378_);
v_snd_1379_ = lean_ctor_get(v_snd_1377_, 1);
lean_inc(v_snd_1379_);
lean_dec(v_snd_1377_);
v_target_1380_ = lean_ctor_get(v_a_1366_, 3);
lean_inc_ref(v_target_1380_);
v___x_1381_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_toExpr(v_target_1380_, v___y_1348_, v___y_1349_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_);
if (lean_obj_tag(v___x_1381_) == 0)
{
lean_object* v_a_1382_; lean_object* v___x_1384_; uint8_t v_isShared_1385_; uint8_t v_isSharedCheck_1431_; 
v_a_1382_ = lean_ctor_get(v___x_1381_, 0);
v_isSharedCheck_1431_ = !lean_is_exclusive(v___x_1381_);
if (v_isSharedCheck_1431_ == 0)
{
v___x_1384_ = v___x_1381_;
v_isShared_1385_ = v_isSharedCheck_1431_;
goto v_resetjp_1383_;
}
else
{
lean_inc(v_a_1382_);
lean_dec(v___x_1381_);
v___x_1384_ = lean_box(0);
v_isShared_1385_ = v_isSharedCheck_1431_;
goto v_resetjp_1383_;
}
v_resetjp_1383_:
{
lean_object* v___x_1386_; 
lean_inc(v___y_1353_);
lean_inc_ref(v___y_1352_);
lean_inc(v___y_1351_);
lean_inc_ref(v___y_1350_);
lean_inc(v_a_1382_);
v___x_1386_ = lean_infer_type(v_a_1382_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_);
if (lean_obj_tag(v___x_1386_) == 0)
{
lean_object* v_a_1387_; lean_object* v___x_1389_; uint8_t v_isShared_1390_; uint8_t v_isSharedCheck_1430_; 
v_a_1387_ = lean_ctor_get(v___x_1386_, 0);
v_isSharedCheck_1430_ = !lean_is_exclusive(v___x_1386_);
if (v_isSharedCheck_1430_ == 0)
{
v___x_1389_ = v___x_1386_;
v_isShared_1390_ = v_isSharedCheck_1430_;
goto v_resetjp_1388_;
}
else
{
lean_inc(v_a_1387_);
lean_dec(v___x_1386_);
v___x_1389_ = lean_box(0);
v_isShared_1390_ = v_isSharedCheck_1430_;
goto v_resetjp_1388_;
}
v_resetjp_1388_:
{
lean_object* v___x_1391_; lean_object* v___f_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; 
v___x_1391_ = lean_box(v___x_1345_);
lean_inc(v_snd_1370_);
lean_inc(v_a_1364_);
lean_inc(v_a_1366_);
v___f_1392_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Rewrite_demodulation___lam__0___boxed), 13, 5);
lean_closure_set(v___f_1392_, 0, v_a_1366_);
lean_closure_set(v___f_1392_, 1, v_a_1364_);
lean_closure_set(v___f_1392_, 2, v_snd_1370_);
lean_closure_set(v___f_1392_, 3, v___x_1344_);
lean_closure_set(v___f_1392_, 4, v___x_1391_);
v___x_1393_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith___closed__3));
lean_inc(v_a_1387_);
v___x_1394_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_1393_, v_a_1387_, v___f_1392_, v___y_1348_, v___y_1349_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_);
if (lean_obj_tag(v___x_1394_) == 0)
{
lean_object* v_a_1395_; lean_object* v___x_1397_; uint8_t v_isShared_1398_; uint8_t v_isSharedCheck_1429_; 
v_a_1395_ = lean_ctor_get(v___x_1394_, 0);
v_isSharedCheck_1429_ = !lean_is_exclusive(v___x_1394_);
if (v_isSharedCheck_1429_ == 0)
{
v___x_1397_ = v___x_1394_;
v_isShared_1398_ = v_isSharedCheck_1429_;
goto v_resetjp_1396_;
}
else
{
lean_inc(v_a_1395_);
lean_dec(v___x_1394_);
v___x_1397_ = lean_box(0);
v_isShared_1398_ = v_isSharedCheck_1429_;
goto v_resetjp_1396_;
}
v_resetjp_1396_:
{
lean_object* v___x_1399_; lean_object* v___x_1401_; 
v___x_1399_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith___closed__5));
if (v_isShared_1398_ == 0)
{
lean_ctor_set_tag(v___x_1397_, 1);
lean_ctor_set(v___x_1397_, 0, v_a_1387_);
v___x_1401_ = v___x_1397_;
goto v_reusejp_1400_;
}
else
{
lean_object* v_reuseFailAlloc_1428_; 
v_reuseFailAlloc_1428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1428_, 0, v_a_1387_);
v___x_1401_ = v_reuseFailAlloc_1428_;
goto v_reusejp_1400_;
}
v_reusejp_1400_:
{
lean_object* v___x_1403_; 
if (v_isShared_1390_ == 0)
{
lean_ctor_set_tag(v___x_1389_, 1);
lean_ctor_set(v___x_1389_, 0, v_a_1395_);
v___x_1403_ = v___x_1389_;
goto v_reusejp_1402_;
}
else
{
lean_object* v_reuseFailAlloc_1427_; 
v_reuseFailAlloc_1427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1427_, 0, v_a_1395_);
v___x_1403_ = v_reuseFailAlloc_1427_;
goto v_reusejp_1402_;
}
v_reusejp_1402_:
{
lean_object* v___x_1405_; 
if (v_isShared_1385_ == 0)
{
lean_ctor_set_tag(v___x_1384_, 1);
v___x_1405_ = v___x_1384_;
goto v_reusejp_1404_;
}
else
{
lean_object* v_reuseFailAlloc_1426_; 
v_reuseFailAlloc_1426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1426_, 0, v_a_1382_);
v___x_1405_ = v_reuseFailAlloc_1426_;
goto v_reusejp_1404_;
}
v_reusejp_1404_:
{
lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; 
lean_inc(v_fst_1378_);
v___x_1406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1406_, 0, v_fst_1378_);
v___x_1407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1407_, 0, v_snd_1379_);
v___x_1408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1408_, 0, v_fst_1369_);
v___x_1409_ = lean_unsigned_to_nat(6u);
v___x_1410_ = lean_mk_empty_array_with_capacity(v___x_1409_);
v___x_1411_ = lean_array_push(v___x_1410_, v___x_1401_);
v___x_1412_ = lean_array_push(v___x_1411_, v___x_1403_);
v___x_1413_ = lean_array_push(v___x_1412_, v___x_1405_);
v___x_1414_ = lean_array_push(v___x_1413_, v___x_1406_);
v___x_1415_ = lean_array_push(v___x_1414_, v___x_1407_);
v___x_1416_ = lean_array_push(v___x_1415_, v___x_1408_);
v___x_1417_ = l_Lean_Meta_mkAppOptM(v___x_1399_, v___x_1416_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_);
if (lean_obj_tag(v___x_1417_) == 0)
{
lean_object* v_a_1418_; lean_object* v___x_1419_; 
v_a_1418_ = lean_ctor_get(v___x_1417_, 0);
lean_inc(v_a_1418_);
lean_dec_ref_known(v___x_1417_, 1);
v___x_1419_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_clauseRewritten(v_a_1366_, v_a_1364_, v_snd_1370_, v_fst_1378_, v___y_1348_, v___y_1349_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_);
lean_dec(v_a_1364_);
if (lean_obj_tag(v___x_1419_) == 0)
{
lean_object* v_a_1420_; lean_object* v___x_1421_; 
v_a_1420_ = lean_ctor_get(v___x_1419_, 0);
lean_inc(v_a_1420_);
lean_dec_ref_known(v___x_1419_, 1);
v___x_1421_ = lp_vampireReplay_Vampire_Reconstruct_carryAll(v_a_1420_, v_target_1347_, v_a_1418_, v___y_1348_, v___y_1349_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_);
if (lean_obj_tag(v___x_1421_) == 0)
{
lean_object* v_a_1422_; uint8_t v___x_1423_; uint8_t v___x_1424_; lean_object* v___x_1425_; 
v_a_1422_ = lean_ctor_get(v___x_1421_, 0);
lean_inc(v_a_1422_);
lean_dec_ref_known(v___x_1421_, 1);
v___x_1423_ = 0;
v___x_1424_ = 1;
v___x_1425_ = l_Lean_Meta_mkLambdaFVars(v_xs_1346_, v_a_1422_, v___x_1423_, v___x_1345_, v___x_1423_, v___x_1345_, v___x_1424_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_);
return v___x_1425_;
}
else
{
return v___x_1421_;
}
}
else
{
lean_dec(v_a_1418_);
lean_dec_ref(v_target_1347_);
return v___x_1419_;
}
}
else
{
lean_dec(v_fst_1378_);
lean_dec(v_snd_1370_);
lean_dec(v_a_1366_);
lean_dec(v_a_1364_);
lean_dec_ref(v_target_1347_);
return v___x_1417_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_1389_);
lean_dec(v_a_1387_);
lean_del_object(v___x_1384_);
lean_dec(v_a_1382_);
lean_dec(v_snd_1379_);
lean_dec(v_fst_1378_);
lean_dec(v_snd_1370_);
lean_dec(v_fst_1369_);
lean_dec(v_a_1366_);
lean_dec(v_a_1364_);
lean_dec_ref(v_target_1347_);
return v___x_1394_;
}
}
}
else
{
lean_del_object(v___x_1384_);
lean_dec(v_a_1382_);
lean_dec(v_snd_1379_);
lean_dec(v_fst_1378_);
lean_dec(v_snd_1370_);
lean_dec(v_fst_1369_);
lean_dec(v_a_1366_);
lean_dec(v_a_1364_);
lean_dec_ref(v_target_1347_);
lean_dec(v___x_1344_);
return v___x_1386_;
}
}
}
else
{
lean_dec(v_snd_1379_);
lean_dec(v_fst_1378_);
lean_dec(v_snd_1370_);
lean_dec(v_fst_1369_);
lean_dec(v_a_1366_);
lean_dec(v_a_1364_);
lean_dec_ref(v_target_1347_);
lean_dec(v___x_1344_);
return v___x_1381_;
}
}
else
{
lean_object* v_a_1432_; lean_object* v___x_1434_; uint8_t v_isShared_1435_; uint8_t v_isSharedCheck_1439_; 
lean_dec(v_snd_1370_);
lean_dec(v_fst_1369_);
lean_dec(v_a_1366_);
lean_dec(v_a_1364_);
lean_dec_ref(v_target_1347_);
lean_dec(v___x_1344_);
v_a_1432_ = lean_ctor_get(v___x_1375_, 0);
v_isSharedCheck_1439_ = !lean_is_exclusive(v___x_1375_);
if (v_isSharedCheck_1439_ == 0)
{
v___x_1434_ = v___x_1375_;
v_isShared_1435_ = v_isSharedCheck_1439_;
goto v_resetjp_1433_;
}
else
{
lean_inc(v_a_1432_);
lean_dec(v___x_1375_);
v___x_1434_ = lean_box(0);
v_isShared_1435_ = v_isSharedCheck_1439_;
goto v_resetjp_1433_;
}
v_resetjp_1433_:
{
lean_object* v___x_1437_; 
if (v_isShared_1435_ == 0)
{
v___x_1437_ = v___x_1434_;
goto v_reusejp_1436_;
}
else
{
lean_object* v_reuseFailAlloc_1438_; 
v_reuseFailAlloc_1438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1438_, 0, v_a_1432_);
v___x_1437_ = v_reuseFailAlloc_1438_;
goto v_reusejp_1436_;
}
v_reusejp_1436_:
{
return v___x_1437_;
}
}
}
}
else
{
lean_object* v_a_1440_; lean_object* v___x_1442_; uint8_t v_isShared_1443_; uint8_t v_isSharedCheck_1447_; 
lean_dec(v_snd_1370_);
lean_dec(v_fst_1369_);
lean_dec(v_a_1366_);
lean_dec(v_a_1364_);
lean_dec_ref(v_target_1347_);
lean_dec(v___x_1344_);
lean_dec_ref(v_a_1341_);
v_a_1440_ = lean_ctor_get(v___x_1371_, 0);
v_isSharedCheck_1447_ = !lean_is_exclusive(v___x_1371_);
if (v_isSharedCheck_1447_ == 0)
{
v___x_1442_ = v___x_1371_;
v_isShared_1443_ = v_isSharedCheck_1447_;
goto v_resetjp_1441_;
}
else
{
lean_inc(v_a_1440_);
lean_dec(v___x_1371_);
v___x_1442_ = lean_box(0);
v_isShared_1443_ = v_isSharedCheck_1447_;
goto v_resetjp_1441_;
}
v_resetjp_1441_:
{
lean_object* v___x_1445_; 
if (v_isShared_1443_ == 0)
{
v___x_1445_ = v___x_1442_;
goto v_reusejp_1444_;
}
else
{
lean_object* v_reuseFailAlloc_1446_; 
v_reuseFailAlloc_1446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1446_, 0, v_a_1440_);
v___x_1445_ = v_reuseFailAlloc_1446_;
goto v_reusejp_1444_;
}
v_reusejp_1444_:
{
return v___x_1445_;
}
}
}
}
else
{
lean_object* v_a_1448_; lean_object* v___x_1450_; uint8_t v_isShared_1451_; uint8_t v_isSharedCheck_1455_; 
lean_dec(v_a_1366_);
lean_dec(v_a_1364_);
lean_dec_ref(v_target_1347_);
lean_dec(v___x_1344_);
lean_dec_ref(v_snd_1343_);
lean_dec_ref(v_fst_1342_);
lean_dec_ref(v_a_1341_);
lean_dec_ref(v___x_1340_);
v_a_1448_ = lean_ctor_get(v___x_1367_, 0);
v_isSharedCheck_1455_ = !lean_is_exclusive(v___x_1367_);
if (v_isSharedCheck_1455_ == 0)
{
v___x_1450_ = v___x_1367_;
v_isShared_1451_ = v_isSharedCheck_1455_;
goto v_resetjp_1449_;
}
else
{
lean_inc(v_a_1448_);
lean_dec(v___x_1367_);
v___x_1450_ = lean_box(0);
v_isShared_1451_ = v_isSharedCheck_1455_;
goto v_resetjp_1449_;
}
v_resetjp_1449_:
{
lean_object* v___x_1453_; 
if (v_isShared_1451_ == 0)
{
v___x_1453_ = v___x_1450_;
goto v_reusejp_1452_;
}
else
{
lean_object* v_reuseFailAlloc_1454_; 
v_reuseFailAlloc_1454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1454_, 0, v_a_1448_);
v___x_1453_ = v_reuseFailAlloc_1454_;
goto v_reusejp_1452_;
}
v_reusejp_1452_:
{
return v___x_1453_;
}
}
}
}
else
{
lean_object* v_a_1456_; lean_object* v___x_1458_; uint8_t v_isShared_1459_; uint8_t v_isSharedCheck_1463_; 
lean_dec(v_a_1364_);
lean_dec_ref(v_target_1347_);
lean_dec(v___x_1344_);
lean_dec_ref(v_snd_1343_);
lean_dec_ref(v_fst_1342_);
lean_dec_ref(v_a_1341_);
lean_dec_ref(v___x_1340_);
lean_dec_ref(v_snd_1339_);
lean_dec_ref(v_fst_1338_);
lean_dec_ref(v_a_1337_);
lean_dec_ref(v___x_1336_);
v_a_1456_ = lean_ctor_get(v___x_1365_, 0);
v_isSharedCheck_1463_ = !lean_is_exclusive(v___x_1365_);
if (v_isSharedCheck_1463_ == 0)
{
v___x_1458_ = v___x_1365_;
v_isShared_1459_ = v_isSharedCheck_1463_;
goto v_resetjp_1457_;
}
else
{
lean_inc(v_a_1456_);
lean_dec(v___x_1365_);
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
else
{
lean_object* v_a_1464_; lean_object* v___x_1466_; uint8_t v_isShared_1467_; uint8_t v_isSharedCheck_1471_; 
lean_dec_ref(v_target_1347_);
lean_dec(v___x_1344_);
lean_dec_ref(v_snd_1343_);
lean_dec_ref(v_fst_1342_);
lean_dec_ref(v_a_1341_);
lean_dec_ref(v___x_1340_);
lean_dec_ref(v_snd_1339_);
lean_dec_ref(v_fst_1338_);
lean_dec_ref(v_a_1337_);
lean_dec_ref(v___x_1336_);
v_a_1464_ = lean_ctor_get(v___x_1363_, 0);
v_isSharedCheck_1471_ = !lean_is_exclusive(v___x_1363_);
if (v_isSharedCheck_1471_ == 0)
{
v___x_1466_ = v___x_1363_;
v_isShared_1467_ = v_isSharedCheck_1471_;
goto v_resetjp_1465_;
}
else
{
lean_inc(v_a_1464_);
lean_dec(v___x_1363_);
v___x_1466_ = lean_box(0);
v_isShared_1467_ = v_isSharedCheck_1471_;
goto v_resetjp_1465_;
}
v_resetjp_1465_:
{
lean_object* v___x_1469_; 
if (v_isShared_1467_ == 0)
{
v___x_1469_ = v___x_1466_;
goto v_reusejp_1468_;
}
else
{
lean_object* v_reuseFailAlloc_1470_; 
v_reuseFailAlloc_1470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1470_, 0, v_a_1464_);
v___x_1469_ = v_reuseFailAlloc_1470_;
goto v_reusejp_1468_;
}
v_reusejp_1468_:
{
return v___x_1469_;
}
}
}
}
else
{
lean_object* v_a_1472_; lean_object* v___x_1474_; uint8_t v_isShared_1475_; uint8_t v_isSharedCheck_1479_; 
lean_dec_ref(v_target_1347_);
lean_dec(v___x_1344_);
lean_dec_ref(v_snd_1343_);
lean_dec_ref(v_fst_1342_);
lean_dec_ref(v_a_1341_);
lean_dec_ref(v___x_1340_);
lean_dec_ref(v_snd_1339_);
lean_dec_ref(v_fst_1338_);
lean_dec_ref(v_a_1337_);
lean_dec_ref(v___x_1336_);
lean_dec_ref(v_unit_1335_);
v_a_1472_ = lean_ctor_get(v___x_1360_, 0);
v_isSharedCheck_1479_ = !lean_is_exclusive(v___x_1360_);
if (v_isSharedCheck_1479_ == 0)
{
v___x_1474_ = v___x_1360_;
v_isShared_1475_ = v_isSharedCheck_1479_;
goto v_resetjp_1473_;
}
else
{
lean_inc(v_a_1472_);
lean_dec(v___x_1360_);
v___x_1474_ = lean_box(0);
v_isShared_1475_ = v_isSharedCheck_1479_;
goto v_resetjp_1473_;
}
v_resetjp_1473_:
{
lean_object* v___x_1477_; 
if (v_isShared_1475_ == 0)
{
v___x_1477_ = v___x_1474_;
goto v_reusejp_1476_;
}
else
{
lean_object* v_reuseFailAlloc_1478_; 
v_reuseFailAlloc_1478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1478_, 0, v_a_1472_);
v___x_1477_ = v_reuseFailAlloc_1478_;
goto v_reusejp_1476_;
}
v_reusejp_1476_:
{
return v___x_1477_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_demodulation___lam__1___boxed(lean_object** _args){
lean_object* v___x_1480_ = _args[0];
lean_object* v___x_1481_ = _args[1];
lean_object* v_unit_1482_ = _args[2];
lean_object* v___x_1483_ = _args[3];
lean_object* v_a_1484_ = _args[4];
lean_object* v_fst_1485_ = _args[5];
lean_object* v_snd_1486_ = _args[6];
lean_object* v___x_1487_ = _args[7];
lean_object* v_a_1488_ = _args[8];
lean_object* v_fst_1489_ = _args[9];
lean_object* v_snd_1490_ = _args[10];
lean_object* v___x_1491_ = _args[11];
lean_object* v___x_1492_ = _args[12];
lean_object* v_xs_1493_ = _args[13];
lean_object* v_target_1494_ = _args[14];
lean_object* v___y_1495_ = _args[15];
lean_object* v___y_1496_ = _args[16];
lean_object* v___y_1497_ = _args[17];
lean_object* v___y_1498_ = _args[18];
lean_object* v___y_1499_ = _args[19];
lean_object* v___y_1500_ = _args[20];
lean_object* v___y_1501_ = _args[21];
_start:
{
uint8_t v___x_15200__boxed_1502_; lean_object* v_res_1503_; 
v___x_15200__boxed_1502_ = lean_unbox(v___x_1492_);
v_res_1503_ = lp_vampireReplay_Vampire_Reconstruct_Rewrite_demodulation___lam__1(v___x_1480_, v___x_1481_, v_unit_1482_, v___x_1483_, v_a_1484_, v_fst_1485_, v_snd_1486_, v___x_1487_, v_a_1488_, v_fst_1489_, v_snd_1490_, v___x_1491_, v___x_15200__boxed_1502_, v_xs_1493_, v_target_1494_, v___y_1495_, v___y_1496_, v___y_1497_, v___y_1498_, v___y_1499_, v___y_1500_);
lean_dec(v___y_1500_);
lean_dec_ref(v___y_1499_);
lean_dec(v___y_1498_);
lean_dec_ref(v___y_1497_);
lean_dec(v___y_1496_);
lean_dec_ref(v___y_1495_);
lean_dec_ref(v_xs_1493_);
lean_dec_ref(v___x_1481_);
return v_res_1503_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Rewrite_demodulation___closed__1(void){
_start:
{
lean_object* v___x_1505_; lean_object* v___x_1506_; 
v___x_1505_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Rewrite_demodulation___closed__0));
v___x_1506_ = l_Lean_stringToMessageData(v___x_1505_);
return v___x_1506_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Rewrite_demodulation___closed__3(void){
_start:
{
lean_object* v___x_1508_; lean_object* v___x_1509_; 
v___x_1508_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Rewrite_demodulation___closed__2));
v___x_1509_ = l_Lean_stringToMessageData(v___x_1508_);
return v___x_1509_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_demodulation(lean_object* v_step_1510_, lean_object* v_a_1511_, lean_object* v_a_1512_, lean_object* v_a_1513_, lean_object* v_a_1514_, lean_object* v_a_1515_, lean_object* v_a_1516_){
_start:
{
lean_object* v_unit_1518_; lean_object* v_premises_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; uint8_t v___x_1522_; 
v_unit_1518_ = lean_ctor_get(v_step_1510_, 0);
lean_inc_ref(v_unit_1518_);
v_premises_1519_ = lean_ctor_get(v_step_1510_, 1);
v___x_1520_ = lean_array_get_size(v_premises_1519_);
v___x_1521_ = lean_unsigned_to_nat(2u);
v___x_1522_ = lean_nat_dec_eq(v___x_1520_, v___x_1521_);
if (v___x_1522_ == 0)
{
lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; 
lean_dec_ref(v_unit_1518_);
lean_dec_ref(v_step_1510_);
v___x_1523_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Rewrite_demodulation___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Rewrite_demodulation___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Rewrite_demodulation___closed__1);
v___x_1524_ = l_Nat_reprFast(v___x_1520_);
v___x_1525_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1525_, 0, v___x_1524_);
v___x_1526_ = l_Lean_MessageData_ofFormat(v___x_1525_);
v___x_1527_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1527_, 0, v___x_1523_);
lean_ctor_set(v___x_1527_, 1, v___x_1526_);
v___x_1528_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1527_, v_a_1513_, v_a_1514_, v_a_1515_, v_a_1516_);
return v___x_1528_;
}
else
{
lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v_fst_1531_; lean_object* v_snd_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v_fst_1535_; lean_object* v_snd_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; uint8_t v___x_1539_; 
v___x_1529_ = lean_unsigned_to_nat(0u);
v___x_1530_ = lean_array_fget_borrowed(v_premises_1519_, v___x_1529_);
v_fst_1531_ = lean_ctor_get(v___x_1530_, 0);
lean_inc(v_fst_1531_);
v_snd_1532_ = lean_ctor_get(v___x_1530_, 1);
lean_inc(v_snd_1532_);
v___x_1533_ = lean_unsigned_to_nat(1u);
v___x_1534_ = lean_array_fget_borrowed(v_premises_1519_, v___x_1533_);
v_fst_1535_ = lean_ctor_get(v___x_1534_, 0);
lean_inc(v_fst_1535_);
v_snd_1536_ = lean_ctor_get(v___x_1534_, 1);
lean_inc(v_snd_1536_);
lean_inc_ref(v_unit_1518_);
v___x_1537_ = lp_vampireReplay_Vampire_Unit_parents(v_unit_1518_);
v___x_1538_ = lean_array_get_size(v___x_1537_);
v___x_1539_ = lean_nat_dec_eq(v___x_1538_, v___x_1521_);
if (v___x_1539_ == 0)
{
lean_object* v___x_1540_; lean_object* v___x_1541_; 
lean_dec_ref(v___x_1537_);
lean_dec(v_snd_1536_);
lean_dec(v_fst_1535_);
lean_dec(v_snd_1532_);
lean_dec(v_fst_1531_);
lean_dec_ref(v_unit_1518_);
lean_dec_ref(v_step_1510_);
v___x_1540_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Rewrite_demodulation___closed__3, &lp_vampireReplay_Vampire_Reconstruct_Rewrite_demodulation___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_Rewrite_demodulation___closed__3);
v___x_1541_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1540_, v_a_1513_, v_a_1514_, v_a_1515_, v_a_1516_);
return v___x_1541_;
}
else
{
lean_object* v___x_1542_; 
lean_inc_ref(v_step_1510_);
v___x_1542_ = lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg(v_step_1510_, v___x_1529_, v_a_1513_, v_a_1514_, v_a_1515_, v_a_1516_);
if (lean_obj_tag(v___x_1542_) == 0)
{
lean_object* v_a_1543_; lean_object* v___x_1544_; 
v_a_1543_ = lean_ctor_get(v___x_1542_, 0);
lean_inc(v_a_1543_);
lean_dec_ref_known(v___x_1542_, 1);
lean_inc_ref(v_step_1510_);
v___x_1544_ = lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg(v_step_1510_, v___x_1533_, v_a_1513_, v_a_1514_, v_a_1515_, v_a_1516_);
if (lean_obj_tag(v___x_1544_) == 0)
{
lean_object* v_a_1545_; lean_object* v___x_1546_; 
v_a_1545_ = lean_ctor_get(v___x_1544_, 0);
lean_inc(v_a_1545_);
lean_dec_ref_known(v___x_1544_, 1);
v___x_1546_ = lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(v_step_1510_, v_a_1511_, v_a_1512_, v_a_1513_, v_a_1514_, v_a_1515_, v_a_1516_);
if (lean_obj_tag(v___x_1546_) == 0)
{
lean_object* v_a_1547_; lean_object* v___x_1549_; uint8_t v_isShared_1550_; uint8_t v_isSharedCheck_1562_; 
v_a_1547_ = lean_ctor_get(v___x_1546_, 0);
v_isSharedCheck_1562_ = !lean_is_exclusive(v___x_1546_);
if (v_isSharedCheck_1562_ == 0)
{
v___x_1549_ = v___x_1546_;
v_isShared_1550_ = v_isSharedCheck_1562_;
goto v_resetjp_1548_;
}
else
{
lean_inc(v_a_1547_);
lean_dec(v___x_1546_);
v___x_1549_ = lean_box(0);
v_isShared_1550_ = v_isSharedCheck_1562_;
goto v_resetjp_1548_;
}
v_resetjp_1548_:
{
lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___f_1555_; lean_object* v___x_1556_; lean_object* v___x_1558_; 
v___x_1551_ = lean_array_fget(v___x_1537_, v___x_1529_);
v___x_1552_ = lean_array_fget(v___x_1537_, v___x_1533_);
lean_dec_ref(v___x_1537_);
lean_inc_ref(v_unit_1518_);
v___x_1553_ = lp_vampireReplay_Vampire_Unit_varSorts(v_unit_1518_);
v___x_1554_ = lean_box(v___x_1539_);
lean_inc_ref(v___x_1553_);
v___f_1555_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Rewrite_demodulation___lam__1___boxed), 22, 13);
lean_closure_set(v___f_1555_, 0, v___x_1529_);
lean_closure_set(v___f_1555_, 1, v___x_1553_);
lean_closure_set(v___f_1555_, 2, v_unit_1518_);
lean_closure_set(v___f_1555_, 3, v___x_1551_);
lean_closure_set(v___f_1555_, 4, v_a_1543_);
lean_closure_set(v___f_1555_, 5, v_fst_1531_);
lean_closure_set(v___f_1555_, 6, v_snd_1532_);
lean_closure_set(v___f_1555_, 7, v___x_1552_);
lean_closure_set(v___f_1555_, 8, v_a_1545_);
lean_closure_set(v___f_1555_, 9, v_fst_1535_);
lean_closure_set(v___f_1555_, 10, v_snd_1536_);
lean_closure_set(v___f_1555_, 11, v___x_1533_);
lean_closure_set(v___f_1555_, 12, v___x_1554_);
v___x_1556_ = lean_array_get_size(v___x_1553_);
lean_dec_ref(v___x_1553_);
if (v_isShared_1550_ == 0)
{
lean_ctor_set_tag(v___x_1549_, 1);
lean_ctor_set(v___x_1549_, 0, v___x_1556_);
v___x_1558_ = v___x_1549_;
goto v_reusejp_1557_;
}
else
{
lean_object* v_reuseFailAlloc_1561_; 
v_reuseFailAlloc_1561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1561_, 0, v___x_1556_);
v___x_1558_ = v_reuseFailAlloc_1561_;
goto v_reusejp_1557_;
}
v_reusejp_1557_:
{
uint8_t v___x_1559_; lean_object* v___x_1560_; 
v___x_1559_ = 0;
v___x_1560_ = lp_vampireReplay_Lean_Meta_forallBoundedTelescope___at___00Vampire_Reconstruct_relateLiterals_spec__6___redArg(v_a_1547_, v___x_1558_, v___f_1555_, v___x_1559_, v___x_1559_, v_a_1511_, v_a_1512_, v_a_1513_, v_a_1514_, v_a_1515_, v_a_1516_);
return v___x_1560_;
}
}
}
else
{
lean_dec(v_a_1545_);
lean_dec(v_a_1543_);
lean_dec_ref(v___x_1537_);
lean_dec(v_snd_1536_);
lean_dec(v_fst_1535_);
lean_dec(v_snd_1532_);
lean_dec(v_fst_1531_);
lean_dec_ref(v_unit_1518_);
return v___x_1546_;
}
}
else
{
lean_object* v_a_1563_; lean_object* v___x_1565_; uint8_t v_isShared_1566_; uint8_t v_isSharedCheck_1570_; 
lean_dec(v_a_1543_);
lean_dec_ref(v___x_1537_);
lean_dec(v_snd_1536_);
lean_dec(v_fst_1535_);
lean_dec(v_snd_1532_);
lean_dec(v_fst_1531_);
lean_dec_ref(v_unit_1518_);
lean_dec_ref(v_step_1510_);
v_a_1563_ = lean_ctor_get(v___x_1544_, 0);
v_isSharedCheck_1570_ = !lean_is_exclusive(v___x_1544_);
if (v_isSharedCheck_1570_ == 0)
{
v___x_1565_ = v___x_1544_;
v_isShared_1566_ = v_isSharedCheck_1570_;
goto v_resetjp_1564_;
}
else
{
lean_inc(v_a_1563_);
lean_dec(v___x_1544_);
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
else
{
lean_object* v_a_1571_; lean_object* v___x_1573_; uint8_t v_isShared_1574_; uint8_t v_isSharedCheck_1578_; 
lean_dec_ref(v___x_1537_);
lean_dec(v_snd_1536_);
lean_dec(v_fst_1535_);
lean_dec(v_snd_1532_);
lean_dec(v_fst_1531_);
lean_dec_ref(v_unit_1518_);
lean_dec_ref(v_step_1510_);
v_a_1571_ = lean_ctor_get(v___x_1542_, 0);
v_isSharedCheck_1578_ = !lean_is_exclusive(v___x_1542_);
if (v_isSharedCheck_1578_ == 0)
{
v___x_1573_ = v___x_1542_;
v_isShared_1574_ = v_isSharedCheck_1578_;
goto v_resetjp_1572_;
}
else
{
lean_inc(v_a_1571_);
lean_dec(v___x_1542_);
v___x_1573_ = lean_box(0);
v_isShared_1574_ = v_isSharedCheck_1578_;
goto v_resetjp_1572_;
}
v_resetjp_1572_:
{
lean_object* v___x_1576_; 
if (v_isShared_1574_ == 0)
{
v___x_1576_ = v___x_1573_;
goto v_reusejp_1575_;
}
else
{
lean_object* v_reuseFailAlloc_1577_; 
v_reuseFailAlloc_1577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1577_, 0, v_a_1571_);
v___x_1576_ = v_reuseFailAlloc_1577_;
goto v_reusejp_1575_;
}
v_reusejp_1575_:
{
return v___x_1576_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_demodulation___boxed(lean_object* v_step_1579_, lean_object* v_a_1580_, lean_object* v_a_1581_, lean_object* v_a_1582_, lean_object* v_a_1583_, lean_object* v_a_1584_, lean_object* v_a_1585_, lean_object* v_a_1586_){
_start:
{
lean_object* v_res_1587_; 
v_res_1587_ = lp_vampireReplay_Vampire_Reconstruct_Rewrite_demodulation(v_step_1579_, v_a_1580_, v_a_1581_, v_a_1582_, v_a_1583_, v_a_1584_, v_a_1585_);
lean_dec(v_a_1585_);
lean_dec_ref(v_a_1584_);
lean_dec(v_a_1583_);
lean_dec_ref(v_a_1582_);
lean_dec(v_a_1581_);
lean_dec_ref(v_a_1580_);
return v_res_1587_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__0(lean_object* v_x_1588_, lean_object* v_h_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_){
_start:
{
lean_object* v___x_1597_; 
v___x_1597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1597_, 0, v_h_1589_);
return v___x_1597_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__0___boxed(lean_object* v_x_1598_, lean_object* v_h_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_){
_start:
{
lean_object* v_res_1607_; 
v_res_1607_ = lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__0(v_x_1598_, v_h_1599_, v___y_1600_, v___y_1601_, v___y_1602_, v___y_1603_, v___y_1604_, v___y_1605_);
lean_dec(v___y_1605_);
lean_dec_ref(v___y_1604_);
lean_dec(v___y_1603_);
lean_dec_ref(v___y_1602_);
lean_dec(v___y_1601_);
lean_dec_ref(v___y_1600_);
lean_dec(v_x_1598_);
return v_res_1607_;
}
}
LEAN_EXPORT uint8_t lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__2(uint32_t v_val_1608_, lean_object* v_x_1609_){
_start:
{
lean_object* v___x_1610_; uint8_t v___x_1611_; 
v___x_1610_ = lean_uint32_to_nat(v_val_1608_);
v___x_1611_ = lean_nat_dec_eq(v_x_1609_, v___x_1610_);
lean_dec(v___x_1610_);
return v___x_1611_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__2___boxed(lean_object* v_val_1612_, lean_object* v_x_1613_){
_start:
{
uint32_t v_val_31042__boxed_1614_; uint8_t v_res_1615_; lean_object* v_r_1616_; 
v_val_31042__boxed_1614_ = lean_unbox_uint32(v_val_1612_);
lean_dec(v_val_1612_);
v_res_1615_ = lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__2(v_val_31042__boxed_1614_, v_x_1613_);
lean_dec(v_x_1613_);
v_r_1616_ = lean_box(v_res_1615_);
return v_r_1616_;
}
}
LEAN_EXPORT uint8_t lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__1(lean_object* v_a_1617_, lean_object* v_i_1618_){
_start:
{
lean_object* v_literal_1619_; uint8_t v_wholePremise_1620_; uint8_t v___x_1621_; 
v_literal_1619_ = lean_ctor_get(v_a_1617_, 2);
v_wholePremise_1620_ = lean_ctor_get_uint8(v_a_1617_, sizeof(void*)*4);
v___x_1621_ = lean_nat_dec_eq(v_i_1618_, v_literal_1619_);
if (v___x_1621_ == 0)
{
return v_wholePremise_1620_;
}
else
{
return v___x_1621_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__1___boxed(lean_object* v_a_1622_, lean_object* v_i_1623_){
_start:
{
uint8_t v_res_1624_; lean_object* v_r_1625_; 
v_res_1624_ = lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__1(v_a_1622_, v_i_1623_);
lean_dec(v_i_1623_);
lean_dec_ref(v_a_1622_);
v_r_1625_ = lean_box(v_res_1624_);
return v_r_1625_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__3(lean_object* v_inner_1626_, lean_object* v___x_1627_, uint8_t v_a_1628_, uint8_t v___x_1629_, lean_object* v_hne_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_){
_start:
{
lean_object* v___x_1638_; 
lean_inc_ref(v_hne_1630_);
v___x_1638_ = lp_vampireReplay_Vampire_Reconstruct_placeLiteral(v_inner_1626_, v_hne_1630_, v___y_1631_, v___y_1632_, v___y_1633_, v___y_1634_, v___y_1635_, v___y_1636_);
if (lean_obj_tag(v___x_1638_) == 0)
{
lean_object* v_a_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; uint8_t v___x_1642_; lean_object* v___x_1643_; 
v_a_1639_ = lean_ctor_get(v___x_1638_, 0);
lean_inc(v_a_1639_);
lean_dec_ref_known(v___x_1638_, 1);
v___x_1640_ = lean_mk_empty_array_with_capacity(v___x_1627_);
v___x_1641_ = lean_array_push(v___x_1640_, v_hne_1630_);
v___x_1642_ = 1;
v___x_1643_ = l_Lean_Meta_mkLambdaFVars(v___x_1641_, v_a_1639_, v_a_1628_, v___x_1629_, v_a_1628_, v___x_1629_, v___x_1642_, v___y_1633_, v___y_1634_, v___y_1635_, v___y_1636_);
lean_dec_ref(v___x_1641_);
return v___x_1643_;
}
else
{
lean_dec_ref(v_hne_1630_);
return v___x_1638_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__3___boxed(lean_object* v_inner_1644_, lean_object* v___x_1645_, lean_object* v_a_1646_, lean_object* v___x_1647_, lean_object* v_hne_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_){
_start:
{
uint8_t v_a_31058__boxed_1656_; uint8_t v___x_31059__boxed_1657_; lean_object* v_res_1658_; 
v_a_31058__boxed_1656_ = lean_unbox(v_a_1646_);
v___x_31059__boxed_1657_ = lean_unbox(v___x_1647_);
v_res_1658_ = lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__3(v_inner_1644_, v___x_1645_, v_a_31058__boxed_1656_, v___x_31059__boxed_1657_, v_hne_1648_, v___y_1649_, v___y_1650_, v___y_1651_, v___y_1652_, v___y_1653_, v___y_1654_);
lean_dec(v___y_1654_);
lean_dec_ref(v___y_1653_);
lean_dec(v___y_1652_);
lean_dec_ref(v___y_1651_);
lean_dec(v___y_1650_);
lean_dec_ref(v___y_1649_);
lean_dec(v___x_1645_);
return v_res_1658_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__4(lean_object* v___x_1660_, lean_object* v___x_1661_, lean_object* v_snd_1662_, lean_object* v_a_1663_, lean_object* v_a_1664_, lean_object* v_fst_1665_, lean_object* v_i_1666_, lean_object* v_h_1667_, lean_object* v_inner_1668_, lean_object* v___x_1669_, uint8_t v_a_1670_, uint8_t v___x_1671_, lean_object* v_hc_1672_, lean_object* v___y_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_){
_start:
{
lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; 
v___x_1680_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__4___closed__0));
v___x_1681_ = l_Lean_Name_mkStr2(v___x_1660_, v___x_1680_);
lean_inc_ref(v_hc_1672_);
v___x_1682_ = lean_array_push(v___x_1661_, v_hc_1672_);
v___x_1683_ = lean_array_push(v___x_1682_, v_snd_1662_);
v___x_1684_ = l_Lean_Meta_mkAppM(v___x_1681_, v___x_1683_, v___y_1675_, v___y_1676_, v___y_1677_, v___y_1678_);
if (lean_obj_tag(v___x_1684_) == 0)
{
lean_object* v_a_1685_; lean_object* v___x_1686_; 
v_a_1685_ = lean_ctor_get(v___x_1684_, 0);
lean_inc(v_a_1685_);
lean_dec_ref_known(v___x_1684_, 1);
v___x_1686_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith(v_a_1663_, v_a_1664_, v_a_1685_, v_fst_1665_, v_i_1666_, v_h_1667_, v___y_1673_, v___y_1674_, v___y_1675_, v___y_1676_, v___y_1677_, v___y_1678_);
if (lean_obj_tag(v___x_1686_) == 0)
{
lean_object* v_a_1687_; lean_object* v___x_1688_; 
v_a_1687_ = lean_ctor_get(v___x_1686_, 0);
lean_inc(v_a_1687_);
lean_dec_ref_known(v___x_1686_, 1);
v___x_1688_ = lp_vampireReplay_Vampire_Reconstruct_placeLiteral(v_inner_1668_, v_a_1687_, v___y_1673_, v___y_1674_, v___y_1675_, v___y_1676_, v___y_1677_, v___y_1678_);
if (lean_obj_tag(v___x_1688_) == 0)
{
lean_object* v_a_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; uint8_t v___x_1692_; lean_object* v___x_1693_; 
v_a_1689_ = lean_ctor_get(v___x_1688_, 0);
lean_inc(v_a_1689_);
lean_dec_ref_known(v___x_1688_, 1);
v___x_1690_ = lean_mk_empty_array_with_capacity(v___x_1669_);
v___x_1691_ = lean_array_push(v___x_1690_, v_hc_1672_);
v___x_1692_ = 1;
v___x_1693_ = l_Lean_Meta_mkLambdaFVars(v___x_1691_, v_a_1689_, v_a_1670_, v___x_1671_, v_a_1670_, v___x_1671_, v___x_1692_, v___y_1675_, v___y_1676_, v___y_1677_, v___y_1678_);
lean_dec_ref(v___x_1691_);
return v___x_1693_;
}
else
{
lean_dec_ref(v_hc_1672_);
return v___x_1688_;
}
}
else
{
lean_dec_ref(v_hc_1672_);
lean_dec_ref(v_inner_1668_);
return v___x_1686_;
}
}
else
{
lean_dec_ref(v_hc_1672_);
lean_dec_ref(v_inner_1668_);
lean_dec_ref(v_h_1667_);
lean_dec(v_i_1666_);
lean_dec_ref(v_fst_1665_);
lean_dec_ref(v_a_1664_);
lean_dec_ref(v_a_1663_);
return v___x_1684_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__4___boxed(lean_object** _args){
lean_object* v___x_1694_ = _args[0];
lean_object* v___x_1695_ = _args[1];
lean_object* v_snd_1696_ = _args[2];
lean_object* v_a_1697_ = _args[3];
lean_object* v_a_1698_ = _args[4];
lean_object* v_fst_1699_ = _args[5];
lean_object* v_i_1700_ = _args[6];
lean_object* v_h_1701_ = _args[7];
lean_object* v_inner_1702_ = _args[8];
lean_object* v___x_1703_ = _args[9];
lean_object* v_a_1704_ = _args[10];
lean_object* v___x_1705_ = _args[11];
lean_object* v_hc_1706_ = _args[12];
lean_object* v___y_1707_ = _args[13];
lean_object* v___y_1708_ = _args[14];
lean_object* v___y_1709_ = _args[15];
lean_object* v___y_1710_ = _args[16];
lean_object* v___y_1711_ = _args[17];
lean_object* v___y_1712_ = _args[18];
lean_object* v___y_1713_ = _args[19];
_start:
{
uint8_t v_a_31109__boxed_1714_; uint8_t v___x_31110__boxed_1715_; lean_object* v_res_1716_; 
v_a_31109__boxed_1714_ = lean_unbox(v_a_1704_);
v___x_31110__boxed_1715_ = lean_unbox(v___x_1705_);
v_res_1716_ = lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__4(v___x_1694_, v___x_1695_, v_snd_1696_, v_a_1697_, v_a_1698_, v_fst_1699_, v_i_1700_, v_h_1701_, v_inner_1702_, v___x_1703_, v_a_31109__boxed_1714_, v___x_31110__boxed_1715_, v_hc_1706_, v___y_1707_, v___y_1708_, v___y_1709_, v___y_1710_, v___y_1711_, v___y_1712_);
lean_dec(v___y_1712_);
lean_dec_ref(v___y_1711_);
lean_dec(v___y_1710_);
lean_dec_ref(v___y_1709_);
lean_dec(v___y_1708_);
lean_dec_ref(v___y_1707_);
lean_dec(v___x_1703_);
return v_res_1716_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__5(lean_object* v_a_1728_, lean_object* v_a_1729_, lean_object* v_a_1730_, lean_object* v___x_1731_, lean_object* v___x_1732_, uint8_t v___x_1733_, lean_object* v_i_1734_, lean_object* v_h_1735_, lean_object* v_x_1736_, lean_object* v_hSide_1737_, lean_object* v_inner_1738_, lean_object* v___y_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_){
_start:
{
lean_object* v___x_1746_; 
lean_inc(v___y_1744_);
lean_inc_ref(v___y_1743_);
lean_inc(v___y_1742_);
lean_inc_ref(v___y_1741_);
lean_inc_ref(v_hSide_1737_);
v___x_1746_ = lean_infer_type(v_hSide_1737_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_);
if (lean_obj_tag(v___x_1746_) == 0)
{
lean_object* v_a_1747_; lean_object* v___x_1748_; 
v_a_1747_ = lean_ctor_get(v___x_1746_, 0);
lean_inc(v_a_1747_);
lean_dec_ref_known(v___x_1746_, 1);
v___x_1748_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_orientedEquation(v_a_1728_, v_a_1729_, v_hSide_1737_, v_a_1747_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_);
if (lean_obj_tag(v___x_1748_) == 0)
{
lean_object* v_a_1749_; lean_object* v_snd_1750_; lean_object* v_fst_1751_; lean_object* v_fst_1752_; lean_object* v_snd_1753_; lean_object* v_target_1754_; lean_object* v___x_1755_; 
v_a_1749_ = lean_ctor_get(v___x_1748_, 0);
lean_inc(v_a_1749_);
lean_dec_ref_known(v___x_1748_, 1);
v_snd_1750_ = lean_ctor_get(v_a_1749_, 1);
lean_inc(v_snd_1750_);
v_fst_1751_ = lean_ctor_get(v_a_1749_, 0);
lean_inc(v_fst_1751_);
lean_dec(v_a_1749_);
v_fst_1752_ = lean_ctor_get(v_snd_1750_, 0);
lean_inc(v_fst_1752_);
v_snd_1753_ = lean_ctor_get(v_snd_1750_, 1);
lean_inc(v_snd_1753_);
lean_dec(v_snd_1750_);
v_target_1754_ = lean_ctor_get(v_a_1730_, 3);
lean_inc_ref(v_target_1754_);
v___x_1755_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_Tree_toExpr(v_target_1754_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_);
if (lean_obj_tag(v___x_1755_) == 0)
{
lean_object* v_a_1756_; lean_object* v___x_1757_; 
v_a_1756_ = lean_ctor_get(v___x_1755_, 0);
lean_inc_n(v_a_1756_, 2);
lean_dec_ref_known(v___x_1755_, 1);
lean_inc(v_fst_1751_);
v___x_1757_ = l_Lean_Meta_isExprDefEq(v_a_1756_, v_fst_1751_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_);
if (lean_obj_tag(v___x_1757_) == 0)
{
lean_object* v_a_1758_; uint8_t v___x_1759_; 
v_a_1758_ = lean_ctor_get(v___x_1757_, 0);
lean_inc(v_a_1758_);
lean_dec_ref_known(v___x_1757_, 1);
v___x_1759_ = lean_unbox(v_a_1758_);
if (v___x_1759_ == 0)
{
lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; 
v___x_1760_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__5___closed__1));
v___x_1761_ = lean_mk_empty_array_with_capacity(v___x_1731_);
lean_inc_ref(v___x_1761_);
v___x_1762_ = lean_array_push(v___x_1761_, v_a_1756_);
v___x_1763_ = lean_array_push(v___x_1762_, v_fst_1751_);
lean_inc_ref(v___x_1763_);
v___x_1764_ = l_Lean_Meta_mkAppM(v___x_1760_, v___x_1763_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_);
if (lean_obj_tag(v___x_1764_) == 0)
{
lean_object* v_a_1765_; lean_object* v___x_1766_; lean_object* v___f_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; 
v_a_1765_ = lean_ctor_get(v___x_1764_, 0);
lean_inc(v_a_1765_);
lean_dec_ref_known(v___x_1764_, 1);
v___x_1766_ = lean_box(v___x_1733_);
lean_inc(v_a_1758_);
lean_inc(v___x_1732_);
lean_inc_ref(v_inner_1738_);
v___f_1767_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__3___boxed), 12, 4);
lean_closure_set(v___f_1767_, 0, v_inner_1738_);
lean_closure_set(v___f_1767_, 1, v___x_1732_);
lean_closure_set(v___f_1767_, 2, v_a_1758_);
lean_closure_set(v___f_1767_, 3, v___x_1766_);
v___x_1768_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__5___closed__3));
v___x_1769_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_1768_, v_a_1765_, v___f_1767_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_);
if (lean_obj_tag(v___x_1769_) == 0)
{
lean_object* v_a_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; 
v_a_1770_ = lean_ctor_get(v___x_1769_, 0);
lean_inc(v_a_1770_);
lean_dec_ref_known(v___x_1769_, 1);
v___x_1771_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__9));
v___x_1772_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_literalAt___closed__10));
v___x_1773_ = l_Lean_Meta_mkAppM(v___x_1772_, v___x_1763_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_);
if (lean_obj_tag(v___x_1773_) == 0)
{
lean_object* v_a_1774_; lean_object* v___x_1775_; lean_object* v___f_1776_; lean_object* v___x_1777_; 
v_a_1774_ = lean_ctor_get(v___x_1773_, 0);
lean_inc(v_a_1774_);
lean_dec_ref_known(v___x_1773_, 1);
v___x_1775_ = lean_box(v___x_1733_);
lean_inc_ref(v___x_1761_);
v___f_1776_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__4___boxed), 20, 12);
lean_closure_set(v___f_1776_, 0, v___x_1771_);
lean_closure_set(v___f_1776_, 1, v___x_1761_);
lean_closure_set(v___f_1776_, 2, v_snd_1753_);
lean_closure_set(v___f_1776_, 3, v_a_1730_);
lean_closure_set(v___f_1776_, 4, v_a_1729_);
lean_closure_set(v___f_1776_, 5, v_fst_1752_);
lean_closure_set(v___f_1776_, 6, v_i_1734_);
lean_closure_set(v___f_1776_, 7, v_h_1735_);
lean_closure_set(v___f_1776_, 8, v_inner_1738_);
lean_closure_set(v___f_1776_, 9, v___x_1732_);
lean_closure_set(v___f_1776_, 10, v_a_1758_);
lean_closure_set(v___f_1776_, 11, v___x_1775_);
v___x_1777_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_1768_, v_a_1774_, v___f_1776_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_);
if (lean_obj_tag(v___x_1777_) == 0)
{
lean_object* v_a_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; 
v_a_1778_ = lean_ctor_get(v___x_1777_, 0);
lean_inc(v_a_1778_);
lean_dec_ref_known(v___x_1777_, 1);
v___x_1779_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__5___closed__6));
v___x_1780_ = lean_array_push(v___x_1761_, v_a_1778_);
v___x_1781_ = lean_array_push(v___x_1780_, v_a_1770_);
v___x_1782_ = l_Lean_Meta_mkAppM(v___x_1779_, v___x_1781_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_);
return v___x_1782_;
}
else
{
lean_dec(v_a_1770_);
lean_dec_ref(v___x_1761_);
return v___x_1777_;
}
}
else
{
lean_dec(v_a_1770_);
lean_dec_ref(v___x_1761_);
lean_dec(v_a_1758_);
lean_dec(v_snd_1753_);
lean_dec(v_fst_1752_);
lean_dec_ref(v_inner_1738_);
lean_dec_ref(v_h_1735_);
lean_dec(v_i_1734_);
lean_dec(v___x_1732_);
lean_dec_ref(v_a_1730_);
lean_dec_ref(v_a_1729_);
return v___x_1773_;
}
}
else
{
lean_dec_ref(v___x_1763_);
lean_dec_ref(v___x_1761_);
lean_dec(v_a_1758_);
lean_dec(v_snd_1753_);
lean_dec(v_fst_1752_);
lean_dec_ref(v_inner_1738_);
lean_dec_ref(v_h_1735_);
lean_dec(v_i_1734_);
lean_dec(v___x_1732_);
lean_dec_ref(v_a_1730_);
lean_dec_ref(v_a_1729_);
return v___x_1769_;
}
}
else
{
lean_dec_ref(v___x_1763_);
lean_dec_ref(v___x_1761_);
lean_dec(v_a_1758_);
lean_dec(v_snd_1753_);
lean_dec(v_fst_1752_);
lean_dec_ref(v_inner_1738_);
lean_dec_ref(v_h_1735_);
lean_dec(v_i_1734_);
lean_dec(v___x_1732_);
lean_dec_ref(v_a_1730_);
lean_dec_ref(v_a_1729_);
return v___x_1764_;
}
}
else
{
lean_object* v___x_1783_; 
lean_dec(v_a_1758_);
lean_dec(v_a_1756_);
lean_dec(v_fst_1751_);
lean_dec(v___x_1732_);
v___x_1783_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewriteWith(v_a_1730_, v_a_1729_, v_snd_1753_, v_fst_1752_, v_i_1734_, v_h_1735_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_);
if (lean_obj_tag(v___x_1783_) == 0)
{
lean_object* v_a_1784_; lean_object* v___x_1785_; 
v_a_1784_ = lean_ctor_get(v___x_1783_, 0);
lean_inc(v_a_1784_);
lean_dec_ref_known(v___x_1783_, 1);
v___x_1785_ = lp_vampireReplay_Vampire_Reconstruct_placeLiteral(v_inner_1738_, v_a_1784_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_);
return v___x_1785_;
}
else
{
lean_dec_ref(v_inner_1738_);
return v___x_1783_;
}
}
}
else
{
lean_object* v_a_1786_; lean_object* v___x_1788_; uint8_t v_isShared_1789_; uint8_t v_isSharedCheck_1793_; 
lean_dec(v_a_1756_);
lean_dec(v_snd_1753_);
lean_dec(v_fst_1752_);
lean_dec(v_fst_1751_);
lean_dec_ref(v_inner_1738_);
lean_dec_ref(v_h_1735_);
lean_dec(v_i_1734_);
lean_dec(v___x_1732_);
lean_dec_ref(v_a_1730_);
lean_dec_ref(v_a_1729_);
v_a_1786_ = lean_ctor_get(v___x_1757_, 0);
v_isSharedCheck_1793_ = !lean_is_exclusive(v___x_1757_);
if (v_isSharedCheck_1793_ == 0)
{
v___x_1788_ = v___x_1757_;
v_isShared_1789_ = v_isSharedCheck_1793_;
goto v_resetjp_1787_;
}
else
{
lean_inc(v_a_1786_);
lean_dec(v___x_1757_);
v___x_1788_ = lean_box(0);
v_isShared_1789_ = v_isSharedCheck_1793_;
goto v_resetjp_1787_;
}
v_resetjp_1787_:
{
lean_object* v___x_1791_; 
if (v_isShared_1789_ == 0)
{
v___x_1791_ = v___x_1788_;
goto v_reusejp_1790_;
}
else
{
lean_object* v_reuseFailAlloc_1792_; 
v_reuseFailAlloc_1792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1792_, 0, v_a_1786_);
v___x_1791_ = v_reuseFailAlloc_1792_;
goto v_reusejp_1790_;
}
v_reusejp_1790_:
{
return v___x_1791_;
}
}
}
}
else
{
lean_dec(v_snd_1753_);
lean_dec(v_fst_1752_);
lean_dec(v_fst_1751_);
lean_dec_ref(v_inner_1738_);
lean_dec_ref(v_h_1735_);
lean_dec(v_i_1734_);
lean_dec(v___x_1732_);
lean_dec_ref(v_a_1730_);
lean_dec_ref(v_a_1729_);
return v___x_1755_;
}
}
else
{
lean_object* v_a_1794_; lean_object* v___x_1796_; uint8_t v_isShared_1797_; uint8_t v_isSharedCheck_1801_; 
lean_dec_ref(v_inner_1738_);
lean_dec_ref(v_h_1735_);
lean_dec(v_i_1734_);
lean_dec(v___x_1732_);
lean_dec_ref(v_a_1730_);
lean_dec_ref(v_a_1729_);
v_a_1794_ = lean_ctor_get(v___x_1748_, 0);
v_isSharedCheck_1801_ = !lean_is_exclusive(v___x_1748_);
if (v_isSharedCheck_1801_ == 0)
{
v___x_1796_ = v___x_1748_;
v_isShared_1797_ = v_isSharedCheck_1801_;
goto v_resetjp_1795_;
}
else
{
lean_inc(v_a_1794_);
lean_dec(v___x_1748_);
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
else
{
lean_dec_ref(v_inner_1738_);
lean_dec_ref(v_hSide_1737_);
lean_dec_ref(v_h_1735_);
lean_dec(v_i_1734_);
lean_dec(v___x_1732_);
lean_dec_ref(v_a_1730_);
lean_dec_ref(v_a_1729_);
lean_dec_ref(v_a_1728_);
return v___x_1746_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__5___boxed(lean_object** _args){
lean_object* v_a_1802_ = _args[0];
lean_object* v_a_1803_ = _args[1];
lean_object* v_a_1804_ = _args[2];
lean_object* v___x_1805_ = _args[3];
lean_object* v___x_1806_ = _args[4];
lean_object* v___x_1807_ = _args[5];
lean_object* v_i_1808_ = _args[6];
lean_object* v_h_1809_ = _args[7];
lean_object* v_x_1810_ = _args[8];
lean_object* v_hSide_1811_ = _args[9];
lean_object* v_inner_1812_ = _args[10];
lean_object* v___y_1813_ = _args[11];
lean_object* v___y_1814_ = _args[12];
lean_object* v___y_1815_ = _args[13];
lean_object* v___y_1816_ = _args[14];
lean_object* v___y_1817_ = _args[15];
lean_object* v___y_1818_ = _args[16];
lean_object* v___y_1819_ = _args[17];
_start:
{
uint8_t v___x_31212__boxed_1820_; lean_object* v_res_1821_; 
v___x_31212__boxed_1820_ = lean_unbox(v___x_1807_);
v_res_1821_ = lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__5(v_a_1802_, v_a_1803_, v_a_1804_, v___x_1805_, v___x_1806_, v___x_31212__boxed_1820_, v_i_1808_, v_h_1809_, v_x_1810_, v_hSide_1811_, v_inner_1812_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_, v___y_1817_, v___y_1818_);
lean_dec(v___y_1818_);
lean_dec_ref(v___y_1817_);
lean_dec(v___y_1816_);
lean_dec_ref(v___y_1815_);
lean_dec(v___y_1814_);
lean_dec_ref(v___y_1813_);
lean_dec(v_x_1810_);
lean_dec(v___x_1805_);
return v_res_1821_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__6(lean_object* v_a_1822_, lean_object* v_a_1823_, lean_object* v_a_1824_, lean_object* v___x_1825_, lean_object* v___x_1826_, uint8_t v___x_1827_, lean_object* v_snd_1828_, lean_object* v_fst_1829_, lean_object* v___f_1830_, lean_object* v___f_1831_, lean_object* v_i_1832_, lean_object* v_h_1833_, lean_object* v_rest_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_){
_start:
{
lean_object* v___x_1842_; lean_object* v___f_1843_; lean_object* v___x_1844_; 
v___x_1842_ = lean_box(v___x_1827_);
v___f_1843_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__5___boxed), 18, 8);
lean_closure_set(v___f_1843_, 0, v_a_1822_);
lean_closure_set(v___f_1843_, 1, v_a_1823_);
lean_closure_set(v___f_1843_, 2, v_a_1824_);
lean_closure_set(v___f_1843_, 3, v___x_1825_);
lean_closure_set(v___f_1843_, 4, v___x_1826_);
lean_closure_set(v___f_1843_, 5, v___x_1842_);
lean_closure_set(v___f_1843_, 6, v_i_1832_);
lean_closure_set(v___f_1843_, 7, v_h_1833_);
v___x_1844_ = lp_vampireReplay_Vampire_Reconstruct_carryPast(v_snd_1828_, v_rest_1834_, v_fst_1829_, v___f_1830_, v___f_1843_, v___f_1831_, v___y_1835_, v___y_1836_, v___y_1837_, v___y_1838_, v___y_1839_, v___y_1840_);
return v___x_1844_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__6___boxed(lean_object** _args){
lean_object* v_a_1845_ = _args[0];
lean_object* v_a_1846_ = _args[1];
lean_object* v_a_1847_ = _args[2];
lean_object* v___x_1848_ = _args[3];
lean_object* v___x_1849_ = _args[4];
lean_object* v___x_1850_ = _args[5];
lean_object* v_snd_1851_ = _args[6];
lean_object* v_fst_1852_ = _args[7];
lean_object* v___f_1853_ = _args[8];
lean_object* v___f_1854_ = _args[9];
lean_object* v_i_1855_ = _args[10];
lean_object* v_h_1856_ = _args[11];
lean_object* v_rest_1857_ = _args[12];
lean_object* v___y_1858_ = _args[13];
lean_object* v___y_1859_ = _args[14];
lean_object* v___y_1860_ = _args[15];
lean_object* v___y_1861_ = _args[16];
lean_object* v___y_1862_ = _args[17];
lean_object* v___y_1863_ = _args[18];
lean_object* v___y_1864_ = _args[19];
_start:
{
uint8_t v___x_31382__boxed_1865_; lean_object* v_res_1866_; 
v___x_31382__boxed_1865_ = lean_unbox(v___x_1850_);
v_res_1866_ = lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__6(v_a_1845_, v_a_1846_, v_a_1847_, v___x_1848_, v___x_1849_, v___x_31382__boxed_1865_, v_snd_1851_, v_fst_1852_, v___f_1853_, v___f_1854_, v_i_1855_, v_h_1856_, v_rest_1857_, v___y_1858_, v___y_1859_, v___y_1860_, v___y_1861_, v___y_1862_, v___y_1863_);
lean_dec(v___y_1863_);
lean_dec_ref(v___y_1862_);
lean_dec(v___y_1861_);
lean_dec_ref(v___y_1860_);
lean_dec(v___y_1859_);
lean_dec_ref(v___y_1858_);
return v_res_1866_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__7(lean_object* v___x_1867_, lean_object* v___x_1868_, lean_object* v___x_1869_, lean_object* v_unit_1870_, lean_object* v___x_1871_, lean_object* v_a_1872_, lean_object* v_fst_1873_, lean_object* v_snd_1874_, lean_object* v_a_1875_, lean_object* v_fst_1876_, lean_object* v_snd_1877_, lean_object* v___x_1878_, lean_object* v___x_1879_, uint8_t v___x_1880_, lean_object* v___f_1881_, lean_object* v___f_1882_, lean_object* v___f_1883_, lean_object* v_xs_1884_, lean_object* v_target_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_){
_start:
{
lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; size_t v_sz_1896_; size_t v___x_1897_; lean_object* v___x_1898_; 
v___x_1893_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__6, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__6_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_treeOf___closed__6);
lean_inc(v___x_1867_);
v___x_1894_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1894_, 0, v___x_1867_);
lean_ctor_set(v___x_1894_, 1, v___x_1893_);
v___x_1895_ = l_Array_zip___redArg(v_xs_1884_, v___x_1868_);
v_sz_1896_ = lean_array_size(v___x_1895_);
v___x_1897_ = ((size_t)0ULL);
v___x_1898_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__0___redArg(v___x_1895_, v_sz_1896_, v___x_1897_, v___x_1894_);
lean_dec_ref(v___x_1895_);
if (lean_obj_tag(v___x_1898_) == 0)
{
lean_object* v_a_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; 
v_a_1899_ = lean_ctor_get(v___x_1898_, 0);
lean_inc(v_a_1899_);
lean_dec_ref_known(v___x_1898_, 1);
v___x_1900_ = lean_mk_empty_array_with_capacity(v___x_1867_);
lean_dec(v___x_1867_);
lean_inc_ref(v___x_1869_);
v___x_1901_ = lp_vampireReplay_Vampire_Reconstruct_coverVars(v___x_1869_, v_a_1899_, v___x_1900_, v___y_1886_, v___y_1887_, v___y_1888_, v___y_1889_, v___y_1890_, v___y_1891_);
lean_dec_ref(v___x_1900_);
if (lean_obj_tag(v___x_1901_) == 0)
{
lean_object* v_a_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; 
v_a_1902_ = lean_ctor_get(v___x_1901_, 0);
lean_inc(v_a_1902_);
lean_dec_ref_known(v___x_1901_, 1);
v___x_1903_ = lp_vampireReplay_Vampire_Unit_boundVarSorts(v_unit_1870_);
lean_inc_ref(v___x_1871_);
v___x_1904_ = lp_vampireReplay_Vampire_Reconstruct_coverVars(v___x_1871_, v_a_1902_, v___x_1903_, v___y_1886_, v___y_1887_, v___y_1888_, v___y_1889_, v___y_1890_, v___y_1891_);
lean_dec_ref(v___x_1903_);
if (lean_obj_tag(v___x_1904_) == 0)
{
lean_object* v_a_1905_; lean_object* v___x_1906_; 
v_a_1905_ = lean_ctor_get(v___x_1904_, 0);
lean_inc(v_a_1905_);
lean_dec_ref_known(v___x_1904_, 1);
lean_inc_ref(v_a_1872_);
lean_inc_ref(v___x_1869_);
v___x_1906_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Rewrite_0__Vampire_Reconstruct_Rewrite_rewrittenOf(v___x_1869_, v_a_1872_, v_a_1905_, v___y_1886_, v___y_1887_, v___y_1888_, v___y_1889_, v___y_1890_, v___y_1891_);
if (lean_obj_tag(v___x_1906_) == 0)
{
lean_object* v_a_1907_; lean_object* v___x_1908_; 
v_a_1907_ = lean_ctor_get(v___x_1906_, 0);
lean_inc(v_a_1907_);
lean_dec_ref_known(v___x_1906_, 1);
v___x_1908_ = lp_vampireReplay_Vampire_Reconstruct_instantiateAt(v___x_1869_, v_a_1872_, v_a_1905_, v_fst_1873_, v_snd_1874_, v___y_1886_, v___y_1887_, v___y_1888_, v___y_1889_, v___y_1890_, v___y_1891_);
if (lean_obj_tag(v___x_1908_) == 0)
{
lean_object* v_a_1909_; lean_object* v_fst_1910_; lean_object* v_snd_1911_; lean_object* v___x_1912_; 
v_a_1909_ = lean_ctor_get(v___x_1908_, 0);
lean_inc(v_a_1909_);
lean_dec_ref_known(v___x_1908_, 1);
v_fst_1910_ = lean_ctor_get(v_a_1909_, 0);
lean_inc(v_fst_1910_);
v_snd_1911_ = lean_ctor_get(v_a_1909_, 1);
lean_inc(v_snd_1911_);
lean_dec(v_a_1909_);
lean_inc_ref(v_a_1875_);
v___x_1912_ = lp_vampireReplay_Vampire_Reconstruct_instantiateAt(v___x_1871_, v_a_1875_, v_a_1905_, v_fst_1876_, v_snd_1877_, v___y_1886_, v___y_1887_, v___y_1888_, v___y_1889_, v___y_1890_, v___y_1891_);
if (lean_obj_tag(v___x_1912_) == 0)
{
lean_object* v_a_1913_; lean_object* v_fst_1914_; lean_object* v_snd_1915_; lean_object* v___f_1916_; lean_object* v___x_1917_; lean_object* v___f_1918_; lean_object* v___x_1919_; 
v_a_1913_ = lean_ctor_get(v___x_1912_, 0);
lean_inc(v_a_1913_);
lean_dec_ref_known(v___x_1912_, 1);
v_fst_1914_ = lean_ctor_get(v_a_1913_, 0);
lean_inc(v_fst_1914_);
v_snd_1915_ = lean_ctor_get(v_a_1913_, 1);
lean_inc(v_snd_1915_);
lean_dec(v_a_1913_);
lean_inc(v_a_1907_);
v___f_1916_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__1___boxed), 2, 1);
lean_closure_set(v___f_1916_, 0, v_a_1907_);
v___x_1917_ = lean_box(v___x_1880_);
v___f_1918_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__6___boxed), 20, 10);
lean_closure_set(v___f_1918_, 0, v_a_1875_);
lean_closure_set(v___f_1918_, 1, v_a_1905_);
lean_closure_set(v___f_1918_, 2, v_a_1907_);
lean_closure_set(v___f_1918_, 3, v___x_1878_);
lean_closure_set(v___f_1918_, 4, v___x_1879_);
lean_closure_set(v___f_1918_, 5, v___x_1917_);
lean_closure_set(v___f_1918_, 6, v_snd_1915_);
lean_closure_set(v___f_1918_, 7, v_fst_1914_);
lean_closure_set(v___f_1918_, 8, v___f_1881_);
lean_closure_set(v___f_1918_, 9, v___f_1882_);
v___x_1919_ = lp_vampireReplay_Vampire_Reconstruct_carryPast(v_snd_1911_, v_target_1885_, v_fst_1910_, v___f_1916_, v___f_1918_, v___f_1883_, v___y_1886_, v___y_1887_, v___y_1888_, v___y_1889_, v___y_1890_, v___y_1891_);
if (lean_obj_tag(v___x_1919_) == 0)
{
lean_object* v_a_1920_; uint8_t v___x_1921_; uint8_t v___x_1922_; lean_object* v___x_1923_; 
v_a_1920_ = lean_ctor_get(v___x_1919_, 0);
lean_inc(v_a_1920_);
lean_dec_ref_known(v___x_1919_, 1);
v___x_1921_ = 0;
v___x_1922_ = 1;
v___x_1923_ = l_Lean_Meta_mkLambdaFVars(v_xs_1884_, v_a_1920_, v___x_1921_, v___x_1880_, v___x_1921_, v___x_1880_, v___x_1922_, v___y_1888_, v___y_1889_, v___y_1890_, v___y_1891_);
return v___x_1923_;
}
else
{
return v___x_1919_;
}
}
else
{
lean_object* v_a_1924_; lean_object* v___x_1926_; uint8_t v_isShared_1927_; uint8_t v_isSharedCheck_1931_; 
lean_dec(v_snd_1911_);
lean_dec(v_fst_1910_);
lean_dec(v_a_1907_);
lean_dec(v_a_1905_);
lean_dec_ref(v_target_1885_);
lean_dec_ref(v___f_1883_);
lean_dec_ref(v___f_1882_);
lean_dec_ref(v___f_1881_);
lean_dec(v___x_1879_);
lean_dec(v___x_1878_);
lean_dec_ref(v_a_1875_);
v_a_1924_ = lean_ctor_get(v___x_1912_, 0);
v_isSharedCheck_1931_ = !lean_is_exclusive(v___x_1912_);
if (v_isSharedCheck_1931_ == 0)
{
v___x_1926_ = v___x_1912_;
v_isShared_1927_ = v_isSharedCheck_1931_;
goto v_resetjp_1925_;
}
else
{
lean_inc(v_a_1924_);
lean_dec(v___x_1912_);
v___x_1926_ = lean_box(0);
v_isShared_1927_ = v_isSharedCheck_1931_;
goto v_resetjp_1925_;
}
v_resetjp_1925_:
{
lean_object* v___x_1929_; 
if (v_isShared_1927_ == 0)
{
v___x_1929_ = v___x_1926_;
goto v_reusejp_1928_;
}
else
{
lean_object* v_reuseFailAlloc_1930_; 
v_reuseFailAlloc_1930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1930_, 0, v_a_1924_);
v___x_1929_ = v_reuseFailAlloc_1930_;
goto v_reusejp_1928_;
}
v_reusejp_1928_:
{
return v___x_1929_;
}
}
}
}
else
{
lean_object* v_a_1932_; lean_object* v___x_1934_; uint8_t v_isShared_1935_; uint8_t v_isSharedCheck_1939_; 
lean_dec(v_a_1907_);
lean_dec(v_a_1905_);
lean_dec_ref(v_target_1885_);
lean_dec_ref(v___f_1883_);
lean_dec_ref(v___f_1882_);
lean_dec_ref(v___f_1881_);
lean_dec(v___x_1879_);
lean_dec(v___x_1878_);
lean_dec_ref(v_snd_1877_);
lean_dec_ref(v_fst_1876_);
lean_dec_ref(v_a_1875_);
lean_dec_ref(v___x_1871_);
v_a_1932_ = lean_ctor_get(v___x_1908_, 0);
v_isSharedCheck_1939_ = !lean_is_exclusive(v___x_1908_);
if (v_isSharedCheck_1939_ == 0)
{
v___x_1934_ = v___x_1908_;
v_isShared_1935_ = v_isSharedCheck_1939_;
goto v_resetjp_1933_;
}
else
{
lean_inc(v_a_1932_);
lean_dec(v___x_1908_);
v___x_1934_ = lean_box(0);
v_isShared_1935_ = v_isSharedCheck_1939_;
goto v_resetjp_1933_;
}
v_resetjp_1933_:
{
lean_object* v___x_1937_; 
if (v_isShared_1935_ == 0)
{
v___x_1937_ = v___x_1934_;
goto v_reusejp_1936_;
}
else
{
lean_object* v_reuseFailAlloc_1938_; 
v_reuseFailAlloc_1938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1938_, 0, v_a_1932_);
v___x_1937_ = v_reuseFailAlloc_1938_;
goto v_reusejp_1936_;
}
v_reusejp_1936_:
{
return v___x_1937_;
}
}
}
}
else
{
lean_object* v_a_1940_; lean_object* v___x_1942_; uint8_t v_isShared_1943_; uint8_t v_isSharedCheck_1947_; 
lean_dec(v_a_1905_);
lean_dec_ref(v_target_1885_);
lean_dec_ref(v___f_1883_);
lean_dec_ref(v___f_1882_);
lean_dec_ref(v___f_1881_);
lean_dec(v___x_1879_);
lean_dec(v___x_1878_);
lean_dec_ref(v_snd_1877_);
lean_dec_ref(v_fst_1876_);
lean_dec_ref(v_a_1875_);
lean_dec_ref(v_snd_1874_);
lean_dec_ref(v_fst_1873_);
lean_dec_ref(v_a_1872_);
lean_dec_ref(v___x_1871_);
lean_dec_ref(v___x_1869_);
v_a_1940_ = lean_ctor_get(v___x_1906_, 0);
v_isSharedCheck_1947_ = !lean_is_exclusive(v___x_1906_);
if (v_isSharedCheck_1947_ == 0)
{
v___x_1942_ = v___x_1906_;
v_isShared_1943_ = v_isSharedCheck_1947_;
goto v_resetjp_1941_;
}
else
{
lean_inc(v_a_1940_);
lean_dec(v___x_1906_);
v___x_1942_ = lean_box(0);
v_isShared_1943_ = v_isSharedCheck_1947_;
goto v_resetjp_1941_;
}
v_resetjp_1941_:
{
lean_object* v___x_1945_; 
if (v_isShared_1943_ == 0)
{
v___x_1945_ = v___x_1942_;
goto v_reusejp_1944_;
}
else
{
lean_object* v_reuseFailAlloc_1946_; 
v_reuseFailAlloc_1946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1946_, 0, v_a_1940_);
v___x_1945_ = v_reuseFailAlloc_1946_;
goto v_reusejp_1944_;
}
v_reusejp_1944_:
{
return v___x_1945_;
}
}
}
}
else
{
lean_object* v_a_1948_; lean_object* v___x_1950_; uint8_t v_isShared_1951_; uint8_t v_isSharedCheck_1955_; 
lean_dec_ref(v_target_1885_);
lean_dec_ref(v___f_1883_);
lean_dec_ref(v___f_1882_);
lean_dec_ref(v___f_1881_);
lean_dec(v___x_1879_);
lean_dec(v___x_1878_);
lean_dec_ref(v_snd_1877_);
lean_dec_ref(v_fst_1876_);
lean_dec_ref(v_a_1875_);
lean_dec_ref(v_snd_1874_);
lean_dec_ref(v_fst_1873_);
lean_dec_ref(v_a_1872_);
lean_dec_ref(v___x_1871_);
lean_dec_ref(v___x_1869_);
v_a_1948_ = lean_ctor_get(v___x_1904_, 0);
v_isSharedCheck_1955_ = !lean_is_exclusive(v___x_1904_);
if (v_isSharedCheck_1955_ == 0)
{
v___x_1950_ = v___x_1904_;
v_isShared_1951_ = v_isSharedCheck_1955_;
goto v_resetjp_1949_;
}
else
{
lean_inc(v_a_1948_);
lean_dec(v___x_1904_);
v___x_1950_ = lean_box(0);
v_isShared_1951_ = v_isSharedCheck_1955_;
goto v_resetjp_1949_;
}
v_resetjp_1949_:
{
lean_object* v___x_1953_; 
if (v_isShared_1951_ == 0)
{
v___x_1953_ = v___x_1950_;
goto v_reusejp_1952_;
}
else
{
lean_object* v_reuseFailAlloc_1954_; 
v_reuseFailAlloc_1954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1954_, 0, v_a_1948_);
v___x_1953_ = v_reuseFailAlloc_1954_;
goto v_reusejp_1952_;
}
v_reusejp_1952_:
{
return v___x_1953_;
}
}
}
}
else
{
lean_object* v_a_1956_; lean_object* v___x_1958_; uint8_t v_isShared_1959_; uint8_t v_isSharedCheck_1963_; 
lean_dec_ref(v_target_1885_);
lean_dec_ref(v___f_1883_);
lean_dec_ref(v___f_1882_);
lean_dec_ref(v___f_1881_);
lean_dec(v___x_1879_);
lean_dec(v___x_1878_);
lean_dec_ref(v_snd_1877_);
lean_dec_ref(v_fst_1876_);
lean_dec_ref(v_a_1875_);
lean_dec_ref(v_snd_1874_);
lean_dec_ref(v_fst_1873_);
lean_dec_ref(v_a_1872_);
lean_dec_ref(v___x_1871_);
lean_dec_ref(v_unit_1870_);
lean_dec_ref(v___x_1869_);
v_a_1956_ = lean_ctor_get(v___x_1901_, 0);
v_isSharedCheck_1963_ = !lean_is_exclusive(v___x_1901_);
if (v_isSharedCheck_1963_ == 0)
{
v___x_1958_ = v___x_1901_;
v_isShared_1959_ = v_isSharedCheck_1963_;
goto v_resetjp_1957_;
}
else
{
lean_inc(v_a_1956_);
lean_dec(v___x_1901_);
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
else
{
lean_object* v_a_1964_; lean_object* v___x_1966_; uint8_t v_isShared_1967_; uint8_t v_isSharedCheck_1971_; 
lean_dec_ref(v_target_1885_);
lean_dec_ref(v___f_1883_);
lean_dec_ref(v___f_1882_);
lean_dec_ref(v___f_1881_);
lean_dec(v___x_1879_);
lean_dec(v___x_1878_);
lean_dec_ref(v_snd_1877_);
lean_dec_ref(v_fst_1876_);
lean_dec_ref(v_a_1875_);
lean_dec_ref(v_snd_1874_);
lean_dec_ref(v_fst_1873_);
lean_dec_ref(v_a_1872_);
lean_dec_ref(v___x_1871_);
lean_dec_ref(v_unit_1870_);
lean_dec_ref(v___x_1869_);
lean_dec(v___x_1867_);
v_a_1964_ = lean_ctor_get(v___x_1898_, 0);
v_isSharedCheck_1971_ = !lean_is_exclusive(v___x_1898_);
if (v_isSharedCheck_1971_ == 0)
{
v___x_1966_ = v___x_1898_;
v_isShared_1967_ = v_isSharedCheck_1971_;
goto v_resetjp_1965_;
}
else
{
lean_inc(v_a_1964_);
lean_dec(v___x_1898_);
v___x_1966_ = lean_box(0);
v_isShared_1967_ = v_isSharedCheck_1971_;
goto v_resetjp_1965_;
}
v_resetjp_1965_:
{
lean_object* v___x_1969_; 
if (v_isShared_1967_ == 0)
{
v___x_1969_ = v___x_1966_;
goto v_reusejp_1968_;
}
else
{
lean_object* v_reuseFailAlloc_1970_; 
v_reuseFailAlloc_1970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1970_, 0, v_a_1964_);
v___x_1969_ = v_reuseFailAlloc_1970_;
goto v_reusejp_1968_;
}
v_reusejp_1968_:
{
return v___x_1969_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__7___boxed(lean_object** _args){
lean_object* v___x_1972_ = _args[0];
lean_object* v___x_1973_ = _args[1];
lean_object* v___x_1974_ = _args[2];
lean_object* v_unit_1975_ = _args[3];
lean_object* v___x_1976_ = _args[4];
lean_object* v_a_1977_ = _args[5];
lean_object* v_fst_1978_ = _args[6];
lean_object* v_snd_1979_ = _args[7];
lean_object* v_a_1980_ = _args[8];
lean_object* v_fst_1981_ = _args[9];
lean_object* v_snd_1982_ = _args[10];
lean_object* v___x_1983_ = _args[11];
lean_object* v___x_1984_ = _args[12];
lean_object* v___x_1985_ = _args[13];
lean_object* v___f_1986_ = _args[14];
lean_object* v___f_1987_ = _args[15];
lean_object* v___f_1988_ = _args[16];
lean_object* v_xs_1989_ = _args[17];
lean_object* v_target_1990_ = _args[18];
lean_object* v___y_1991_ = _args[19];
lean_object* v___y_1992_ = _args[20];
lean_object* v___y_1993_ = _args[21];
lean_object* v___y_1994_ = _args[22];
lean_object* v___y_1995_ = _args[23];
lean_object* v___y_1996_ = _args[24];
lean_object* v___y_1997_ = _args[25];
_start:
{
uint8_t v___x_31449__boxed_1998_; lean_object* v_res_1999_; 
v___x_31449__boxed_1998_ = lean_unbox(v___x_1985_);
v_res_1999_ = lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__7(v___x_1972_, v___x_1973_, v___x_1974_, v_unit_1975_, v___x_1976_, v_a_1977_, v_fst_1978_, v_snd_1979_, v_a_1980_, v_fst_1981_, v_snd_1982_, v___x_1983_, v___x_1984_, v___x_31449__boxed_1998_, v___f_1986_, v___f_1987_, v___f_1988_, v_xs_1989_, v_target_1990_, v___y_1991_, v___y_1992_, v___y_1993_, v___y_1994_, v___y_1995_, v___y_1996_);
lean_dec(v___y_1996_);
lean_dec_ref(v___y_1995_);
lean_dec(v___y_1994_);
lean_dec_ref(v___y_1993_);
lean_dec(v___y_1992_);
lean_dec_ref(v___y_1991_);
lean_dec_ref(v_xs_1989_);
lean_dec_ref(v___x_1973_);
return v_res_1999_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___closed__1(void){
_start:
{
lean_object* v___x_2001_; lean_object* v___x_2002_; 
v___x_2001_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___closed__0));
v___x_2002_ = l_Lean_stringToMessageData(v___x_2001_);
return v___x_2002_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___closed__3(void){
_start:
{
lean_object* v___x_2004_; lean_object* v___x_2005_; 
v___x_2004_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___closed__2));
v___x_2005_ = l_Lean_stringToMessageData(v___x_2004_);
return v___x_2005_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___closed__6(void){
_start:
{
lean_object* v___x_2008_; lean_object* v___x_2009_; 
v___x_2008_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___closed__5));
v___x_2009_ = l_Lean_stringToMessageData(v___x_2008_);
return v___x_2009_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition(lean_object* v_step_2010_, lean_object* v_a_2011_, lean_object* v_a_2012_, lean_object* v_a_2013_, lean_object* v_a_2014_, lean_object* v_a_2015_, lean_object* v_a_2016_){
_start:
{
lean_object* v_unit_2018_; lean_object* v_premises_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; uint8_t v___x_2022_; 
v_unit_2018_ = lean_ctor_get(v_step_2010_, 0);
lean_inc_ref(v_unit_2018_);
v_premises_2019_ = lean_ctor_get(v_step_2010_, 1);
v___x_2020_ = lean_array_get_size(v_premises_2019_);
v___x_2021_ = lean_unsigned_to_nat(2u);
v___x_2022_ = lean_nat_dec_eq(v___x_2020_, v___x_2021_);
if (v___x_2022_ == 0)
{
lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; 
lean_dec_ref(v_unit_2018_);
lean_dec_ref(v_step_2010_);
v___x_2023_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___closed__1);
v___x_2024_ = l_Nat_reprFast(v___x_2020_);
v___x_2025_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2025_, 0, v___x_2024_);
v___x_2026_ = l_Lean_MessageData_ofFormat(v___x_2025_);
v___x_2027_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2027_, 0, v___x_2023_);
lean_ctor_set(v___x_2027_, 1, v___x_2026_);
v___x_2028_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2027_, v_a_2013_, v_a_2014_, v_a_2015_, v_a_2016_);
return v___x_2028_;
}
else
{
lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v_fst_2031_; lean_object* v_snd_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v_fst_2035_; lean_object* v_snd_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; uint8_t v___x_2039_; 
v___x_2029_ = lean_unsigned_to_nat(0u);
v___x_2030_ = lean_array_fget_borrowed(v_premises_2019_, v___x_2029_);
v_fst_2031_ = lean_ctor_get(v___x_2030_, 0);
lean_inc(v_fst_2031_);
v_snd_2032_ = lean_ctor_get(v___x_2030_, 1);
lean_inc(v_snd_2032_);
v___x_2033_ = lean_unsigned_to_nat(1u);
v___x_2034_ = lean_array_fget_borrowed(v_premises_2019_, v___x_2033_);
v_fst_2035_ = lean_ctor_get(v___x_2034_, 0);
lean_inc(v_fst_2035_);
v_snd_2036_ = lean_ctor_get(v___x_2034_, 1);
lean_inc(v_snd_2036_);
lean_inc_ref(v_unit_2018_);
v___x_2037_ = lp_vampireReplay_Vampire_Unit_parents(v_unit_2018_);
v___x_2038_ = lean_array_get_size(v___x_2037_);
v___x_2039_ = lean_nat_dec_eq(v___x_2038_, v___x_2021_);
if (v___x_2039_ == 0)
{
lean_object* v___x_2040_; lean_object* v___x_2041_; 
lean_dec_ref(v___x_2037_);
lean_dec(v_snd_2036_);
lean_dec(v_fst_2035_);
lean_dec(v_snd_2032_);
lean_dec(v_fst_2031_);
lean_dec_ref(v_unit_2018_);
lean_dec_ref(v_step_2010_);
v___x_2040_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___closed__3, &lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___closed__3);
v___x_2041_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2040_, v_a_2013_, v_a_2014_, v_a_2015_, v_a_2016_);
return v___x_2041_;
}
else
{
lean_object* v___x_2042_; 
lean_inc_ref(v_step_2010_);
v___x_2042_ = lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg(v_step_2010_, v___x_2029_, v_a_2013_, v_a_2014_, v_a_2015_, v_a_2016_);
if (lean_obj_tag(v___x_2042_) == 0)
{
lean_object* v_a_2043_; lean_object* v___x_2044_; 
v_a_2043_ = lean_ctor_get(v___x_2042_, 0);
lean_inc(v_a_2043_);
lean_dec_ref_known(v___x_2042_, 1);
lean_inc_ref(v_step_2010_);
v___x_2044_ = lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg(v_step_2010_, v___x_2033_, v_a_2013_, v_a_2014_, v_a_2015_, v_a_2016_);
if (lean_obj_tag(v___x_2044_) == 0)
{
lean_object* v_a_2045_; lean_object* v_literal_2046_; 
v_a_2045_ = lean_ctor_get(v___x_2044_, 0);
lean_inc(v_a_2045_);
lean_dec_ref_known(v___x_2044_, 1);
v_literal_2046_ = lean_ctor_get(v_a_2045_, 0);
lean_inc(v_literal_2046_);
if (lean_obj_tag(v_literal_2046_) == 1)
{
lean_object* v_val_2047_; lean_object* v___x_2049_; uint8_t v_isShared_2050_; uint8_t v_isSharedCheck_2066_; 
v_val_2047_ = lean_ctor_get(v_literal_2046_, 0);
v_isSharedCheck_2066_ = !lean_is_exclusive(v_literal_2046_);
if (v_isSharedCheck_2066_ == 0)
{
v___x_2049_ = v_literal_2046_;
v_isShared_2050_ = v_isSharedCheck_2066_;
goto v_resetjp_2048_;
}
else
{
lean_inc(v_val_2047_);
lean_dec(v_literal_2046_);
v___x_2049_ = lean_box(0);
v_isShared_2050_ = v_isSharedCheck_2066_;
goto v_resetjp_2048_;
}
v_resetjp_2048_:
{
lean_object* v___x_2051_; 
v___x_2051_ = lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(v_step_2010_, v_a_2011_, v_a_2012_, v_a_2013_, v_a_2014_, v_a_2015_, v_a_2016_);
if (lean_obj_tag(v___x_2051_) == 0)
{
lean_object* v_a_2052_; lean_object* v___f_2053_; lean_object* v___f_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___f_2059_; lean_object* v___x_2060_; lean_object* v___x_2062_; 
v_a_2052_ = lean_ctor_get(v___x_2051_, 0);
lean_inc(v_a_2052_);
lean_dec_ref_known(v___x_2051_, 1);
v___f_2053_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___closed__4));
v___f_2054_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__2___boxed), 2, 1);
lean_closure_set(v___f_2054_, 0, v_val_2047_);
v___x_2055_ = lean_array_fget(v___x_2037_, v___x_2029_);
v___x_2056_ = lean_array_fget(v___x_2037_, v___x_2033_);
lean_dec_ref(v___x_2037_);
lean_inc_ref(v_unit_2018_);
v___x_2057_ = lp_vampireReplay_Vampire_Unit_varSorts(v_unit_2018_);
v___x_2058_ = lean_box(v___x_2039_);
lean_inc_ref(v___x_2057_);
v___f_2059_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___lam__7___boxed), 26, 17);
lean_closure_set(v___f_2059_, 0, v___x_2029_);
lean_closure_set(v___f_2059_, 1, v___x_2057_);
lean_closure_set(v___f_2059_, 2, v___x_2055_);
lean_closure_set(v___f_2059_, 3, v_unit_2018_);
lean_closure_set(v___f_2059_, 4, v___x_2056_);
lean_closure_set(v___f_2059_, 5, v_a_2043_);
lean_closure_set(v___f_2059_, 6, v_fst_2031_);
lean_closure_set(v___f_2059_, 7, v_snd_2032_);
lean_closure_set(v___f_2059_, 8, v_a_2045_);
lean_closure_set(v___f_2059_, 9, v_fst_2035_);
lean_closure_set(v___f_2059_, 10, v_snd_2036_);
lean_closure_set(v___f_2059_, 11, v___x_2021_);
lean_closure_set(v___f_2059_, 12, v___x_2033_);
lean_closure_set(v___f_2059_, 13, v___x_2058_);
lean_closure_set(v___f_2059_, 14, v___f_2054_);
lean_closure_set(v___f_2059_, 15, v___f_2053_);
lean_closure_set(v___f_2059_, 16, v___f_2053_);
v___x_2060_ = lean_array_get_size(v___x_2057_);
lean_dec_ref(v___x_2057_);
if (v_isShared_2050_ == 0)
{
lean_ctor_set(v___x_2049_, 0, v___x_2060_);
v___x_2062_ = v___x_2049_;
goto v_reusejp_2061_;
}
else
{
lean_object* v_reuseFailAlloc_2065_; 
v_reuseFailAlloc_2065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2065_, 0, v___x_2060_);
v___x_2062_ = v_reuseFailAlloc_2065_;
goto v_reusejp_2061_;
}
v_reusejp_2061_:
{
uint8_t v___x_2063_; lean_object* v___x_2064_; 
v___x_2063_ = 0;
v___x_2064_ = lp_vampireReplay_Lean_Meta_forallBoundedTelescope___at___00Vampire_Reconstruct_relateLiterals_spec__6___redArg(v_a_2052_, v___x_2062_, v___f_2059_, v___x_2063_, v___x_2063_, v_a_2011_, v_a_2012_, v_a_2013_, v_a_2014_, v_a_2015_, v_a_2016_);
return v___x_2064_;
}
}
else
{
lean_del_object(v___x_2049_);
lean_dec(v_val_2047_);
lean_dec(v_a_2045_);
lean_dec(v_a_2043_);
lean_dec_ref(v___x_2037_);
lean_dec(v_snd_2036_);
lean_dec(v_fst_2035_);
lean_dec(v_snd_2032_);
lean_dec(v_fst_2031_);
lean_dec_ref(v_unit_2018_);
return v___x_2051_;
}
}
}
else
{
lean_object* v___x_2067_; lean_object* v___x_2068_; 
lean_dec(v_literal_2046_);
lean_dec(v_a_2045_);
lean_dec(v_a_2043_);
lean_dec_ref(v___x_2037_);
lean_dec(v_snd_2036_);
lean_dec(v_fst_2035_);
lean_dec(v_snd_2032_);
lean_dec(v_fst_2031_);
lean_dec_ref(v_unit_2018_);
lean_dec_ref(v_step_2010_);
v___x_2067_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___closed__6, &lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___closed__6_once, _init_lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___closed__6);
v___x_2068_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2067_, v_a_2013_, v_a_2014_, v_a_2015_, v_a_2016_);
return v___x_2068_;
}
}
else
{
lean_object* v_a_2069_; lean_object* v___x_2071_; uint8_t v_isShared_2072_; uint8_t v_isSharedCheck_2076_; 
lean_dec(v_a_2043_);
lean_dec_ref(v___x_2037_);
lean_dec(v_snd_2036_);
lean_dec(v_fst_2035_);
lean_dec(v_snd_2032_);
lean_dec(v_fst_2031_);
lean_dec_ref(v_unit_2018_);
lean_dec_ref(v_step_2010_);
v_a_2069_ = lean_ctor_get(v___x_2044_, 0);
v_isSharedCheck_2076_ = !lean_is_exclusive(v___x_2044_);
if (v_isSharedCheck_2076_ == 0)
{
v___x_2071_ = v___x_2044_;
v_isShared_2072_ = v_isSharedCheck_2076_;
goto v_resetjp_2070_;
}
else
{
lean_inc(v_a_2069_);
lean_dec(v___x_2044_);
v___x_2071_ = lean_box(0);
v_isShared_2072_ = v_isSharedCheck_2076_;
goto v_resetjp_2070_;
}
v_resetjp_2070_:
{
lean_object* v___x_2074_; 
if (v_isShared_2072_ == 0)
{
v___x_2074_ = v___x_2071_;
goto v_reusejp_2073_;
}
else
{
lean_object* v_reuseFailAlloc_2075_; 
v_reuseFailAlloc_2075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2075_, 0, v_a_2069_);
v___x_2074_ = v_reuseFailAlloc_2075_;
goto v_reusejp_2073_;
}
v_reusejp_2073_:
{
return v___x_2074_;
}
}
}
}
else
{
lean_object* v_a_2077_; lean_object* v___x_2079_; uint8_t v_isShared_2080_; uint8_t v_isSharedCheck_2084_; 
lean_dec_ref(v___x_2037_);
lean_dec(v_snd_2036_);
lean_dec(v_fst_2035_);
lean_dec(v_snd_2032_);
lean_dec(v_fst_2031_);
lean_dec_ref(v_unit_2018_);
lean_dec_ref(v_step_2010_);
v_a_2077_ = lean_ctor_get(v___x_2042_, 0);
v_isSharedCheck_2084_ = !lean_is_exclusive(v___x_2042_);
if (v_isSharedCheck_2084_ == 0)
{
v___x_2079_ = v___x_2042_;
v_isShared_2080_ = v_isSharedCheck_2084_;
goto v_resetjp_2078_;
}
else
{
lean_inc(v_a_2077_);
lean_dec(v___x_2042_);
v___x_2079_ = lean_box(0);
v_isShared_2080_ = v_isSharedCheck_2084_;
goto v_resetjp_2078_;
}
v_resetjp_2078_:
{
lean_object* v___x_2082_; 
if (v_isShared_2080_ == 0)
{
v___x_2082_ = v___x_2079_;
goto v_reusejp_2081_;
}
else
{
lean_object* v_reuseFailAlloc_2083_; 
v_reuseFailAlloc_2083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2083_, 0, v_a_2077_);
v___x_2082_ = v_reuseFailAlloc_2083_;
goto v_reusejp_2081_;
}
v_reusejp_2081_:
{
return v___x_2082_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition___boxed(lean_object* v_step_2085_, lean_object* v_a_2086_, lean_object* v_a_2087_, lean_object* v_a_2088_, lean_object* v_a_2089_, lean_object* v_a_2090_, lean_object* v_a_2091_, lean_object* v_a_2092_){
_start:
{
lean_object* v_res_2093_; 
v_res_2093_ = lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition(v_step_2085_, v_a_2086_, v_a_2087_, v_a_2088_, v_a_2089_, v_a_2090_, v_a_2091_);
lean_dec(v_a_2091_);
lean_dec_ref(v_a_2090_);
lean_dec(v_a_2089_);
lean_dec_ref(v_a_2088_);
lean_dec(v_a_2087_);
lean_dec_ref(v_a_2086_);
return v_res_2093_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_vampireReplay_VampireReplay_Reconstruct_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_vampireReplay_VampireReplay_Reconstruct_Rules_Rewrite(uint8_t builtin) {
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
