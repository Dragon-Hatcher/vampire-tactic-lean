// Lean compiler output
// Module: VampireReplay.Reconstruct.Equiv
// Imports: public import Init public meta import Init public import VampireReplay.Reconstruct.Literal
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
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_arithmeticIff(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_elimParts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_instMonadEIO(lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Pi_instInhabited___redArg___lam__0(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_introParts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* lean_expr_abstract(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Array_zipIdx___redArg(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t l_Option_instBEq_beq___at___00Lean_Meta_Grind_Arith_Linear_propagateIneq_spec__0(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_junction(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_junctionParts(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_nonempty(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
LEAN_EXPORT uint8_t lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_isPropType(lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_isPropType___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_nnfStep___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_nnfStep___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Exists"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__0_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__0_value),LEAN_SCALAR_PTR_LITERAL(65, 29, 48, 135, 199, 176, 149, 70)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__1_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Classical"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__2_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "not_forall"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__3 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__3_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__2_value),LEAN_SCALAR_PTR_LITERAL(40, 236, 220, 79, 38, 141, 161, 150)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__4_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__3_value),LEAN_SCALAR_PTR_LITERAL(113, 55, 178, 26, 122, 226, 82, 222)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__4_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__5 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__5_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__5_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__6 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__6_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "not_exists"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__7 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__7_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__7_value),LEAN_SCALAR_PTR_LITERAL(161, 183, 12, 64, 200, 252, 1, 72)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__8 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__8_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Iff"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__9 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__9_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__9_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__10 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__10_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Not"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__11 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__11_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__11_value),LEAN_SCALAR_PTR_LITERAL(185, 11, 203, 55, 27, 192, 137, 230)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__12 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__12_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "And"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__13 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__13_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__13_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__14 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__14_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Or"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__15 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__15_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__15_value),LEAN_SCALAR_PTR_LITERAL(34, 237, 162, 225, 217, 98, 205, 196)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__16 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__16_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__17;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__18;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "not_or"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__19 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__19_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__19_value),LEAN_SCALAR_PTR_LITERAL(112, 214, 26, 199, 216, 200, 97, 117)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__20 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__20_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__21;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "not_and_iff_not_or_not"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__22 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__22_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__2_value),LEAN_SCALAR_PTR_LITERAL(40, 236, 220, 79, 38, 141, 161, 150)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__23_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__22_value),LEAN_SCALAR_PTR_LITERAL(210, 62, 29, 195, 181, 75, 51, 216)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__23 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__23_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "not_not"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__24 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__24_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__2_value),LEAN_SCALAR_PTR_LITERAL(40, 236, 220, 79, 38, 141, 161, 150)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__25_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__24_value),LEAN_SCALAR_PTR_LITERAL(145, 137, 207, 135, 95, 147, 196, 34)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__25 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__25_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "iff_iff_implies_and_implies"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__26 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__26_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__26_value),LEAN_SCALAR_PTR_LITERAL(65, 98, 125, 184, 35, 143, 136, 103)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__27 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__27_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "propDecidable"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__28 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__28_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__2_value),LEAN_SCALAR_PTR_LITERAL(40, 236, 220, 79, 38, 141, 161, 150)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__29_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__28_value),LEAN_SCALAR_PTR_LITERAL(166, 239, 88, 215, 135, 192, 113, 64)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__29 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__29_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__30 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__30_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "imp_iff_not_or"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__31 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__31_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__32_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__30_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__32_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__31_value),LEAN_SCALAR_PTR_LITERAL(63, 19, 145, 232, 73, 180, 75, 152)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__32 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__32_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_nnfStep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_nnfStep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_toNNF___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "forall_congr'"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_toNNF___lam__0___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_toNNF___lam__0___closed__0_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_toNNF___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_toNNF___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(63, 255, 57, 163, 42, 11, 214, 176)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_toNNF___lam__0___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_toNNF___lam__0___closed__1_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trans"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__0_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__9_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__1_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__0_value),LEAN_SCALAR_PTR_LITERAL(25, 192, 189, 143, 180, 129, 112, 178)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__1_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "or_congr"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__5 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__5_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__5_value),LEAN_SCALAR_PTR_LITERAL(97, 254, 90, 169, 212, 147, 67, 5)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__6 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__6_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__16_value),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__6_value)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__7 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__7_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__8 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__8_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "and_congr"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__2_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__2_value),LEAN_SCALAR_PTR_LITERAL(188, 238, 216, 229, 220, 92, 101, 241)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__3 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__3_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__14_value),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__3_value)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__4_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__4_value),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__8_value)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__9 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__9_value;
static const lean_ctor_object lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_toNNF_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_toNNF_spec__0___redArg___closed__0 = (const lean_object*)&lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_toNNF_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_toNNF_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_toNNF___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "refl"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__10 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__10_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__9_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__11_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__10_value),LEAN_SCALAR_PTR_LITERAL(196, 84, 201, 13, 92, 117, 118, 47)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__11 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__11_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_toNNF___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "exists_congr"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_toNNF___lam__1___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_toNNF___lam__1___closed__0_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_toNNF___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_toNNF___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(233, 95, 142, 123, 147, 63, 142, 134)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_toNNF___lam__1___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_toNNF___lam__1___closed__1_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_toNNF___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_toNNF___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_toNNF(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_toNNF___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_toNNF_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_toNNF___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_toNNF_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_toNNF_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_implies___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "missing disjunct"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_implies___lam__0___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_implies___lam__0___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_implies___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_implies___lam__0___closed__1;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_implies___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_implies___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_implies___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_implies___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_implies___lam__6(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_implies___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_implies___lam__4(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_implies___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_implies_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_implies_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_implies_spec__2___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_implies_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_implies_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_implies_spec__2___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_implies_spec__2___closed__0_value;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_implies_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_implies_spec__2___closed__1 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_implies_spec__2___closed__1_value;
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_implies_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_implies_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_implies_spec__2___closed__2 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_implies_spec__2___closed__2_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_implies_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_implies_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "absurd"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__3___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__3___closed__0_value;
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(93, 22, 196, 124, 199, 219, 238, 136)}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__3___closed__1 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__3___closed__1_value;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "intro"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__3___closed__2 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__3___closed__2_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "symm"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__5___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__5___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__5(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "e"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__6___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__6___closed__0_value;
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(26, 154, 90, 102, 217, 192, 49, 255)}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__6___closed__1 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__6___closed__1_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__6(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "elim"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__1___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__1___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__0_value;
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__1 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__1_value;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "implies: the disjunct"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__2 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__3;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "\nis neither among"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__4 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__4_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__5;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "\nnor refutable"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__6 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__6_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__7;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "l"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__8 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__8_value;
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__8_value),LEAN_SCALAR_PTR_LITERAL(140, 76, 64, 139, 36, 56, 191, 236)}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__9 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__9_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___closed__0_value;
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___closed__1 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___closed__1_value;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___closed__2 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___closed__2_value;
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___closed__3 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___closed__3_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_implies___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_implies___closed__0;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_implies___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_implies___closed__1;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_implies___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_implies___lam__3(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_implies___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_implies___lam__5(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_implies___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_implies___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "implies: cannot relate"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_implies___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_implies___closed__2_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_implies___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_implies___closed__3;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_implies___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "\nto"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_implies___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_implies___closed__4_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_implies___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_implies___closed__5;
static const lean_closure_object lp_vampireReplay_Vampire_Reconstruct_implies___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_vampireReplay_Vampire_Reconstruct_implies___lam__6___boxed, .m_arity = 9, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_implies___closed__6 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_implies___closed__6_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_implies(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_implies___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_implies___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__0_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "iff_of_eq"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__1 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__1_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(186, 65, 13, 14, 191, 127, 32, 251)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__2 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__2_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "or_false"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__3 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__3_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(153, 216, 196, 245, 126, 96, 113, 194)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__4 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__4_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "and_true"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__5 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__5_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(237, 177, 40, 201, 177, 145, 63, 28)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__6 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__6_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "false_or"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__7 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__7_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(30, 122, 222, 214, 97, 236, 146, 97)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__8 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__8_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "true_and"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__9 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__9_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__9_value),LEAN_SCALAR_PTR_LITERAL(65, 203, 32, 128, 22, 56, 91, 241)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__10 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__10_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_rightNested_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_rightNested_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_rightNested(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_rightNested___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_rightNested_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_rightNested_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_standingFor___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_standingFor___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Vampire_Reconstruct_standingFor_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Vampire_Reconstruct_standingFor_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Vampire_Reconstruct_standingFor_spec__0___redArg(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Vampire_Reconstruct_standingFor_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_vampireReplay___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3___closed__0;
static lean_once_cell_t lp_vampireReplay___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3___closed__1;
static const lean_closure_object lp_vampireReplay___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_vampireReplay___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3___closed__2 = (const lean_object*)&lp_vampireReplay___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3___closed__2_value;
static const lean_closure_object lp_vampireReplay___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_vampireReplay___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3___closed__3 = (const lean_object*)&lp_vampireReplay___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3___closed__3_value;
static const lean_closure_object lp_vampireReplay___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_vampireReplay___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3___closed__4 = (const lean_object*)&lp_vampireReplay___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3___closed__4_value;
static const lean_closure_object lp_vampireReplay___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_vampireReplay___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3___closed__5 = (const lean_object*)&lp_vampireReplay___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3___closed__5_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3_spec__5___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3_spec__5___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_standingFor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_standingFor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Vampire_Reconstruct_standingFor_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Vampire_Reconstruct_standingFor_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_unrelated(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_unrelated___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "mpr"};
static const lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__1___closed__0 = (const lean_object*)&lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__1___closed__0_value;
static const lean_ctor_object lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__9_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__1___closed__1_value_aux_0),((lean_object*)&lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(14, 81, 9, 215, 230, 198, 87, 3)}};
static const lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__1___closed__1 = (const lean_object*)&lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__1___closed__1_value;
static lean_once_cell_t lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__1___closed__2;
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mp"};
static const lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__0___closed__0 = (const lean_object*)&lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__0___closed__0_value;
static const lean_ctor_object lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__9_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__0___closed__1_value_aux_0),((lean_object*)&lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(147, 220, 216, 40, 239, 165, 44, 174)}};
static const lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__0___closed__1 = (const lean_object*)&lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__0___closed__1_value;
static lean_once_cell_t lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__0___closed__2;
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__3(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__8___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__9_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__8___closed__0_value_aux_0),((lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(176, 155, 85, 49, 105, 137, 67, 168)}};
static const lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__8___closed__0 = (const lean_object*)&lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__8___closed__0_value;
static lean_once_cell_t lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__8___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__8___closed__1;
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__8___boxed(lean_object**);
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_equivNormal_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_equivNormal_spec__2___closed__0;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_equivNormal_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_equivNormal_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__16_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__0_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__14_value),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__0_value)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__1_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_equivNormal_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "junctions have "};
static const lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___closed__0 = (const lean_object*)&lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___closed__0_value;
static lean_once_cell_t lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___closed__1;
static const lean_string_object lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " and "};
static const lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___closed__2 = (const lean_object*)&lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___closed__2_value;
static lean_once_cell_t lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___closed__3;
static const lean_string_object lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " parts:"};
static const lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___closed__4 = (const lean_object*)&lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___closed__4_value;
static lean_once_cell_t lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___closed__5;
static const lean_string_object lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "\nand"};
static const lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___closed__6 = (const lean_object*)&lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___closed__6_value;
static lean_once_cell_t lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___closed__7;
static const lean_ctor_object lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__4___redArg___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__9_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__4___redArg___closed__0_value_aux_0),((lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__5___closed__0_value),LEAN_SCALAR_PTR_LITERAL(176, 247, 20, 85, 206, 87, 7, 233)}};
static const lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__4___redArg___closed__0 = (const lean_object*)&lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__4___redArg___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "cannot relate"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__2_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__3;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "equiv/exists: cannot relate"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__4_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__5;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_equivNormal___lam__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_equivNormal___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "equiv/forall: cannot relate"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__6 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__6_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__7;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_equivNormal___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__4___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "exists_const"};
static const lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__4___redArg___closed__1 = (const lean_object*)&lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__4___redArg___closed__1_value;
static const lean_ctor_object lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__4___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__4___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(43, 16, 167, 0, 5, 35, 6, 171)}};
static const lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__4___redArg___closed__2 = (const lean_object*)&lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__4___redArg___closed__2_value;
static const lean_string_object lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__4___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "forall_const"};
static const lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__4___redArg___closed__3 = (const lean_object*)&lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__4___redArg___closed__3_value;
static const lean_ctor_object lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__4___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__4___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 91, 233, 165, 33, 177, 5, 191)}};
static const lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__4___redArg___closed__4 = (const lean_object*)&lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__4___redArg___closed__4_value;
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "imp_congr"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__8 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__8_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__8_value),LEAN_SCALAR_PTR_LITERAL(9, 246, 228, 60, 55, 221, 92, 163)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__9 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__9_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "iff_congr"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__10 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__10_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__10_value),LEAN_SCALAR_PTR_LITERAL(74, 35, 94, 165, 147, 2, 155, 38)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__11 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__11_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "not_congr"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__12 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__12_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__12_value),LEAN_SCALAR_PTR_LITERAL(21, 52, 231, 191, 117, 147, 16, 240)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__13 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__13_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "eq_comm"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__14 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__14_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__14_value),LEAN_SCALAR_PTR_LITERAL(167, 239, 253, 155, 14, 133, 114, 108)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__15 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__15_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_equivNormal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_equivNormal___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_equivNormal_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_equivNormal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__1___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "propext"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___closed__0 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___closed__0_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___closed__0_value),LEAN_SCALAR_PTR_LITERAL(53, 150, 49, 30, 125, 3, 39, 172)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___closed__1 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___closed__1_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___lam__1(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "le"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___closed__3 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___closed__3_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "LE"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___closed__2 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___closed__2_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___closed__2_value),LEAN_SCALAR_PTR_LITERAL(216, 149, 183, 186, 191, 145, 216, 115)}};
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___closed__4_value_aux_0),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___closed__3_value),LEAN_SCALAR_PTR_LITERAL(109, 14, 90, 172, 72, 170, 136, 101)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___closed__4 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___closed__4_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "lt"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___closed__6 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___closed__6_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "LT"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___closed__5 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___closed__5_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___closed__5_value),LEAN_SCALAR_PTR_LITERAL(71, 235, 154, 184, 62, 135, 30, 248)}};
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___closed__7_value_aux_0),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___closed__6_value),LEAN_SCALAR_PTR_LITERAL(54, 235, 251, 9, 4, 74, 57, 164)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___closed__7 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___closed__7_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___lam__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_equiv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_equiv___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_isPropType(lean_object* v_e_1_){
_start:
{
if (lean_obj_tag(v_e_1_) == 3)
{
lean_object* v_u_2_; 
v_u_2_ = lean_ctor_get(v_e_1_, 0);
if (lean_obj_tag(v_u_2_) == 0)
{
uint8_t v___x_3_; 
v___x_3_ = 1;
return v___x_3_;
}
else
{
uint8_t v___x_4_; 
v___x_4_ = 0;
return v___x_4_;
}
}
else
{
uint8_t v___x_5_; 
v___x_5_ = 0;
return v___x_5_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_isPropType___boxed(lean_object* v_e_6_){
_start:
{
uint8_t v_res_7_; lean_object* v_r_8_; 
v_res_7_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_isPropType(v_e_6_);
lean_dec_ref(v_e_6_);
v_r_8_ = lean_box(v_res_7_);
return v_r_8_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_nnfStep___lam__0(lean_object* v___x_9_, lean_object* v___x_10_, lean_object* v___x_11_, uint8_t v___x_12_, uint8_t v___x_13_, lean_object* v_x_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; uint8_t v___x_28_; lean_object* v___x_29_; 
v___x_22_ = lean_mk_empty_array_with_capacity(v___x_9_);
v___x_23_ = lean_array_push(v___x_22_, v_x_14_);
v___x_24_ = lean_box(0);
v___x_25_ = l_Lean_Expr_const___override(v___x_10_, v___x_24_);
lean_inc_ref(v___x_23_);
v___x_26_ = l_Lean_Expr_beta(v___x_11_, v___x_23_);
v___x_27_ = l_Lean_Expr_app___override(v___x_25_, v___x_26_);
v___x_28_ = 1;
v___x_29_ = l_Lean_Meta_mkForallFVars(v___x_23_, v___x_27_, v___x_12_, v___x_13_, v___x_13_, v___x_28_, v___y_17_, v___y_18_, v___y_19_, v___y_20_);
lean_dec_ref(v___x_23_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_nnfStep___lam__0___boxed(lean_object* v___x_30_, lean_object* v___x_31_, lean_object* v___x_32_, lean_object* v___x_33_, lean_object* v___x_34_, lean_object* v_x_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_){
_start:
{
uint8_t v___x_10497__boxed_43_; uint8_t v___x_10498__boxed_44_; lean_object* v_res_45_; 
v___x_10497__boxed_43_ = lean_unbox(v___x_33_);
v___x_10498__boxed_44_ = lean_unbox(v___x_34_);
v_res_45_ = lp_vampireReplay_Vampire_Reconstruct_nnfStep___lam__0(v___x_30_, v___x_31_, v___x_32_, v___x_10497__boxed_43_, v___x_10498__boxed_44_, v_x_35_, v___y_36_, v___y_37_, v___y_38_, v___y_39_, v___y_40_, v___y_41_);
lean_dec(v___y_41_);
lean_dec_ref(v___y_40_);
lean_dec(v___y_39_);
lean_dec_ref(v___y_38_);
lean_dec(v___y_37_);
lean_dec_ref(v___y_36_);
lean_dec(v___x_30_);
return v_res_45_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__17(void){
_start:
{
lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; 
v___x_72_ = lean_box(0);
v___x_73_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__14));
v___x_74_ = l_Lean_Expr_const___override(v___x_73_, v___x_72_);
return v___x_74_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__18(void){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_75_ = lean_box(0);
v___x_76_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__12));
v___x_77_ = l_Lean_Expr_const___override(v___x_76_, v___x_75_);
return v___x_77_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__21(void){
_start:
{
lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_81_ = lean_box(0);
v___x_82_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__16));
v___x_83_ = l_Lean_Expr_const___override(v___x_82_, v___x_81_);
return v___x_83_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_nnfStep(lean_object* v_e_104_, lean_object* v_a_105_, lean_object* v_a_106_, lean_object* v_a_107_, lean_object* v_a_108_, lean_object* v_a_109_, lean_object* v_a_110_){
_start:
{
lean_object* v___y_116_; lean_object* v___y_117_; lean_object* v___y_118_; lean_object* v___y_119_; lean_object* v___y_120_; lean_object* v___y_121_; lean_object* v___y_122_; lean_object* v___y_123_; uint8_t v___y_124_; lean_object* v___y_125_; lean_object* v___y_126_; uint8_t v___y_171_; lean_object* v___y_172_; lean_object* v___y_173_; uint8_t v___y_174_; lean_object* v___y_175_; lean_object* v___y_176_; lean_object* v___y_177_; lean_object* v___y_178_; lean_object* v___y_179_; lean_object* v___y_180_; lean_object* v___y_181_; lean_object* v___y_182_; lean_object* v___y_228_; lean_object* v___y_229_; lean_object* v___y_230_; lean_object* v___y_231_; lean_object* v___y_232_; lean_object* v___y_233_; 
if (lean_obj_tag(v_e_104_) == 7)
{
lean_object* v_binderType_413_; lean_object* v_body_414_; lean_object* v___x_415_; 
v_binderType_413_ = lean_ctor_get(v_e_104_, 1);
v_body_414_ = lean_ctor_get(v_e_104_, 2);
lean_inc_ref(v_binderType_413_);
v___x_415_ = l_Lean_Meta_isProp(v_binderType_413_, v_a_107_, v_a_108_, v_a_109_, v_a_110_);
if (lean_obj_tag(v___x_415_) == 0)
{
lean_object* v_a_416_; uint8_t v___x_417_; 
v_a_416_ = lean_ctor_get(v___x_415_, 0);
lean_inc(v_a_416_);
lean_dec_ref_known(v___x_415_, 1);
v___x_417_ = lean_unbox(v_a_416_);
lean_dec(v_a_416_);
if (v___x_417_ == 0)
{
v___y_228_ = v_a_105_;
v___y_229_ = v_a_106_;
v___y_230_ = v_a_107_;
v___y_231_ = v_a_108_;
v___y_232_ = v_a_109_;
v___y_233_ = v_a_110_;
goto v___jp_227_;
}
else
{
uint8_t v___x_418_; 
v___x_418_ = l_Lean_Expr_hasLooseBVars(v_body_414_);
if (v___x_418_ == 0)
{
lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; 
lean_inc_ref(v_body_414_);
lean_inc_ref_n(v_binderType_413_, 2);
lean_dec_ref_known(v_e_104_, 3);
v___x_419_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__21, &lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__21_once, _init_lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__21);
v___x_420_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__18, &lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__18_once, _init_lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__18);
v___x_421_ = l_Lean_Expr_app___override(v___x_420_, v_binderType_413_);
v___x_422_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__29));
v___x_423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_423_, 0, v_binderType_413_);
v___x_424_ = lean_unsigned_to_nat(1u);
v___x_425_ = lean_mk_empty_array_with_capacity(v___x_424_);
lean_inc_ref(v___x_423_);
v___x_426_ = lean_array_push(v___x_425_, v___x_423_);
v___x_427_ = l_Lean_Meta_mkAppOptM(v___x_422_, v___x_426_, v_a_107_, v_a_108_, v_a_109_, v_a_110_);
if (lean_obj_tag(v___x_427_) == 0)
{
lean_object* v_a_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; 
v_a_428_ = lean_ctor_get(v___x_427_, 0);
lean_inc(v_a_428_);
lean_dec_ref_known(v___x_427_, 1);
lean_inc_ref(v_body_414_);
v___x_429_ = l_Lean_mkAppB(v___x_419_, v___x_421_, v_body_414_);
v___x_430_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__32));
v___x_431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_431_, 0, v_body_414_);
v___x_432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_432_, 0, v_a_428_);
v___x_433_ = lean_unsigned_to_nat(3u);
v___x_434_ = lean_mk_empty_array_with_capacity(v___x_433_);
v___x_435_ = lean_array_push(v___x_434_, v___x_423_);
v___x_436_ = lean_array_push(v___x_435_, v___x_431_);
v___x_437_ = lean_array_push(v___x_436_, v___x_432_);
v___x_438_ = l_Lean_Meta_mkAppOptM(v___x_430_, v___x_437_, v_a_107_, v_a_108_, v_a_109_, v_a_110_);
if (lean_obj_tag(v___x_438_) == 0)
{
lean_object* v_a_439_; lean_object* v___x_441_; uint8_t v_isShared_442_; uint8_t v_isSharedCheck_448_; 
v_a_439_ = lean_ctor_get(v___x_438_, 0);
v_isSharedCheck_448_ = !lean_is_exclusive(v___x_438_);
if (v_isSharedCheck_448_ == 0)
{
v___x_441_ = v___x_438_;
v_isShared_442_ = v_isSharedCheck_448_;
goto v_resetjp_440_;
}
else
{
lean_inc(v_a_439_);
lean_dec(v___x_438_);
v___x_441_ = lean_box(0);
v_isShared_442_ = v_isSharedCheck_448_;
goto v_resetjp_440_;
}
v_resetjp_440_:
{
lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_446_; 
v___x_443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_443_, 0, v___x_429_);
lean_ctor_set(v___x_443_, 1, v_a_439_);
v___x_444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_444_, 0, v___x_443_);
if (v_isShared_442_ == 0)
{
lean_ctor_set(v___x_441_, 0, v___x_444_);
v___x_446_ = v___x_441_;
goto v_reusejp_445_;
}
else
{
lean_object* v_reuseFailAlloc_447_; 
v_reuseFailAlloc_447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_447_, 0, v___x_444_);
v___x_446_ = v_reuseFailAlloc_447_;
goto v_reusejp_445_;
}
v_reusejp_445_:
{
return v___x_446_;
}
}
}
else
{
lean_object* v_a_449_; lean_object* v___x_451_; uint8_t v_isShared_452_; uint8_t v_isSharedCheck_456_; 
lean_dec_ref(v___x_429_);
v_a_449_ = lean_ctor_get(v___x_438_, 0);
v_isSharedCheck_456_ = !lean_is_exclusive(v___x_438_);
if (v_isSharedCheck_456_ == 0)
{
v___x_451_ = v___x_438_;
v_isShared_452_ = v_isSharedCheck_456_;
goto v_resetjp_450_;
}
else
{
lean_inc(v_a_449_);
lean_dec(v___x_438_);
v___x_451_ = lean_box(0);
v_isShared_452_ = v_isSharedCheck_456_;
goto v_resetjp_450_;
}
v_resetjp_450_:
{
lean_object* v___x_454_; 
if (v_isShared_452_ == 0)
{
v___x_454_ = v___x_451_;
goto v_reusejp_453_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v_a_449_);
v___x_454_ = v_reuseFailAlloc_455_;
goto v_reusejp_453_;
}
v_reusejp_453_:
{
return v___x_454_;
}
}
}
}
else
{
lean_object* v_a_457_; lean_object* v___x_459_; uint8_t v_isShared_460_; uint8_t v_isSharedCheck_464_; 
lean_dec_ref_known(v___x_423_, 1);
lean_dec_ref(v___x_421_);
lean_dec_ref(v_body_414_);
v_a_457_ = lean_ctor_get(v___x_427_, 0);
v_isSharedCheck_464_ = !lean_is_exclusive(v___x_427_);
if (v_isSharedCheck_464_ == 0)
{
v___x_459_ = v___x_427_;
v_isShared_460_ = v_isSharedCheck_464_;
goto v_resetjp_458_;
}
else
{
lean_inc(v_a_457_);
lean_dec(v___x_427_);
v___x_459_ = lean_box(0);
v_isShared_460_ = v_isSharedCheck_464_;
goto v_resetjp_458_;
}
v_resetjp_458_:
{
lean_object* v___x_462_; 
if (v_isShared_460_ == 0)
{
v___x_462_ = v___x_459_;
goto v_reusejp_461_;
}
else
{
lean_object* v_reuseFailAlloc_463_; 
v_reuseFailAlloc_463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_463_, 0, v_a_457_);
v___x_462_ = v_reuseFailAlloc_463_;
goto v_reusejp_461_;
}
v_reusejp_461_:
{
return v___x_462_;
}
}
}
}
else
{
v___y_228_ = v_a_105_;
v___y_229_ = v_a_106_;
v___y_230_ = v_a_107_;
v___y_231_ = v_a_108_;
v___y_232_ = v_a_109_;
v___y_233_ = v_a_110_;
goto v___jp_227_;
}
}
}
else
{
lean_object* v_a_465_; lean_object* v___x_467_; uint8_t v_isShared_468_; uint8_t v_isSharedCheck_472_; 
lean_dec_ref_known(v_e_104_, 3);
v_a_465_ = lean_ctor_get(v___x_415_, 0);
v_isSharedCheck_472_ = !lean_is_exclusive(v___x_415_);
if (v_isSharedCheck_472_ == 0)
{
v___x_467_ = v___x_415_;
v_isShared_468_ = v_isSharedCheck_472_;
goto v_resetjp_466_;
}
else
{
lean_inc(v_a_465_);
lean_dec(v___x_415_);
v___x_467_ = lean_box(0);
v_isShared_468_ = v_isSharedCheck_472_;
goto v_resetjp_466_;
}
v_resetjp_466_:
{
lean_object* v___x_470_; 
if (v_isShared_468_ == 0)
{
v___x_470_ = v___x_467_;
goto v_reusejp_469_;
}
else
{
lean_object* v_reuseFailAlloc_471_; 
v_reuseFailAlloc_471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_471_, 0, v_a_465_);
v___x_470_ = v_reuseFailAlloc_471_;
goto v_reusejp_469_;
}
v_reusejp_469_:
{
return v___x_470_;
}
}
}
}
else
{
v___y_228_ = v_a_105_;
v___y_229_ = v_a_106_;
v___y_230_ = v_a_107_;
v___y_231_ = v_a_108_;
v___y_232_ = v_a_109_;
v___y_233_ = v_a_110_;
goto v___jp_227_;
}
v___jp_112_:
{
lean_object* v___x_113_; lean_object* v___x_114_; 
v___x_113_ = lean_box(0);
v___x_114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_114_, 0, v___x_113_);
return v___x_114_;
}
v___jp_115_:
{
lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; 
lean_inc_ref(v___y_117_);
lean_inc_ref_n(v___y_126_, 2);
lean_inc(v___y_119_);
v___x_127_ = l_Lean_Expr_lam___override(v___y_119_, v___y_126_, v___y_117_, v___y_124_);
v___x_128_ = lean_box(0);
lean_inc(v___y_120_);
v___x_129_ = l_Lean_Expr_const___override(v___y_120_, v___x_128_);
v___x_130_ = l_Lean_Expr_app___override(v___x_129_, v___y_117_);
v___x_131_ = l_Lean_Expr_lam___override(v___y_119_, v___y_126_, v___x_130_, v___y_124_);
v___x_132_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__1));
v___x_133_ = lean_mk_empty_array_with_capacity(v___y_122_);
lean_dec(v___y_122_);
v___x_134_ = lean_array_push(v___x_133_, v___x_131_);
v___x_135_ = l_Lean_Meta_mkAppM(v___x_132_, v___x_134_, v___y_125_, v___y_118_, v___y_121_, v___y_116_);
if (lean_obj_tag(v___x_135_) == 0)
{
lean_object* v_a_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; 
v_a_136_ = lean_ctor_get(v___x_135_, 0);
lean_inc(v_a_136_);
lean_dec_ref_known(v___x_135_, 1);
v___x_137_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__4));
v___x_138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_138_, 0, v___y_126_);
v___x_139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_139_, 0, v___x_127_);
v___x_140_ = lean_mk_empty_array_with_capacity(v___y_123_);
lean_dec(v___y_123_);
v___x_141_ = lean_array_push(v___x_140_, v___x_138_);
v___x_142_ = lean_array_push(v___x_141_, v___x_139_);
v___x_143_ = l_Lean_Meta_mkAppOptM(v___x_137_, v___x_142_, v___y_125_, v___y_118_, v___y_121_, v___y_116_);
if (lean_obj_tag(v___x_143_) == 0)
{
lean_object* v_a_144_; lean_object* v___x_146_; uint8_t v_isShared_147_; uint8_t v_isSharedCheck_153_; 
v_a_144_ = lean_ctor_get(v___x_143_, 0);
v_isSharedCheck_153_ = !lean_is_exclusive(v___x_143_);
if (v_isSharedCheck_153_ == 0)
{
v___x_146_ = v___x_143_;
v_isShared_147_ = v_isSharedCheck_153_;
goto v_resetjp_145_;
}
else
{
lean_inc(v_a_144_);
lean_dec(v___x_143_);
v___x_146_ = lean_box(0);
v_isShared_147_ = v_isSharedCheck_153_;
goto v_resetjp_145_;
}
v_resetjp_145_:
{
lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_151_; 
v___x_148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_148_, 0, v_a_136_);
lean_ctor_set(v___x_148_, 1, v_a_144_);
v___x_149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_149_, 0, v___x_148_);
if (v_isShared_147_ == 0)
{
lean_ctor_set(v___x_146_, 0, v___x_149_);
v___x_151_ = v___x_146_;
goto v_reusejp_150_;
}
else
{
lean_object* v_reuseFailAlloc_152_; 
v_reuseFailAlloc_152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_152_, 0, v___x_149_);
v___x_151_ = v_reuseFailAlloc_152_;
goto v_reusejp_150_;
}
v_reusejp_150_:
{
return v___x_151_;
}
}
}
else
{
lean_object* v_a_154_; lean_object* v___x_156_; uint8_t v_isShared_157_; uint8_t v_isSharedCheck_161_; 
lean_dec(v_a_136_);
v_a_154_ = lean_ctor_get(v___x_143_, 0);
v_isSharedCheck_161_ = !lean_is_exclusive(v___x_143_);
if (v_isSharedCheck_161_ == 0)
{
v___x_156_ = v___x_143_;
v_isShared_157_ = v_isSharedCheck_161_;
goto v_resetjp_155_;
}
else
{
lean_inc(v_a_154_);
lean_dec(v___x_143_);
v___x_156_ = lean_box(0);
v_isShared_157_ = v_isSharedCheck_161_;
goto v_resetjp_155_;
}
v_resetjp_155_:
{
lean_object* v___x_159_; 
if (v_isShared_157_ == 0)
{
v___x_159_ = v___x_156_;
goto v_reusejp_158_;
}
else
{
lean_object* v_reuseFailAlloc_160_; 
v_reuseFailAlloc_160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_160_, 0, v_a_154_);
v___x_159_ = v_reuseFailAlloc_160_;
goto v_reusejp_158_;
}
v_reusejp_158_:
{
return v___x_159_;
}
}
}
}
else
{
lean_object* v_a_162_; lean_object* v___x_164_; uint8_t v_isShared_165_; uint8_t v_isSharedCheck_169_; 
lean_dec_ref(v___x_127_);
lean_dec_ref(v___y_126_);
lean_dec(v___y_123_);
v_a_162_ = lean_ctor_get(v___x_135_, 0);
v_isSharedCheck_169_ = !lean_is_exclusive(v___x_135_);
if (v_isSharedCheck_169_ == 0)
{
v___x_164_ = v___x_135_;
v_isShared_165_ = v_isSharedCheck_169_;
goto v_resetjp_163_;
}
else
{
lean_inc(v_a_162_);
lean_dec(v___x_135_);
v___x_164_ = lean_box(0);
v_isShared_165_ = v_isSharedCheck_169_;
goto v_resetjp_163_;
}
v_resetjp_163_:
{
lean_object* v___x_167_; 
if (v_isShared_165_ == 0)
{
v___x_167_ = v___x_164_;
goto v_reusejp_166_;
}
else
{
lean_object* v_reuseFailAlloc_168_; 
v_reuseFailAlloc_168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_168_, 0, v_a_162_);
v___x_167_ = v_reuseFailAlloc_168_;
goto v_reusejp_166_;
}
v_reusejp_166_:
{
return v___x_167_;
}
}
}
}
v___jp_170_:
{
lean_object* v___x_183_; uint8_t v___x_184_; 
v___x_183_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__1));
lean_inc(v___y_175_);
v___x_184_ = l_Lean_Expr_isAppOfArity(v___y_176_, v___x_183_, v___y_175_);
if (v___x_184_ == 0)
{
lean_dec_ref(v___y_176_);
lean_dec(v___y_175_);
lean_dec(v___y_173_);
goto v___jp_112_;
}
else
{
lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___f_190_; lean_object* v___x_191_; lean_object* v___x_192_; 
v___x_185_ = l_Lean_Expr_appFn_x21(v___y_176_);
v___x_186_ = l_Lean_Expr_appArg_x21(v___x_185_);
lean_dec_ref(v___x_185_);
v___x_187_ = l_Lean_Expr_appArg_x21(v___y_176_);
lean_dec_ref(v___y_176_);
v___x_188_ = lean_box(v___y_174_);
v___x_189_ = lean_box(v___y_171_);
lean_inc_ref(v___x_187_);
lean_inc(v___y_172_);
v___f_190_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___lam__0___boxed), 13, 5);
lean_closure_set(v___f_190_, 0, v___y_173_);
lean_closure_set(v___f_190_, 1, v___y_172_);
lean_closure_set(v___f_190_, 2, v___x_187_);
lean_closure_set(v___f_190_, 3, v___x_188_);
lean_closure_set(v___f_190_, 4, v___x_189_);
v___x_191_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__6));
lean_inc_ref(v___x_186_);
v___x_192_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_191_, v___x_186_, v___f_190_, v___y_177_, v___y_178_, v___y_179_, v___y_180_, v___y_181_, v___y_182_);
if (lean_obj_tag(v___x_192_) == 0)
{
lean_object* v_a_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; 
v_a_193_ = lean_ctor_get(v___x_192_, 0);
lean_inc(v_a_193_);
lean_dec_ref_known(v___x_192_, 1);
v___x_194_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__8));
v___x_195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_195_, 0, v___x_186_);
v___x_196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_196_, 0, v___x_187_);
v___x_197_ = lean_mk_empty_array_with_capacity(v___y_175_);
lean_dec(v___y_175_);
v___x_198_ = lean_array_push(v___x_197_, v___x_195_);
v___x_199_ = lean_array_push(v___x_198_, v___x_196_);
v___x_200_ = l_Lean_Meta_mkAppOptM(v___x_194_, v___x_199_, v___y_179_, v___y_180_, v___y_181_, v___y_182_);
if (lean_obj_tag(v___x_200_) == 0)
{
lean_object* v_a_201_; lean_object* v___x_203_; uint8_t v_isShared_204_; uint8_t v_isSharedCheck_210_; 
v_a_201_ = lean_ctor_get(v___x_200_, 0);
v_isSharedCheck_210_ = !lean_is_exclusive(v___x_200_);
if (v_isSharedCheck_210_ == 0)
{
v___x_203_ = v___x_200_;
v_isShared_204_ = v_isSharedCheck_210_;
goto v_resetjp_202_;
}
else
{
lean_inc(v_a_201_);
lean_dec(v___x_200_);
v___x_203_ = lean_box(0);
v_isShared_204_ = v_isSharedCheck_210_;
goto v_resetjp_202_;
}
v_resetjp_202_:
{
lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_208_; 
v___x_205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_205_, 0, v_a_193_);
lean_ctor_set(v___x_205_, 1, v_a_201_);
v___x_206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_206_, 0, v___x_205_);
if (v_isShared_204_ == 0)
{
lean_ctor_set(v___x_203_, 0, v___x_206_);
v___x_208_ = v___x_203_;
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
else
{
lean_object* v_a_211_; lean_object* v___x_213_; uint8_t v_isShared_214_; uint8_t v_isSharedCheck_218_; 
lean_dec(v_a_193_);
v_a_211_ = lean_ctor_get(v___x_200_, 0);
v_isSharedCheck_218_ = !lean_is_exclusive(v___x_200_);
if (v_isSharedCheck_218_ == 0)
{
v___x_213_ = v___x_200_;
v_isShared_214_ = v_isSharedCheck_218_;
goto v_resetjp_212_;
}
else
{
lean_inc(v_a_211_);
lean_dec(v___x_200_);
v___x_213_ = lean_box(0);
v_isShared_214_ = v_isSharedCheck_218_;
goto v_resetjp_212_;
}
v_resetjp_212_:
{
lean_object* v___x_216_; 
if (v_isShared_214_ == 0)
{
v___x_216_ = v___x_213_;
goto v_reusejp_215_;
}
else
{
lean_object* v_reuseFailAlloc_217_; 
v_reuseFailAlloc_217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_217_, 0, v_a_211_);
v___x_216_ = v_reuseFailAlloc_217_;
goto v_reusejp_215_;
}
v_reusejp_215_:
{
return v___x_216_;
}
}
}
}
else
{
lean_object* v_a_219_; lean_object* v___x_221_; uint8_t v_isShared_222_; uint8_t v_isSharedCheck_226_; 
lean_dec_ref(v___x_187_);
lean_dec_ref(v___x_186_);
lean_dec(v___y_175_);
v_a_219_ = lean_ctor_get(v___x_192_, 0);
v_isSharedCheck_226_ = !lean_is_exclusive(v___x_192_);
if (v_isSharedCheck_226_ == 0)
{
v___x_221_ = v___x_192_;
v_isShared_222_ = v_isSharedCheck_226_;
goto v_resetjp_220_;
}
else
{
lean_inc(v_a_219_);
lean_dec(v___x_192_);
v___x_221_ = lean_box(0);
v_isShared_222_ = v_isSharedCheck_226_;
goto v_resetjp_220_;
}
v_resetjp_220_:
{
lean_object* v___x_224_; 
if (v_isShared_222_ == 0)
{
v___x_224_ = v___x_221_;
goto v_reusejp_223_;
}
else
{
lean_object* v_reuseFailAlloc_225_; 
v_reuseFailAlloc_225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_225_, 0, v_a_219_);
v___x_224_ = v_reuseFailAlloc_225_;
goto v_reusejp_223_;
}
v_reusejp_223_:
{
return v___x_224_;
}
}
}
}
}
v___jp_227_:
{
lean_object* v___x_234_; lean_object* v___x_235_; uint8_t v___x_236_; 
v___x_234_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__10));
v___x_235_ = lean_unsigned_to_nat(2u);
v___x_236_ = l_Lean_Expr_isAppOfArity(v_e_104_, v___x_234_, v___x_235_);
if (v___x_236_ == 0)
{
lean_object* v___x_237_; lean_object* v___x_238_; uint8_t v___x_239_; 
v___x_237_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__12));
v___x_238_ = lean_unsigned_to_nat(1u);
v___x_239_ = l_Lean_Expr_isAppOfArity(v_e_104_, v___x_237_, v___x_238_);
if (v___x_239_ == 0)
{
lean_dec_ref(v_e_104_);
goto v___jp_112_;
}
else
{
lean_object* v___x_240_; uint8_t v___x_241_; 
v___x_240_ = l_Lean_Expr_appArg_x21(v_e_104_);
lean_dec_ref(v_e_104_);
v___x_241_ = l_Lean_Expr_isAppOfArity(v___x_240_, v___x_237_, v___x_238_);
if (v___x_241_ == 0)
{
lean_object* v___x_242_; uint8_t v___x_243_; 
v___x_242_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__14));
v___x_243_ = l_Lean_Expr_isAppOfArity(v___x_240_, v___x_242_, v___x_235_);
if (v___x_243_ == 0)
{
lean_object* v___x_244_; uint8_t v___x_245_; 
v___x_244_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__16));
v___x_245_ = l_Lean_Expr_isAppOfArity(v___x_240_, v___x_244_, v___x_235_);
if (v___x_245_ == 0)
{
if (lean_obj_tag(v___x_240_) == 7)
{
lean_object* v_binderName_246_; lean_object* v_binderType_247_; lean_object* v_body_248_; uint8_t v_binderInfo_249_; lean_object* v___x_250_; 
v_binderName_246_ = lean_ctor_get(v___x_240_, 0);
lean_inc(v_binderName_246_);
v_binderType_247_ = lean_ctor_get(v___x_240_, 1);
lean_inc_ref_n(v_binderType_247_, 2);
v_body_248_ = lean_ctor_get(v___x_240_, 2);
lean_inc_ref(v_body_248_);
v_binderInfo_249_ = lean_ctor_get_uint8(v___x_240_, sizeof(void*)*3 + 8);
v___x_250_ = l_Lean_Meta_isProp(v_binderType_247_, v___y_230_, v___y_231_, v___y_232_, v___y_233_);
if (lean_obj_tag(v___x_250_) == 0)
{
lean_object* v_a_251_; uint8_t v___x_252_; 
v_a_251_ = lean_ctor_get(v___x_250_, 0);
lean_inc(v_a_251_);
lean_dec_ref_known(v___x_250_, 1);
v___x_252_ = lean_unbox(v_a_251_);
lean_dec(v_a_251_);
if (v___x_252_ == 0)
{
lean_dec_ref_known(v___x_240_, 3);
v___y_116_ = v___y_233_;
v___y_117_ = v_body_248_;
v___y_118_ = v___y_231_;
v___y_119_ = v_binderName_246_;
v___y_120_ = v___x_237_;
v___y_121_ = v___y_232_;
v___y_122_ = v___x_238_;
v___y_123_ = v___x_235_;
v___y_124_ = v_binderInfo_249_;
v___y_125_ = v___y_230_;
v___y_126_ = v_binderType_247_;
goto v___jp_115_;
}
else
{
uint8_t v___x_253_; 
v___x_253_ = l_Lean_Expr_hasLooseBVars(v_body_248_);
if (v___x_253_ == 0)
{
lean_dec_ref(v_body_248_);
lean_dec_ref(v_binderType_247_);
lean_dec(v_binderName_246_);
v___y_171_ = v___x_239_;
v___y_172_ = v___x_237_;
v___y_173_ = v___x_238_;
v___y_174_ = v___x_245_;
v___y_175_ = v___x_235_;
v___y_176_ = v___x_240_;
v___y_177_ = v___y_228_;
v___y_178_ = v___y_229_;
v___y_179_ = v___y_230_;
v___y_180_ = v___y_231_;
v___y_181_ = v___y_232_;
v___y_182_ = v___y_233_;
goto v___jp_170_;
}
else
{
if (v___x_245_ == 0)
{
lean_dec_ref_known(v___x_240_, 3);
v___y_116_ = v___y_233_;
v___y_117_ = v_body_248_;
v___y_118_ = v___y_231_;
v___y_119_ = v_binderName_246_;
v___y_120_ = v___x_237_;
v___y_121_ = v___y_232_;
v___y_122_ = v___x_238_;
v___y_123_ = v___x_235_;
v___y_124_ = v_binderInfo_249_;
v___y_125_ = v___y_230_;
v___y_126_ = v_binderType_247_;
goto v___jp_115_;
}
else
{
lean_dec_ref(v_body_248_);
lean_dec_ref(v_binderType_247_);
lean_dec(v_binderName_246_);
v___y_171_ = v___x_239_;
v___y_172_ = v___x_237_;
v___y_173_ = v___x_238_;
v___y_174_ = v___x_245_;
v___y_175_ = v___x_235_;
v___y_176_ = v___x_240_;
v___y_177_ = v___y_228_;
v___y_178_ = v___y_229_;
v___y_179_ = v___y_230_;
v___y_180_ = v___y_231_;
v___y_181_ = v___y_232_;
v___y_182_ = v___y_233_;
goto v___jp_170_;
}
}
}
}
else
{
lean_object* v_a_254_; lean_object* v___x_256_; uint8_t v_isShared_257_; uint8_t v_isSharedCheck_261_; 
lean_dec_ref(v_body_248_);
lean_dec_ref(v_binderType_247_);
lean_dec(v_binderName_246_);
lean_dec_ref_known(v___x_240_, 3);
v_a_254_ = lean_ctor_get(v___x_250_, 0);
v_isSharedCheck_261_ = !lean_is_exclusive(v___x_250_);
if (v_isSharedCheck_261_ == 0)
{
v___x_256_ = v___x_250_;
v_isShared_257_ = v_isSharedCheck_261_;
goto v_resetjp_255_;
}
else
{
lean_inc(v_a_254_);
lean_dec(v___x_250_);
v___x_256_ = lean_box(0);
v_isShared_257_ = v_isSharedCheck_261_;
goto v_resetjp_255_;
}
v_resetjp_255_:
{
lean_object* v___x_259_; 
if (v_isShared_257_ == 0)
{
v___x_259_ = v___x_256_;
goto v_reusejp_258_;
}
else
{
lean_object* v_reuseFailAlloc_260_; 
v_reuseFailAlloc_260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_260_, 0, v_a_254_);
v___x_259_ = v_reuseFailAlloc_260_;
goto v_reusejp_258_;
}
v_reusejp_258_:
{
return v___x_259_;
}
}
}
}
else
{
v___y_171_ = v___x_239_;
v___y_172_ = v___x_237_;
v___y_173_ = v___x_238_;
v___y_174_ = v___x_245_;
v___y_175_ = v___x_235_;
v___y_176_ = v___x_240_;
v___y_177_ = v___y_228_;
v___y_178_ = v___y_229_;
v___y_179_ = v___y_230_;
v___y_180_ = v___y_231_;
v___y_181_ = v___y_232_;
v___y_182_ = v___y_233_;
goto v___jp_170_;
}
}
else
{
lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; 
v___x_262_ = l_Lean_Expr_appFn_x21(v___x_240_);
v___x_263_ = l_Lean_Expr_appArg_x21(v___x_262_);
lean_dec_ref(v___x_262_);
v___x_264_ = l_Lean_Expr_appArg_x21(v___x_240_);
lean_dec_ref(v___x_240_);
v___x_265_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__17, &lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__17_once, _init_lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__17);
v___x_266_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__18, &lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__18_once, _init_lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__18);
lean_inc_ref(v___x_263_);
v___x_267_ = l_Lean_Expr_app___override(v___x_266_, v___x_263_);
lean_inc_ref(v___x_264_);
v___x_268_ = l_Lean_Expr_app___override(v___x_266_, v___x_264_);
v___x_269_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__20));
v___x_270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_270_, 0, v___x_263_);
v___x_271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_271_, 0, v___x_264_);
v___x_272_ = lean_mk_empty_array_with_capacity(v___x_235_);
v___x_273_ = lean_array_push(v___x_272_, v___x_270_);
v___x_274_ = lean_array_push(v___x_273_, v___x_271_);
v___x_275_ = l_Lean_Meta_mkAppOptM(v___x_269_, v___x_274_, v___y_230_, v___y_231_, v___y_232_, v___y_233_);
if (lean_obj_tag(v___x_275_) == 0)
{
lean_object* v_a_276_; lean_object* v___x_278_; uint8_t v_isShared_279_; uint8_t v_isSharedCheck_286_; 
v_a_276_ = lean_ctor_get(v___x_275_, 0);
v_isSharedCheck_286_ = !lean_is_exclusive(v___x_275_);
if (v_isSharedCheck_286_ == 0)
{
v___x_278_ = v___x_275_;
v_isShared_279_ = v_isSharedCheck_286_;
goto v_resetjp_277_;
}
else
{
lean_inc(v_a_276_);
lean_dec(v___x_275_);
v___x_278_ = lean_box(0);
v_isShared_279_ = v_isSharedCheck_286_;
goto v_resetjp_277_;
}
v_resetjp_277_:
{
lean_object* v_rewritten_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_284_; 
v_rewritten_280_ = l_Lean_mkAppB(v___x_265_, v___x_267_, v___x_268_);
v___x_281_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_281_, 0, v_rewritten_280_);
lean_ctor_set(v___x_281_, 1, v_a_276_);
v___x_282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_282_, 0, v___x_281_);
if (v_isShared_279_ == 0)
{
lean_ctor_set(v___x_278_, 0, v___x_282_);
v___x_284_ = v___x_278_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_285_; 
v_reuseFailAlloc_285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_285_, 0, v___x_282_);
v___x_284_ = v_reuseFailAlloc_285_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
return v___x_284_;
}
}
}
else
{
lean_object* v_a_287_; lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_294_; 
lean_dec_ref(v___x_268_);
lean_dec_ref(v___x_267_);
v_a_287_ = lean_ctor_get(v___x_275_, 0);
v_isSharedCheck_294_ = !lean_is_exclusive(v___x_275_);
if (v_isSharedCheck_294_ == 0)
{
v___x_289_ = v___x_275_;
v_isShared_290_ = v_isSharedCheck_294_;
goto v_resetjp_288_;
}
else
{
lean_inc(v_a_287_);
lean_dec(v___x_275_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_294_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
lean_object* v___x_292_; 
if (v_isShared_290_ == 0)
{
v___x_292_ = v___x_289_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v_a_287_);
v___x_292_ = v_reuseFailAlloc_293_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
return v___x_292_;
}
}
}
}
}
else
{
lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_295_ = l_Lean_Expr_appFn_x21(v___x_240_);
v___x_296_ = l_Lean_Expr_appArg_x21(v___x_295_);
lean_dec_ref(v___x_295_);
v___x_297_ = l_Lean_Expr_appArg_x21(v___x_240_);
lean_dec_ref(v___x_240_);
v___x_298_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__21, &lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__21_once, _init_lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__21);
v___x_299_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__18, &lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__18_once, _init_lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__18);
lean_inc_ref(v___x_296_);
v___x_300_ = l_Lean_Expr_app___override(v___x_299_, v___x_296_);
lean_inc_ref(v___x_297_);
v___x_301_ = l_Lean_Expr_app___override(v___x_299_, v___x_297_);
v___x_302_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__23));
v___x_303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_303_, 0, v___x_296_);
v___x_304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_304_, 0, v___x_297_);
v___x_305_ = lean_mk_empty_array_with_capacity(v___x_235_);
v___x_306_ = lean_array_push(v___x_305_, v___x_303_);
v___x_307_ = lean_array_push(v___x_306_, v___x_304_);
v___x_308_ = l_Lean_Meta_mkAppOptM(v___x_302_, v___x_307_, v___y_230_, v___y_231_, v___y_232_, v___y_233_);
if (lean_obj_tag(v___x_308_) == 0)
{
lean_object* v_a_309_; lean_object* v___x_311_; uint8_t v_isShared_312_; uint8_t v_isSharedCheck_319_; 
v_a_309_ = lean_ctor_get(v___x_308_, 0);
v_isSharedCheck_319_ = !lean_is_exclusive(v___x_308_);
if (v_isSharedCheck_319_ == 0)
{
v___x_311_ = v___x_308_;
v_isShared_312_ = v_isSharedCheck_319_;
goto v_resetjp_310_;
}
else
{
lean_inc(v_a_309_);
lean_dec(v___x_308_);
v___x_311_ = lean_box(0);
v_isShared_312_ = v_isSharedCheck_319_;
goto v_resetjp_310_;
}
v_resetjp_310_:
{
lean_object* v_rewritten_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_317_; 
v_rewritten_313_ = l_Lean_mkAppB(v___x_298_, v___x_300_, v___x_301_);
v___x_314_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_314_, 0, v_rewritten_313_);
lean_ctor_set(v___x_314_, 1, v_a_309_);
v___x_315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_315_, 0, v___x_314_);
if (v_isShared_312_ == 0)
{
lean_ctor_set(v___x_311_, 0, v___x_315_);
v___x_317_ = v___x_311_;
goto v_reusejp_316_;
}
else
{
lean_object* v_reuseFailAlloc_318_; 
v_reuseFailAlloc_318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_318_, 0, v___x_315_);
v___x_317_ = v_reuseFailAlloc_318_;
goto v_reusejp_316_;
}
v_reusejp_316_:
{
return v___x_317_;
}
}
}
else
{
lean_object* v_a_320_; lean_object* v___x_322_; uint8_t v_isShared_323_; uint8_t v_isSharedCheck_327_; 
lean_dec_ref(v___x_301_);
lean_dec_ref(v___x_300_);
v_a_320_ = lean_ctor_get(v___x_308_, 0);
v_isSharedCheck_327_ = !lean_is_exclusive(v___x_308_);
if (v_isSharedCheck_327_ == 0)
{
v___x_322_ = v___x_308_;
v_isShared_323_ = v_isSharedCheck_327_;
goto v_resetjp_321_;
}
else
{
lean_inc(v_a_320_);
lean_dec(v___x_308_);
v___x_322_ = lean_box(0);
v_isShared_323_ = v_isSharedCheck_327_;
goto v_resetjp_321_;
}
v_resetjp_321_:
{
lean_object* v___x_325_; 
if (v_isShared_323_ == 0)
{
v___x_325_ = v___x_322_;
goto v_reusejp_324_;
}
else
{
lean_object* v_reuseFailAlloc_326_; 
v_reuseFailAlloc_326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_326_, 0, v_a_320_);
v___x_325_ = v_reuseFailAlloc_326_;
goto v_reusejp_324_;
}
v_reusejp_324_:
{
return v___x_325_;
}
}
}
}
}
else
{
lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; 
v___x_328_ = l_Lean_Expr_appArg_x21(v___x_240_);
lean_dec_ref(v___x_240_);
v___x_329_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__25));
lean_inc_ref(v___x_328_);
v___x_330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_330_, 0, v___x_328_);
v___x_331_ = lean_mk_empty_array_with_capacity(v___x_238_);
v___x_332_ = lean_array_push(v___x_331_, v___x_330_);
v___x_333_ = l_Lean_Meta_mkAppOptM(v___x_329_, v___x_332_, v___y_230_, v___y_231_, v___y_232_, v___y_233_);
if (lean_obj_tag(v___x_333_) == 0)
{
lean_object* v_a_334_; lean_object* v___x_336_; uint8_t v_isShared_337_; uint8_t v_isSharedCheck_343_; 
v_a_334_ = lean_ctor_get(v___x_333_, 0);
v_isSharedCheck_343_ = !lean_is_exclusive(v___x_333_);
if (v_isSharedCheck_343_ == 0)
{
v___x_336_ = v___x_333_;
v_isShared_337_ = v_isSharedCheck_343_;
goto v_resetjp_335_;
}
else
{
lean_inc(v_a_334_);
lean_dec(v___x_333_);
v___x_336_ = lean_box(0);
v_isShared_337_ = v_isSharedCheck_343_;
goto v_resetjp_335_;
}
v_resetjp_335_:
{
lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_341_; 
v___x_338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_338_, 0, v___x_328_);
lean_ctor_set(v___x_338_, 1, v_a_334_);
v___x_339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_339_, 0, v___x_338_);
if (v_isShared_337_ == 0)
{
lean_ctor_set(v___x_336_, 0, v___x_339_);
v___x_341_ = v___x_336_;
goto v_reusejp_340_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v___x_339_);
v___x_341_ = v_reuseFailAlloc_342_;
goto v_reusejp_340_;
}
v_reusejp_340_:
{
return v___x_341_;
}
}
}
else
{
lean_object* v_a_344_; lean_object* v___x_346_; uint8_t v_isShared_347_; uint8_t v_isSharedCheck_351_; 
lean_dec_ref(v___x_328_);
v_a_344_ = lean_ctor_get(v___x_333_, 0);
v_isSharedCheck_351_ = !lean_is_exclusive(v___x_333_);
if (v_isSharedCheck_351_ == 0)
{
v___x_346_ = v___x_333_;
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
else
{
lean_inc(v_a_344_);
lean_dec(v___x_333_);
v___x_346_ = lean_box(0);
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
v_resetjp_345_:
{
lean_object* v___x_349_; 
if (v_isShared_347_ == 0)
{
v___x_349_ = v___x_346_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v_a_344_);
v___x_349_ = v_reuseFailAlloc_350_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
return v___x_349_;
}
}
}
}
}
}
else
{
lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; 
v___x_352_ = l_Lean_Expr_appFn_x21(v_e_104_);
v___x_353_ = l_Lean_Expr_appArg_x21(v___x_352_);
lean_dec_ref(v___x_352_);
v___x_354_ = l_Lean_Expr_appArg_x21(v_e_104_);
lean_dec_ref(v_e_104_);
lean_inc_ref(v___x_354_);
lean_inc_ref(v___x_353_);
v___x_355_ = l_Lean_mkArrow(v___x_353_, v___x_354_, v___y_232_, v___y_233_);
if (lean_obj_tag(v___x_355_) == 0)
{
lean_object* v_a_356_; lean_object* v___x_357_; 
v_a_356_ = lean_ctor_get(v___x_355_, 0);
lean_inc(v_a_356_);
lean_dec_ref_known(v___x_355_, 1);
lean_inc_ref(v___x_353_);
lean_inc_ref(v___x_354_);
v___x_357_ = l_Lean_mkArrow(v___x_354_, v___x_353_, v___y_232_, v___y_233_);
if (lean_obj_tag(v___x_357_) == 0)
{
lean_object* v_a_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; 
v_a_358_ = lean_ctor_get(v___x_357_, 0);
lean_inc(v_a_358_);
lean_dec_ref_known(v___x_357_, 1);
v___x_359_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__14));
v___x_360_ = lean_mk_empty_array_with_capacity(v___x_235_);
lean_inc_ref(v___x_360_);
v___x_361_ = lean_array_push(v___x_360_, v_a_356_);
v___x_362_ = lean_array_push(v___x_361_, v_a_358_);
v___x_363_ = l_Lean_Meta_mkAppM(v___x_359_, v___x_362_, v___y_230_, v___y_231_, v___y_232_, v___y_233_);
if (lean_obj_tag(v___x_363_) == 0)
{
lean_object* v_a_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; 
v_a_364_ = lean_ctor_get(v___x_363_, 0);
lean_inc(v_a_364_);
lean_dec_ref_known(v___x_363_, 1);
v___x_365_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__27));
v___x_366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_366_, 0, v___x_353_);
v___x_367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_367_, 0, v___x_354_);
v___x_368_ = lean_array_push(v___x_360_, v___x_366_);
v___x_369_ = lean_array_push(v___x_368_, v___x_367_);
v___x_370_ = l_Lean_Meta_mkAppOptM(v___x_365_, v___x_369_, v___y_230_, v___y_231_, v___y_232_, v___y_233_);
if (lean_obj_tag(v___x_370_) == 0)
{
lean_object* v_a_371_; lean_object* v___x_373_; uint8_t v_isShared_374_; uint8_t v_isSharedCheck_380_; 
v_a_371_ = lean_ctor_get(v___x_370_, 0);
v_isSharedCheck_380_ = !lean_is_exclusive(v___x_370_);
if (v_isSharedCheck_380_ == 0)
{
v___x_373_ = v___x_370_;
v_isShared_374_ = v_isSharedCheck_380_;
goto v_resetjp_372_;
}
else
{
lean_inc(v_a_371_);
lean_dec(v___x_370_);
v___x_373_ = lean_box(0);
v_isShared_374_ = v_isSharedCheck_380_;
goto v_resetjp_372_;
}
v_resetjp_372_:
{
lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_378_; 
v___x_375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_375_, 0, v_a_364_);
lean_ctor_set(v___x_375_, 1, v_a_371_);
v___x_376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_376_, 0, v___x_375_);
if (v_isShared_374_ == 0)
{
lean_ctor_set(v___x_373_, 0, v___x_376_);
v___x_378_ = v___x_373_;
goto v_reusejp_377_;
}
else
{
lean_object* v_reuseFailAlloc_379_; 
v_reuseFailAlloc_379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_379_, 0, v___x_376_);
v___x_378_ = v_reuseFailAlloc_379_;
goto v_reusejp_377_;
}
v_reusejp_377_:
{
return v___x_378_;
}
}
}
else
{
lean_object* v_a_381_; lean_object* v___x_383_; uint8_t v_isShared_384_; uint8_t v_isSharedCheck_388_; 
lean_dec(v_a_364_);
v_a_381_ = lean_ctor_get(v___x_370_, 0);
v_isSharedCheck_388_ = !lean_is_exclusive(v___x_370_);
if (v_isSharedCheck_388_ == 0)
{
v___x_383_ = v___x_370_;
v_isShared_384_ = v_isSharedCheck_388_;
goto v_resetjp_382_;
}
else
{
lean_inc(v_a_381_);
lean_dec(v___x_370_);
v___x_383_ = lean_box(0);
v_isShared_384_ = v_isSharedCheck_388_;
goto v_resetjp_382_;
}
v_resetjp_382_:
{
lean_object* v___x_386_; 
if (v_isShared_384_ == 0)
{
v___x_386_ = v___x_383_;
goto v_reusejp_385_;
}
else
{
lean_object* v_reuseFailAlloc_387_; 
v_reuseFailAlloc_387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_387_, 0, v_a_381_);
v___x_386_ = v_reuseFailAlloc_387_;
goto v_reusejp_385_;
}
v_reusejp_385_:
{
return v___x_386_;
}
}
}
}
else
{
lean_object* v_a_389_; lean_object* v___x_391_; uint8_t v_isShared_392_; uint8_t v_isSharedCheck_396_; 
lean_dec_ref(v___x_360_);
lean_dec_ref(v___x_354_);
lean_dec_ref(v___x_353_);
v_a_389_ = lean_ctor_get(v___x_363_, 0);
v_isSharedCheck_396_ = !lean_is_exclusive(v___x_363_);
if (v_isSharedCheck_396_ == 0)
{
v___x_391_ = v___x_363_;
v_isShared_392_ = v_isSharedCheck_396_;
goto v_resetjp_390_;
}
else
{
lean_inc(v_a_389_);
lean_dec(v___x_363_);
v___x_391_ = lean_box(0);
v_isShared_392_ = v_isSharedCheck_396_;
goto v_resetjp_390_;
}
v_resetjp_390_:
{
lean_object* v___x_394_; 
if (v_isShared_392_ == 0)
{
v___x_394_ = v___x_391_;
goto v_reusejp_393_;
}
else
{
lean_object* v_reuseFailAlloc_395_; 
v_reuseFailAlloc_395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_395_, 0, v_a_389_);
v___x_394_ = v_reuseFailAlloc_395_;
goto v_reusejp_393_;
}
v_reusejp_393_:
{
return v___x_394_;
}
}
}
}
else
{
lean_object* v_a_397_; lean_object* v___x_399_; uint8_t v_isShared_400_; uint8_t v_isSharedCheck_404_; 
lean_dec(v_a_356_);
lean_dec_ref(v___x_354_);
lean_dec_ref(v___x_353_);
v_a_397_ = lean_ctor_get(v___x_357_, 0);
v_isSharedCheck_404_ = !lean_is_exclusive(v___x_357_);
if (v_isSharedCheck_404_ == 0)
{
v___x_399_ = v___x_357_;
v_isShared_400_ = v_isSharedCheck_404_;
goto v_resetjp_398_;
}
else
{
lean_inc(v_a_397_);
lean_dec(v___x_357_);
v___x_399_ = lean_box(0);
v_isShared_400_ = v_isSharedCheck_404_;
goto v_resetjp_398_;
}
v_resetjp_398_:
{
lean_object* v___x_402_; 
if (v_isShared_400_ == 0)
{
v___x_402_ = v___x_399_;
goto v_reusejp_401_;
}
else
{
lean_object* v_reuseFailAlloc_403_; 
v_reuseFailAlloc_403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_403_, 0, v_a_397_);
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
else
{
lean_object* v_a_405_; lean_object* v___x_407_; uint8_t v_isShared_408_; uint8_t v_isSharedCheck_412_; 
lean_dec_ref(v___x_354_);
lean_dec_ref(v___x_353_);
v_a_405_ = lean_ctor_get(v___x_355_, 0);
v_isSharedCheck_412_ = !lean_is_exclusive(v___x_355_);
if (v_isSharedCheck_412_ == 0)
{
v___x_407_ = v___x_355_;
v_isShared_408_ = v_isSharedCheck_412_;
goto v_resetjp_406_;
}
else
{
lean_inc(v_a_405_);
lean_dec(v___x_355_);
v___x_407_ = lean_box(0);
v_isShared_408_ = v_isSharedCheck_412_;
goto v_resetjp_406_;
}
v_resetjp_406_:
{
lean_object* v___x_410_; 
if (v_isShared_408_ == 0)
{
v___x_410_ = v___x_407_;
goto v_reusejp_409_;
}
else
{
lean_object* v_reuseFailAlloc_411_; 
v_reuseFailAlloc_411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_411_, 0, v_a_405_);
v___x_410_ = v_reuseFailAlloc_411_;
goto v_reusejp_409_;
}
v_reusejp_409_:
{
return v___x_410_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_nnfStep___boxed(lean_object* v_e_473_, lean_object* v_a_474_, lean_object* v_a_475_, lean_object* v_a_476_, lean_object* v_a_477_, lean_object* v_a_478_, lean_object* v_a_479_, lean_object* v_a_480_){
_start:
{
lean_object* v_res_481_; 
v_res_481_ = lp_vampireReplay_Vampire_Reconstruct_nnfStep(v_e_473_, v_a_474_, v_a_475_, v_a_476_, v_a_477_, v_a_478_, v_a_479_);
lean_dec(v_a_479_);
lean_dec_ref(v_a_478_);
lean_dec(v_a_477_);
lean_dec_ref(v_a_476_);
lean_dec(v_a_475_);
lean_dec_ref(v_a_474_);
return v_res_481_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_toNNF_spec__0___redArg(lean_object* v_a_510_, lean_object* v_as_x27_511_, lean_object* v_b_512_, lean_object* v___y_513_, lean_object* v___y_514_, lean_object* v___y_515_, lean_object* v___y_516_, lean_object* v___y_517_, lean_object* v___y_518_){
_start:
{
if (lean_obj_tag(v_as_x27_511_) == 0)
{
lean_object* v___x_520_; 
v___x_520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_520_, 0, v_b_512_);
return v___x_520_;
}
else
{
lean_object* v_head_521_; lean_object* v_tail_522_; lean_object* v_fst_523_; lean_object* v_snd_524_; lean_object* v___x_525_; lean_object* v___x_526_; uint8_t v___x_527_; 
lean_dec_ref(v_b_512_);
v_head_521_ = lean_ctor_get(v_as_x27_511_, 0);
v_tail_522_ = lean_ctor_get(v_as_x27_511_, 1);
v_fst_523_ = lean_ctor_get(v_head_521_, 0);
v_snd_524_ = lean_ctor_get(v_head_521_, 1);
v___x_525_ = lean_box(0);
v___x_526_ = lean_unsigned_to_nat(2u);
v___x_527_ = l_Lean_Expr_isAppOfArity(v_a_510_, v_fst_523_, v___x_526_);
if (v___x_527_ == 0)
{
lean_object* v___x_528_; 
v___x_528_ = ((lean_object*)(lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_toNNF_spec__0___redArg___closed__0));
v_as_x27_511_ = v_tail_522_;
v_b_512_ = v___x_528_;
goto _start;
}
else
{
lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; 
v___x_530_ = l_Lean_Expr_appFn_x21(v_a_510_);
v___x_531_ = l_Lean_Expr_appArg_x21(v___x_530_);
lean_dec_ref(v___x_530_);
v___x_532_ = lp_vampireReplay_Vampire_Reconstruct_toNNF(v___x_531_, v___y_513_, v___y_514_, v___y_515_, v___y_516_, v___y_517_, v___y_518_);
if (lean_obj_tag(v___x_532_) == 0)
{
lean_object* v_a_533_; lean_object* v_fst_534_; lean_object* v_snd_535_; lean_object* v___x_537_; uint8_t v_isShared_538_; uint8_t v_isSharedCheck_586_; 
v_a_533_ = lean_ctor_get(v___x_532_, 0);
lean_inc(v_a_533_);
lean_dec_ref_known(v___x_532_, 1);
v_fst_534_ = lean_ctor_get(v_a_533_, 0);
v_snd_535_ = lean_ctor_get(v_a_533_, 1);
v_isSharedCheck_586_ = !lean_is_exclusive(v_a_533_);
if (v_isSharedCheck_586_ == 0)
{
v___x_537_ = v_a_533_;
v_isShared_538_ = v_isSharedCheck_586_;
goto v_resetjp_536_;
}
else
{
lean_inc(v_snd_535_);
lean_inc(v_fst_534_);
lean_dec(v_a_533_);
v___x_537_ = lean_box(0);
v_isShared_538_ = v_isSharedCheck_586_;
goto v_resetjp_536_;
}
v_resetjp_536_:
{
lean_object* v___x_539_; lean_object* v___x_540_; 
v___x_539_ = l_Lean_Expr_appArg_x21(v_a_510_);
v___x_540_ = lp_vampireReplay_Vampire_Reconstruct_toNNF(v___x_539_, v___y_513_, v___y_514_, v___y_515_, v___y_516_, v___y_517_, v___y_518_);
if (lean_obj_tag(v___x_540_) == 0)
{
lean_object* v_a_541_; lean_object* v_fst_542_; lean_object* v_snd_543_; lean_object* v___x_545_; uint8_t v_isShared_546_; uint8_t v_isSharedCheck_577_; 
v_a_541_ = lean_ctor_get(v___x_540_, 0);
lean_inc(v_a_541_);
lean_dec_ref_known(v___x_540_, 1);
v_fst_542_ = lean_ctor_get(v_a_541_, 0);
v_snd_543_ = lean_ctor_get(v_a_541_, 1);
v_isSharedCheck_577_ = !lean_is_exclusive(v_a_541_);
if (v_isSharedCheck_577_ == 0)
{
v___x_545_ = v_a_541_;
v_isShared_546_ = v_isSharedCheck_577_;
goto v_resetjp_544_;
}
else
{
lean_inc(v_snd_543_);
lean_inc(v_fst_542_);
lean_dec(v_a_541_);
v___x_545_ = lean_box(0);
v_isShared_546_ = v_isSharedCheck_577_;
goto v_resetjp_544_;
}
v_resetjp_544_:
{
lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; 
v___x_547_ = lean_mk_empty_array_with_capacity(v___x_526_);
v___x_548_ = lean_array_push(v___x_547_, v_snd_535_);
v___x_549_ = lean_array_push(v___x_548_, v_snd_543_);
lean_inc(v_snd_524_);
v___x_550_ = l_Lean_Meta_mkAppM(v_snd_524_, v___x_549_, v___y_515_, v___y_516_, v___y_517_, v___y_518_);
if (lean_obj_tag(v___x_550_) == 0)
{
lean_object* v_a_551_; lean_object* v___x_553_; uint8_t v_isShared_554_; uint8_t v_isSharedCheck_568_; 
v_a_551_ = lean_ctor_get(v___x_550_, 0);
v_isSharedCheck_568_ = !lean_is_exclusive(v___x_550_);
if (v_isSharedCheck_568_ == 0)
{
v___x_553_ = v___x_550_;
v_isShared_554_ = v_isSharedCheck_568_;
goto v_resetjp_552_;
}
else
{
lean_inc(v_a_551_);
lean_dec(v___x_550_);
v___x_553_ = lean_box(0);
v_isShared_554_ = v_isSharedCheck_568_;
goto v_resetjp_552_;
}
v_resetjp_552_:
{
lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_559_; 
v___x_555_ = lean_box(0);
lean_inc(v_fst_523_);
v___x_556_ = l_Lean_Expr_const___override(v_fst_523_, v___x_555_);
v___x_557_ = l_Lean_mkAppB(v___x_556_, v_fst_534_, v_fst_542_);
if (v_isShared_546_ == 0)
{
lean_ctor_set(v___x_545_, 1, v_a_551_);
lean_ctor_set(v___x_545_, 0, v___x_557_);
v___x_559_ = v___x_545_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_567_; 
v_reuseFailAlloc_567_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_567_, 0, v___x_557_);
lean_ctor_set(v_reuseFailAlloc_567_, 1, v_a_551_);
v___x_559_ = v_reuseFailAlloc_567_;
goto v_reusejp_558_;
}
v_reusejp_558_:
{
lean_object* v___x_560_; lean_object* v___x_562_; 
v___x_560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_560_, 0, v___x_559_);
if (v_isShared_538_ == 0)
{
lean_ctor_set(v___x_537_, 1, v___x_525_);
lean_ctor_set(v___x_537_, 0, v___x_560_);
v___x_562_ = v___x_537_;
goto v_reusejp_561_;
}
else
{
lean_object* v_reuseFailAlloc_566_; 
v_reuseFailAlloc_566_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_566_, 0, v___x_560_);
lean_ctor_set(v_reuseFailAlloc_566_, 1, v___x_525_);
v___x_562_ = v_reuseFailAlloc_566_;
goto v_reusejp_561_;
}
v_reusejp_561_:
{
lean_object* v___x_564_; 
if (v_isShared_554_ == 0)
{
lean_ctor_set(v___x_553_, 0, v___x_562_);
v___x_564_ = v___x_553_;
goto v_reusejp_563_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v___x_562_);
v___x_564_ = v_reuseFailAlloc_565_;
goto v_reusejp_563_;
}
v_reusejp_563_:
{
return v___x_564_;
}
}
}
}
}
else
{
lean_object* v_a_569_; lean_object* v___x_571_; uint8_t v_isShared_572_; uint8_t v_isSharedCheck_576_; 
lean_del_object(v___x_545_);
lean_dec(v_fst_542_);
lean_del_object(v___x_537_);
lean_dec(v_fst_534_);
v_a_569_ = lean_ctor_get(v___x_550_, 0);
v_isSharedCheck_576_ = !lean_is_exclusive(v___x_550_);
if (v_isSharedCheck_576_ == 0)
{
v___x_571_ = v___x_550_;
v_isShared_572_ = v_isSharedCheck_576_;
goto v_resetjp_570_;
}
else
{
lean_inc(v_a_569_);
lean_dec(v___x_550_);
v___x_571_ = lean_box(0);
v_isShared_572_ = v_isSharedCheck_576_;
goto v_resetjp_570_;
}
v_resetjp_570_:
{
lean_object* v___x_574_; 
if (v_isShared_572_ == 0)
{
v___x_574_ = v___x_571_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_575_; 
v_reuseFailAlloc_575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_575_, 0, v_a_569_);
v___x_574_ = v_reuseFailAlloc_575_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
return v___x_574_;
}
}
}
}
}
else
{
lean_object* v_a_578_; lean_object* v___x_580_; uint8_t v_isShared_581_; uint8_t v_isSharedCheck_585_; 
lean_del_object(v___x_537_);
lean_dec(v_snd_535_);
lean_dec(v_fst_534_);
v_a_578_ = lean_ctor_get(v___x_540_, 0);
v_isSharedCheck_585_ = !lean_is_exclusive(v___x_540_);
if (v_isSharedCheck_585_ == 0)
{
v___x_580_ = v___x_540_;
v_isShared_581_ = v_isSharedCheck_585_;
goto v_resetjp_579_;
}
else
{
lean_inc(v_a_578_);
lean_dec(v___x_540_);
v___x_580_ = lean_box(0);
v_isShared_581_ = v_isSharedCheck_585_;
goto v_resetjp_579_;
}
v_resetjp_579_:
{
lean_object* v___x_583_; 
if (v_isShared_581_ == 0)
{
v___x_583_ = v___x_580_;
goto v_reusejp_582_;
}
else
{
lean_object* v_reuseFailAlloc_584_; 
v_reuseFailAlloc_584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_584_, 0, v_a_578_);
v___x_583_ = v_reuseFailAlloc_584_;
goto v_reusejp_582_;
}
v_reusejp_582_:
{
return v___x_583_;
}
}
}
}
}
else
{
lean_object* v_a_587_; lean_object* v___x_589_; uint8_t v_isShared_590_; uint8_t v_isSharedCheck_594_; 
v_a_587_ = lean_ctor_get(v___x_532_, 0);
v_isSharedCheck_594_ = !lean_is_exclusive(v___x_532_);
if (v_isSharedCheck_594_ == 0)
{
v___x_589_ = v___x_532_;
v_isShared_590_ = v_isSharedCheck_594_;
goto v_resetjp_588_;
}
else
{
lean_inc(v_a_587_);
lean_dec(v___x_532_);
v___x_589_ = lean_box(0);
v_isShared_590_ = v_isSharedCheck_594_;
goto v_resetjp_588_;
}
v_resetjp_588_:
{
lean_object* v___x_592_; 
if (v_isShared_590_ == 0)
{
v___x_592_ = v___x_589_;
goto v_reusejp_591_;
}
else
{
lean_object* v_reuseFailAlloc_593_; 
v_reuseFailAlloc_593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_593_, 0, v_a_587_);
v___x_592_ = v_reuseFailAlloc_593_;
goto v_reusejp_591_;
}
v_reusejp_591_:
{
return v___x_592_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_toNNF___lam__0___boxed(lean_object* v_body_595_, lean_object* v___x_596_, lean_object* v___x_597_, lean_object* v___x_598_, lean_object* v_x_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_, lean_object* v___y_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_){
_start:
{
uint8_t v___x_21819__boxed_607_; uint8_t v___x_21820__boxed_608_; lean_object* v_res_609_; 
v___x_21819__boxed_607_ = lean_unbox(v___x_597_);
v___x_21820__boxed_608_ = lean_unbox(v___x_598_);
v_res_609_ = lp_vampireReplay_Vampire_Reconstruct_toNNF___lam__0(v_body_595_, v___x_596_, v___x_21819__boxed_607_, v___x_21820__boxed_608_, v_x_599_, v___y_600_, v___y_601_, v___y_602_, v___y_603_, v___y_604_, v___y_605_);
lean_dec(v___y_605_);
lean_dec_ref(v___y_604_);
lean_dec(v___y_603_);
lean_dec_ref(v___y_602_);
lean_dec(v___y_601_);
lean_dec_ref(v___y_600_);
lean_dec(v___x_596_);
lean_dec_ref(v_body_595_);
return v_res_609_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_toNNF___lam__1(lean_object* v_body_617_, lean_object* v___x_618_, lean_object* v_binderName_619_, lean_object* v_binderType_620_, uint8_t v_binderInfo_621_, lean_object* v___x_622_, uint8_t v___x_623_, uint8_t v___x_624_, lean_object* v_x_625_, lean_object* v___y_626_, lean_object* v___y_627_, lean_object* v___y_628_, lean_object* v___y_629_, lean_object* v___y_630_, lean_object* v___y_631_){
_start:
{
lean_object* v___x_633_; lean_object* v___x_634_; 
v___x_633_ = lean_expr_instantiate1(v_body_617_, v_x_625_);
v___x_634_ = lp_vampireReplay_Vampire_Reconstruct_toNNF(v___x_633_, v___y_626_, v___y_627_, v___y_628_, v___y_629_, v___y_630_, v___y_631_);
if (lean_obj_tag(v___x_634_) == 0)
{
lean_object* v_a_635_; lean_object* v_fst_636_; lean_object* v_snd_637_; lean_object* v___x_639_; uint8_t v_isShared_640_; uint8_t v_isSharedCheck_689_; 
v_a_635_ = lean_ctor_get(v___x_634_, 0);
lean_inc(v_a_635_);
lean_dec_ref_known(v___x_634_, 1);
v_fst_636_ = lean_ctor_get(v_a_635_, 0);
v_snd_637_ = lean_ctor_get(v_a_635_, 1);
v_isSharedCheck_689_ = !lean_is_exclusive(v_a_635_);
if (v_isSharedCheck_689_ == 0)
{
v___x_639_ = v_a_635_;
v_isShared_640_ = v_isSharedCheck_689_;
goto v_resetjp_638_;
}
else
{
lean_inc(v_snd_637_);
lean_inc(v_fst_636_);
lean_dec(v_a_635_);
v___x_639_ = lean_box(0);
v_isShared_640_ = v_isSharedCheck_689_;
goto v_resetjp_638_;
}
v_resetjp_638_:
{
lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; 
v___x_641_ = lean_mk_empty_array_with_capacity(v___x_618_);
lean_inc_ref_n(v___x_641_, 2);
v___x_642_ = lean_array_push(v___x_641_, v_x_625_);
v___x_643_ = lean_expr_abstract(v_fst_636_, v___x_642_);
lean_dec(v_fst_636_);
v___x_644_ = l_Lean_Expr_lam___override(v_binderName_619_, v_binderType_620_, v___x_643_, v_binderInfo_621_);
v___x_645_ = lean_array_push(v___x_641_, v___x_644_);
v___x_646_ = l_Lean_Meta_mkAppM(v___x_622_, v___x_645_, v___y_628_, v___y_629_, v___y_630_, v___y_631_);
if (lean_obj_tag(v___x_646_) == 0)
{
lean_object* v_a_647_; uint8_t v___x_648_; lean_object* v___x_649_; 
v_a_647_ = lean_ctor_get(v___x_646_, 0);
lean_inc(v_a_647_);
lean_dec_ref_known(v___x_646_, 1);
v___x_648_ = 1;
v___x_649_ = l_Lean_Meta_mkLambdaFVars(v___x_642_, v_snd_637_, v___x_623_, v___x_624_, v___x_623_, v___x_624_, v___x_648_, v___y_628_, v___y_629_, v___y_630_, v___y_631_);
lean_dec_ref(v___x_642_);
if (lean_obj_tag(v___x_649_) == 0)
{
lean_object* v_a_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; 
v_a_650_ = lean_ctor_get(v___x_649_, 0);
lean_inc(v_a_650_);
lean_dec_ref_known(v___x_649_, 1);
v___x_651_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_toNNF___lam__1___closed__1));
v___x_652_ = lean_array_push(v___x_641_, v_a_650_);
v___x_653_ = l_Lean_Meta_mkAppM(v___x_651_, v___x_652_, v___y_628_, v___y_629_, v___y_630_, v___y_631_);
if (lean_obj_tag(v___x_653_) == 0)
{
lean_object* v_a_654_; lean_object* v___x_656_; uint8_t v_isShared_657_; uint8_t v_isSharedCheck_664_; 
v_a_654_ = lean_ctor_get(v___x_653_, 0);
v_isSharedCheck_664_ = !lean_is_exclusive(v___x_653_);
if (v_isSharedCheck_664_ == 0)
{
v___x_656_ = v___x_653_;
v_isShared_657_ = v_isSharedCheck_664_;
goto v_resetjp_655_;
}
else
{
lean_inc(v_a_654_);
lean_dec(v___x_653_);
v___x_656_ = lean_box(0);
v_isShared_657_ = v_isSharedCheck_664_;
goto v_resetjp_655_;
}
v_resetjp_655_:
{
lean_object* v___x_659_; 
if (v_isShared_640_ == 0)
{
lean_ctor_set(v___x_639_, 1, v_a_654_);
lean_ctor_set(v___x_639_, 0, v_a_647_);
v___x_659_ = v___x_639_;
goto v_reusejp_658_;
}
else
{
lean_object* v_reuseFailAlloc_663_; 
v_reuseFailAlloc_663_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_663_, 0, v_a_647_);
lean_ctor_set(v_reuseFailAlloc_663_, 1, v_a_654_);
v___x_659_ = v_reuseFailAlloc_663_;
goto v_reusejp_658_;
}
v_reusejp_658_:
{
lean_object* v___x_661_; 
if (v_isShared_657_ == 0)
{
lean_ctor_set(v___x_656_, 0, v___x_659_);
v___x_661_ = v___x_656_;
goto v_reusejp_660_;
}
else
{
lean_object* v_reuseFailAlloc_662_; 
v_reuseFailAlloc_662_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_662_, 0, v___x_659_);
v___x_661_ = v_reuseFailAlloc_662_;
goto v_reusejp_660_;
}
v_reusejp_660_:
{
return v___x_661_;
}
}
}
}
else
{
lean_object* v_a_665_; lean_object* v___x_667_; uint8_t v_isShared_668_; uint8_t v_isSharedCheck_672_; 
lean_dec(v_a_647_);
lean_del_object(v___x_639_);
v_a_665_ = lean_ctor_get(v___x_653_, 0);
v_isSharedCheck_672_ = !lean_is_exclusive(v___x_653_);
if (v_isSharedCheck_672_ == 0)
{
v___x_667_ = v___x_653_;
v_isShared_668_ = v_isSharedCheck_672_;
goto v_resetjp_666_;
}
else
{
lean_inc(v_a_665_);
lean_dec(v___x_653_);
v___x_667_ = lean_box(0);
v_isShared_668_ = v_isSharedCheck_672_;
goto v_resetjp_666_;
}
v_resetjp_666_:
{
lean_object* v___x_670_; 
if (v_isShared_668_ == 0)
{
v___x_670_ = v___x_667_;
goto v_reusejp_669_;
}
else
{
lean_object* v_reuseFailAlloc_671_; 
v_reuseFailAlloc_671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_671_, 0, v_a_665_);
v___x_670_ = v_reuseFailAlloc_671_;
goto v_reusejp_669_;
}
v_reusejp_669_:
{
return v___x_670_;
}
}
}
}
else
{
lean_object* v_a_673_; lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_680_; 
lean_dec(v_a_647_);
lean_dec_ref(v___x_641_);
lean_del_object(v___x_639_);
v_a_673_ = lean_ctor_get(v___x_649_, 0);
v_isSharedCheck_680_ = !lean_is_exclusive(v___x_649_);
if (v_isSharedCheck_680_ == 0)
{
v___x_675_ = v___x_649_;
v_isShared_676_ = v_isSharedCheck_680_;
goto v_resetjp_674_;
}
else
{
lean_inc(v_a_673_);
lean_dec(v___x_649_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_680_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
lean_object* v___x_678_; 
if (v_isShared_676_ == 0)
{
v___x_678_ = v___x_675_;
goto v_reusejp_677_;
}
else
{
lean_object* v_reuseFailAlloc_679_; 
v_reuseFailAlloc_679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_679_, 0, v_a_673_);
v___x_678_ = v_reuseFailAlloc_679_;
goto v_reusejp_677_;
}
v_reusejp_677_:
{
return v___x_678_;
}
}
}
}
else
{
lean_object* v_a_681_; lean_object* v___x_683_; uint8_t v_isShared_684_; uint8_t v_isSharedCheck_688_; 
lean_dec_ref(v___x_642_);
lean_dec_ref(v___x_641_);
lean_del_object(v___x_639_);
lean_dec(v_snd_637_);
v_a_681_ = lean_ctor_get(v___x_646_, 0);
v_isSharedCheck_688_ = !lean_is_exclusive(v___x_646_);
if (v_isSharedCheck_688_ == 0)
{
v___x_683_ = v___x_646_;
v_isShared_684_ = v_isSharedCheck_688_;
goto v_resetjp_682_;
}
else
{
lean_inc(v_a_681_);
lean_dec(v___x_646_);
v___x_683_ = lean_box(0);
v_isShared_684_ = v_isSharedCheck_688_;
goto v_resetjp_682_;
}
v_resetjp_682_:
{
lean_object* v___x_686_; 
if (v_isShared_684_ == 0)
{
v___x_686_ = v___x_683_;
goto v_reusejp_685_;
}
else
{
lean_object* v_reuseFailAlloc_687_; 
v_reuseFailAlloc_687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_687_, 0, v_a_681_);
v___x_686_ = v_reuseFailAlloc_687_;
goto v_reusejp_685_;
}
v_reusejp_685_:
{
return v___x_686_;
}
}
}
}
}
else
{
lean_dec_ref(v_x_625_);
lean_dec(v___x_622_);
lean_dec_ref(v_binderType_620_);
lean_dec(v_binderName_619_);
return v___x_634_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_toNNF___lam__1___boxed(lean_object* v_body_690_, lean_object* v___x_691_, lean_object* v_binderName_692_, lean_object* v_binderType_693_, lean_object* v_binderInfo_694_, lean_object* v___x_695_, lean_object* v___x_696_, lean_object* v___x_697_, lean_object* v_x_698_, lean_object* v___y_699_, lean_object* v___y_700_, lean_object* v___y_701_, lean_object* v___y_702_, lean_object* v___y_703_, lean_object* v___y_704_, lean_object* v___y_705_){
_start:
{
uint8_t v_binderInfo_21860__boxed_706_; uint8_t v___x_21862__boxed_707_; uint8_t v___x_21863__boxed_708_; lean_object* v_res_709_; 
v_binderInfo_21860__boxed_706_ = lean_unbox(v_binderInfo_694_);
v___x_21862__boxed_707_ = lean_unbox(v___x_696_);
v___x_21863__boxed_708_ = lean_unbox(v___x_697_);
v_res_709_ = lp_vampireReplay_Vampire_Reconstruct_toNNF___lam__1(v_body_690_, v___x_691_, v_binderName_692_, v_binderType_693_, v_binderInfo_21860__boxed_706_, v___x_695_, v___x_21862__boxed_707_, v___x_21863__boxed_708_, v_x_698_, v___y_699_, v___y_700_, v___y_701_, v___y_702_, v___y_703_, v___y_704_);
lean_dec(v___y_704_);
lean_dec_ref(v___y_703_);
lean_dec(v___y_702_);
lean_dec_ref(v___y_701_);
lean_dec(v___y_700_);
lean_dec_ref(v___y_699_);
lean_dec(v___x_691_);
lean_dec_ref(v_body_690_);
return v_res_709_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_toNNF(lean_object* v_e_710_, lean_object* v_a_711_, lean_object* v_a_712_, lean_object* v_a_713_, lean_object* v_a_714_, lean_object* v_a_715_, lean_object* v_a_716_){
_start:
{
lean_object* v___x_718_; 
v___x_718_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_e_710_, v_a_714_);
if (lean_obj_tag(v___x_718_) == 0)
{
lean_object* v_a_719_; lean_object* v___x_720_; 
v_a_719_ = lean_ctor_get(v___x_718_, 0);
lean_inc_n(v_a_719_, 2);
lean_dec_ref_known(v___x_718_, 1);
v___x_720_ = lp_vampireReplay_Vampire_Reconstruct_nnfStep(v_a_719_, v_a_711_, v_a_712_, v_a_713_, v_a_714_, v_a_715_, v_a_716_);
if (lean_obj_tag(v___x_720_) == 0)
{
lean_object* v_a_721_; 
v_a_721_ = lean_ctor_get(v___x_720_, 0);
lean_inc(v_a_721_);
lean_dec_ref_known(v___x_720_, 1);
if (lean_obj_tag(v_a_721_) == 1)
{
lean_object* v_val_722_; lean_object* v_fst_723_; lean_object* v_snd_724_; lean_object* v___x_725_; 
lean_dec(v_a_719_);
v_val_722_ = lean_ctor_get(v_a_721_, 0);
lean_inc(v_val_722_);
lean_dec_ref_known(v_a_721_, 1);
v_fst_723_ = lean_ctor_get(v_val_722_, 0);
lean_inc(v_fst_723_);
v_snd_724_ = lean_ctor_get(v_val_722_, 1);
lean_inc(v_snd_724_);
lean_dec(v_val_722_);
v___x_725_ = lp_vampireReplay_Vampire_Reconstruct_toNNF(v_fst_723_, v_a_711_, v_a_712_, v_a_713_, v_a_714_, v_a_715_, v_a_716_);
if (lean_obj_tag(v___x_725_) == 0)
{
lean_object* v_a_726_; lean_object* v_fst_727_; lean_object* v_snd_728_; lean_object* v___x_730_; uint8_t v_isShared_731_; uint8_t v_isSharedCheck_757_; 
v_a_726_ = lean_ctor_get(v___x_725_, 0);
lean_inc(v_a_726_);
lean_dec_ref_known(v___x_725_, 1);
v_fst_727_ = lean_ctor_get(v_a_726_, 0);
v_snd_728_ = lean_ctor_get(v_a_726_, 1);
v_isSharedCheck_757_ = !lean_is_exclusive(v_a_726_);
if (v_isSharedCheck_757_ == 0)
{
v___x_730_ = v_a_726_;
v_isShared_731_ = v_isSharedCheck_757_;
goto v_resetjp_729_;
}
else
{
lean_inc(v_snd_728_);
lean_inc(v_fst_727_);
lean_dec(v_a_726_);
v___x_730_ = lean_box(0);
v_isShared_731_ = v_isSharedCheck_757_;
goto v_resetjp_729_;
}
v_resetjp_729_:
{
lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; 
v___x_732_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__1));
v___x_733_ = lean_unsigned_to_nat(2u);
v___x_734_ = lean_mk_empty_array_with_capacity(v___x_733_);
v___x_735_ = lean_array_push(v___x_734_, v_snd_724_);
v___x_736_ = lean_array_push(v___x_735_, v_snd_728_);
v___x_737_ = l_Lean_Meta_mkAppM(v___x_732_, v___x_736_, v_a_713_, v_a_714_, v_a_715_, v_a_716_);
if (lean_obj_tag(v___x_737_) == 0)
{
lean_object* v_a_738_; lean_object* v___x_740_; uint8_t v_isShared_741_; uint8_t v_isSharedCheck_748_; 
v_a_738_ = lean_ctor_get(v___x_737_, 0);
v_isSharedCheck_748_ = !lean_is_exclusive(v___x_737_);
if (v_isSharedCheck_748_ == 0)
{
v___x_740_ = v___x_737_;
v_isShared_741_ = v_isSharedCheck_748_;
goto v_resetjp_739_;
}
else
{
lean_inc(v_a_738_);
lean_dec(v___x_737_);
v___x_740_ = lean_box(0);
v_isShared_741_ = v_isSharedCheck_748_;
goto v_resetjp_739_;
}
v_resetjp_739_:
{
lean_object* v___x_743_; 
if (v_isShared_731_ == 0)
{
lean_ctor_set(v___x_730_, 1, v_a_738_);
v___x_743_ = v___x_730_;
goto v_reusejp_742_;
}
else
{
lean_object* v_reuseFailAlloc_747_; 
v_reuseFailAlloc_747_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_747_, 0, v_fst_727_);
lean_ctor_set(v_reuseFailAlloc_747_, 1, v_a_738_);
v___x_743_ = v_reuseFailAlloc_747_;
goto v_reusejp_742_;
}
v_reusejp_742_:
{
lean_object* v___x_745_; 
if (v_isShared_741_ == 0)
{
lean_ctor_set(v___x_740_, 0, v___x_743_);
v___x_745_ = v___x_740_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v___x_743_);
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
else
{
lean_object* v_a_749_; lean_object* v___x_751_; uint8_t v_isShared_752_; uint8_t v_isSharedCheck_756_; 
lean_del_object(v___x_730_);
lean_dec(v_fst_727_);
v_a_749_ = lean_ctor_get(v___x_737_, 0);
v_isSharedCheck_756_ = !lean_is_exclusive(v___x_737_);
if (v_isSharedCheck_756_ == 0)
{
v___x_751_ = v___x_737_;
v_isShared_752_ = v_isSharedCheck_756_;
goto v_resetjp_750_;
}
else
{
lean_inc(v_a_749_);
lean_dec(v___x_737_);
v___x_751_ = lean_box(0);
v_isShared_752_ = v_isSharedCheck_756_;
goto v_resetjp_750_;
}
v_resetjp_750_:
{
lean_object* v___x_754_; 
if (v_isShared_752_ == 0)
{
v___x_754_ = v___x_751_;
goto v_reusejp_753_;
}
else
{
lean_object* v_reuseFailAlloc_755_; 
v_reuseFailAlloc_755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_755_, 0, v_a_749_);
v___x_754_ = v_reuseFailAlloc_755_;
goto v_reusejp_753_;
}
v_reusejp_753_:
{
return v___x_754_;
}
}
}
}
}
else
{
lean_dec(v_snd_724_);
return v___x_725_;
}
}
else
{
lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; 
lean_dec(v_a_721_);
v___x_758_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__9));
v___x_759_ = ((lean_object*)(lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_toNNF_spec__0___redArg___closed__0));
v___x_760_ = lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_toNNF_spec__0___redArg(v_a_719_, v___x_758_, v___x_759_, v_a_711_, v_a_712_, v_a_713_, v_a_714_, v_a_715_, v_a_716_);
if (lean_obj_tag(v___x_760_) == 0)
{
lean_object* v_a_761_; lean_object* v___x_763_; uint8_t v_isShared_764_; uint8_t v_isSharedCheck_909_; 
v_a_761_ = lean_ctor_get(v___x_760_, 0);
v_isSharedCheck_909_ = !lean_is_exclusive(v___x_760_);
if (v_isSharedCheck_909_ == 0)
{
v___x_763_ = v___x_760_;
v_isShared_764_ = v_isSharedCheck_909_;
goto v_resetjp_762_;
}
else
{
lean_inc(v_a_761_);
lean_dec(v___x_760_);
v___x_763_ = lean_box(0);
v_isShared_764_ = v_isSharedCheck_909_;
goto v_resetjp_762_;
}
v_resetjp_762_:
{
lean_object* v_fst_765_; lean_object* v___x_767_; uint8_t v_isShared_768_; uint8_t v_isSharedCheck_907_; 
v_fst_765_ = lean_ctor_get(v_a_761_, 0);
v_isSharedCheck_907_ = !lean_is_exclusive(v_a_761_);
if (v_isSharedCheck_907_ == 0)
{
lean_object* v_unused_908_; 
v_unused_908_ = lean_ctor_get(v_a_761_, 1);
lean_dec(v_unused_908_);
v___x_767_ = v_a_761_;
v_isShared_768_ = v_isSharedCheck_907_;
goto v_resetjp_766_;
}
else
{
lean_inc(v_fst_765_);
lean_dec(v_a_761_);
v___x_767_ = lean_box(0);
v_isShared_768_ = v_isSharedCheck_907_;
goto v_resetjp_766_;
}
v_resetjp_766_:
{
if (lean_obj_tag(v_fst_765_) == 0)
{
lean_object* v___x_769_; lean_object* v___x_770_; uint8_t v___x_771_; 
lean_del_object(v___x_763_);
v___x_769_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__12));
v___x_770_ = lean_unsigned_to_nat(1u);
v___x_771_ = l_Lean_Expr_isAppOfArity(v_a_719_, v___x_769_, v___x_770_);
if (v___x_771_ == 0)
{
uint8_t v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; uint8_t v___x_775_; 
v___x_772_ = 1;
v___x_773_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__1));
v___x_774_ = lean_unsigned_to_nat(2u);
v___x_775_ = l_Lean_Expr_isAppOfArity(v_a_719_, v___x_773_, v___x_774_);
if (v___x_775_ == 0)
{
if (lean_obj_tag(v_a_719_) == 7)
{
lean_object* v_binderType_776_; lean_object* v_body_777_; lean_object* v___x_778_; 
v_binderType_776_ = lean_ctor_get(v_a_719_, 1);
v_body_777_ = lean_ctor_get(v_a_719_, 2);
lean_inc_ref(v_binderType_776_);
v___x_778_ = l_Lean_Meta_isProp(v_binderType_776_, v_a_713_, v_a_714_, v_a_715_, v_a_716_);
if (lean_obj_tag(v___x_778_) == 0)
{
lean_object* v_a_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___f_782_; uint8_t v___x_786_; 
v_a_779_ = lean_ctor_get(v___x_778_, 0);
lean_inc(v_a_779_);
lean_dec_ref_known(v___x_778_, 1);
v___x_780_ = lean_box(v___x_775_);
v___x_781_ = lean_box(v___x_772_);
lean_inc_ref(v_body_777_);
v___f_782_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_toNNF___lam__0___boxed), 12, 4);
lean_closure_set(v___f_782_, 0, v_body_777_);
lean_closure_set(v___f_782_, 1, v___x_770_);
lean_closure_set(v___f_782_, 2, v___x_780_);
lean_closure_set(v___f_782_, 3, v___x_781_);
v___x_786_ = lean_unbox(v_a_779_);
lean_dec(v_a_779_);
if (v___x_786_ == 0)
{
lean_inc_ref(v_binderType_776_);
lean_dec_ref_known(v_a_719_, 3);
lean_del_object(v___x_767_);
goto v___jp_783_;
}
else
{
if (v___x_775_ == 0)
{
uint8_t v___x_787_; 
v___x_787_ = l_Lean_Expr_hasLooseBVars(v_body_777_);
if (v___x_787_ == 0)
{
lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; 
lean_dec_ref(v___f_782_);
v___x_788_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__11));
lean_inc_ref(v_a_719_);
v___x_789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_789_, 0, v_a_719_);
v___x_790_ = lean_mk_empty_array_with_capacity(v___x_770_);
v___x_791_ = lean_array_push(v___x_790_, v___x_789_);
v___x_792_ = l_Lean_Meta_mkAppOptM(v___x_788_, v___x_791_, v_a_713_, v_a_714_, v_a_715_, v_a_716_);
if (lean_obj_tag(v___x_792_) == 0)
{
lean_object* v_a_793_; lean_object* v___x_795_; uint8_t v_isShared_796_; uint8_t v_isSharedCheck_803_; 
v_a_793_ = lean_ctor_get(v___x_792_, 0);
v_isSharedCheck_803_ = !lean_is_exclusive(v___x_792_);
if (v_isSharedCheck_803_ == 0)
{
v___x_795_ = v___x_792_;
v_isShared_796_ = v_isSharedCheck_803_;
goto v_resetjp_794_;
}
else
{
lean_inc(v_a_793_);
lean_dec(v___x_792_);
v___x_795_ = lean_box(0);
v_isShared_796_ = v_isSharedCheck_803_;
goto v_resetjp_794_;
}
v_resetjp_794_:
{
lean_object* v___x_798_; 
if (v_isShared_768_ == 0)
{
lean_ctor_set(v___x_767_, 1, v_a_793_);
lean_ctor_set(v___x_767_, 0, v_a_719_);
v___x_798_ = v___x_767_;
goto v_reusejp_797_;
}
else
{
lean_object* v_reuseFailAlloc_802_; 
v_reuseFailAlloc_802_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_802_, 0, v_a_719_);
lean_ctor_set(v_reuseFailAlloc_802_, 1, v_a_793_);
v___x_798_ = v_reuseFailAlloc_802_;
goto v_reusejp_797_;
}
v_reusejp_797_:
{
lean_object* v___x_800_; 
if (v_isShared_796_ == 0)
{
lean_ctor_set(v___x_795_, 0, v___x_798_);
v___x_800_ = v___x_795_;
goto v_reusejp_799_;
}
else
{
lean_object* v_reuseFailAlloc_801_; 
v_reuseFailAlloc_801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_801_, 0, v___x_798_);
v___x_800_ = v_reuseFailAlloc_801_;
goto v_reusejp_799_;
}
v_reusejp_799_:
{
return v___x_800_;
}
}
}
}
else
{
lean_object* v_a_804_; lean_object* v___x_806_; uint8_t v_isShared_807_; uint8_t v_isSharedCheck_811_; 
lean_dec_ref_known(v_a_719_, 3);
lean_del_object(v___x_767_);
v_a_804_ = lean_ctor_get(v___x_792_, 0);
v_isSharedCheck_811_ = !lean_is_exclusive(v___x_792_);
if (v_isSharedCheck_811_ == 0)
{
v___x_806_ = v___x_792_;
v_isShared_807_ = v_isSharedCheck_811_;
goto v_resetjp_805_;
}
else
{
lean_inc(v_a_804_);
lean_dec(v___x_792_);
v___x_806_ = lean_box(0);
v_isShared_807_ = v_isSharedCheck_811_;
goto v_resetjp_805_;
}
v_resetjp_805_:
{
lean_object* v___x_809_; 
if (v_isShared_807_ == 0)
{
v___x_809_ = v___x_806_;
goto v_reusejp_808_;
}
else
{
lean_object* v_reuseFailAlloc_810_; 
v_reuseFailAlloc_810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_810_, 0, v_a_804_);
v___x_809_ = v_reuseFailAlloc_810_;
goto v_reusejp_808_;
}
v_reusejp_808_:
{
return v___x_809_;
}
}
}
}
else
{
lean_inc_ref(v_binderType_776_);
lean_dec_ref_known(v_a_719_, 3);
lean_del_object(v___x_767_);
goto v___jp_783_;
}
}
else
{
lean_inc_ref(v_binderType_776_);
lean_dec_ref_known(v_a_719_, 3);
lean_del_object(v___x_767_);
goto v___jp_783_;
}
}
v___jp_783_:
{
lean_object* v___x_784_; lean_object* v___x_785_; 
v___x_784_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__6));
v___x_785_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_784_, v_binderType_776_, v___f_782_, v_a_711_, v_a_712_, v_a_713_, v_a_714_, v_a_715_, v_a_716_);
return v___x_785_;
}
}
else
{
lean_object* v_a_812_; lean_object* v___x_814_; uint8_t v_isShared_815_; uint8_t v_isSharedCheck_819_; 
lean_dec_ref_known(v_a_719_, 3);
lean_del_object(v___x_767_);
v_a_812_ = lean_ctor_get(v___x_778_, 0);
v_isSharedCheck_819_ = !lean_is_exclusive(v___x_778_);
if (v_isSharedCheck_819_ == 0)
{
v___x_814_ = v___x_778_;
v_isShared_815_ = v_isSharedCheck_819_;
goto v_resetjp_813_;
}
else
{
lean_inc(v_a_812_);
lean_dec(v___x_778_);
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
else
{
lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; 
v___x_820_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__11));
lean_inc(v_a_719_);
v___x_821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_821_, 0, v_a_719_);
v___x_822_ = lean_mk_empty_array_with_capacity(v___x_770_);
v___x_823_ = lean_array_push(v___x_822_, v___x_821_);
v___x_824_ = l_Lean_Meta_mkAppOptM(v___x_820_, v___x_823_, v_a_713_, v_a_714_, v_a_715_, v_a_716_);
if (lean_obj_tag(v___x_824_) == 0)
{
lean_object* v_a_825_; lean_object* v___x_827_; uint8_t v_isShared_828_; uint8_t v_isSharedCheck_835_; 
v_a_825_ = lean_ctor_get(v___x_824_, 0);
v_isSharedCheck_835_ = !lean_is_exclusive(v___x_824_);
if (v_isSharedCheck_835_ == 0)
{
v___x_827_ = v___x_824_;
v_isShared_828_ = v_isSharedCheck_835_;
goto v_resetjp_826_;
}
else
{
lean_inc(v_a_825_);
lean_dec(v___x_824_);
v___x_827_ = lean_box(0);
v_isShared_828_ = v_isSharedCheck_835_;
goto v_resetjp_826_;
}
v_resetjp_826_:
{
lean_object* v___x_830_; 
if (v_isShared_768_ == 0)
{
lean_ctor_set(v___x_767_, 1, v_a_825_);
lean_ctor_set(v___x_767_, 0, v_a_719_);
v___x_830_ = v___x_767_;
goto v_reusejp_829_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v_a_719_);
lean_ctor_set(v_reuseFailAlloc_834_, 1, v_a_825_);
v___x_830_ = v_reuseFailAlloc_834_;
goto v_reusejp_829_;
}
v_reusejp_829_:
{
lean_object* v___x_832_; 
if (v_isShared_828_ == 0)
{
lean_ctor_set(v___x_827_, 0, v___x_830_);
v___x_832_ = v___x_827_;
goto v_reusejp_831_;
}
else
{
lean_object* v_reuseFailAlloc_833_; 
v_reuseFailAlloc_833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_833_, 0, v___x_830_);
v___x_832_ = v_reuseFailAlloc_833_;
goto v_reusejp_831_;
}
v_reusejp_831_:
{
return v___x_832_;
}
}
}
}
else
{
lean_object* v_a_836_; lean_object* v___x_838_; uint8_t v_isShared_839_; uint8_t v_isSharedCheck_843_; 
lean_del_object(v___x_767_);
lean_dec(v_a_719_);
v_a_836_ = lean_ctor_get(v___x_824_, 0);
v_isSharedCheck_843_ = !lean_is_exclusive(v___x_824_);
if (v_isSharedCheck_843_ == 0)
{
v___x_838_ = v___x_824_;
v_isShared_839_ = v_isSharedCheck_843_;
goto v_resetjp_837_;
}
else
{
lean_inc(v_a_836_);
lean_dec(v___x_824_);
v___x_838_ = lean_box(0);
v_isShared_839_ = v_isSharedCheck_843_;
goto v_resetjp_837_;
}
v_resetjp_837_:
{
lean_object* v___x_841_; 
if (v_isShared_839_ == 0)
{
v___x_841_ = v___x_838_;
goto v_reusejp_840_;
}
else
{
lean_object* v_reuseFailAlloc_842_; 
v_reuseFailAlloc_842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_842_, 0, v_a_836_);
v___x_841_ = v_reuseFailAlloc_842_;
goto v_reusejp_840_;
}
v_reusejp_840_:
{
return v___x_841_;
}
}
}
}
}
else
{
lean_object* v___x_844_; 
v___x_844_ = l_Lean_Expr_appArg_x21(v_a_719_);
if (lean_obj_tag(v___x_844_) == 6)
{
lean_object* v_binderName_845_; lean_object* v_binderType_846_; lean_object* v_body_847_; uint8_t v_binderInfo_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___f_852_; lean_object* v___x_853_; lean_object* v___x_854_; 
lean_del_object(v___x_767_);
lean_dec(v_a_719_);
v_binderName_845_ = lean_ctor_get(v___x_844_, 0);
lean_inc(v_binderName_845_);
v_binderType_846_ = lean_ctor_get(v___x_844_, 1);
lean_inc_ref_n(v_binderType_846_, 2);
v_body_847_ = lean_ctor_get(v___x_844_, 2);
lean_inc_ref(v_body_847_);
v_binderInfo_848_ = lean_ctor_get_uint8(v___x_844_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v___x_844_, 3);
v___x_849_ = lean_box(v_binderInfo_848_);
v___x_850_ = lean_box(v___x_771_);
v___x_851_ = lean_box(v___x_772_);
v___f_852_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_toNNF___lam__1___boxed), 16, 8);
lean_closure_set(v___f_852_, 0, v_body_847_);
lean_closure_set(v___f_852_, 1, v___x_770_);
lean_closure_set(v___f_852_, 2, v_binderName_845_);
lean_closure_set(v___f_852_, 3, v_binderType_846_);
lean_closure_set(v___f_852_, 4, v___x_849_);
lean_closure_set(v___f_852_, 5, v___x_773_);
lean_closure_set(v___f_852_, 6, v___x_850_);
lean_closure_set(v___f_852_, 7, v___x_851_);
v___x_853_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__6));
v___x_854_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_853_, v_binderType_846_, v___f_852_, v_a_711_, v_a_712_, v_a_713_, v_a_714_, v_a_715_, v_a_716_);
return v___x_854_;
}
else
{
lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; 
lean_dec_ref(v___x_844_);
v___x_855_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__11));
lean_inc(v_a_719_);
v___x_856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_856_, 0, v_a_719_);
v___x_857_ = lean_mk_empty_array_with_capacity(v___x_770_);
v___x_858_ = lean_array_push(v___x_857_, v___x_856_);
v___x_859_ = l_Lean_Meta_mkAppOptM(v___x_855_, v___x_858_, v_a_713_, v_a_714_, v_a_715_, v_a_716_);
if (lean_obj_tag(v___x_859_) == 0)
{
lean_object* v_a_860_; lean_object* v___x_862_; uint8_t v_isShared_863_; uint8_t v_isSharedCheck_870_; 
v_a_860_ = lean_ctor_get(v___x_859_, 0);
v_isSharedCheck_870_ = !lean_is_exclusive(v___x_859_);
if (v_isSharedCheck_870_ == 0)
{
v___x_862_ = v___x_859_;
v_isShared_863_ = v_isSharedCheck_870_;
goto v_resetjp_861_;
}
else
{
lean_inc(v_a_860_);
lean_dec(v___x_859_);
v___x_862_ = lean_box(0);
v_isShared_863_ = v_isSharedCheck_870_;
goto v_resetjp_861_;
}
v_resetjp_861_:
{
lean_object* v___x_865_; 
if (v_isShared_768_ == 0)
{
lean_ctor_set(v___x_767_, 1, v_a_860_);
lean_ctor_set(v___x_767_, 0, v_a_719_);
v___x_865_ = v___x_767_;
goto v_reusejp_864_;
}
else
{
lean_object* v_reuseFailAlloc_869_; 
v_reuseFailAlloc_869_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_869_, 0, v_a_719_);
lean_ctor_set(v_reuseFailAlloc_869_, 1, v_a_860_);
v___x_865_ = v_reuseFailAlloc_869_;
goto v_reusejp_864_;
}
v_reusejp_864_:
{
lean_object* v___x_867_; 
if (v_isShared_863_ == 0)
{
lean_ctor_set(v___x_862_, 0, v___x_865_);
v___x_867_ = v___x_862_;
goto v_reusejp_866_;
}
else
{
lean_object* v_reuseFailAlloc_868_; 
v_reuseFailAlloc_868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_868_, 0, v___x_865_);
v___x_867_ = v_reuseFailAlloc_868_;
goto v_reusejp_866_;
}
v_reusejp_866_:
{
return v___x_867_;
}
}
}
}
else
{
lean_object* v_a_871_; lean_object* v___x_873_; uint8_t v_isShared_874_; uint8_t v_isSharedCheck_878_; 
lean_del_object(v___x_767_);
lean_dec(v_a_719_);
v_a_871_ = lean_ctor_get(v___x_859_, 0);
v_isSharedCheck_878_ = !lean_is_exclusive(v___x_859_);
if (v_isSharedCheck_878_ == 0)
{
v___x_873_ = v___x_859_;
v_isShared_874_ = v_isSharedCheck_878_;
goto v_resetjp_872_;
}
else
{
lean_inc(v_a_871_);
lean_dec(v___x_859_);
v___x_873_ = lean_box(0);
v_isShared_874_ = v_isSharedCheck_878_;
goto v_resetjp_872_;
}
v_resetjp_872_:
{
lean_object* v___x_876_; 
if (v_isShared_874_ == 0)
{
v___x_876_ = v___x_873_;
goto v_reusejp_875_;
}
else
{
lean_object* v_reuseFailAlloc_877_; 
v_reuseFailAlloc_877_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_877_, 0, v_a_871_);
v___x_876_ = v_reuseFailAlloc_877_;
goto v_reusejp_875_;
}
v_reusejp_875_:
{
return v___x_876_;
}
}
}
}
}
}
else
{
lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; 
v___x_879_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__11));
lean_inc(v_a_719_);
v___x_880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_880_, 0, v_a_719_);
v___x_881_ = lean_mk_empty_array_with_capacity(v___x_770_);
v___x_882_ = lean_array_push(v___x_881_, v___x_880_);
v___x_883_ = l_Lean_Meta_mkAppOptM(v___x_879_, v___x_882_, v_a_713_, v_a_714_, v_a_715_, v_a_716_);
if (lean_obj_tag(v___x_883_) == 0)
{
lean_object* v_a_884_; lean_object* v___x_886_; uint8_t v_isShared_887_; uint8_t v_isSharedCheck_894_; 
v_a_884_ = lean_ctor_get(v___x_883_, 0);
v_isSharedCheck_894_ = !lean_is_exclusive(v___x_883_);
if (v_isSharedCheck_894_ == 0)
{
v___x_886_ = v___x_883_;
v_isShared_887_ = v_isSharedCheck_894_;
goto v_resetjp_885_;
}
else
{
lean_inc(v_a_884_);
lean_dec(v___x_883_);
v___x_886_ = lean_box(0);
v_isShared_887_ = v_isSharedCheck_894_;
goto v_resetjp_885_;
}
v_resetjp_885_:
{
lean_object* v___x_889_; 
if (v_isShared_768_ == 0)
{
lean_ctor_set(v___x_767_, 1, v_a_884_);
lean_ctor_set(v___x_767_, 0, v_a_719_);
v___x_889_ = v___x_767_;
goto v_reusejp_888_;
}
else
{
lean_object* v_reuseFailAlloc_893_; 
v_reuseFailAlloc_893_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_893_, 0, v_a_719_);
lean_ctor_set(v_reuseFailAlloc_893_, 1, v_a_884_);
v___x_889_ = v_reuseFailAlloc_893_;
goto v_reusejp_888_;
}
v_reusejp_888_:
{
lean_object* v___x_891_; 
if (v_isShared_887_ == 0)
{
lean_ctor_set(v___x_886_, 0, v___x_889_);
v___x_891_ = v___x_886_;
goto v_reusejp_890_;
}
else
{
lean_object* v_reuseFailAlloc_892_; 
v_reuseFailAlloc_892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_892_, 0, v___x_889_);
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
else
{
lean_object* v_a_895_; lean_object* v___x_897_; uint8_t v_isShared_898_; uint8_t v_isSharedCheck_902_; 
lean_del_object(v___x_767_);
lean_dec(v_a_719_);
v_a_895_ = lean_ctor_get(v___x_883_, 0);
v_isSharedCheck_902_ = !lean_is_exclusive(v___x_883_);
if (v_isSharedCheck_902_ == 0)
{
v___x_897_ = v___x_883_;
v_isShared_898_ = v_isSharedCheck_902_;
goto v_resetjp_896_;
}
else
{
lean_inc(v_a_895_);
lean_dec(v___x_883_);
v___x_897_ = lean_box(0);
v_isShared_898_ = v_isSharedCheck_902_;
goto v_resetjp_896_;
}
v_resetjp_896_:
{
lean_object* v___x_900_; 
if (v_isShared_898_ == 0)
{
v___x_900_ = v___x_897_;
goto v_reusejp_899_;
}
else
{
lean_object* v_reuseFailAlloc_901_; 
v_reuseFailAlloc_901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_901_, 0, v_a_895_);
v___x_900_ = v_reuseFailAlloc_901_;
goto v_reusejp_899_;
}
v_reusejp_899_:
{
return v___x_900_;
}
}
}
}
}
else
{
lean_object* v_val_903_; lean_object* v___x_905_; 
lean_del_object(v___x_767_);
lean_dec(v_a_719_);
v_val_903_ = lean_ctor_get(v_fst_765_, 0);
lean_inc(v_val_903_);
lean_dec_ref_known(v_fst_765_, 1);
if (v_isShared_764_ == 0)
{
lean_ctor_set(v___x_763_, 0, v_val_903_);
v___x_905_ = v___x_763_;
goto v_reusejp_904_;
}
else
{
lean_object* v_reuseFailAlloc_906_; 
v_reuseFailAlloc_906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_906_, 0, v_val_903_);
v___x_905_ = v_reuseFailAlloc_906_;
goto v_reusejp_904_;
}
v_reusejp_904_:
{
return v___x_905_;
}
}
}
}
}
else
{
lean_object* v_a_910_; lean_object* v___x_912_; uint8_t v_isShared_913_; uint8_t v_isSharedCheck_917_; 
lean_dec(v_a_719_);
v_a_910_ = lean_ctor_get(v___x_760_, 0);
v_isSharedCheck_917_ = !lean_is_exclusive(v___x_760_);
if (v_isSharedCheck_917_ == 0)
{
v___x_912_ = v___x_760_;
v_isShared_913_ = v_isSharedCheck_917_;
goto v_resetjp_911_;
}
else
{
lean_inc(v_a_910_);
lean_dec(v___x_760_);
v___x_912_ = lean_box(0);
v_isShared_913_ = v_isSharedCheck_917_;
goto v_resetjp_911_;
}
v_resetjp_911_:
{
lean_object* v___x_915_; 
if (v_isShared_913_ == 0)
{
v___x_915_ = v___x_912_;
goto v_reusejp_914_;
}
else
{
lean_object* v_reuseFailAlloc_916_; 
v_reuseFailAlloc_916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_916_, 0, v_a_910_);
v___x_915_ = v_reuseFailAlloc_916_;
goto v_reusejp_914_;
}
v_reusejp_914_:
{
return v___x_915_;
}
}
}
}
}
else
{
lean_object* v_a_918_; lean_object* v___x_920_; uint8_t v_isShared_921_; uint8_t v_isSharedCheck_925_; 
lean_dec(v_a_719_);
v_a_918_ = lean_ctor_get(v___x_720_, 0);
v_isSharedCheck_925_ = !lean_is_exclusive(v___x_720_);
if (v_isSharedCheck_925_ == 0)
{
v___x_920_ = v___x_720_;
v_isShared_921_ = v_isSharedCheck_925_;
goto v_resetjp_919_;
}
else
{
lean_inc(v_a_918_);
lean_dec(v___x_720_);
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
v_a_926_ = lean_ctor_get(v___x_718_, 0);
v_isSharedCheck_933_ = !lean_is_exclusive(v___x_718_);
if (v_isSharedCheck_933_ == 0)
{
v___x_928_ = v___x_718_;
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
else
{
lean_inc(v_a_926_);
lean_dec(v___x_718_);
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
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_toNNF___lam__0(lean_object* v_body_934_, lean_object* v___x_935_, uint8_t v___x_936_, uint8_t v___x_937_, lean_object* v_x_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_){
_start:
{
lean_object* v___x_946_; lean_object* v___x_947_; 
v___x_946_ = lean_expr_instantiate1(v_body_934_, v_x_938_);
v___x_947_ = lp_vampireReplay_Vampire_Reconstruct_toNNF(v___x_946_, v___y_939_, v___y_940_, v___y_941_, v___y_942_, v___y_943_, v___y_944_);
if (lean_obj_tag(v___x_947_) == 0)
{
lean_object* v_a_948_; lean_object* v_fst_949_; lean_object* v_snd_950_; lean_object* v___x_952_; uint8_t v_isShared_953_; uint8_t v_isSharedCheck_999_; 
v_a_948_ = lean_ctor_get(v___x_947_, 0);
lean_inc(v_a_948_);
lean_dec_ref_known(v___x_947_, 1);
v_fst_949_ = lean_ctor_get(v_a_948_, 0);
v_snd_950_ = lean_ctor_get(v_a_948_, 1);
v_isSharedCheck_999_ = !lean_is_exclusive(v_a_948_);
if (v_isSharedCheck_999_ == 0)
{
v___x_952_ = v_a_948_;
v_isShared_953_ = v_isSharedCheck_999_;
goto v_resetjp_951_;
}
else
{
lean_inc(v_snd_950_);
lean_inc(v_fst_949_);
lean_dec(v_a_948_);
v___x_952_ = lean_box(0);
v_isShared_953_ = v_isSharedCheck_999_;
goto v_resetjp_951_;
}
v_resetjp_951_:
{
lean_object* v___x_954_; lean_object* v___x_955_; uint8_t v___x_956_; lean_object* v___x_957_; 
v___x_954_ = lean_mk_empty_array_with_capacity(v___x_935_);
lean_inc_ref(v___x_954_);
v___x_955_ = lean_array_push(v___x_954_, v_x_938_);
v___x_956_ = 1;
v___x_957_ = l_Lean_Meta_mkForallFVars(v___x_955_, v_fst_949_, v___x_936_, v___x_937_, v___x_937_, v___x_956_, v___y_941_, v___y_942_, v___y_943_, v___y_944_);
if (lean_obj_tag(v___x_957_) == 0)
{
lean_object* v_a_958_; lean_object* v___x_959_; 
v_a_958_ = lean_ctor_get(v___x_957_, 0);
lean_inc(v_a_958_);
lean_dec_ref_known(v___x_957_, 1);
v___x_959_ = l_Lean_Meta_mkLambdaFVars(v___x_955_, v_snd_950_, v___x_936_, v___x_937_, v___x_936_, v___x_937_, v___x_956_, v___y_941_, v___y_942_, v___y_943_, v___y_944_);
lean_dec_ref(v___x_955_);
if (lean_obj_tag(v___x_959_) == 0)
{
lean_object* v_a_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; 
v_a_960_ = lean_ctor_get(v___x_959_, 0);
lean_inc(v_a_960_);
lean_dec_ref_known(v___x_959_, 1);
v___x_961_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_toNNF___lam__0___closed__1));
v___x_962_ = lean_array_push(v___x_954_, v_a_960_);
v___x_963_ = l_Lean_Meta_mkAppM(v___x_961_, v___x_962_, v___y_941_, v___y_942_, v___y_943_, v___y_944_);
if (lean_obj_tag(v___x_963_) == 0)
{
lean_object* v_a_964_; lean_object* v___x_966_; uint8_t v_isShared_967_; uint8_t v_isSharedCheck_974_; 
v_a_964_ = lean_ctor_get(v___x_963_, 0);
v_isSharedCheck_974_ = !lean_is_exclusive(v___x_963_);
if (v_isSharedCheck_974_ == 0)
{
v___x_966_ = v___x_963_;
v_isShared_967_ = v_isSharedCheck_974_;
goto v_resetjp_965_;
}
else
{
lean_inc(v_a_964_);
lean_dec(v___x_963_);
v___x_966_ = lean_box(0);
v_isShared_967_ = v_isSharedCheck_974_;
goto v_resetjp_965_;
}
v_resetjp_965_:
{
lean_object* v___x_969_; 
if (v_isShared_953_ == 0)
{
lean_ctor_set(v___x_952_, 1, v_a_964_);
lean_ctor_set(v___x_952_, 0, v_a_958_);
v___x_969_ = v___x_952_;
goto v_reusejp_968_;
}
else
{
lean_object* v_reuseFailAlloc_973_; 
v_reuseFailAlloc_973_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_973_, 0, v_a_958_);
lean_ctor_set(v_reuseFailAlloc_973_, 1, v_a_964_);
v___x_969_ = v_reuseFailAlloc_973_;
goto v_reusejp_968_;
}
v_reusejp_968_:
{
lean_object* v___x_971_; 
if (v_isShared_967_ == 0)
{
lean_ctor_set(v___x_966_, 0, v___x_969_);
v___x_971_ = v___x_966_;
goto v_reusejp_970_;
}
else
{
lean_object* v_reuseFailAlloc_972_; 
v_reuseFailAlloc_972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_972_, 0, v___x_969_);
v___x_971_ = v_reuseFailAlloc_972_;
goto v_reusejp_970_;
}
v_reusejp_970_:
{
return v___x_971_;
}
}
}
}
else
{
lean_object* v_a_975_; lean_object* v___x_977_; uint8_t v_isShared_978_; uint8_t v_isSharedCheck_982_; 
lean_dec(v_a_958_);
lean_del_object(v___x_952_);
v_a_975_ = lean_ctor_get(v___x_963_, 0);
v_isSharedCheck_982_ = !lean_is_exclusive(v___x_963_);
if (v_isSharedCheck_982_ == 0)
{
v___x_977_ = v___x_963_;
v_isShared_978_ = v_isSharedCheck_982_;
goto v_resetjp_976_;
}
else
{
lean_inc(v_a_975_);
lean_dec(v___x_963_);
v___x_977_ = lean_box(0);
v_isShared_978_ = v_isSharedCheck_982_;
goto v_resetjp_976_;
}
v_resetjp_976_:
{
lean_object* v___x_980_; 
if (v_isShared_978_ == 0)
{
v___x_980_ = v___x_977_;
goto v_reusejp_979_;
}
else
{
lean_object* v_reuseFailAlloc_981_; 
v_reuseFailAlloc_981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_981_, 0, v_a_975_);
v___x_980_ = v_reuseFailAlloc_981_;
goto v_reusejp_979_;
}
v_reusejp_979_:
{
return v___x_980_;
}
}
}
}
else
{
lean_object* v_a_983_; lean_object* v___x_985_; uint8_t v_isShared_986_; uint8_t v_isSharedCheck_990_; 
lean_dec(v_a_958_);
lean_dec_ref(v___x_954_);
lean_del_object(v___x_952_);
v_a_983_ = lean_ctor_get(v___x_959_, 0);
v_isSharedCheck_990_ = !lean_is_exclusive(v___x_959_);
if (v_isSharedCheck_990_ == 0)
{
v___x_985_ = v___x_959_;
v_isShared_986_ = v_isSharedCheck_990_;
goto v_resetjp_984_;
}
else
{
lean_inc(v_a_983_);
lean_dec(v___x_959_);
v___x_985_ = lean_box(0);
v_isShared_986_ = v_isSharedCheck_990_;
goto v_resetjp_984_;
}
v_resetjp_984_:
{
lean_object* v___x_988_; 
if (v_isShared_986_ == 0)
{
v___x_988_ = v___x_985_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v_a_983_);
v___x_988_ = v_reuseFailAlloc_989_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
return v___x_988_;
}
}
}
}
else
{
lean_object* v_a_991_; lean_object* v___x_993_; uint8_t v_isShared_994_; uint8_t v_isSharedCheck_998_; 
lean_dec_ref(v___x_955_);
lean_dec_ref(v___x_954_);
lean_del_object(v___x_952_);
lean_dec(v_snd_950_);
v_a_991_ = lean_ctor_get(v___x_957_, 0);
v_isSharedCheck_998_ = !lean_is_exclusive(v___x_957_);
if (v_isSharedCheck_998_ == 0)
{
v___x_993_ = v___x_957_;
v_isShared_994_ = v_isSharedCheck_998_;
goto v_resetjp_992_;
}
else
{
lean_inc(v_a_991_);
lean_dec(v___x_957_);
v___x_993_ = lean_box(0);
v_isShared_994_ = v_isSharedCheck_998_;
goto v_resetjp_992_;
}
v_resetjp_992_:
{
lean_object* v___x_996_; 
if (v_isShared_994_ == 0)
{
v___x_996_ = v___x_993_;
goto v_reusejp_995_;
}
else
{
lean_object* v_reuseFailAlloc_997_; 
v_reuseFailAlloc_997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_997_, 0, v_a_991_);
v___x_996_ = v_reuseFailAlloc_997_;
goto v_reusejp_995_;
}
v_reusejp_995_:
{
return v___x_996_;
}
}
}
}
}
else
{
lean_dec_ref(v_x_938_);
return v___x_947_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_toNNF_spec__0___redArg___boxed(lean_object* v_a_1000_, lean_object* v_as_x27_1001_, lean_object* v_b_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_){
_start:
{
lean_object* v_res_1010_; 
v_res_1010_ = lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_toNNF_spec__0___redArg(v_a_1000_, v_as_x27_1001_, v_b_1002_, v___y_1003_, v___y_1004_, v___y_1005_, v___y_1006_, v___y_1007_, v___y_1008_);
lean_dec(v___y_1008_);
lean_dec_ref(v___y_1007_);
lean_dec(v___y_1006_);
lean_dec_ref(v___y_1005_);
lean_dec(v___y_1004_);
lean_dec_ref(v___y_1003_);
lean_dec(v_as_x27_1001_);
lean_dec_ref(v_a_1000_);
return v_res_1010_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_toNNF___boxed(lean_object* v_e_1011_, lean_object* v_a_1012_, lean_object* v_a_1013_, lean_object* v_a_1014_, lean_object* v_a_1015_, lean_object* v_a_1016_, lean_object* v_a_1017_, lean_object* v_a_1018_){
_start:
{
lean_object* v_res_1019_; 
v_res_1019_ = lp_vampireReplay_Vampire_Reconstruct_toNNF(v_e_1011_, v_a_1012_, v_a_1013_, v_a_1014_, v_a_1015_, v_a_1016_, v_a_1017_);
lean_dec(v_a_1017_);
lean_dec_ref(v_a_1016_);
lean_dec(v_a_1015_);
lean_dec_ref(v_a_1014_);
lean_dec(v_a_1013_);
lean_dec_ref(v_a_1012_);
return v_res_1019_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_toNNF_spec__0(lean_object* v_a_1020_, lean_object* v_as_1021_, lean_object* v_as_x27_1022_, lean_object* v_b_1023_, lean_object* v_a_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_){
_start:
{
lean_object* v___x_1032_; 
v___x_1032_ = lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_toNNF_spec__0___redArg(v_a_1020_, v_as_x27_1022_, v_b_1023_, v___y_1025_, v___y_1026_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_);
return v___x_1032_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_toNNF_spec__0___boxed(lean_object* v_a_1033_, lean_object* v_as_1034_, lean_object* v_as_x27_1035_, lean_object* v_b_1036_, lean_object* v_a_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_){
_start:
{
lean_object* v_res_1045_; 
v_res_1045_ = lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_toNNF_spec__0(v_a_1033_, v_as_1034_, v_as_x27_1035_, v_b_1036_, v_a_1037_, v___y_1038_, v___y_1039_, v___y_1040_, v___y_1041_, v___y_1042_, v___y_1043_);
lean_dec(v___y_1043_);
lean_dec_ref(v___y_1042_);
lean_dec(v___y_1041_);
lean_dec_ref(v___y_1040_);
lean_dec(v___y_1039_);
lean_dec_ref(v___y_1038_);
lean_dec(v_as_x27_1035_);
lean_dec(v_as_1034_);
lean_dec_ref(v_a_1033_);
return v_res_1045_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_implies___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1047_; lean_object* v___x_1048_; 
v___x_1047_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_implies___lam__0___closed__0));
v___x_1048_ = l_Lean_stringToMessageData(v___x_1047_);
return v___x_1048_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_implies___lam__0(lean_object* v_a_1049_, lean_object* v_i_1050_, lean_object* v_hi_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_){
_start:
{
lean_object* v___x_1059_; uint8_t v___x_1060_; 
v___x_1059_ = lean_array_get_size(v_a_1049_);
v___x_1060_ = lean_nat_dec_lt(v_i_1050_, v___x_1059_);
if (v___x_1060_ == 0)
{
lean_object* v___x_1061_; lean_object* v___x_1062_; 
lean_dec_ref(v_hi_1051_);
v___x_1061_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_implies___lam__0___closed__1, &lp_vampireReplay_Vampire_Reconstruct_implies___lam__0___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_implies___lam__0___closed__1);
v___x_1062_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1061_, v___y_1054_, v___y_1055_, v___y_1056_, v___y_1057_);
return v___x_1062_;
}
else
{
lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; 
v___x_1063_ = lean_array_fget_borrowed(v_a_1049_, v_i_1050_);
lean_inc(v___x_1063_);
v___x_1064_ = l_Lean_Expr_app___override(v___x_1063_, v_hi_1051_);
v___x_1065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1065_, 0, v___x_1064_);
return v___x_1065_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_implies___lam__0___boxed(lean_object* v_a_1066_, lean_object* v_i_1067_, lean_object* v_hi_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_){
_start:
{
lean_object* v_res_1076_; 
v_res_1076_ = lp_vampireReplay_Vampire_Reconstruct_implies___lam__0(v_a_1066_, v_i_1067_, v_hi_1068_, v___y_1069_, v___y_1070_, v___y_1071_, v___y_1072_, v___y_1073_, v___y_1074_);
lean_dec(v___y_1074_);
lean_dec_ref(v___y_1073_);
lean_dec(v___y_1072_);
lean_dec_ref(v___y_1071_);
lean_dec(v___y_1070_);
lean_dec_ref(v___y_1069_);
lean_dec(v_i_1067_);
lean_dec_ref(v_a_1066_);
return v_res_1076_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_implies___lam__1(lean_object* v_a_1077_, lean_object* v___x_1078_, lean_object* v___f_1079_, uint8_t v___x_1080_, uint8_t v___x_1081_, lean_object* v_h_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_){
_start:
{
lean_object* v___x_1090_; 
lean_inc_ref(v_h_1082_);
v___x_1090_ = lp_vampireReplay_Vampire_Reconstruct_elimParts(v_a_1077_, v___x_1078_, v___f_1079_, v_h_1082_, v___y_1083_, v___y_1084_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_);
if (lean_obj_tag(v___x_1090_) == 0)
{
lean_object* v_a_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; uint8_t v___x_1095_; lean_object* v___x_1096_; 
v_a_1091_ = lean_ctor_get(v___x_1090_, 0);
lean_inc(v_a_1091_);
lean_dec_ref_known(v___x_1090_, 1);
v___x_1092_ = lean_unsigned_to_nat(1u);
v___x_1093_ = lean_mk_empty_array_with_capacity(v___x_1092_);
v___x_1094_ = lean_array_push(v___x_1093_, v_h_1082_);
v___x_1095_ = 1;
v___x_1096_ = l_Lean_Meta_mkLambdaFVars(v___x_1094_, v_a_1091_, v___x_1080_, v___x_1081_, v___x_1080_, v___x_1081_, v___x_1095_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_);
lean_dec_ref(v___x_1094_);
return v___x_1096_;
}
else
{
lean_dec_ref(v_h_1082_);
return v___x_1090_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_implies___lam__1___boxed(lean_object* v_a_1097_, lean_object* v___x_1098_, lean_object* v___f_1099_, lean_object* v___x_1100_, lean_object* v___x_1101_, lean_object* v_h_1102_, lean_object* v___y_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_){
_start:
{
uint8_t v___x_49670__boxed_1110_; uint8_t v___x_49671__boxed_1111_; lean_object* v_res_1112_; 
v___x_49670__boxed_1110_ = lean_unbox(v___x_1100_);
v___x_49671__boxed_1111_ = lean_unbox(v___x_1101_);
v_res_1112_ = lp_vampireReplay_Vampire_Reconstruct_implies___lam__1(v_a_1097_, v___x_1098_, v___f_1099_, v___x_49670__boxed_1110_, v___x_49671__boxed_1111_, v_h_1102_, v___y_1103_, v___y_1104_, v___y_1105_, v___y_1106_, v___y_1107_, v___y_1108_);
lean_dec(v___y_1108_);
lean_dec_ref(v___y_1107_);
lean_dec(v___y_1106_);
lean_dec_ref(v___y_1105_);
lean_dec(v___y_1104_);
lean_dec_ref(v___y_1103_);
lean_dec_ref(v_a_1097_);
return v_res_1112_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_implies___lam__6(uint8_t v___x_1113_, lean_object* v_h_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_){
_start:
{
lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; uint8_t v___x_1125_; uint8_t v___x_1126_; lean_object* v___x_1127_; 
v___x_1122_ = lean_unsigned_to_nat(1u);
v___x_1123_ = lean_mk_empty_array_with_capacity(v___x_1122_);
lean_inc_ref(v_h_1114_);
v___x_1124_ = lean_array_push(v___x_1123_, v_h_1114_);
v___x_1125_ = 0;
v___x_1126_ = 1;
v___x_1127_ = l_Lean_Meta_mkLambdaFVars(v___x_1124_, v_h_1114_, v___x_1125_, v___x_1113_, v___x_1125_, v___x_1113_, v___x_1126_, v___y_1117_, v___y_1118_, v___y_1119_, v___y_1120_);
lean_dec_ref(v___x_1124_);
return v___x_1127_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_implies___lam__6___boxed(lean_object* v___x_1128_, lean_object* v_h_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_){
_start:
{
uint8_t v___x_49718__boxed_1137_; lean_object* v_res_1138_; 
v___x_49718__boxed_1137_ = lean_unbox(v___x_1128_);
v_res_1138_ = lp_vampireReplay_Vampire_Reconstruct_implies___lam__6(v___x_49718__boxed_1137_, v_h_1129_, v___y_1130_, v___y_1131_, v___y_1132_, v___y_1133_, v___y_1134_, v___y_1135_);
lean_dec(v___y_1135_);
lean_dec_ref(v___y_1134_);
lean_dec(v___y_1133_);
lean_dec_ref(v___y_1132_);
lean_dec(v___y_1131_);
lean_dec_ref(v___y_1130_);
return v_res_1138_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_implies___lam__4(lean_object* v_x_1139_, lean_object* v_a_1140_, uint8_t v_a_1141_, uint8_t v___x_1142_, lean_object* v_h_1143_, lean_object* v___y_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_){
_start:
{
lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; uint8_t v___x_1156_; lean_object* v___x_1157_; 
v___x_1151_ = lean_unsigned_to_nat(1u);
v___x_1152_ = lean_mk_empty_array_with_capacity(v___x_1151_);
lean_inc_ref(v_x_1139_);
lean_inc_ref(v___x_1152_);
v___x_1153_ = lean_array_push(v___x_1152_, v_x_1139_);
lean_inc_ref(v_h_1143_);
v___x_1154_ = l_Lean_Expr_app___override(v_h_1143_, v_x_1139_);
v___x_1155_ = l_Lean_Expr_app___override(v_a_1140_, v___x_1154_);
v___x_1156_ = 1;
v___x_1157_ = l_Lean_Meta_mkLambdaFVars(v___x_1153_, v___x_1155_, v_a_1141_, v___x_1142_, v_a_1141_, v___x_1142_, v___x_1156_, v___y_1146_, v___y_1147_, v___y_1148_, v___y_1149_);
lean_dec_ref(v___x_1153_);
if (lean_obj_tag(v___x_1157_) == 0)
{
lean_object* v_a_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; 
v_a_1158_ = lean_ctor_get(v___x_1157_, 0);
lean_inc(v_a_1158_);
lean_dec_ref_known(v___x_1157_, 1);
v___x_1159_ = lean_array_push(v___x_1152_, v_h_1143_);
v___x_1160_ = l_Lean_Meta_mkLambdaFVars(v___x_1159_, v_a_1158_, v_a_1141_, v___x_1142_, v_a_1141_, v___x_1142_, v___x_1156_, v___y_1146_, v___y_1147_, v___y_1148_, v___y_1149_);
lean_dec_ref(v___x_1159_);
return v___x_1160_;
}
else
{
lean_dec_ref(v___x_1152_);
lean_dec_ref(v_h_1143_);
return v___x_1157_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_implies___lam__4___boxed(lean_object* v_x_1161_, lean_object* v_a_1162_, lean_object* v_a_1163_, lean_object* v___x_1164_, lean_object* v_h_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_){
_start:
{
uint8_t v_a_49755__boxed_1173_; uint8_t v___x_49756__boxed_1174_; lean_object* v_res_1175_; 
v_a_49755__boxed_1173_ = lean_unbox(v_a_1163_);
v___x_49756__boxed_1174_ = lean_unbox(v___x_1164_);
v_res_1175_ = lp_vampireReplay_Vampire_Reconstruct_implies___lam__4(v_x_1161_, v_a_1162_, v_a_49755__boxed_1173_, v___x_49756__boxed_1174_, v_h_1165_, v___y_1166_, v___y_1167_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_);
lean_dec(v___y_1171_);
lean_dec_ref(v___y_1170_);
lean_dec(v___y_1169_);
lean_dec_ref(v___y_1168_);
lean_dec(v___y_1167_);
lean_dec_ref(v___y_1166_);
return v_res_1175_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_implies_spec__1(lean_object* v_as_1176_, size_t v_i_1177_, size_t v_stop_1178_, lean_object* v_b_1179_){
_start:
{
uint8_t v___x_1180_; 
v___x_1180_ = lean_usize_dec_eq(v_i_1177_, v_stop_1178_);
if (v___x_1180_ == 0)
{
lean_object* v___x_1181_; lean_object* v_fst_1182_; lean_object* v_snd_1183_; lean_object* v___x_1184_; size_t v___x_1185_; size_t v___x_1186_; 
v___x_1181_ = lean_array_uget_borrowed(v_as_1176_, v_i_1177_);
v_fst_1182_ = lean_ctor_get(v___x_1181_, 0);
v_snd_1183_ = lean_ctor_get(v___x_1181_, 1);
lean_inc(v_snd_1183_);
lean_inc(v_fst_1182_);
v___x_1184_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2___redArg(v_b_1179_, v_fst_1182_, v_snd_1183_);
v___x_1185_ = ((size_t)1ULL);
v___x_1186_ = lean_usize_add(v_i_1177_, v___x_1185_);
v_i_1177_ = v___x_1186_;
v_b_1179_ = v___x_1184_;
goto _start;
}
else
{
return v_b_1179_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_implies_spec__1___boxed(lean_object* v_as_1188_, lean_object* v_i_1189_, lean_object* v_stop_1190_, lean_object* v_b_1191_){
_start:
{
size_t v_i_boxed_1192_; size_t v_stop_boxed_1193_; lean_object* v_res_1194_; 
v_i_boxed_1192_ = lean_unbox_usize(v_i_1189_);
lean_dec(v_i_1189_);
v_stop_boxed_1193_ = lean_unbox_usize(v_stop_1190_);
lean_dec(v_stop_1190_);
v_res_1194_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_implies_spec__1(v_as_1188_, v_i_boxed_1192_, v_stop_boxed_1193_, v_b_1191_);
lean_dec_ref(v_as_1188_);
return v_res_1194_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_implies_spec__2___lam__0(lean_object* v___x_1195_, lean_object* v_a_1196_, lean_object* v_snd_1197_, uint8_t v___x_1198_, uint8_t v_a_1199_, lean_object* v_h_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_){
_start:
{
lean_object* v___x_1208_; 
lean_inc_ref(v_h_1200_);
v___x_1208_ = lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg(v___x_1195_, v_a_1196_, v_snd_1197_, v_h_1200_);
if (lean_obj_tag(v___x_1208_) == 0)
{
lean_object* v_a_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; uint8_t v___x_1213_; lean_object* v___x_1214_; 
v_a_1209_ = lean_ctor_get(v___x_1208_, 0);
lean_inc(v_a_1209_);
lean_dec_ref_known(v___x_1208_, 1);
v___x_1210_ = lean_unsigned_to_nat(1u);
v___x_1211_ = lean_mk_empty_array_with_capacity(v___x_1210_);
v___x_1212_ = lean_array_push(v___x_1211_, v_h_1200_);
v___x_1213_ = 1;
v___x_1214_ = l_Lean_Meta_mkLambdaFVars(v___x_1212_, v_a_1209_, v___x_1198_, v_a_1199_, v___x_1198_, v_a_1199_, v___x_1213_, v___y_1203_, v___y_1204_, v___y_1205_, v___y_1206_);
lean_dec_ref(v___x_1212_);
return v___x_1214_;
}
else
{
lean_dec_ref(v_h_1200_);
return v___x_1208_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_implies_spec__2___lam__0___boxed(lean_object* v___x_1215_, lean_object* v_a_1216_, lean_object* v_snd_1217_, lean_object* v___x_1218_, lean_object* v_a_1219_, lean_object* v_h_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_){
_start:
{
uint8_t v___x_49824__boxed_1228_; uint8_t v_a_49825__boxed_1229_; lean_object* v_res_1230_; 
v___x_49824__boxed_1228_ = lean_unbox(v___x_1218_);
v_a_49825__boxed_1229_ = lean_unbox(v_a_1219_);
v_res_1230_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_implies_spec__2___lam__0(v___x_1215_, v_a_1216_, v_snd_1217_, v___x_49824__boxed_1228_, v_a_49825__boxed_1229_, v_h_1220_, v___y_1221_, v___y_1222_, v___y_1223_, v___y_1224_, v___y_1225_, v___y_1226_);
lean_dec(v___y_1226_);
lean_dec_ref(v___y_1225_);
lean_dec(v___y_1224_);
lean_dec_ref(v___y_1223_);
lean_dec(v___y_1222_);
lean_dec_ref(v___y_1221_);
lean_dec(v___x_1215_);
return v_res_1230_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_implies_spec__2(lean_object* v_a_1237_, uint8_t v___x_1238_, lean_object* v_a_1239_, lean_object* v_as_1240_, size_t v_sz_1241_, size_t v_i_1242_, lean_object* v_b_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_){
_start:
{
uint8_t v___x_1251_; 
v___x_1251_ = lean_usize_dec_lt(v_i_1242_, v_sz_1241_);
if (v___x_1251_ == 0)
{
lean_object* v___x_1252_; 
lean_dec_ref(v_a_1239_);
lean_dec_ref(v_a_1237_);
v___x_1252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1252_, 0, v_b_1243_);
return v___x_1252_;
}
else
{
lean_object* v_a_1253_; lean_object* v_fst_1254_; lean_object* v_snd_1255_; lean_object* v___x_1257_; uint8_t v_isShared_1258_; uint8_t v_isSharedCheck_1300_; 
lean_dec_ref(v_b_1243_);
v_a_1253_ = lean_array_uget(v_as_1240_, v_i_1242_);
v_fst_1254_ = lean_ctor_get(v_a_1253_, 0);
v_snd_1255_ = lean_ctor_get(v_a_1253_, 1);
v_isSharedCheck_1300_ = !lean_is_exclusive(v_a_1253_);
if (v_isSharedCheck_1300_ == 0)
{
v___x_1257_ = v_a_1253_;
v_isShared_1258_ = v_isSharedCheck_1300_;
goto v_resetjp_1256_;
}
else
{
lean_inc(v_snd_1255_);
lean_inc(v_fst_1254_);
lean_dec(v_a_1253_);
v___x_1257_ = lean_box(0);
v_isShared_1258_ = v_isSharedCheck_1300_;
goto v_resetjp_1256_;
}
v_resetjp_1256_:
{
lean_object* v___x_1259_; 
lean_inc_ref(v_a_1239_);
v___x_1259_ = l_Lean_Meta_isExprDefEq(v_fst_1254_, v_a_1239_, v___y_1246_, v___y_1247_, v___y_1248_, v___y_1249_);
if (lean_obj_tag(v___x_1259_) == 0)
{
lean_object* v_a_1260_; lean_object* v___x_1261_; uint8_t v___x_1262_; 
v_a_1260_ = lean_ctor_get(v___x_1259_, 0);
lean_inc(v_a_1260_);
lean_dec_ref_known(v___x_1259_, 1);
v___x_1261_ = lean_box(0);
v___x_1262_ = lean_unbox(v_a_1260_);
if (v___x_1262_ == 0)
{
lean_object* v___x_1263_; size_t v___x_1264_; size_t v___x_1265_; 
lean_dec(v_a_1260_);
lean_del_object(v___x_1257_);
lean_dec(v_snd_1255_);
v___x_1263_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_implies_spec__2___closed__0));
v___x_1264_ = ((size_t)1ULL);
v___x_1265_ = lean_usize_add(v_i_1242_, v___x_1264_);
v_i_1242_ = v___x_1265_;
v_b_1243_ = v___x_1263_;
goto _start;
}
else
{
lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___f_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; 
lean_dec_ref(v_a_1239_);
v___x_1267_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__14));
v___x_1268_ = lean_box(v___x_1238_);
lean_inc_ref(v_a_1237_);
v___f_1269_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_implies_spec__2___lam__0___boxed), 13, 5);
lean_closure_set(v___f_1269_, 0, v___x_1267_);
lean_closure_set(v___f_1269_, 1, v_a_1237_);
lean_closure_set(v___f_1269_, 2, v_snd_1255_);
lean_closure_set(v___f_1269_, 3, v___x_1268_);
lean_closure_set(v___f_1269_, 4, v_a_1260_);
v___x_1270_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_implies_spec__2___closed__2));
v___x_1271_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_1270_, v_a_1237_, v___f_1269_, v___y_1244_, v___y_1245_, v___y_1246_, v___y_1247_, v___y_1248_, v___y_1249_);
if (lean_obj_tag(v___x_1271_) == 0)
{
lean_object* v_a_1272_; lean_object* v___x_1274_; uint8_t v_isShared_1275_; uint8_t v_isSharedCheck_1283_; 
v_a_1272_ = lean_ctor_get(v___x_1271_, 0);
v_isSharedCheck_1283_ = !lean_is_exclusive(v___x_1271_);
if (v_isSharedCheck_1283_ == 0)
{
v___x_1274_ = v___x_1271_;
v_isShared_1275_ = v_isSharedCheck_1283_;
goto v_resetjp_1273_;
}
else
{
lean_inc(v_a_1272_);
lean_dec(v___x_1271_);
v___x_1274_ = lean_box(0);
v_isShared_1275_ = v_isSharedCheck_1283_;
goto v_resetjp_1273_;
}
v_resetjp_1273_:
{
lean_object* v___x_1276_; lean_object* v___x_1278_; 
v___x_1276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1276_, 0, v_a_1272_);
if (v_isShared_1258_ == 0)
{
lean_ctor_set(v___x_1257_, 1, v___x_1261_);
lean_ctor_set(v___x_1257_, 0, v___x_1276_);
v___x_1278_ = v___x_1257_;
goto v_reusejp_1277_;
}
else
{
lean_object* v_reuseFailAlloc_1282_; 
v_reuseFailAlloc_1282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1282_, 0, v___x_1276_);
lean_ctor_set(v_reuseFailAlloc_1282_, 1, v___x_1261_);
v___x_1278_ = v_reuseFailAlloc_1282_;
goto v_reusejp_1277_;
}
v_reusejp_1277_:
{
lean_object* v___x_1280_; 
if (v_isShared_1275_ == 0)
{
lean_ctor_set(v___x_1274_, 0, v___x_1278_);
v___x_1280_ = v___x_1274_;
goto v_reusejp_1279_;
}
else
{
lean_object* v_reuseFailAlloc_1281_; 
v_reuseFailAlloc_1281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1281_, 0, v___x_1278_);
v___x_1280_ = v_reuseFailAlloc_1281_;
goto v_reusejp_1279_;
}
v_reusejp_1279_:
{
return v___x_1280_;
}
}
}
}
else
{
lean_object* v_a_1284_; lean_object* v___x_1286_; uint8_t v_isShared_1287_; uint8_t v_isSharedCheck_1291_; 
lean_del_object(v___x_1257_);
v_a_1284_ = lean_ctor_get(v___x_1271_, 0);
v_isSharedCheck_1291_ = !lean_is_exclusive(v___x_1271_);
if (v_isSharedCheck_1291_ == 0)
{
v___x_1286_ = v___x_1271_;
v_isShared_1287_ = v_isSharedCheck_1291_;
goto v_resetjp_1285_;
}
else
{
lean_inc(v_a_1284_);
lean_dec(v___x_1271_);
v___x_1286_ = lean_box(0);
v_isShared_1287_ = v_isSharedCheck_1291_;
goto v_resetjp_1285_;
}
v_resetjp_1285_:
{
lean_object* v___x_1289_; 
if (v_isShared_1287_ == 0)
{
v___x_1289_ = v___x_1286_;
goto v_reusejp_1288_;
}
else
{
lean_object* v_reuseFailAlloc_1290_; 
v_reuseFailAlloc_1290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1290_, 0, v_a_1284_);
v___x_1289_ = v_reuseFailAlloc_1290_;
goto v_reusejp_1288_;
}
v_reusejp_1288_:
{
return v___x_1289_;
}
}
}
}
}
else
{
lean_object* v_a_1292_; lean_object* v___x_1294_; uint8_t v_isShared_1295_; uint8_t v_isSharedCheck_1299_; 
lean_del_object(v___x_1257_);
lean_dec(v_snd_1255_);
lean_dec_ref(v_a_1239_);
lean_dec_ref(v_a_1237_);
v_a_1292_ = lean_ctor_get(v___x_1259_, 0);
v_isSharedCheck_1299_ = !lean_is_exclusive(v___x_1259_);
if (v_isSharedCheck_1299_ == 0)
{
v___x_1294_ = v___x_1259_;
v_isShared_1295_ = v_isSharedCheck_1299_;
goto v_resetjp_1293_;
}
else
{
lean_inc(v_a_1292_);
lean_dec(v___x_1259_);
v___x_1294_ = lean_box(0);
v_isShared_1295_ = v_isSharedCheck_1299_;
goto v_resetjp_1293_;
}
v_resetjp_1293_:
{
lean_object* v___x_1297_; 
if (v_isShared_1295_ == 0)
{
v___x_1297_ = v___x_1294_;
goto v_reusejp_1296_;
}
else
{
lean_object* v_reuseFailAlloc_1298_; 
v_reuseFailAlloc_1298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1298_, 0, v_a_1292_);
v___x_1297_ = v_reuseFailAlloc_1298_;
goto v_reusejp_1296_;
}
v_reusejp_1296_:
{
return v___x_1297_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_implies_spec__2___boxed(lean_object* v_a_1301_, lean_object* v___x_1302_, lean_object* v_a_1303_, lean_object* v_as_1304_, lean_object* v_sz_1305_, lean_object* v_i_1306_, lean_object* v_b_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_){
_start:
{
uint8_t v___x_49888__boxed_1315_; size_t v_sz_boxed_1316_; size_t v_i_boxed_1317_; lean_object* v_res_1318_; 
v___x_49888__boxed_1315_ = lean_unbox(v___x_1302_);
v_sz_boxed_1316_ = lean_unbox_usize(v_sz_1305_);
lean_dec(v_sz_1305_);
v_i_boxed_1317_ = lean_unbox_usize(v_i_1306_);
lean_dec(v_i_1306_);
v_res_1318_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_implies_spec__2(v_a_1301_, v___x_49888__boxed_1315_, v_a_1303_, v_as_1304_, v_sz_boxed_1316_, v_i_boxed_1317_, v_b_1307_, v___y_1308_, v___y_1309_, v___y_1310_, v___y_1311_, v___y_1312_, v___y_1313_);
lean_dec(v___y_1313_);
lean_dec_ref(v___y_1312_);
lean_dec(v___y_1311_);
lean_dec_ref(v___y_1310_);
lean_dec(v___y_1309_);
lean_dec_ref(v___y_1308_);
lean_dec_ref(v_as_1304_);
return v_res_1318_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__3(lean_object* v___x_1323_, lean_object* v_a_1324_, lean_object* v___x_1325_, lean_object* v___x_1326_, uint8_t v___x_1327_, uint8_t v___x_1328_, lean_object* v_l_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_){
_start:
{
lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; 
v___x_1337_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__3___closed__1));
v___x_1338_ = lean_box(0);
v___x_1339_ = l_Lean_Expr_const___override(v___x_1323_, v___x_1338_);
v___x_1340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1340_, 0, v___x_1339_);
v___x_1341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1341_, 0, v_a_1324_);
v___x_1342_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__3___closed__2));
v___x_1343_ = l_Lean_Name_mkStr2(v___x_1325_, v___x_1342_);
v___x_1344_ = l_Lean_Expr_const___override(v___x_1343_, v___x_1338_);
v___x_1345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1345_, 0, v___x_1344_);
lean_inc_ref(v_l_1329_);
v___x_1346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1346_, 0, v_l_1329_);
v___x_1347_ = lean_unsigned_to_nat(4u);
v___x_1348_ = lean_mk_empty_array_with_capacity(v___x_1347_);
v___x_1349_ = lean_array_push(v___x_1348_, v___x_1340_);
v___x_1350_ = lean_array_push(v___x_1349_, v___x_1341_);
v___x_1351_ = lean_array_push(v___x_1350_, v___x_1345_);
v___x_1352_ = lean_array_push(v___x_1351_, v___x_1346_);
v___x_1353_ = l_Lean_Meta_mkAppOptM(v___x_1337_, v___x_1352_, v___y_1332_, v___y_1333_, v___y_1334_, v___y_1335_);
if (lean_obj_tag(v___x_1353_) == 0)
{
lean_object* v_a_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; uint8_t v___x_1357_; lean_object* v___x_1358_; 
v_a_1354_ = lean_ctor_get(v___x_1353_, 0);
lean_inc(v_a_1354_);
lean_dec_ref_known(v___x_1353_, 1);
v___x_1355_ = lean_mk_empty_array_with_capacity(v___x_1326_);
v___x_1356_ = lean_array_push(v___x_1355_, v_l_1329_);
v___x_1357_ = 1;
v___x_1358_ = l_Lean_Meta_mkLambdaFVars(v___x_1356_, v_a_1354_, v___x_1327_, v___x_1328_, v___x_1327_, v___x_1328_, v___x_1357_, v___y_1332_, v___y_1333_, v___y_1334_, v___y_1335_);
lean_dec_ref(v___x_1356_);
return v___x_1358_;
}
else
{
lean_dec_ref(v_l_1329_);
return v___x_1353_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__3___boxed(lean_object* v___x_1359_, lean_object* v_a_1360_, lean_object* v___x_1361_, lean_object* v___x_1362_, lean_object* v___x_1363_, lean_object* v___x_1364_, lean_object* v_l_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_){
_start:
{
uint8_t v___x_50033__boxed_1373_; uint8_t v___x_50034__boxed_1374_; lean_object* v_res_1375_; 
v___x_50033__boxed_1373_ = lean_unbox(v___x_1363_);
v___x_50034__boxed_1374_ = lean_unbox(v___x_1364_);
v_res_1375_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__3(v___x_1359_, v_a_1360_, v___x_1361_, v___x_1362_, v___x_50033__boxed_1373_, v___x_50034__boxed_1374_, v_l_1365_, v___y_1366_, v___y_1367_, v___y_1368_, v___y_1369_, v___y_1370_, v___y_1371_);
lean_dec(v___y_1371_);
lean_dec_ref(v___y_1370_);
lean_dec(v___y_1369_);
lean_dec_ref(v___y_1368_);
lean_dec(v___y_1367_);
lean_dec_ref(v___y_1366_);
lean_dec(v___x_1362_);
return v_res_1375_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__5(lean_object* v___x_1377_, lean_object* v___x_1378_, lean_object* v_l_1379_, uint8_t v___x_1380_, uint8_t v___x_1381_, lean_object* v_e_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_){
_start:
{
lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; 
v___x_1390_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__5___closed__0));
v___x_1391_ = l_Lean_Name_mkStr2(v___x_1377_, v___x_1390_);
v___x_1392_ = lean_mk_empty_array_with_capacity(v___x_1378_);
v___x_1393_ = lean_array_push(v___x_1392_, v_e_1382_);
lean_inc_ref(v___x_1393_);
v___x_1394_ = l_Lean_Meta_mkAppM(v___x_1391_, v___x_1393_, v___y_1385_, v___y_1386_, v___y_1387_, v___y_1388_);
if (lean_obj_tag(v___x_1394_) == 0)
{
lean_object* v_a_1395_; lean_object* v___x_1396_; uint8_t v___x_1397_; lean_object* v___x_1398_; 
v_a_1395_ = lean_ctor_get(v___x_1394_, 0);
lean_inc(v_a_1395_);
lean_dec_ref_known(v___x_1394_, 1);
v___x_1396_ = l_Lean_Expr_app___override(v_l_1379_, v_a_1395_);
v___x_1397_ = 1;
v___x_1398_ = l_Lean_Meta_mkLambdaFVars(v___x_1393_, v___x_1396_, v___x_1380_, v___x_1381_, v___x_1380_, v___x_1381_, v___x_1397_, v___y_1385_, v___y_1386_, v___y_1387_, v___y_1388_);
lean_dec_ref(v___x_1393_);
return v___x_1398_;
}
else
{
lean_dec_ref(v___x_1393_);
lean_dec_ref(v_l_1379_);
return v___x_1394_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__5___boxed(lean_object* v___x_1399_, lean_object* v___x_1400_, lean_object* v_l_1401_, lean_object* v___x_1402_, lean_object* v___x_1403_, lean_object* v_e_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_){
_start:
{
uint8_t v___x_50121__boxed_1412_; uint8_t v___x_50122__boxed_1413_; lean_object* v_res_1414_; 
v___x_50121__boxed_1412_ = lean_unbox(v___x_1402_);
v___x_50122__boxed_1413_ = lean_unbox(v___x_1403_);
v_res_1414_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__5(v___x_1399_, v___x_1400_, v_l_1401_, v___x_50121__boxed_1412_, v___x_50122__boxed_1413_, v_e_1404_, v___y_1405_, v___y_1406_, v___y_1407_, v___y_1408_, v___y_1409_, v___y_1410_);
lean_dec(v___y_1410_);
lean_dec_ref(v___y_1409_);
lean_dec(v___y_1408_);
lean_dec_ref(v___y_1407_);
lean_dec(v___y_1406_);
lean_dec_ref(v___y_1405_);
lean_dec(v___x_1400_);
return v_res_1414_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__6(lean_object* v___x_1418_, lean_object* v___x_1419_, uint8_t v___x_1420_, uint8_t v___x_1421_, lean_object* v_a_1422_, lean_object* v___x_1423_, lean_object* v_a_1424_, lean_object* v_val_1425_, lean_object* v_l_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_){
_start:
{
lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___f_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; 
v___x_1434_ = lean_box(v___x_1420_);
v___x_1435_ = lean_box(v___x_1421_);
lean_inc_ref(v_l_1426_);
lean_inc(v___x_1419_);
v___f_1436_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__5___boxed), 13, 5);
lean_closure_set(v___f_1436_, 0, v___x_1418_);
lean_closure_set(v___f_1436_, 1, v___x_1419_);
lean_closure_set(v___f_1436_, 2, v_l_1426_);
lean_closure_set(v___f_1436_, 3, v___x_1434_);
lean_closure_set(v___f_1436_, 4, v___x_1435_);
v___x_1437_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__6___closed__1));
v___x_1438_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_1437_, v_a_1422_, v___f_1436_, v___y_1427_, v___y_1428_, v___y_1429_, v___y_1430_, v___y_1431_, v___y_1432_);
if (lean_obj_tag(v___x_1438_) == 0)
{
lean_object* v_a_1439_; lean_object* v___x_1440_; 
v_a_1439_ = lean_ctor_get(v___x_1438_, 0);
lean_inc(v_a_1439_);
lean_dec_ref_known(v___x_1438_, 1);
v___x_1440_ = lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg(v___x_1423_, v_a_1424_, v_val_1425_, v_a_1439_);
if (lean_obj_tag(v___x_1440_) == 0)
{
lean_object* v_a_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; uint8_t v___x_1444_; lean_object* v___x_1445_; 
v_a_1441_ = lean_ctor_get(v___x_1440_, 0);
lean_inc(v_a_1441_);
lean_dec_ref_known(v___x_1440_, 1);
v___x_1442_ = lean_mk_empty_array_with_capacity(v___x_1419_);
lean_dec(v___x_1419_);
v___x_1443_ = lean_array_push(v___x_1442_, v_l_1426_);
v___x_1444_ = 1;
v___x_1445_ = l_Lean_Meta_mkLambdaFVars(v___x_1443_, v_a_1441_, v___x_1420_, v___x_1421_, v___x_1420_, v___x_1421_, v___x_1444_, v___y_1429_, v___y_1430_, v___y_1431_, v___y_1432_);
lean_dec_ref(v___x_1443_);
return v___x_1445_;
}
else
{
lean_dec_ref(v_l_1426_);
lean_dec(v___x_1419_);
return v___x_1440_;
}
}
else
{
lean_dec_ref(v_l_1426_);
lean_dec(v___x_1419_);
return v___x_1438_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__6___boxed(lean_object* v___x_1446_, lean_object* v___x_1447_, lean_object* v___x_1448_, lean_object* v___x_1449_, lean_object* v_a_1450_, lean_object* v___x_1451_, lean_object* v_a_1452_, lean_object* v_val_1453_, lean_object* v_l_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_){
_start:
{
uint8_t v___x_50180__boxed_1462_; uint8_t v___x_50181__boxed_1463_; lean_object* v_res_1464_; 
v___x_50180__boxed_1462_ = lean_unbox(v___x_1448_);
v___x_50181__boxed_1463_ = lean_unbox(v___x_1449_);
v_res_1464_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__6(v___x_1446_, v___x_1447_, v___x_50180__boxed_1462_, v___x_50181__boxed_1463_, v_a_1450_, v___x_1451_, v_a_1452_, v_val_1453_, v_l_1454_, v___y_1455_, v___y_1456_, v___y_1457_, v___y_1458_, v___y_1459_, v___y_1460_);
lean_dec(v___y_1460_);
lean_dec_ref(v___y_1459_);
lean_dec(v___y_1458_);
lean_dec_ref(v___y_1457_);
lean_dec(v___y_1456_);
lean_dec_ref(v___y_1455_);
lean_dec(v_val_1453_);
lean_dec_ref(v_a_1452_);
lean_dec(v___x_1451_);
return v_res_1464_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__4(lean_object* v___x_1465_, lean_object* v_a_1466_, lean_object* v___x_1467_, lean_object* v___x_1468_, uint8_t v___x_1469_, uint8_t v___x_1470_, lean_object* v_l_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_){
_start:
{
lean_object* v___x_1479_; 
v___x_1479_ = l_Lean_Meta_mkEqRefl(v___x_1465_, v___y_1474_, v___y_1475_, v___y_1476_, v___y_1477_);
if (lean_obj_tag(v___x_1479_) == 0)
{
lean_object* v_a_1480_; lean_object* v___x_1482_; uint8_t v_isShared_1483_; uint8_t v_isSharedCheck_1502_; 
v_a_1480_ = lean_ctor_get(v___x_1479_, 0);
v_isSharedCheck_1502_ = !lean_is_exclusive(v___x_1479_);
if (v_isSharedCheck_1502_ == 0)
{
v___x_1482_ = v___x_1479_;
v_isShared_1483_ = v_isSharedCheck_1502_;
goto v_resetjp_1481_;
}
else
{
lean_inc(v_a_1480_);
lean_dec(v___x_1479_);
v___x_1482_ = lean_box(0);
v_isShared_1483_ = v_isSharedCheck_1502_;
goto v_resetjp_1481_;
}
v_resetjp_1481_:
{
lean_object* v___x_1484_; lean_object* v___x_1486_; 
v___x_1484_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__3___closed__1));
if (v_isShared_1483_ == 0)
{
lean_ctor_set_tag(v___x_1482_, 1);
lean_ctor_set(v___x_1482_, 0, v_a_1466_);
v___x_1486_ = v___x_1482_;
goto v_reusejp_1485_;
}
else
{
lean_object* v_reuseFailAlloc_1501_; 
v_reuseFailAlloc_1501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1501_, 0, v_a_1466_);
v___x_1486_ = v_reuseFailAlloc_1501_;
goto v_reusejp_1485_;
}
v_reusejp_1485_:
{
lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; 
v___x_1487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1487_, 0, v_a_1480_);
lean_inc_ref(v_l_1471_);
v___x_1488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1488_, 0, v_l_1471_);
v___x_1489_ = lean_unsigned_to_nat(4u);
v___x_1490_ = lean_mk_empty_array_with_capacity(v___x_1489_);
v___x_1491_ = lean_array_push(v___x_1490_, v___x_1467_);
v___x_1492_ = lean_array_push(v___x_1491_, v___x_1486_);
v___x_1493_ = lean_array_push(v___x_1492_, v___x_1487_);
v___x_1494_ = lean_array_push(v___x_1493_, v___x_1488_);
v___x_1495_ = l_Lean_Meta_mkAppOptM(v___x_1484_, v___x_1494_, v___y_1474_, v___y_1475_, v___y_1476_, v___y_1477_);
if (lean_obj_tag(v___x_1495_) == 0)
{
lean_object* v_a_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; uint8_t v___x_1499_; lean_object* v___x_1500_; 
v_a_1496_ = lean_ctor_get(v___x_1495_, 0);
lean_inc(v_a_1496_);
lean_dec_ref_known(v___x_1495_, 1);
v___x_1497_ = lean_mk_empty_array_with_capacity(v___x_1468_);
v___x_1498_ = lean_array_push(v___x_1497_, v_l_1471_);
v___x_1499_ = 1;
v___x_1500_ = l_Lean_Meta_mkLambdaFVars(v___x_1498_, v_a_1496_, v___x_1469_, v___x_1470_, v___x_1469_, v___x_1470_, v___x_1499_, v___y_1474_, v___y_1475_, v___y_1476_, v___y_1477_);
lean_dec_ref(v___x_1498_);
return v___x_1500_;
}
else
{
lean_dec_ref(v_l_1471_);
return v___x_1495_;
}
}
}
}
else
{
lean_dec_ref(v_l_1471_);
lean_dec(v___x_1467_);
lean_dec_ref(v_a_1466_);
return v___x_1479_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__4___boxed(lean_object* v___x_1503_, lean_object* v_a_1504_, lean_object* v___x_1505_, lean_object* v___x_1506_, lean_object* v___x_1507_, lean_object* v___x_1508_, lean_object* v_l_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_){
_start:
{
uint8_t v___x_50259__boxed_1517_; uint8_t v___x_50260__boxed_1518_; lean_object* v_res_1519_; 
v___x_50259__boxed_1517_ = lean_unbox(v___x_1507_);
v___x_50260__boxed_1518_ = lean_unbox(v___x_1508_);
v_res_1519_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__4(v___x_1503_, v_a_1504_, v___x_1505_, v___x_1506_, v___x_50259__boxed_1517_, v___x_50260__boxed_1518_, v_l_1509_, v___y_1510_, v___y_1511_, v___y_1512_, v___y_1513_, v___y_1514_, v___y_1515_);
lean_dec(v___y_1515_);
lean_dec_ref(v___y_1514_);
lean_dec(v___y_1513_);
lean_dec_ref(v___y_1512_);
lean_dec(v___y_1511_);
lean_dec_ref(v___y_1510_);
lean_dec(v___x_1506_);
return v_res_1519_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__0(lean_object* v___x_1520_, lean_object* v_a_1521_, lean_object* v_val_1522_, uint8_t v___x_1523_, uint8_t v___x_1524_, lean_object* v_l_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_){
_start:
{
lean_object* v___x_1533_; 
lean_inc_ref(v_l_1525_);
v___x_1533_ = lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg(v___x_1520_, v_a_1521_, v_val_1522_, v_l_1525_);
if (lean_obj_tag(v___x_1533_) == 0)
{
lean_object* v_a_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; uint8_t v___x_1538_; lean_object* v___x_1539_; 
v_a_1534_ = lean_ctor_get(v___x_1533_, 0);
lean_inc(v_a_1534_);
lean_dec_ref_known(v___x_1533_, 1);
v___x_1535_ = lean_unsigned_to_nat(1u);
v___x_1536_ = lean_mk_empty_array_with_capacity(v___x_1535_);
v___x_1537_ = lean_array_push(v___x_1536_, v_l_1525_);
v___x_1538_ = 1;
v___x_1539_ = l_Lean_Meta_mkLambdaFVars(v___x_1537_, v_a_1534_, v___x_1523_, v___x_1524_, v___x_1523_, v___x_1524_, v___x_1538_, v___y_1528_, v___y_1529_, v___y_1530_, v___y_1531_);
lean_dec_ref(v___x_1537_);
return v___x_1539_;
}
else
{
lean_dec_ref(v_l_1525_);
return v___x_1533_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__0___boxed(lean_object* v___x_1540_, lean_object* v_a_1541_, lean_object* v_val_1542_, lean_object* v___x_1543_, lean_object* v___x_1544_, lean_object* v_l_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_){
_start:
{
uint8_t v___x_50348__boxed_1553_; uint8_t v___x_50349__boxed_1554_; lean_object* v_res_1555_; 
v___x_50348__boxed_1553_ = lean_unbox(v___x_1543_);
v___x_50349__boxed_1554_ = lean_unbox(v___x_1544_);
v_res_1555_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__0(v___x_1540_, v_a_1541_, v_val_1542_, v___x_50348__boxed_1553_, v___x_50349__boxed_1554_, v_l_1545_, v___y_1546_, v___y_1547_, v___y_1548_, v___y_1549_, v___y_1550_, v___y_1551_);
lean_dec(v___y_1551_);
lean_dec_ref(v___y_1550_);
lean_dec(v___y_1549_);
lean_dec_ref(v___y_1548_);
lean_dec(v___y_1547_);
lean_dec_ref(v___y_1546_);
lean_dec(v_val_1542_);
lean_dec_ref(v_a_1541_);
lean_dec(v___x_1540_);
return v_res_1555_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__1(lean_object* v___x_1557_, lean_object* v_a_1558_, uint8_t v___x_1559_, uint8_t v___x_1560_, lean_object* v_l_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_){
_start:
{
lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; 
v___x_1569_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__1___closed__0));
v___x_1570_ = l_Lean_Name_mkStr2(v___x_1557_, v___x_1569_);
v___x_1571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1571_, 0, v_a_1558_);
lean_inc_ref(v_l_1561_);
v___x_1572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1572_, 0, v_l_1561_);
v___x_1573_ = lean_unsigned_to_nat(2u);
v___x_1574_ = lean_mk_empty_array_with_capacity(v___x_1573_);
v___x_1575_ = lean_array_push(v___x_1574_, v___x_1571_);
v___x_1576_ = lean_array_push(v___x_1575_, v___x_1572_);
v___x_1577_ = l_Lean_Meta_mkAppOptM(v___x_1570_, v___x_1576_, v___y_1564_, v___y_1565_, v___y_1566_, v___y_1567_);
if (lean_obj_tag(v___x_1577_) == 0)
{
lean_object* v_a_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; uint8_t v___x_1582_; lean_object* v___x_1583_; 
v_a_1578_ = lean_ctor_get(v___x_1577_, 0);
lean_inc(v_a_1578_);
lean_dec_ref_known(v___x_1577_, 1);
v___x_1579_ = lean_unsigned_to_nat(1u);
v___x_1580_ = lean_mk_empty_array_with_capacity(v___x_1579_);
v___x_1581_ = lean_array_push(v___x_1580_, v_l_1561_);
v___x_1582_ = 1;
v___x_1583_ = l_Lean_Meta_mkLambdaFVars(v___x_1581_, v_a_1578_, v___x_1559_, v___x_1560_, v___x_1559_, v___x_1560_, v___x_1582_, v___y_1564_, v___y_1565_, v___y_1566_, v___y_1567_);
lean_dec_ref(v___x_1581_);
return v___x_1583_;
}
else
{
lean_dec_ref(v_l_1561_);
return v___x_1577_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__1___boxed(lean_object* v___x_1584_, lean_object* v_a_1585_, lean_object* v___x_1586_, lean_object* v___x_1587_, lean_object* v_l_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_){
_start:
{
uint8_t v___x_50400__boxed_1596_; uint8_t v___x_50401__boxed_1597_; lean_object* v_res_1598_; 
v___x_50400__boxed_1596_ = lean_unbox(v___x_1586_);
v___x_50401__boxed_1597_ = lean_unbox(v___x_1587_);
v_res_1598_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__1(v___x_1584_, v_a_1585_, v___x_50400__boxed_1596_, v___x_50401__boxed_1597_, v_l_1588_, v___y_1589_, v___y_1590_, v___y_1591_, v___y_1592_, v___y_1593_, v___y_1594_);
lean_dec(v___y_1594_);
lean_dec_ref(v___y_1593_);
lean_dec(v___y_1592_);
lean_dec_ref(v___y_1591_);
lean_dec(v___y_1590_);
lean_dec_ref(v___y_1589_);
return v_res_1598_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__3(void){
_start:
{
lean_object* v___x_1603_; lean_object* v___x_1604_; 
v___x_1603_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__2));
v___x_1604_ = l_Lean_stringToMessageData(v___x_1603_);
return v___x_1604_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__5(void){
_start:
{
lean_object* v___x_1606_; lean_object* v___x_1607_; 
v___x_1606_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__4));
v___x_1607_ = l_Lean_stringToMessageData(v___x_1606_);
return v___x_1607_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__7(void){
_start:
{
lean_object* v___x_1609_; lean_object* v___x_1610_; 
v___x_1609_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__6));
v___x_1610_ = l_Lean_stringToMessageData(v___x_1609_);
return v___x_1610_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2(lean_object* v_v_1614_, lean_object* v_a_1615_, uint8_t v___x_1616_, uint8_t v___x_1617_, lean_object* v_____r_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_){
_start:
{
lean_object* v___x_1626_; lean_object* v___x_1627_; uint8_t v___x_1628_; 
v___x_1626_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__0));
v___x_1627_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__1));
v___x_1628_ = l_Lean_Expr_isConstOf(v_v_1614_, v___x_1627_);
if (v___x_1628_ == 0)
{
lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; 
v___x_1629_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__3, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__3_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__3);
v___x_1630_ = l_Lean_indentExpr(v_v_1614_);
v___x_1631_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1631_, 0, v___x_1629_);
lean_ctor_set(v___x_1631_, 1, v___x_1630_);
v___x_1632_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__5, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__5_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__5);
v___x_1633_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1633_, 0, v___x_1631_);
lean_ctor_set(v___x_1633_, 1, v___x_1632_);
v___x_1634_ = l_Lean_indentExpr(v_a_1615_);
v___x_1635_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1635_, 0, v___x_1633_);
lean_ctor_set(v___x_1635_, 1, v___x_1634_);
v___x_1636_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__7, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__7_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__7);
v___x_1637_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1637_, 0, v___x_1635_);
lean_ctor_set(v___x_1637_, 1, v___x_1636_);
v___x_1638_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1637_, v___y_1621_, v___y_1622_, v___y_1623_, v___y_1624_);
return v___x_1638_;
}
else
{
lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___f_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; 
v___x_1639_ = lean_box(v___x_1616_);
v___x_1640_ = lean_box(v___x_1617_);
v___f_1641_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__1___boxed), 12, 4);
lean_closure_set(v___f_1641_, 0, v___x_1626_);
lean_closure_set(v___f_1641_, 1, v_a_1615_);
lean_closure_set(v___f_1641_, 2, v___x_1639_);
lean_closure_set(v___f_1641_, 3, v___x_1640_);
v___x_1642_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__9));
v___x_1643_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_1642_, v_v_1614_, v___f_1641_, v___y_1619_, v___y_1620_, v___y_1621_, v___y_1622_, v___y_1623_, v___y_1624_);
return v___x_1643_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___boxed(lean_object* v_v_1644_, lean_object* v_a_1645_, lean_object* v___x_1646_, lean_object* v___x_1647_, lean_object* v_____r_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_){
_start:
{
uint8_t v___x_50494__boxed_1656_; uint8_t v___x_50495__boxed_1657_; lean_object* v_res_1658_; 
v___x_50494__boxed_1656_ = lean_unbox(v___x_1646_);
v___x_50495__boxed_1657_ = lean_unbox(v___x_1647_);
v_res_1658_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2(v_v_1644_, v_a_1645_, v___x_50494__boxed_1656_, v___x_50495__boxed_1657_, v_____r_1648_, v___y_1649_, v___y_1650_, v___y_1651_, v___y_1652_, v___y_1653_, v___y_1654_);
lean_dec(v___y_1654_);
lean_dec_ref(v___y_1653_);
lean_dec(v___y_1652_);
lean_dec_ref(v___y_1651_);
lean_dec(v___y_1650_);
lean_dec_ref(v___y_1649_);
return v_res_1658_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__7(lean_object* v___x_1659_, lean_object* v___x_1660_, lean_object* v_a_1661_, lean_object* v_val_1662_, uint8_t v___x_1663_, uint8_t v___x_1664_, lean_object* v_l_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_, lean_object* v___y_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_){
_start:
{
lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; 
v___x_1673_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__5___closed__0));
v___x_1674_ = l_Lean_Name_mkStr2(v___x_1659_, v___x_1673_);
v___x_1675_ = lean_unsigned_to_nat(1u);
v___x_1676_ = lean_mk_empty_array_with_capacity(v___x_1675_);
v___x_1677_ = lean_array_push(v___x_1676_, v_l_1665_);
lean_inc_ref(v___x_1677_);
v___x_1678_ = l_Lean_Meta_mkAppM(v___x_1674_, v___x_1677_, v___y_1668_, v___y_1669_, v___y_1670_, v___y_1671_);
if (lean_obj_tag(v___x_1678_) == 0)
{
lean_object* v_a_1679_; lean_object* v___x_1680_; 
v_a_1679_ = lean_ctor_get(v___x_1678_, 0);
lean_inc(v_a_1679_);
lean_dec_ref_known(v___x_1678_, 1);
v___x_1680_ = lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg(v___x_1660_, v_a_1661_, v_val_1662_, v_a_1679_);
if (lean_obj_tag(v___x_1680_) == 0)
{
lean_object* v_a_1681_; uint8_t v___x_1682_; lean_object* v___x_1683_; 
v_a_1681_ = lean_ctor_get(v___x_1680_, 0);
lean_inc(v_a_1681_);
lean_dec_ref_known(v___x_1680_, 1);
v___x_1682_ = 1;
v___x_1683_ = l_Lean_Meta_mkLambdaFVars(v___x_1677_, v_a_1681_, v___x_1663_, v___x_1664_, v___x_1663_, v___x_1664_, v___x_1682_, v___y_1668_, v___y_1669_, v___y_1670_, v___y_1671_);
lean_dec_ref(v___x_1677_);
return v___x_1683_;
}
else
{
lean_dec_ref(v___x_1677_);
return v___x_1680_;
}
}
else
{
lean_dec_ref(v___x_1677_);
return v___x_1678_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__7___boxed(lean_object* v___x_1684_, lean_object* v___x_1685_, lean_object* v_a_1686_, lean_object* v_val_1687_, lean_object* v___x_1688_, lean_object* v___x_1689_, lean_object* v_l_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_){
_start:
{
uint8_t v___x_50582__boxed_1698_; uint8_t v___x_50583__boxed_1699_; lean_object* v_res_1700_; 
v___x_50582__boxed_1698_ = lean_unbox(v___x_1688_);
v___x_50583__boxed_1699_ = lean_unbox(v___x_1689_);
v_res_1700_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__7(v___x_1684_, v___x_1685_, v_a_1686_, v_val_1687_, v___x_50582__boxed_1698_, v___x_50583__boxed_1699_, v_l_1690_, v___y_1691_, v___y_1692_, v___y_1693_, v___y_1694_, v___y_1695_, v___y_1696_);
lean_dec(v___y_1696_);
lean_dec_ref(v___y_1695_);
lean_dec(v___y_1694_);
lean_dec_ref(v___y_1693_);
lean_dec(v___y_1692_);
lean_dec_ref(v___y_1691_);
lean_dec(v_val_1687_);
lean_dec_ref(v_a_1686_);
lean_dec(v___x_1685_);
return v_res_1700_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0(lean_object* v_a_1707_, uint8_t v___x_1708_, lean_object* v___y_1709_, size_t v_sz_1710_, size_t v_i_1711_, lean_object* v_bs_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_){
_start:
{
uint8_t v___x_1720_; 
v___x_1720_ = lean_usize_dec_lt(v_i_1711_, v_sz_1710_);
if (v___x_1720_ == 0)
{
lean_object* v___x_1721_; 
lean_dec_ref(v_a_1707_);
v___x_1721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1721_, 0, v_bs_1712_);
return v___x_1721_;
}
else
{
lean_object* v___x_1722_; lean_object* v_v_1723_; lean_object* v___x_1724_; lean_object* v_bs_x27_1725_; lean_object* v___y_1727_; lean_object* v___x_1741_; 
v___x_1722_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__16));
v_v_1723_ = lean_array_uget(v_bs_1712_, v_i_1711_);
v___x_1724_ = lean_unsigned_to_nat(0u);
v_bs_x27_1725_ = lean_array_uset(v_bs_1712_, v_i_1711_, v___x_1724_);
v___x_1741_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__1___redArg(v___y_1709_, v_v_1723_);
if (lean_obj_tag(v___x_1741_) == 1)
{
lean_object* v_val_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___f_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; 
v_val_1742_ = lean_ctor_get(v___x_1741_, 0);
lean_inc(v_val_1742_);
lean_dec_ref_known(v___x_1741_, 1);
v___x_1743_ = lean_box(v___x_1708_);
v___x_1744_ = lean_box(v___x_1720_);
lean_inc_ref(v_a_1707_);
v___f_1745_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__0___boxed), 13, 5);
lean_closure_set(v___f_1745_, 0, v___x_1722_);
lean_closure_set(v___f_1745_, 1, v_a_1707_);
lean_closure_set(v___f_1745_, 2, v_val_1742_);
lean_closure_set(v___f_1745_, 3, v___x_1743_);
lean_closure_set(v___f_1745_, 4, v___x_1744_);
v___x_1746_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__9));
v___x_1747_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_1746_, v_v_1723_, v___f_1745_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_, v___y_1717_, v___y_1718_);
v___y_1727_ = v___x_1747_;
goto v___jp_1726_;
}
else
{
lean_object* v___y_1749_; lean_object* v___y_1750_; lean_object* v___y_1751_; lean_object* v___y_1752_; lean_object* v___y_1753_; lean_object* v___y_1754_; lean_object* v___y_1755_; lean_object* v___y_1756_; lean_object* v___y_1768_; lean_object* v___y_1769_; lean_object* v___y_1770_; lean_object* v___y_1771_; lean_object* v___y_1772_; lean_object* v___y_1773_; lean_object* v___y_1774_; lean_object* v___y_1775_; lean_object* v___y_1776_; lean_object* v___y_1800_; lean_object* v___y_1801_; lean_object* v___y_1802_; lean_object* v___y_1803_; lean_object* v___y_1804_; lean_object* v___y_1805_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; uint8_t v___x_1843_; 
lean_dec(v___x_1741_);
v___x_1840_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___closed__2));
v___x_1841_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___closed__3));
v___x_1842_ = lean_unsigned_to_nat(3u);
v___x_1843_ = l_Lean_Expr_isAppOfArity(v_v_1723_, v___x_1841_, v___x_1842_);
if (v___x_1843_ == 0)
{
v___y_1800_ = v___y_1713_;
v___y_1801_ = v___y_1714_;
v___y_1802_ = v___y_1715_;
v___y_1803_ = v___y_1716_;
v___y_1804_ = v___y_1717_;
v___y_1805_ = v___y_1718_;
goto v___jp_1799_;
}
else
{
lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; 
v___x_1844_ = l_Lean_Expr_appFn_x21(v_v_1723_);
v___x_1845_ = l_Lean_Expr_appFn_x21(v___x_1844_);
v___x_1846_ = l_Lean_Expr_appArg_x21(v___x_1845_);
lean_dec_ref(v___x_1845_);
v___x_1847_ = l_Lean_Expr_appArg_x21(v___x_1844_);
lean_dec_ref(v___x_1844_);
v___x_1848_ = l_Lean_Expr_appArg_x21(v_v_1723_);
v___x_1849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1849_, 0, v___x_1846_);
v___x_1850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1850_, 0, v___x_1848_);
v___x_1851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1851_, 0, v___x_1847_);
v___x_1852_ = lean_mk_empty_array_with_capacity(v___x_1842_);
v___x_1853_ = lean_array_push(v___x_1852_, v___x_1849_);
v___x_1854_ = lean_array_push(v___x_1853_, v___x_1850_);
v___x_1855_ = lean_array_push(v___x_1854_, v___x_1851_);
v___x_1856_ = l_Lean_Meta_mkAppOptM(v___x_1841_, v___x_1855_, v___y_1715_, v___y_1716_, v___y_1717_, v___y_1718_);
if (lean_obj_tag(v___x_1856_) == 0)
{
lean_object* v_a_1857_; lean_object* v___x_1858_; 
v_a_1857_ = lean_ctor_get(v___x_1856_, 0);
lean_inc(v_a_1857_);
lean_dec_ref_known(v___x_1856_, 1);
v___x_1858_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__1___redArg(v___y_1709_, v_a_1857_);
lean_dec(v_a_1857_);
if (lean_obj_tag(v___x_1858_) == 1)
{
lean_object* v_val_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___f_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; 
v_val_1859_ = lean_ctor_get(v___x_1858_, 0);
lean_inc(v_val_1859_);
lean_dec_ref_known(v___x_1858_, 1);
v___x_1860_ = lean_box(v___x_1708_);
v___x_1861_ = lean_box(v___x_1720_);
lean_inc_ref(v_a_1707_);
v___f_1862_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__7___boxed), 14, 6);
lean_closure_set(v___f_1862_, 0, v___x_1840_);
lean_closure_set(v___f_1862_, 1, v___x_1722_);
lean_closure_set(v___f_1862_, 2, v_a_1707_);
lean_closure_set(v___f_1862_, 3, v_val_1859_);
lean_closure_set(v___f_1862_, 4, v___x_1860_);
lean_closure_set(v___f_1862_, 5, v___x_1861_);
v___x_1863_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__9));
v___x_1864_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_1863_, v_v_1723_, v___f_1862_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_, v___y_1717_, v___y_1718_);
v___y_1727_ = v___x_1864_;
goto v___jp_1726_;
}
else
{
lean_dec(v___x_1858_);
v___y_1800_ = v___y_1713_;
v___y_1801_ = v___y_1714_;
v___y_1802_ = v___y_1715_;
v___y_1803_ = v___y_1716_;
v___y_1804_ = v___y_1717_;
v___y_1805_ = v___y_1718_;
goto v___jp_1799_;
}
}
else
{
lean_dec(v_v_1723_);
v___y_1727_ = v___x_1856_;
goto v___jp_1726_;
}
}
v___jp_1748_:
{
lean_object* v___x_1757_; lean_object* v___x_1758_; uint8_t v___x_1759_; 
v___x_1757_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___closed__0));
v___x_1758_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___closed__1));
v___x_1759_ = l_Lean_Expr_isConstOf(v___y_1750_, v___x_1758_);
lean_dec_ref(v___y_1750_);
if (v___x_1759_ == 0)
{
lean_object* v___x_1760_; lean_object* v___x_1761_; 
lean_dec(v___y_1749_);
v___x_1760_ = lean_box(0);
lean_inc_ref(v_a_1707_);
v___x_1761_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2(v_v_1723_, v_a_1707_, v___x_1708_, v___x_1720_, v___x_1760_, v___y_1751_, v___y_1752_, v___y_1753_, v___y_1754_, v___y_1755_, v___y_1756_);
v___y_1727_ = v___x_1761_;
goto v___jp_1726_;
}
else
{
lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___f_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; 
v___x_1762_ = lean_box(v___x_1708_);
v___x_1763_ = lean_box(v___x_1720_);
lean_inc_ref(v_a_1707_);
v___f_1764_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__3___boxed), 14, 6);
lean_closure_set(v___f_1764_, 0, v___x_1758_);
lean_closure_set(v___f_1764_, 1, v_a_1707_);
lean_closure_set(v___f_1764_, 2, v___x_1757_);
lean_closure_set(v___f_1764_, 3, v___y_1749_);
lean_closure_set(v___f_1764_, 4, v___x_1762_);
lean_closure_set(v___f_1764_, 5, v___x_1763_);
v___x_1765_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__9));
v___x_1766_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_1765_, v_v_1723_, v___f_1764_, v___y_1751_, v___y_1752_, v___y_1753_, v___y_1754_, v___y_1755_, v___y_1756_);
v___y_1727_ = v___x_1766_;
goto v___jp_1726_;
}
}
v___jp_1767_:
{
lean_object* v___x_1777_; lean_object* v___x_1778_; uint8_t v___x_1779_; 
v___x_1777_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___closed__3));
v___x_1778_ = lean_unsigned_to_nat(3u);
v___x_1779_ = l_Lean_Expr_isAppOfArity(v___y_1769_, v___x_1777_, v___x_1778_);
if (v___x_1779_ == 0)
{
lean_dec(v___y_1770_);
v___y_1749_ = v___y_1768_;
v___y_1750_ = v___y_1769_;
v___y_1751_ = v___y_1771_;
v___y_1752_ = v___y_1772_;
v___y_1753_ = v___y_1773_;
v___y_1754_ = v___y_1774_;
v___y_1755_ = v___y_1775_;
v___y_1756_ = v___y_1776_;
goto v___jp_1748_;
}
else
{
lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; 
v___x_1780_ = l_Lean_Expr_appFn_x21(v___y_1769_);
v___x_1781_ = l_Lean_Expr_appArg_x21(v___x_1780_);
lean_dec_ref(v___x_1780_);
v___x_1782_ = l_Lean_Expr_appArg_x21(v___y_1769_);
lean_inc_ref(v___x_1781_);
v___x_1783_ = l_Lean_Meta_isExprDefEq(v___x_1781_, v___x_1782_, v___y_1773_, v___y_1774_, v___y_1775_, v___y_1776_);
if (lean_obj_tag(v___x_1783_) == 0)
{
lean_object* v_a_1784_; uint8_t v___x_1785_; 
v_a_1784_ = lean_ctor_get(v___x_1783_, 0);
lean_inc(v_a_1784_);
lean_dec_ref_known(v___x_1783_, 1);
v___x_1785_ = lean_unbox(v_a_1784_);
lean_dec(v_a_1784_);
if (v___x_1785_ == 0)
{
lean_dec_ref(v___x_1781_);
lean_dec(v___y_1770_);
v___y_1749_ = v___y_1768_;
v___y_1750_ = v___y_1769_;
v___y_1751_ = v___y_1771_;
v___y_1752_ = v___y_1772_;
v___y_1753_ = v___y_1773_;
v___y_1754_ = v___y_1774_;
v___y_1755_ = v___y_1775_;
v___y_1756_ = v___y_1776_;
goto v___jp_1748_;
}
else
{
lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___f_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; 
lean_dec_ref(v___y_1769_);
v___x_1786_ = lean_box(v___x_1708_);
v___x_1787_ = lean_box(v___x_1720_);
lean_inc_ref(v_a_1707_);
v___f_1788_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__4___boxed), 14, 6);
lean_closure_set(v___f_1788_, 0, v___x_1781_);
lean_closure_set(v___f_1788_, 1, v_a_1707_);
lean_closure_set(v___f_1788_, 2, v___y_1770_);
lean_closure_set(v___f_1788_, 3, v___y_1768_);
lean_closure_set(v___f_1788_, 4, v___x_1786_);
lean_closure_set(v___f_1788_, 5, v___x_1787_);
v___x_1789_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__9));
v___x_1790_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_1789_, v_v_1723_, v___f_1788_, v___y_1771_, v___y_1772_, v___y_1773_, v___y_1774_, v___y_1775_, v___y_1776_);
v___y_1727_ = v___x_1790_;
goto v___jp_1726_;
}
}
else
{
lean_object* v_a_1791_; lean_object* v___x_1793_; uint8_t v_isShared_1794_; uint8_t v_isSharedCheck_1798_; 
lean_dec_ref(v___x_1781_);
lean_dec(v___y_1770_);
lean_dec_ref(v___y_1769_);
lean_dec(v___y_1768_);
lean_dec_ref(v_bs_x27_1725_);
lean_dec(v_v_1723_);
lean_dec_ref(v_a_1707_);
v_a_1791_ = lean_ctor_get(v___x_1783_, 0);
v_isSharedCheck_1798_ = !lean_is_exclusive(v___x_1783_);
if (v_isSharedCheck_1798_ == 0)
{
v___x_1793_ = v___x_1783_;
v_isShared_1794_ = v_isSharedCheck_1798_;
goto v_resetjp_1792_;
}
else
{
lean_inc(v_a_1791_);
lean_dec(v___x_1783_);
v___x_1793_ = lean_box(0);
v_isShared_1794_ = v_isSharedCheck_1798_;
goto v_resetjp_1792_;
}
v_resetjp_1792_:
{
lean_object* v___x_1796_; 
if (v_isShared_1794_ == 0)
{
v___x_1796_ = v___x_1793_;
goto v_reusejp_1795_;
}
else
{
lean_object* v_reuseFailAlloc_1797_; 
v_reuseFailAlloc_1797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1797_, 0, v_a_1791_);
v___x_1796_ = v_reuseFailAlloc_1797_;
goto v_reusejp_1795_;
}
v_reusejp_1795_:
{
return v___x_1796_;
}
}
}
}
}
v___jp_1799_:
{
lean_object* v___x_1806_; lean_object* v___x_1807_; uint8_t v___x_1808_; 
v___x_1806_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__12));
v___x_1807_ = lean_unsigned_to_nat(1u);
v___x_1808_ = l_Lean_Expr_isAppOfArity(v_v_1723_, v___x_1806_, v___x_1807_);
if (v___x_1808_ == 0)
{
lean_object* v___x_1809_; lean_object* v___x_1810_; 
v___x_1809_ = lean_box(0);
lean_inc_ref(v_a_1707_);
v___x_1810_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2(v_v_1723_, v_a_1707_, v___x_1708_, v___x_1720_, v___x_1809_, v___y_1800_, v___y_1801_, v___y_1802_, v___y_1803_, v___y_1804_, v___y_1805_);
v___y_1727_ = v___x_1810_;
goto v___jp_1726_;
}
else
{
lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; uint8_t v___x_1816_; 
v___x_1811_ = l_Lean_Expr_appArg_x21(v_v_1723_);
lean_inc_ref(v___x_1811_);
v___x_1812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1812_, 0, v___x_1811_);
v___x_1813_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___closed__2));
v___x_1814_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___closed__3));
v___x_1815_ = lean_unsigned_to_nat(3u);
v___x_1816_ = l_Lean_Expr_isAppOfArity(v___x_1811_, v___x_1814_, v___x_1815_);
if (v___x_1816_ == 0)
{
v___y_1768_ = v___x_1807_;
v___y_1769_ = v___x_1811_;
v___y_1770_ = v___x_1812_;
v___y_1771_ = v___y_1800_;
v___y_1772_ = v___y_1801_;
v___y_1773_ = v___y_1802_;
v___y_1774_ = v___y_1803_;
v___y_1775_ = v___y_1804_;
v___y_1776_ = v___y_1805_;
goto v___jp_1767_;
}
else
{
lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; 
v___x_1817_ = l_Lean_Expr_appFn_x21(v___x_1811_);
v___x_1818_ = l_Lean_Expr_appFn_x21(v___x_1817_);
v___x_1819_ = l_Lean_Expr_appArg_x21(v___x_1818_);
lean_dec_ref(v___x_1818_);
v___x_1820_ = l_Lean_Expr_appArg_x21(v___x_1817_);
lean_dec_ref(v___x_1817_);
v___x_1821_ = l_Lean_Expr_appArg_x21(v___x_1811_);
v___x_1822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1822_, 0, v___x_1819_);
v___x_1823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1823_, 0, v___x_1821_);
v___x_1824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1824_, 0, v___x_1820_);
v___x_1825_ = lean_mk_empty_array_with_capacity(v___x_1815_);
v___x_1826_ = lean_array_push(v___x_1825_, v___x_1822_);
v___x_1827_ = lean_array_push(v___x_1826_, v___x_1823_);
v___x_1828_ = lean_array_push(v___x_1827_, v___x_1824_);
v___x_1829_ = l_Lean_Meta_mkAppOptM(v___x_1814_, v___x_1828_, v___y_1802_, v___y_1803_, v___y_1804_, v___y_1805_);
if (lean_obj_tag(v___x_1829_) == 0)
{
lean_object* v_a_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; 
v_a_1830_ = lean_ctor_get(v___x_1829_, 0);
lean_inc_n(v_a_1830_, 2);
lean_dec_ref_known(v___x_1829_, 1);
v___x_1831_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__18, &lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__18_once, _init_lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__18);
v___x_1832_ = l_Lean_Expr_app___override(v___x_1831_, v_a_1830_);
v___x_1833_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__1___redArg(v___y_1709_, v___x_1832_);
lean_dec_ref(v___x_1832_);
if (lean_obj_tag(v___x_1833_) == 1)
{
lean_object* v_val_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___f_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; 
lean_dec_ref_known(v___x_1812_, 1);
lean_dec_ref(v___x_1811_);
v_val_1834_ = lean_ctor_get(v___x_1833_, 0);
lean_inc(v_val_1834_);
lean_dec_ref_known(v___x_1833_, 1);
v___x_1835_ = lean_box(v___x_1708_);
v___x_1836_ = lean_box(v___x_1720_);
lean_inc_ref(v_a_1707_);
v___f_1837_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__6___boxed), 16, 8);
lean_closure_set(v___f_1837_, 0, v___x_1813_);
lean_closure_set(v___f_1837_, 1, v___x_1807_);
lean_closure_set(v___f_1837_, 2, v___x_1835_);
lean_closure_set(v___f_1837_, 3, v___x_1836_);
lean_closure_set(v___f_1837_, 4, v_a_1830_);
lean_closure_set(v___f_1837_, 5, v___x_1722_);
lean_closure_set(v___f_1837_, 6, v_a_1707_);
lean_closure_set(v___f_1837_, 7, v_val_1834_);
v___x_1838_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__9));
v___x_1839_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_1838_, v_v_1723_, v___f_1837_, v___y_1800_, v___y_1801_, v___y_1802_, v___y_1803_, v___y_1804_, v___y_1805_);
v___y_1727_ = v___x_1839_;
goto v___jp_1726_;
}
else
{
lean_dec(v___x_1833_);
lean_dec(v_a_1830_);
v___y_1768_ = v___x_1807_;
v___y_1769_ = v___x_1811_;
v___y_1770_ = v___x_1812_;
v___y_1771_ = v___y_1800_;
v___y_1772_ = v___y_1801_;
v___y_1773_ = v___y_1802_;
v___y_1774_ = v___y_1803_;
v___y_1775_ = v___y_1804_;
v___y_1776_ = v___y_1805_;
goto v___jp_1767_;
}
}
else
{
lean_dec_ref_known(v___x_1812_, 1);
lean_dec_ref(v___x_1811_);
lean_dec(v_v_1723_);
v___y_1727_ = v___x_1829_;
goto v___jp_1726_;
}
}
}
}
}
v___jp_1726_:
{
if (lean_obj_tag(v___y_1727_) == 0)
{
lean_object* v_a_1728_; size_t v___x_1729_; size_t v___x_1730_; lean_object* v___x_1731_; 
v_a_1728_ = lean_ctor_get(v___y_1727_, 0);
lean_inc(v_a_1728_);
lean_dec_ref_known(v___y_1727_, 1);
v___x_1729_ = ((size_t)1ULL);
v___x_1730_ = lean_usize_add(v_i_1711_, v___x_1729_);
v___x_1731_ = lean_array_uset(v_bs_x27_1725_, v_i_1711_, v_a_1728_);
v_i_1711_ = v___x_1730_;
v_bs_1712_ = v___x_1731_;
goto _start;
}
else
{
lean_object* v_a_1733_; lean_object* v___x_1735_; uint8_t v_isShared_1736_; uint8_t v_isSharedCheck_1740_; 
lean_dec_ref(v_bs_x27_1725_);
lean_dec_ref(v_a_1707_);
v_a_1733_ = lean_ctor_get(v___y_1727_, 0);
v_isSharedCheck_1740_ = !lean_is_exclusive(v___y_1727_);
if (v_isSharedCheck_1740_ == 0)
{
v___x_1735_ = v___y_1727_;
v_isShared_1736_ = v_isSharedCheck_1740_;
goto v_resetjp_1734_;
}
else
{
lean_inc(v_a_1733_);
lean_dec(v___y_1727_);
v___x_1735_ = lean_box(0);
v_isShared_1736_ = v_isSharedCheck_1740_;
goto v_resetjp_1734_;
}
v_resetjp_1734_:
{
lean_object* v___x_1738_; 
if (v_isShared_1736_ == 0)
{
v___x_1738_ = v___x_1735_;
goto v_reusejp_1737_;
}
else
{
lean_object* v_reuseFailAlloc_1739_; 
v_reuseFailAlloc_1739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1739_, 0, v_a_1733_);
v___x_1738_ = v_reuseFailAlloc_1739_;
goto v_reusejp_1737_;
}
v_reusejp_1737_:
{
return v___x_1738_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___boxed(lean_object* v_a_1865_, lean_object* v___x_1866_, lean_object* v___y_1867_, lean_object* v_sz_1868_, lean_object* v_i_1869_, lean_object* v_bs_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_){
_start:
{
uint8_t v___x_50688__boxed_1878_; size_t v_sz_boxed_1879_; size_t v_i_boxed_1880_; lean_object* v_res_1881_; 
v___x_50688__boxed_1878_ = lean_unbox(v___x_1866_);
v_sz_boxed_1879_ = lean_unbox_usize(v_sz_1868_);
lean_dec(v_sz_1868_);
v_i_boxed_1880_ = lean_unbox_usize(v_i_1869_);
lean_dec(v_i_1869_);
v_res_1881_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0(v_a_1865_, v___x_50688__boxed_1878_, v___y_1867_, v_sz_boxed_1879_, v_i_boxed_1880_, v_bs_1870_, v___y_1871_, v___y_1872_, v___y_1873_, v___y_1874_, v___y_1875_, v___y_1876_);
lean_dec(v___y_1876_);
lean_dec_ref(v___y_1875_);
lean_dec(v___y_1874_);
lean_dec_ref(v___y_1873_);
lean_dec(v___y_1872_);
lean_dec_ref(v___y_1871_);
lean_dec_ref(v___y_1867_);
return v_res_1881_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_implies___closed__0(void){
_start:
{
lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; 
v___x_1882_ = lean_box(0);
v___x_1883_ = lean_unsigned_to_nat(16u);
v___x_1884_ = lean_mk_array(v___x_1883_, v___x_1882_);
return v___x_1884_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_implies___closed__1(void){
_start:
{
lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; 
v___x_1885_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_implies___closed__0, &lp_vampireReplay_Vampire_Reconstruct_implies___closed__0_once, _init_lp_vampireReplay_Vampire_Reconstruct_implies___closed__0);
v___x_1886_ = lean_unsigned_to_nat(0u);
v___x_1887_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1887_, 0, v___x_1886_);
lean_ctor_set(v___x_1887_, 1, v___x_1885_);
return v___x_1887_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_implies___lam__2___boxed(lean_object* v___x_1888_, lean_object* v_a_1889_, lean_object* v_h_1890_, lean_object* v_j_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_){
_start:
{
lean_object* v_res_1899_; 
v_res_1899_ = lp_vampireReplay_Vampire_Reconstruct_implies___lam__2(v___x_1888_, v_a_1889_, v_h_1890_, v_j_1891_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_, v___y_1896_, v___y_1897_);
lean_dec(v___y_1897_);
lean_dec_ref(v___y_1896_);
lean_dec(v___y_1895_);
lean_dec_ref(v___y_1894_);
lean_dec(v___y_1893_);
lean_dec_ref(v___y_1892_);
lean_dec(v_j_1891_);
lean_dec_ref(v___x_1888_);
return v_res_1899_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_implies___lam__3(lean_object* v___x_1900_, lean_object* v_a_1901_, lean_object* v_a_1902_, uint8_t v_a_1903_, uint8_t v___x_1904_, lean_object* v_h_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_, lean_object* v___y_1910_, lean_object* v___y_1911_){
_start:
{
lean_object* v___f_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; 
lean_inc_ref(v_h_1905_);
v___f_1913_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_implies___lam__2___boxed), 11, 3);
lean_closure_set(v___f_1913_, 0, v___x_1900_);
lean_closure_set(v___f_1913_, 1, v_a_1901_);
lean_closure_set(v___f_1913_, 2, v_h_1905_);
v___x_1914_ = lean_unsigned_to_nat(0u);
v___x_1915_ = lp_vampireReplay_Vampire_Reconstruct_introParts(v_a_1902_, v___x_1914_, v___f_1913_, v___y_1906_, v___y_1907_, v___y_1908_, v___y_1909_, v___y_1910_, v___y_1911_);
if (lean_obj_tag(v___x_1915_) == 0)
{
lean_object* v_a_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; uint8_t v___x_1920_; lean_object* v___x_1921_; 
v_a_1916_ = lean_ctor_get(v___x_1915_, 0);
lean_inc(v_a_1916_);
lean_dec_ref_known(v___x_1915_, 1);
v___x_1917_ = lean_unsigned_to_nat(1u);
v___x_1918_ = lean_mk_empty_array_with_capacity(v___x_1917_);
v___x_1919_ = lean_array_push(v___x_1918_, v_h_1905_);
v___x_1920_ = 1;
v___x_1921_ = l_Lean_Meta_mkLambdaFVars(v___x_1919_, v_a_1916_, v_a_1903_, v___x_1904_, v_a_1903_, v___x_1904_, v___x_1920_, v___y_1908_, v___y_1909_, v___y_1910_, v___y_1911_);
lean_dec_ref(v___x_1919_);
return v___x_1921_;
}
else
{
lean_dec_ref(v_h_1905_);
return v___x_1915_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_implies___lam__3___boxed(lean_object* v___x_1922_, lean_object* v_a_1923_, lean_object* v_a_1924_, lean_object* v_a_1925_, lean_object* v___x_1926_, lean_object* v_h_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_, lean_object* v___y_1931_, lean_object* v___y_1932_, lean_object* v___y_1933_, lean_object* v___y_1934_){
_start:
{
uint8_t v_a_51102__boxed_1935_; uint8_t v___x_51103__boxed_1936_; lean_object* v_res_1937_; 
v_a_51102__boxed_1935_ = lean_unbox(v_a_1925_);
v___x_51103__boxed_1936_ = lean_unbox(v___x_1926_);
v_res_1937_ = lp_vampireReplay_Vampire_Reconstruct_implies___lam__3(v___x_1922_, v_a_1923_, v_a_1924_, v_a_51102__boxed_1935_, v___x_51103__boxed_1936_, v_h_1927_, v___y_1928_, v___y_1929_, v___y_1930_, v___y_1931_, v___y_1932_, v___y_1933_);
lean_dec(v___y_1933_);
lean_dec_ref(v___y_1932_);
lean_dec(v___y_1931_);
lean_dec_ref(v___y_1930_);
lean_dec(v___y_1929_);
lean_dec_ref(v___y_1928_);
lean_dec_ref(v_a_1924_);
return v_res_1937_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_implies___lam__5(lean_object* v_body_1938_, lean_object* v_body_1939_, uint8_t v_a_1940_, uint8_t v___x_1941_, lean_object* v_a_1942_, lean_object* v_x_1943_, lean_object* v___y_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_, lean_object* v___y_1949_){
_start:
{
lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; 
v___x_1951_ = lean_expr_instantiate1(v_body_1938_, v_x_1943_);
v___x_1952_ = lean_expr_instantiate1(v_body_1939_, v_x_1943_);
v___x_1953_ = lp_vampireReplay_Vampire_Reconstruct_implies(v___x_1951_, v___x_1952_, v___y_1944_, v___y_1945_, v___y_1946_, v___y_1947_, v___y_1948_, v___y_1949_);
if (lean_obj_tag(v___x_1953_) == 0)
{
lean_object* v_a_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___f_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; 
v_a_1954_ = lean_ctor_get(v___x_1953_, 0);
lean_inc(v_a_1954_);
lean_dec_ref_known(v___x_1953_, 1);
v___x_1955_ = lean_box(v_a_1940_);
v___x_1956_ = lean_box(v___x_1941_);
v___f_1957_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_implies___lam__4___boxed), 12, 4);
lean_closure_set(v___f_1957_, 0, v_x_1943_);
lean_closure_set(v___f_1957_, 1, v_a_1954_);
lean_closure_set(v___f_1957_, 2, v___x_1955_);
lean_closure_set(v___f_1957_, 3, v___x_1956_);
v___x_1958_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_implies_spec__2___closed__2));
v___x_1959_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_1958_, v_a_1942_, v___f_1957_, v___y_1944_, v___y_1945_, v___y_1946_, v___y_1947_, v___y_1948_, v___y_1949_);
return v___x_1959_;
}
else
{
lean_dec_ref(v_x_1943_);
lean_dec_ref(v_a_1942_);
return v___x_1953_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_implies___lam__5___boxed(lean_object* v_body_1960_, lean_object* v_body_1961_, lean_object* v_a_1962_, lean_object* v___x_1963_, lean_object* v_a_1964_, lean_object* v_x_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_){
_start:
{
uint8_t v_a_51080__boxed_1973_; uint8_t v___x_51081__boxed_1974_; lean_object* v_res_1975_; 
v_a_51080__boxed_1973_ = lean_unbox(v_a_1962_);
v___x_51081__boxed_1974_ = lean_unbox(v___x_1963_);
v_res_1975_ = lp_vampireReplay_Vampire_Reconstruct_implies___lam__5(v_body_1960_, v_body_1961_, v_a_51080__boxed_1973_, v___x_51081__boxed_1974_, v_a_1964_, v_x_1965_, v___y_1966_, v___y_1967_, v___y_1968_, v___y_1969_, v___y_1970_, v___y_1971_);
lean_dec(v___y_1971_);
lean_dec_ref(v___y_1970_);
lean_dec(v___y_1969_);
lean_dec_ref(v___y_1968_);
lean_dec(v___y_1967_);
lean_dec_ref(v___y_1966_);
lean_dec_ref(v_body_1961_);
lean_dec_ref(v_body_1960_);
return v_res_1975_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_implies___closed__3(void){
_start:
{
lean_object* v___x_1977_; lean_object* v___x_1978_; 
v___x_1977_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_implies___closed__2));
v___x_1978_ = l_Lean_stringToMessageData(v___x_1977_);
return v___x_1978_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_implies___closed__5(void){
_start:
{
lean_object* v___x_1980_; lean_object* v___x_1981_; 
v___x_1980_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_implies___closed__4));
v___x_1981_ = l_Lean_stringToMessageData(v___x_1980_);
return v___x_1981_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_implies(lean_object* v_source_1985_, lean_object* v_target_1986_, lean_object* v_a_1987_, lean_object* v_a_1988_, lean_object* v_a_1989_, lean_object* v_a_1990_, lean_object* v_a_1991_, lean_object* v_a_1992_){
_start:
{
lean_object* v___x_1994_; 
v___x_1994_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_source_1985_, v_a_1990_);
if (lean_obj_tag(v___x_1994_) == 0)
{
lean_object* v_a_1995_; lean_object* v___x_1996_; 
v_a_1995_ = lean_ctor_get(v___x_1994_, 0);
lean_inc(v_a_1995_);
lean_dec_ref_known(v___x_1994_, 1);
v___x_1996_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_target_1986_, v_a_1990_);
if (lean_obj_tag(v___x_1996_) == 0)
{
lean_object* v_a_1997_; lean_object* v___x_1998_; 
v_a_1997_ = lean_ctor_get(v___x_1996_, 0);
lean_inc_n(v_a_1997_, 2);
lean_dec_ref_known(v___x_1996_, 1);
lean_inc(v_a_1995_);
v___x_1998_ = l_Lean_Meta_isExprDefEq(v_a_1995_, v_a_1997_, v_a_1989_, v_a_1990_, v_a_1991_, v_a_1992_);
if (lean_obj_tag(v___x_1998_) == 0)
{
lean_object* v_a_1999_; uint8_t v___x_2000_; uint8_t v___y_2002_; lean_object* v___y_2003_; lean_object* v___y_2004_; lean_object* v___y_2005_; lean_object* v___y_2006_; lean_object* v___y_2007_; lean_object* v___y_2008_; uint8_t v___y_2009_; lean_object* v___y_2010_; lean_object* v___y_2011_; lean_object* v___y_2012_; uint8_t v___y_2033_; uint8_t v___y_2034_; lean_object* v___y_2035_; lean_object* v___y_2036_; lean_object* v___y_2037_; lean_object* v___y_2038_; lean_object* v___y_2039_; lean_object* v___y_2040_; uint8_t v___y_2056_; lean_object* v___y_2057_; lean_object* v___y_2058_; uint8_t v___y_2059_; lean_object* v___y_2060_; lean_object* v___y_2061_; lean_object* v___y_2062_; lean_object* v___y_2063_; lean_object* v___y_2064_; uint8_t v___y_2065_; lean_object* v___y_2092_; lean_object* v___y_2093_; lean_object* v___y_2094_; lean_object* v___y_2095_; lean_object* v___y_2096_; lean_object* v___y_2097_; uint8_t v___x_2107_; 
v_a_1999_ = lean_ctor_get(v___x_1998_, 0);
lean_inc(v_a_1999_);
lean_dec_ref_known(v___x_1998_, 1);
v___x_2000_ = 1;
v___x_2107_ = lean_unbox(v_a_1999_);
if (v___x_2107_ == 0)
{
if (lean_obj_tag(v_a_1995_) == 7)
{
if (lean_obj_tag(v_a_1997_) == 7)
{
lean_object* v_binderType_2108_; lean_object* v_body_2109_; lean_object* v_binderType_2110_; lean_object* v_body_2111_; lean_object* v___x_2112_; 
v_binderType_2108_ = lean_ctor_get(v_a_1995_, 1);
lean_inc_ref_n(v_binderType_2108_, 2);
v_body_2109_ = lean_ctor_get(v_a_1995_, 2);
v_binderType_2110_ = lean_ctor_get(v_a_1997_, 1);
v_body_2111_ = lean_ctor_get(v_a_1997_, 2);
lean_inc_ref(v_binderType_2110_);
v___x_2112_ = l_Lean_Meta_isExprDefEq(v_binderType_2108_, v_binderType_2110_, v_a_1989_, v_a_1990_, v_a_1991_, v_a_1992_);
if (lean_obj_tag(v___x_2112_) == 0)
{
lean_object* v_a_2113_; lean_object* v___x_2114_; lean_object* v___f_2115_; lean_object* v___y_2117_; lean_object* v___y_2118_; lean_object* v___y_2119_; lean_object* v___y_2120_; lean_object* v___y_2121_; lean_object* v___y_2122_; uint8_t v___x_2125_; 
v_a_2113_ = lean_ctor_get(v___x_2112_, 0);
lean_inc(v_a_2113_);
lean_dec_ref_known(v___x_2112_, 1);
v___x_2114_ = lean_box(v___x_2000_);
lean_inc_ref(v_a_1995_);
lean_inc_ref(v_body_2111_);
lean_inc_ref(v_body_2109_);
v___f_2115_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_implies___lam__5___boxed), 13, 5);
lean_closure_set(v___f_2115_, 0, v_body_2109_);
lean_closure_set(v___f_2115_, 1, v_body_2111_);
lean_closure_set(v___f_2115_, 2, v_a_1999_);
lean_closure_set(v___f_2115_, 3, v___x_2114_);
lean_closure_set(v___f_2115_, 4, v_a_1995_);
v___x_2125_ = lean_unbox(v_a_2113_);
lean_dec(v_a_2113_);
if (v___x_2125_ == 0)
{
lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; 
v___x_2126_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_implies___closed__3, &lp_vampireReplay_Vampire_Reconstruct_implies___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_implies___closed__3);
v___x_2127_ = l_Lean_indentExpr(v_a_1995_);
v___x_2128_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2128_, 0, v___x_2126_);
lean_ctor_set(v___x_2128_, 1, v___x_2127_);
v___x_2129_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_implies___closed__5, &lp_vampireReplay_Vampire_Reconstruct_implies___closed__5_once, _init_lp_vampireReplay_Vampire_Reconstruct_implies___closed__5);
v___x_2130_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2130_, 0, v___x_2128_);
lean_ctor_set(v___x_2130_, 1, v___x_2129_);
v___x_2131_ = l_Lean_indentExpr(v_a_1997_);
v___x_2132_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2132_, 0, v___x_2130_);
lean_ctor_set(v___x_2132_, 1, v___x_2131_);
v___x_2133_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2132_, v_a_1989_, v_a_1990_, v_a_1991_, v_a_1992_);
if (lean_obj_tag(v___x_2133_) == 0)
{
lean_dec_ref_known(v___x_2133_, 1);
v___y_2117_ = v_a_1987_;
v___y_2118_ = v_a_1988_;
v___y_2119_ = v_a_1989_;
v___y_2120_ = v_a_1990_;
v___y_2121_ = v_a_1991_;
v___y_2122_ = v_a_1992_;
goto v___jp_2116_;
}
else
{
lean_object* v_a_2134_; lean_object* v___x_2136_; uint8_t v_isShared_2137_; uint8_t v_isSharedCheck_2141_; 
lean_dec_ref(v___f_2115_);
lean_dec_ref(v_binderType_2108_);
v_a_2134_ = lean_ctor_get(v___x_2133_, 0);
v_isSharedCheck_2141_ = !lean_is_exclusive(v___x_2133_);
if (v_isSharedCheck_2141_ == 0)
{
v___x_2136_ = v___x_2133_;
v_isShared_2137_ = v_isSharedCheck_2141_;
goto v_resetjp_2135_;
}
else
{
lean_inc(v_a_2134_);
lean_dec(v___x_2133_);
v___x_2136_ = lean_box(0);
v_isShared_2137_ = v_isSharedCheck_2141_;
goto v_resetjp_2135_;
}
v_resetjp_2135_:
{
lean_object* v___x_2139_; 
if (v_isShared_2137_ == 0)
{
v___x_2139_ = v___x_2136_;
goto v_reusejp_2138_;
}
else
{
lean_object* v_reuseFailAlloc_2140_; 
v_reuseFailAlloc_2140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2140_, 0, v_a_2134_);
v___x_2139_ = v_reuseFailAlloc_2140_;
goto v_reusejp_2138_;
}
v_reusejp_2138_:
{
return v___x_2139_;
}
}
}
}
else
{
lean_dec_ref_known(v_a_1997_, 3);
lean_dec_ref_known(v_a_1995_, 3);
v___y_2117_ = v_a_1987_;
v___y_2118_ = v_a_1988_;
v___y_2119_ = v_a_1989_;
v___y_2120_ = v_a_1990_;
v___y_2121_ = v_a_1991_;
v___y_2122_ = v_a_1992_;
goto v___jp_2116_;
}
v___jp_2116_:
{
lean_object* v___x_2123_; lean_object* v___x_2124_; 
v___x_2123_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__6));
v___x_2124_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_2123_, v_binderType_2108_, v___f_2115_, v___y_2117_, v___y_2118_, v___y_2119_, v___y_2120_, v___y_2121_, v___y_2122_);
return v___x_2124_;
}
}
else
{
lean_object* v_a_2142_; lean_object* v___x_2144_; uint8_t v_isShared_2145_; uint8_t v_isSharedCheck_2149_; 
lean_dec_ref(v_binderType_2108_);
lean_dec_ref_known(v_a_1997_, 3);
lean_dec_ref_known(v_a_1995_, 3);
lean_dec(v_a_1999_);
v_a_2142_ = lean_ctor_get(v___x_2112_, 0);
v_isSharedCheck_2149_ = !lean_is_exclusive(v___x_2112_);
if (v_isSharedCheck_2149_ == 0)
{
v___x_2144_ = v___x_2112_;
v_isShared_2145_ = v_isSharedCheck_2149_;
goto v_resetjp_2143_;
}
else
{
lean_inc(v_a_2142_);
lean_dec(v___x_2112_);
v___x_2144_ = lean_box(0);
v_isShared_2145_ = v_isSharedCheck_2149_;
goto v_resetjp_2143_;
}
v_resetjp_2143_:
{
lean_object* v___x_2147_; 
if (v_isShared_2145_ == 0)
{
v___x_2147_ = v___x_2144_;
goto v_reusejp_2146_;
}
else
{
lean_object* v_reuseFailAlloc_2148_; 
v_reuseFailAlloc_2148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2148_, 0, v_a_2142_);
v___x_2147_ = v_reuseFailAlloc_2148_;
goto v_reusejp_2146_;
}
v_reusejp_2146_:
{
return v___x_2147_;
}
}
}
}
else
{
v___y_2092_ = v_a_1987_;
v___y_2093_ = v_a_1988_;
v___y_2094_ = v_a_1989_;
v___y_2095_ = v_a_1990_;
v___y_2096_ = v_a_1991_;
v___y_2097_ = v_a_1992_;
goto v___jp_2091_;
}
}
else
{
v___y_2092_ = v_a_1987_;
v___y_2093_ = v_a_1988_;
v___y_2094_ = v_a_1989_;
v___y_2095_ = v_a_1990_;
v___y_2096_ = v_a_1991_;
v___y_2097_ = v_a_1992_;
goto v___jp_2091_;
}
}
else
{
lean_object* v___f_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; 
lean_dec(v_a_1999_);
lean_dec(v_a_1997_);
v___f_2150_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_implies___closed__6));
v___x_2151_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_implies_spec__2___closed__2));
v___x_2152_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_2151_, v_a_1995_, v___f_2150_, v_a_1987_, v_a_1988_, v_a_1989_, v_a_1990_, v_a_1991_, v_a_1992_);
return v___x_2152_;
}
v___jp_2001_:
{
lean_object* v___x_2013_; size_t v_sz_2014_; size_t v___x_2015_; lean_object* v___x_2016_; 
lean_inc(v_a_1995_);
v___x_2013_ = lp_vampireReplay_Vampire_Reconstruct_junctionParts(v___y_2010_, v_a_1995_);
v_sz_2014_ = lean_array_size(v___x_2013_);
v___x_2015_ = ((size_t)0ULL);
v___x_2016_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0(v_a_1997_, v___y_2009_, v___y_2012_, v_sz_2014_, v___x_2015_, v___x_2013_, v___y_2007_, v___y_2008_, v___y_2011_, v___y_2004_, v___y_2003_, v___y_2006_);
lean_dec_ref(v___y_2012_);
if (lean_obj_tag(v___x_2016_) == 0)
{
lean_object* v_a_2017_; lean_object* v___f_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___f_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; 
v_a_2017_ = lean_ctor_get(v___x_2016_, 0);
lean_inc(v_a_2017_);
lean_dec_ref_known(v___x_2016_, 1);
v___f_2018_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_implies___lam__0___boxed), 10, 1);
lean_closure_set(v___f_2018_, 0, v_a_2017_);
v___x_2019_ = lean_box(v___y_2002_);
v___x_2020_ = lean_box(v___x_2000_);
lean_inc(v_a_1995_);
v___f_2021_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_implies___lam__1___boxed), 13, 5);
lean_closure_set(v___f_2021_, 0, v_a_1995_);
lean_closure_set(v___f_2021_, 1, v___y_2005_);
lean_closure_set(v___f_2021_, 2, v___f_2018_);
lean_closure_set(v___f_2021_, 3, v___x_2019_);
lean_closure_set(v___f_2021_, 4, v___x_2020_);
v___x_2022_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_implies_spec__2___closed__2));
v___x_2023_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_2022_, v_a_1995_, v___f_2021_, v___y_2007_, v___y_2008_, v___y_2011_, v___y_2004_, v___y_2003_, v___y_2006_);
return v___x_2023_;
}
else
{
lean_object* v_a_2024_; lean_object* v___x_2026_; uint8_t v_isShared_2027_; uint8_t v_isSharedCheck_2031_; 
lean_dec(v___y_2005_);
lean_dec(v_a_1995_);
v_a_2024_ = lean_ctor_get(v___x_2016_, 0);
v_isSharedCheck_2031_ = !lean_is_exclusive(v___x_2016_);
if (v_isSharedCheck_2031_ == 0)
{
v___x_2026_ = v___x_2016_;
v_isShared_2027_ = v_isSharedCheck_2031_;
goto v_resetjp_2025_;
}
else
{
lean_inc(v_a_2024_);
lean_dec(v___x_2016_);
v___x_2026_ = lean_box(0);
v_isShared_2027_ = v_isSharedCheck_2031_;
goto v_resetjp_2025_;
}
v_resetjp_2025_:
{
lean_object* v___x_2029_; 
if (v_isShared_2027_ == 0)
{
v___x_2029_ = v___x_2026_;
goto v_reusejp_2028_;
}
else
{
lean_object* v_reuseFailAlloc_2030_; 
v_reuseFailAlloc_2030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2030_, 0, v_a_2024_);
v___x_2029_ = v_reuseFailAlloc_2030_;
goto v_reusejp_2028_;
}
v_reusejp_2028_:
{
return v___x_2029_;
}
}
}
}
v___jp_2032_:
{
lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; uint8_t v___x_2047_; 
v___x_2041_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__16));
lean_inc(v_a_1997_);
v___x_2042_ = lp_vampireReplay_Vampire_Reconstruct_junctionParts(v___x_2041_, v_a_1997_);
v___x_2043_ = lean_unsigned_to_nat(0u);
v___x_2044_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_implies___closed__1, &lp_vampireReplay_Vampire_Reconstruct_implies___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_implies___closed__1);
v___x_2045_ = l_Array_zipIdx___redArg(v___x_2042_, v___x_2043_);
v___x_2046_ = lean_array_get_size(v___x_2045_);
v___x_2047_ = lean_nat_dec_lt(v___x_2043_, v___x_2046_);
if (v___x_2047_ == 0)
{
lean_dec_ref(v___x_2045_);
v___y_2002_ = v___y_2033_;
v___y_2003_ = v___y_2039_;
v___y_2004_ = v___y_2038_;
v___y_2005_ = v___x_2043_;
v___y_2006_ = v___y_2040_;
v___y_2007_ = v___y_2035_;
v___y_2008_ = v___y_2036_;
v___y_2009_ = v___y_2034_;
v___y_2010_ = v___x_2041_;
v___y_2011_ = v___y_2037_;
v___y_2012_ = v___x_2044_;
goto v___jp_2001_;
}
else
{
uint8_t v___x_2048_; 
v___x_2048_ = lean_nat_dec_le(v___x_2046_, v___x_2046_);
if (v___x_2048_ == 0)
{
if (v___x_2047_ == 0)
{
lean_dec_ref(v___x_2045_);
v___y_2002_ = v___y_2033_;
v___y_2003_ = v___y_2039_;
v___y_2004_ = v___y_2038_;
v___y_2005_ = v___x_2043_;
v___y_2006_ = v___y_2040_;
v___y_2007_ = v___y_2035_;
v___y_2008_ = v___y_2036_;
v___y_2009_ = v___y_2034_;
v___y_2010_ = v___x_2041_;
v___y_2011_ = v___y_2037_;
v___y_2012_ = v___x_2044_;
goto v___jp_2001_;
}
else
{
size_t v___x_2049_; size_t v___x_2050_; lean_object* v___x_2051_; 
v___x_2049_ = ((size_t)0ULL);
v___x_2050_ = lean_usize_of_nat(v___x_2046_);
v___x_2051_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_implies_spec__1(v___x_2045_, v___x_2049_, v___x_2050_, v___x_2044_);
lean_dec_ref(v___x_2045_);
v___y_2002_ = v___y_2033_;
v___y_2003_ = v___y_2039_;
v___y_2004_ = v___y_2038_;
v___y_2005_ = v___x_2043_;
v___y_2006_ = v___y_2040_;
v___y_2007_ = v___y_2035_;
v___y_2008_ = v___y_2036_;
v___y_2009_ = v___y_2034_;
v___y_2010_ = v___x_2041_;
v___y_2011_ = v___y_2037_;
v___y_2012_ = v___x_2051_;
goto v___jp_2001_;
}
}
else
{
size_t v___x_2052_; size_t v___x_2053_; lean_object* v___x_2054_; 
v___x_2052_ = ((size_t)0ULL);
v___x_2053_ = lean_usize_of_nat(v___x_2046_);
v___x_2054_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_implies_spec__1(v___x_2045_, v___x_2052_, v___x_2053_, v___x_2044_);
lean_dec_ref(v___x_2045_);
v___y_2002_ = v___y_2033_;
v___y_2003_ = v___y_2039_;
v___y_2004_ = v___y_2038_;
v___y_2005_ = v___x_2043_;
v___y_2006_ = v___y_2040_;
v___y_2007_ = v___y_2035_;
v___y_2008_ = v___y_2036_;
v___y_2009_ = v___y_2034_;
v___y_2010_ = v___x_2041_;
v___y_2011_ = v___y_2037_;
v___y_2012_ = v___x_2054_;
goto v___jp_2001_;
}
}
}
v___jp_2055_:
{
if (v___y_2065_ == 0)
{
v___y_2033_ = v___y_2056_;
v___y_2034_ = v___y_2059_;
v___y_2035_ = v___y_2057_;
v___y_2036_ = v___y_2063_;
v___y_2037_ = v___y_2064_;
v___y_2038_ = v___y_2061_;
v___y_2039_ = v___y_2058_;
v___y_2040_ = v___y_2062_;
goto v___jp_2032_;
}
else
{
lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; size_t v_sz_2070_; size_t v___x_2071_; lean_object* v___x_2072_; 
lean_inc_n(v_a_1995_, 2);
v___x_2066_ = lp_vampireReplay_Vampire_Reconstruct_junctionParts(v___y_2060_, v_a_1995_);
v___x_2067_ = lean_unsigned_to_nat(0u);
v___x_2068_ = l_Array_zipIdx___redArg(v___x_2066_, v___x_2067_);
v___x_2069_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_implies_spec__2___closed__0));
v_sz_2070_ = lean_array_size(v___x_2068_);
v___x_2071_ = ((size_t)0ULL);
lean_inc(v_a_1997_);
v___x_2072_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_implies_spec__2(v_a_1995_, v___y_2059_, v_a_1997_, v___x_2068_, v_sz_2070_, v___x_2071_, v___x_2069_, v___y_2057_, v___y_2063_, v___y_2064_, v___y_2061_, v___y_2058_, v___y_2062_);
lean_dec_ref(v___x_2068_);
if (lean_obj_tag(v___x_2072_) == 0)
{
lean_object* v_a_2073_; lean_object* v___x_2075_; uint8_t v_isShared_2076_; uint8_t v_isSharedCheck_2082_; 
v_a_2073_ = lean_ctor_get(v___x_2072_, 0);
v_isSharedCheck_2082_ = !lean_is_exclusive(v___x_2072_);
if (v_isSharedCheck_2082_ == 0)
{
v___x_2075_ = v___x_2072_;
v_isShared_2076_ = v_isSharedCheck_2082_;
goto v_resetjp_2074_;
}
else
{
lean_inc(v_a_2073_);
lean_dec(v___x_2072_);
v___x_2075_ = lean_box(0);
v_isShared_2076_ = v_isSharedCheck_2082_;
goto v_resetjp_2074_;
}
v_resetjp_2074_:
{
lean_object* v_fst_2077_; 
v_fst_2077_ = lean_ctor_get(v_a_2073_, 0);
lean_inc(v_fst_2077_);
lean_dec(v_a_2073_);
if (lean_obj_tag(v_fst_2077_) == 0)
{
lean_del_object(v___x_2075_);
v___y_2033_ = v___y_2056_;
v___y_2034_ = v___y_2059_;
v___y_2035_ = v___y_2057_;
v___y_2036_ = v___y_2063_;
v___y_2037_ = v___y_2064_;
v___y_2038_ = v___y_2061_;
v___y_2039_ = v___y_2058_;
v___y_2040_ = v___y_2062_;
goto v___jp_2032_;
}
else
{
lean_object* v_val_2078_; lean_object* v___x_2080_; 
lean_dec(v_a_1997_);
lean_dec(v_a_1995_);
v_val_2078_ = lean_ctor_get(v_fst_2077_, 0);
lean_inc(v_val_2078_);
lean_dec_ref_known(v_fst_2077_, 1);
if (v_isShared_2076_ == 0)
{
lean_ctor_set(v___x_2075_, 0, v_val_2078_);
v___x_2080_ = v___x_2075_;
goto v_reusejp_2079_;
}
else
{
lean_object* v_reuseFailAlloc_2081_; 
v_reuseFailAlloc_2081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2081_, 0, v_val_2078_);
v___x_2080_ = v_reuseFailAlloc_2081_;
goto v_reusejp_2079_;
}
v_reusejp_2079_:
{
return v___x_2080_;
}
}
}
}
else
{
lean_object* v_a_2083_; lean_object* v___x_2085_; uint8_t v_isShared_2086_; uint8_t v_isSharedCheck_2090_; 
lean_dec(v_a_1997_);
lean_dec(v_a_1995_);
v_a_2083_ = lean_ctor_get(v___x_2072_, 0);
v_isSharedCheck_2090_ = !lean_is_exclusive(v___x_2072_);
if (v_isSharedCheck_2090_ == 0)
{
v___x_2085_ = v___x_2072_;
v_isShared_2086_ = v_isSharedCheck_2090_;
goto v_resetjp_2084_;
}
else
{
lean_inc(v_a_2083_);
lean_dec(v___x_2072_);
v___x_2085_ = lean_box(0);
v_isShared_2086_ = v_isSharedCheck_2090_;
goto v_resetjp_2084_;
}
v_resetjp_2084_:
{
lean_object* v___x_2088_; 
if (v_isShared_2086_ == 0)
{
v___x_2088_ = v___x_2085_;
goto v_reusejp_2087_;
}
else
{
lean_object* v_reuseFailAlloc_2089_; 
v_reuseFailAlloc_2089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2089_, 0, v_a_2083_);
v___x_2088_ = v_reuseFailAlloc_2089_;
goto v_reusejp_2087_;
}
v_reusejp_2087_:
{
return v___x_2088_;
}
}
}
}
}
v___jp_2091_:
{
lean_object* v___x_2098_; lean_object* v___x_2099_; uint8_t v___x_2100_; 
v___x_2098_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__14));
v___x_2099_ = lean_unsigned_to_nat(2u);
v___x_2100_ = l_Lean_Expr_isAppOfArity(v_a_1997_, v___x_2098_, v___x_2099_);
if (v___x_2100_ == 0)
{
uint8_t v___x_2101_; 
lean_dec(v_a_1999_);
v___x_2101_ = l_Lean_Expr_isAppOfArity(v_a_1995_, v___x_2098_, v___x_2099_);
if (v___x_2101_ == 0)
{
v___y_2056_ = v___x_2100_;
v___y_2057_ = v___y_2092_;
v___y_2058_ = v___y_2096_;
v___y_2059_ = v___x_2100_;
v___y_2060_ = v___x_2098_;
v___y_2061_ = v___y_2095_;
v___y_2062_ = v___y_2097_;
v___y_2063_ = v___y_2093_;
v___y_2064_ = v___y_2094_;
v___y_2065_ = v___x_2101_;
goto v___jp_2055_;
}
else
{
if (v___x_2100_ == 0)
{
v___y_2056_ = v___x_2100_;
v___y_2057_ = v___y_2092_;
v___y_2058_ = v___y_2096_;
v___y_2059_ = v___x_2100_;
v___y_2060_ = v___x_2098_;
v___y_2061_ = v___y_2095_;
v___y_2062_ = v___y_2097_;
v___y_2063_ = v___y_2093_;
v___y_2064_ = v___y_2094_;
v___y_2065_ = v___x_2101_;
goto v___jp_2055_;
}
else
{
v___y_2056_ = v___x_2100_;
v___y_2057_ = v___y_2092_;
v___y_2058_ = v___y_2096_;
v___y_2059_ = v___x_2100_;
v___y_2060_ = v___x_2098_;
v___y_2061_ = v___y_2095_;
v___y_2062_ = v___y_2097_;
v___y_2063_ = v___y_2093_;
v___y_2064_ = v___y_2094_;
v___y_2065_ = v___x_2100_;
goto v___jp_2055_;
}
}
}
else
{
lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___f_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; 
lean_inc(v_a_1997_);
v___x_2102_ = lp_vampireReplay_Vampire_Reconstruct_junctionParts(v___x_2098_, v_a_1997_);
v___x_2103_ = lean_box(v___x_2000_);
lean_inc(v_a_1995_);
v___f_2104_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_implies___lam__3___boxed), 13, 5);
lean_closure_set(v___f_2104_, 0, v___x_2102_);
lean_closure_set(v___f_2104_, 1, v_a_1995_);
lean_closure_set(v___f_2104_, 2, v_a_1997_);
lean_closure_set(v___f_2104_, 3, v_a_1999_);
lean_closure_set(v___f_2104_, 4, v___x_2103_);
v___x_2105_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_implies_spec__2___closed__2));
v___x_2106_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_2105_, v_a_1995_, v___f_2104_, v___y_2092_, v___y_2093_, v___y_2094_, v___y_2095_, v___y_2096_, v___y_2097_);
return v___x_2106_;
}
}
}
else
{
lean_object* v_a_2153_; lean_object* v___x_2155_; uint8_t v_isShared_2156_; uint8_t v_isSharedCheck_2160_; 
lean_dec(v_a_1997_);
lean_dec(v_a_1995_);
v_a_2153_ = lean_ctor_get(v___x_1998_, 0);
v_isSharedCheck_2160_ = !lean_is_exclusive(v___x_1998_);
if (v_isSharedCheck_2160_ == 0)
{
v___x_2155_ = v___x_1998_;
v_isShared_2156_ = v_isSharedCheck_2160_;
goto v_resetjp_2154_;
}
else
{
lean_inc(v_a_2153_);
lean_dec(v___x_1998_);
v___x_2155_ = lean_box(0);
v_isShared_2156_ = v_isSharedCheck_2160_;
goto v_resetjp_2154_;
}
v_resetjp_2154_:
{
lean_object* v___x_2158_; 
if (v_isShared_2156_ == 0)
{
v___x_2158_ = v___x_2155_;
goto v_reusejp_2157_;
}
else
{
lean_object* v_reuseFailAlloc_2159_; 
v_reuseFailAlloc_2159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2159_, 0, v_a_2153_);
v___x_2158_ = v_reuseFailAlloc_2159_;
goto v_reusejp_2157_;
}
v_reusejp_2157_:
{
return v___x_2158_;
}
}
}
}
else
{
lean_dec(v_a_1995_);
return v___x_1996_;
}
}
else
{
lean_dec_ref(v_target_1986_);
return v___x_1994_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_implies___lam__2(lean_object* v___x_2161_, lean_object* v_a_2162_, lean_object* v_h_2163_, lean_object* v_j_2164_, lean_object* v___y_2165_, lean_object* v___y_2166_, lean_object* v___y_2167_, lean_object* v___y_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_){
_start:
{
lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; 
v___x_2172_ = l_Lean_instInhabitedExpr;
v___x_2173_ = lean_array_get_borrowed(v___x_2172_, v___x_2161_, v_j_2164_);
lean_inc(v___x_2173_);
v___x_2174_ = lp_vampireReplay_Vampire_Reconstruct_implies(v_a_2162_, v___x_2173_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_, v___y_2169_, v___y_2170_);
if (lean_obj_tag(v___x_2174_) == 0)
{
lean_object* v_a_2175_; lean_object* v___x_2177_; uint8_t v_isShared_2178_; uint8_t v_isSharedCheck_2183_; 
v_a_2175_ = lean_ctor_get(v___x_2174_, 0);
v_isSharedCheck_2183_ = !lean_is_exclusive(v___x_2174_);
if (v_isSharedCheck_2183_ == 0)
{
v___x_2177_ = v___x_2174_;
v_isShared_2178_ = v_isSharedCheck_2183_;
goto v_resetjp_2176_;
}
else
{
lean_inc(v_a_2175_);
lean_dec(v___x_2174_);
v___x_2177_ = lean_box(0);
v_isShared_2178_ = v_isSharedCheck_2183_;
goto v_resetjp_2176_;
}
v_resetjp_2176_:
{
lean_object* v___x_2179_; lean_object* v___x_2181_; 
v___x_2179_ = l_Lean_Expr_app___override(v_a_2175_, v_h_2163_);
if (v_isShared_2178_ == 0)
{
lean_ctor_set(v___x_2177_, 0, v___x_2179_);
v___x_2181_ = v___x_2177_;
goto v_reusejp_2180_;
}
else
{
lean_object* v_reuseFailAlloc_2182_; 
v_reuseFailAlloc_2182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2182_, 0, v___x_2179_);
v___x_2181_ = v_reuseFailAlloc_2182_;
goto v_reusejp_2180_;
}
v_reusejp_2180_:
{
return v___x_2181_;
}
}
}
else
{
lean_dec_ref(v_h_2163_);
return v___x_2174_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_implies___boxed(lean_object* v_source_2184_, lean_object* v_target_2185_, lean_object* v_a_2186_, lean_object* v_a_2187_, lean_object* v_a_2188_, lean_object* v_a_2189_, lean_object* v_a_2190_, lean_object* v_a_2191_, lean_object* v_a_2192_){
_start:
{
lean_object* v_res_2193_; 
v_res_2193_ = lp_vampireReplay_Vampire_Reconstruct_implies(v_source_2184_, v_target_2185_, v_a_2186_, v_a_2187_, v_a_2188_, v_a_2189_, v_a_2190_, v_a_2191_);
lean_dec(v_a_2191_);
lean_dec_ref(v_a_2190_);
lean_dec(v_a_2189_);
lean_dec_ref(v_a_2188_);
lean_dec(v_a_2187_);
lean_dec_ref(v_a_2186_);
return v_res_2193_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg(lean_object* v_fn_2211_, lean_object* v_unit_2212_, lean_object* v_parts_2213_, lean_object* v_a_2214_, lean_object* v_a_2215_, lean_object* v_a_2216_, lean_object* v_a_2217_){
_start:
{
lean_object* v___x_2219_; lean_object* v___x_2220_; uint8_t v___x_2221_; 
v___x_2219_ = lean_unsigned_to_nat(0u);
v___x_2220_ = lean_array_get_size(v_parts_2213_);
v___x_2221_ = lean_nat_dec_lt(v___x_2219_, v___x_2220_);
if (v___x_2221_ == 0)
{
lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; 
lean_dec(v_fn_2211_);
v___x_2222_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__11));
v___x_2223_ = lean_box(0);
v___x_2224_ = l_Lean_Expr_const___override(v_unit_2212_, v___x_2223_);
v___x_2225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2225_, 0, v___x_2224_);
v___x_2226_ = lean_unsigned_to_nat(1u);
v___x_2227_ = lean_mk_empty_array_with_capacity(v___x_2226_);
v___x_2228_ = lean_array_push(v___x_2227_, v___x_2225_);
v___x_2229_ = l_Lean_Meta_mkAppOptM(v___x_2222_, v___x_2228_, v_a_2214_, v_a_2215_, v_a_2216_, v_a_2217_);
if (lean_obj_tag(v___x_2229_) == 0)
{
lean_object* v_a_2230_; lean_object* v___x_2232_; uint8_t v_isShared_2233_; uint8_t v_isSharedCheck_2239_; 
v_a_2230_ = lean_ctor_get(v___x_2229_, 0);
v_isSharedCheck_2239_ = !lean_is_exclusive(v___x_2229_);
if (v_isSharedCheck_2239_ == 0)
{
v___x_2232_ = v___x_2229_;
v_isShared_2233_ = v_isSharedCheck_2239_;
goto v_resetjp_2231_;
}
else
{
lean_inc(v_a_2230_);
lean_dec(v___x_2229_);
v___x_2232_ = lean_box(0);
v_isShared_2233_ = v_isSharedCheck_2239_;
goto v_resetjp_2231_;
}
v_resetjp_2231_:
{
lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2237_; 
v___x_2234_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__0));
v___x_2235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2235_, 0, v___x_2234_);
lean_ctor_set(v___x_2235_, 1, v_a_2230_);
if (v_isShared_2233_ == 0)
{
lean_ctor_set(v___x_2232_, 0, v___x_2235_);
v___x_2237_ = v___x_2232_;
goto v_reusejp_2236_;
}
else
{
lean_object* v_reuseFailAlloc_2238_; 
v_reuseFailAlloc_2238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2238_, 0, v___x_2235_);
v___x_2237_ = v_reuseFailAlloc_2238_;
goto v_reusejp_2236_;
}
v_reusejp_2236_:
{
return v___x_2237_;
}
}
}
else
{
lean_object* v_a_2240_; lean_object* v___x_2242_; uint8_t v_isShared_2243_; uint8_t v_isSharedCheck_2247_; 
v_a_2240_ = lean_ctor_get(v___x_2229_, 0);
v_isSharedCheck_2247_ = !lean_is_exclusive(v___x_2229_);
if (v_isSharedCheck_2247_ == 0)
{
v___x_2242_ = v___x_2229_;
v_isShared_2243_ = v_isSharedCheck_2247_;
goto v_resetjp_2241_;
}
else
{
lean_inc(v_a_2240_);
lean_dec(v___x_2229_);
v___x_2242_ = lean_box(0);
v_isShared_2243_ = v_isSharedCheck_2247_;
goto v_resetjp_2241_;
}
v_resetjp_2241_:
{
lean_object* v___x_2245_; 
if (v_isShared_2243_ == 0)
{
v___x_2245_ = v___x_2242_;
goto v_reusejp_2244_;
}
else
{
lean_object* v_reuseFailAlloc_2246_; 
v_reuseFailAlloc_2246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2246_, 0, v_a_2240_);
v___x_2245_ = v_reuseFailAlloc_2246_;
goto v_reusejp_2244_;
}
v_reusejp_2244_:
{
return v___x_2245_;
}
}
}
}
else
{
lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___y_2252_; lean_object* v___y_2253_; lean_object* v___y_2254_; uint8_t v___x_2387_; 
v___x_2248_ = lean_array_fget_borrowed(v_parts_2213_, v___x_2219_);
lean_inc(v___x_2248_);
v___x_2249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2249_, 0, v___x_2248_);
v___x_2250_ = lean_unsigned_to_nat(1u);
v___x_2387_ = lean_nat_dec_eq(v___x_2220_, v___x_2250_);
if (v___x_2387_ == 0)
{
lean_object* v___x_2388_; uint8_t v___x_2389_; lean_object* v___y_2391_; lean_object* v___y_2392_; lean_object* v___y_2396_; 
v___x_2388_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__14));
v___x_2389_ = lean_name_eq(v_fn_2211_, v___x_2388_);
if (v___x_2389_ == 0)
{
lean_object* v___x_2399_; 
v___x_2399_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__6));
v___y_2396_ = v___x_2399_;
goto v___jp_2395_;
}
else
{
lean_object* v___x_2400_; 
v___x_2400_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__3));
v___y_2396_ = v___x_2400_;
goto v___jp_2395_;
}
v___jp_2390_:
{
if (v___x_2389_ == 0)
{
lean_object* v___x_2393_; 
v___x_2393_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__4));
v___y_2252_ = v___y_2392_;
v___y_2253_ = v___y_2391_;
v___y_2254_ = v___x_2393_;
goto v___jp_2251_;
}
else
{
lean_object* v___x_2394_; 
v___x_2394_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__6));
v___y_2252_ = v___y_2392_;
v___y_2253_ = v___y_2391_;
v___y_2254_ = v___x_2394_;
goto v___jp_2251_;
}
}
v___jp_2395_:
{
if (v___x_2389_ == 0)
{
lean_object* v___x_2397_; 
v___x_2397_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__8));
v___y_2391_ = v___y_2396_;
v___y_2392_ = v___x_2397_;
goto v___jp_2390_;
}
else
{
lean_object* v___x_2398_; 
v___x_2398_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__10));
v___y_2391_ = v___y_2396_;
v___y_2392_ = v___x_2398_;
goto v___jp_2390_;
}
}
}
else
{
lean_object* v___x_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; 
lean_dec(v_fn_2211_);
v___x_2401_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__11));
v___x_2402_ = lean_mk_empty_array_with_capacity(v___x_2250_);
lean_inc_ref(v___x_2402_);
v___x_2403_ = lean_array_push(v___x_2402_, v___x_2249_);
v___x_2404_ = l_Lean_Meta_mkAppOptM(v___x_2401_, v___x_2403_, v_a_2214_, v_a_2215_, v_a_2216_, v_a_2217_);
if (lean_obj_tag(v___x_2404_) == 0)
{
lean_object* v_a_2405_; lean_object* v___x_2407_; uint8_t v_isShared_2408_; uint8_t v_isSharedCheck_2418_; 
v_a_2405_ = lean_ctor_get(v___x_2404_, 0);
v_isSharedCheck_2418_ = !lean_is_exclusive(v___x_2404_);
if (v_isSharedCheck_2418_ == 0)
{
v___x_2407_ = v___x_2404_;
v_isShared_2408_ = v_isSharedCheck_2418_;
goto v_resetjp_2406_;
}
else
{
lean_inc(v_a_2405_);
lean_dec(v___x_2404_);
v___x_2407_ = lean_box(0);
v_isShared_2408_ = v_isSharedCheck_2418_;
goto v_resetjp_2406_;
}
v_resetjp_2406_:
{
lean_object* v___y_2410_; uint8_t v___x_2415_; 
v___x_2415_ = l_Lean_Expr_isConstOf(v___x_2248_, v_unit_2212_);
lean_dec(v_unit_2212_);
if (v___x_2415_ == 0)
{
lean_object* v___x_2416_; 
lean_inc(v___x_2248_);
v___x_2416_ = lean_array_push(v___x_2402_, v___x_2248_);
v___y_2410_ = v___x_2416_;
goto v___jp_2409_;
}
else
{
lean_object* v___x_2417_; 
lean_dec_ref(v___x_2402_);
v___x_2417_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__0));
v___y_2410_ = v___x_2417_;
goto v___jp_2409_;
}
v___jp_2409_:
{
lean_object* v___x_2411_; lean_object* v___x_2413_; 
v___x_2411_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2411_, 0, v___y_2410_);
lean_ctor_set(v___x_2411_, 1, v_a_2405_);
if (v_isShared_2408_ == 0)
{
lean_ctor_set(v___x_2407_, 0, v___x_2411_);
v___x_2413_ = v___x_2407_;
goto v_reusejp_2412_;
}
else
{
lean_object* v_reuseFailAlloc_2414_; 
v_reuseFailAlloc_2414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2414_, 0, v___x_2411_);
v___x_2413_ = v_reuseFailAlloc_2414_;
goto v_reusejp_2412_;
}
v_reusejp_2412_:
{
return v___x_2413_;
}
}
}
}
else
{
lean_object* v_a_2419_; lean_object* v___x_2421_; uint8_t v_isShared_2422_; uint8_t v_isSharedCheck_2426_; 
lean_dec_ref(v___x_2402_);
lean_dec(v_unit_2212_);
v_a_2419_ = lean_ctor_get(v___x_2404_, 0);
v_isSharedCheck_2426_ = !lean_is_exclusive(v___x_2404_);
if (v_isSharedCheck_2426_ == 0)
{
v___x_2421_ = v___x_2404_;
v_isShared_2422_ = v_isSharedCheck_2426_;
goto v_resetjp_2420_;
}
else
{
lean_inc(v_a_2419_);
lean_dec(v___x_2404_);
v___x_2421_ = lean_box(0);
v_isShared_2422_ = v_isSharedCheck_2426_;
goto v_resetjp_2420_;
}
v_resetjp_2420_:
{
lean_object* v___x_2424_; 
if (v_isShared_2422_ == 0)
{
v___x_2424_ = v___x_2421_;
goto v_reusejp_2423_;
}
else
{
lean_object* v_reuseFailAlloc_2425_; 
v_reuseFailAlloc_2425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2425_, 0, v_a_2419_);
v___x_2424_ = v_reuseFailAlloc_2425_;
goto v_reusejp_2423_;
}
v_reusejp_2423_:
{
return v___x_2424_;
}
}
}
}
v___jp_2251_:
{
lean_object* v_rest_2255_; lean_object* v_tail_2256_; lean_object* v___x_2257_; 
v_rest_2255_ = l_Array_extract___redArg(v_parts_2213_, v___x_2250_, v___x_2220_);
lean_inc_ref(v_rest_2255_);
lean_inc_n(v_unit_2212_, 2);
lean_inc(v_fn_2211_);
v_tail_2256_ = lp_vampireReplay_Vampire_Reconstruct_junction(v_fn_2211_, v_unit_2212_, v_rest_2255_);
v___x_2257_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg(v_fn_2211_, v_unit_2212_, v_rest_2255_, v_a_2214_, v_a_2215_, v_a_2216_, v_a_2217_);
lean_dec_ref(v_rest_2255_);
if (lean_obj_tag(v___x_2257_) == 0)
{
lean_object* v_a_2258_; lean_object* v_fst_2259_; lean_object* v_snd_2260_; lean_object* v___x_2262_; uint8_t v_isShared_2263_; uint8_t v_isSharedCheck_2386_; 
v_a_2258_ = lean_ctor_get(v___x_2257_, 0);
lean_inc(v_a_2258_);
lean_dec_ref_known(v___x_2257_, 1);
v_fst_2259_ = lean_ctor_get(v_a_2258_, 0);
v_snd_2260_ = lean_ctor_get(v_a_2258_, 1);
v_isSharedCheck_2386_ = !lean_is_exclusive(v_a_2258_);
if (v_isSharedCheck_2386_ == 0)
{
v___x_2262_ = v_a_2258_;
v_isShared_2263_ = v_isSharedCheck_2386_;
goto v_resetjp_2261_;
}
else
{
lean_inc(v_snd_2260_);
lean_inc(v_fst_2259_);
lean_dec(v_a_2258_);
v___x_2262_ = lean_box(0);
v_isShared_2263_ = v_isSharedCheck_2386_;
goto v_resetjp_2261_;
}
v_resetjp_2261_:
{
uint8_t v___x_2264_; 
v___x_2264_ = l_Lean_Expr_isConstOf(v___x_2248_, v_unit_2212_);
lean_dec(v_unit_2212_);
if (v___x_2264_ == 0)
{
lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; 
lean_dec_ref(v_tail_2256_);
v___x_2265_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__11));
v___x_2266_ = lean_mk_empty_array_with_capacity(v___x_2250_);
lean_inc_ref(v___x_2266_);
v___x_2267_ = lean_array_push(v___x_2266_, v___x_2249_);
v___x_2268_ = l_Lean_Meta_mkAppOptM(v___x_2265_, v___x_2267_, v_a_2214_, v_a_2215_, v_a_2216_, v_a_2217_);
if (lean_obj_tag(v___x_2268_) == 0)
{
lean_object* v_a_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; 
v_a_2269_ = lean_ctor_get(v___x_2268_, 0);
lean_inc(v_a_2269_);
lean_dec_ref_known(v___x_2268_, 1);
v___x_2270_ = lean_unsigned_to_nat(2u);
v___x_2271_ = lean_mk_empty_array_with_capacity(v___x_2270_);
lean_inc_ref(v___x_2271_);
v___x_2272_ = lean_array_push(v___x_2271_, v_a_2269_);
v___x_2273_ = lean_array_push(v___x_2272_, v_snd_2260_);
lean_inc(v___y_2253_);
v___x_2274_ = l_Lean_Meta_mkAppM(v___y_2253_, v___x_2273_, v_a_2214_, v_a_2215_, v_a_2216_, v_a_2217_);
if (lean_obj_tag(v___x_2274_) == 0)
{
lean_object* v_a_2275_; lean_object* v___x_2277_; uint8_t v_isShared_2278_; uint8_t v_isSharedCheck_2328_; 
v_a_2275_ = lean_ctor_get(v___x_2274_, 0);
v_isSharedCheck_2328_ = !lean_is_exclusive(v___x_2274_);
if (v_isSharedCheck_2328_ == 0)
{
v___x_2277_ = v___x_2274_;
v_isShared_2278_ = v_isSharedCheck_2328_;
goto v_resetjp_2276_;
}
else
{
lean_inc(v_a_2275_);
lean_dec(v___x_2274_);
v___x_2277_ = lean_box(0);
v_isShared_2278_ = v_isSharedCheck_2328_;
goto v_resetjp_2276_;
}
v_resetjp_2276_:
{
lean_object* v___x_2279_; uint8_t v___x_2280_; 
v___x_2279_ = lean_array_get_size(v_fst_2259_);
v___x_2280_ = lean_nat_dec_eq(v___x_2279_, v___x_2219_);
if (v___x_2280_ == 0)
{
lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2284_; 
lean_dec_ref(v___x_2271_);
lean_inc(v___x_2248_);
v___x_2281_ = lean_array_push(v___x_2266_, v___x_2248_);
v___x_2282_ = l_Array_append___redArg(v___x_2281_, v_fst_2259_);
lean_dec(v_fst_2259_);
if (v_isShared_2263_ == 0)
{
lean_ctor_set(v___x_2262_, 1, v_a_2275_);
lean_ctor_set(v___x_2262_, 0, v___x_2282_);
v___x_2284_ = v___x_2262_;
goto v_reusejp_2283_;
}
else
{
lean_object* v_reuseFailAlloc_2288_; 
v_reuseFailAlloc_2288_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2288_, 0, v___x_2282_);
lean_ctor_set(v_reuseFailAlloc_2288_, 1, v_a_2275_);
v___x_2284_ = v_reuseFailAlloc_2288_;
goto v_reusejp_2283_;
}
v_reusejp_2283_:
{
lean_object* v___x_2286_; 
if (v_isShared_2278_ == 0)
{
lean_ctor_set(v___x_2277_, 0, v___x_2284_);
v___x_2286_ = v___x_2277_;
goto v_reusejp_2285_;
}
else
{
lean_object* v_reuseFailAlloc_2287_; 
v_reuseFailAlloc_2287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2287_, 0, v___x_2284_);
v___x_2286_ = v_reuseFailAlloc_2287_;
goto v_reusejp_2285_;
}
v_reusejp_2285_:
{
return v___x_2286_;
}
}
}
else
{
lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; 
lean_del_object(v___x_2277_);
lean_dec(v_fst_2259_);
v___x_2289_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__2));
v___x_2290_ = lean_box(0);
lean_inc(v___y_2254_);
v___x_2291_ = l_Lean_Expr_const___override(v___y_2254_, v___x_2290_);
lean_inc(v___x_2248_);
v___x_2292_ = l_Lean_Expr_app___override(v___x_2291_, v___x_2248_);
lean_inc_ref(v___x_2266_);
v___x_2293_ = lean_array_push(v___x_2266_, v___x_2292_);
v___x_2294_ = l_Lean_Meta_mkAppM(v___x_2289_, v___x_2293_, v_a_2214_, v_a_2215_, v_a_2216_, v_a_2217_);
if (lean_obj_tag(v___x_2294_) == 0)
{
lean_object* v_a_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; 
v_a_2295_ = lean_ctor_get(v___x_2294_, 0);
lean_inc(v_a_2295_);
lean_dec_ref_known(v___x_2294_, 1);
v___x_2296_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__1));
v___x_2297_ = lean_array_push(v___x_2271_, v_a_2275_);
v___x_2298_ = lean_array_push(v___x_2297_, v_a_2295_);
v___x_2299_ = l_Lean_Meta_mkAppM(v___x_2296_, v___x_2298_, v_a_2214_, v_a_2215_, v_a_2216_, v_a_2217_);
if (lean_obj_tag(v___x_2299_) == 0)
{
lean_object* v_a_2300_; lean_object* v___x_2302_; uint8_t v_isShared_2303_; uint8_t v_isSharedCheck_2311_; 
v_a_2300_ = lean_ctor_get(v___x_2299_, 0);
v_isSharedCheck_2311_ = !lean_is_exclusive(v___x_2299_);
if (v_isSharedCheck_2311_ == 0)
{
v___x_2302_ = v___x_2299_;
v_isShared_2303_ = v_isSharedCheck_2311_;
goto v_resetjp_2301_;
}
else
{
lean_inc(v_a_2300_);
lean_dec(v___x_2299_);
v___x_2302_ = lean_box(0);
v_isShared_2303_ = v_isSharedCheck_2311_;
goto v_resetjp_2301_;
}
v_resetjp_2301_:
{
lean_object* v___x_2304_; lean_object* v___x_2306_; 
lean_inc(v___x_2248_);
v___x_2304_ = lean_array_push(v___x_2266_, v___x_2248_);
if (v_isShared_2263_ == 0)
{
lean_ctor_set(v___x_2262_, 1, v_a_2300_);
lean_ctor_set(v___x_2262_, 0, v___x_2304_);
v___x_2306_ = v___x_2262_;
goto v_reusejp_2305_;
}
else
{
lean_object* v_reuseFailAlloc_2310_; 
v_reuseFailAlloc_2310_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2310_, 0, v___x_2304_);
lean_ctor_set(v_reuseFailAlloc_2310_, 1, v_a_2300_);
v___x_2306_ = v_reuseFailAlloc_2310_;
goto v_reusejp_2305_;
}
v_reusejp_2305_:
{
lean_object* v___x_2308_; 
if (v_isShared_2303_ == 0)
{
lean_ctor_set(v___x_2302_, 0, v___x_2306_);
v___x_2308_ = v___x_2302_;
goto v_reusejp_2307_;
}
else
{
lean_object* v_reuseFailAlloc_2309_; 
v_reuseFailAlloc_2309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2309_, 0, v___x_2306_);
v___x_2308_ = v_reuseFailAlloc_2309_;
goto v_reusejp_2307_;
}
v_reusejp_2307_:
{
return v___x_2308_;
}
}
}
}
else
{
lean_object* v_a_2312_; lean_object* v___x_2314_; uint8_t v_isShared_2315_; uint8_t v_isSharedCheck_2319_; 
lean_dec_ref(v___x_2266_);
lean_del_object(v___x_2262_);
v_a_2312_ = lean_ctor_get(v___x_2299_, 0);
v_isSharedCheck_2319_ = !lean_is_exclusive(v___x_2299_);
if (v_isSharedCheck_2319_ == 0)
{
v___x_2314_ = v___x_2299_;
v_isShared_2315_ = v_isSharedCheck_2319_;
goto v_resetjp_2313_;
}
else
{
lean_inc(v_a_2312_);
lean_dec(v___x_2299_);
v___x_2314_ = lean_box(0);
v_isShared_2315_ = v_isSharedCheck_2319_;
goto v_resetjp_2313_;
}
v_resetjp_2313_:
{
lean_object* v___x_2317_; 
if (v_isShared_2315_ == 0)
{
v___x_2317_ = v___x_2314_;
goto v_reusejp_2316_;
}
else
{
lean_object* v_reuseFailAlloc_2318_; 
v_reuseFailAlloc_2318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2318_, 0, v_a_2312_);
v___x_2317_ = v_reuseFailAlloc_2318_;
goto v_reusejp_2316_;
}
v_reusejp_2316_:
{
return v___x_2317_;
}
}
}
}
else
{
lean_object* v_a_2320_; lean_object* v___x_2322_; uint8_t v_isShared_2323_; uint8_t v_isSharedCheck_2327_; 
lean_dec(v_a_2275_);
lean_dec_ref(v___x_2271_);
lean_dec_ref(v___x_2266_);
lean_del_object(v___x_2262_);
v_a_2320_ = lean_ctor_get(v___x_2294_, 0);
v_isSharedCheck_2327_ = !lean_is_exclusive(v___x_2294_);
if (v_isSharedCheck_2327_ == 0)
{
v___x_2322_ = v___x_2294_;
v_isShared_2323_ = v_isSharedCheck_2327_;
goto v_resetjp_2321_;
}
else
{
lean_inc(v_a_2320_);
lean_dec(v___x_2294_);
v___x_2322_ = lean_box(0);
v_isShared_2323_ = v_isSharedCheck_2327_;
goto v_resetjp_2321_;
}
v_resetjp_2321_:
{
lean_object* v___x_2325_; 
if (v_isShared_2323_ == 0)
{
v___x_2325_ = v___x_2322_;
goto v_reusejp_2324_;
}
else
{
lean_object* v_reuseFailAlloc_2326_; 
v_reuseFailAlloc_2326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2326_, 0, v_a_2320_);
v___x_2325_ = v_reuseFailAlloc_2326_;
goto v_reusejp_2324_;
}
v_reusejp_2324_:
{
return v___x_2325_;
}
}
}
}
}
}
else
{
lean_object* v_a_2329_; lean_object* v___x_2331_; uint8_t v_isShared_2332_; uint8_t v_isSharedCheck_2336_; 
lean_dec_ref(v___x_2271_);
lean_dec_ref(v___x_2266_);
lean_del_object(v___x_2262_);
lean_dec(v_fst_2259_);
v_a_2329_ = lean_ctor_get(v___x_2274_, 0);
v_isSharedCheck_2336_ = !lean_is_exclusive(v___x_2274_);
if (v_isSharedCheck_2336_ == 0)
{
v___x_2331_ = v___x_2274_;
v_isShared_2332_ = v_isSharedCheck_2336_;
goto v_resetjp_2330_;
}
else
{
lean_inc(v_a_2329_);
lean_dec(v___x_2274_);
v___x_2331_ = lean_box(0);
v_isShared_2332_ = v_isSharedCheck_2336_;
goto v_resetjp_2330_;
}
v_resetjp_2330_:
{
lean_object* v___x_2334_; 
if (v_isShared_2332_ == 0)
{
v___x_2334_ = v___x_2331_;
goto v_reusejp_2333_;
}
else
{
lean_object* v_reuseFailAlloc_2335_; 
v_reuseFailAlloc_2335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2335_, 0, v_a_2329_);
v___x_2334_ = v_reuseFailAlloc_2335_;
goto v_reusejp_2333_;
}
v_reusejp_2333_:
{
return v___x_2334_;
}
}
}
}
else
{
lean_object* v_a_2337_; lean_object* v___x_2339_; uint8_t v_isShared_2340_; uint8_t v_isSharedCheck_2344_; 
lean_dec_ref(v___x_2266_);
lean_del_object(v___x_2262_);
lean_dec(v_snd_2260_);
lean_dec(v_fst_2259_);
v_a_2337_ = lean_ctor_get(v___x_2268_, 0);
v_isSharedCheck_2344_ = !lean_is_exclusive(v___x_2268_);
if (v_isSharedCheck_2344_ == 0)
{
v___x_2339_ = v___x_2268_;
v_isShared_2340_ = v_isSharedCheck_2344_;
goto v_resetjp_2338_;
}
else
{
lean_inc(v_a_2337_);
lean_dec(v___x_2268_);
v___x_2339_ = lean_box(0);
v_isShared_2340_ = v_isSharedCheck_2344_;
goto v_resetjp_2338_;
}
v_resetjp_2338_:
{
lean_object* v___x_2342_; 
if (v_isShared_2340_ == 0)
{
v___x_2342_ = v___x_2339_;
goto v_reusejp_2341_;
}
else
{
lean_object* v_reuseFailAlloc_2343_; 
v_reuseFailAlloc_2343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2343_, 0, v_a_2337_);
v___x_2342_ = v_reuseFailAlloc_2343_;
goto v_reusejp_2341_;
}
v_reusejp_2341_:
{
return v___x_2342_;
}
}
}
}
else
{
lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; 
lean_dec_ref_known(v___x_2249_, 1);
v___x_2345_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__2));
v___x_2346_ = lean_box(0);
lean_inc(v___y_2252_);
v___x_2347_ = l_Lean_Expr_const___override(v___y_2252_, v___x_2346_);
v___x_2348_ = l_Lean_Expr_app___override(v___x_2347_, v_tail_2256_);
v___x_2349_ = lean_mk_empty_array_with_capacity(v___x_2250_);
v___x_2350_ = lean_array_push(v___x_2349_, v___x_2348_);
v___x_2351_ = l_Lean_Meta_mkAppM(v___x_2345_, v___x_2350_, v_a_2214_, v_a_2215_, v_a_2216_, v_a_2217_);
if (lean_obj_tag(v___x_2351_) == 0)
{
lean_object* v_a_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; 
v_a_2352_ = lean_ctor_get(v___x_2351_, 0);
lean_inc(v_a_2352_);
lean_dec_ref_known(v___x_2351_, 1);
v___x_2353_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__1));
v___x_2354_ = lean_unsigned_to_nat(2u);
v___x_2355_ = lean_mk_empty_array_with_capacity(v___x_2354_);
v___x_2356_ = lean_array_push(v___x_2355_, v_a_2352_);
v___x_2357_ = lean_array_push(v___x_2356_, v_snd_2260_);
v___x_2358_ = l_Lean_Meta_mkAppM(v___x_2353_, v___x_2357_, v_a_2214_, v_a_2215_, v_a_2216_, v_a_2217_);
if (lean_obj_tag(v___x_2358_) == 0)
{
lean_object* v_a_2359_; lean_object* v___x_2361_; uint8_t v_isShared_2362_; uint8_t v_isSharedCheck_2369_; 
v_a_2359_ = lean_ctor_get(v___x_2358_, 0);
v_isSharedCheck_2369_ = !lean_is_exclusive(v___x_2358_);
if (v_isSharedCheck_2369_ == 0)
{
v___x_2361_ = v___x_2358_;
v_isShared_2362_ = v_isSharedCheck_2369_;
goto v_resetjp_2360_;
}
else
{
lean_inc(v_a_2359_);
lean_dec(v___x_2358_);
v___x_2361_ = lean_box(0);
v_isShared_2362_ = v_isSharedCheck_2369_;
goto v_resetjp_2360_;
}
v_resetjp_2360_:
{
lean_object* v___x_2364_; 
if (v_isShared_2263_ == 0)
{
lean_ctor_set(v___x_2262_, 1, v_a_2359_);
v___x_2364_ = v___x_2262_;
goto v_reusejp_2363_;
}
else
{
lean_object* v_reuseFailAlloc_2368_; 
v_reuseFailAlloc_2368_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2368_, 0, v_fst_2259_);
lean_ctor_set(v_reuseFailAlloc_2368_, 1, v_a_2359_);
v___x_2364_ = v_reuseFailAlloc_2368_;
goto v_reusejp_2363_;
}
v_reusejp_2363_:
{
lean_object* v___x_2366_; 
if (v_isShared_2362_ == 0)
{
lean_ctor_set(v___x_2361_, 0, v___x_2364_);
v___x_2366_ = v___x_2361_;
goto v_reusejp_2365_;
}
else
{
lean_object* v_reuseFailAlloc_2367_; 
v_reuseFailAlloc_2367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2367_, 0, v___x_2364_);
v___x_2366_ = v_reuseFailAlloc_2367_;
goto v_reusejp_2365_;
}
v_reusejp_2365_:
{
return v___x_2366_;
}
}
}
}
else
{
lean_object* v_a_2370_; lean_object* v___x_2372_; uint8_t v_isShared_2373_; uint8_t v_isSharedCheck_2377_; 
lean_del_object(v___x_2262_);
lean_dec(v_fst_2259_);
v_a_2370_ = lean_ctor_get(v___x_2358_, 0);
v_isSharedCheck_2377_ = !lean_is_exclusive(v___x_2358_);
if (v_isSharedCheck_2377_ == 0)
{
v___x_2372_ = v___x_2358_;
v_isShared_2373_ = v_isSharedCheck_2377_;
goto v_resetjp_2371_;
}
else
{
lean_inc(v_a_2370_);
lean_dec(v___x_2358_);
v___x_2372_ = lean_box(0);
v_isShared_2373_ = v_isSharedCheck_2377_;
goto v_resetjp_2371_;
}
v_resetjp_2371_:
{
lean_object* v___x_2375_; 
if (v_isShared_2373_ == 0)
{
v___x_2375_ = v___x_2372_;
goto v_reusejp_2374_;
}
else
{
lean_object* v_reuseFailAlloc_2376_; 
v_reuseFailAlloc_2376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2376_, 0, v_a_2370_);
v___x_2375_ = v_reuseFailAlloc_2376_;
goto v_reusejp_2374_;
}
v_reusejp_2374_:
{
return v___x_2375_;
}
}
}
}
else
{
lean_object* v_a_2378_; lean_object* v___x_2380_; uint8_t v_isShared_2381_; uint8_t v_isSharedCheck_2385_; 
lean_del_object(v___x_2262_);
lean_dec(v_snd_2260_);
lean_dec(v_fst_2259_);
v_a_2378_ = lean_ctor_get(v___x_2351_, 0);
v_isSharedCheck_2385_ = !lean_is_exclusive(v___x_2351_);
if (v_isSharedCheck_2385_ == 0)
{
v___x_2380_ = v___x_2351_;
v_isShared_2381_ = v_isSharedCheck_2385_;
goto v_resetjp_2379_;
}
else
{
lean_inc(v_a_2378_);
lean_dec(v___x_2351_);
v___x_2380_ = lean_box(0);
v_isShared_2381_ = v_isSharedCheck_2385_;
goto v_resetjp_2379_;
}
v_resetjp_2379_:
{
lean_object* v___x_2383_; 
if (v_isShared_2381_ == 0)
{
v___x_2383_ = v___x_2380_;
goto v_reusejp_2382_;
}
else
{
lean_object* v_reuseFailAlloc_2384_; 
v_reuseFailAlloc_2384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2384_, 0, v_a_2378_);
v___x_2383_ = v_reuseFailAlloc_2384_;
goto v_reusejp_2382_;
}
v_reusejp_2382_:
{
return v___x_2383_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_tail_2256_);
lean_dec_ref_known(v___x_2249_, 1);
lean_dec(v_unit_2212_);
return v___x_2257_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___boxed(lean_object* v_fn_2427_, lean_object* v_unit_2428_, lean_object* v_parts_2429_, lean_object* v_a_2430_, lean_object* v_a_2431_, lean_object* v_a_2432_, lean_object* v_a_2433_, lean_object* v_a_2434_){
_start:
{
lean_object* v_res_2435_; 
v_res_2435_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg(v_fn_2427_, v_unit_2428_, v_parts_2429_, v_a_2430_, v_a_2431_, v_a_2432_, v_a_2433_);
lean_dec(v_a_2433_);
lean_dec_ref(v_a_2432_);
lean_dec(v_a_2431_);
lean_dec_ref(v_a_2430_);
lean_dec_ref(v_parts_2429_);
return v_res_2435_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits(lean_object* v_fn_2436_, lean_object* v_unit_2437_, lean_object* v_parts_2438_, lean_object* v_a_2439_, lean_object* v_a_2440_, lean_object* v_a_2441_, lean_object* v_a_2442_, lean_object* v_a_2443_, lean_object* v_a_2444_){
_start:
{
lean_object* v___x_2446_; 
v___x_2446_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg(v_fn_2436_, v_unit_2437_, v_parts_2438_, v_a_2441_, v_a_2442_, v_a_2443_, v_a_2444_);
return v___x_2446_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___boxed(lean_object* v_fn_2447_, lean_object* v_unit_2448_, lean_object* v_parts_2449_, lean_object* v_a_2450_, lean_object* v_a_2451_, lean_object* v_a_2452_, lean_object* v_a_2453_, lean_object* v_a_2454_, lean_object* v_a_2455_, lean_object* v_a_2456_){
_start:
{
lean_object* v_res_2457_; 
v_res_2457_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits(v_fn_2447_, v_unit_2448_, v_parts_2449_, v_a_2450_, v_a_2451_, v_a_2452_, v_a_2453_, v_a_2454_, v_a_2455_);
lean_dec(v_a_2455_);
lean_dec_ref(v_a_2454_);
lean_dec(v_a_2453_);
lean_dec_ref(v_a_2452_);
lean_dec(v_a_2451_);
lean_dec_ref(v_a_2450_);
lean_dec_ref(v_parts_2449_);
return v_res_2457_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_rightNested_spec__0___redArg(lean_object* v_fn_2458_, lean_object* v_parts_2459_, lean_object* v_range_2460_, lean_object* v_b_2461_, lean_object* v_i_2462_){
_start:
{
lean_object* v_stop_2463_; lean_object* v_step_2464_; uint8_t v___x_2465_; 
v_stop_2463_ = lean_ctor_get(v_range_2460_, 1);
v_step_2464_ = lean_ctor_get(v_range_2460_, 2);
v___x_2465_ = lean_nat_dec_lt(v_i_2462_, v_stop_2463_);
if (v___x_2465_ == 0)
{
lean_dec(v_i_2462_);
return v_b_2461_;
}
else
{
lean_object* v_snd_2466_; lean_object* v___x_2468_; uint8_t v_isShared_2469_; uint8_t v_isSharedCheck_2491_; 
v_snd_2466_ = lean_ctor_get(v_b_2461_, 1);
v_isSharedCheck_2491_ = !lean_is_exclusive(v_b_2461_);
if (v_isSharedCheck_2491_ == 0)
{
lean_object* v_unused_2492_; 
v_unused_2492_ = lean_ctor_get(v_b_2461_, 0);
lean_dec(v_unused_2492_);
v___x_2468_ = v_b_2461_;
v_isShared_2469_ = v_isSharedCheck_2491_;
goto v_resetjp_2467_;
}
else
{
lean_inc(v_snd_2466_);
lean_dec(v_b_2461_);
v___x_2468_ = lean_box(0);
v_isShared_2469_ = v_isSharedCheck_2491_;
goto v_resetjp_2467_;
}
v_resetjp_2467_:
{
lean_object* v___x_2470_; uint8_t v___y_2472_; lean_object* v___x_2484_; uint8_t v___x_2485_; 
v___x_2470_ = lean_box(0);
v___x_2484_ = lean_unsigned_to_nat(2u);
v___x_2485_ = l_Lean_Expr_isAppOfArity(v_snd_2466_, v_fn_2458_, v___x_2484_);
if (v___x_2485_ == 0)
{
v___y_2472_ = v___x_2485_;
goto v___jp_2471_;
}
else
{
lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; uint8_t v___x_2490_; 
v___x_2486_ = l_Lean_instInhabitedExpr;
v___x_2487_ = l_Lean_Expr_appFn_x21(v_snd_2466_);
v___x_2488_ = l_Lean_Expr_appArg_x21(v___x_2487_);
lean_dec_ref(v___x_2487_);
v___x_2489_ = lean_array_get_borrowed(v___x_2486_, v_parts_2459_, v_i_2462_);
v___x_2490_ = lean_expr_eqv(v___x_2488_, v___x_2489_);
lean_dec_ref(v___x_2488_);
v___y_2472_ = v___x_2490_;
goto v___jp_2471_;
}
v___jp_2471_:
{
if (v___y_2472_ == 0)
{
lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2476_; 
lean_dec(v_i_2462_);
v___x_2473_ = lean_box(v___y_2472_);
v___x_2474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2474_, 0, v___x_2473_);
if (v_isShared_2469_ == 0)
{
lean_ctor_set(v___x_2468_, 0, v___x_2474_);
v___x_2476_ = v___x_2468_;
goto v_reusejp_2475_;
}
else
{
lean_object* v_reuseFailAlloc_2477_; 
v_reuseFailAlloc_2477_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2477_, 0, v___x_2474_);
lean_ctor_set(v_reuseFailAlloc_2477_, 1, v_snd_2466_);
v___x_2476_ = v_reuseFailAlloc_2477_;
goto v_reusejp_2475_;
}
v_reusejp_2475_:
{
return v___x_2476_;
}
}
else
{
lean_object* v___x_2478_; lean_object* v___x_2480_; 
v___x_2478_ = l_Lean_Expr_appArg_x21(v_snd_2466_);
lean_dec(v_snd_2466_);
if (v_isShared_2469_ == 0)
{
lean_ctor_set(v___x_2468_, 1, v___x_2478_);
lean_ctor_set(v___x_2468_, 0, v___x_2470_);
v___x_2480_ = v___x_2468_;
goto v_reusejp_2479_;
}
else
{
lean_object* v_reuseFailAlloc_2483_; 
v_reuseFailAlloc_2483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2483_, 0, v___x_2470_);
lean_ctor_set(v_reuseFailAlloc_2483_, 1, v___x_2478_);
v___x_2480_ = v_reuseFailAlloc_2483_;
goto v_reusejp_2479_;
}
v_reusejp_2479_:
{
lean_object* v___x_2481_; 
v___x_2481_ = lean_nat_add(v_i_2462_, v_step_2464_);
lean_dec(v_i_2462_);
v_b_2461_ = v___x_2480_;
v_i_2462_ = v___x_2481_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_rightNested_spec__0___redArg___boxed(lean_object* v_fn_2493_, lean_object* v_parts_2494_, lean_object* v_range_2495_, lean_object* v_b_2496_, lean_object* v_i_2497_){
_start:
{
lean_object* v_res_2498_; 
v_res_2498_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_rightNested_spec__0___redArg(v_fn_2493_, v_parts_2494_, v_range_2495_, v_b_2496_, v_i_2497_);
lean_dec_ref(v_range_2495_);
lean_dec_ref(v_parts_2494_);
lean_dec(v_fn_2493_);
return v_res_2498_;
}
}
LEAN_EXPORT uint8_t lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_rightNested(lean_object* v_fn_2499_, lean_object* v_e_2500_, lean_object* v_parts_2501_){
_start:
{
lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v_fst_2510_; lean_object* v_snd_2511_; lean_object* v___y_2513_; 
v___x_2502_ = lean_unsigned_to_nat(0u);
v___x_2503_ = lean_array_get_size(v_parts_2501_);
v___x_2504_ = lean_unsigned_to_nat(1u);
v___x_2505_ = lean_nat_sub(v___x_2503_, v___x_2504_);
lean_inc(v___x_2505_);
v___x_2506_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2506_, 0, v___x_2502_);
lean_ctor_set(v___x_2506_, 1, v___x_2505_);
lean_ctor_set(v___x_2506_, 2, v___x_2504_);
v___x_2507_ = lean_box(0);
v___x_2508_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2508_, 0, v___x_2507_);
lean_ctor_set(v___x_2508_, 1, v_e_2500_);
v___x_2509_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_rightNested_spec__0___redArg(v_fn_2499_, v_parts_2501_, v___x_2506_, v___x_2508_, v___x_2502_);
lean_dec_ref_known(v___x_2506_, 3);
v_fst_2510_ = lean_ctor_get(v___x_2509_, 0);
lean_inc(v_fst_2510_);
v_snd_2511_ = lean_ctor_get(v___x_2509_, 1);
lean_inc(v_snd_2511_);
lean_dec_ref(v___x_2509_);
if (lean_obj_tag(v_fst_2510_) == 0)
{
uint8_t v___x_2516_; 
v___x_2516_ = lean_nat_dec_lt(v___x_2505_, v___x_2503_);
if (v___x_2516_ == 0)
{
lean_dec(v___x_2505_);
v___y_2513_ = v___x_2507_;
goto v___jp_2512_;
}
else
{
lean_object* v___x_2517_; lean_object* v___x_2518_; 
v___x_2517_ = lean_array_fget_borrowed(v_parts_2501_, v___x_2505_);
lean_dec(v___x_2505_);
lean_inc(v___x_2517_);
v___x_2518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2518_, 0, v___x_2517_);
v___y_2513_ = v___x_2518_;
goto v___jp_2512_;
}
}
else
{
lean_object* v_val_2519_; uint8_t v___x_2520_; 
lean_dec(v_snd_2511_);
lean_dec(v___x_2505_);
v_val_2519_ = lean_ctor_get(v_fst_2510_, 0);
lean_inc(v_val_2519_);
lean_dec_ref_known(v_fst_2510_, 1);
v___x_2520_ = lean_unbox(v_val_2519_);
lean_dec(v_val_2519_);
return v___x_2520_;
}
v___jp_2512_:
{
lean_object* v___x_2514_; uint8_t v___x_2515_; 
v___x_2514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2514_, 0, v_snd_2511_);
v___x_2515_ = l_Option_instBEq_beq___at___00Lean_Meta_Grind_Arith_Linear_propagateIneq_spec__0(v___y_2513_, v___x_2514_);
lean_dec_ref_known(v___x_2514_, 1);
lean_dec(v___y_2513_);
return v___x_2515_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_rightNested___boxed(lean_object* v_fn_2521_, lean_object* v_e_2522_, lean_object* v_parts_2523_){
_start:
{
uint8_t v_res_2524_; lean_object* v_r_2525_; 
v_res_2524_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_rightNested(v_fn_2521_, v_e_2522_, v_parts_2523_);
lean_dec_ref(v_parts_2523_);
lean_dec(v_fn_2521_);
v_r_2525_ = lean_box(v_res_2524_);
return v_r_2525_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_rightNested_spec__0(lean_object* v_fn_2526_, lean_object* v_parts_2527_, lean_object* v_range_2528_, lean_object* v_b_2529_, lean_object* v_i_2530_, lean_object* v_hs_2531_, lean_object* v_hl_2532_){
_start:
{
lean_object* v___x_2533_; 
v___x_2533_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_rightNested_spec__0___redArg(v_fn_2526_, v_parts_2527_, v_range_2528_, v_b_2529_, v_i_2530_);
return v___x_2533_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_rightNested_spec__0___boxed(lean_object* v_fn_2534_, lean_object* v_parts_2535_, lean_object* v_range_2536_, lean_object* v_b_2537_, lean_object* v_i_2538_, lean_object* v_hs_2539_, lean_object* v_hl_2540_){
_start:
{
lean_object* v_res_2541_; 
v_res_2541_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_rightNested_spec__0(v_fn_2534_, v_parts_2535_, v_range_2536_, v_b_2537_, v_i_2538_, v_hs_2539_, v_hl_2540_);
lean_dec_ref(v_range_2536_);
lean_dec_ref(v_parts_2535_);
lean_dec(v_fn_2534_);
return v_res_2541_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_standingFor___lam__0(lean_object* v_k_2542_, lean_object* v_locals_2543_, lean_object* v___y_2544_, lean_object* v___y_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_, lean_object* v___y_2549_){
_start:
{
lean_object* v___x_2551_; 
lean_inc(v___y_2549_);
lean_inc_ref(v___y_2548_);
lean_inc(v___y_2547_);
lean_inc_ref(v___y_2546_);
lean_inc(v___y_2545_);
lean_inc_ref(v___y_2544_);
lean_inc_ref(v_locals_2543_);
v___x_2551_ = lean_apply_8(v_k_2542_, v_locals_2543_, v___y_2544_, v___y_2545_, v___y_2546_, v___y_2547_, v___y_2548_, v___y_2549_, lean_box(0));
if (lean_obj_tag(v___x_2551_) == 0)
{
lean_object* v_a_2552_; uint8_t v___x_2553_; uint8_t v___x_2554_; uint8_t v___x_2555_; lean_object* v___x_2556_; 
v_a_2552_ = lean_ctor_get(v___x_2551_, 0);
lean_inc(v_a_2552_);
lean_dec_ref_known(v___x_2551_, 1);
v___x_2553_ = 0;
v___x_2554_ = 1;
v___x_2555_ = 1;
v___x_2556_ = l_Lean_Meta_mkLambdaFVars(v_locals_2543_, v_a_2552_, v___x_2553_, v___x_2554_, v___x_2553_, v___x_2554_, v___x_2555_, v___y_2546_, v___y_2547_, v___y_2548_, v___y_2549_);
lean_dec_ref(v_locals_2543_);
return v___x_2556_;
}
else
{
lean_dec_ref(v_locals_2543_);
return v___x_2551_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_standingFor___lam__0___boxed(lean_object* v_k_2557_, lean_object* v_locals_2558_, lean_object* v___y_2559_, lean_object* v___y_2560_, lean_object* v___y_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_, lean_object* v___y_2564_, lean_object* v___y_2565_){
_start:
{
lean_object* v_res_2566_; 
v_res_2566_ = lp_vampireReplay_Vampire_Reconstruct_standingFor___lam__0(v_k_2557_, v_locals_2558_, v___y_2559_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_, v___y_2564_);
lean_dec(v___y_2564_);
lean_dec_ref(v___y_2563_);
lean_dec(v___y_2562_);
lean_dec_ref(v___y_2561_);
lean_dec(v___y_2560_);
lean_dec_ref(v___y_2559_);
return v_res_2566_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Vampire_Reconstruct_standingFor_spec__0___redArg___lam__0(lean_object* v_v_2567_, lean_object* v_x_2568_, lean_object* v___y_2569_, lean_object* v___y_2570_, lean_object* v___y_2571_, lean_object* v___y_2572_, lean_object* v___y_2573_, lean_object* v___y_2574_){
_start:
{
lean_object* v___x_2576_; 
v___x_2576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2576_, 0, v_v_2567_);
return v___x_2576_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Vampire_Reconstruct_standingFor_spec__0___redArg___lam__0___boxed(lean_object* v_v_2577_, lean_object* v_x_2578_, lean_object* v___y_2579_, lean_object* v___y_2580_, lean_object* v___y_2581_, lean_object* v___y_2582_, lean_object* v___y_2583_, lean_object* v___y_2584_, lean_object* v___y_2585_){
_start:
{
lean_object* v_res_2586_; 
v_res_2586_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Vampire_Reconstruct_standingFor_spec__0___redArg___lam__0(v_v_2577_, v_x_2578_, v___y_2579_, v___y_2580_, v___y_2581_, v___y_2582_, v___y_2583_, v___y_2584_);
lean_dec(v___y_2584_);
lean_dec_ref(v___y_2583_);
lean_dec(v___y_2582_);
lean_dec_ref(v___y_2581_);
lean_dec(v___y_2580_);
lean_dec_ref(v___y_2579_);
lean_dec_ref(v_x_2578_);
return v_res_2586_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Vampire_Reconstruct_standingFor_spec__0___redArg(size_t v_sz_2587_, size_t v_i_2588_, lean_object* v_bs_2589_){
_start:
{
uint8_t v___x_2590_; 
v___x_2590_ = lean_usize_dec_lt(v_i_2588_, v_sz_2587_);
if (v___x_2590_ == 0)
{
return v_bs_2589_;
}
else
{
lean_object* v_v_2591_; lean_object* v___f_2592_; lean_object* v___x_2593_; lean_object* v_bs_x27_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; size_t v___x_2602_; size_t v___x_2603_; lean_object* v___x_2604_; 
v_v_2591_ = lean_array_uget_borrowed(v_bs_2589_, v_i_2588_);
lean_inc(v_v_2591_);
v___f_2592_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Vampire_Reconstruct_standingFor_spec__0___redArg___lam__0___boxed), 9, 1);
lean_closure_set(v___f_2592_, 0, v_v_2591_);
v___x_2593_ = lean_unsigned_to_nat(0u);
v_bs_x27_2594_ = lean_array_uset(v_bs_2589_, v_i_2588_, v___x_2593_);
v___x_2595_ = lean_usize_to_nat(v_i_2588_);
v___x_2596_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__6___closed__0));
v___x_2597_ = l_Nat_reprFast(v___x_2595_);
v___x_2598_ = lean_string_append(v___x_2596_, v___x_2597_);
lean_dec_ref(v___x_2597_);
v___x_2599_ = lean_box(0);
v___x_2600_ = l_Lean_Name_str___override(v___x_2599_, v___x_2598_);
v___x_2601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2601_, 0, v___x_2600_);
lean_ctor_set(v___x_2601_, 1, v___f_2592_);
v___x_2602_ = ((size_t)1ULL);
v___x_2603_ = lean_usize_add(v_i_2588_, v___x_2602_);
v___x_2604_ = lean_array_uset(v_bs_x27_2594_, v_i_2588_, v___x_2601_);
v_i_2588_ = v___x_2603_;
v_bs_2589_ = v___x_2604_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Vampire_Reconstruct_standingFor_spec__0___redArg___boxed(lean_object* v_sz_2606_, lean_object* v_i_2607_, lean_object* v_bs_2608_){
_start:
{
size_t v_sz_boxed_2609_; size_t v_i_boxed_2610_; lean_object* v_res_2611_; 
v_sz_boxed_2609_ = lean_unbox_usize(v_sz_2606_);
lean_dec(v_sz_2606_);
v_i_boxed_2610_ = lean_unbox_usize(v_i_2607_);
lean_dec(v_i_2607_);
v_res_2611_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Vampire_Reconstruct_standingFor_spec__0___redArg(v_sz_boxed_2609_, v_i_boxed_2610_, v_bs_2608_);
return v_res_2611_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__1(size_t v_sz_2612_, size_t v_i_2613_, lean_object* v_bs_2614_){
_start:
{
uint8_t v___x_2615_; 
v___x_2615_ = lean_usize_dec_lt(v_i_2613_, v_sz_2612_);
if (v___x_2615_ == 0)
{
return v_bs_2614_;
}
else
{
lean_object* v_v_2616_; lean_object* v_fst_2617_; lean_object* v_snd_2618_; lean_object* v___x_2620_; uint8_t v_isShared_2621_; uint8_t v_isSharedCheck_2634_; 
v_v_2616_ = lean_array_uget(v_bs_2614_, v_i_2613_);
v_fst_2617_ = lean_ctor_get(v_v_2616_, 0);
v_snd_2618_ = lean_ctor_get(v_v_2616_, 1);
v_isSharedCheck_2634_ = !lean_is_exclusive(v_v_2616_);
if (v_isSharedCheck_2634_ == 0)
{
v___x_2620_ = v_v_2616_;
v_isShared_2621_ = v_isSharedCheck_2634_;
goto v_resetjp_2619_;
}
else
{
lean_inc(v_snd_2618_);
lean_inc(v_fst_2617_);
lean_dec(v_v_2616_);
v___x_2620_ = lean_box(0);
v_isShared_2621_ = v_isSharedCheck_2634_;
goto v_resetjp_2619_;
}
v_resetjp_2619_:
{
lean_object* v___x_2622_; lean_object* v_bs_x27_2623_; uint8_t v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2627_; 
v___x_2622_ = lean_unsigned_to_nat(0u);
v_bs_x27_2623_ = lean_array_uset(v_bs_2614_, v_i_2613_, v___x_2622_);
v___x_2624_ = 0;
v___x_2625_ = lean_box(v___x_2624_);
if (v_isShared_2621_ == 0)
{
lean_ctor_set(v___x_2620_, 0, v___x_2625_);
v___x_2627_ = v___x_2620_;
goto v_reusejp_2626_;
}
else
{
lean_object* v_reuseFailAlloc_2633_; 
v_reuseFailAlloc_2633_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2633_, 0, v___x_2625_);
lean_ctor_set(v_reuseFailAlloc_2633_, 1, v_snd_2618_);
v___x_2627_ = v_reuseFailAlloc_2633_;
goto v_reusejp_2626_;
}
v_reusejp_2626_:
{
lean_object* v___x_2628_; size_t v___x_2629_; size_t v___x_2630_; lean_object* v___x_2631_; 
v___x_2628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2628_, 0, v_fst_2617_);
lean_ctor_set(v___x_2628_, 1, v___x_2627_);
v___x_2629_ = ((size_t)1ULL);
v___x_2630_ = lean_usize_add(v_i_2613_, v___x_2629_);
v___x_2631_ = lean_array_uset(v_bs_x27_2623_, v_i_2613_, v___x_2628_);
v_i_2613_ = v___x_2630_;
v_bs_2614_ = v___x_2631_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__1___boxed(lean_object* v_sz_2635_, lean_object* v_i_2636_, lean_object* v_bs_2637_){
_start:
{
size_t v_sz_boxed_2638_; size_t v_i_boxed_2639_; lean_object* v_res_2640_; 
v_sz_boxed_2638_ = lean_unbox_usize(v_sz_2635_);
lean_dec(v_sz_2635_);
v_i_boxed_2639_ = lean_unbox_usize(v_i_2636_);
lean_dec(v_i_2636_);
v_res_2640_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__1(v_sz_boxed_2638_, v_i_boxed_2639_, v_bs_2637_);
return v_res_2640_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3___lam__0(lean_object* v___x_2641_, lean_object* v_a_2642_, lean_object* v___y_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_, lean_object* v___y_2648_){
_start:
{
lean_object* v___x_2650_; lean_object* v___x_1436__overap_2651_; lean_object* v___x_2652_; 
v___x_2650_ = l_Lean_instInhabitedExpr;
v___x_1436__overap_2651_ = l_instInhabitedOfMonad___redArg(v___x_2641_, v___x_2650_);
lean_inc(v___y_2648_);
lean_inc_ref(v___y_2647_);
lean_inc(v___y_2646_);
lean_inc_ref(v___y_2645_);
lean_inc(v___y_2644_);
lean_inc_ref(v___y_2643_);
v___x_2652_ = lean_apply_7(v___x_1436__overap_2651_, v___y_2643_, v___y_2644_, v___y_2645_, v___y_2646_, v___y_2647_, v___y_2648_, lean_box(0));
return v___x_2652_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3___lam__0___boxed(lean_object* v___x_2653_, lean_object* v_a_2654_, lean_object* v___y_2655_, lean_object* v___y_2656_, lean_object* v___y_2657_, lean_object* v___y_2658_, lean_object* v___y_2659_, lean_object* v___y_2660_, lean_object* v___y_2661_){
_start:
{
lean_object* v_res_2662_; 
v_res_2662_ = lp_vampireReplay___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3___lam__0(v___x_2653_, v_a_2654_, v___y_2655_, v___y_2656_, v___y_2657_, v___y_2658_, v___y_2659_, v___y_2660_);
lean_dec(v___y_2660_);
lean_dec_ref(v___y_2659_);
lean_dec(v___y_2658_);
lean_dec_ref(v___y_2657_);
lean_dec(v___y_2656_);
lean_dec_ref(v___y_2655_);
lean_dec_ref(v_a_2654_);
return v_res_2662_;
}
}
static lean_object* _init_lp_vampireReplay___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3___closed__0(void){
_start:
{
lean_object* v___x_2663_; 
v___x_2663_ = l_instMonadEIO(lean_box(0));
return v___x_2663_;
}
}
static lean_object* _init_lp_vampireReplay___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3___closed__1(void){
_start:
{
lean_object* v___x_2664_; lean_object* v___x_2665_; 
v___x_2664_ = lean_obj_once(&lp_vampireReplay___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3___closed__0, &lp_vampireReplay___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3___closed__0_once, _init_lp_vampireReplay___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3___closed__0);
v___x_2665_ = l_StateRefT_x27_instMonad___redArg(v___x_2664_);
return v___x_2665_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3_spec__5___lam__0___boxed(lean_object* v_acc_2670_, lean_object* v_declInfos_2671_, lean_object* v_k_2672_, lean_object* v_kind_2673_, lean_object* v___y_2674_, lean_object* v___y_2675_, lean_object* v_b_2676_, lean_object* v___y_2677_, lean_object* v___y_2678_, lean_object* v___y_2679_, lean_object* v___y_2680_, lean_object* v___y_2681_){
_start:
{
uint8_t v_kind_boxed_2682_; lean_object* v_res_2683_; 
v_kind_boxed_2682_ = lean_unbox(v_kind_2673_);
v_res_2683_ = lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3_spec__5___lam__0(v_acc_2670_, v_declInfos_2671_, v_k_2672_, v_kind_boxed_2682_, v___y_2674_, v___y_2675_, v_b_2676_, v___y_2677_, v___y_2678_, v___y_2679_, v___y_2680_);
lean_dec(v___y_2680_);
lean_dec_ref(v___y_2679_);
lean_dec(v___y_2678_);
lean_dec_ref(v___y_2677_);
lean_dec(v___y_2675_);
lean_dec_ref(v___y_2674_);
return v_res_2683_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3_spec__5(lean_object* v_acc_2684_, lean_object* v_declInfos_2685_, lean_object* v_k_2686_, uint8_t v_kind_2687_, lean_object* v_name_2688_, uint8_t v_bi_2689_, lean_object* v_type_2690_, uint8_t v_kind_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_, lean_object* v___y_2694_, lean_object* v___y_2695_, lean_object* v___y_2696_, lean_object* v___y_2697_){
_start:
{
lean_object* v___x_2699_; lean_object* v___f_2700_; lean_object* v___x_2701_; 
v___x_2699_ = lean_box(v_kind_2687_);
lean_inc(v___y_2693_);
lean_inc_ref(v___y_2692_);
v___f_2700_ = lean_alloc_closure((void*)(lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3_spec__5___lam__0___boxed), 12, 6);
lean_closure_set(v___f_2700_, 0, v_acc_2684_);
lean_closure_set(v___f_2700_, 1, v_declInfos_2685_);
lean_closure_set(v___f_2700_, 2, v_k_2686_);
lean_closure_set(v___f_2700_, 3, v___x_2699_);
lean_closure_set(v___f_2700_, 4, v___y_2692_);
lean_closure_set(v___f_2700_, 5, v___y_2693_);
v___x_2701_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp___redArg(v_name_2688_, v_bi_2689_, v_type_2690_, v___f_2700_, v_kind_2691_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_);
if (lean_obj_tag(v___x_2701_) == 0)
{
return v___x_2701_;
}
else
{
lean_object* v_a_2702_; lean_object* v___x_2704_; uint8_t v_isShared_2705_; uint8_t v_isSharedCheck_2709_; 
v_a_2702_ = lean_ctor_get(v___x_2701_, 0);
v_isSharedCheck_2709_ = !lean_is_exclusive(v___x_2701_);
if (v_isSharedCheck_2709_ == 0)
{
v___x_2704_ = v___x_2701_;
v_isShared_2705_ = v_isSharedCheck_2709_;
goto v_resetjp_2703_;
}
else
{
lean_inc(v_a_2702_);
lean_dec(v___x_2701_);
v___x_2704_ = lean_box(0);
v_isShared_2705_ = v_isSharedCheck_2709_;
goto v_resetjp_2703_;
}
v_resetjp_2703_:
{
lean_object* v___x_2707_; 
if (v_isShared_2705_ == 0)
{
v___x_2707_ = v___x_2704_;
goto v_reusejp_2706_;
}
else
{
lean_object* v_reuseFailAlloc_2708_; 
v_reuseFailAlloc_2708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2708_, 0, v_a_2702_);
v___x_2707_ = v_reuseFailAlloc_2708_;
goto v_reusejp_2706_;
}
v_reusejp_2706_:
{
return v___x_2707_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3(lean_object* v_declInfos_2710_, lean_object* v_k_2711_, uint8_t v_kind_2712_, lean_object* v_acc_2713_, lean_object* v___y_2714_, lean_object* v___y_2715_, lean_object* v___y_2716_, lean_object* v___y_2717_, lean_object* v___y_2718_, lean_object* v___y_2719_){
_start:
{
lean_object* v___x_2721_; lean_object* v_toApplicative_2722_; lean_object* v_toFunctor_2723_; lean_object* v_toSeq_2724_; lean_object* v_toSeqLeft_2725_; lean_object* v_toSeqRight_2726_; lean_object* v___f_2727_; lean_object* v___f_2728_; lean_object* v___f_2729_; lean_object* v___f_2730_; lean_object* v___x_2731_; lean_object* v___f_2732_; lean_object* v___f_2733_; lean_object* v___f_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v_toApplicative_2738_; lean_object* v___x_2740_; uint8_t v_isShared_2741_; uint8_t v_isSharedCheck_2787_; 
v___x_2721_ = lean_obj_once(&lp_vampireReplay___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3___closed__1, &lp_vampireReplay___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3___closed__1_once, _init_lp_vampireReplay___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3___closed__1);
v_toApplicative_2722_ = lean_ctor_get(v___x_2721_, 0);
v_toFunctor_2723_ = lean_ctor_get(v_toApplicative_2722_, 0);
v_toSeq_2724_ = lean_ctor_get(v_toApplicative_2722_, 2);
v_toSeqLeft_2725_ = lean_ctor_get(v_toApplicative_2722_, 3);
v_toSeqRight_2726_ = lean_ctor_get(v_toApplicative_2722_, 4);
v___f_2727_ = ((lean_object*)(lp_vampireReplay___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3___closed__2));
v___f_2728_ = ((lean_object*)(lp_vampireReplay___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3___closed__3));
lean_inc_ref_n(v_toFunctor_2723_, 2);
v___f_2729_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2729_, 0, v_toFunctor_2723_);
v___f_2730_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2730_, 0, v_toFunctor_2723_);
v___x_2731_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2731_, 0, v___f_2729_);
lean_ctor_set(v___x_2731_, 1, v___f_2730_);
lean_inc(v_toSeqRight_2726_);
v___f_2732_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2732_, 0, v_toSeqRight_2726_);
lean_inc(v_toSeqLeft_2725_);
v___f_2733_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2733_, 0, v_toSeqLeft_2725_);
lean_inc(v_toSeq_2724_);
v___f_2734_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2734_, 0, v_toSeq_2724_);
v___x_2735_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2735_, 0, v___x_2731_);
lean_ctor_set(v___x_2735_, 1, v___f_2727_);
lean_ctor_set(v___x_2735_, 2, v___f_2734_);
lean_ctor_set(v___x_2735_, 3, v___f_2733_);
lean_ctor_set(v___x_2735_, 4, v___f_2732_);
v___x_2736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2736_, 0, v___x_2735_);
lean_ctor_set(v___x_2736_, 1, v___f_2728_);
v___x_2737_ = l_StateRefT_x27_instMonad___redArg(v___x_2736_);
v_toApplicative_2738_ = lean_ctor_get(v___x_2737_, 0);
v_isSharedCheck_2787_ = !lean_is_exclusive(v___x_2737_);
if (v_isSharedCheck_2787_ == 0)
{
lean_object* v_unused_2788_; 
v_unused_2788_ = lean_ctor_get(v___x_2737_, 1);
lean_dec(v_unused_2788_);
v___x_2740_ = v___x_2737_;
v_isShared_2741_ = v_isSharedCheck_2787_;
goto v_resetjp_2739_;
}
else
{
lean_inc(v_toApplicative_2738_);
lean_dec(v___x_2737_);
v___x_2740_ = lean_box(0);
v_isShared_2741_ = v_isSharedCheck_2787_;
goto v_resetjp_2739_;
}
v_resetjp_2739_:
{
lean_object* v_toFunctor_2742_; lean_object* v_toSeq_2743_; lean_object* v_toSeqLeft_2744_; lean_object* v_toSeqRight_2745_; lean_object* v___x_2747_; uint8_t v_isShared_2748_; uint8_t v_isSharedCheck_2785_; 
v_toFunctor_2742_ = lean_ctor_get(v_toApplicative_2738_, 0);
v_toSeq_2743_ = lean_ctor_get(v_toApplicative_2738_, 2);
v_toSeqLeft_2744_ = lean_ctor_get(v_toApplicative_2738_, 3);
v_toSeqRight_2745_ = lean_ctor_get(v_toApplicative_2738_, 4);
v_isSharedCheck_2785_ = !lean_is_exclusive(v_toApplicative_2738_);
if (v_isSharedCheck_2785_ == 0)
{
lean_object* v_unused_2786_; 
v_unused_2786_ = lean_ctor_get(v_toApplicative_2738_, 1);
lean_dec(v_unused_2786_);
v___x_2747_ = v_toApplicative_2738_;
v_isShared_2748_ = v_isSharedCheck_2785_;
goto v_resetjp_2746_;
}
else
{
lean_inc(v_toSeqRight_2745_);
lean_inc(v_toSeqLeft_2744_);
lean_inc(v_toSeq_2743_);
lean_inc(v_toFunctor_2742_);
lean_dec(v_toApplicative_2738_);
v___x_2747_ = lean_box(0);
v_isShared_2748_ = v_isSharedCheck_2785_;
goto v_resetjp_2746_;
}
v_resetjp_2746_:
{
lean_object* v___f_2749_; lean_object* v___f_2750_; lean_object* v___f_2751_; lean_object* v___f_2752_; lean_object* v___x_2753_; lean_object* v___f_2754_; lean_object* v___f_2755_; lean_object* v___f_2756_; lean_object* v___x_2758_; 
v___f_2749_ = ((lean_object*)(lp_vampireReplay___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3___closed__4));
v___f_2750_ = ((lean_object*)(lp_vampireReplay___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3___closed__5));
lean_inc_ref(v_toFunctor_2742_);
v___f_2751_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2751_, 0, v_toFunctor_2742_);
v___f_2752_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2752_, 0, v_toFunctor_2742_);
v___x_2753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2753_, 0, v___f_2751_);
lean_ctor_set(v___x_2753_, 1, v___f_2752_);
v___f_2754_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2754_, 0, v_toSeqRight_2745_);
v___f_2755_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2755_, 0, v_toSeqLeft_2744_);
v___f_2756_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2756_, 0, v_toSeq_2743_);
if (v_isShared_2748_ == 0)
{
lean_ctor_set(v___x_2747_, 4, v___f_2754_);
lean_ctor_set(v___x_2747_, 3, v___f_2755_);
lean_ctor_set(v___x_2747_, 2, v___f_2756_);
lean_ctor_set(v___x_2747_, 1, v___f_2749_);
lean_ctor_set(v___x_2747_, 0, v___x_2753_);
v___x_2758_ = v___x_2747_;
goto v_reusejp_2757_;
}
else
{
lean_object* v_reuseFailAlloc_2784_; 
v_reuseFailAlloc_2784_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2784_, 0, v___x_2753_);
lean_ctor_set(v_reuseFailAlloc_2784_, 1, v___f_2749_);
lean_ctor_set(v_reuseFailAlloc_2784_, 2, v___f_2756_);
lean_ctor_set(v_reuseFailAlloc_2784_, 3, v___f_2755_);
lean_ctor_set(v_reuseFailAlloc_2784_, 4, v___f_2754_);
v___x_2758_ = v_reuseFailAlloc_2784_;
goto v_reusejp_2757_;
}
v_reusejp_2757_:
{
lean_object* v___x_2760_; 
if (v_isShared_2741_ == 0)
{
lean_ctor_set(v___x_2740_, 1, v___f_2750_);
lean_ctor_set(v___x_2740_, 0, v___x_2758_);
v___x_2760_ = v___x_2740_;
goto v_reusejp_2759_;
}
else
{
lean_object* v_reuseFailAlloc_2783_; 
v_reuseFailAlloc_2783_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2783_, 0, v___x_2758_);
lean_ctor_set(v_reuseFailAlloc_2783_, 1, v___f_2750_);
v___x_2760_ = v_reuseFailAlloc_2783_;
goto v_reusejp_2759_;
}
v_reusejp_2759_:
{
lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; uint8_t v___x_2765_; 
v___x_2761_ = l_StateRefT_x27_instMonad___redArg(v___x_2760_);
v___x_2762_ = l_ReaderT_instMonad___redArg(v___x_2761_);
v___x_2763_ = lean_array_get_size(v_acc_2713_);
v___x_2764_ = lean_array_get_size(v_declInfos_2710_);
v___x_2765_ = lean_nat_dec_lt(v___x_2763_, v___x_2764_);
if (v___x_2765_ == 0)
{
lean_object* v___x_2766_; 
lean_dec_ref(v___x_2762_);
lean_dec_ref(v_declInfos_2710_);
lean_inc(v___y_2719_);
lean_inc_ref(v___y_2718_);
lean_inc(v___y_2717_);
lean_inc_ref(v___y_2716_);
lean_inc(v___y_2715_);
lean_inc_ref(v___y_2714_);
v___x_2766_ = lean_apply_8(v_k_2711_, v_acc_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_, v___y_2719_, lean_box(0));
return v___x_2766_;
}
else
{
lean_object* v___f_2767_; lean_object* v___x_2768_; uint8_t v___x_2769_; lean_object* v___f_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v_snd_2775_; lean_object* v_fst_2776_; lean_object* v_fst_2777_; lean_object* v_snd_2778_; lean_object* v___x_2779_; 
v___f_2767_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3___lam__0___boxed), 9, 1);
lean_closure_set(v___f_2767_, 0, v___x_2762_);
v___x_2768_ = lean_box(0);
v___x_2769_ = 0;
v___f_2770_ = lean_alloc_closure((void*)(l_Pi_instInhabited___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2770_, 0, v___f_2767_);
v___x_2771_ = lean_box(v___x_2769_);
v___x_2772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2772_, 0, v___x_2771_);
lean_ctor_set(v___x_2772_, 1, v___f_2770_);
v___x_2773_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2773_, 0, v___x_2768_);
lean_ctor_set(v___x_2773_, 1, v___x_2772_);
v___x_2774_ = lean_array_get(v___x_2773_, v_declInfos_2710_, v___x_2763_);
lean_dec_ref_known(v___x_2773_, 2);
v_snd_2775_ = lean_ctor_get(v___x_2774_, 1);
lean_inc(v_snd_2775_);
v_fst_2776_ = lean_ctor_get(v___x_2774_, 0);
lean_inc(v_fst_2776_);
lean_dec(v___x_2774_);
v_fst_2777_ = lean_ctor_get(v_snd_2775_, 0);
lean_inc(v_fst_2777_);
v_snd_2778_ = lean_ctor_get(v_snd_2775_, 1);
lean_inc(v_snd_2778_);
lean_dec(v_snd_2775_);
lean_inc(v___y_2719_);
lean_inc_ref(v___y_2718_);
lean_inc(v___y_2717_);
lean_inc_ref(v___y_2716_);
lean_inc(v___y_2715_);
lean_inc_ref(v___y_2714_);
lean_inc_ref(v_acc_2713_);
v___x_2779_ = lean_apply_8(v_snd_2778_, v_acc_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_, v___y_2719_, lean_box(0));
if (lean_obj_tag(v___x_2779_) == 0)
{
lean_object* v_a_2780_; uint8_t v___x_2781_; lean_object* v___x_2782_; 
v_a_2780_ = lean_ctor_get(v___x_2779_, 0);
lean_inc(v_a_2780_);
lean_dec_ref_known(v___x_2779_, 1);
v___x_2781_ = lean_unbox(v_fst_2777_);
lean_dec(v_fst_2777_);
v___x_2782_ = lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3_spec__5(v_acc_2713_, v_declInfos_2710_, v_k_2711_, v_kind_2712_, v_fst_2776_, v___x_2781_, v_a_2780_, v_kind_2712_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_, v___y_2719_);
return v___x_2782_;
}
else
{
lean_dec(v_fst_2777_);
lean_dec(v_fst_2776_);
lean_dec_ref(v_acc_2713_);
lean_dec_ref(v_k_2711_);
lean_dec_ref(v_declInfos_2710_);
return v___x_2779_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3_spec__5___lam__0(lean_object* v_acc_2789_, lean_object* v_declInfos_2790_, lean_object* v_k_2791_, uint8_t v_kind_2792_, lean_object* v___y_2793_, lean_object* v___y_2794_, lean_object* v_b_2795_, lean_object* v___y_2796_, lean_object* v___y_2797_, lean_object* v___y_2798_, lean_object* v___y_2799_){
_start:
{
lean_object* v___x_2801_; lean_object* v___x_2802_; 
v___x_2801_ = lean_array_push(v_acc_2789_, v_b_2795_);
v___x_2802_ = lp_vampireReplay___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3(v_declInfos_2790_, v_k_2791_, v_kind_2792_, v___x_2801_, v___y_2793_, v___y_2794_, v___y_2796_, v___y_2797_, v___y_2798_, v___y_2799_);
return v___x_2802_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3_spec__5___boxed(lean_object* v_acc_2803_, lean_object* v_declInfos_2804_, lean_object* v_k_2805_, lean_object* v_kind_2806_, lean_object* v_name_2807_, lean_object* v_bi_2808_, lean_object* v_type_2809_, lean_object* v_kind_2810_, lean_object* v___y_2811_, lean_object* v___y_2812_, lean_object* v___y_2813_, lean_object* v___y_2814_, lean_object* v___y_2815_, lean_object* v___y_2816_, lean_object* v___y_2817_){
_start:
{
uint8_t v_kind_boxed_2818_; uint8_t v_bi_boxed_2819_; uint8_t v_kind_boxed_2820_; lean_object* v_res_2821_; 
v_kind_boxed_2818_ = lean_unbox(v_kind_2806_);
v_bi_boxed_2819_ = lean_unbox(v_bi_2808_);
v_kind_boxed_2820_ = lean_unbox(v_kind_2810_);
v_res_2821_ = lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3_spec__5(v_acc_2803_, v_declInfos_2804_, v_k_2805_, v_kind_boxed_2818_, v_name_2807_, v_bi_boxed_2819_, v_type_2809_, v_kind_boxed_2820_, v___y_2811_, v___y_2812_, v___y_2813_, v___y_2814_, v___y_2815_, v___y_2816_);
lean_dec(v___y_2816_);
lean_dec_ref(v___y_2815_);
lean_dec(v___y_2814_);
lean_dec_ref(v___y_2813_);
lean_dec(v___y_2812_);
lean_dec_ref(v___y_2811_);
return v_res_2821_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3___boxed(lean_object* v_declInfos_2822_, lean_object* v_k_2823_, lean_object* v_kind_2824_, lean_object* v_acc_2825_, lean_object* v___y_2826_, lean_object* v___y_2827_, lean_object* v___y_2828_, lean_object* v___y_2829_, lean_object* v___y_2830_, lean_object* v___y_2831_, lean_object* v___y_2832_){
_start:
{
uint8_t v_kind_boxed_2833_; lean_object* v_res_2834_; 
v_kind_boxed_2833_ = lean_unbox(v_kind_2824_);
v_res_2834_ = lp_vampireReplay___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3(v_declInfos_2822_, v_k_2823_, v_kind_boxed_2833_, v_acc_2825_, v___y_2826_, v___y_2827_, v___y_2828_, v___y_2829_, v___y_2830_, v___y_2831_);
lean_dec(v___y_2831_);
lean_dec_ref(v___y_2830_);
lean_dec(v___y_2829_);
lean_dec_ref(v___y_2828_);
lean_dec(v___y_2827_);
lean_dec_ref(v___y_2826_);
return v_res_2834_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2(lean_object* v_declInfos_2835_, lean_object* v_k_2836_, uint8_t v_kind_2837_, lean_object* v___y_2838_, lean_object* v___y_2839_, lean_object* v___y_2840_, lean_object* v___y_2841_, lean_object* v___y_2842_, lean_object* v___y_2843_){
_start:
{
lean_object* v___x_2845_; lean_object* v___x_2846_; 
v___x_2845_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__0));
v___x_2846_ = lp_vampireReplay___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2_spec__3(v_declInfos_2835_, v_k_2836_, v_kind_2837_, v___x_2845_, v___y_2838_, v___y_2839_, v___y_2840_, v___y_2841_, v___y_2842_, v___y_2843_);
return v___x_2846_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2___boxed(lean_object* v_declInfos_2847_, lean_object* v_k_2848_, lean_object* v_kind_2849_, lean_object* v___y_2850_, lean_object* v___y_2851_, lean_object* v___y_2852_, lean_object* v___y_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_, lean_object* v___y_2856_){
_start:
{
uint8_t v_kind_boxed_2857_; lean_object* v_res_2858_; 
v_kind_boxed_2857_ = lean_unbox(v_kind_2849_);
v_res_2858_ = lp_vampireReplay_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2(v_declInfos_2847_, v_k_2848_, v_kind_boxed_2857_, v___y_2850_, v___y_2851_, v___y_2852_, v___y_2853_, v___y_2854_, v___y_2855_);
lean_dec(v___y_2855_);
lean_dec_ref(v___y_2854_);
lean_dec(v___y_2853_);
lean_dec_ref(v___y_2852_);
lean_dec(v___y_2851_);
lean_dec_ref(v___y_2850_);
return v_res_2858_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1(lean_object* v_declInfos_2859_, lean_object* v_k_2860_, uint8_t v_kind_2861_, lean_object* v___y_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_, lean_object* v___y_2865_, lean_object* v___y_2866_, lean_object* v___y_2867_){
_start:
{
size_t v_sz_2869_; size_t v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; 
v_sz_2869_ = lean_array_size(v_declInfos_2859_);
v___x_2870_ = ((size_t)0ULL);
v___x_2871_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__1(v_sz_2869_, v___x_2870_, v_declInfos_2859_);
v___x_2872_ = lp_vampireReplay_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1_spec__2(v___x_2871_, v_k_2860_, v_kind_2861_, v___y_2862_, v___y_2863_, v___y_2864_, v___y_2865_, v___y_2866_, v___y_2867_);
return v___x_2872_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1___boxed(lean_object* v_declInfos_2873_, lean_object* v_k_2874_, lean_object* v_kind_2875_, lean_object* v___y_2876_, lean_object* v___y_2877_, lean_object* v___y_2878_, lean_object* v___y_2879_, lean_object* v___y_2880_, lean_object* v___y_2881_, lean_object* v___y_2882_){
_start:
{
uint8_t v_kind_boxed_2883_; lean_object* v_res_2884_; 
v_kind_boxed_2883_ = lean_unbox(v_kind_2875_);
v_res_2884_ = lp_vampireReplay_Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1(v_declInfos_2873_, v_k_2874_, v_kind_boxed_2883_, v___y_2876_, v___y_2877_, v___y_2878_, v___y_2879_, v___y_2880_, v___y_2881_);
lean_dec(v___y_2881_);
lean_dec_ref(v___y_2880_);
lean_dec(v___y_2879_);
lean_dec_ref(v___y_2878_);
lean_dec(v___y_2877_);
lean_dec_ref(v___y_2876_);
return v_res_2884_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_standingFor(lean_object* v_types_2885_, lean_object* v_values_2886_, lean_object* v_k_2887_, lean_object* v_a_2888_, lean_object* v_a_2889_, lean_object* v_a_2890_, lean_object* v_a_2891_, lean_object* v_a_2892_, lean_object* v_a_2893_){
_start:
{
lean_object* v___f_2895_; size_t v_sz_2896_; size_t v___x_2897_; lean_object* v_decls_2898_; uint8_t v___x_2899_; lean_object* v___x_2900_; 
v___f_2895_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_standingFor___lam__0___boxed), 9, 1);
lean_closure_set(v___f_2895_, 0, v_k_2887_);
v_sz_2896_ = lean_array_size(v_types_2885_);
v___x_2897_ = ((size_t)0ULL);
v_decls_2898_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Vampire_Reconstruct_standingFor_spec__0___redArg(v_sz_2896_, v___x_2897_, v_types_2885_);
v___x_2899_ = 0;
v___x_2900_ = lp_vampireReplay_Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1(v_decls_2898_, v___f_2895_, v___x_2899_, v_a_2888_, v_a_2889_, v_a_2890_, v_a_2891_, v_a_2892_, v_a_2893_);
if (lean_obj_tag(v___x_2900_) == 0)
{
lean_object* v_a_2901_; lean_object* v___x_2903_; uint8_t v_isShared_2904_; uint8_t v_isSharedCheck_2909_; 
v_a_2901_ = lean_ctor_get(v___x_2900_, 0);
v_isSharedCheck_2909_ = !lean_is_exclusive(v___x_2900_);
if (v_isSharedCheck_2909_ == 0)
{
v___x_2903_ = v___x_2900_;
v_isShared_2904_ = v_isSharedCheck_2909_;
goto v_resetjp_2902_;
}
else
{
lean_inc(v_a_2901_);
lean_dec(v___x_2900_);
v___x_2903_ = lean_box(0);
v_isShared_2904_ = v_isSharedCheck_2909_;
goto v_resetjp_2902_;
}
v_resetjp_2902_:
{
lean_object* v___x_2905_; lean_object* v___x_2907_; 
v___x_2905_ = l_Lean_mkAppN(v_a_2901_, v_values_2886_);
if (v_isShared_2904_ == 0)
{
lean_ctor_set(v___x_2903_, 0, v___x_2905_);
v___x_2907_ = v___x_2903_;
goto v_reusejp_2906_;
}
else
{
lean_object* v_reuseFailAlloc_2908_; 
v_reuseFailAlloc_2908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2908_, 0, v___x_2905_);
v___x_2907_ = v_reuseFailAlloc_2908_;
goto v_reusejp_2906_;
}
v_reusejp_2906_:
{
return v___x_2907_;
}
}
}
else
{
return v___x_2900_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_standingFor___boxed(lean_object* v_types_2910_, lean_object* v_values_2911_, lean_object* v_k_2912_, lean_object* v_a_2913_, lean_object* v_a_2914_, lean_object* v_a_2915_, lean_object* v_a_2916_, lean_object* v_a_2917_, lean_object* v_a_2918_, lean_object* v_a_2919_){
_start:
{
lean_object* v_res_2920_; 
v_res_2920_ = lp_vampireReplay_Vampire_Reconstruct_standingFor(v_types_2910_, v_values_2911_, v_k_2912_, v_a_2913_, v_a_2914_, v_a_2915_, v_a_2916_, v_a_2917_, v_a_2918_);
lean_dec(v_a_2918_);
lean_dec_ref(v_a_2917_);
lean_dec(v_a_2916_);
lean_dec_ref(v_a_2915_);
lean_dec(v_a_2914_);
lean_dec_ref(v_a_2913_);
lean_dec_ref(v_values_2911_);
return v_res_2920_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Vampire_Reconstruct_standingFor_spec__0(lean_object* v_as_2921_, size_t v_sz_2922_, size_t v_i_2923_, lean_object* v_bs_2924_){
_start:
{
lean_object* v___x_2925_; 
v___x_2925_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Vampire_Reconstruct_standingFor_spec__0___redArg(v_sz_2922_, v_i_2923_, v_bs_2924_);
return v___x_2925_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Vampire_Reconstruct_standingFor_spec__0___boxed(lean_object* v_as_2926_, lean_object* v_sz_2927_, lean_object* v_i_2928_, lean_object* v_bs_2929_){
_start:
{
size_t v_sz_boxed_2930_; size_t v_i_boxed_2931_; lean_object* v_res_2932_; 
v_sz_boxed_2930_ = lean_unbox_usize(v_sz_2927_);
lean_dec(v_sz_2927_);
v_i_boxed_2931_ = lean_unbox_usize(v_i_2928_);
lean_dec(v_i_2928_);
v_res_2932_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Vampire_Reconstruct_standingFor_spec__0(v_as_2926_, v_sz_boxed_2930_, v_i_boxed_2931_, v_bs_2929_);
lean_dec_ref(v_as_2926_);
return v_res_2932_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_unrelated(lean_object* v_a_2933_, lean_object* v_b_2934_, lean_object* v_why_2935_, lean_object* v_a_2936_, lean_object* v_a_2937_, lean_object* v_a_2938_, lean_object* v_a_2939_, lean_object* v_a_2940_, lean_object* v_a_2941_){
_start:
{
lean_object* v___x_2943_; 
v___x_2943_ = lp_vampireReplay_Vampire_Reconstruct_arithmeticIff(v_a_2933_, v_b_2934_, v_a_2936_, v_a_2937_, v_a_2938_, v_a_2939_, v_a_2940_, v_a_2941_);
if (lean_obj_tag(v___x_2943_) == 0)
{
lean_dec_ref(v_why_2935_);
return v___x_2943_;
}
else
{
lean_object* v_a_2944_; uint8_t v___y_2946_; uint8_t v___x_2948_; 
v_a_2944_ = lean_ctor_get(v___x_2943_, 0);
lean_inc(v_a_2944_);
v___x_2948_ = l_Lean_Exception_isInterrupt(v_a_2944_);
if (v___x_2948_ == 0)
{
uint8_t v___x_2949_; 
v___x_2949_ = l_Lean_Exception_isRuntime(v_a_2944_);
v___y_2946_ = v___x_2949_;
goto v___jp_2945_;
}
else
{
lean_dec(v_a_2944_);
v___y_2946_ = v___x_2948_;
goto v___jp_2945_;
}
v___jp_2945_:
{
if (v___y_2946_ == 0)
{
lean_object* v___x_2947_; 
lean_dec_ref_known(v___x_2943_, 1);
v___x_2947_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v_why_2935_, v_a_2938_, v_a_2939_, v_a_2940_, v_a_2941_);
return v___x_2947_;
}
else
{
lean_dec_ref(v_why_2935_);
return v___x_2943_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_unrelated___boxed(lean_object* v_a_2950_, lean_object* v_b_2951_, lean_object* v_why_2952_, lean_object* v_a_2953_, lean_object* v_a_2954_, lean_object* v_a_2955_, lean_object* v_a_2956_, lean_object* v_a_2957_, lean_object* v_a_2958_, lean_object* v_a_2959_){
_start:
{
lean_object* v_res_2960_; 
v_res_2960_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_unrelated(v_a_2950_, v_b_2951_, v_why_2952_, v_a_2953_, v_a_2954_, v_a_2955_, v_a_2956_, v_a_2957_, v_a_2958_);
lean_dec(v_a_2958_);
lean_dec_ref(v_a_2957_);
lean_dec(v_a_2956_);
lean_dec_ref(v_a_2955_);
lean_dec(v_a_2954_);
lean_dec_ref(v_a_2953_);
return v_res_2960_;
}
}
static lean_object* _init_lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__1___closed__2(void){
_start:
{
lean_object* v___x_2965_; lean_object* v___x_2966_; lean_object* v___x_2967_; 
v___x_2965_ = lean_box(0);
v___x_2966_ = ((lean_object*)(lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__1___closed__1));
v___x_2967_ = l_Lean_Expr_const___override(v___x_2966_, v___x_2965_);
return v___x_2967_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__1(lean_object* v___x_2968_, lean_object* v___x_2969_, lean_object* v_parts_2970_, lean_object* v_i_2971_, lean_object* v_h_2972_){
_start:
{
lean_object* v___x_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; 
v___x_2973_ = lean_obj_once(&lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__1___closed__2, &lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__1___closed__2_once, _init_lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__1___closed__2);
v___x_2974_ = l_Lean_instInhabitedExpr;
v___x_2975_ = lean_array_get_borrowed(v___x_2974_, v___x_2968_, v_i_2971_);
v___x_2976_ = lean_array_get_borrowed(v___x_2974_, v___x_2969_, v_i_2971_);
v___x_2977_ = lean_array_get_borrowed(v___x_2974_, v_parts_2970_, v_i_2971_);
lean_inc(v___x_2977_);
lean_inc(v___x_2976_);
lean_inc(v___x_2975_);
v___x_2978_ = l_Lean_mkApp4(v___x_2973_, v___x_2975_, v___x_2976_, v___x_2977_, v_h_2972_);
return v___x_2978_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__1___boxed(lean_object* v___x_2979_, lean_object* v___x_2980_, lean_object* v_parts_2981_, lean_object* v_i_2982_, lean_object* v_h_2983_){
_start:
{
lean_object* v_res_2984_; 
v_res_2984_ = lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__1(v___x_2979_, v___x_2980_, v_parts_2981_, v_i_2982_, v_h_2983_);
lean_dec(v_i_2982_);
lean_dec_ref(v_parts_2981_);
lean_dec_ref(v___x_2980_);
lean_dec_ref(v___x_2979_);
return v_res_2984_;
}
}
static lean_object* _init_lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; 
v___x_2989_ = lean_box(0);
v___x_2990_ = ((lean_object*)(lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__0___closed__1));
v___x_2991_ = l_Lean_Expr_const___override(v___x_2990_, v___x_2989_);
return v___x_2991_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__0(lean_object* v___x_2992_, lean_object* v___x_2993_, lean_object* v_parts_2994_, lean_object* v_i_2995_, lean_object* v_h_2996_){
_start:
{
lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; 
v___x_2997_ = lean_obj_once(&lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__0___closed__2, &lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__0___closed__2_once, _init_lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__0___closed__2);
v___x_2998_ = l_Lean_instInhabitedExpr;
v___x_2999_ = lean_array_get_borrowed(v___x_2998_, v___x_2992_, v_i_2995_);
v___x_3000_ = lean_array_get_borrowed(v___x_2998_, v___x_2993_, v_i_2995_);
v___x_3001_ = lean_array_get_borrowed(v___x_2998_, v_parts_2994_, v_i_2995_);
lean_inc(v___x_3001_);
lean_inc(v___x_3000_);
lean_inc(v___x_2999_);
v___x_3002_ = l_Lean_mkApp4(v___x_2997_, v___x_2999_, v___x_3000_, v___x_3001_, v_h_2996_);
return v___x_3002_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__0___boxed(lean_object* v___x_3003_, lean_object* v___x_3004_, lean_object* v_parts_3005_, lean_object* v_i_3006_, lean_object* v_h_3007_){
_start:
{
lean_object* v_res_3008_; 
v_res_3008_ = lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__0(v___x_3003_, v___x_3004_, v_parts_3005_, v_i_3006_, v_h_3007_);
lean_dec(v_i_3006_);
lean_dec_ref(v_parts_3005_);
lean_dec_ref(v___x_3004_);
lean_dec_ref(v___x_3003_);
return v_res_3008_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__6(lean_object* v_head_3009_, lean_object* v_a_3010_, lean_object* v_h_3011_, lean_object* v___f_3012_, lean_object* v_j_3013_, lean_object* v___y_3014_, lean_object* v___y_3015_, lean_object* v___y_3016_, lean_object* v___y_3017_, lean_object* v___y_3018_, lean_object* v___y_3019_){
_start:
{
lean_object* v___x_3021_; 
lean_inc(v_j_3013_);
v___x_3021_ = lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg(v_head_3009_, v_a_3010_, v_j_3013_, v_h_3011_);
if (lean_obj_tag(v___x_3021_) == 0)
{
lean_object* v_a_3022_; lean_object* v___x_3024_; uint8_t v_isShared_3025_; uint8_t v_isSharedCheck_3030_; 
v_a_3022_ = lean_ctor_get(v___x_3021_, 0);
v_isSharedCheck_3030_ = !lean_is_exclusive(v___x_3021_);
if (v_isSharedCheck_3030_ == 0)
{
v___x_3024_ = v___x_3021_;
v_isShared_3025_ = v_isSharedCheck_3030_;
goto v_resetjp_3023_;
}
else
{
lean_inc(v_a_3022_);
lean_dec(v___x_3021_);
v___x_3024_ = lean_box(0);
v_isShared_3025_ = v_isSharedCheck_3030_;
goto v_resetjp_3023_;
}
v_resetjp_3023_:
{
lean_object* v___x_3026_; lean_object* v___x_3028_; 
v___x_3026_ = lean_apply_2(v___f_3012_, v_j_3013_, v_a_3022_);
if (v_isShared_3025_ == 0)
{
lean_ctor_set(v___x_3024_, 0, v___x_3026_);
v___x_3028_ = v___x_3024_;
goto v_reusejp_3027_;
}
else
{
lean_object* v_reuseFailAlloc_3029_; 
v_reuseFailAlloc_3029_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3029_, 0, v___x_3026_);
v___x_3028_ = v_reuseFailAlloc_3029_;
goto v_reusejp_3027_;
}
v_reusejp_3027_:
{
return v___x_3028_;
}
}
}
else
{
lean_dec(v_j_3013_);
lean_dec_ref(v___f_3012_);
return v___x_3021_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__6___boxed(lean_object* v_head_3031_, lean_object* v_a_3032_, lean_object* v_h_3033_, lean_object* v___f_3034_, lean_object* v_j_3035_, lean_object* v___y_3036_, lean_object* v___y_3037_, lean_object* v___y_3038_, lean_object* v___y_3039_, lean_object* v___y_3040_, lean_object* v___y_3041_, lean_object* v___y_3042_){
_start:
{
lean_object* v_res_3043_; 
v_res_3043_ = lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__6(v_head_3031_, v_a_3032_, v_h_3033_, v___f_3034_, v_j_3035_, v___y_3036_, v___y_3037_, v___y_3038_, v___y_3039_, v___y_3040_, v___y_3041_);
lean_dec(v___y_3041_);
lean_dec_ref(v___y_3040_);
lean_dec(v___y_3039_);
lean_dec_ref(v___y_3038_);
lean_dec(v___y_3037_);
lean_dec_ref(v___y_3036_);
lean_dec(v_head_3031_);
return v_res_3043_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__4(lean_object* v_head_3044_, lean_object* v_a_3045_, lean_object* v___f_3046_, lean_object* v_a_3047_, lean_object* v___x_3048_, uint8_t v___y_3049_, uint8_t v___x_3050_, lean_object* v_h_3051_, lean_object* v___y_3052_, lean_object* v___y_3053_, lean_object* v___y_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_){
_start:
{
lean_object* v___f_3059_; lean_object* v___x_3060_; 
lean_inc_ref(v_h_3051_);
v___f_3059_ = lean_alloc_closure((void*)(lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__6___boxed), 12, 4);
lean_closure_set(v___f_3059_, 0, v_head_3044_);
lean_closure_set(v___f_3059_, 1, v_a_3045_);
lean_closure_set(v___f_3059_, 2, v_h_3051_);
lean_closure_set(v___f_3059_, 3, v___f_3046_);
v___x_3060_ = lp_vampireReplay_Vampire_Reconstruct_introParts(v_a_3047_, v___x_3048_, v___f_3059_, v___y_3052_, v___y_3053_, v___y_3054_, v___y_3055_, v___y_3056_, v___y_3057_);
if (lean_obj_tag(v___x_3060_) == 0)
{
lean_object* v_a_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v___x_3064_; uint8_t v___x_3065_; lean_object* v___x_3066_; 
v_a_3061_ = lean_ctor_get(v___x_3060_, 0);
lean_inc(v_a_3061_);
lean_dec_ref_known(v___x_3060_, 1);
v___x_3062_ = lean_unsigned_to_nat(1u);
v___x_3063_ = lean_mk_empty_array_with_capacity(v___x_3062_);
v___x_3064_ = lean_array_push(v___x_3063_, v_h_3051_);
v___x_3065_ = 1;
v___x_3066_ = l_Lean_Meta_mkLambdaFVars(v___x_3064_, v_a_3061_, v___y_3049_, v___x_3050_, v___y_3049_, v___x_3050_, v___x_3065_, v___y_3054_, v___y_3055_, v___y_3056_, v___y_3057_);
lean_dec_ref(v___x_3064_);
return v___x_3066_;
}
else
{
lean_dec_ref(v_h_3051_);
return v___x_3060_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__4___boxed(lean_object* v_head_3067_, lean_object* v_a_3068_, lean_object* v___f_3069_, lean_object* v_a_3070_, lean_object* v___x_3071_, lean_object* v___y_3072_, lean_object* v___x_3073_, lean_object* v_h_3074_, lean_object* v___y_3075_, lean_object* v___y_3076_, lean_object* v___y_3077_, lean_object* v___y_3078_, lean_object* v___y_3079_, lean_object* v___y_3080_, lean_object* v___y_3081_){
_start:
{
uint8_t v___y_98538__boxed_3082_; uint8_t v___x_98539__boxed_3083_; lean_object* v_res_3084_; 
v___y_98538__boxed_3082_ = lean_unbox(v___y_3072_);
v___x_98539__boxed_3083_ = lean_unbox(v___x_3073_);
v_res_3084_ = lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__4(v_head_3067_, v_a_3068_, v___f_3069_, v_a_3070_, v___x_3071_, v___y_98538__boxed_3082_, v___x_98539__boxed_3083_, v_h_3074_, v___y_3075_, v___y_3076_, v___y_3077_, v___y_3078_, v___y_3079_, v___y_3080_);
lean_dec(v___y_3080_);
lean_dec_ref(v___y_3079_);
lean_dec(v___y_3078_);
lean_dec_ref(v___y_3077_);
lean_dec(v___y_3076_);
lean_dec_ref(v___y_3075_);
lean_dec_ref(v_a_3070_);
return v_res_3084_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__2(lean_object* v___f_3085_, lean_object* v_head_3086_, lean_object* v_a_3087_, lean_object* v_i_3088_, lean_object* v_hi_3089_, lean_object* v___y_3090_, lean_object* v___y_3091_, lean_object* v___y_3092_, lean_object* v___y_3093_, lean_object* v___y_3094_, lean_object* v___y_3095_){
_start:
{
lean_object* v___x_3097_; lean_object* v___x_3098_; 
lean_inc(v_i_3088_);
v___x_3097_ = lean_apply_2(v___f_3085_, v_i_3088_, v_hi_3089_);
v___x_3098_ = lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg(v_head_3086_, v_a_3087_, v_i_3088_, v___x_3097_);
lean_dec(v_i_3088_);
return v___x_3098_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__2___boxed(lean_object* v___f_3099_, lean_object* v_head_3100_, lean_object* v_a_3101_, lean_object* v_i_3102_, lean_object* v_hi_3103_, lean_object* v___y_3104_, lean_object* v___y_3105_, lean_object* v___y_3106_, lean_object* v___y_3107_, lean_object* v___y_3108_, lean_object* v___y_3109_, lean_object* v___y_3110_){
_start:
{
lean_object* v_res_3111_; 
v_res_3111_ = lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__2(v___f_3099_, v_head_3100_, v_a_3101_, v_i_3102_, v_hi_3103_, v___y_3104_, v___y_3105_, v___y_3106_, v___y_3107_, v___y_3108_, v___y_3109_);
lean_dec(v___y_3109_);
lean_dec_ref(v___y_3108_);
lean_dec(v___y_3107_);
lean_dec_ref(v___y_3106_);
lean_dec(v___y_3105_);
lean_dec_ref(v___y_3104_);
lean_dec_ref(v_a_3101_);
lean_dec(v_head_3100_);
return v_res_3111_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__3(lean_object* v_a_3112_, lean_object* v___x_3113_, lean_object* v___f_3114_, uint8_t v___x_3115_, uint8_t v___x_3116_, lean_object* v_h_3117_, lean_object* v___y_3118_, lean_object* v___y_3119_, lean_object* v___y_3120_, lean_object* v___y_3121_, lean_object* v___y_3122_, lean_object* v___y_3123_){
_start:
{
lean_object* v___x_3125_; 
lean_inc_ref(v_h_3117_);
v___x_3125_ = lp_vampireReplay_Vampire_Reconstruct_elimParts(v_a_3112_, v___x_3113_, v___f_3114_, v_h_3117_, v___y_3118_, v___y_3119_, v___y_3120_, v___y_3121_, v___y_3122_, v___y_3123_);
if (lean_obj_tag(v___x_3125_) == 0)
{
lean_object* v_a_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; uint8_t v___x_3130_; lean_object* v___x_3131_; 
v_a_3126_ = lean_ctor_get(v___x_3125_, 0);
lean_inc(v_a_3126_);
lean_dec_ref_known(v___x_3125_, 1);
v___x_3127_ = lean_unsigned_to_nat(1u);
v___x_3128_ = lean_mk_empty_array_with_capacity(v___x_3127_);
v___x_3129_ = lean_array_push(v___x_3128_, v_h_3117_);
v___x_3130_ = 1;
v___x_3131_ = l_Lean_Meta_mkLambdaFVars(v___x_3129_, v_a_3126_, v___x_3115_, v___x_3116_, v___x_3115_, v___x_3116_, v___x_3130_, v___y_3120_, v___y_3121_, v___y_3122_, v___y_3123_);
lean_dec_ref(v___x_3129_);
return v___x_3131_;
}
else
{
lean_dec_ref(v_h_3117_);
return v___x_3125_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__3___boxed(lean_object* v_a_3132_, lean_object* v___x_3133_, lean_object* v___f_3134_, lean_object* v___x_3135_, lean_object* v___x_3136_, lean_object* v_h_3137_, lean_object* v___y_3138_, lean_object* v___y_3139_, lean_object* v___y_3140_, lean_object* v___y_3141_, lean_object* v___y_3142_, lean_object* v___y_3143_, lean_object* v___y_3144_){
_start:
{
uint8_t v___x_98629__boxed_3145_; uint8_t v___x_98630__boxed_3146_; lean_object* v_res_3147_; 
v___x_98629__boxed_3145_ = lean_unbox(v___x_3135_);
v___x_98630__boxed_3146_ = lean_unbox(v___x_3136_);
v_res_3147_ = lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__3(v_a_3132_, v___x_3133_, v___f_3134_, v___x_98629__boxed_3145_, v___x_98630__boxed_3146_, v_h_3137_, v___y_3138_, v___y_3139_, v___y_3140_, v___y_3141_, v___y_3142_, v___y_3143_);
lean_dec(v___y_3143_);
lean_dec_ref(v___y_3142_);
lean_dec(v___y_3141_);
lean_dec_ref(v___y_3140_);
lean_dec(v___y_3139_);
lean_dec_ref(v___y_3138_);
lean_dec_ref(v_a_3132_);
return v_res_3147_;
}
}
static lean_object* _init_lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__8___closed__1(void){
_start:
{
lean_object* v___x_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; 
v___x_3151_ = lean_box(0);
v___x_3152_ = ((lean_object*)(lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__8___closed__0));
v___x_3153_ = l_Lean_Expr_const___override(v___x_3152_, v___x_3151_);
return v___x_3153_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__8(lean_object* v___x_3154_, lean_object* v___x_3155_, lean_object* v_head_3156_, lean_object* v___x_3157_, lean_object* v_a_3158_, lean_object* v_a_3159_, lean_object* v___x_3160_, uint8_t v___x_3161_, uint8_t v___y_3162_, lean_object* v_parts_3163_, lean_object* v___y_3164_, lean_object* v___y_3165_, lean_object* v___y_3166_, lean_object* v___y_3167_, lean_object* v___y_3168_, lean_object* v___y_3169_){
_start:
{
lean_object* v___f_3171_; lean_object* v___f_3172_; uint8_t v___x_3173_; 
lean_inc_ref(v_parts_3163_);
lean_inc_ref(v___x_3155_);
lean_inc_ref(v___x_3154_);
v___f_3171_ = lean_alloc_closure((void*)(lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_3171_, 0, v___x_3154_);
lean_closure_set(v___f_3171_, 1, v___x_3155_);
lean_closure_set(v___f_3171_, 2, v_parts_3163_);
v___f_3172_ = lean_alloc_closure((void*)(lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_3172_, 0, v___x_3154_);
lean_closure_set(v___f_3172_, 1, v___x_3155_);
lean_closure_set(v___f_3172_, 2, v_parts_3163_);
v___x_3173_ = lean_name_eq(v_head_3156_, v___x_3157_);
if (v___x_3173_ == 0)
{
lean_object* v___f_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; lean_object* v___f_3177_; lean_object* v___x_3178_; lean_object* v___x_3179_; 
lean_inc_ref(v_a_3158_);
lean_inc(v_head_3156_);
v___f_3174_ = lean_alloc_closure((void*)(lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__2___boxed), 12, 3);
lean_closure_set(v___f_3174_, 0, v___f_3171_);
lean_closure_set(v___f_3174_, 1, v_head_3156_);
lean_closure_set(v___f_3174_, 2, v_a_3158_);
v___x_3175_ = lean_box(v___x_3173_);
v___x_3176_ = lean_box(v___x_3161_);
lean_inc(v___x_3160_);
lean_inc_ref_n(v_a_3159_, 2);
v___f_3177_ = lean_alloc_closure((void*)(lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__3___boxed), 13, 5);
lean_closure_set(v___f_3177_, 0, v_a_3159_);
lean_closure_set(v___f_3177_, 1, v___x_3160_);
lean_closure_set(v___f_3177_, 2, v___f_3174_);
lean_closure_set(v___f_3177_, 3, v___x_3175_);
lean_closure_set(v___f_3177_, 4, v___x_3176_);
v___x_3178_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_implies_spec__2___closed__2));
v___x_3179_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_3178_, v_a_3159_, v___f_3177_, v___y_3164_, v___y_3165_, v___y_3166_, v___y_3167_, v___y_3168_, v___y_3169_);
if (lean_obj_tag(v___x_3179_) == 0)
{
lean_object* v_a_3180_; lean_object* v___f_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___f_3184_; lean_object* v___x_3185_; 
v_a_3180_ = lean_ctor_get(v___x_3179_, 0);
lean_inc(v_a_3180_);
lean_dec_ref_known(v___x_3179_, 1);
lean_inc_ref(v_a_3159_);
v___f_3181_ = lean_alloc_closure((void*)(lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__2___boxed), 12, 3);
lean_closure_set(v___f_3181_, 0, v___f_3172_);
lean_closure_set(v___f_3181_, 1, v_head_3156_);
lean_closure_set(v___f_3181_, 2, v_a_3159_);
v___x_3182_ = lean_box(v___x_3173_);
v___x_3183_ = lean_box(v___x_3161_);
lean_inc_ref_n(v_a_3158_, 2);
v___f_3184_ = lean_alloc_closure((void*)(lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__3___boxed), 13, 5);
lean_closure_set(v___f_3184_, 0, v_a_3158_);
lean_closure_set(v___f_3184_, 1, v___x_3160_);
lean_closure_set(v___f_3184_, 2, v___f_3181_);
lean_closure_set(v___f_3184_, 3, v___x_3182_);
lean_closure_set(v___f_3184_, 4, v___x_3183_);
v___x_3185_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_3178_, v_a_3158_, v___f_3184_, v___y_3164_, v___y_3165_, v___y_3166_, v___y_3167_, v___y_3168_, v___y_3169_);
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
lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3193_; 
v___x_3190_ = lean_obj_once(&lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__8___closed__1, &lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__8___closed__1_once, _init_lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__8___closed__1);
v___x_3191_ = l_Lean_mkApp4(v___x_3190_, v_a_3159_, v_a_3158_, v_a_3180_, v_a_3186_);
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
lean_dec(v_a_3180_);
lean_dec_ref(v_a_3159_);
lean_dec_ref(v_a_3158_);
return v___x_3185_;
}
}
else
{
lean_dec_ref(v___f_3172_);
lean_dec(v___x_3160_);
lean_dec_ref(v_a_3159_);
lean_dec_ref(v_a_3158_);
lean_dec(v_head_3156_);
return v___x_3179_;
}
}
else
{
lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___f_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; 
v___x_3196_ = lean_box(v___y_3162_);
v___x_3197_ = lean_box(v___x_3161_);
lean_inc(v___x_3160_);
lean_inc_ref(v_a_3158_);
lean_inc_ref_n(v_a_3159_, 2);
lean_inc(v_head_3156_);
v___f_3198_ = lean_alloc_closure((void*)(lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__4___boxed), 15, 7);
lean_closure_set(v___f_3198_, 0, v_head_3156_);
lean_closure_set(v___f_3198_, 1, v_a_3159_);
lean_closure_set(v___f_3198_, 2, v___f_3171_);
lean_closure_set(v___f_3198_, 3, v_a_3158_);
lean_closure_set(v___f_3198_, 4, v___x_3160_);
lean_closure_set(v___f_3198_, 5, v___x_3196_);
lean_closure_set(v___f_3198_, 6, v___x_3197_);
v___x_3199_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_implies_spec__2___closed__2));
v___x_3200_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_3199_, v_a_3159_, v___f_3198_, v___y_3164_, v___y_3165_, v___y_3166_, v___y_3167_, v___y_3168_, v___y_3169_);
if (lean_obj_tag(v___x_3200_) == 0)
{
lean_object* v_a_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___f_3204_; lean_object* v___x_3205_; 
v_a_3201_ = lean_ctor_get(v___x_3200_, 0);
lean_inc(v_a_3201_);
lean_dec_ref_known(v___x_3200_, 1);
v___x_3202_ = lean_box(v___y_3162_);
v___x_3203_ = lean_box(v___x_3161_);
lean_inc_ref(v_a_3159_);
lean_inc_ref_n(v_a_3158_, 2);
v___f_3204_ = lean_alloc_closure((void*)(lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__4___boxed), 15, 7);
lean_closure_set(v___f_3204_, 0, v_head_3156_);
lean_closure_set(v___f_3204_, 1, v_a_3158_);
lean_closure_set(v___f_3204_, 2, v___f_3172_);
lean_closure_set(v___f_3204_, 3, v_a_3159_);
lean_closure_set(v___f_3204_, 4, v___x_3160_);
lean_closure_set(v___f_3204_, 5, v___x_3202_);
lean_closure_set(v___f_3204_, 6, v___x_3203_);
v___x_3205_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_3199_, v_a_3158_, v___f_3204_, v___y_3164_, v___y_3165_, v___y_3166_, v___y_3167_, v___y_3168_, v___y_3169_);
if (lean_obj_tag(v___x_3205_) == 0)
{
lean_object* v_a_3206_; lean_object* v___x_3208_; uint8_t v_isShared_3209_; uint8_t v_isSharedCheck_3215_; 
v_a_3206_ = lean_ctor_get(v___x_3205_, 0);
v_isSharedCheck_3215_ = !lean_is_exclusive(v___x_3205_);
if (v_isSharedCheck_3215_ == 0)
{
v___x_3208_ = v___x_3205_;
v_isShared_3209_ = v_isSharedCheck_3215_;
goto v_resetjp_3207_;
}
else
{
lean_inc(v_a_3206_);
lean_dec(v___x_3205_);
v___x_3208_ = lean_box(0);
v_isShared_3209_ = v_isSharedCheck_3215_;
goto v_resetjp_3207_;
}
v_resetjp_3207_:
{
lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3213_; 
v___x_3210_ = lean_obj_once(&lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__8___closed__1, &lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__8___closed__1_once, _init_lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__8___closed__1);
v___x_3211_ = l_Lean_mkApp4(v___x_3210_, v_a_3159_, v_a_3158_, v_a_3201_, v_a_3206_);
if (v_isShared_3209_ == 0)
{
lean_ctor_set(v___x_3208_, 0, v___x_3211_);
v___x_3213_ = v___x_3208_;
goto v_reusejp_3212_;
}
else
{
lean_object* v_reuseFailAlloc_3214_; 
v_reuseFailAlloc_3214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3214_, 0, v___x_3211_);
v___x_3213_ = v_reuseFailAlloc_3214_;
goto v_reusejp_3212_;
}
v_reusejp_3212_:
{
return v___x_3213_;
}
}
}
else
{
lean_dec(v_a_3201_);
lean_dec_ref(v_a_3159_);
lean_dec_ref(v_a_3158_);
return v___x_3205_;
}
}
else
{
lean_dec_ref(v___f_3172_);
lean_dec(v___x_3160_);
lean_dec_ref(v_a_3159_);
lean_dec_ref(v_a_3158_);
lean_dec(v_head_3156_);
return v___x_3200_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__8___boxed(lean_object** _args){
lean_object* v___x_3216_ = _args[0];
lean_object* v___x_3217_ = _args[1];
lean_object* v_head_3218_ = _args[2];
lean_object* v___x_3219_ = _args[3];
lean_object* v_a_3220_ = _args[4];
lean_object* v_a_3221_ = _args[5];
lean_object* v___x_3222_ = _args[6];
lean_object* v___x_3223_ = _args[7];
lean_object* v___y_3224_ = _args[8];
lean_object* v_parts_3225_ = _args[9];
lean_object* v___y_3226_ = _args[10];
lean_object* v___y_3227_ = _args[11];
lean_object* v___y_3228_ = _args[12];
lean_object* v___y_3229_ = _args[13];
lean_object* v___y_3230_ = _args[14];
lean_object* v___y_3231_ = _args[15];
lean_object* v___y_3232_ = _args[16];
_start:
{
uint8_t v___x_98712__boxed_3233_; uint8_t v___y_98713__boxed_3234_; lean_object* v_res_3235_; 
v___x_98712__boxed_3233_ = lean_unbox(v___x_3223_);
v___y_98713__boxed_3234_ = lean_unbox(v___y_3224_);
v_res_3235_ = lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__8(v___x_3216_, v___x_3217_, v_head_3218_, v___x_3219_, v_a_3220_, v_a_3221_, v___x_3222_, v___x_98712__boxed_3233_, v___y_98713__boxed_3234_, v_parts_3225_, v___y_3226_, v___y_3227_, v___y_3228_, v___y_3229_, v___y_3230_, v___y_3231_);
lean_dec(v___y_3231_);
lean_dec_ref(v___y_3230_);
lean_dec(v___y_3229_);
lean_dec_ref(v___y_3228_);
lean_dec(v___y_3227_);
lean_dec_ref(v___y_3226_);
lean_dec(v___x_3219_);
return v_res_3235_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_equivNormal_spec__2___closed__0(void){
_start:
{
lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; 
v___x_3236_ = lean_box(0);
v___x_3237_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__10));
v___x_3238_ = l_Lean_Expr_const___override(v___x_3237_, v___x_3236_);
return v___x_3238_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_equivNormal_spec__2(lean_object* v___x_3239_, size_t v_sz_3240_, size_t v_i_3241_, lean_object* v_bs_3242_){
_start:
{
uint8_t v___x_3243_; 
v___x_3243_ = lean_usize_dec_lt(v_i_3241_, v_sz_3240_);
if (v___x_3243_ == 0)
{
return v_bs_3242_;
}
else
{
lean_object* v_v_3244_; lean_object* v_fst_3245_; lean_object* v_snd_3246_; lean_object* v___x_3247_; lean_object* v_bs_x27_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; size_t v___x_3253_; size_t v___x_3254_; lean_object* v___x_3255_; 
v_v_3244_ = lean_array_uget_borrowed(v_bs_3242_, v_i_3241_);
v_fst_3245_ = lean_ctor_get(v_v_3244_, 0);
lean_inc(v_fst_3245_);
v_snd_3246_ = lean_ctor_get(v_v_3244_, 1);
lean_inc(v_snd_3246_);
v___x_3247_ = lean_unsigned_to_nat(0u);
v_bs_x27_3248_ = lean_array_uset(v_bs_3242_, v_i_3241_, v___x_3247_);
v___x_3249_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_equivNormal_spec__2___closed__0, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_equivNormal_spec__2___closed__0_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_equivNormal_spec__2___closed__0);
v___x_3250_ = l_Lean_instInhabitedExpr;
v___x_3251_ = lean_array_get_borrowed(v___x_3250_, v___x_3239_, v_snd_3246_);
lean_dec(v_snd_3246_);
lean_inc(v___x_3251_);
v___x_3252_ = l_Lean_mkAppB(v___x_3249_, v_fst_3245_, v___x_3251_);
v___x_3253_ = ((size_t)1ULL);
v___x_3254_ = lean_usize_add(v_i_3241_, v___x_3253_);
v___x_3255_ = lean_array_uset(v_bs_x27_3248_, v_i_3241_, v___x_3252_);
v_i_3241_ = v___x_3254_;
v_bs_3242_ = v___x_3255_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_equivNormal_spec__2___boxed(lean_object* v___x_3257_, lean_object* v_sz_3258_, lean_object* v_i_3259_, lean_object* v_bs_3260_){
_start:
{
size_t v_sz_boxed_3261_; size_t v_i_boxed_3262_; lean_object* v_res_3263_; 
v_sz_boxed_3261_ = lean_unbox_usize(v_sz_3258_);
lean_dec(v_sz_3258_);
v_i_boxed_3262_ = lean_unbox_usize(v_i_3259_);
lean_dec(v_i_3259_);
v_res_3263_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_equivNormal_spec__2(v___x_3257_, v_sz_boxed_3261_, v_i_boxed_3262_, v_bs_3260_);
lean_dec_ref(v___x_3257_);
return v_res_3263_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__1___redArg(lean_object* v___x_3264_, lean_object* v___x_3265_, lean_object* v___x_3266_, lean_object* v_a_3267_, lean_object* v___y_3268_, lean_object* v_a_3269_, lean_object* v_range_3270_, lean_object* v_b_3271_, lean_object* v_i_3272_, lean_object* v___y_3273_, lean_object* v___y_3274_, lean_object* v___y_3275_, lean_object* v___y_3276_){
_start:
{
lean_object* v_stop_3278_; lean_object* v_step_3279_; uint8_t v___x_3280_; 
v_stop_3278_ = lean_ctor_get(v_range_3270_, 1);
v_step_3279_ = lean_ctor_get(v_range_3270_, 2);
v___x_3280_ = lean_nat_dec_lt(v_i_3272_, v_stop_3278_);
if (v___x_3280_ == 0)
{
lean_object* v___x_3281_; 
lean_dec(v_i_3272_);
lean_dec(v_a_3269_);
lean_dec(v___y_3268_);
v___x_3281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3281_, 0, v_b_3271_);
return v___x_3281_;
}
else
{
lean_object* v_snd_3282_; lean_object* v_fst_3283_; lean_object* v___x_3285_; uint8_t v_isShared_3286_; uint8_t v_isSharedCheck_3336_; 
v_snd_3282_ = lean_ctor_get(v_b_3271_, 1);
v_fst_3283_ = lean_ctor_get(v_b_3271_, 0);
v_isSharedCheck_3336_ = !lean_is_exclusive(v_b_3271_);
if (v_isSharedCheck_3336_ == 0)
{
v___x_3285_ = v_b_3271_;
v_isShared_3286_ = v_isSharedCheck_3336_;
goto v_resetjp_3284_;
}
else
{
lean_inc(v_snd_3282_);
lean_inc(v_fst_3283_);
lean_dec(v_b_3271_);
v___x_3285_ = lean_box(0);
v_isShared_3286_ = v_isSharedCheck_3336_;
goto v_resetjp_3284_;
}
v_resetjp_3284_:
{
lean_object* v_fst_3287_; lean_object* v_snd_3288_; lean_object* v___x_3290_; uint8_t v_isShared_3291_; uint8_t v_isSharedCheck_3335_; 
v_fst_3287_ = lean_ctor_get(v_snd_3282_, 0);
v_snd_3288_ = lean_ctor_get(v_snd_3282_, 1);
v_isSharedCheck_3335_ = !lean_is_exclusive(v_snd_3282_);
if (v_isSharedCheck_3335_ == 0)
{
v___x_3290_ = v_snd_3282_;
v_isShared_3291_ = v_isSharedCheck_3335_;
goto v_resetjp_3289_;
}
else
{
lean_inc(v_snd_3288_);
lean_inc(v_fst_3287_);
lean_dec(v_snd_3282_);
v___x_3290_ = lean_box(0);
v_isShared_3291_ = v_isSharedCheck_3335_;
goto v_resetjp_3289_;
}
v_resetjp_3289_:
{
lean_object* v___x_3292_; lean_object* v___x_3293_; lean_object* v___x_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; lean_object* v___x_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; 
v___x_3292_ = lean_unsigned_to_nat(2u);
v___x_3293_ = l_Lean_instInhabitedExpr;
v___x_3294_ = lean_nat_sub(v___x_3264_, v___x_3292_);
v___x_3295_ = lean_nat_sub(v___x_3294_, v_i_3272_);
lean_dec(v___x_3294_);
v___x_3296_ = lean_array_get_borrowed(v___x_3293_, v___x_3265_, v___x_3295_);
lean_inc(v___x_3296_);
v___x_3297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3297_, 0, v___x_3296_);
v___x_3298_ = lean_array_get_borrowed(v___x_3293_, v___x_3266_, v___x_3295_);
lean_inc(v___x_3298_);
v___x_3299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3299_, 0, v___x_3298_);
lean_inc(v_fst_3283_);
v___x_3300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3300_, 0, v_fst_3283_);
lean_inc(v_fst_3287_);
v___x_3301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3301_, 0, v_fst_3287_);
v___x_3302_ = lean_array_get_borrowed(v___x_3293_, v_a_3267_, v___x_3295_);
lean_dec(v___x_3295_);
lean_inc(v___x_3302_);
v___x_3303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3303_, 0, v___x_3302_);
v___x_3304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3304_, 0, v_snd_3288_);
v___x_3305_ = lean_unsigned_to_nat(6u);
v___x_3306_ = lean_mk_empty_array_with_capacity(v___x_3305_);
v___x_3307_ = lean_array_push(v___x_3306_, v___x_3297_);
v___x_3308_ = lean_array_push(v___x_3307_, v___x_3299_);
v___x_3309_ = lean_array_push(v___x_3308_, v___x_3300_);
v___x_3310_ = lean_array_push(v___x_3309_, v___x_3301_);
v___x_3311_ = lean_array_push(v___x_3310_, v___x_3303_);
v___x_3312_ = lean_array_push(v___x_3311_, v___x_3304_);
lean_inc(v___y_3268_);
v___x_3313_ = l_Lean_Meta_mkAppOptM(v___y_3268_, v___x_3312_, v___y_3273_, v___y_3274_, v___y_3275_, v___y_3276_);
if (lean_obj_tag(v___x_3313_) == 0)
{
lean_object* v_a_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3320_; 
v_a_3314_ = lean_ctor_get(v___x_3313_, 0);
lean_inc(v_a_3314_);
lean_dec_ref_known(v___x_3313_, 1);
v___x_3315_ = lean_box(0);
lean_inc(v_a_3269_);
v___x_3316_ = l_Lean_Expr_const___override(v_a_3269_, v___x_3315_);
lean_inc(v___x_3296_);
lean_inc_ref(v___x_3316_);
v___x_3317_ = l_Lean_mkAppB(v___x_3316_, v___x_3296_, v_fst_3283_);
lean_inc(v___x_3298_);
v___x_3318_ = l_Lean_mkAppB(v___x_3316_, v___x_3298_, v_fst_3287_);
if (v_isShared_3291_ == 0)
{
lean_ctor_set(v___x_3290_, 1, v_a_3314_);
lean_ctor_set(v___x_3290_, 0, v___x_3318_);
v___x_3320_ = v___x_3290_;
goto v_reusejp_3319_;
}
else
{
lean_object* v_reuseFailAlloc_3326_; 
v_reuseFailAlloc_3326_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3326_, 0, v___x_3318_);
lean_ctor_set(v_reuseFailAlloc_3326_, 1, v_a_3314_);
v___x_3320_ = v_reuseFailAlloc_3326_;
goto v_reusejp_3319_;
}
v_reusejp_3319_:
{
lean_object* v___x_3322_; 
if (v_isShared_3286_ == 0)
{
lean_ctor_set(v___x_3285_, 1, v___x_3320_);
lean_ctor_set(v___x_3285_, 0, v___x_3317_);
v___x_3322_ = v___x_3285_;
goto v_reusejp_3321_;
}
else
{
lean_object* v_reuseFailAlloc_3325_; 
v_reuseFailAlloc_3325_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3325_, 0, v___x_3317_);
lean_ctor_set(v_reuseFailAlloc_3325_, 1, v___x_3320_);
v___x_3322_ = v_reuseFailAlloc_3325_;
goto v_reusejp_3321_;
}
v_reusejp_3321_:
{
lean_object* v___x_3323_; 
v___x_3323_ = lean_nat_add(v_i_3272_, v_step_3279_);
lean_dec(v_i_3272_);
v_b_3271_ = v___x_3322_;
v_i_3272_ = v___x_3323_;
goto _start;
}
}
}
else
{
lean_object* v_a_3327_; lean_object* v___x_3329_; uint8_t v_isShared_3330_; uint8_t v_isSharedCheck_3334_; 
lean_del_object(v___x_3290_);
lean_dec(v_fst_3287_);
lean_del_object(v___x_3285_);
lean_dec(v_fst_3283_);
lean_dec(v_i_3272_);
lean_dec(v_a_3269_);
lean_dec(v___y_3268_);
v_a_3327_ = lean_ctor_get(v___x_3313_, 0);
v_isSharedCheck_3334_ = !lean_is_exclusive(v___x_3313_);
if (v_isSharedCheck_3334_ == 0)
{
v___x_3329_ = v___x_3313_;
v_isShared_3330_ = v_isSharedCheck_3334_;
goto v_resetjp_3328_;
}
else
{
lean_inc(v_a_3327_);
lean_dec(v___x_3313_);
v___x_3329_ = lean_box(0);
v_isShared_3330_ = v_isSharedCheck_3334_;
goto v_resetjp_3328_;
}
v_resetjp_3328_:
{
lean_object* v___x_3332_; 
if (v_isShared_3330_ == 0)
{
v___x_3332_ = v___x_3329_;
goto v_reusejp_3331_;
}
else
{
lean_object* v_reuseFailAlloc_3333_; 
v_reuseFailAlloc_3333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3333_, 0, v_a_3327_);
v___x_3332_ = v_reuseFailAlloc_3333_;
goto v_reusejp_3331_;
}
v_reusejp_3331_:
{
return v___x_3332_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__1___redArg___boxed(lean_object* v___x_3337_, lean_object* v___x_3338_, lean_object* v___x_3339_, lean_object* v_a_3340_, lean_object* v___y_3341_, lean_object* v_a_3342_, lean_object* v_range_3343_, lean_object* v_b_3344_, lean_object* v_i_3345_, lean_object* v___y_3346_, lean_object* v___y_3347_, lean_object* v___y_3348_, lean_object* v___y_3349_, lean_object* v___y_3350_){
_start:
{
lean_object* v_res_3351_; 
v_res_3351_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__1___redArg(v___x_3337_, v___x_3338_, v___x_3339_, v_a_3340_, v___y_3341_, v_a_3342_, v_range_3343_, v_b_3344_, v_i_3345_, v___y_3346_, v___y_3347_, v___y_3348_, v___y_3349_);
lean_dec(v___y_3349_);
lean_dec_ref(v___y_3348_);
lean_dec(v___y_3347_);
lean_dec_ref(v___y_3346_);
lean_dec_ref(v_range_3343_);
lean_dec_ref(v_a_3340_);
lean_dec_ref(v___x_3339_);
lean_dec_ref(v___x_3338_);
lean_dec(v___x_3337_);
return v_res_3351_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_equivNormal_spec__0(lean_object* v___x_3358_, size_t v_sz_3359_, size_t v_i_3360_, lean_object* v_bs_3361_, lean_object* v___y_3362_, lean_object* v___y_3363_, lean_object* v___y_3364_, lean_object* v___y_3365_, lean_object* v___y_3366_, lean_object* v___y_3367_){
_start:
{
uint8_t v___x_3369_; 
v___x_3369_ = lean_usize_dec_lt(v_i_3360_, v_sz_3359_);
if (v___x_3369_ == 0)
{
lean_object* v___x_3370_; 
v___x_3370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3370_, 0, v_bs_3361_);
return v___x_3370_;
}
else
{
lean_object* v_v_3371_; lean_object* v_fst_3372_; lean_object* v_snd_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; 
v_v_3371_ = lean_array_uget_borrowed(v_bs_3361_, v_i_3360_);
v_fst_3372_ = lean_ctor_get(v_v_3371_, 0);
v_snd_3373_ = lean_ctor_get(v_v_3371_, 1);
v___x_3374_ = l_Lean_instInhabitedExpr;
v___x_3375_ = lean_array_get_borrowed(v___x_3374_, v___x_3358_, v_snd_3373_);
lean_inc(v___x_3375_);
lean_inc(v_fst_3372_);
v___x_3376_ = lp_vampireReplay_Vampire_Reconstruct_equivNormal(v_fst_3372_, v___x_3375_, v___y_3362_, v___y_3363_, v___y_3364_, v___y_3365_, v___y_3366_, v___y_3367_);
if (lean_obj_tag(v___x_3376_) == 0)
{
lean_object* v_a_3377_; lean_object* v___x_3378_; lean_object* v_bs_x27_3379_; size_t v___x_3380_; size_t v___x_3381_; lean_object* v___x_3382_; 
v_a_3377_ = lean_ctor_get(v___x_3376_, 0);
lean_inc(v_a_3377_);
lean_dec_ref_known(v___x_3376_, 1);
v___x_3378_ = lean_unsigned_to_nat(0u);
v_bs_x27_3379_ = lean_array_uset(v_bs_3361_, v_i_3360_, v___x_3378_);
v___x_3380_ = ((size_t)1ULL);
v___x_3381_ = lean_usize_add(v_i_3360_, v___x_3380_);
v___x_3382_ = lean_array_uset(v_bs_x27_3379_, v_i_3360_, v_a_3377_);
v_i_3360_ = v___x_3381_;
v_bs_3361_ = v___x_3382_;
goto _start;
}
else
{
lean_object* v_a_3384_; lean_object* v___x_3386_; uint8_t v_isShared_3387_; uint8_t v_isSharedCheck_3391_; 
lean_dec_ref(v_bs_3361_);
v_a_3384_ = lean_ctor_get(v___x_3376_, 0);
v_isSharedCheck_3391_ = !lean_is_exclusive(v___x_3376_);
if (v_isSharedCheck_3391_ == 0)
{
v___x_3386_ = v___x_3376_;
v_isShared_3387_ = v_isSharedCheck_3391_;
goto v_resetjp_3385_;
}
else
{
lean_inc(v_a_3384_);
lean_dec(v___x_3376_);
v___x_3386_ = lean_box(0);
v_isShared_3387_ = v_isSharedCheck_3391_;
goto v_resetjp_3385_;
}
v_resetjp_3385_:
{
lean_object* v___x_3389_; 
if (v_isShared_3387_ == 0)
{
v___x_3389_ = v___x_3386_;
goto v_reusejp_3388_;
}
else
{
lean_object* v_reuseFailAlloc_3390_; 
v_reuseFailAlloc_3390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3390_, 0, v_a_3384_);
v___x_3389_ = v_reuseFailAlloc_3390_;
goto v_reusejp_3388_;
}
v_reusejp_3388_:
{
return v___x_3389_;
}
}
}
}
}
}
static lean_object* _init_lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_3393_; lean_object* v___x_3394_; 
v___x_3393_ = ((lean_object*)(lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___closed__0));
v___x_3394_ = l_Lean_stringToMessageData(v___x_3393_);
return v___x_3394_;
}
}
static lean_object* _init_lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___closed__3(void){
_start:
{
lean_object* v___x_3396_; lean_object* v___x_3397_; 
v___x_3396_ = ((lean_object*)(lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___closed__2));
v___x_3397_ = l_Lean_stringToMessageData(v___x_3396_);
return v___x_3397_;
}
}
static lean_object* _init_lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___closed__5(void){
_start:
{
lean_object* v___x_3399_; lean_object* v___x_3400_; 
v___x_3399_ = ((lean_object*)(lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___closed__4));
v___x_3400_ = l_Lean_stringToMessageData(v___x_3399_);
return v___x_3400_;
}
}
static lean_object* _init_lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___closed__7(void){
_start:
{
lean_object* v___x_3402_; lean_object* v___x_3403_; 
v___x_3402_ = ((lean_object*)(lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___closed__6));
v___x_3403_ = l_Lean_stringToMessageData(v___x_3402_);
return v___x_3403_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg(lean_object* v_a_3407_, lean_object* v_a_3408_, lean_object* v_as_x27_3409_, lean_object* v_b_3410_, lean_object* v___y_3411_, lean_object* v___y_3412_, lean_object* v___y_3413_, lean_object* v___y_3414_, lean_object* v___y_3415_, lean_object* v___y_3416_){
_start:
{
if (lean_obj_tag(v_as_x27_3409_) == 0)
{
lean_object* v___x_3418_; 
lean_dec_ref(v_a_3408_);
lean_dec_ref(v_a_3407_);
v___x_3418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3418_, 0, v_b_3410_);
return v___x_3418_;
}
else
{
lean_object* v_head_3419_; lean_object* v_tail_3420_; lean_object* v___x_3421_; lean_object* v___y_3423_; lean_object* v___y_3424_; lean_object* v___y_3425_; lean_object* v___y_3426_; lean_object* v___y_3427_; lean_object* v___y_3428_; lean_object* v___y_3429_; lean_object* v___y_3430_; lean_object* v___y_3431_; lean_object* v___y_3432_; lean_object* v___y_3433_; uint8_t v___x_3476_; lean_object* v___x_3477_; lean_object* v___y_3479_; lean_object* v___y_3480_; lean_object* v___y_3481_; lean_object* v___y_3482_; size_t v___y_3483_; lean_object* v___y_3484_; lean_object* v___y_3485_; lean_object* v___y_3486_; lean_object* v___y_3487_; lean_object* v___y_3488_; lean_object* v___y_3489_; lean_object* v___y_3490_; lean_object* v___y_3491_; lean_object* v___y_3492_; lean_object* v___y_3493_; size_t v___y_3494_; uint8_t v___y_3495_; lean_object* v___y_3523_; lean_object* v___y_3524_; lean_object* v___y_3525_; lean_object* v___y_3526_; lean_object* v___y_3527_; lean_object* v___y_3528_; lean_object* v___y_3529_; lean_object* v___y_3530_; lean_object* v___y_3531_; lean_object* v___y_3532_; lean_object* v___y_3550_; lean_object* v___y_3551_; lean_object* v___y_3552_; lean_object* v___y_3553_; lean_object* v___y_3554_; lean_object* v___y_3555_; lean_object* v___y_3556_; lean_object* v___y_3557_; lean_object* v___y_3558_; lean_object* v___y_3559_; lean_object* v___y_3560_; lean_object* v___y_3561_; lean_object* v___x_3590_; lean_object* v___y_3592_; lean_object* v___y_3593_; lean_object* v___y_3594_; lean_object* v___y_3595_; lean_object* v___y_3596_; lean_object* v___y_3597_; lean_object* v___y_3598_; lean_object* v___y_3599_; lean_object* v___y_3600_; lean_object* v___y_3601_; lean_object* v___y_3602_; uint8_t v___y_3603_; lean_object* v___y_3666_; lean_object* v___y_3667_; uint8_t v___y_3668_; lean_object* v___y_3669_; lean_object* v___y_3670_; lean_object* v___y_3671_; lean_object* v___y_3672_; lean_object* v___y_3673_; uint8_t v___y_3674_; lean_object* v___y_3705_; lean_object* v___y_3706_; uint8_t v___y_3707_; lean_object* v___y_3708_; lean_object* v___y_3709_; lean_object* v___y_3710_; lean_object* v___y_3711_; lean_object* v___y_3712_; uint8_t v___x_3724_; 
lean_dec_ref(v_b_3410_);
v_head_3419_ = lean_ctor_get(v_as_x27_3409_, 0);
v_tail_3420_ = lean_ctor_get(v_as_x27_3409_, 1);
v___x_3421_ = lean_box(0);
v___x_3476_ = 1;
v___x_3477_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__14));
v___x_3590_ = lean_unsigned_to_nat(2u);
v___x_3724_ = l_Lean_Expr_isAppOfArity(v_a_3407_, v_head_3419_, v___x_3590_);
if (v___x_3724_ == 0)
{
uint8_t v___x_3725_; 
v___x_3725_ = l_Lean_Expr_isAppOfArity(v_a_3408_, v_head_3419_, v___x_3590_);
if (v___x_3725_ == 0)
{
lean_object* v___x_3726_; 
v___x_3726_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_implies_spec__2___closed__0));
v_as_x27_3409_ = v_tail_3420_;
v_b_3410_ = v___x_3726_;
goto _start;
}
else
{
goto v___jp_3715_;
}
}
else
{
goto v___jp_3715_;
}
v___jp_3422_:
{
lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; 
v___x_3434_ = l_Lean_instInhabitedExpr;
v___x_3435_ = lean_array_get_size(v___y_3429_);
v___x_3436_ = lean_unsigned_to_nat(1u);
v___x_3437_ = lean_nat_sub(v___x_3435_, v___x_3436_);
v___x_3438_ = lean_array_get_borrowed(v___x_3434_, v___y_3429_, v___x_3437_);
v___x_3439_ = lean_array_get_size(v___y_3425_);
v___x_3440_ = lean_nat_sub(v___x_3439_, v___x_3436_);
v___x_3441_ = lean_array_get_borrowed(v___x_3434_, v___y_3425_, v___x_3440_);
lean_dec(v___x_3440_);
v___x_3442_ = lean_array_get_size(v___y_3430_);
v___x_3443_ = lean_nat_sub(v___x_3442_, v___x_3436_);
v___x_3444_ = lean_array_get_borrowed(v___x_3434_, v___y_3430_, v___x_3443_);
lean_dec(v___x_3443_);
lean_inc(v___y_3424_);
v___x_3445_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3445_, 0, v___y_3424_);
lean_ctor_set(v___x_3445_, 1, v___x_3437_);
lean_ctor_set(v___x_3445_, 2, v___x_3436_);
lean_inc(v___x_3444_);
lean_inc(v___x_3441_);
v___x_3446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3446_, 0, v___x_3441_);
lean_ctor_set(v___x_3446_, 1, v___x_3444_);
lean_inc(v___x_3438_);
v___x_3447_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3447_, 0, v___x_3438_);
lean_ctor_set(v___x_3447_, 1, v___x_3446_);
lean_inc(v_head_3419_);
lean_inc(v___y_3433_);
v___x_3448_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__1___redArg(v___x_3435_, v___y_3429_, v___y_3425_, v___y_3430_, v___y_3433_, v_head_3419_, v___x_3445_, v___x_3447_, v___y_3424_, v___y_3426_, v___y_3423_, v___y_3427_, v___y_3431_);
lean_dec_ref_known(v___x_3445_, 3);
lean_dec_ref(v___y_3430_);
lean_dec_ref(v___y_3425_);
lean_dec_ref(v___y_3429_);
if (lean_obj_tag(v___x_3448_) == 0)
{
lean_object* v_a_3449_; lean_object* v___x_3451_; uint8_t v_isShared_3452_; uint8_t v_isSharedCheck_3467_; 
v_a_3449_ = lean_ctor_get(v___x_3448_, 0);
v_isSharedCheck_3467_ = !lean_is_exclusive(v___x_3448_);
if (v_isSharedCheck_3467_ == 0)
{
v___x_3451_ = v___x_3448_;
v_isShared_3452_ = v_isSharedCheck_3467_;
goto v_resetjp_3450_;
}
else
{
lean_inc(v_a_3449_);
lean_dec(v___x_3448_);
v___x_3451_ = lean_box(0);
v_isShared_3452_ = v_isSharedCheck_3467_;
goto v_resetjp_3450_;
}
v_resetjp_3450_:
{
lean_object* v_snd_3453_; lean_object* v_snd_3454_; lean_object* v___x_3456_; uint8_t v_isShared_3457_; uint8_t v_isSharedCheck_3465_; 
v_snd_3453_ = lean_ctor_get(v_a_3449_, 1);
lean_inc(v_snd_3453_);
lean_dec(v_a_3449_);
v_snd_3454_ = lean_ctor_get(v_snd_3453_, 1);
v_isSharedCheck_3465_ = !lean_is_exclusive(v_snd_3453_);
if (v_isSharedCheck_3465_ == 0)
{
lean_object* v_unused_3466_; 
v_unused_3466_ = lean_ctor_get(v_snd_3453_, 0);
lean_dec(v_unused_3466_);
v___x_3456_ = v_snd_3453_;
v_isShared_3457_ = v_isSharedCheck_3465_;
goto v_resetjp_3455_;
}
else
{
lean_inc(v_snd_3454_);
lean_dec(v_snd_3453_);
v___x_3456_ = lean_box(0);
v_isShared_3457_ = v_isSharedCheck_3465_;
goto v_resetjp_3455_;
}
v_resetjp_3455_:
{
lean_object* v___x_3458_; lean_object* v___x_3460_; 
v___x_3458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3458_, 0, v_snd_3454_);
if (v_isShared_3457_ == 0)
{
lean_ctor_set(v___x_3456_, 1, v___x_3421_);
lean_ctor_set(v___x_3456_, 0, v___x_3458_);
v___x_3460_ = v___x_3456_;
goto v_reusejp_3459_;
}
else
{
lean_object* v_reuseFailAlloc_3464_; 
v_reuseFailAlloc_3464_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3464_, 0, v___x_3458_);
lean_ctor_set(v_reuseFailAlloc_3464_, 1, v___x_3421_);
v___x_3460_ = v_reuseFailAlloc_3464_;
goto v_reusejp_3459_;
}
v_reusejp_3459_:
{
lean_object* v___x_3462_; 
if (v_isShared_3452_ == 0)
{
lean_ctor_set(v___x_3451_, 0, v___x_3460_);
v___x_3462_ = v___x_3451_;
goto v_reusejp_3461_;
}
else
{
lean_object* v_reuseFailAlloc_3463_; 
v_reuseFailAlloc_3463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3463_, 0, v___x_3460_);
v___x_3462_ = v_reuseFailAlloc_3463_;
goto v_reusejp_3461_;
}
v_reusejp_3461_:
{
return v___x_3462_;
}
}
}
}
}
else
{
lean_object* v_a_3468_; lean_object* v___x_3470_; uint8_t v_isShared_3471_; uint8_t v_isSharedCheck_3475_; 
v_a_3468_ = lean_ctor_get(v___x_3448_, 0);
v_isSharedCheck_3475_ = !lean_is_exclusive(v___x_3448_);
if (v_isSharedCheck_3475_ == 0)
{
v___x_3470_ = v___x_3448_;
v_isShared_3471_ = v_isSharedCheck_3475_;
goto v_resetjp_3469_;
}
else
{
lean_inc(v_a_3468_);
lean_dec(v___x_3448_);
v___x_3470_ = lean_box(0);
v_isShared_3471_ = v_isSharedCheck_3475_;
goto v_resetjp_3469_;
}
v_resetjp_3469_:
{
lean_object* v___x_3473_; 
if (v_isShared_3471_ == 0)
{
v___x_3473_ = v___x_3470_;
goto v_reusejp_3472_;
}
else
{
lean_object* v_reuseFailAlloc_3474_; 
v_reuseFailAlloc_3474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3474_, 0, v_a_3468_);
v___x_3473_ = v_reuseFailAlloc_3474_;
goto v_reusejp_3472_;
}
v_reusejp_3472_:
{
return v___x_3473_;
}
}
}
}
v___jp_3478_:
{
if (v___y_3495_ == 0)
{
lean_object* v___x_3496_; lean_object* v___x_3497_; lean_object* v___f_3498_; lean_object* v___x_3499_; lean_object* v___x_3500_; 
lean_dec_ref(v___y_3492_);
lean_dec(v___y_3486_);
v___x_3496_ = lean_box(v___x_3476_);
v___x_3497_ = lean_box(v___y_3495_);
lean_inc(v_head_3419_);
v___f_3498_ = lean_alloc_closure((void*)(lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__8___boxed), 17, 9);
lean_closure_set(v___f_3498_, 0, v___y_3481_);
lean_closure_set(v___f_3498_, 1, v___y_3480_);
lean_closure_set(v___f_3498_, 2, v_head_3419_);
lean_closure_set(v___f_3498_, 3, v___x_3477_);
lean_closure_set(v___f_3498_, 4, v_a_3408_);
lean_closure_set(v___f_3498_, 5, v_a_3407_);
lean_closure_set(v___f_3498_, 6, v___y_3479_);
lean_closure_set(v___f_3498_, 7, v___x_3496_);
lean_closure_set(v___f_3498_, 8, v___x_3497_);
v___x_3499_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_equivNormal_spec__2(v___y_3491_, v___y_3494_, v___y_3483_, v___y_3484_);
lean_dec_ref(v___y_3491_);
v___x_3500_ = lp_vampireReplay_Vampire_Reconstruct_standingFor(v___x_3499_, v___y_3482_, v___f_3498_, v___y_3490_, v___y_3489_, v___y_3487_, v___y_3485_, v___y_3488_, v___y_3493_);
lean_dec_ref(v___y_3482_);
if (lean_obj_tag(v___x_3500_) == 0)
{
lean_object* v_a_3501_; lean_object* v___x_3503_; uint8_t v_isShared_3504_; uint8_t v_isSharedCheck_3510_; 
v_a_3501_ = lean_ctor_get(v___x_3500_, 0);
v_isSharedCheck_3510_ = !lean_is_exclusive(v___x_3500_);
if (v_isSharedCheck_3510_ == 0)
{
v___x_3503_ = v___x_3500_;
v_isShared_3504_ = v_isSharedCheck_3510_;
goto v_resetjp_3502_;
}
else
{
lean_inc(v_a_3501_);
lean_dec(v___x_3500_);
v___x_3503_ = lean_box(0);
v_isShared_3504_ = v_isSharedCheck_3510_;
goto v_resetjp_3502_;
}
v_resetjp_3502_:
{
lean_object* v___x_3505_; lean_object* v___x_3506_; lean_object* v___x_3508_; 
v___x_3505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3505_, 0, v_a_3501_);
v___x_3506_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3506_, 0, v___x_3505_);
lean_ctor_set(v___x_3506_, 1, v___x_3421_);
if (v_isShared_3504_ == 0)
{
lean_ctor_set(v___x_3503_, 0, v___x_3506_);
v___x_3508_ = v___x_3503_;
goto v_reusejp_3507_;
}
else
{
lean_object* v_reuseFailAlloc_3509_; 
v_reuseFailAlloc_3509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3509_, 0, v___x_3506_);
v___x_3508_ = v_reuseFailAlloc_3509_;
goto v_reusejp_3507_;
}
v_reusejp_3507_:
{
return v___x_3508_;
}
}
}
else
{
lean_object* v_a_3511_; lean_object* v___x_3513_; uint8_t v_isShared_3514_; uint8_t v_isSharedCheck_3518_; 
v_a_3511_ = lean_ctor_get(v___x_3500_, 0);
v_isSharedCheck_3518_ = !lean_is_exclusive(v___x_3500_);
if (v_isSharedCheck_3518_ == 0)
{
v___x_3513_ = v___x_3500_;
v_isShared_3514_ = v_isSharedCheck_3518_;
goto v_resetjp_3512_;
}
else
{
lean_inc(v_a_3511_);
lean_dec(v___x_3500_);
v___x_3513_ = lean_box(0);
v_isShared_3514_ = v_isSharedCheck_3518_;
goto v_resetjp_3512_;
}
v_resetjp_3512_:
{
lean_object* v___x_3516_; 
if (v_isShared_3514_ == 0)
{
v___x_3516_ = v___x_3513_;
goto v_reusejp_3515_;
}
else
{
lean_object* v_reuseFailAlloc_3517_; 
v_reuseFailAlloc_3517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3517_, 0, v_a_3511_);
v___x_3516_ = v_reuseFailAlloc_3517_;
goto v_reusejp_3515_;
}
v_reusejp_3515_:
{
return v___x_3516_;
}
}
}
}
else
{
uint8_t v___x_3519_; 
lean_dec_ref(v___y_3484_);
lean_dec_ref(v___y_3481_);
lean_dec_ref(v___y_3480_);
lean_dec(v___y_3479_);
lean_dec_ref(v_a_3408_);
lean_dec_ref(v_a_3407_);
v___x_3519_ = lean_name_eq(v_head_3419_, v___x_3477_);
if (v___x_3519_ == 0)
{
lean_object* v___x_3520_; 
v___x_3520_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__6));
v___y_3423_ = v___y_3485_;
v___y_3424_ = v___y_3486_;
v___y_3425_ = v___y_3491_;
v___y_3426_ = v___y_3487_;
v___y_3427_ = v___y_3488_;
v___y_3428_ = v___y_3489_;
v___y_3429_ = v___y_3492_;
v___y_3430_ = v___y_3482_;
v___y_3431_ = v___y_3493_;
v___y_3432_ = v___y_3490_;
v___y_3433_ = v___x_3520_;
goto v___jp_3422_;
}
else
{
lean_object* v___x_3521_; 
v___x_3521_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__3));
v___y_3423_ = v___y_3485_;
v___y_3424_ = v___y_3486_;
v___y_3425_ = v___y_3491_;
v___y_3426_ = v___y_3487_;
v___y_3427_ = v___y_3488_;
v___y_3428_ = v___y_3489_;
v___y_3429_ = v___y_3492_;
v___y_3430_ = v___y_3482_;
v___y_3431_ = v___y_3493_;
v___y_3432_ = v___y_3490_;
v___y_3433_ = v___x_3521_;
goto v___jp_3422_;
}
}
}
v___jp_3522_:
{
lean_object* v___x_3533_; lean_object* v___x_3534_; size_t v_sz_3535_; size_t v___x_3536_; lean_object* v___x_3537_; 
v___x_3533_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v___y_3526_);
v___x_3534_ = l_Array_zipIdx___redArg(v___y_3526_, v___x_3533_);
v_sz_3535_ = lean_array_size(v___x_3534_);
v___x_3536_ = ((size_t)0ULL);
lean_inc_ref(v___x_3534_);
v___x_3537_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_equivNormal_spec__0(v___y_3525_, v_sz_3535_, v___x_3536_, v___x_3534_, v___y_3527_, v___y_3528_, v___y_3529_, v___y_3530_, v___y_3531_, v___y_3532_);
if (lean_obj_tag(v___x_3537_) == 0)
{
lean_object* v_a_3538_; uint8_t v___x_3539_; 
v_a_3538_ = lean_ctor_get(v___x_3537_, 0);
lean_inc(v_a_3538_);
lean_dec_ref_known(v___x_3537_, 1);
lean_inc_ref(v_a_3407_);
v___x_3539_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_rightNested(v_head_3419_, v_a_3407_, v___y_3526_);
if (v___x_3539_ == 0)
{
v___y_3479_ = v___x_3533_;
v___y_3480_ = v___y_3523_;
v___y_3481_ = v___y_3524_;
v___y_3482_ = v_a_3538_;
v___y_3483_ = v___x_3536_;
v___y_3484_ = v___x_3534_;
v___y_3485_ = v___y_3530_;
v___y_3486_ = v___x_3533_;
v___y_3487_ = v___y_3529_;
v___y_3488_ = v___y_3531_;
v___y_3489_ = v___y_3528_;
v___y_3490_ = v___y_3527_;
v___y_3491_ = v___y_3525_;
v___y_3492_ = v___y_3526_;
v___y_3493_ = v___y_3532_;
v___y_3494_ = v_sz_3535_;
v___y_3495_ = v___x_3539_;
goto v___jp_3478_;
}
else
{
uint8_t v___x_3540_; 
lean_inc_ref(v_a_3408_);
v___x_3540_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_rightNested(v_head_3419_, v_a_3408_, v___y_3525_);
v___y_3479_ = v___x_3533_;
v___y_3480_ = v___y_3523_;
v___y_3481_ = v___y_3524_;
v___y_3482_ = v_a_3538_;
v___y_3483_ = v___x_3536_;
v___y_3484_ = v___x_3534_;
v___y_3485_ = v___y_3530_;
v___y_3486_ = v___x_3533_;
v___y_3487_ = v___y_3529_;
v___y_3488_ = v___y_3531_;
v___y_3489_ = v___y_3528_;
v___y_3490_ = v___y_3527_;
v___y_3491_ = v___y_3525_;
v___y_3492_ = v___y_3526_;
v___y_3493_ = v___y_3532_;
v___y_3494_ = v_sz_3535_;
v___y_3495_ = v___x_3540_;
goto v___jp_3478_;
}
}
else
{
lean_object* v_a_3541_; lean_object* v___x_3543_; uint8_t v_isShared_3544_; uint8_t v_isSharedCheck_3548_; 
lean_dec_ref(v___x_3534_);
lean_dec_ref(v___y_3526_);
lean_dec_ref(v___y_3525_);
lean_dec_ref(v___y_3524_);
lean_dec_ref(v___y_3523_);
lean_dec_ref(v_a_3408_);
lean_dec_ref(v_a_3407_);
v_a_3541_ = lean_ctor_get(v___x_3537_, 0);
v_isSharedCheck_3548_ = !lean_is_exclusive(v___x_3537_);
if (v_isSharedCheck_3548_ == 0)
{
v___x_3543_ = v___x_3537_;
v_isShared_3544_ = v_isSharedCheck_3548_;
goto v_resetjp_3542_;
}
else
{
lean_inc(v_a_3541_);
lean_dec(v___x_3537_);
v___x_3543_ = lean_box(0);
v_isShared_3544_ = v_isSharedCheck_3548_;
goto v_resetjp_3542_;
}
v_resetjp_3542_:
{
lean_object* v___x_3546_; 
if (v_isShared_3544_ == 0)
{
v___x_3546_ = v___x_3543_;
goto v_reusejp_3545_;
}
else
{
lean_object* v_reuseFailAlloc_3547_; 
v_reuseFailAlloc_3547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3547_, 0, v_a_3541_);
v___x_3546_ = v_reuseFailAlloc_3547_;
goto v_reusejp_3545_;
}
v_reusejp_3545_:
{
return v___x_3546_;
}
}
}
}
v___jp_3549_:
{
lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; lean_object* v___x_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v___x_3581_; lean_object* v_a_3582_; lean_object* v___x_3584_; uint8_t v_isShared_3585_; uint8_t v_isSharedCheck_3589_; 
lean_dec_ref(v___y_3554_);
lean_dec_ref(v___y_3552_);
lean_dec_ref(v___y_3551_);
lean_dec_ref(v___y_3550_);
v___x_3562_ = lean_obj_once(&lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___closed__1, &lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___closed__1_once, _init_lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___closed__1);
v___x_3563_ = l_Nat_reprFast(v___y_3553_);
v___x_3564_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3564_, 0, v___x_3563_);
v___x_3565_ = l_Lean_MessageData_ofFormat(v___x_3564_);
v___x_3566_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3566_, 0, v___x_3562_);
lean_ctor_set(v___x_3566_, 1, v___x_3565_);
v___x_3567_ = lean_obj_once(&lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___closed__3, &lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___closed__3_once, _init_lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___closed__3);
v___x_3568_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3568_, 0, v___x_3566_);
lean_ctor_set(v___x_3568_, 1, v___x_3567_);
v___x_3569_ = l_Nat_reprFast(v___y_3555_);
v___x_3570_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3570_, 0, v___x_3569_);
v___x_3571_ = l_Lean_MessageData_ofFormat(v___x_3570_);
v___x_3572_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3572_, 0, v___x_3568_);
lean_ctor_set(v___x_3572_, 1, v___x_3571_);
v___x_3573_ = lean_obj_once(&lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___closed__5, &lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___closed__5_once, _init_lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___closed__5);
v___x_3574_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3574_, 0, v___x_3572_);
lean_ctor_set(v___x_3574_, 1, v___x_3573_);
v___x_3575_ = l_Lean_indentExpr(v_a_3407_);
v___x_3576_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3576_, 0, v___x_3574_);
lean_ctor_set(v___x_3576_, 1, v___x_3575_);
v___x_3577_ = lean_obj_once(&lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___closed__7, &lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___closed__7_once, _init_lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___closed__7);
v___x_3578_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3578_, 0, v___x_3576_);
lean_ctor_set(v___x_3578_, 1, v___x_3577_);
v___x_3579_ = l_Lean_indentExpr(v_a_3408_);
v___x_3580_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3580_, 0, v___x_3578_);
lean_ctor_set(v___x_3580_, 1, v___x_3579_);
v___x_3581_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_3580_, v___y_3558_, v___y_3559_, v___y_3560_, v___y_3561_);
v_a_3582_ = lean_ctor_get(v___x_3581_, 0);
v_isSharedCheck_3589_ = !lean_is_exclusive(v___x_3581_);
if (v_isSharedCheck_3589_ == 0)
{
v___x_3584_ = v___x_3581_;
v_isShared_3585_ = v_isSharedCheck_3589_;
goto v_resetjp_3583_;
}
else
{
lean_inc(v_a_3582_);
lean_dec(v___x_3581_);
v___x_3584_ = lean_box(0);
v_isShared_3585_ = v_isSharedCheck_3589_;
goto v_resetjp_3583_;
}
v_resetjp_3583_:
{
lean_object* v___x_3587_; 
if (v_isShared_3585_ == 0)
{
v___x_3587_ = v___x_3584_;
goto v_reusejp_3586_;
}
else
{
lean_object* v_reuseFailAlloc_3588_; 
v_reuseFailAlloc_3588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3588_, 0, v_a_3582_);
v___x_3587_ = v_reuseFailAlloc_3588_;
goto v_reusejp_3586_;
}
v_reusejp_3586_:
{
return v___x_3587_;
}
}
}
v___jp_3591_:
{
if (v___y_3603_ == 0)
{
lean_dec_ref(v___y_3601_);
lean_dec_ref(v___y_3599_);
lean_dec_ref(v___y_3595_);
lean_dec_ref(v___y_3594_);
v___y_3550_ = v___y_3592_;
v___y_3551_ = v___y_3593_;
v___y_3552_ = v___y_3597_;
v___y_3553_ = v___y_3598_;
v___y_3554_ = v___y_3600_;
v___y_3555_ = v___y_3602_;
v___y_3556_ = v___y_3411_;
v___y_3557_ = v___y_3412_;
v___y_3558_ = v___y_3413_;
v___y_3559_ = v___y_3414_;
v___y_3560_ = v___y_3415_;
v___y_3561_ = v___y_3416_;
goto v___jp_3549_;
}
else
{
lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; 
lean_dec(v___y_3602_);
lean_dec_ref(v___y_3600_);
lean_dec(v___y_3598_);
lean_dec_ref(v___y_3597_);
lean_dec_ref(v___y_3593_);
lean_dec_ref(v___y_3592_);
lean_dec_ref(v_a_3408_);
lean_dec_ref(v_a_3407_);
lean_inc_n(v___y_3596_, 2);
lean_inc_n(v_head_3419_, 2);
v___x_3604_ = lp_vampireReplay_Vampire_Reconstruct_junction(v_head_3419_, v___y_3596_, v___y_3595_);
v___x_3605_ = lp_vampireReplay_Vampire_Reconstruct_junction(v_head_3419_, v___y_3596_, v___y_3601_);
v___x_3606_ = lp_vampireReplay_Vampire_Reconstruct_equivNormal(v___x_3604_, v___x_3605_, v___y_3411_, v___y_3412_, v___y_3413_, v___y_3414_, v___y_3415_, v___y_3416_);
if (lean_obj_tag(v___x_3606_) == 0)
{
lean_object* v_a_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; 
v_a_3607_ = lean_ctor_get(v___x_3606_, 0);
lean_inc(v_a_3607_);
lean_dec_ref_known(v___x_3606_, 1);
v___x_3608_ = ((lean_object*)(lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__4___redArg___closed__0));
v___x_3609_ = lean_unsigned_to_nat(1u);
v___x_3610_ = lean_mk_empty_array_with_capacity(v___x_3609_);
v___x_3611_ = lean_array_push(v___x_3610_, v___y_3599_);
v___x_3612_ = l_Lean_Meta_mkAppM(v___x_3608_, v___x_3611_, v___y_3413_, v___y_3414_, v___y_3415_, v___y_3416_);
if (lean_obj_tag(v___x_3612_) == 0)
{
lean_object* v_a_3613_; lean_object* v___x_3614_; lean_object* v___x_3615_; lean_object* v___x_3616_; lean_object* v___x_3617_; lean_object* v___x_3618_; 
v_a_3613_ = lean_ctor_get(v___x_3612_, 0);
lean_inc(v_a_3613_);
lean_dec_ref_known(v___x_3612_, 1);
v___x_3614_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__1));
v___x_3615_ = lean_mk_empty_array_with_capacity(v___x_3590_);
lean_inc_ref(v___x_3615_);
v___x_3616_ = lean_array_push(v___x_3615_, v_a_3607_);
v___x_3617_ = lean_array_push(v___x_3616_, v_a_3613_);
v___x_3618_ = l_Lean_Meta_mkAppM(v___x_3614_, v___x_3617_, v___y_3413_, v___y_3414_, v___y_3415_, v___y_3416_);
if (lean_obj_tag(v___x_3618_) == 0)
{
lean_object* v_a_3619_; lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; 
v_a_3619_ = lean_ctor_get(v___x_3618_, 0);
lean_inc(v_a_3619_);
lean_dec_ref_known(v___x_3618_, 1);
v___x_3620_ = lean_array_push(v___x_3615_, v___y_3594_);
v___x_3621_ = lean_array_push(v___x_3620_, v_a_3619_);
v___x_3622_ = l_Lean_Meta_mkAppM(v___x_3614_, v___x_3621_, v___y_3413_, v___y_3414_, v___y_3415_, v___y_3416_);
if (lean_obj_tag(v___x_3622_) == 0)
{
lean_object* v_a_3623_; lean_object* v___x_3625_; uint8_t v_isShared_3626_; uint8_t v_isSharedCheck_3632_; 
v_a_3623_ = lean_ctor_get(v___x_3622_, 0);
v_isSharedCheck_3632_ = !lean_is_exclusive(v___x_3622_);
if (v_isSharedCheck_3632_ == 0)
{
v___x_3625_ = v___x_3622_;
v_isShared_3626_ = v_isSharedCheck_3632_;
goto v_resetjp_3624_;
}
else
{
lean_inc(v_a_3623_);
lean_dec(v___x_3622_);
v___x_3625_ = lean_box(0);
v_isShared_3626_ = v_isSharedCheck_3632_;
goto v_resetjp_3624_;
}
v_resetjp_3624_:
{
lean_object* v___x_3627_; lean_object* v___x_3628_; lean_object* v___x_3630_; 
v___x_3627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3627_, 0, v_a_3623_);
v___x_3628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3628_, 0, v___x_3627_);
lean_ctor_set(v___x_3628_, 1, v___x_3421_);
if (v_isShared_3626_ == 0)
{
lean_ctor_set(v___x_3625_, 0, v___x_3628_);
v___x_3630_ = v___x_3625_;
goto v_reusejp_3629_;
}
else
{
lean_object* v_reuseFailAlloc_3631_; 
v_reuseFailAlloc_3631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3631_, 0, v___x_3628_);
v___x_3630_ = v_reuseFailAlloc_3631_;
goto v_reusejp_3629_;
}
v_reusejp_3629_:
{
return v___x_3630_;
}
}
}
else
{
lean_object* v_a_3633_; lean_object* v___x_3635_; uint8_t v_isShared_3636_; uint8_t v_isSharedCheck_3640_; 
v_a_3633_ = lean_ctor_get(v___x_3622_, 0);
v_isSharedCheck_3640_ = !lean_is_exclusive(v___x_3622_);
if (v_isSharedCheck_3640_ == 0)
{
v___x_3635_ = v___x_3622_;
v_isShared_3636_ = v_isSharedCheck_3640_;
goto v_resetjp_3634_;
}
else
{
lean_inc(v_a_3633_);
lean_dec(v___x_3622_);
v___x_3635_ = lean_box(0);
v_isShared_3636_ = v_isSharedCheck_3640_;
goto v_resetjp_3634_;
}
v_resetjp_3634_:
{
lean_object* v___x_3638_; 
if (v_isShared_3636_ == 0)
{
v___x_3638_ = v___x_3635_;
goto v_reusejp_3637_;
}
else
{
lean_object* v_reuseFailAlloc_3639_; 
v_reuseFailAlloc_3639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3639_, 0, v_a_3633_);
v___x_3638_ = v_reuseFailAlloc_3639_;
goto v_reusejp_3637_;
}
v_reusejp_3637_:
{
return v___x_3638_;
}
}
}
}
else
{
lean_object* v_a_3641_; lean_object* v___x_3643_; uint8_t v_isShared_3644_; uint8_t v_isSharedCheck_3648_; 
lean_dec_ref(v___x_3615_);
lean_dec_ref(v___y_3594_);
v_a_3641_ = lean_ctor_get(v___x_3618_, 0);
v_isSharedCheck_3648_ = !lean_is_exclusive(v___x_3618_);
if (v_isSharedCheck_3648_ == 0)
{
v___x_3643_ = v___x_3618_;
v_isShared_3644_ = v_isSharedCheck_3648_;
goto v_resetjp_3642_;
}
else
{
lean_inc(v_a_3641_);
lean_dec(v___x_3618_);
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
else
{
lean_object* v_a_3649_; lean_object* v___x_3651_; uint8_t v_isShared_3652_; uint8_t v_isSharedCheck_3656_; 
lean_dec(v_a_3607_);
lean_dec_ref(v___y_3594_);
v_a_3649_ = lean_ctor_get(v___x_3612_, 0);
v_isSharedCheck_3656_ = !lean_is_exclusive(v___x_3612_);
if (v_isSharedCheck_3656_ == 0)
{
v___x_3651_ = v___x_3612_;
v_isShared_3652_ = v_isSharedCheck_3656_;
goto v_resetjp_3650_;
}
else
{
lean_inc(v_a_3649_);
lean_dec(v___x_3612_);
v___x_3651_ = lean_box(0);
v_isShared_3652_ = v_isSharedCheck_3656_;
goto v_resetjp_3650_;
}
v_resetjp_3650_:
{
lean_object* v___x_3654_; 
if (v_isShared_3652_ == 0)
{
v___x_3654_ = v___x_3651_;
goto v_reusejp_3653_;
}
else
{
lean_object* v_reuseFailAlloc_3655_; 
v_reuseFailAlloc_3655_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3655_, 0, v_a_3649_);
v___x_3654_ = v_reuseFailAlloc_3655_;
goto v_reusejp_3653_;
}
v_reusejp_3653_:
{
return v___x_3654_;
}
}
}
}
else
{
lean_object* v_a_3657_; lean_object* v___x_3659_; uint8_t v_isShared_3660_; uint8_t v_isSharedCheck_3664_; 
lean_dec_ref(v___y_3599_);
lean_dec_ref(v___y_3594_);
v_a_3657_ = lean_ctor_get(v___x_3606_, 0);
v_isSharedCheck_3664_ = !lean_is_exclusive(v___x_3606_);
if (v_isSharedCheck_3664_ == 0)
{
v___x_3659_ = v___x_3606_;
v_isShared_3660_ = v_isSharedCheck_3664_;
goto v_resetjp_3658_;
}
else
{
lean_inc(v_a_3657_);
lean_dec(v___x_3606_);
v___x_3659_ = lean_box(0);
v_isShared_3660_ = v_isSharedCheck_3664_;
goto v_resetjp_3658_;
}
v_resetjp_3658_:
{
lean_object* v___x_3662_; 
if (v_isShared_3660_ == 0)
{
v___x_3662_ = v___x_3659_;
goto v_reusejp_3661_;
}
else
{
lean_object* v_reuseFailAlloc_3663_; 
v_reuseFailAlloc_3663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3663_, 0, v_a_3657_);
v___x_3662_ = v_reuseFailAlloc_3663_;
goto v_reusejp_3661_;
}
v_reusejp_3661_:
{
return v___x_3662_;
}
}
}
}
}
v___jp_3665_:
{
if (v___y_3674_ == 0)
{
v___y_3550_ = v___y_3666_;
v___y_3551_ = v___y_3667_;
v___y_3552_ = v___y_3670_;
v___y_3553_ = v___y_3671_;
v___y_3554_ = v___y_3672_;
v___y_3555_ = v___y_3673_;
v___y_3556_ = v___y_3411_;
v___y_3557_ = v___y_3412_;
v___y_3558_ = v___y_3413_;
v___y_3559_ = v___y_3414_;
v___y_3560_ = v___y_3415_;
v___y_3561_ = v___y_3416_;
goto v___jp_3549_;
}
else
{
lean_object* v___x_3675_; 
lean_inc(v___y_3669_);
lean_inc(v_head_3419_);
v___x_3675_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg(v_head_3419_, v___y_3669_, v___y_3672_, v___y_3413_, v___y_3414_, v___y_3415_, v___y_3416_);
if (lean_obj_tag(v___x_3675_) == 0)
{
lean_object* v_a_3676_; lean_object* v_fst_3677_; lean_object* v_snd_3678_; lean_object* v___x_3679_; 
v_a_3676_ = lean_ctor_get(v___x_3675_, 0);
lean_inc(v_a_3676_);
lean_dec_ref_known(v___x_3675_, 1);
v_fst_3677_ = lean_ctor_get(v_a_3676_, 0);
lean_inc(v_fst_3677_);
v_snd_3678_ = lean_ctor_get(v_a_3676_, 1);
lean_inc(v_snd_3678_);
lean_dec(v_a_3676_);
lean_inc(v___y_3669_);
lean_inc(v_head_3419_);
v___x_3679_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg(v_head_3419_, v___y_3669_, v___y_3670_, v___y_3413_, v___y_3414_, v___y_3415_, v___y_3416_);
if (lean_obj_tag(v___x_3679_) == 0)
{
lean_object* v_a_3680_; lean_object* v_fst_3681_; lean_object* v_snd_3682_; lean_object* v___x_3683_; lean_object* v___x_3684_; uint8_t v___x_3685_; 
v_a_3680_ = lean_ctor_get(v___x_3679_, 0);
lean_inc(v_a_3680_);
lean_dec_ref_known(v___x_3679_, 1);
v_fst_3681_ = lean_ctor_get(v_a_3680_, 0);
lean_inc(v_fst_3681_);
v_snd_3682_ = lean_ctor_get(v_a_3680_, 1);
lean_inc(v_snd_3682_);
lean_dec(v_a_3680_);
v___x_3683_ = lean_array_get_size(v_fst_3677_);
v___x_3684_ = lean_array_get_size(v_fst_3681_);
v___x_3685_ = lean_nat_dec_eq(v___x_3683_, v___x_3684_);
if (v___x_3685_ == 0)
{
v___y_3592_ = v___y_3666_;
v___y_3593_ = v___y_3667_;
v___y_3594_ = v_snd_3678_;
v___y_3595_ = v_fst_3677_;
v___y_3596_ = v___y_3669_;
v___y_3597_ = v___y_3670_;
v___y_3598_ = v___y_3671_;
v___y_3599_ = v_snd_3682_;
v___y_3600_ = v___y_3672_;
v___y_3601_ = v_fst_3681_;
v___y_3602_ = v___y_3673_;
v___y_3603_ = v___x_3685_;
goto v___jp_3591_;
}
else
{
lean_object* v___x_3686_; uint8_t v___x_3687_; 
v___x_3686_ = lean_unsigned_to_nat(0u);
v___x_3687_ = lean_nat_dec_eq(v___x_3683_, v___x_3686_);
if (v___x_3687_ == 0)
{
v___y_3592_ = v___y_3666_;
v___y_3593_ = v___y_3667_;
v___y_3594_ = v_snd_3678_;
v___y_3595_ = v_fst_3677_;
v___y_3596_ = v___y_3669_;
v___y_3597_ = v___y_3670_;
v___y_3598_ = v___y_3671_;
v___y_3599_ = v_snd_3682_;
v___y_3600_ = v___y_3672_;
v___y_3601_ = v_fst_3681_;
v___y_3602_ = v___y_3673_;
v___y_3603_ = v___x_3685_;
goto v___jp_3591_;
}
else
{
v___y_3592_ = v___y_3666_;
v___y_3593_ = v___y_3667_;
v___y_3594_ = v_snd_3678_;
v___y_3595_ = v_fst_3677_;
v___y_3596_ = v___y_3669_;
v___y_3597_ = v___y_3670_;
v___y_3598_ = v___y_3671_;
v___y_3599_ = v_snd_3682_;
v___y_3600_ = v___y_3672_;
v___y_3601_ = v_fst_3681_;
v___y_3602_ = v___y_3673_;
v___y_3603_ = v___y_3668_;
goto v___jp_3591_;
}
}
}
else
{
lean_object* v_a_3688_; lean_object* v___x_3690_; uint8_t v_isShared_3691_; uint8_t v_isSharedCheck_3695_; 
lean_dec(v_snd_3678_);
lean_dec(v_fst_3677_);
lean_dec(v___y_3673_);
lean_dec_ref(v___y_3672_);
lean_dec(v___y_3671_);
lean_dec_ref(v___y_3670_);
lean_dec_ref(v___y_3667_);
lean_dec_ref(v___y_3666_);
lean_dec_ref(v_a_3408_);
lean_dec_ref(v_a_3407_);
v_a_3688_ = lean_ctor_get(v___x_3679_, 0);
v_isSharedCheck_3695_ = !lean_is_exclusive(v___x_3679_);
if (v_isSharedCheck_3695_ == 0)
{
v___x_3690_ = v___x_3679_;
v_isShared_3691_ = v_isSharedCheck_3695_;
goto v_resetjp_3689_;
}
else
{
lean_inc(v_a_3688_);
lean_dec(v___x_3679_);
v___x_3690_ = lean_box(0);
v_isShared_3691_ = v_isSharedCheck_3695_;
goto v_resetjp_3689_;
}
v_resetjp_3689_:
{
lean_object* v___x_3693_; 
if (v_isShared_3691_ == 0)
{
v___x_3693_ = v___x_3690_;
goto v_reusejp_3692_;
}
else
{
lean_object* v_reuseFailAlloc_3694_; 
v_reuseFailAlloc_3694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3694_, 0, v_a_3688_);
v___x_3693_ = v_reuseFailAlloc_3694_;
goto v_reusejp_3692_;
}
v_reusejp_3692_:
{
return v___x_3693_;
}
}
}
}
else
{
lean_object* v_a_3696_; lean_object* v___x_3698_; uint8_t v_isShared_3699_; uint8_t v_isSharedCheck_3703_; 
lean_dec(v___y_3673_);
lean_dec_ref(v___y_3672_);
lean_dec(v___y_3671_);
lean_dec_ref(v___y_3670_);
lean_dec_ref(v___y_3667_);
lean_dec_ref(v___y_3666_);
lean_dec_ref(v_a_3408_);
lean_dec_ref(v_a_3407_);
v_a_3696_ = lean_ctor_get(v___x_3675_, 0);
v_isSharedCheck_3703_ = !lean_is_exclusive(v___x_3675_);
if (v_isSharedCheck_3703_ == 0)
{
v___x_3698_ = v___x_3675_;
v_isShared_3699_ = v_isSharedCheck_3703_;
goto v_resetjp_3697_;
}
else
{
lean_inc(v_a_3696_);
lean_dec(v___x_3675_);
v___x_3698_ = lean_box(0);
v_isShared_3699_ = v_isSharedCheck_3703_;
goto v_resetjp_3697_;
}
v_resetjp_3697_:
{
lean_object* v___x_3701_; 
if (v_isShared_3699_ == 0)
{
v___x_3701_ = v___x_3698_;
goto v_reusejp_3700_;
}
else
{
lean_object* v_reuseFailAlloc_3702_; 
v_reuseFailAlloc_3702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3702_, 0, v_a_3696_);
v___x_3701_ = v_reuseFailAlloc_3702_;
goto v_reusejp_3700_;
}
v_reusejp_3700_:
{
return v___x_3701_;
}
}
}
}
}
v___jp_3704_:
{
uint8_t v___x_3713_; 
lean_inc_ref(v_a_3407_);
v___x_3713_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_rightNested(v_head_3419_, v_a_3407_, v___y_3710_);
if (v___x_3713_ == 0)
{
v___y_3666_ = v___y_3705_;
v___y_3667_ = v___y_3706_;
v___y_3668_ = v___y_3707_;
v___y_3669_ = v___y_3712_;
v___y_3670_ = v___y_3708_;
v___y_3671_ = v___y_3709_;
v___y_3672_ = v___y_3710_;
v___y_3673_ = v___y_3711_;
v___y_3674_ = v___x_3713_;
goto v___jp_3665_;
}
else
{
uint8_t v___x_3714_; 
lean_inc_ref(v_a_3408_);
v___x_3714_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_rightNested(v_head_3419_, v_a_3408_, v___y_3708_);
v___y_3666_ = v___y_3705_;
v___y_3667_ = v___y_3706_;
v___y_3668_ = v___y_3707_;
v___y_3669_ = v___y_3712_;
v___y_3670_ = v___y_3708_;
v___y_3671_ = v___y_3709_;
v___y_3672_ = v___y_3710_;
v___y_3673_ = v___y_3711_;
v___y_3674_ = v___x_3714_;
goto v___jp_3665_;
}
}
v___jp_3715_:
{
lean_object* v___x_3716_; lean_object* v___x_3717_; lean_object* v___x_3718_; lean_object* v___x_3719_; uint8_t v___x_3720_; 
lean_inc_ref(v_a_3407_);
v___x_3716_ = lp_vampireReplay_Vampire_Reconstruct_junctionParts(v_head_3419_, v_a_3407_);
lean_inc_ref(v_a_3408_);
v___x_3717_ = lp_vampireReplay_Vampire_Reconstruct_junctionParts(v_head_3419_, v_a_3408_);
v___x_3718_ = lean_array_get_size(v___x_3716_);
v___x_3719_ = lean_array_get_size(v___x_3717_);
v___x_3720_ = lean_nat_dec_eq(v___x_3718_, v___x_3719_);
if (v___x_3720_ == 0)
{
uint8_t v___x_3721_; 
v___x_3721_ = lean_name_eq(v_head_3419_, v___x_3477_);
if (v___x_3721_ == 0)
{
lean_object* v___x_3722_; 
v___x_3722_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___lam__2___closed__1));
lean_inc_ref(v___x_3716_);
lean_inc_ref(v___x_3717_);
v___y_3705_ = v___x_3717_;
v___y_3706_ = v___x_3716_;
v___y_3707_ = v___x_3720_;
v___y_3708_ = v___x_3717_;
v___y_3709_ = v___x_3718_;
v___y_3710_ = v___x_3716_;
v___y_3711_ = v___x_3719_;
v___y_3712_ = v___x_3722_;
goto v___jp_3704_;
}
else
{
lean_object* v___x_3723_; 
v___x_3723_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___closed__1));
lean_inc_ref(v___x_3716_);
lean_inc_ref(v___x_3717_);
v___y_3705_ = v___x_3717_;
v___y_3706_ = v___x_3716_;
v___y_3707_ = v___x_3720_;
v___y_3708_ = v___x_3717_;
v___y_3709_ = v___x_3718_;
v___y_3710_ = v___x_3716_;
v___y_3711_ = v___x_3719_;
v___y_3712_ = v___x_3723_;
goto v___jp_3704_;
}
}
else
{
lean_inc_ref(v___x_3716_);
lean_inc_ref(v___x_3717_);
v___y_3523_ = v___x_3717_;
v___y_3524_ = v___x_3716_;
v___y_3525_ = v___x_3717_;
v___y_3526_ = v___x_3716_;
v___y_3527_ = v___y_3411_;
v___y_3528_ = v___y_3412_;
v___y_3529_ = v___y_3413_;
v___y_3530_ = v___y_3414_;
v___y_3531_ = v___y_3415_;
v___y_3532_ = v___y_3416_;
goto v___jp_3522_;
}
}
}
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__3(void){
_start:
{
lean_object* v___x_3729_; lean_object* v___x_3730_; 
v___x_3729_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__2));
v___x_3730_ = l_Lean_stringToMessageData(v___x_3729_);
return v___x_3730_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__5(void){
_start:
{
lean_object* v___x_3732_; lean_object* v___x_3733_; 
v___x_3732_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__4));
v___x_3733_ = l_Lean_stringToMessageData(v___x_3732_);
return v___x_3733_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_equivNormal___lam__1(lean_object* v_body_3734_, lean_object* v_body_3735_, uint8_t v___y_3736_, uint8_t v___x_3737_, lean_object* v_x_3738_, lean_object* v___y_3739_, lean_object* v___y_3740_, lean_object* v___y_3741_, lean_object* v___y_3742_, lean_object* v___y_3743_, lean_object* v___y_3744_){
_start:
{
lean_object* v___x_3746_; lean_object* v___x_3747_; lean_object* v___x_3748_; 
v___x_3746_ = lean_expr_instantiate1(v_body_3734_, v_x_3738_);
v___x_3747_ = lean_expr_instantiate1(v_body_3735_, v_x_3738_);
v___x_3748_ = lp_vampireReplay_Vampire_Reconstruct_equivNormal(v___x_3746_, v___x_3747_, v___y_3739_, v___y_3740_, v___y_3741_, v___y_3742_, v___y_3743_, v___y_3744_);
if (lean_obj_tag(v___x_3748_) == 0)
{
lean_object* v_a_3749_; lean_object* v___x_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; uint8_t v___x_3753_; lean_object* v___x_3754_; 
v_a_3749_ = lean_ctor_get(v___x_3748_, 0);
lean_inc(v_a_3749_);
lean_dec_ref_known(v___x_3748_, 1);
v___x_3750_ = lean_unsigned_to_nat(1u);
v___x_3751_ = lean_mk_empty_array_with_capacity(v___x_3750_);
lean_inc_ref(v___x_3751_);
v___x_3752_ = lean_array_push(v___x_3751_, v_x_3738_);
v___x_3753_ = 1;
v___x_3754_ = l_Lean_Meta_mkLambdaFVars(v___x_3752_, v_a_3749_, v___y_3736_, v___x_3737_, v___y_3736_, v___x_3737_, v___x_3753_, v___y_3741_, v___y_3742_, v___y_3743_, v___y_3744_);
lean_dec_ref(v___x_3752_);
if (lean_obj_tag(v___x_3754_) == 0)
{
lean_object* v_a_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; 
v_a_3755_ = lean_ctor_get(v___x_3754_, 0);
lean_inc(v_a_3755_);
lean_dec_ref_known(v___x_3754_, 1);
v___x_3756_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_toNNF___lam__0___closed__1));
v___x_3757_ = lean_array_push(v___x_3751_, v_a_3755_);
v___x_3758_ = l_Lean_Meta_mkAppM(v___x_3756_, v___x_3757_, v___y_3741_, v___y_3742_, v___y_3743_, v___y_3744_);
return v___x_3758_;
}
else
{
lean_dec_ref(v___x_3751_);
return v___x_3754_;
}
}
else
{
lean_dec_ref(v_x_3738_);
return v___x_3748_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_equivNormal___lam__1___boxed(lean_object* v_body_3759_, lean_object* v_body_3760_, lean_object* v___y_3761_, lean_object* v___x_3762_, lean_object* v_x_3763_, lean_object* v___y_3764_, lean_object* v___y_3765_, lean_object* v___y_3766_, lean_object* v___y_3767_, lean_object* v___y_3768_, lean_object* v___y_3769_, lean_object* v___y_3770_){
_start:
{
uint8_t v___y_99267__boxed_3771_; uint8_t v___x_99268__boxed_3772_; lean_object* v_res_3773_; 
v___y_99267__boxed_3771_ = lean_unbox(v___y_3761_);
v___x_99268__boxed_3772_ = lean_unbox(v___x_3762_);
v_res_3773_ = lp_vampireReplay_Vampire_Reconstruct_equivNormal___lam__1(v_body_3759_, v_body_3760_, v___y_99267__boxed_3771_, v___x_99268__boxed_3772_, v_x_3763_, v___y_3764_, v___y_3765_, v___y_3766_, v___y_3767_, v___y_3768_, v___y_3769_);
lean_dec(v___y_3769_);
lean_dec_ref(v___y_3768_);
lean_dec(v___y_3767_);
lean_dec_ref(v___y_3766_);
lean_dec(v___y_3765_);
lean_dec_ref(v___y_3764_);
lean_dec_ref(v_body_3760_);
lean_dec_ref(v_body_3759_);
return v_res_3773_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__7(void){
_start:
{
lean_object* v___x_3775_; lean_object* v___x_3776_; 
v___x_3775_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__6));
v___x_3776_ = l_Lean_stringToMessageData(v___x_3775_);
return v___x_3776_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_equivNormal___lam__0___boxed(lean_object* v_body_3777_, lean_object* v_body_3778_, lean_object* v_a_3779_, lean_object* v___x_3780_, lean_object* v_x_3781_, lean_object* v___y_3782_, lean_object* v___y_3783_, lean_object* v___y_3784_, lean_object* v___y_3785_, lean_object* v___y_3786_, lean_object* v___y_3787_, lean_object* v___y_3788_){
_start:
{
uint8_t v_a_99240__boxed_3789_; uint8_t v___x_99241__boxed_3790_; lean_object* v_res_3791_; 
v_a_99240__boxed_3789_ = lean_unbox(v_a_3779_);
v___x_99241__boxed_3790_ = lean_unbox(v___x_3780_);
v_res_3791_ = lp_vampireReplay_Vampire_Reconstruct_equivNormal___lam__0(v_body_3777_, v_body_3778_, v_a_99240__boxed_3789_, v___x_99241__boxed_3790_, v_x_3781_, v___y_3782_, v___y_3783_, v___y_3784_, v___y_3785_, v___y_3786_, v___y_3787_);
lean_dec(v___y_3787_);
lean_dec_ref(v___y_3786_);
lean_dec(v___y_3785_);
lean_dec_ref(v___y_3784_);
lean_dec(v___y_3783_);
lean_dec_ref(v___y_3782_);
lean_dec_ref(v_body_3778_);
lean_dec_ref(v_body_3777_);
return v_res_3791_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__4___redArg(lean_object* v_a_3798_, lean_object* v_as_x27_3799_, lean_object* v_b_3800_, lean_object* v___y_3801_, lean_object* v___y_3802_, lean_object* v___y_3803_, lean_object* v___y_3804_, lean_object* v___y_3805_, lean_object* v___y_3806_){
_start:
{
if (lean_obj_tag(v_as_x27_3799_) == 0)
{
lean_object* v___x_3808_; 
v___x_3808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3808_, 0, v_b_3800_);
return v___x_3808_;
}
else
{
lean_object* v_head_3809_; lean_object* v_tail_3810_; lean_object* v_fst_3811_; lean_object* v_snd_3812_; lean_object* v___x_3813_; lean_object* v_____do__lift_3815_; lean_object* v___y_3820_; lean_object* v_related_3821_; lean_object* v___y_3822_; lean_object* v___y_3823_; lean_object* v___y_3824_; lean_object* v___y_3825_; lean_object* v_____do__lift_3872_; lean_object* v___y_3877_; lean_object* v___y_3878_; lean_object* v_related_3879_; lean_object* v___y_3880_; lean_object* v___y_3881_; lean_object* v___y_3882_; lean_object* v___y_3883_; lean_object* v___x_3927_; lean_object* v___y_3929_; lean_object* v___y_3930_; lean_object* v___y_3931_; lean_object* v___y_3932_; lean_object* v___y_3933_; lean_object* v___y_3934_; 
lean_dec_ref(v_b_3800_);
v_head_3809_ = lean_ctor_get(v_as_x27_3799_, 0);
v_tail_3810_ = lean_ctor_get(v_as_x27_3799_, 1);
v_fst_3811_ = lean_ctor_get(v_head_3809_, 0);
v_snd_3812_ = lean_ctor_get(v_head_3809_, 1);
v___x_3813_ = lean_box(0);
v___x_3927_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_implies_spec__2___closed__0));
if (lean_obj_tag(v_fst_3811_) == 7)
{
lean_object* v_binderType_3995_; lean_object* v_body_3996_; lean_object* v___x_3997_; 
v_binderType_3995_ = lean_ctor_get(v_fst_3811_, 1);
v_body_3996_ = lean_ctor_get(v_fst_3811_, 2);
lean_inc_ref(v_binderType_3995_);
v___x_3997_ = l_Lean_Meta_isProp(v_binderType_3995_, v___y_3803_, v___y_3804_, v___y_3805_, v___y_3806_);
if (lean_obj_tag(v___x_3997_) == 0)
{
lean_object* v_a_3998_; uint8_t v___x_4051_; 
v_a_3998_ = lean_ctor_get(v___x_3997_, 0);
lean_inc(v_a_3998_);
lean_dec_ref_known(v___x_3997_, 1);
v___x_4051_ = lean_unbox(v_a_3998_);
lean_dec(v_a_3998_);
if (v___x_4051_ == 0)
{
goto v___jp_3999_;
}
else
{
uint8_t v___x_4052_; 
v___x_4052_ = l_Lean_Expr_hasLooseBVars(v_body_3996_);
if (v___x_4052_ == 0)
{
v___y_3929_ = v___y_3801_;
v___y_3930_ = v___y_3802_;
v___y_3931_ = v___y_3803_;
v___y_3932_ = v___y_3804_;
v___y_3933_ = v___y_3805_;
v___y_3934_ = v___y_3806_;
goto v___jp_3928_;
}
else
{
goto v___jp_3999_;
}
}
v___jp_3999_:
{
uint8_t v___x_4000_; 
v___x_4000_ = l_Lean_Expr_hasLooseBVars(v_body_3996_);
if (v___x_4000_ == 0)
{
lean_object* v___x_4001_; 
lean_inc_ref(v_binderType_3995_);
v___x_4001_ = lp_vampireReplay_Vampire_Reconstruct_nonempty(v_binderType_3995_, v___y_3801_, v___y_3802_, v___y_3803_, v___y_3804_, v___y_3805_, v___y_3806_);
if (lean_obj_tag(v___x_4001_) == 0)
{
lean_object* v_a_4002_; lean_object* v___x_4003_; lean_object* v___x_4004_; lean_object* v___x_4005_; lean_object* v___x_4006_; lean_object* v___x_4007_; lean_object* v___x_4008_; lean_object* v___x_4009_; lean_object* v___x_4010_; lean_object* v___x_4011_; lean_object* v___x_4012_; 
v_a_4002_ = lean_ctor_get(v___x_4001_, 0);
lean_inc(v_a_4002_);
lean_dec_ref_known(v___x_4001_, 1);
v___x_4003_ = ((lean_object*)(lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__4___redArg___closed__4));
lean_inc_ref(v_body_3996_);
v___x_4004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4004_, 0, v_body_3996_);
lean_inc_ref(v_binderType_3995_);
v___x_4005_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4005_, 0, v_binderType_3995_);
v___x_4006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4006_, 0, v_a_4002_);
v___x_4007_ = lean_unsigned_to_nat(3u);
v___x_4008_ = lean_mk_empty_array_with_capacity(v___x_4007_);
v___x_4009_ = lean_array_push(v___x_4008_, v___x_4004_);
v___x_4010_ = lean_array_push(v___x_4009_, v___x_4005_);
v___x_4011_ = lean_array_push(v___x_4010_, v___x_4006_);
v___x_4012_ = l_Lean_Meta_mkAppOptM(v___x_4003_, v___x_4011_, v___y_3803_, v___y_3804_, v___y_3805_, v___y_3806_);
if (lean_obj_tag(v___x_4012_) == 0)
{
lean_object* v_a_4013_; uint8_t v___x_4014_; 
v_a_4013_ = lean_ctor_get(v___x_4012_, 0);
lean_inc(v_a_4013_);
lean_dec_ref_known(v___x_4012_, 1);
v___x_4014_ = lean_expr_eqv(v_fst_3811_, v_a_3798_);
if (v___x_4014_ == 0)
{
lean_object* v___x_4015_; 
lean_inc_ref(v_body_3996_);
lean_inc(v_snd_3812_);
v___x_4015_ = lp_vampireReplay_Vampire_Reconstruct_equivNormal(v_snd_3812_, v_body_3996_, v___y_3801_, v___y_3802_, v___y_3803_, v___y_3804_, v___y_3805_, v___y_3806_);
if (lean_obj_tag(v___x_4015_) == 0)
{
lean_object* v_a_4016_; 
v_a_4016_ = lean_ctor_get(v___x_4015_, 0);
lean_inc(v_a_4016_);
lean_dec_ref_known(v___x_4015_, 1);
v___y_3820_ = v_a_4013_;
v_related_3821_ = v_a_4016_;
v___y_3822_ = v___y_3803_;
v___y_3823_ = v___y_3804_;
v___y_3824_ = v___y_3805_;
v___y_3825_ = v___y_3806_;
goto v___jp_3819_;
}
else
{
lean_object* v_a_4017_; lean_object* v___x_4019_; uint8_t v_isShared_4020_; uint8_t v_isSharedCheck_4024_; 
lean_dec(v_a_4013_);
v_a_4017_ = lean_ctor_get(v___x_4015_, 0);
v_isSharedCheck_4024_ = !lean_is_exclusive(v___x_4015_);
if (v_isSharedCheck_4024_ == 0)
{
v___x_4019_ = v___x_4015_;
v_isShared_4020_ = v_isSharedCheck_4024_;
goto v_resetjp_4018_;
}
else
{
lean_inc(v_a_4017_);
lean_dec(v___x_4015_);
v___x_4019_ = lean_box(0);
v_isShared_4020_ = v_isSharedCheck_4024_;
goto v_resetjp_4018_;
}
v_resetjp_4018_:
{
lean_object* v___x_4022_; 
if (v_isShared_4020_ == 0)
{
v___x_4022_ = v___x_4019_;
goto v_reusejp_4021_;
}
else
{
lean_object* v_reuseFailAlloc_4023_; 
v_reuseFailAlloc_4023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4023_, 0, v_a_4017_);
v___x_4022_ = v_reuseFailAlloc_4023_;
goto v_reusejp_4021_;
}
v_reusejp_4021_:
{
return v___x_4022_;
}
}
}
}
else
{
lean_object* v___x_4025_; 
lean_inc(v_snd_3812_);
lean_inc_ref(v_body_3996_);
v___x_4025_ = lp_vampireReplay_Vampire_Reconstruct_equivNormal(v_body_3996_, v_snd_3812_, v___y_3801_, v___y_3802_, v___y_3803_, v___y_3804_, v___y_3805_, v___y_3806_);
if (lean_obj_tag(v___x_4025_) == 0)
{
lean_object* v_a_4026_; 
v_a_4026_ = lean_ctor_get(v___x_4025_, 0);
lean_inc(v_a_4026_);
lean_dec_ref_known(v___x_4025_, 1);
v___y_3820_ = v_a_4013_;
v_related_3821_ = v_a_4026_;
v___y_3822_ = v___y_3803_;
v___y_3823_ = v___y_3804_;
v___y_3824_ = v___y_3805_;
v___y_3825_ = v___y_3806_;
goto v___jp_3819_;
}
else
{
lean_object* v_a_4027_; lean_object* v___x_4029_; uint8_t v_isShared_4030_; uint8_t v_isSharedCheck_4034_; 
lean_dec(v_a_4013_);
v_a_4027_ = lean_ctor_get(v___x_4025_, 0);
v_isSharedCheck_4034_ = !lean_is_exclusive(v___x_4025_);
if (v_isSharedCheck_4034_ == 0)
{
v___x_4029_ = v___x_4025_;
v_isShared_4030_ = v_isSharedCheck_4034_;
goto v_resetjp_4028_;
}
else
{
lean_inc(v_a_4027_);
lean_dec(v___x_4025_);
v___x_4029_ = lean_box(0);
v_isShared_4030_ = v_isSharedCheck_4034_;
goto v_resetjp_4028_;
}
v_resetjp_4028_:
{
lean_object* v___x_4032_; 
if (v_isShared_4030_ == 0)
{
v___x_4032_ = v___x_4029_;
goto v_reusejp_4031_;
}
else
{
lean_object* v_reuseFailAlloc_4033_; 
v_reuseFailAlloc_4033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4033_, 0, v_a_4027_);
v___x_4032_ = v_reuseFailAlloc_4033_;
goto v_reusejp_4031_;
}
v_reusejp_4031_:
{
return v___x_4032_;
}
}
}
}
}
else
{
lean_object* v_a_4035_; lean_object* v___x_4037_; uint8_t v_isShared_4038_; uint8_t v_isSharedCheck_4042_; 
v_a_4035_ = lean_ctor_get(v___x_4012_, 0);
v_isSharedCheck_4042_ = !lean_is_exclusive(v___x_4012_);
if (v_isSharedCheck_4042_ == 0)
{
v___x_4037_ = v___x_4012_;
v_isShared_4038_ = v_isSharedCheck_4042_;
goto v_resetjp_4036_;
}
else
{
lean_inc(v_a_4035_);
lean_dec(v___x_4012_);
v___x_4037_ = lean_box(0);
v_isShared_4038_ = v_isSharedCheck_4042_;
goto v_resetjp_4036_;
}
v_resetjp_4036_:
{
lean_object* v___x_4040_; 
if (v_isShared_4038_ == 0)
{
v___x_4040_ = v___x_4037_;
goto v_reusejp_4039_;
}
else
{
lean_object* v_reuseFailAlloc_4041_; 
v_reuseFailAlloc_4041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4041_, 0, v_a_4035_);
v___x_4040_ = v_reuseFailAlloc_4041_;
goto v_reusejp_4039_;
}
v_reusejp_4039_:
{
return v___x_4040_;
}
}
}
}
else
{
lean_object* v_a_4043_; lean_object* v___x_4045_; uint8_t v_isShared_4046_; uint8_t v_isSharedCheck_4050_; 
v_a_4043_ = lean_ctor_get(v___x_4001_, 0);
v_isSharedCheck_4050_ = !lean_is_exclusive(v___x_4001_);
if (v_isSharedCheck_4050_ == 0)
{
v___x_4045_ = v___x_4001_;
v_isShared_4046_ = v_isSharedCheck_4050_;
goto v_resetjp_4044_;
}
else
{
lean_inc(v_a_4043_);
lean_dec(v___x_4001_);
v___x_4045_ = lean_box(0);
v_isShared_4046_ = v_isSharedCheck_4050_;
goto v_resetjp_4044_;
}
v_resetjp_4044_:
{
lean_object* v___x_4048_; 
if (v_isShared_4046_ == 0)
{
v___x_4048_ = v___x_4045_;
goto v_reusejp_4047_;
}
else
{
lean_object* v_reuseFailAlloc_4049_; 
v_reuseFailAlloc_4049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4049_, 0, v_a_4043_);
v___x_4048_ = v_reuseFailAlloc_4049_;
goto v_reusejp_4047_;
}
v_reusejp_4047_:
{
return v___x_4048_;
}
}
}
}
else
{
v___y_3929_ = v___y_3801_;
v___y_3930_ = v___y_3802_;
v___y_3931_ = v___y_3803_;
v___y_3932_ = v___y_3804_;
v___y_3933_ = v___y_3805_;
v___y_3934_ = v___y_3806_;
goto v___jp_3928_;
}
}
}
else
{
lean_object* v_a_4053_; lean_object* v___x_4055_; uint8_t v_isShared_4056_; uint8_t v_isSharedCheck_4060_; 
v_a_4053_ = lean_ctor_get(v___x_3997_, 0);
v_isSharedCheck_4060_ = !lean_is_exclusive(v___x_3997_);
if (v_isSharedCheck_4060_ == 0)
{
v___x_4055_ = v___x_3997_;
v_isShared_4056_ = v_isSharedCheck_4060_;
goto v_resetjp_4054_;
}
else
{
lean_inc(v_a_4053_);
lean_dec(v___x_3997_);
v___x_4055_ = lean_box(0);
v_isShared_4056_ = v_isSharedCheck_4060_;
goto v_resetjp_4054_;
}
v_resetjp_4054_:
{
lean_object* v___x_4058_; 
if (v_isShared_4056_ == 0)
{
v___x_4058_ = v___x_4055_;
goto v_reusejp_4057_;
}
else
{
lean_object* v_reuseFailAlloc_4059_; 
v_reuseFailAlloc_4059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4059_, 0, v_a_4053_);
v___x_4058_ = v_reuseFailAlloc_4059_;
goto v_reusejp_4057_;
}
v_reusejp_4057_:
{
return v___x_4058_;
}
}
}
}
else
{
v___y_3929_ = v___y_3801_;
v___y_3930_ = v___y_3802_;
v___y_3931_ = v___y_3803_;
v___y_3932_ = v___y_3804_;
v___y_3933_ = v___y_3805_;
v___y_3934_ = v___y_3806_;
goto v___jp_3928_;
}
v___jp_3814_:
{
lean_object* v___x_3816_; lean_object* v___x_3817_; lean_object* v___x_3818_; 
v___x_3816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3816_, 0, v_____do__lift_3815_);
v___x_3817_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3817_, 0, v___x_3816_);
lean_ctor_set(v___x_3817_, 1, v___x_3813_);
v___x_3818_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3818_, 0, v___x_3817_);
return v___x_3818_;
}
v___jp_3819_:
{
uint8_t v___x_3826_; 
v___x_3826_ = lean_expr_eqv(v_fst_3811_, v_a_3798_);
if (v___x_3826_ == 0)
{
lean_object* v___x_3827_; lean_object* v___x_3828_; lean_object* v___x_3829_; lean_object* v___x_3830_; lean_object* v___x_3831_; 
v___x_3827_ = ((lean_object*)(lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__4___redArg___closed__0));
v___x_3828_ = lean_unsigned_to_nat(1u);
v___x_3829_ = lean_mk_empty_array_with_capacity(v___x_3828_);
v___x_3830_ = lean_array_push(v___x_3829_, v___y_3820_);
v___x_3831_ = l_Lean_Meta_mkAppM(v___x_3827_, v___x_3830_, v___y_3822_, v___y_3823_, v___y_3824_, v___y_3825_);
if (lean_obj_tag(v___x_3831_) == 0)
{
lean_object* v_a_3832_; lean_object* v___x_3833_; lean_object* v___x_3834_; lean_object* v___x_3835_; lean_object* v___x_3836_; lean_object* v___x_3837_; lean_object* v___x_3838_; 
v_a_3832_ = lean_ctor_get(v___x_3831_, 0);
lean_inc(v_a_3832_);
lean_dec_ref_known(v___x_3831_, 1);
v___x_3833_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__1));
v___x_3834_ = lean_unsigned_to_nat(2u);
v___x_3835_ = lean_mk_empty_array_with_capacity(v___x_3834_);
v___x_3836_ = lean_array_push(v___x_3835_, v_related_3821_);
v___x_3837_ = lean_array_push(v___x_3836_, v_a_3832_);
v___x_3838_ = l_Lean_Meta_mkAppM(v___x_3833_, v___x_3837_, v___y_3822_, v___y_3823_, v___y_3824_, v___y_3825_);
if (lean_obj_tag(v___x_3838_) == 0)
{
lean_object* v_a_3839_; 
v_a_3839_ = lean_ctor_get(v___x_3838_, 0);
lean_inc(v_a_3839_);
lean_dec_ref_known(v___x_3838_, 1);
v_____do__lift_3815_ = v_a_3839_;
goto v___jp_3814_;
}
else
{
lean_object* v_a_3840_; lean_object* v___x_3842_; uint8_t v_isShared_3843_; uint8_t v_isSharedCheck_3847_; 
v_a_3840_ = lean_ctor_get(v___x_3838_, 0);
v_isSharedCheck_3847_ = !lean_is_exclusive(v___x_3838_);
if (v_isSharedCheck_3847_ == 0)
{
v___x_3842_ = v___x_3838_;
v_isShared_3843_ = v_isSharedCheck_3847_;
goto v_resetjp_3841_;
}
else
{
lean_inc(v_a_3840_);
lean_dec(v___x_3838_);
v___x_3842_ = lean_box(0);
v_isShared_3843_ = v_isSharedCheck_3847_;
goto v_resetjp_3841_;
}
v_resetjp_3841_:
{
lean_object* v___x_3845_; 
if (v_isShared_3843_ == 0)
{
v___x_3845_ = v___x_3842_;
goto v_reusejp_3844_;
}
else
{
lean_object* v_reuseFailAlloc_3846_; 
v_reuseFailAlloc_3846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3846_, 0, v_a_3840_);
v___x_3845_ = v_reuseFailAlloc_3846_;
goto v_reusejp_3844_;
}
v_reusejp_3844_:
{
return v___x_3845_;
}
}
}
}
else
{
lean_object* v_a_3848_; lean_object* v___x_3850_; uint8_t v_isShared_3851_; uint8_t v_isSharedCheck_3855_; 
lean_dec_ref(v_related_3821_);
v_a_3848_ = lean_ctor_get(v___x_3831_, 0);
v_isSharedCheck_3855_ = !lean_is_exclusive(v___x_3831_);
if (v_isSharedCheck_3855_ == 0)
{
v___x_3850_ = v___x_3831_;
v_isShared_3851_ = v_isSharedCheck_3855_;
goto v_resetjp_3849_;
}
else
{
lean_inc(v_a_3848_);
lean_dec(v___x_3831_);
v___x_3850_ = lean_box(0);
v_isShared_3851_ = v_isSharedCheck_3855_;
goto v_resetjp_3849_;
}
v_resetjp_3849_:
{
lean_object* v___x_3853_; 
if (v_isShared_3851_ == 0)
{
v___x_3853_ = v___x_3850_;
goto v_reusejp_3852_;
}
else
{
lean_object* v_reuseFailAlloc_3854_; 
v_reuseFailAlloc_3854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3854_, 0, v_a_3848_);
v___x_3853_ = v_reuseFailAlloc_3854_;
goto v_reusejp_3852_;
}
v_reusejp_3852_:
{
return v___x_3853_;
}
}
}
}
else
{
lean_object* v___x_3856_; lean_object* v___x_3857_; lean_object* v___x_3858_; lean_object* v___x_3859_; lean_object* v___x_3860_; lean_object* v___x_3861_; 
v___x_3856_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__1));
v___x_3857_ = lean_unsigned_to_nat(2u);
v___x_3858_ = lean_mk_empty_array_with_capacity(v___x_3857_);
v___x_3859_ = lean_array_push(v___x_3858_, v___y_3820_);
v___x_3860_ = lean_array_push(v___x_3859_, v_related_3821_);
v___x_3861_ = l_Lean_Meta_mkAppM(v___x_3856_, v___x_3860_, v___y_3822_, v___y_3823_, v___y_3824_, v___y_3825_);
if (lean_obj_tag(v___x_3861_) == 0)
{
lean_object* v_a_3862_; 
v_a_3862_ = lean_ctor_get(v___x_3861_, 0);
lean_inc(v_a_3862_);
lean_dec_ref_known(v___x_3861_, 1);
v_____do__lift_3815_ = v_a_3862_;
goto v___jp_3814_;
}
else
{
lean_object* v_a_3863_; lean_object* v___x_3865_; uint8_t v_isShared_3866_; uint8_t v_isSharedCheck_3870_; 
v_a_3863_ = lean_ctor_get(v___x_3861_, 0);
v_isSharedCheck_3870_ = !lean_is_exclusive(v___x_3861_);
if (v_isSharedCheck_3870_ == 0)
{
v___x_3865_ = v___x_3861_;
v_isShared_3866_ = v_isSharedCheck_3870_;
goto v_resetjp_3864_;
}
else
{
lean_inc(v_a_3863_);
lean_dec(v___x_3861_);
v___x_3865_ = lean_box(0);
v_isShared_3866_ = v_isSharedCheck_3870_;
goto v_resetjp_3864_;
}
v_resetjp_3864_:
{
lean_object* v___x_3868_; 
if (v_isShared_3866_ == 0)
{
v___x_3868_ = v___x_3865_;
goto v_reusejp_3867_;
}
else
{
lean_object* v_reuseFailAlloc_3869_; 
v_reuseFailAlloc_3869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3869_, 0, v_a_3863_);
v___x_3868_ = v_reuseFailAlloc_3869_;
goto v_reusejp_3867_;
}
v_reusejp_3867_:
{
return v___x_3868_;
}
}
}
}
}
v___jp_3871_:
{
lean_object* v___x_3873_; lean_object* v___x_3874_; lean_object* v___x_3875_; 
v___x_3873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3873_, 0, v_____do__lift_3872_);
v___x_3874_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3874_, 0, v___x_3873_);
lean_ctor_set(v___x_3874_, 1, v___x_3813_);
v___x_3875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3875_, 0, v___x_3874_);
return v___x_3875_;
}
v___jp_3876_:
{
uint8_t v___x_3884_; 
v___x_3884_ = lean_expr_eqv(v_fst_3811_, v_a_3798_);
if (v___x_3884_ == 0)
{
lean_object* v___x_3885_; lean_object* v___x_3886_; lean_object* v___x_3887_; lean_object* v___x_3888_; lean_object* v___x_3889_; 
v___x_3885_ = ((lean_object*)(lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__4___redArg___closed__0));
v___x_3886_ = lean_unsigned_to_nat(1u);
v___x_3887_ = lean_mk_empty_array_with_capacity(v___x_3886_);
v___x_3888_ = lean_array_push(v___x_3887_, v___y_3877_);
v___x_3889_ = l_Lean_Meta_mkAppM(v___x_3885_, v___x_3888_, v___y_3880_, v___y_3881_, v___y_3882_, v___y_3883_);
if (lean_obj_tag(v___x_3889_) == 0)
{
lean_object* v_a_3890_; lean_object* v___x_3891_; lean_object* v___x_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; lean_object* v___x_3895_; 
v_a_3890_ = lean_ctor_get(v___x_3889_, 0);
lean_inc(v_a_3890_);
lean_dec_ref_known(v___x_3889_, 1);
v___x_3891_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__1));
v___x_3892_ = lean_mk_empty_array_with_capacity(v___y_3878_);
lean_dec(v___y_3878_);
v___x_3893_ = lean_array_push(v___x_3892_, v_related_3879_);
v___x_3894_ = lean_array_push(v___x_3893_, v_a_3890_);
v___x_3895_ = l_Lean_Meta_mkAppM(v___x_3891_, v___x_3894_, v___y_3880_, v___y_3881_, v___y_3882_, v___y_3883_);
if (lean_obj_tag(v___x_3895_) == 0)
{
lean_object* v_a_3896_; 
v_a_3896_ = lean_ctor_get(v___x_3895_, 0);
lean_inc(v_a_3896_);
lean_dec_ref_known(v___x_3895_, 1);
v_____do__lift_3872_ = v_a_3896_;
goto v___jp_3871_;
}
else
{
lean_object* v_a_3897_; lean_object* v___x_3899_; uint8_t v_isShared_3900_; uint8_t v_isSharedCheck_3904_; 
v_a_3897_ = lean_ctor_get(v___x_3895_, 0);
v_isSharedCheck_3904_ = !lean_is_exclusive(v___x_3895_);
if (v_isSharedCheck_3904_ == 0)
{
v___x_3899_ = v___x_3895_;
v_isShared_3900_ = v_isSharedCheck_3904_;
goto v_resetjp_3898_;
}
else
{
lean_inc(v_a_3897_);
lean_dec(v___x_3895_);
v___x_3899_ = lean_box(0);
v_isShared_3900_ = v_isSharedCheck_3904_;
goto v_resetjp_3898_;
}
v_resetjp_3898_:
{
lean_object* v___x_3902_; 
if (v_isShared_3900_ == 0)
{
v___x_3902_ = v___x_3899_;
goto v_reusejp_3901_;
}
else
{
lean_object* v_reuseFailAlloc_3903_; 
v_reuseFailAlloc_3903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3903_, 0, v_a_3897_);
v___x_3902_ = v_reuseFailAlloc_3903_;
goto v_reusejp_3901_;
}
v_reusejp_3901_:
{
return v___x_3902_;
}
}
}
}
else
{
lean_object* v_a_3905_; lean_object* v___x_3907_; uint8_t v_isShared_3908_; uint8_t v_isSharedCheck_3912_; 
lean_dec_ref(v_related_3879_);
lean_dec(v___y_3878_);
v_a_3905_ = lean_ctor_get(v___x_3889_, 0);
v_isSharedCheck_3912_ = !lean_is_exclusive(v___x_3889_);
if (v_isSharedCheck_3912_ == 0)
{
v___x_3907_ = v___x_3889_;
v_isShared_3908_ = v_isSharedCheck_3912_;
goto v_resetjp_3906_;
}
else
{
lean_inc(v_a_3905_);
lean_dec(v___x_3889_);
v___x_3907_ = lean_box(0);
v_isShared_3908_ = v_isSharedCheck_3912_;
goto v_resetjp_3906_;
}
v_resetjp_3906_:
{
lean_object* v___x_3910_; 
if (v_isShared_3908_ == 0)
{
v___x_3910_ = v___x_3907_;
goto v_reusejp_3909_;
}
else
{
lean_object* v_reuseFailAlloc_3911_; 
v_reuseFailAlloc_3911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3911_, 0, v_a_3905_);
v___x_3910_ = v_reuseFailAlloc_3911_;
goto v_reusejp_3909_;
}
v_reusejp_3909_:
{
return v___x_3910_;
}
}
}
}
else
{
lean_object* v___x_3913_; lean_object* v___x_3914_; lean_object* v___x_3915_; lean_object* v___x_3916_; lean_object* v___x_3917_; 
v___x_3913_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__1));
v___x_3914_ = lean_mk_empty_array_with_capacity(v___y_3878_);
lean_dec(v___y_3878_);
v___x_3915_ = lean_array_push(v___x_3914_, v___y_3877_);
v___x_3916_ = lean_array_push(v___x_3915_, v_related_3879_);
v___x_3917_ = l_Lean_Meta_mkAppM(v___x_3913_, v___x_3916_, v___y_3880_, v___y_3881_, v___y_3882_, v___y_3883_);
if (lean_obj_tag(v___x_3917_) == 0)
{
lean_object* v_a_3918_; 
v_a_3918_ = lean_ctor_get(v___x_3917_, 0);
lean_inc(v_a_3918_);
lean_dec_ref_known(v___x_3917_, 1);
v_____do__lift_3872_ = v_a_3918_;
goto v___jp_3871_;
}
else
{
lean_object* v_a_3919_; lean_object* v___x_3921_; uint8_t v_isShared_3922_; uint8_t v_isSharedCheck_3926_; 
v_a_3919_ = lean_ctor_get(v___x_3917_, 0);
v_isSharedCheck_3926_ = !lean_is_exclusive(v___x_3917_);
if (v_isSharedCheck_3926_ == 0)
{
v___x_3921_ = v___x_3917_;
v_isShared_3922_ = v_isSharedCheck_3926_;
goto v_resetjp_3920_;
}
else
{
lean_inc(v_a_3919_);
lean_dec(v___x_3917_);
v___x_3921_ = lean_box(0);
v_isShared_3922_ = v_isSharedCheck_3926_;
goto v_resetjp_3920_;
}
v_resetjp_3920_:
{
lean_object* v___x_3924_; 
if (v_isShared_3922_ == 0)
{
v___x_3924_ = v___x_3921_;
goto v_reusejp_3923_;
}
else
{
lean_object* v_reuseFailAlloc_3925_; 
v_reuseFailAlloc_3925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3925_, 0, v_a_3919_);
v___x_3924_ = v_reuseFailAlloc_3925_;
goto v_reusejp_3923_;
}
v_reusejp_3923_:
{
return v___x_3924_;
}
}
}
}
}
v___jp_3928_:
{
lean_object* v___x_3935_; lean_object* v___x_3936_; uint8_t v___x_3937_; 
v___x_3935_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__1));
v___x_3936_ = lean_unsigned_to_nat(2u);
v___x_3937_ = l_Lean_Expr_isAppOfArity(v_fst_3811_, v___x_3935_, v___x_3936_);
if (v___x_3937_ == 0)
{
v_as_x27_3799_ = v_tail_3810_;
v_b_3800_ = v___x_3927_;
goto _start;
}
else
{
lean_object* v___x_3939_; 
v___x_3939_ = l_Lean_Expr_appArg_x21(v_fst_3811_);
if (lean_obj_tag(v___x_3939_) == 6)
{
lean_object* v_binderType_3940_; lean_object* v_body_3941_; uint8_t v___x_3942_; 
v_binderType_3940_ = lean_ctor_get(v___x_3939_, 1);
lean_inc_ref(v_binderType_3940_);
v_body_3941_ = lean_ctor_get(v___x_3939_, 2);
lean_inc_ref(v_body_3941_);
lean_dec_ref_known(v___x_3939_, 3);
v___x_3942_ = l_Lean_Expr_hasLooseBVars(v_body_3941_);
if (v___x_3942_ == 0)
{
lean_object* v___x_3943_; 
lean_inc_ref(v_binderType_3940_);
v___x_3943_ = lp_vampireReplay_Vampire_Reconstruct_nonempty(v_binderType_3940_, v___y_3929_, v___y_3930_, v___y_3931_, v___y_3932_, v___y_3933_, v___y_3934_);
if (lean_obj_tag(v___x_3943_) == 0)
{
lean_object* v_a_3944_; lean_object* v___x_3945_; lean_object* v___x_3946_; lean_object* v___x_3947_; lean_object* v___x_3948_; lean_object* v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; lean_object* v___x_3952_; lean_object* v___x_3953_; lean_object* v___x_3954_; 
v_a_3944_ = lean_ctor_get(v___x_3943_, 0);
lean_inc(v_a_3944_);
lean_dec_ref_known(v___x_3943_, 1);
v___x_3945_ = ((lean_object*)(lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__4___redArg___closed__2));
lean_inc_ref(v_body_3941_);
v___x_3946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3946_, 0, v_body_3941_);
v___x_3947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3947_, 0, v_binderType_3940_);
v___x_3948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3948_, 0, v_a_3944_);
v___x_3949_ = lean_unsigned_to_nat(3u);
v___x_3950_ = lean_mk_empty_array_with_capacity(v___x_3949_);
v___x_3951_ = lean_array_push(v___x_3950_, v___x_3946_);
v___x_3952_ = lean_array_push(v___x_3951_, v___x_3947_);
v___x_3953_ = lean_array_push(v___x_3952_, v___x_3948_);
v___x_3954_ = l_Lean_Meta_mkAppOptM(v___x_3945_, v___x_3953_, v___y_3931_, v___y_3932_, v___y_3933_, v___y_3934_);
if (lean_obj_tag(v___x_3954_) == 0)
{
lean_object* v_a_3955_; uint8_t v___x_3956_; 
v_a_3955_ = lean_ctor_get(v___x_3954_, 0);
lean_inc(v_a_3955_);
lean_dec_ref_known(v___x_3954_, 1);
v___x_3956_ = lean_expr_eqv(v_fst_3811_, v_a_3798_);
if (v___x_3956_ == 0)
{
lean_object* v___x_3957_; 
lean_inc(v_snd_3812_);
v___x_3957_ = lp_vampireReplay_Vampire_Reconstruct_equivNormal(v_snd_3812_, v_body_3941_, v___y_3929_, v___y_3930_, v___y_3931_, v___y_3932_, v___y_3933_, v___y_3934_);
if (lean_obj_tag(v___x_3957_) == 0)
{
lean_object* v_a_3958_; 
v_a_3958_ = lean_ctor_get(v___x_3957_, 0);
lean_inc(v_a_3958_);
lean_dec_ref_known(v___x_3957_, 1);
v___y_3877_ = v_a_3955_;
v___y_3878_ = v___x_3936_;
v_related_3879_ = v_a_3958_;
v___y_3880_ = v___y_3931_;
v___y_3881_ = v___y_3932_;
v___y_3882_ = v___y_3933_;
v___y_3883_ = v___y_3934_;
goto v___jp_3876_;
}
else
{
lean_object* v_a_3959_; lean_object* v___x_3961_; uint8_t v_isShared_3962_; uint8_t v_isSharedCheck_3966_; 
lean_dec(v_a_3955_);
v_a_3959_ = lean_ctor_get(v___x_3957_, 0);
v_isSharedCheck_3966_ = !lean_is_exclusive(v___x_3957_);
if (v_isSharedCheck_3966_ == 0)
{
v___x_3961_ = v___x_3957_;
v_isShared_3962_ = v_isSharedCheck_3966_;
goto v_resetjp_3960_;
}
else
{
lean_inc(v_a_3959_);
lean_dec(v___x_3957_);
v___x_3961_ = lean_box(0);
v_isShared_3962_ = v_isSharedCheck_3966_;
goto v_resetjp_3960_;
}
v_resetjp_3960_:
{
lean_object* v___x_3964_; 
if (v_isShared_3962_ == 0)
{
v___x_3964_ = v___x_3961_;
goto v_reusejp_3963_;
}
else
{
lean_object* v_reuseFailAlloc_3965_; 
v_reuseFailAlloc_3965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3965_, 0, v_a_3959_);
v___x_3964_ = v_reuseFailAlloc_3965_;
goto v_reusejp_3963_;
}
v_reusejp_3963_:
{
return v___x_3964_;
}
}
}
}
else
{
lean_object* v___x_3967_; 
lean_inc(v_snd_3812_);
v___x_3967_ = lp_vampireReplay_Vampire_Reconstruct_equivNormal(v_body_3941_, v_snd_3812_, v___y_3929_, v___y_3930_, v___y_3931_, v___y_3932_, v___y_3933_, v___y_3934_);
if (lean_obj_tag(v___x_3967_) == 0)
{
lean_object* v_a_3968_; 
v_a_3968_ = lean_ctor_get(v___x_3967_, 0);
lean_inc(v_a_3968_);
lean_dec_ref_known(v___x_3967_, 1);
v___y_3877_ = v_a_3955_;
v___y_3878_ = v___x_3936_;
v_related_3879_ = v_a_3968_;
v___y_3880_ = v___y_3931_;
v___y_3881_ = v___y_3932_;
v___y_3882_ = v___y_3933_;
v___y_3883_ = v___y_3934_;
goto v___jp_3876_;
}
else
{
lean_object* v_a_3969_; lean_object* v___x_3971_; uint8_t v_isShared_3972_; uint8_t v_isSharedCheck_3976_; 
lean_dec(v_a_3955_);
v_a_3969_ = lean_ctor_get(v___x_3967_, 0);
v_isSharedCheck_3976_ = !lean_is_exclusive(v___x_3967_);
if (v_isSharedCheck_3976_ == 0)
{
v___x_3971_ = v___x_3967_;
v_isShared_3972_ = v_isSharedCheck_3976_;
goto v_resetjp_3970_;
}
else
{
lean_inc(v_a_3969_);
lean_dec(v___x_3967_);
v___x_3971_ = lean_box(0);
v_isShared_3972_ = v_isSharedCheck_3976_;
goto v_resetjp_3970_;
}
v_resetjp_3970_:
{
lean_object* v___x_3974_; 
if (v_isShared_3972_ == 0)
{
v___x_3974_ = v___x_3971_;
goto v_reusejp_3973_;
}
else
{
lean_object* v_reuseFailAlloc_3975_; 
v_reuseFailAlloc_3975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3975_, 0, v_a_3969_);
v___x_3974_ = v_reuseFailAlloc_3975_;
goto v_reusejp_3973_;
}
v_reusejp_3973_:
{
return v___x_3974_;
}
}
}
}
}
else
{
lean_object* v_a_3977_; lean_object* v___x_3979_; uint8_t v_isShared_3980_; uint8_t v_isSharedCheck_3984_; 
lean_dec_ref(v_body_3941_);
v_a_3977_ = lean_ctor_get(v___x_3954_, 0);
v_isSharedCheck_3984_ = !lean_is_exclusive(v___x_3954_);
if (v_isSharedCheck_3984_ == 0)
{
v___x_3979_ = v___x_3954_;
v_isShared_3980_ = v_isSharedCheck_3984_;
goto v_resetjp_3978_;
}
else
{
lean_inc(v_a_3977_);
lean_dec(v___x_3954_);
v___x_3979_ = lean_box(0);
v_isShared_3980_ = v_isSharedCheck_3984_;
goto v_resetjp_3978_;
}
v_resetjp_3978_:
{
lean_object* v___x_3982_; 
if (v_isShared_3980_ == 0)
{
v___x_3982_ = v___x_3979_;
goto v_reusejp_3981_;
}
else
{
lean_object* v_reuseFailAlloc_3983_; 
v_reuseFailAlloc_3983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3983_, 0, v_a_3977_);
v___x_3982_ = v_reuseFailAlloc_3983_;
goto v_reusejp_3981_;
}
v_reusejp_3981_:
{
return v___x_3982_;
}
}
}
}
else
{
lean_object* v_a_3985_; lean_object* v___x_3987_; uint8_t v_isShared_3988_; uint8_t v_isSharedCheck_3992_; 
lean_dec_ref(v_body_3941_);
lean_dec_ref(v_binderType_3940_);
v_a_3985_ = lean_ctor_get(v___x_3943_, 0);
v_isSharedCheck_3992_ = !lean_is_exclusive(v___x_3943_);
if (v_isSharedCheck_3992_ == 0)
{
v___x_3987_ = v___x_3943_;
v_isShared_3988_ = v_isSharedCheck_3992_;
goto v_resetjp_3986_;
}
else
{
lean_inc(v_a_3985_);
lean_dec(v___x_3943_);
v___x_3987_ = lean_box(0);
v_isShared_3988_ = v_isSharedCheck_3992_;
goto v_resetjp_3986_;
}
v_resetjp_3986_:
{
lean_object* v___x_3990_; 
if (v_isShared_3988_ == 0)
{
v___x_3990_ = v___x_3987_;
goto v_reusejp_3989_;
}
else
{
lean_object* v_reuseFailAlloc_3991_; 
v_reuseFailAlloc_3991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3991_, 0, v_a_3985_);
v___x_3990_ = v_reuseFailAlloc_3991_;
goto v_reusejp_3989_;
}
v_reusejp_3989_:
{
return v___x_3990_;
}
}
}
}
else
{
lean_dec_ref(v_body_3941_);
lean_dec_ref(v_binderType_3940_);
v_as_x27_3799_ = v_tail_3810_;
v_b_3800_ = v___x_3927_;
goto _start;
}
}
else
{
lean_dec_ref(v___x_3939_);
v_as_x27_3799_ = v_tail_3810_;
v_b_3800_ = v___x_3927_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_equivNormal(lean_object* v_a_4073_, lean_object* v_b_4074_, lean_object* v_a_4075_, lean_object* v_a_4076_, lean_object* v_a_4077_, lean_object* v_a_4078_, lean_object* v_a_4079_, lean_object* v_a_4080_){
_start:
{
lean_object* v___y_4083_; lean_object* v___y_4084_; lean_object* v___y_4085_; lean_object* v___y_4086_; lean_object* v___y_4087_; lean_object* v___y_4088_; lean_object* v___y_4089_; lean_object* v___y_4090_; lean_object* v___x_4093_; 
v___x_4093_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_a_4073_, v_a_4078_);
if (lean_obj_tag(v___x_4093_) == 0)
{
lean_object* v_a_4094_; lean_object* v___x_4096_; uint8_t v_isShared_4097_; uint8_t v_isSharedCheck_4584_; 
v_a_4094_ = lean_ctor_get(v___x_4093_, 0);
v_isSharedCheck_4584_ = !lean_is_exclusive(v___x_4093_);
if (v_isSharedCheck_4584_ == 0)
{
v___x_4096_ = v___x_4093_;
v_isShared_4097_ = v_isSharedCheck_4584_;
goto v_resetjp_4095_;
}
else
{
lean_inc(v_a_4094_);
lean_dec(v___x_4093_);
v___x_4096_ = lean_box(0);
v_isShared_4097_ = v_isSharedCheck_4584_;
goto v_resetjp_4095_;
}
v_resetjp_4095_:
{
lean_object* v___x_4098_; 
v___x_4098_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_b_4074_, v_a_4078_);
if (lean_obj_tag(v___x_4098_) == 0)
{
lean_object* v_a_4099_; lean_object* v___x_4101_; uint8_t v_isShared_4102_; uint8_t v_isSharedCheck_4583_; 
v_a_4099_ = lean_ctor_get(v___x_4098_, 0);
v_isSharedCheck_4583_ = !lean_is_exclusive(v___x_4098_);
if (v_isSharedCheck_4583_ == 0)
{
v___x_4101_ = v___x_4098_;
v_isShared_4102_ = v_isSharedCheck_4583_;
goto v_resetjp_4100_;
}
else
{
lean_inc(v_a_4099_);
lean_dec(v___x_4098_);
v___x_4101_ = lean_box(0);
v_isShared_4102_ = v_isSharedCheck_4583_;
goto v_resetjp_4100_;
}
v_resetjp_4100_:
{
lean_object* v___y_4104_; lean_object* v___y_4105_; lean_object* v___y_4106_; lean_object* v___y_4107_; lean_object* v___y_4108_; lean_object* v___y_4109_; lean_object* v___y_4110_; lean_object* v___y_4147_; lean_object* v___y_4148_; lean_object* v___y_4149_; lean_object* v___y_4150_; lean_object* v___y_4151_; lean_object* v___y_4152_; lean_object* v___y_4153_; lean_object* v___x_4170_; 
lean_inc(v_a_4099_);
lean_inc(v_a_4094_);
v___x_4170_ = l_Lean_Meta_isExprDefEq(v_a_4094_, v_a_4099_, v_a_4077_, v_a_4078_, v_a_4079_, v_a_4080_);
if (lean_obj_tag(v___x_4170_) == 0)
{
lean_object* v_a_4171_; uint8_t v___x_4172_; 
v_a_4171_ = lean_ctor_get(v___x_4170_, 0);
lean_inc(v_a_4171_);
lean_dec_ref_known(v___x_4170_, 1);
v___x_4172_ = lean_unbox(v_a_4171_);
if (v___x_4172_ == 0)
{
uint8_t v___x_4173_; lean_object* v___y_4175_; lean_object* v___y_4176_; lean_object* v___y_4177_; lean_object* v___y_4178_; lean_object* v___y_4179_; lean_object* v___y_4180_; lean_object* v___y_4181_; lean_object* v___y_4182_; lean_object* v___y_4183_; lean_object* v___y_4184_; uint8_t v___y_4185_; lean_object* v___y_4217_; lean_object* v___y_4218_; lean_object* v___y_4219_; lean_object* v___y_4220_; lean_object* v___y_4221_; lean_object* v___y_4222_; lean_object* v___y_4223_; uint8_t v___y_4224_; lean_object* v___y_4235_; lean_object* v___y_4236_; lean_object* v___y_4237_; lean_object* v___y_4238_; lean_object* v___y_4239_; lean_object* v___y_4240_; lean_object* v___y_4241_; lean_object* v___y_4247_; lean_object* v___y_4248_; lean_object* v___y_4249_; lean_object* v___y_4250_; lean_object* v___y_4251_; lean_object* v___y_4252_; lean_object* v___y_4321_; lean_object* v___y_4322_; lean_object* v___y_4323_; lean_object* v___y_4324_; lean_object* v___y_4325_; lean_object* v___y_4326_; lean_object* v___y_4327_; lean_object* v___y_4328_; lean_object* v___y_4346_; lean_object* v___y_4347_; lean_object* v___y_4348_; lean_object* v___y_4349_; lean_object* v___y_4350_; lean_object* v___y_4351_; lean_object* v___y_4352_; lean_object* v___y_4365_; lean_object* v___y_4366_; lean_object* v___y_4367_; lean_object* v___y_4368_; lean_object* v___y_4369_; lean_object* v___y_4370_; lean_object* v___y_4383_; lean_object* v___y_4384_; lean_object* v___y_4385_; lean_object* v___y_4386_; lean_object* v___y_4387_; lean_object* v___y_4388_; lean_object* v___y_4389_; lean_object* v___y_4390_; lean_object* v___y_4401_; lean_object* v___y_4402_; lean_object* v___y_4403_; lean_object* v___y_4404_; lean_object* v___y_4405_; lean_object* v___y_4406_; lean_object* v___y_4407_; lean_object* v___y_4415_; lean_object* v___y_4416_; lean_object* v___y_4417_; lean_object* v___y_4418_; lean_object* v___y_4419_; lean_object* v___y_4420_; lean_object* v___y_4428_; lean_object* v___y_4429_; lean_object* v___y_4430_; lean_object* v___y_4431_; lean_object* v___y_4432_; lean_object* v___y_4433_; lean_object* v___y_4459_; lean_object* v___y_4460_; lean_object* v___y_4461_; lean_object* v___y_4462_; lean_object* v___y_4463_; lean_object* v___y_4464_; lean_object* v___y_4486_; lean_object* v___y_4487_; lean_object* v___y_4542_; lean_object* v___x_4555_; lean_object* v___x_4556_; uint8_t v___x_4557_; 
v___x_4173_ = 1;
v___x_4555_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___closed__3));
v___x_4556_ = lean_unsigned_to_nat(3u);
v___x_4557_ = l_Lean_Expr_isAppOfArity(v_a_4094_, v___x_4555_, v___x_4556_);
if (v___x_4557_ == 0)
{
lean_object* v___x_4558_; 
v___x_4558_ = lean_box(0);
v___y_4542_ = v___x_4558_;
goto v___jp_4541_;
}
else
{
lean_object* v___x_4559_; lean_object* v___x_4560_; lean_object* v___x_4561_; lean_object* v___x_4562_; lean_object* v___x_4563_; lean_object* v___x_4564_; lean_object* v___x_4565_; lean_object* v___x_4566_; 
v___x_4559_ = l_Lean_Expr_appFn_x21(v_a_4094_);
v___x_4560_ = l_Lean_Expr_appFn_x21(v___x_4559_);
v___x_4561_ = l_Lean_Expr_appArg_x21(v___x_4560_);
lean_dec_ref(v___x_4560_);
v___x_4562_ = l_Lean_Expr_appArg_x21(v___x_4559_);
lean_dec_ref(v___x_4559_);
v___x_4563_ = l_Lean_Expr_appArg_x21(v_a_4094_);
v___x_4564_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4564_, 0, v___x_4562_);
lean_ctor_set(v___x_4564_, 1, v___x_4563_);
v___x_4565_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4565_, 0, v___x_4561_);
lean_ctor_set(v___x_4565_, 1, v___x_4564_);
v___x_4566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4566_, 0, v___x_4565_);
v___y_4542_ = v___x_4566_;
goto v___jp_4541_;
}
v___jp_4174_:
{
lean_object* v___x_4186_; 
lean_inc_ref(v___y_4178_);
v___x_4186_ = l_Lean_Meta_isExprDefEq(v___y_4178_, v___y_4179_, v___y_4181_, v___y_4182_, v___y_4184_, v___y_4183_);
if (lean_obj_tag(v___x_4186_) == 0)
{
lean_object* v_a_4187_; lean_object* v___x_4188_; lean_object* v___x_4189_; lean_object* v___f_4190_; uint8_t v___x_4191_; 
v_a_4187_ = lean_ctor_get(v___x_4186_, 0);
lean_inc(v_a_4187_);
lean_dec_ref_known(v___x_4186_, 1);
v___x_4188_ = lean_box(v___y_4185_);
v___x_4189_ = lean_box(v___x_4173_);
v___f_4190_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_equivNormal___lam__1___boxed), 12, 4);
lean_closure_set(v___f_4190_, 0, v___y_4176_);
lean_closure_set(v___f_4190_, 1, v___y_4175_);
lean_closure_set(v___f_4190_, 2, v___x_4188_);
lean_closure_set(v___f_4190_, 3, v___x_4189_);
v___x_4191_ = lean_unbox(v_a_4187_);
lean_dec(v_a_4187_);
if (v___x_4191_ == 0)
{
lean_object* v___x_4192_; lean_object* v___x_4193_; lean_object* v___x_4194_; lean_object* v___x_4195_; lean_object* v___x_4196_; lean_object* v___x_4197_; lean_object* v___x_4198_; lean_object* v___x_4199_; 
v___x_4192_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__7, &lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__7_once, _init_lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__7);
v___x_4193_ = l_Lean_indentExpr(v_a_4094_);
v___x_4194_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4194_, 0, v___x_4192_);
lean_ctor_set(v___x_4194_, 1, v___x_4193_);
v___x_4195_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_implies___closed__5, &lp_vampireReplay_Vampire_Reconstruct_implies___closed__5_once, _init_lp_vampireReplay_Vampire_Reconstruct_implies___closed__5);
v___x_4196_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4196_, 0, v___x_4194_);
lean_ctor_set(v___x_4196_, 1, v___x_4195_);
v___x_4197_ = l_Lean_indentExpr(v_a_4099_);
v___x_4198_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4198_, 0, v___x_4196_);
lean_ctor_set(v___x_4198_, 1, v___x_4197_);
v___x_4199_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_4198_, v___y_4181_, v___y_4182_, v___y_4184_, v___y_4183_);
if (lean_obj_tag(v___x_4199_) == 0)
{
lean_dec_ref_known(v___x_4199_, 1);
v___y_4083_ = v___y_4178_;
v___y_4084_ = v___f_4190_;
v___y_4085_ = v___y_4177_;
v___y_4086_ = v___y_4180_;
v___y_4087_ = v___y_4181_;
v___y_4088_ = v___y_4182_;
v___y_4089_ = v___y_4184_;
v___y_4090_ = v___y_4183_;
goto v___jp_4082_;
}
else
{
lean_object* v_a_4200_; lean_object* v___x_4202_; uint8_t v_isShared_4203_; uint8_t v_isSharedCheck_4207_; 
lean_dec_ref(v___f_4190_);
lean_dec_ref(v___y_4178_);
v_a_4200_ = lean_ctor_get(v___x_4199_, 0);
v_isSharedCheck_4207_ = !lean_is_exclusive(v___x_4199_);
if (v_isSharedCheck_4207_ == 0)
{
v___x_4202_ = v___x_4199_;
v_isShared_4203_ = v_isSharedCheck_4207_;
goto v_resetjp_4201_;
}
else
{
lean_inc(v_a_4200_);
lean_dec(v___x_4199_);
v___x_4202_ = lean_box(0);
v_isShared_4203_ = v_isSharedCheck_4207_;
goto v_resetjp_4201_;
}
v_resetjp_4201_:
{
lean_object* v___x_4205_; 
if (v_isShared_4203_ == 0)
{
v___x_4205_ = v___x_4202_;
goto v_reusejp_4204_;
}
else
{
lean_object* v_reuseFailAlloc_4206_; 
v_reuseFailAlloc_4206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4206_, 0, v_a_4200_);
v___x_4205_ = v_reuseFailAlloc_4206_;
goto v_reusejp_4204_;
}
v_reusejp_4204_:
{
return v___x_4205_;
}
}
}
}
else
{
lean_dec(v_a_4099_);
lean_dec(v_a_4094_);
v___y_4083_ = v___y_4178_;
v___y_4084_ = v___f_4190_;
v___y_4085_ = v___y_4177_;
v___y_4086_ = v___y_4180_;
v___y_4087_ = v___y_4181_;
v___y_4088_ = v___y_4182_;
v___y_4089_ = v___y_4184_;
v___y_4090_ = v___y_4183_;
goto v___jp_4082_;
}
}
else
{
lean_object* v_a_4208_; lean_object* v___x_4210_; uint8_t v_isShared_4211_; uint8_t v_isSharedCheck_4215_; 
lean_dec_ref(v___y_4178_);
lean_dec_ref(v___y_4176_);
lean_dec_ref(v___y_4175_);
lean_dec(v_a_4099_);
lean_dec(v_a_4094_);
v_a_4208_ = lean_ctor_get(v___x_4186_, 0);
v_isSharedCheck_4215_ = !lean_is_exclusive(v___x_4186_);
if (v_isSharedCheck_4215_ == 0)
{
v___x_4210_ = v___x_4186_;
v_isShared_4211_ = v_isSharedCheck_4215_;
goto v_resetjp_4209_;
}
else
{
lean_inc(v_a_4208_);
lean_dec(v___x_4186_);
v___x_4210_ = lean_box(0);
v_isShared_4211_ = v_isSharedCheck_4215_;
goto v_resetjp_4209_;
}
v_resetjp_4209_:
{
lean_object* v___x_4213_; 
if (v_isShared_4211_ == 0)
{
v___x_4213_ = v___x_4210_;
goto v_reusejp_4212_;
}
else
{
lean_object* v_reuseFailAlloc_4214_; 
v_reuseFailAlloc_4214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4214_, 0, v_a_4208_);
v___x_4213_ = v_reuseFailAlloc_4214_;
goto v_reusejp_4212_;
}
v_reusejp_4212_:
{
return v___x_4213_;
}
}
}
}
v___jp_4216_:
{
if (v___y_4224_ == 0)
{
lean_dec(v_a_4171_);
v___y_4104_ = v___y_4217_;
v___y_4105_ = v___y_4223_;
v___y_4106_ = v___y_4218_;
v___y_4107_ = v___y_4221_;
v___y_4108_ = v___y_4220_;
v___y_4109_ = v___y_4222_;
v___y_4110_ = v___y_4219_;
goto v___jp_4103_;
}
else
{
lean_object* v___x_4225_; 
v___x_4225_ = l_Lean_Expr_appArg_x21(v_a_4094_);
if (lean_obj_tag(v___x_4225_) == 6)
{
lean_object* v_binderType_4226_; lean_object* v_body_4227_; lean_object* v___x_4228_; 
v_binderType_4226_ = lean_ctor_get(v___x_4225_, 1);
lean_inc_ref(v_binderType_4226_);
v_body_4227_ = lean_ctor_get(v___x_4225_, 2);
lean_inc_ref(v_body_4227_);
lean_dec_ref_known(v___x_4225_, 3);
v___x_4228_ = l_Lean_Expr_appArg_x21(v_a_4099_);
if (lean_obj_tag(v___x_4228_) == 6)
{
lean_object* v_body_4229_; lean_object* v___x_4230_; lean_object* v___f_4231_; lean_object* v___x_4232_; lean_object* v___x_4233_; 
lean_dec_ref(v___y_4217_);
lean_dec(v_a_4099_);
lean_dec(v_a_4094_);
v_body_4229_ = lean_ctor_get(v___x_4228_, 2);
lean_inc_ref(v_body_4229_);
lean_dec_ref_known(v___x_4228_, 3);
v___x_4230_ = lean_box(v___x_4173_);
v___f_4231_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_equivNormal___lam__0___boxed), 12, 4);
lean_closure_set(v___f_4231_, 0, v_body_4227_);
lean_closure_set(v___f_4231_, 1, v_body_4229_);
lean_closure_set(v___f_4231_, 2, v_a_4171_);
lean_closure_set(v___f_4231_, 3, v___x_4230_);
v___x_4232_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__6));
v___x_4233_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_4232_, v_binderType_4226_, v___f_4231_, v___y_4223_, v___y_4218_, v___y_4221_, v___y_4220_, v___y_4222_, v___y_4219_);
return v___x_4233_;
}
else
{
lean_dec_ref(v___x_4228_);
lean_dec_ref(v_body_4227_);
lean_dec_ref(v_binderType_4226_);
lean_dec(v_a_4171_);
v___y_4147_ = v___y_4217_;
v___y_4148_ = v___y_4223_;
v___y_4149_ = v___y_4218_;
v___y_4150_ = v___y_4221_;
v___y_4151_ = v___y_4220_;
v___y_4152_ = v___y_4222_;
v___y_4153_ = v___y_4219_;
goto v___jp_4146_;
}
}
else
{
lean_dec_ref(v___x_4225_);
lean_dec(v_a_4171_);
v___y_4147_ = v___y_4217_;
v___y_4148_ = v___y_4223_;
v___y_4149_ = v___y_4218_;
v___y_4150_ = v___y_4221_;
v___y_4151_ = v___y_4220_;
v___y_4152_ = v___y_4222_;
v___y_4153_ = v___y_4219_;
goto v___jp_4146_;
}
}
}
v___jp_4234_:
{
lean_object* v___x_4242_; lean_object* v___x_4243_; uint8_t v___x_4244_; 
v___x_4242_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__1));
v___x_4243_ = lean_unsigned_to_nat(2u);
v___x_4244_ = l_Lean_Expr_isAppOfArity(v_a_4094_, v___x_4242_, v___x_4243_);
if (v___x_4244_ == 0)
{
v___y_4217_ = v___y_4235_;
v___y_4218_ = v___y_4237_;
v___y_4219_ = v___y_4241_;
v___y_4220_ = v___y_4239_;
v___y_4221_ = v___y_4238_;
v___y_4222_ = v___y_4240_;
v___y_4223_ = v___y_4236_;
v___y_4224_ = v___x_4244_;
goto v___jp_4216_;
}
else
{
uint8_t v___x_4245_; 
v___x_4245_ = l_Lean_Expr_isAppOfArity(v_a_4099_, v___x_4242_, v___x_4243_);
v___y_4217_ = v___y_4235_;
v___y_4218_ = v___y_4237_;
v___y_4219_ = v___y_4241_;
v___y_4220_ = v___y_4239_;
v___y_4221_ = v___y_4238_;
v___y_4222_ = v___y_4240_;
v___y_4223_ = v___y_4236_;
v___y_4224_ = v___x_4245_;
goto v___jp_4216_;
}
}
v___jp_4246_:
{
lean_object* v___x_4253_; lean_object* v___x_4254_; lean_object* v___x_4255_; lean_object* v___x_4256_; lean_object* v___x_4257_; lean_object* v___x_4258_; lean_object* v___x_4259_; 
lean_inc_n(v_a_4099_, 2);
lean_inc_n(v_a_4094_, 2);
v___x_4253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4253_, 0, v_a_4094_);
lean_ctor_set(v___x_4253_, 1, v_a_4099_);
v___x_4254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4254_, 0, v_a_4099_);
lean_ctor_set(v___x_4254_, 1, v_a_4094_);
v___x_4255_ = lean_box(0);
v___x_4256_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4256_, 0, v___x_4254_);
lean_ctor_set(v___x_4256_, 1, v___x_4255_);
v___x_4257_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4257_, 0, v___x_4253_);
lean_ctor_set(v___x_4257_, 1, v___x_4256_);
v___x_4258_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_implies_spec__2___closed__0));
v___x_4259_ = lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__4___redArg(v_a_4094_, v___x_4257_, v___x_4258_, v___y_4247_, v___y_4248_, v___y_4249_, v___y_4250_, v___y_4251_, v___y_4252_);
lean_dec_ref_known(v___x_4257_, 2);
if (lean_obj_tag(v___x_4259_) == 0)
{
lean_object* v_a_4260_; lean_object* v___x_4262_; uint8_t v_isShared_4263_; uint8_t v_isSharedCheck_4311_; 
v_a_4260_ = lean_ctor_get(v___x_4259_, 0);
v_isSharedCheck_4311_ = !lean_is_exclusive(v___x_4259_);
if (v_isSharedCheck_4311_ == 0)
{
v___x_4262_ = v___x_4259_;
v_isShared_4263_ = v_isSharedCheck_4311_;
goto v_resetjp_4261_;
}
else
{
lean_inc(v_a_4260_);
lean_dec(v___x_4259_);
v___x_4262_ = lean_box(0);
v_isShared_4263_ = v_isSharedCheck_4311_;
goto v_resetjp_4261_;
}
v_resetjp_4261_:
{
lean_object* v_fst_4264_; 
v_fst_4264_ = lean_ctor_get(v_a_4260_, 0);
lean_inc(v_fst_4264_);
lean_dec(v_a_4260_);
if (lean_obj_tag(v_fst_4264_) == 0)
{
lean_del_object(v___x_4262_);
if (lean_obj_tag(v_a_4094_) == 7)
{
if (lean_obj_tag(v_a_4099_) == 7)
{
lean_object* v_binderType_4265_; lean_object* v_body_4266_; lean_object* v_binderType_4267_; lean_object* v_body_4268_; lean_object* v___x_4269_; 
v_binderType_4265_ = lean_ctor_get(v_a_4094_, 1);
v_body_4266_ = lean_ctor_get(v_a_4094_, 2);
v_binderType_4267_ = lean_ctor_get(v_a_4099_, 1);
v_body_4268_ = lean_ctor_get(v_a_4099_, 2);
lean_inc_ref(v_binderType_4265_);
v___x_4269_ = l_Lean_Meta_isProp(v_binderType_4265_, v___y_4249_, v___y_4250_, v___y_4251_, v___y_4252_);
if (lean_obj_tag(v___x_4269_) == 0)
{
lean_object* v_a_4270_; lean_object* v___x_4271_; 
v_a_4270_ = lean_ctor_get(v___x_4269_, 0);
lean_inc(v_a_4270_);
lean_dec_ref_known(v___x_4269_, 1);
lean_inc_ref(v_binderType_4267_);
v___x_4271_ = l_Lean_Meta_isProp(v_binderType_4267_, v___y_4249_, v___y_4250_, v___y_4251_, v___y_4252_);
if (lean_obj_tag(v___x_4271_) == 0)
{
uint8_t v___x_4272_; 
v___x_4272_ = lean_unbox(v_a_4270_);
if (v___x_4272_ == 0)
{
uint8_t v___x_4273_; 
lean_dec_ref_known(v___x_4271_, 1);
lean_dec(v_a_4171_);
v___x_4273_ = lean_unbox(v_a_4270_);
lean_dec(v_a_4270_);
lean_inc_ref(v_binderType_4267_);
lean_inc_ref(v_binderType_4265_);
lean_inc_ref(v_body_4266_);
lean_inc_ref(v_body_4268_);
v___y_4175_ = v_body_4268_;
v___y_4176_ = v_body_4266_;
v___y_4177_ = v___y_4247_;
v___y_4178_ = v_binderType_4265_;
v___y_4179_ = v_binderType_4267_;
v___y_4180_ = v___y_4248_;
v___y_4181_ = v___y_4249_;
v___y_4182_ = v___y_4250_;
v___y_4183_ = v___y_4252_;
v___y_4184_ = v___y_4251_;
v___y_4185_ = v___x_4273_;
goto v___jp_4174_;
}
else
{
lean_object* v_a_4274_; uint8_t v___x_4275_; 
lean_dec(v_a_4270_);
v_a_4274_ = lean_ctor_get(v___x_4271_, 0);
lean_inc(v_a_4274_);
lean_dec_ref_known(v___x_4271_, 1);
v___x_4275_ = lean_unbox(v_a_4274_);
if (v___x_4275_ == 0)
{
uint8_t v___x_4276_; 
lean_dec(v_a_4171_);
v___x_4276_ = lean_unbox(v_a_4274_);
lean_dec(v_a_4274_);
lean_inc_ref(v_binderType_4267_);
lean_inc_ref(v_binderType_4265_);
lean_inc_ref(v_body_4266_);
lean_inc_ref(v_body_4268_);
v___y_4175_ = v_body_4268_;
v___y_4176_ = v_body_4266_;
v___y_4177_ = v___y_4247_;
v___y_4178_ = v_binderType_4265_;
v___y_4179_ = v_binderType_4267_;
v___y_4180_ = v___y_4248_;
v___y_4181_ = v___y_4249_;
v___y_4182_ = v___y_4250_;
v___y_4183_ = v___y_4252_;
v___y_4184_ = v___y_4251_;
v___y_4185_ = v___x_4276_;
goto v___jp_4174_;
}
else
{
uint8_t v___x_4277_; 
lean_dec(v_a_4274_);
v___x_4277_ = l_Lean_Expr_hasLooseBVars(v_body_4266_);
if (v___x_4277_ == 0)
{
uint8_t v___x_4278_; 
v___x_4278_ = l_Lean_Expr_hasLooseBVars(v_body_4268_);
if (v___x_4278_ == 0)
{
lean_object* v___x_4279_; 
lean_inc_ref(v_body_4268_);
lean_inc_ref(v_binderType_4267_);
lean_inc_ref(v_body_4266_);
lean_inc_ref(v_binderType_4265_);
lean_dec_ref_known(v_a_4099_, 3);
lean_dec_ref_known(v_a_4094_, 3);
lean_dec(v_a_4171_);
v___x_4279_ = lp_vampireReplay_Vampire_Reconstruct_equivNormal(v_binderType_4265_, v_binderType_4267_, v___y_4247_, v___y_4248_, v___y_4249_, v___y_4250_, v___y_4251_, v___y_4252_);
if (lean_obj_tag(v___x_4279_) == 0)
{
lean_object* v_a_4280_; lean_object* v___x_4281_; 
v_a_4280_ = lean_ctor_get(v___x_4279_, 0);
lean_inc(v_a_4280_);
lean_dec_ref_known(v___x_4279_, 1);
v___x_4281_ = lp_vampireReplay_Vampire_Reconstruct_equivNormal(v_body_4266_, v_body_4268_, v___y_4247_, v___y_4248_, v___y_4249_, v___y_4250_, v___y_4251_, v___y_4252_);
if (lean_obj_tag(v___x_4281_) == 0)
{
lean_object* v_a_4282_; lean_object* v___x_4283_; lean_object* v___x_4284_; lean_object* v___x_4285_; lean_object* v___x_4286_; lean_object* v___x_4287_; lean_object* v___x_4288_; 
v_a_4282_ = lean_ctor_get(v___x_4281_, 0);
lean_inc(v_a_4282_);
lean_dec_ref_known(v___x_4281_, 1);
v___x_4283_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__9));
v___x_4284_ = lean_unsigned_to_nat(2u);
v___x_4285_ = lean_mk_empty_array_with_capacity(v___x_4284_);
v___x_4286_ = lean_array_push(v___x_4285_, v_a_4280_);
v___x_4287_ = lean_array_push(v___x_4286_, v_a_4282_);
v___x_4288_ = l_Lean_Meta_mkAppM(v___x_4283_, v___x_4287_, v___y_4249_, v___y_4250_, v___y_4251_, v___y_4252_);
return v___x_4288_;
}
else
{
lean_dec(v_a_4280_);
return v___x_4281_;
}
}
else
{
lean_dec_ref(v_body_4268_);
lean_dec_ref(v_body_4266_);
return v___x_4279_;
}
}
else
{
uint8_t v___x_4289_; 
v___x_4289_ = lean_unbox(v_a_4171_);
lean_dec(v_a_4171_);
lean_inc_ref(v_binderType_4267_);
lean_inc_ref(v_binderType_4265_);
lean_inc_ref(v_body_4266_);
lean_inc_ref(v_body_4268_);
v___y_4175_ = v_body_4268_;
v___y_4176_ = v_body_4266_;
v___y_4177_ = v___y_4247_;
v___y_4178_ = v_binderType_4265_;
v___y_4179_ = v_binderType_4267_;
v___y_4180_ = v___y_4248_;
v___y_4181_ = v___y_4249_;
v___y_4182_ = v___y_4250_;
v___y_4183_ = v___y_4252_;
v___y_4184_ = v___y_4251_;
v___y_4185_ = v___x_4289_;
goto v___jp_4174_;
}
}
else
{
uint8_t v___x_4290_; 
v___x_4290_ = lean_unbox(v_a_4171_);
lean_dec(v_a_4171_);
lean_inc_ref(v_binderType_4267_);
lean_inc_ref(v_binderType_4265_);
lean_inc_ref(v_body_4266_);
lean_inc_ref(v_body_4268_);
v___y_4175_ = v_body_4268_;
v___y_4176_ = v_body_4266_;
v___y_4177_ = v___y_4247_;
v___y_4178_ = v_binderType_4265_;
v___y_4179_ = v_binderType_4267_;
v___y_4180_ = v___y_4248_;
v___y_4181_ = v___y_4249_;
v___y_4182_ = v___y_4250_;
v___y_4183_ = v___y_4252_;
v___y_4184_ = v___y_4251_;
v___y_4185_ = v___x_4290_;
goto v___jp_4174_;
}
}
}
}
else
{
lean_object* v_a_4291_; lean_object* v___x_4293_; uint8_t v_isShared_4294_; uint8_t v_isSharedCheck_4298_; 
lean_dec(v_a_4270_);
lean_dec_ref_known(v_a_4099_, 3);
lean_dec_ref_known(v_a_4094_, 3);
lean_dec(v_a_4171_);
v_a_4291_ = lean_ctor_get(v___x_4271_, 0);
v_isSharedCheck_4298_ = !lean_is_exclusive(v___x_4271_);
if (v_isSharedCheck_4298_ == 0)
{
v___x_4293_ = v___x_4271_;
v_isShared_4294_ = v_isSharedCheck_4298_;
goto v_resetjp_4292_;
}
else
{
lean_inc(v_a_4291_);
lean_dec(v___x_4271_);
v___x_4293_ = lean_box(0);
v_isShared_4294_ = v_isSharedCheck_4298_;
goto v_resetjp_4292_;
}
v_resetjp_4292_:
{
lean_object* v___x_4296_; 
if (v_isShared_4294_ == 0)
{
v___x_4296_ = v___x_4293_;
goto v_reusejp_4295_;
}
else
{
lean_object* v_reuseFailAlloc_4297_; 
v_reuseFailAlloc_4297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4297_, 0, v_a_4291_);
v___x_4296_ = v_reuseFailAlloc_4297_;
goto v_reusejp_4295_;
}
v_reusejp_4295_:
{
return v___x_4296_;
}
}
}
}
else
{
lean_object* v_a_4299_; lean_object* v___x_4301_; uint8_t v_isShared_4302_; uint8_t v_isSharedCheck_4306_; 
lean_dec_ref_known(v_a_4099_, 3);
lean_dec_ref_known(v_a_4094_, 3);
lean_dec(v_a_4171_);
v_a_4299_ = lean_ctor_get(v___x_4269_, 0);
v_isSharedCheck_4306_ = !lean_is_exclusive(v___x_4269_);
if (v_isSharedCheck_4306_ == 0)
{
v___x_4301_ = v___x_4269_;
v_isShared_4302_ = v_isSharedCheck_4306_;
goto v_resetjp_4300_;
}
else
{
lean_inc(v_a_4299_);
lean_dec(v___x_4269_);
v___x_4301_ = lean_box(0);
v_isShared_4302_ = v_isSharedCheck_4306_;
goto v_resetjp_4300_;
}
v_resetjp_4300_:
{
lean_object* v___x_4304_; 
if (v_isShared_4302_ == 0)
{
v___x_4304_ = v___x_4301_;
goto v_reusejp_4303_;
}
else
{
lean_object* v_reuseFailAlloc_4305_; 
v_reuseFailAlloc_4305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4305_, 0, v_a_4299_);
v___x_4304_ = v_reuseFailAlloc_4305_;
goto v_reusejp_4303_;
}
v_reusejp_4303_:
{
return v___x_4304_;
}
}
}
}
else
{
v___y_4235_ = v___x_4258_;
v___y_4236_ = v___y_4247_;
v___y_4237_ = v___y_4248_;
v___y_4238_ = v___y_4249_;
v___y_4239_ = v___y_4250_;
v___y_4240_ = v___y_4251_;
v___y_4241_ = v___y_4252_;
goto v___jp_4234_;
}
}
else
{
v___y_4235_ = v___x_4258_;
v___y_4236_ = v___y_4247_;
v___y_4237_ = v___y_4248_;
v___y_4238_ = v___y_4249_;
v___y_4239_ = v___y_4250_;
v___y_4240_ = v___y_4251_;
v___y_4241_ = v___y_4252_;
goto v___jp_4234_;
}
}
else
{
lean_object* v_val_4307_; lean_object* v___x_4309_; 
lean_dec(v_a_4171_);
lean_dec(v_a_4099_);
lean_dec(v_a_4094_);
v_val_4307_ = lean_ctor_get(v_fst_4264_, 0);
lean_inc(v_val_4307_);
lean_dec_ref_known(v_fst_4264_, 1);
if (v_isShared_4263_ == 0)
{
lean_ctor_set(v___x_4262_, 0, v_val_4307_);
v___x_4309_ = v___x_4262_;
goto v_reusejp_4308_;
}
else
{
lean_object* v_reuseFailAlloc_4310_; 
v_reuseFailAlloc_4310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4310_, 0, v_val_4307_);
v___x_4309_ = v_reuseFailAlloc_4310_;
goto v_reusejp_4308_;
}
v_reusejp_4308_:
{
return v___x_4309_;
}
}
}
}
else
{
lean_object* v_a_4312_; lean_object* v___x_4314_; uint8_t v_isShared_4315_; uint8_t v_isSharedCheck_4319_; 
lean_dec(v_a_4171_);
lean_dec(v_a_4099_);
lean_dec(v_a_4094_);
v_a_4312_ = lean_ctor_get(v___x_4259_, 0);
v_isSharedCheck_4319_ = !lean_is_exclusive(v___x_4259_);
if (v_isSharedCheck_4319_ == 0)
{
v___x_4314_ = v___x_4259_;
v_isShared_4315_ = v_isSharedCheck_4319_;
goto v_resetjp_4313_;
}
else
{
lean_inc(v_a_4312_);
lean_dec(v___x_4259_);
v___x_4314_ = lean_box(0);
v_isShared_4315_ = v_isSharedCheck_4319_;
goto v_resetjp_4313_;
}
v_resetjp_4313_:
{
lean_object* v___x_4317_; 
if (v_isShared_4315_ == 0)
{
v___x_4317_ = v___x_4314_;
goto v_reusejp_4316_;
}
else
{
lean_object* v_reuseFailAlloc_4318_; 
v_reuseFailAlloc_4318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4318_, 0, v_a_4312_);
v___x_4317_ = v_reuseFailAlloc_4318_;
goto v_reusejp_4316_;
}
v_reusejp_4316_:
{
return v___x_4317_;
}
}
}
}
v___jp_4320_:
{
if (lean_obj_tag(v___y_4324_) == 1)
{
lean_object* v_val_4329_; 
v_val_4329_ = lean_ctor_get(v___y_4324_, 0);
lean_inc(v_val_4329_);
lean_dec_ref_known(v___y_4324_, 1);
if (lean_obj_tag(v___y_4328_) == 1)
{
lean_object* v_val_4330_; lean_object* v_fst_4331_; lean_object* v_snd_4332_; lean_object* v_fst_4333_; lean_object* v_snd_4334_; lean_object* v___x_4335_; 
lean_dec(v_a_4171_);
lean_dec(v_a_4099_);
lean_dec(v_a_4094_);
v_val_4330_ = lean_ctor_get(v___y_4328_, 0);
lean_inc(v_val_4330_);
lean_dec_ref_known(v___y_4328_, 1);
v_fst_4331_ = lean_ctor_get(v_val_4329_, 0);
lean_inc(v_fst_4331_);
v_snd_4332_ = lean_ctor_get(v_val_4329_, 1);
lean_inc(v_snd_4332_);
lean_dec(v_val_4329_);
v_fst_4333_ = lean_ctor_get(v_val_4330_, 0);
lean_inc(v_fst_4333_);
v_snd_4334_ = lean_ctor_get(v_val_4330_, 1);
lean_inc(v_snd_4334_);
lean_dec(v_val_4330_);
v___x_4335_ = lp_vampireReplay_Vampire_Reconstruct_equivNormal(v_fst_4331_, v_fst_4333_, v___y_4323_, v___y_4322_, v___y_4325_, v___y_4326_, v___y_4327_, v___y_4321_);
if (lean_obj_tag(v___x_4335_) == 0)
{
lean_object* v_a_4336_; lean_object* v___x_4337_; 
v_a_4336_ = lean_ctor_get(v___x_4335_, 0);
lean_inc(v_a_4336_);
lean_dec_ref_known(v___x_4335_, 1);
v___x_4337_ = lp_vampireReplay_Vampire_Reconstruct_equivNormal(v_snd_4332_, v_snd_4334_, v___y_4323_, v___y_4322_, v___y_4325_, v___y_4326_, v___y_4327_, v___y_4321_);
if (lean_obj_tag(v___x_4337_) == 0)
{
lean_object* v_a_4338_; lean_object* v___x_4339_; lean_object* v___x_4340_; lean_object* v___x_4341_; lean_object* v___x_4342_; lean_object* v___x_4343_; lean_object* v___x_4344_; 
v_a_4338_ = lean_ctor_get(v___x_4337_, 0);
lean_inc(v_a_4338_);
lean_dec_ref_known(v___x_4337_, 1);
v___x_4339_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__11));
v___x_4340_ = lean_unsigned_to_nat(2u);
v___x_4341_ = lean_mk_empty_array_with_capacity(v___x_4340_);
v___x_4342_ = lean_array_push(v___x_4341_, v_a_4336_);
v___x_4343_ = lean_array_push(v___x_4342_, v_a_4338_);
v___x_4344_ = l_Lean_Meta_mkAppM(v___x_4339_, v___x_4343_, v___y_4325_, v___y_4326_, v___y_4327_, v___y_4321_);
return v___x_4344_;
}
else
{
lean_dec(v_a_4336_);
return v___x_4337_;
}
}
else
{
lean_dec(v_snd_4334_);
lean_dec(v_snd_4332_);
return v___x_4335_;
}
}
else
{
lean_dec(v_val_4329_);
lean_dec(v___y_4328_);
v___y_4247_ = v___y_4323_;
v___y_4248_ = v___y_4322_;
v___y_4249_ = v___y_4325_;
v___y_4250_ = v___y_4326_;
v___y_4251_ = v___y_4327_;
v___y_4252_ = v___y_4321_;
goto v___jp_4246_;
}
}
else
{
lean_dec(v___y_4328_);
lean_dec(v___y_4324_);
v___y_4247_ = v___y_4323_;
v___y_4248_ = v___y_4322_;
v___y_4249_ = v___y_4325_;
v___y_4250_ = v___y_4326_;
v___y_4251_ = v___y_4327_;
v___y_4252_ = v___y_4321_;
goto v___jp_4246_;
}
}
v___jp_4345_:
{
lean_object* v___x_4353_; lean_object* v___x_4354_; uint8_t v___x_4355_; 
v___x_4353_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__10));
v___x_4354_ = lean_unsigned_to_nat(2u);
v___x_4355_ = l_Lean_Expr_isAppOfArity(v_a_4099_, v___x_4353_, v___x_4354_);
if (v___x_4355_ == 0)
{
lean_object* v___x_4356_; 
lean_del_object(v___x_4101_);
v___x_4356_ = lean_box(0);
v___y_4321_ = v___y_4346_;
v___y_4322_ = v___y_4347_;
v___y_4323_ = v___y_4348_;
v___y_4324_ = v___y_4352_;
v___y_4325_ = v___y_4349_;
v___y_4326_ = v___y_4350_;
v___y_4327_ = v___y_4351_;
v___y_4328_ = v___x_4356_;
goto v___jp_4320_;
}
else
{
lean_object* v___x_4357_; lean_object* v___x_4358_; lean_object* v___x_4359_; lean_object* v___x_4360_; lean_object* v___x_4362_; 
v___x_4357_ = l_Lean_Expr_appFn_x21(v_a_4099_);
v___x_4358_ = l_Lean_Expr_appArg_x21(v___x_4357_);
lean_dec_ref(v___x_4357_);
v___x_4359_ = l_Lean_Expr_appArg_x21(v_a_4099_);
v___x_4360_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4360_, 0, v___x_4358_);
lean_ctor_set(v___x_4360_, 1, v___x_4359_);
if (v_isShared_4102_ == 0)
{
lean_ctor_set_tag(v___x_4101_, 1);
lean_ctor_set(v___x_4101_, 0, v___x_4360_);
v___x_4362_ = v___x_4101_;
goto v_reusejp_4361_;
}
else
{
lean_object* v_reuseFailAlloc_4363_; 
v_reuseFailAlloc_4363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4363_, 0, v___x_4360_);
v___x_4362_ = v_reuseFailAlloc_4363_;
goto v_reusejp_4361_;
}
v_reusejp_4361_:
{
v___y_4321_ = v___y_4346_;
v___y_4322_ = v___y_4347_;
v___y_4323_ = v___y_4348_;
v___y_4324_ = v___y_4352_;
v___y_4325_ = v___y_4349_;
v___y_4326_ = v___y_4350_;
v___y_4327_ = v___y_4351_;
v___y_4328_ = v___x_4362_;
goto v___jp_4320_;
}
}
}
v___jp_4364_:
{
lean_object* v___x_4371_; lean_object* v___x_4372_; uint8_t v___x_4373_; 
v___x_4371_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__10));
v___x_4372_ = lean_unsigned_to_nat(2u);
v___x_4373_ = l_Lean_Expr_isAppOfArity(v_a_4094_, v___x_4371_, v___x_4372_);
if (v___x_4373_ == 0)
{
lean_object* v___x_4374_; 
lean_del_object(v___x_4096_);
v___x_4374_ = lean_box(0);
v___y_4346_ = v___y_4370_;
v___y_4347_ = v___y_4366_;
v___y_4348_ = v___y_4365_;
v___y_4349_ = v___y_4367_;
v___y_4350_ = v___y_4368_;
v___y_4351_ = v___y_4369_;
v___y_4352_ = v___x_4374_;
goto v___jp_4345_;
}
else
{
lean_object* v___x_4375_; lean_object* v___x_4376_; lean_object* v___x_4377_; lean_object* v___x_4378_; lean_object* v___x_4380_; 
v___x_4375_ = l_Lean_Expr_appFn_x21(v_a_4094_);
v___x_4376_ = l_Lean_Expr_appArg_x21(v___x_4375_);
lean_dec_ref(v___x_4375_);
v___x_4377_ = l_Lean_Expr_appArg_x21(v_a_4094_);
v___x_4378_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4378_, 0, v___x_4376_);
lean_ctor_set(v___x_4378_, 1, v___x_4377_);
if (v_isShared_4097_ == 0)
{
lean_ctor_set_tag(v___x_4096_, 1);
lean_ctor_set(v___x_4096_, 0, v___x_4378_);
v___x_4380_ = v___x_4096_;
goto v_reusejp_4379_;
}
else
{
lean_object* v_reuseFailAlloc_4381_; 
v_reuseFailAlloc_4381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4381_, 0, v___x_4378_);
v___x_4380_ = v_reuseFailAlloc_4381_;
goto v_reusejp_4379_;
}
v_reusejp_4379_:
{
v___y_4346_ = v___y_4370_;
v___y_4347_ = v___y_4366_;
v___y_4348_ = v___y_4365_;
v___y_4349_ = v___y_4367_;
v___y_4350_ = v___y_4368_;
v___y_4351_ = v___y_4369_;
v___y_4352_ = v___x_4380_;
goto v___jp_4345_;
}
}
}
v___jp_4382_:
{
if (lean_obj_tag(v___y_4384_) == 1)
{
if (lean_obj_tag(v___y_4390_) == 1)
{
lean_object* v_val_4391_; lean_object* v_val_4392_; lean_object* v___x_4393_; 
lean_dec(v_a_4171_);
lean_del_object(v___x_4101_);
lean_dec(v_a_4099_);
lean_del_object(v___x_4096_);
lean_dec(v_a_4094_);
v_val_4391_ = lean_ctor_get(v___y_4384_, 0);
lean_inc(v_val_4391_);
lean_dec_ref_known(v___y_4384_, 1);
v_val_4392_ = lean_ctor_get(v___y_4390_, 0);
lean_inc(v_val_4392_);
lean_dec_ref_known(v___y_4390_, 1);
v___x_4393_ = lp_vampireReplay_Vampire_Reconstruct_equivNormal(v_val_4391_, v_val_4392_, v___y_4389_, v___y_4387_, v___y_4388_, v___y_4383_, v___y_4385_, v___y_4386_);
if (lean_obj_tag(v___x_4393_) == 0)
{
lean_object* v_a_4394_; lean_object* v___x_4395_; lean_object* v___x_4396_; lean_object* v___x_4397_; lean_object* v___x_4398_; lean_object* v___x_4399_; 
v_a_4394_ = lean_ctor_get(v___x_4393_, 0);
lean_inc(v_a_4394_);
lean_dec_ref_known(v___x_4393_, 1);
v___x_4395_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__13));
v___x_4396_ = lean_unsigned_to_nat(1u);
v___x_4397_ = lean_mk_empty_array_with_capacity(v___x_4396_);
v___x_4398_ = lean_array_push(v___x_4397_, v_a_4394_);
v___x_4399_ = l_Lean_Meta_mkAppM(v___x_4395_, v___x_4398_, v___y_4388_, v___y_4383_, v___y_4385_, v___y_4386_);
return v___x_4399_;
}
else
{
return v___x_4393_;
}
}
else
{
lean_dec_ref_known(v___y_4384_, 1);
lean_dec(v___y_4390_);
v___y_4365_ = v___y_4389_;
v___y_4366_ = v___y_4387_;
v___y_4367_ = v___y_4388_;
v___y_4368_ = v___y_4383_;
v___y_4369_ = v___y_4385_;
v___y_4370_ = v___y_4386_;
goto v___jp_4364_;
}
}
else
{
lean_dec(v___y_4390_);
lean_dec(v___y_4384_);
v___y_4365_ = v___y_4389_;
v___y_4366_ = v___y_4387_;
v___y_4367_ = v___y_4388_;
v___y_4368_ = v___y_4383_;
v___y_4369_ = v___y_4385_;
v___y_4370_ = v___y_4386_;
goto v___jp_4364_;
}
}
v___jp_4400_:
{
lean_object* v___x_4408_; lean_object* v___x_4409_; uint8_t v___x_4410_; 
v___x_4408_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__12));
v___x_4409_ = lean_unsigned_to_nat(1u);
v___x_4410_ = l_Lean_Expr_isAppOfArity(v_a_4099_, v___x_4408_, v___x_4409_);
if (v___x_4410_ == 0)
{
lean_object* v___x_4411_; 
v___x_4411_ = lean_box(0);
v___y_4383_ = v___y_4401_;
v___y_4384_ = v___y_4407_;
v___y_4385_ = v___y_4402_;
v___y_4386_ = v___y_4403_;
v___y_4387_ = v___y_4404_;
v___y_4388_ = v___y_4406_;
v___y_4389_ = v___y_4405_;
v___y_4390_ = v___x_4411_;
goto v___jp_4382_;
}
else
{
lean_object* v___x_4412_; lean_object* v___x_4413_; 
v___x_4412_ = l_Lean_Expr_appArg_x21(v_a_4099_);
v___x_4413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4413_, 0, v___x_4412_);
v___y_4383_ = v___y_4401_;
v___y_4384_ = v___y_4407_;
v___y_4385_ = v___y_4402_;
v___y_4386_ = v___y_4403_;
v___y_4387_ = v___y_4404_;
v___y_4388_ = v___y_4406_;
v___y_4389_ = v___y_4405_;
v___y_4390_ = v___x_4413_;
goto v___jp_4382_;
}
}
v___jp_4414_:
{
lean_object* v___x_4421_; lean_object* v___x_4422_; uint8_t v___x_4423_; 
v___x_4421_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__12));
v___x_4422_ = lean_unsigned_to_nat(1u);
v___x_4423_ = l_Lean_Expr_isAppOfArity(v_a_4094_, v___x_4421_, v___x_4422_);
if (v___x_4423_ == 0)
{
lean_object* v___x_4424_; 
v___x_4424_ = lean_box(0);
v___y_4401_ = v___y_4418_;
v___y_4402_ = v___y_4419_;
v___y_4403_ = v___y_4420_;
v___y_4404_ = v___y_4416_;
v___y_4405_ = v___y_4415_;
v___y_4406_ = v___y_4417_;
v___y_4407_ = v___x_4424_;
goto v___jp_4400_;
}
else
{
lean_object* v___x_4425_; lean_object* v___x_4426_; 
v___x_4425_ = l_Lean_Expr_appArg_x21(v_a_4094_);
v___x_4426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4426_, 0, v___x_4425_);
v___y_4401_ = v___y_4418_;
v___y_4402_ = v___y_4419_;
v___y_4403_ = v___y_4420_;
v___y_4404_ = v___y_4416_;
v___y_4405_ = v___y_4415_;
v___y_4406_ = v___y_4417_;
v___y_4407_ = v___x_4426_;
goto v___jp_4400_;
}
}
v___jp_4427_:
{
lean_object* v___x_4434_; lean_object* v___x_4435_; uint8_t v___x_4436_; 
v___x_4434_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__12));
v___x_4435_ = lean_unsigned_to_nat(1u);
v___x_4436_ = l_Lean_Expr_isAppOfArity(v_a_4099_, v___x_4434_, v___x_4435_);
if (v___x_4436_ == 0)
{
v___y_4415_ = v___y_4428_;
v___y_4416_ = v___y_4429_;
v___y_4417_ = v___y_4430_;
v___y_4418_ = v___y_4431_;
v___y_4419_ = v___y_4432_;
v___y_4420_ = v___y_4433_;
goto v___jp_4414_;
}
else
{
lean_object* v___x_4437_; uint8_t v___x_4438_; 
v___x_4437_ = l_Lean_Expr_appArg_x21(v_a_4099_);
v___x_4438_ = l_Lean_Expr_isAppOfArity(v___x_4437_, v___x_4434_, v___x_4435_);
if (v___x_4438_ == 0)
{
lean_dec_ref(v___x_4437_);
v___y_4415_ = v___y_4428_;
v___y_4416_ = v___y_4429_;
v___y_4417_ = v___y_4430_;
v___y_4418_ = v___y_4431_;
v___y_4419_ = v___y_4432_;
v___y_4420_ = v___y_4433_;
goto v___jp_4414_;
}
else
{
lean_object* v___x_4439_; lean_object* v___x_4440_; lean_object* v___x_4441_; 
lean_dec(v_a_4171_);
lean_del_object(v___x_4101_);
lean_dec(v_a_4099_);
lean_del_object(v___x_4096_);
v___x_4439_ = l_Lean_Expr_appArg_x21(v___x_4437_);
lean_dec_ref(v___x_4437_);
lean_inc_ref(v___x_4439_);
v___x_4440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4440_, 0, v___x_4439_);
v___x_4441_ = lp_vampireReplay_Vampire_Reconstruct_equivNormal(v_a_4094_, v___x_4439_, v___y_4428_, v___y_4429_, v___y_4430_, v___y_4431_, v___y_4432_, v___y_4433_);
if (lean_obj_tag(v___x_4441_) == 0)
{
lean_object* v_a_4442_; lean_object* v___x_4443_; lean_object* v___x_4444_; lean_object* v___x_4445_; lean_object* v___x_4446_; 
v_a_4442_ = lean_ctor_get(v___x_4441_, 0);
lean_inc(v_a_4442_);
lean_dec_ref_known(v___x_4441_, 1);
v___x_4443_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__25));
v___x_4444_ = lean_mk_empty_array_with_capacity(v___x_4435_);
lean_inc_ref(v___x_4444_);
v___x_4445_ = lean_array_push(v___x_4444_, v___x_4440_);
v___x_4446_ = l_Lean_Meta_mkAppOptM(v___x_4443_, v___x_4445_, v___y_4430_, v___y_4431_, v___y_4432_, v___y_4433_);
if (lean_obj_tag(v___x_4446_) == 0)
{
lean_object* v_a_4447_; lean_object* v___x_4448_; lean_object* v___x_4449_; lean_object* v___x_4450_; 
v_a_4447_ = lean_ctor_get(v___x_4446_, 0);
lean_inc(v_a_4447_);
lean_dec_ref_known(v___x_4446_, 1);
v___x_4448_ = ((lean_object*)(lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__4___redArg___closed__0));
v___x_4449_ = lean_array_push(v___x_4444_, v_a_4447_);
v___x_4450_ = l_Lean_Meta_mkAppM(v___x_4448_, v___x_4449_, v___y_4430_, v___y_4431_, v___y_4432_, v___y_4433_);
if (lean_obj_tag(v___x_4450_) == 0)
{
lean_object* v_a_4451_; lean_object* v___x_4452_; lean_object* v___x_4453_; lean_object* v___x_4454_; lean_object* v___x_4455_; lean_object* v___x_4456_; lean_object* v___x_4457_; 
v_a_4451_ = lean_ctor_get(v___x_4450_, 0);
lean_inc(v_a_4451_);
lean_dec_ref_known(v___x_4450_, 1);
v___x_4452_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__1));
v___x_4453_ = lean_unsigned_to_nat(2u);
v___x_4454_ = lean_mk_empty_array_with_capacity(v___x_4453_);
v___x_4455_ = lean_array_push(v___x_4454_, v_a_4442_);
v___x_4456_ = lean_array_push(v___x_4455_, v_a_4451_);
v___x_4457_ = l_Lean_Meta_mkAppM(v___x_4452_, v___x_4456_, v___y_4430_, v___y_4431_, v___y_4432_, v___y_4433_);
return v___x_4457_;
}
else
{
lean_dec(v_a_4442_);
return v___x_4450_;
}
}
else
{
lean_dec_ref(v___x_4444_);
lean_dec(v_a_4442_);
return v___x_4446_;
}
}
else
{
lean_dec_ref_known(v___x_4440_, 1);
return v___x_4441_;
}
}
}
}
v___jp_4458_:
{
lean_object* v___x_4465_; lean_object* v___x_4466_; uint8_t v___x_4467_; 
v___x_4465_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__12));
v___x_4466_ = lean_unsigned_to_nat(1u);
v___x_4467_ = l_Lean_Expr_isAppOfArity(v_a_4094_, v___x_4465_, v___x_4466_);
if (v___x_4467_ == 0)
{
v___y_4428_ = v___y_4459_;
v___y_4429_ = v___y_4460_;
v___y_4430_ = v___y_4461_;
v___y_4431_ = v___y_4462_;
v___y_4432_ = v___y_4463_;
v___y_4433_ = v___y_4464_;
goto v___jp_4427_;
}
else
{
lean_object* v___x_4468_; uint8_t v___x_4469_; 
v___x_4468_ = l_Lean_Expr_appArg_x21(v_a_4094_);
v___x_4469_ = l_Lean_Expr_isAppOfArity(v___x_4468_, v___x_4465_, v___x_4466_);
if (v___x_4469_ == 0)
{
lean_dec_ref(v___x_4468_);
v___y_4428_ = v___y_4459_;
v___y_4429_ = v___y_4460_;
v___y_4430_ = v___y_4461_;
v___y_4431_ = v___y_4462_;
v___y_4432_ = v___y_4463_;
v___y_4433_ = v___y_4464_;
goto v___jp_4427_;
}
else
{
lean_object* v___x_4470_; lean_object* v___x_4471_; lean_object* v___x_4472_; lean_object* v___x_4473_; lean_object* v___x_4474_; lean_object* v___x_4475_; 
lean_dec(v_a_4171_);
lean_del_object(v___x_4101_);
lean_del_object(v___x_4096_);
lean_dec(v_a_4094_);
v___x_4470_ = l_Lean_Expr_appArg_x21(v___x_4468_);
lean_dec_ref(v___x_4468_);
lean_inc_ref(v___x_4470_);
v___x_4471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4471_, 0, v___x_4470_);
v___x_4472_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__25));
v___x_4473_ = lean_mk_empty_array_with_capacity(v___x_4466_);
v___x_4474_ = lean_array_push(v___x_4473_, v___x_4471_);
v___x_4475_ = l_Lean_Meta_mkAppOptM(v___x_4472_, v___x_4474_, v___y_4461_, v___y_4462_, v___y_4463_, v___y_4464_);
if (lean_obj_tag(v___x_4475_) == 0)
{
lean_object* v_a_4476_; lean_object* v___x_4477_; 
v_a_4476_ = lean_ctor_get(v___x_4475_, 0);
lean_inc(v_a_4476_);
lean_dec_ref_known(v___x_4475_, 1);
v___x_4477_ = lp_vampireReplay_Vampire_Reconstruct_equivNormal(v___x_4470_, v_a_4099_, v___y_4459_, v___y_4460_, v___y_4461_, v___y_4462_, v___y_4463_, v___y_4464_);
if (lean_obj_tag(v___x_4477_) == 0)
{
lean_object* v_a_4478_; lean_object* v___x_4479_; lean_object* v___x_4480_; lean_object* v___x_4481_; lean_object* v___x_4482_; lean_object* v___x_4483_; lean_object* v___x_4484_; 
v_a_4478_ = lean_ctor_get(v___x_4477_, 0);
lean_inc(v_a_4478_);
lean_dec_ref_known(v___x_4477_, 1);
v___x_4479_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__1));
v___x_4480_ = lean_unsigned_to_nat(2u);
v___x_4481_ = lean_mk_empty_array_with_capacity(v___x_4480_);
v___x_4482_ = lean_array_push(v___x_4481_, v_a_4476_);
v___x_4483_ = lean_array_push(v___x_4482_, v_a_4478_);
v___x_4484_ = l_Lean_Meta_mkAppM(v___x_4479_, v___x_4483_, v___y_4461_, v___y_4462_, v___y_4463_, v___y_4464_);
return v___x_4484_;
}
else
{
lean_dec(v_a_4476_);
return v___x_4477_;
}
}
else
{
lean_dec_ref(v___x_4470_);
lean_dec(v_a_4099_);
return v___x_4475_;
}
}
}
}
v___jp_4485_:
{
if (lean_obj_tag(v___y_4486_) == 1)
{
lean_object* v_val_4488_; lean_object* v___x_4490_; uint8_t v_isShared_4491_; uint8_t v_isSharedCheck_4540_; 
v_val_4488_ = lean_ctor_get(v___y_4486_, 0);
v_isSharedCheck_4540_ = !lean_is_exclusive(v___y_4486_);
if (v_isSharedCheck_4540_ == 0)
{
v___x_4490_ = v___y_4486_;
v_isShared_4491_ = v_isSharedCheck_4540_;
goto v_resetjp_4489_;
}
else
{
lean_inc(v_val_4488_);
lean_dec(v___y_4486_);
v___x_4490_ = lean_box(0);
v_isShared_4491_ = v_isSharedCheck_4540_;
goto v_resetjp_4489_;
}
v_resetjp_4489_:
{
lean_object* v_snd_4492_; 
v_snd_4492_ = lean_ctor_get(v_val_4488_, 1);
lean_inc(v_snd_4492_);
if (lean_obj_tag(v___y_4487_) == 1)
{
lean_object* v_val_4493_; lean_object* v___x_4495_; uint8_t v_isShared_4496_; uint8_t v_isSharedCheck_4539_; 
v_val_4493_ = lean_ctor_get(v___y_4487_, 0);
v_isSharedCheck_4539_ = !lean_is_exclusive(v___y_4487_);
if (v_isSharedCheck_4539_ == 0)
{
v___x_4495_ = v___y_4487_;
v_isShared_4496_ = v_isSharedCheck_4539_;
goto v_resetjp_4494_;
}
else
{
lean_inc(v_val_4493_);
lean_dec(v___y_4487_);
v___x_4495_ = lean_box(0);
v_isShared_4496_ = v_isSharedCheck_4539_;
goto v_resetjp_4494_;
}
v_resetjp_4494_:
{
lean_object* v_snd_4497_; lean_object* v_fst_4498_; lean_object* v_fst_4499_; lean_object* v_snd_4500_; lean_object* v_fst_4501_; lean_object* v_snd_4502_; lean_object* v___x_4503_; 
v_snd_4497_ = lean_ctor_get(v_val_4493_, 1);
lean_inc(v_snd_4497_);
lean_dec(v_val_4493_);
v_fst_4498_ = lean_ctor_get(v_val_4488_, 0);
lean_inc(v_fst_4498_);
lean_dec(v_val_4488_);
v_fst_4499_ = lean_ctor_get(v_snd_4492_, 0);
lean_inc_n(v_fst_4499_, 2);
v_snd_4500_ = lean_ctor_get(v_snd_4492_, 1);
lean_inc(v_snd_4500_);
lean_dec(v_snd_4492_);
v_fst_4501_ = lean_ctor_get(v_snd_4497_, 0);
lean_inc(v_fst_4501_);
v_snd_4502_ = lean_ctor_get(v_snd_4497_, 1);
lean_inc(v_snd_4502_);
lean_dec(v_snd_4497_);
v___x_4503_ = l_Lean_Meta_isExprDefEq(v_fst_4499_, v_snd_4502_, v_a_4077_, v_a_4078_, v_a_4079_, v_a_4080_);
if (lean_obj_tag(v___x_4503_) == 0)
{
lean_object* v_a_4504_; lean_object* v___x_4505_; 
v_a_4504_ = lean_ctor_get(v___x_4503_, 0);
lean_inc(v_a_4504_);
lean_dec_ref_known(v___x_4503_, 1);
lean_inc(v_snd_4500_);
v___x_4505_ = l_Lean_Meta_isExprDefEq(v_snd_4500_, v_fst_4501_, v_a_4077_, v_a_4078_, v_a_4079_, v_a_4080_);
if (lean_obj_tag(v___x_4505_) == 0)
{
uint8_t v___x_4506_; 
v___x_4506_ = lean_unbox(v_a_4504_);
lean_dec(v_a_4504_);
if (v___x_4506_ == 0)
{
lean_dec_ref_known(v___x_4505_, 1);
lean_dec(v_snd_4500_);
lean_dec(v_fst_4499_);
lean_dec(v_fst_4498_);
lean_del_object(v___x_4495_);
lean_del_object(v___x_4490_);
v___y_4459_ = v_a_4075_;
v___y_4460_ = v_a_4076_;
v___y_4461_ = v_a_4077_;
v___y_4462_ = v_a_4078_;
v___y_4463_ = v_a_4079_;
v___y_4464_ = v_a_4080_;
goto v___jp_4458_;
}
else
{
lean_object* v_a_4507_; uint8_t v___x_4508_; 
v_a_4507_ = lean_ctor_get(v___x_4505_, 0);
lean_inc(v_a_4507_);
lean_dec_ref_known(v___x_4505_, 1);
v___x_4508_ = lean_unbox(v_a_4507_);
lean_dec(v_a_4507_);
if (v___x_4508_ == 0)
{
lean_dec(v_snd_4500_);
lean_dec(v_fst_4499_);
lean_dec(v_fst_4498_);
lean_del_object(v___x_4495_);
lean_del_object(v___x_4490_);
v___y_4459_ = v_a_4075_;
v___y_4460_ = v_a_4076_;
v___y_4461_ = v_a_4077_;
v___y_4462_ = v_a_4078_;
v___y_4463_ = v_a_4079_;
v___y_4464_ = v_a_4080_;
goto v___jp_4458_;
}
else
{
lean_object* v___x_4509_; lean_object* v___x_4511_; 
lean_dec(v_a_4171_);
lean_del_object(v___x_4101_);
lean_dec(v_a_4099_);
lean_del_object(v___x_4096_);
lean_dec(v_a_4094_);
v___x_4509_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__15));
if (v_isShared_4496_ == 0)
{
lean_ctor_set(v___x_4495_, 0, v_fst_4498_);
v___x_4511_ = v___x_4495_;
goto v_reusejp_4510_;
}
else
{
lean_object* v_reuseFailAlloc_4522_; 
v_reuseFailAlloc_4522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4522_, 0, v_fst_4498_);
v___x_4511_ = v_reuseFailAlloc_4522_;
goto v_reusejp_4510_;
}
v_reusejp_4510_:
{
lean_object* v___x_4513_; 
if (v_isShared_4491_ == 0)
{
lean_ctor_set(v___x_4490_, 0, v_fst_4499_);
v___x_4513_ = v___x_4490_;
goto v_reusejp_4512_;
}
else
{
lean_object* v_reuseFailAlloc_4521_; 
v_reuseFailAlloc_4521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4521_, 0, v_fst_4499_);
v___x_4513_ = v_reuseFailAlloc_4521_;
goto v_reusejp_4512_;
}
v_reusejp_4512_:
{
lean_object* v___x_4514_; lean_object* v___x_4515_; lean_object* v___x_4516_; lean_object* v___x_4517_; lean_object* v___x_4518_; lean_object* v___x_4519_; lean_object* v___x_4520_; 
v___x_4514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4514_, 0, v_snd_4500_);
v___x_4515_ = lean_unsigned_to_nat(3u);
v___x_4516_ = lean_mk_empty_array_with_capacity(v___x_4515_);
v___x_4517_ = lean_array_push(v___x_4516_, v___x_4511_);
v___x_4518_ = lean_array_push(v___x_4517_, v___x_4513_);
v___x_4519_ = lean_array_push(v___x_4518_, v___x_4514_);
v___x_4520_ = l_Lean_Meta_mkAppOptM(v___x_4509_, v___x_4519_, v_a_4077_, v_a_4078_, v_a_4079_, v_a_4080_);
return v___x_4520_;
}
}
}
}
}
else
{
lean_object* v_a_4523_; lean_object* v___x_4525_; uint8_t v_isShared_4526_; uint8_t v_isSharedCheck_4530_; 
lean_dec(v_a_4504_);
lean_dec(v_snd_4500_);
lean_dec(v_fst_4499_);
lean_dec(v_fst_4498_);
lean_del_object(v___x_4495_);
lean_del_object(v___x_4490_);
lean_dec(v_a_4171_);
lean_del_object(v___x_4101_);
lean_dec(v_a_4099_);
lean_del_object(v___x_4096_);
lean_dec(v_a_4094_);
v_a_4523_ = lean_ctor_get(v___x_4505_, 0);
v_isSharedCheck_4530_ = !lean_is_exclusive(v___x_4505_);
if (v_isSharedCheck_4530_ == 0)
{
v___x_4525_ = v___x_4505_;
v_isShared_4526_ = v_isSharedCheck_4530_;
goto v_resetjp_4524_;
}
else
{
lean_inc(v_a_4523_);
lean_dec(v___x_4505_);
v___x_4525_ = lean_box(0);
v_isShared_4526_ = v_isSharedCheck_4530_;
goto v_resetjp_4524_;
}
v_resetjp_4524_:
{
lean_object* v___x_4528_; 
if (v_isShared_4526_ == 0)
{
v___x_4528_ = v___x_4525_;
goto v_reusejp_4527_;
}
else
{
lean_object* v_reuseFailAlloc_4529_; 
v_reuseFailAlloc_4529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4529_, 0, v_a_4523_);
v___x_4528_ = v_reuseFailAlloc_4529_;
goto v_reusejp_4527_;
}
v_reusejp_4527_:
{
return v___x_4528_;
}
}
}
}
else
{
lean_object* v_a_4531_; lean_object* v___x_4533_; uint8_t v_isShared_4534_; uint8_t v_isSharedCheck_4538_; 
lean_dec(v_fst_4501_);
lean_dec(v_snd_4500_);
lean_dec(v_fst_4499_);
lean_dec(v_fst_4498_);
lean_del_object(v___x_4495_);
lean_del_object(v___x_4490_);
lean_dec(v_a_4171_);
lean_del_object(v___x_4101_);
lean_dec(v_a_4099_);
lean_del_object(v___x_4096_);
lean_dec(v_a_4094_);
v_a_4531_ = lean_ctor_get(v___x_4503_, 0);
v_isSharedCheck_4538_ = !lean_is_exclusive(v___x_4503_);
if (v_isSharedCheck_4538_ == 0)
{
v___x_4533_ = v___x_4503_;
v_isShared_4534_ = v_isSharedCheck_4538_;
goto v_resetjp_4532_;
}
else
{
lean_inc(v_a_4531_);
lean_dec(v___x_4503_);
v___x_4533_ = lean_box(0);
v_isShared_4534_ = v_isSharedCheck_4538_;
goto v_resetjp_4532_;
}
v_resetjp_4532_:
{
lean_object* v___x_4536_; 
if (v_isShared_4534_ == 0)
{
v___x_4536_ = v___x_4533_;
goto v_reusejp_4535_;
}
else
{
lean_object* v_reuseFailAlloc_4537_; 
v_reuseFailAlloc_4537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4537_, 0, v_a_4531_);
v___x_4536_ = v_reuseFailAlloc_4537_;
goto v_reusejp_4535_;
}
v_reusejp_4535_:
{
return v___x_4536_;
}
}
}
}
}
else
{
lean_dec(v_snd_4492_);
lean_del_object(v___x_4490_);
lean_dec(v_val_4488_);
lean_dec(v___y_4487_);
v___y_4459_ = v_a_4075_;
v___y_4460_ = v_a_4076_;
v___y_4461_ = v_a_4077_;
v___y_4462_ = v_a_4078_;
v___y_4463_ = v_a_4079_;
v___y_4464_ = v_a_4080_;
goto v___jp_4458_;
}
}
}
else
{
lean_dec(v___y_4487_);
lean_dec(v___y_4486_);
v___y_4459_ = v_a_4075_;
v___y_4460_ = v_a_4076_;
v___y_4461_ = v_a_4077_;
v___y_4462_ = v_a_4078_;
v___y_4463_ = v_a_4079_;
v___y_4464_ = v_a_4080_;
goto v___jp_4458_;
}
}
v___jp_4541_:
{
lean_object* v___x_4543_; lean_object* v___x_4544_; uint8_t v___x_4545_; 
v___x_4543_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___closed__3));
v___x_4544_ = lean_unsigned_to_nat(3u);
v___x_4545_ = l_Lean_Expr_isAppOfArity(v_a_4099_, v___x_4543_, v___x_4544_);
if (v___x_4545_ == 0)
{
lean_object* v___x_4546_; 
v___x_4546_ = lean_box(0);
v___y_4486_ = v___y_4542_;
v___y_4487_ = v___x_4546_;
goto v___jp_4485_;
}
else
{
lean_object* v___x_4547_; lean_object* v___x_4548_; lean_object* v___x_4549_; lean_object* v___x_4550_; lean_object* v___x_4551_; lean_object* v___x_4552_; lean_object* v___x_4553_; lean_object* v___x_4554_; 
v___x_4547_ = l_Lean_Expr_appFn_x21(v_a_4099_);
v___x_4548_ = l_Lean_Expr_appFn_x21(v___x_4547_);
v___x_4549_ = l_Lean_Expr_appArg_x21(v___x_4548_);
lean_dec_ref(v___x_4548_);
v___x_4550_ = l_Lean_Expr_appArg_x21(v___x_4547_);
lean_dec_ref(v___x_4547_);
v___x_4551_ = l_Lean_Expr_appArg_x21(v_a_4099_);
v___x_4552_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4552_, 0, v___x_4550_);
lean_ctor_set(v___x_4552_, 1, v___x_4551_);
v___x_4553_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4553_, 0, v___x_4549_);
lean_ctor_set(v___x_4553_, 1, v___x_4552_);
v___x_4554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4554_, 0, v___x_4553_);
v___y_4486_ = v___y_4542_;
v___y_4487_ = v___x_4554_;
goto v___jp_4485_;
}
}
}
else
{
lean_object* v___x_4567_; lean_object* v___x_4569_; 
lean_dec(v_a_4171_);
lean_dec(v_a_4099_);
lean_del_object(v___x_4096_);
v___x_4567_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__11));
if (v_isShared_4102_ == 0)
{
lean_ctor_set_tag(v___x_4101_, 1);
lean_ctor_set(v___x_4101_, 0, v_a_4094_);
v___x_4569_ = v___x_4101_;
goto v_reusejp_4568_;
}
else
{
lean_object* v_reuseFailAlloc_4574_; 
v_reuseFailAlloc_4574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4574_, 0, v_a_4094_);
v___x_4569_ = v_reuseFailAlloc_4574_;
goto v_reusejp_4568_;
}
v_reusejp_4568_:
{
lean_object* v___x_4570_; lean_object* v___x_4571_; lean_object* v___x_4572_; lean_object* v___x_4573_; 
v___x_4570_ = lean_unsigned_to_nat(1u);
v___x_4571_ = lean_mk_empty_array_with_capacity(v___x_4570_);
v___x_4572_ = lean_array_push(v___x_4571_, v___x_4569_);
v___x_4573_ = l_Lean_Meta_mkAppOptM(v___x_4567_, v___x_4572_, v_a_4077_, v_a_4078_, v_a_4079_, v_a_4080_);
return v___x_4573_;
}
}
}
else
{
lean_object* v_a_4575_; lean_object* v___x_4577_; uint8_t v_isShared_4578_; uint8_t v_isSharedCheck_4582_; 
lean_del_object(v___x_4101_);
lean_dec(v_a_4099_);
lean_del_object(v___x_4096_);
lean_dec(v_a_4094_);
v_a_4575_ = lean_ctor_get(v___x_4170_, 0);
v_isSharedCheck_4582_ = !lean_is_exclusive(v___x_4170_);
if (v_isSharedCheck_4582_ == 0)
{
v___x_4577_ = v___x_4170_;
v_isShared_4578_ = v_isSharedCheck_4582_;
goto v_resetjp_4576_;
}
else
{
lean_inc(v_a_4575_);
lean_dec(v___x_4170_);
v___x_4577_ = lean_box(0);
v_isShared_4578_ = v_isSharedCheck_4582_;
goto v_resetjp_4576_;
}
v_resetjp_4576_:
{
lean_object* v___x_4580_; 
if (v_isShared_4578_ == 0)
{
v___x_4580_ = v___x_4577_;
goto v_reusejp_4579_;
}
else
{
lean_object* v_reuseFailAlloc_4581_; 
v_reuseFailAlloc_4581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4581_, 0, v_a_4575_);
v___x_4580_ = v_reuseFailAlloc_4581_;
goto v_reusejp_4579_;
}
v_reusejp_4579_:
{
return v___x_4580_;
}
}
}
v___jp_4103_:
{
lean_object* v___x_4111_; lean_object* v___x_4112_; 
v___x_4111_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__1));
lean_inc(v_a_4099_);
lean_inc(v_a_4094_);
v___x_4112_ = lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg(v_a_4094_, v_a_4099_, v___x_4111_, v___y_4104_, v___y_4105_, v___y_4106_, v___y_4107_, v___y_4108_, v___y_4109_, v___y_4110_);
if (lean_obj_tag(v___x_4112_) == 0)
{
lean_object* v_a_4113_; lean_object* v___x_4115_; uint8_t v_isShared_4116_; uint8_t v_isSharedCheck_4137_; 
v_a_4113_ = lean_ctor_get(v___x_4112_, 0);
v_isSharedCheck_4137_ = !lean_is_exclusive(v___x_4112_);
if (v_isSharedCheck_4137_ == 0)
{
v___x_4115_ = v___x_4112_;
v_isShared_4116_ = v_isSharedCheck_4137_;
goto v_resetjp_4114_;
}
else
{
lean_inc(v_a_4113_);
lean_dec(v___x_4112_);
v___x_4115_ = lean_box(0);
v_isShared_4116_ = v_isSharedCheck_4137_;
goto v_resetjp_4114_;
}
v_resetjp_4114_:
{
lean_object* v_fst_4117_; lean_object* v___x_4119_; uint8_t v_isShared_4120_; uint8_t v_isSharedCheck_4135_; 
v_fst_4117_ = lean_ctor_get(v_a_4113_, 0);
v_isSharedCheck_4135_ = !lean_is_exclusive(v_a_4113_);
if (v_isSharedCheck_4135_ == 0)
{
lean_object* v_unused_4136_; 
v_unused_4136_ = lean_ctor_get(v_a_4113_, 1);
lean_dec(v_unused_4136_);
v___x_4119_ = v_a_4113_;
v_isShared_4120_ = v_isSharedCheck_4135_;
goto v_resetjp_4118_;
}
else
{
lean_inc(v_fst_4117_);
lean_dec(v_a_4113_);
v___x_4119_ = lean_box(0);
v_isShared_4120_ = v_isSharedCheck_4135_;
goto v_resetjp_4118_;
}
v_resetjp_4118_:
{
if (lean_obj_tag(v_fst_4117_) == 0)
{
lean_object* v___x_4121_; lean_object* v___x_4122_; lean_object* v___x_4124_; 
lean_del_object(v___x_4115_);
v___x_4121_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__3, &lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__3);
lean_inc(v_a_4094_);
v___x_4122_ = l_Lean_indentExpr(v_a_4094_);
if (v_isShared_4120_ == 0)
{
lean_ctor_set_tag(v___x_4119_, 7);
lean_ctor_set(v___x_4119_, 1, v___x_4122_);
lean_ctor_set(v___x_4119_, 0, v___x_4121_);
v___x_4124_ = v___x_4119_;
goto v_reusejp_4123_;
}
else
{
lean_object* v_reuseFailAlloc_4130_; 
v_reuseFailAlloc_4130_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4130_, 0, v___x_4121_);
lean_ctor_set(v_reuseFailAlloc_4130_, 1, v___x_4122_);
v___x_4124_ = v_reuseFailAlloc_4130_;
goto v_reusejp_4123_;
}
v_reusejp_4123_:
{
lean_object* v___x_4125_; lean_object* v___x_4126_; lean_object* v___x_4127_; lean_object* v___x_4128_; lean_object* v___x_4129_; 
v___x_4125_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_implies___closed__5, &lp_vampireReplay_Vampire_Reconstruct_implies___closed__5_once, _init_lp_vampireReplay_Vampire_Reconstruct_implies___closed__5);
v___x_4126_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4126_, 0, v___x_4124_);
lean_ctor_set(v___x_4126_, 1, v___x_4125_);
lean_inc(v_a_4099_);
v___x_4127_ = l_Lean_indentExpr(v_a_4099_);
v___x_4128_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4128_, 0, v___x_4126_);
lean_ctor_set(v___x_4128_, 1, v___x_4127_);
v___x_4129_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_unrelated(v_a_4094_, v_a_4099_, v___x_4128_, v___y_4105_, v___y_4106_, v___y_4107_, v___y_4108_, v___y_4109_, v___y_4110_);
return v___x_4129_;
}
}
else
{
lean_object* v_val_4131_; lean_object* v___x_4133_; 
lean_del_object(v___x_4119_);
lean_dec(v_a_4099_);
lean_dec(v_a_4094_);
v_val_4131_ = lean_ctor_get(v_fst_4117_, 0);
lean_inc(v_val_4131_);
lean_dec_ref_known(v_fst_4117_, 1);
if (v_isShared_4116_ == 0)
{
lean_ctor_set(v___x_4115_, 0, v_val_4131_);
v___x_4133_ = v___x_4115_;
goto v_reusejp_4132_;
}
else
{
lean_object* v_reuseFailAlloc_4134_; 
v_reuseFailAlloc_4134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4134_, 0, v_val_4131_);
v___x_4133_ = v_reuseFailAlloc_4134_;
goto v_reusejp_4132_;
}
v_reusejp_4132_:
{
return v___x_4133_;
}
}
}
}
}
else
{
lean_object* v_a_4138_; lean_object* v___x_4140_; uint8_t v_isShared_4141_; uint8_t v_isSharedCheck_4145_; 
lean_dec(v_a_4099_);
lean_dec(v_a_4094_);
v_a_4138_ = lean_ctor_get(v___x_4112_, 0);
v_isSharedCheck_4145_ = !lean_is_exclusive(v___x_4112_);
if (v_isSharedCheck_4145_ == 0)
{
v___x_4140_ = v___x_4112_;
v_isShared_4141_ = v_isSharedCheck_4145_;
goto v_resetjp_4139_;
}
else
{
lean_inc(v_a_4138_);
lean_dec(v___x_4112_);
v___x_4140_ = lean_box(0);
v_isShared_4141_ = v_isSharedCheck_4145_;
goto v_resetjp_4139_;
}
v_resetjp_4139_:
{
lean_object* v___x_4143_; 
if (v_isShared_4141_ == 0)
{
v___x_4143_ = v___x_4140_;
goto v_reusejp_4142_;
}
else
{
lean_object* v_reuseFailAlloc_4144_; 
v_reuseFailAlloc_4144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4144_, 0, v_a_4138_);
v___x_4143_ = v_reuseFailAlloc_4144_;
goto v_reusejp_4142_;
}
v_reusejp_4142_:
{
return v___x_4143_;
}
}
}
}
v___jp_4146_:
{
lean_object* v___x_4154_; lean_object* v___x_4155_; lean_object* v___x_4156_; lean_object* v___x_4157_; lean_object* v___x_4158_; lean_object* v___x_4159_; lean_object* v___x_4160_; lean_object* v___x_4161_; 
v___x_4154_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__5, &lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__5_once, _init_lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__5);
lean_inc(v_a_4094_);
v___x_4155_ = l_Lean_indentExpr(v_a_4094_);
v___x_4156_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4156_, 0, v___x_4154_);
lean_ctor_set(v___x_4156_, 1, v___x_4155_);
v___x_4157_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_implies___closed__5, &lp_vampireReplay_Vampire_Reconstruct_implies___closed__5_once, _init_lp_vampireReplay_Vampire_Reconstruct_implies___closed__5);
v___x_4158_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4158_, 0, v___x_4156_);
lean_ctor_set(v___x_4158_, 1, v___x_4157_);
lean_inc(v_a_4099_);
v___x_4159_ = l_Lean_indentExpr(v_a_4099_);
v___x_4160_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4160_, 0, v___x_4158_);
lean_ctor_set(v___x_4160_, 1, v___x_4159_);
v___x_4161_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_4160_, v___y_4150_, v___y_4151_, v___y_4152_, v___y_4153_);
if (lean_obj_tag(v___x_4161_) == 0)
{
lean_dec_ref_known(v___x_4161_, 1);
v___y_4104_ = v___y_4147_;
v___y_4105_ = v___y_4148_;
v___y_4106_ = v___y_4149_;
v___y_4107_ = v___y_4150_;
v___y_4108_ = v___y_4151_;
v___y_4109_ = v___y_4152_;
v___y_4110_ = v___y_4153_;
goto v___jp_4103_;
}
else
{
lean_object* v_a_4162_; lean_object* v___x_4164_; uint8_t v_isShared_4165_; uint8_t v_isSharedCheck_4169_; 
lean_dec_ref(v___y_4147_);
lean_dec(v_a_4099_);
lean_dec(v_a_4094_);
v_a_4162_ = lean_ctor_get(v___x_4161_, 0);
v_isSharedCheck_4169_ = !lean_is_exclusive(v___x_4161_);
if (v_isSharedCheck_4169_ == 0)
{
v___x_4164_ = v___x_4161_;
v_isShared_4165_ = v_isSharedCheck_4169_;
goto v_resetjp_4163_;
}
else
{
lean_inc(v_a_4162_);
lean_dec(v___x_4161_);
v___x_4164_ = lean_box(0);
v_isShared_4165_ = v_isSharedCheck_4169_;
goto v_resetjp_4163_;
}
v_resetjp_4163_:
{
lean_object* v___x_4167_; 
if (v_isShared_4165_ == 0)
{
v___x_4167_ = v___x_4164_;
goto v_reusejp_4166_;
}
else
{
lean_object* v_reuseFailAlloc_4168_; 
v_reuseFailAlloc_4168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4168_, 0, v_a_4162_);
v___x_4167_ = v_reuseFailAlloc_4168_;
goto v_reusejp_4166_;
}
v_reusejp_4166_:
{
return v___x_4167_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_4096_);
lean_dec(v_a_4094_);
return v___x_4098_;
}
}
}
else
{
lean_dec_ref(v_b_4074_);
return v___x_4093_;
}
v___jp_4082_:
{
lean_object* v___x_4091_; lean_object* v___x_4092_; 
v___x_4091_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__6));
v___x_4092_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_4091_, v___y_4083_, v___y_4084_, v___y_4085_, v___y_4086_, v___y_4087_, v___y_4088_, v___y_4089_, v___y_4090_);
return v___x_4092_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_equivNormal___lam__0(lean_object* v_body_4585_, lean_object* v_body_4586_, uint8_t v_a_4587_, uint8_t v___x_4588_, lean_object* v_x_4589_, lean_object* v___y_4590_, lean_object* v___y_4591_, lean_object* v___y_4592_, lean_object* v___y_4593_, lean_object* v___y_4594_, lean_object* v___y_4595_){
_start:
{
lean_object* v___x_4597_; lean_object* v___x_4598_; lean_object* v___x_4599_; 
v___x_4597_ = lean_expr_instantiate1(v_body_4585_, v_x_4589_);
v___x_4598_ = lean_expr_instantiate1(v_body_4586_, v_x_4589_);
v___x_4599_ = lp_vampireReplay_Vampire_Reconstruct_equivNormal(v___x_4597_, v___x_4598_, v___y_4590_, v___y_4591_, v___y_4592_, v___y_4593_, v___y_4594_, v___y_4595_);
if (lean_obj_tag(v___x_4599_) == 0)
{
lean_object* v_a_4600_; lean_object* v___x_4601_; lean_object* v___x_4602_; lean_object* v___x_4603_; uint8_t v___x_4604_; lean_object* v___x_4605_; 
v_a_4600_ = lean_ctor_get(v___x_4599_, 0);
lean_inc(v_a_4600_);
lean_dec_ref_known(v___x_4599_, 1);
v___x_4601_ = lean_unsigned_to_nat(1u);
v___x_4602_ = lean_mk_empty_array_with_capacity(v___x_4601_);
lean_inc_ref(v___x_4602_);
v___x_4603_ = lean_array_push(v___x_4602_, v_x_4589_);
v___x_4604_ = 1;
v___x_4605_ = l_Lean_Meta_mkLambdaFVars(v___x_4603_, v_a_4600_, v_a_4587_, v___x_4588_, v_a_4587_, v___x_4588_, v___x_4604_, v___y_4592_, v___y_4593_, v___y_4594_, v___y_4595_);
lean_dec_ref(v___x_4603_);
if (lean_obj_tag(v___x_4605_) == 0)
{
lean_object* v_a_4606_; lean_object* v___x_4607_; lean_object* v___x_4608_; lean_object* v___x_4609_; 
v_a_4606_ = lean_ctor_get(v___x_4605_, 0);
lean_inc(v_a_4606_);
lean_dec_ref_known(v___x_4605_, 1);
v___x_4607_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_toNNF___lam__1___closed__1));
v___x_4608_ = lean_array_push(v___x_4602_, v_a_4606_);
v___x_4609_ = l_Lean_Meta_mkAppM(v___x_4607_, v___x_4608_, v___y_4592_, v___y_4593_, v___y_4594_, v___y_4595_);
return v___x_4609_;
}
else
{
lean_dec_ref(v___x_4602_);
return v___x_4605_;
}
}
else
{
lean_dec_ref(v_x_4589_);
return v___x_4599_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_equivNormal_spec__0___boxed(lean_object* v___x_4610_, lean_object* v_sz_4611_, lean_object* v_i_4612_, lean_object* v_bs_4613_, lean_object* v___y_4614_, lean_object* v___y_4615_, lean_object* v___y_4616_, lean_object* v___y_4617_, lean_object* v___y_4618_, lean_object* v___y_4619_, lean_object* v___y_4620_){
_start:
{
size_t v_sz_boxed_4621_; size_t v_i_boxed_4622_; lean_object* v_res_4623_; 
v_sz_boxed_4621_ = lean_unbox_usize(v_sz_4611_);
lean_dec(v_sz_4611_);
v_i_boxed_4622_ = lean_unbox_usize(v_i_4612_);
lean_dec(v_i_4612_);
v_res_4623_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_equivNormal_spec__0(v___x_4610_, v_sz_boxed_4621_, v_i_boxed_4622_, v_bs_4613_, v___y_4614_, v___y_4615_, v___y_4616_, v___y_4617_, v___y_4618_, v___y_4619_);
lean_dec(v___y_4619_);
lean_dec_ref(v___y_4618_);
lean_dec(v___y_4617_);
lean_dec_ref(v___y_4616_);
lean_dec(v___y_4615_);
lean_dec_ref(v___y_4614_);
lean_dec_ref(v___x_4610_);
return v_res_4623_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__4___redArg___boxed(lean_object* v_a_4624_, lean_object* v_as_x27_4625_, lean_object* v_b_4626_, lean_object* v___y_4627_, lean_object* v___y_4628_, lean_object* v___y_4629_, lean_object* v___y_4630_, lean_object* v___y_4631_, lean_object* v___y_4632_, lean_object* v___y_4633_){
_start:
{
lean_object* v_res_4634_; 
v_res_4634_ = lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__4___redArg(v_a_4624_, v_as_x27_4625_, v_b_4626_, v___y_4627_, v___y_4628_, v___y_4629_, v___y_4630_, v___y_4631_, v___y_4632_);
lean_dec(v___y_4632_);
lean_dec_ref(v___y_4631_);
lean_dec(v___y_4630_);
lean_dec_ref(v___y_4629_);
lean_dec(v___y_4628_);
lean_dec_ref(v___y_4627_);
lean_dec(v_as_x27_4625_);
lean_dec_ref(v_a_4624_);
return v_res_4634_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___boxed(lean_object* v_a_4635_, lean_object* v_a_4636_, lean_object* v_as_x27_4637_, lean_object* v_b_4638_, lean_object* v___y_4639_, lean_object* v___y_4640_, lean_object* v___y_4641_, lean_object* v___y_4642_, lean_object* v___y_4643_, lean_object* v___y_4644_, lean_object* v___y_4645_){
_start:
{
lean_object* v_res_4646_; 
v_res_4646_ = lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg(v_a_4635_, v_a_4636_, v_as_x27_4637_, v_b_4638_, v___y_4639_, v___y_4640_, v___y_4641_, v___y_4642_, v___y_4643_, v___y_4644_);
lean_dec(v___y_4644_);
lean_dec_ref(v___y_4643_);
lean_dec(v___y_4642_);
lean_dec_ref(v___y_4641_);
lean_dec(v___y_4640_);
lean_dec_ref(v___y_4639_);
lean_dec(v_as_x27_4637_);
return v_res_4646_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_equivNormal___boxed(lean_object* v_a_4647_, lean_object* v_b_4648_, lean_object* v_a_4649_, lean_object* v_a_4650_, lean_object* v_a_4651_, lean_object* v_a_4652_, lean_object* v_a_4653_, lean_object* v_a_4654_, lean_object* v_a_4655_){
_start:
{
lean_object* v_res_4656_; 
v_res_4656_ = lp_vampireReplay_Vampire_Reconstruct_equivNormal(v_a_4647_, v_b_4648_, v_a_4649_, v_a_4650_, v_a_4651_, v_a_4652_, v_a_4653_, v_a_4654_);
lean_dec(v_a_4654_);
lean_dec_ref(v_a_4653_);
lean_dec(v_a_4652_);
lean_dec_ref(v_a_4651_);
lean_dec(v_a_4650_);
lean_dec_ref(v_a_4649_);
return v_res_4656_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__1(lean_object* v___x_4657_, lean_object* v___x_4658_, lean_object* v___x_4659_, lean_object* v_a_4660_, lean_object* v___y_4661_, lean_object* v_a_4662_, lean_object* v_range_4663_, lean_object* v_b_4664_, lean_object* v_i_4665_, lean_object* v_hs_4666_, lean_object* v_hl_4667_, lean_object* v___y_4668_, lean_object* v___y_4669_, lean_object* v___y_4670_, lean_object* v___y_4671_, lean_object* v___y_4672_, lean_object* v___y_4673_){
_start:
{
lean_object* v___x_4675_; 
v___x_4675_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__1___redArg(v___x_4657_, v___x_4658_, v___x_4659_, v_a_4660_, v___y_4661_, v_a_4662_, v_range_4663_, v_b_4664_, v_i_4665_, v___y_4670_, v___y_4671_, v___y_4672_, v___y_4673_);
return v___x_4675_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__1___boxed(lean_object** _args){
lean_object* v___x_4676_ = _args[0];
lean_object* v___x_4677_ = _args[1];
lean_object* v___x_4678_ = _args[2];
lean_object* v_a_4679_ = _args[3];
lean_object* v___y_4680_ = _args[4];
lean_object* v_a_4681_ = _args[5];
lean_object* v_range_4682_ = _args[6];
lean_object* v_b_4683_ = _args[7];
lean_object* v_i_4684_ = _args[8];
lean_object* v_hs_4685_ = _args[9];
lean_object* v_hl_4686_ = _args[10];
lean_object* v___y_4687_ = _args[11];
lean_object* v___y_4688_ = _args[12];
lean_object* v___y_4689_ = _args[13];
lean_object* v___y_4690_ = _args[14];
lean_object* v___y_4691_ = _args[15];
lean_object* v___y_4692_ = _args[16];
lean_object* v___y_4693_ = _args[17];
_start:
{
lean_object* v_res_4694_; 
v_res_4694_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__1(v___x_4676_, v___x_4677_, v___x_4678_, v_a_4679_, v___y_4680_, v_a_4681_, v_range_4682_, v_b_4683_, v_i_4684_, v_hs_4685_, v_hl_4686_, v___y_4687_, v___y_4688_, v___y_4689_, v___y_4690_, v___y_4691_, v___y_4692_);
lean_dec(v___y_4692_);
lean_dec_ref(v___y_4691_);
lean_dec(v___y_4690_);
lean_dec_ref(v___y_4689_);
lean_dec(v___y_4688_);
lean_dec_ref(v___y_4687_);
lean_dec_ref(v_range_4682_);
lean_dec_ref(v_a_4679_);
lean_dec_ref(v___x_4678_);
lean_dec_ref(v___x_4677_);
lean_dec(v___x_4676_);
return v_res_4694_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3(lean_object* v_a_4695_, lean_object* v_a_4696_, lean_object* v_as_4697_, lean_object* v_as_x27_4698_, lean_object* v_b_4699_, lean_object* v_a_4700_, lean_object* v___y_4701_, lean_object* v___y_4702_, lean_object* v___y_4703_, lean_object* v___y_4704_, lean_object* v___y_4705_, lean_object* v___y_4706_){
_start:
{
lean_object* v___x_4708_; 
v___x_4708_ = lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg(v_a_4695_, v_a_4696_, v_as_x27_4698_, v_b_4699_, v___y_4701_, v___y_4702_, v___y_4703_, v___y_4704_, v___y_4705_, v___y_4706_);
return v___x_4708_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___boxed(lean_object* v_a_4709_, lean_object* v_a_4710_, lean_object* v_as_4711_, lean_object* v_as_x27_4712_, lean_object* v_b_4713_, lean_object* v_a_4714_, lean_object* v___y_4715_, lean_object* v___y_4716_, lean_object* v___y_4717_, lean_object* v___y_4718_, lean_object* v___y_4719_, lean_object* v___y_4720_, lean_object* v___y_4721_){
_start:
{
lean_object* v_res_4722_; 
v_res_4722_ = lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3(v_a_4709_, v_a_4710_, v_as_4711_, v_as_x27_4712_, v_b_4713_, v_a_4714_, v___y_4715_, v___y_4716_, v___y_4717_, v___y_4718_, v___y_4719_, v___y_4720_);
lean_dec(v___y_4720_);
lean_dec_ref(v___y_4719_);
lean_dec(v___y_4718_);
lean_dec_ref(v___y_4717_);
lean_dec(v___y_4716_);
lean_dec_ref(v___y_4715_);
lean_dec(v_as_x27_4712_);
lean_dec(v_as_4711_);
return v_res_4722_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__4(lean_object* v_a_4723_, lean_object* v_as_4724_, lean_object* v_as_x27_4725_, lean_object* v_b_4726_, lean_object* v_a_4727_, lean_object* v___y_4728_, lean_object* v___y_4729_, lean_object* v___y_4730_, lean_object* v___y_4731_, lean_object* v___y_4732_, lean_object* v___y_4733_){
_start:
{
lean_object* v___x_4735_; 
v___x_4735_ = lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__4___redArg(v_a_4723_, v_as_x27_4725_, v_b_4726_, v___y_4728_, v___y_4729_, v___y_4730_, v___y_4731_, v___y_4732_, v___y_4733_);
return v___x_4735_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__4___boxed(lean_object* v_a_4736_, lean_object* v_as_4737_, lean_object* v_as_x27_4738_, lean_object* v_b_4739_, lean_object* v_a_4740_, lean_object* v___y_4741_, lean_object* v___y_4742_, lean_object* v___y_4743_, lean_object* v___y_4744_, lean_object* v___y_4745_, lean_object* v___y_4746_, lean_object* v___y_4747_){
_start:
{
lean_object* v_res_4748_; 
v_res_4748_ = lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__4(v_a_4736_, v_as_4737_, v_as_x27_4738_, v_b_4739_, v_a_4740_, v___y_4741_, v___y_4742_, v___y_4743_, v___y_4744_, v___y_4745_, v___y_4746_);
lean_dec(v___y_4746_);
lean_dec_ref(v___y_4745_);
lean_dec(v___y_4744_);
lean_dec_ref(v___y_4743_);
lean_dec(v___y_4742_);
lean_dec_ref(v___y_4741_);
lean_dec(v_as_x27_4738_);
lean_dec(v_as_4737_);
lean_dec_ref(v_a_4736_);
return v_res_4748_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___lam__0___boxed(lean_object* v_body_4749_, lean_object* v___y_4750_, lean_object* v___x_4751_, lean_object* v_x_4752_, lean_object* v___y_4753_, lean_object* v___y_4754_, lean_object* v___y_4755_, lean_object* v___y_4756_, lean_object* v___y_4757_, lean_object* v___y_4758_, lean_object* v___y_4759_){
_start:
{
uint8_t v___y_33046__boxed_4760_; uint8_t v___x_33047__boxed_4761_; lean_object* v_res_4762_; 
v___y_33046__boxed_4760_ = lean_unbox(v___y_4750_);
v___x_33047__boxed_4761_ = lean_unbox(v___x_4751_);
v_res_4762_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___lam__0(v_body_4749_, v___y_33046__boxed_4760_, v___x_33047__boxed_4761_, v_x_4752_, v___y_4753_, v___y_4754_, v___y_4755_, v___y_4756_, v___y_4757_, v___y_4758_);
lean_dec(v___y_4758_);
lean_dec_ref(v___y_4757_);
lean_dec(v___y_4756_);
lean_dec_ref(v___y_4755_);
lean_dec(v___y_4754_);
lean_dec_ref(v___y_4753_);
lean_dec_ref(v_body_4749_);
return v_res_4762_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___lam__1(lean_object* v_body_4766_, uint8_t v___x_4767_, uint8_t v___x_4768_, lean_object* v___x_4769_, lean_object* v_x_4770_, lean_object* v___y_4771_, lean_object* v___y_4772_, lean_object* v___y_4773_, lean_object* v___y_4774_, lean_object* v___y_4775_, lean_object* v___y_4776_){
_start:
{
lean_object* v___x_4778_; lean_object* v___x_4779_; 
v___x_4778_ = lean_expr_instantiate1(v_body_4766_, v_x_4770_);
v___x_4779_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound(v___x_4778_, v___y_4771_, v___y_4772_, v___y_4773_, v___y_4774_, v___y_4775_, v___y_4776_);
if (lean_obj_tag(v___x_4779_) == 0)
{
lean_object* v_a_4780_; lean_object* v_fst_4781_; lean_object* v_snd_4782_; lean_object* v___x_4784_; uint8_t v_isShared_4785_; uint8_t v_isSharedCheck_4843_; 
v_a_4780_ = lean_ctor_get(v___x_4779_, 0);
lean_inc(v_a_4780_);
lean_dec_ref_known(v___x_4779_, 1);
v_fst_4781_ = lean_ctor_get(v_a_4780_, 0);
v_snd_4782_ = lean_ctor_get(v_a_4780_, 1);
v_isSharedCheck_4843_ = !lean_is_exclusive(v_a_4780_);
if (v_isSharedCheck_4843_ == 0)
{
v___x_4784_ = v_a_4780_;
v_isShared_4785_ = v_isSharedCheck_4843_;
goto v_resetjp_4783_;
}
else
{
lean_inc(v_snd_4782_);
lean_inc(v_fst_4781_);
lean_dec(v_a_4780_);
v___x_4784_ = lean_box(0);
v_isShared_4785_ = v_isSharedCheck_4843_;
goto v_resetjp_4783_;
}
v_resetjp_4783_:
{
lean_object* v___x_4786_; lean_object* v___x_4787_; lean_object* v___x_4788_; uint8_t v___x_4789_; lean_object* v___x_4790_; 
v___x_4786_ = lean_unsigned_to_nat(1u);
v___x_4787_ = lean_mk_empty_array_with_capacity(v___x_4786_);
lean_inc_ref(v___x_4787_);
v___x_4788_ = lean_array_push(v___x_4787_, v_x_4770_);
v___x_4789_ = 1;
v___x_4790_ = l_Lean_Meta_mkLambdaFVars(v___x_4788_, v_fst_4781_, v___x_4767_, v___x_4768_, v___x_4767_, v___x_4768_, v___x_4789_, v___y_4773_, v___y_4774_, v___y_4775_, v___y_4776_);
if (lean_obj_tag(v___x_4790_) == 0)
{
lean_object* v_a_4791_; lean_object* v___x_4792_; lean_object* v___x_4793_; 
v_a_4791_ = lean_ctor_get(v___x_4790_, 0);
lean_inc(v_a_4791_);
lean_dec_ref_known(v___x_4790_, 1);
lean_inc_ref(v___x_4787_);
v___x_4792_ = lean_array_push(v___x_4787_, v_a_4791_);
v___x_4793_ = l_Lean_Meta_mkAppM(v___x_4769_, v___x_4792_, v___y_4773_, v___y_4774_, v___y_4775_, v___y_4776_);
if (lean_obj_tag(v___x_4793_) == 0)
{
lean_object* v_a_4794_; lean_object* v___x_4795_; 
v_a_4794_ = lean_ctor_get(v___x_4793_, 0);
lean_inc(v_a_4794_);
lean_dec_ref_known(v___x_4793_, 1);
v___x_4795_ = l_Lean_Meta_mkLambdaFVars(v___x_4788_, v_snd_4782_, v___x_4767_, v___x_4768_, v___x_4767_, v___x_4768_, v___x_4789_, v___y_4773_, v___y_4774_, v___y_4775_, v___y_4776_);
lean_dec_ref(v___x_4788_);
if (lean_obj_tag(v___x_4795_) == 0)
{
lean_object* v_a_4796_; lean_object* v___x_4797_; lean_object* v___x_4798_; lean_object* v___x_4799_; 
v_a_4796_ = lean_ctor_get(v___x_4795_, 0);
lean_inc(v_a_4796_);
lean_dec_ref_known(v___x_4795_, 1);
v___x_4797_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_toNNF___lam__1___closed__1));
v___x_4798_ = lean_array_push(v___x_4787_, v_a_4796_);
v___x_4799_ = l_Lean_Meta_mkAppM(v___x_4797_, v___x_4798_, v___y_4773_, v___y_4774_, v___y_4775_, v___y_4776_);
if (lean_obj_tag(v___x_4799_) == 0)
{
lean_object* v_a_4800_; lean_object* v___x_4802_; uint8_t v_isShared_4803_; uint8_t v_isSharedCheck_4810_; 
v_a_4800_ = lean_ctor_get(v___x_4799_, 0);
v_isSharedCheck_4810_ = !lean_is_exclusive(v___x_4799_);
if (v_isSharedCheck_4810_ == 0)
{
v___x_4802_ = v___x_4799_;
v_isShared_4803_ = v_isSharedCheck_4810_;
goto v_resetjp_4801_;
}
else
{
lean_inc(v_a_4800_);
lean_dec(v___x_4799_);
v___x_4802_ = lean_box(0);
v_isShared_4803_ = v_isSharedCheck_4810_;
goto v_resetjp_4801_;
}
v_resetjp_4801_:
{
lean_object* v___x_4805_; 
if (v_isShared_4785_ == 0)
{
lean_ctor_set(v___x_4784_, 1, v_a_4800_);
lean_ctor_set(v___x_4784_, 0, v_a_4794_);
v___x_4805_ = v___x_4784_;
goto v_reusejp_4804_;
}
else
{
lean_object* v_reuseFailAlloc_4809_; 
v_reuseFailAlloc_4809_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4809_, 0, v_a_4794_);
lean_ctor_set(v_reuseFailAlloc_4809_, 1, v_a_4800_);
v___x_4805_ = v_reuseFailAlloc_4809_;
goto v_reusejp_4804_;
}
v_reusejp_4804_:
{
lean_object* v___x_4807_; 
if (v_isShared_4803_ == 0)
{
lean_ctor_set(v___x_4802_, 0, v___x_4805_);
v___x_4807_ = v___x_4802_;
goto v_reusejp_4806_;
}
else
{
lean_object* v_reuseFailAlloc_4808_; 
v_reuseFailAlloc_4808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4808_, 0, v___x_4805_);
v___x_4807_ = v_reuseFailAlloc_4808_;
goto v_reusejp_4806_;
}
v_reusejp_4806_:
{
return v___x_4807_;
}
}
}
}
else
{
lean_object* v_a_4811_; lean_object* v___x_4813_; uint8_t v_isShared_4814_; uint8_t v_isSharedCheck_4818_; 
lean_dec(v_a_4794_);
lean_del_object(v___x_4784_);
v_a_4811_ = lean_ctor_get(v___x_4799_, 0);
v_isSharedCheck_4818_ = !lean_is_exclusive(v___x_4799_);
if (v_isSharedCheck_4818_ == 0)
{
v___x_4813_ = v___x_4799_;
v_isShared_4814_ = v_isSharedCheck_4818_;
goto v_resetjp_4812_;
}
else
{
lean_inc(v_a_4811_);
lean_dec(v___x_4799_);
v___x_4813_ = lean_box(0);
v_isShared_4814_ = v_isSharedCheck_4818_;
goto v_resetjp_4812_;
}
v_resetjp_4812_:
{
lean_object* v___x_4816_; 
if (v_isShared_4814_ == 0)
{
v___x_4816_ = v___x_4813_;
goto v_reusejp_4815_;
}
else
{
lean_object* v_reuseFailAlloc_4817_; 
v_reuseFailAlloc_4817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4817_, 0, v_a_4811_);
v___x_4816_ = v_reuseFailAlloc_4817_;
goto v_reusejp_4815_;
}
v_reusejp_4815_:
{
return v___x_4816_;
}
}
}
}
else
{
lean_object* v_a_4819_; lean_object* v___x_4821_; uint8_t v_isShared_4822_; uint8_t v_isSharedCheck_4826_; 
lean_dec(v_a_4794_);
lean_dec_ref(v___x_4787_);
lean_del_object(v___x_4784_);
v_a_4819_ = lean_ctor_get(v___x_4795_, 0);
v_isSharedCheck_4826_ = !lean_is_exclusive(v___x_4795_);
if (v_isSharedCheck_4826_ == 0)
{
v___x_4821_ = v___x_4795_;
v_isShared_4822_ = v_isSharedCheck_4826_;
goto v_resetjp_4820_;
}
else
{
lean_inc(v_a_4819_);
lean_dec(v___x_4795_);
v___x_4821_ = lean_box(0);
v_isShared_4822_ = v_isSharedCheck_4826_;
goto v_resetjp_4820_;
}
v_resetjp_4820_:
{
lean_object* v___x_4824_; 
if (v_isShared_4822_ == 0)
{
v___x_4824_ = v___x_4821_;
goto v_reusejp_4823_;
}
else
{
lean_object* v_reuseFailAlloc_4825_; 
v_reuseFailAlloc_4825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4825_, 0, v_a_4819_);
v___x_4824_ = v_reuseFailAlloc_4825_;
goto v_reusejp_4823_;
}
v_reusejp_4823_:
{
return v___x_4824_;
}
}
}
}
else
{
lean_object* v_a_4827_; lean_object* v___x_4829_; uint8_t v_isShared_4830_; uint8_t v_isSharedCheck_4834_; 
lean_dec_ref(v___x_4788_);
lean_dec_ref(v___x_4787_);
lean_del_object(v___x_4784_);
lean_dec(v_snd_4782_);
v_a_4827_ = lean_ctor_get(v___x_4793_, 0);
v_isSharedCheck_4834_ = !lean_is_exclusive(v___x_4793_);
if (v_isSharedCheck_4834_ == 0)
{
v___x_4829_ = v___x_4793_;
v_isShared_4830_ = v_isSharedCheck_4834_;
goto v_resetjp_4828_;
}
else
{
lean_inc(v_a_4827_);
lean_dec(v___x_4793_);
v___x_4829_ = lean_box(0);
v_isShared_4830_ = v_isSharedCheck_4834_;
goto v_resetjp_4828_;
}
v_resetjp_4828_:
{
lean_object* v___x_4832_; 
if (v_isShared_4830_ == 0)
{
v___x_4832_ = v___x_4829_;
goto v_reusejp_4831_;
}
else
{
lean_object* v_reuseFailAlloc_4833_; 
v_reuseFailAlloc_4833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4833_, 0, v_a_4827_);
v___x_4832_ = v_reuseFailAlloc_4833_;
goto v_reusejp_4831_;
}
v_reusejp_4831_:
{
return v___x_4832_;
}
}
}
}
else
{
lean_object* v_a_4835_; lean_object* v___x_4837_; uint8_t v_isShared_4838_; uint8_t v_isSharedCheck_4842_; 
lean_dec_ref(v___x_4788_);
lean_dec_ref(v___x_4787_);
lean_del_object(v___x_4784_);
lean_dec(v_snd_4782_);
lean_dec(v___x_4769_);
v_a_4835_ = lean_ctor_get(v___x_4790_, 0);
v_isSharedCheck_4842_ = !lean_is_exclusive(v___x_4790_);
if (v_isSharedCheck_4842_ == 0)
{
v___x_4837_ = v___x_4790_;
v_isShared_4838_ = v_isSharedCheck_4842_;
goto v_resetjp_4836_;
}
else
{
lean_inc(v_a_4835_);
lean_dec(v___x_4790_);
v___x_4837_ = lean_box(0);
v_isShared_4838_ = v_isSharedCheck_4842_;
goto v_resetjp_4836_;
}
v_resetjp_4836_:
{
lean_object* v___x_4840_; 
if (v_isShared_4838_ == 0)
{
v___x_4840_ = v___x_4837_;
goto v_reusejp_4839_;
}
else
{
lean_object* v_reuseFailAlloc_4841_; 
v_reuseFailAlloc_4841_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4841_, 0, v_a_4835_);
v___x_4840_ = v_reuseFailAlloc_4841_;
goto v_reusejp_4839_;
}
v_reusejp_4839_:
{
return v___x_4840_;
}
}
}
}
}
else
{
lean_dec_ref(v_x_4770_);
lean_dec(v___x_4769_);
return v___x_4779_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___lam__1___boxed(lean_object* v_body_4844_, lean_object* v___x_4845_, lean_object* v___x_4846_, lean_object* v___x_4847_, lean_object* v_x_4848_, lean_object* v___y_4849_, lean_object* v___y_4850_, lean_object* v___y_4851_, lean_object* v___y_4852_, lean_object* v___y_4853_, lean_object* v___y_4854_, lean_object* v___y_4855_){
_start:
{
uint8_t v___x_33083__boxed_4856_; uint8_t v___x_33084__boxed_4857_; lean_object* v_res_4858_; 
v___x_33083__boxed_4856_ = lean_unbox(v___x_4845_);
v___x_33084__boxed_4857_ = lean_unbox(v___x_4846_);
v_res_4858_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___lam__1(v_body_4844_, v___x_33083__boxed_4856_, v___x_33084__boxed_4857_, v___x_4847_, v_x_4848_, v___y_4849_, v___y_4850_, v___y_4851_, v___y_4852_, v___y_4853_, v___y_4854_);
lean_dec(v___y_4854_);
lean_dec_ref(v___y_4853_);
lean_dec(v___y_4852_);
lean_dec_ref(v___y_4851_);
lean_dec(v___y_4850_);
lean_dec_ref(v___y_4849_);
lean_dec_ref(v_body_4844_);
return v_res_4858_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound(lean_object* v_e_4869_, lean_object* v_a_4870_, lean_object* v_a_4871_, lean_object* v_a_4872_, lean_object* v_a_4873_, lean_object* v_a_4874_, lean_object* v_a_4875_){
_start:
{
lean_object* v___y_4878_; lean_object* v___y_4879_; lean_object* v___y_4880_; lean_object* v___y_4881_; lean_object* v___y_4882_; lean_object* v___y_4883_; lean_object* v___y_4884_; lean_object* v___y_4885_; lean_object* v___y_4886_; lean_object* v___y_4887_; lean_object* v_fn_4914_; lean_object* v_a_4915_; lean_object* v_b_4916_; lean_object* v___y_4917_; lean_object* v___y_4918_; lean_object* v___y_4919_; lean_object* v___y_4920_; lean_object* v___y_4921_; lean_object* v___y_4922_; 
switch(lean_obj_tag(v_e_4869_))
{
case 7:
{
lean_object* v_binderName_4938_; lean_object* v_binderType_4939_; lean_object* v_body_4940_; lean_object* v___x_4941_; 
v_binderName_4938_ = lean_ctor_get(v_e_4869_, 0);
lean_inc(v_binderName_4938_);
v_binderType_4939_ = lean_ctor_get(v_e_4869_, 1);
lean_inc_ref_n(v_binderType_4939_, 2);
v_body_4940_ = lean_ctor_get(v_e_4869_, 2);
lean_inc_ref(v_body_4940_);
lean_dec_ref_known(v_e_4869_, 3);
v___x_4941_ = l_Lean_Meta_isProp(v_binderType_4939_, v_a_4872_, v_a_4873_, v_a_4874_, v_a_4875_);
if (lean_obj_tag(v___x_4941_) == 0)
{
lean_object* v_a_4942_; uint8_t v___y_4944_; uint8_t v___x_4950_; 
v_a_4942_ = lean_ctor_get(v___x_4941_, 0);
lean_inc(v_a_4942_);
lean_dec_ref_known(v___x_4941_, 1);
v___x_4950_ = lean_unbox(v_a_4942_);
if (v___x_4950_ == 0)
{
uint8_t v___x_4951_; 
v___x_4951_ = lean_unbox(v_a_4942_);
lean_dec(v_a_4942_);
v___y_4944_ = v___x_4951_;
goto v___jp_4943_;
}
else
{
uint8_t v___x_4952_; 
lean_dec(v_a_4942_);
v___x_4952_ = l_Lean_Expr_hasLooseBVars(v_body_4940_);
if (v___x_4952_ == 0)
{
lean_object* v___x_4953_; 
lean_dec(v_binderName_4938_);
v___x_4953_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound(v_binderType_4939_, v_a_4870_, v_a_4871_, v_a_4872_, v_a_4873_, v_a_4874_, v_a_4875_);
if (lean_obj_tag(v___x_4953_) == 0)
{
lean_object* v_a_4954_; lean_object* v_fst_4955_; lean_object* v_snd_4956_; lean_object* v___x_4957_; 
v_a_4954_ = lean_ctor_get(v___x_4953_, 0);
lean_inc(v_a_4954_);
lean_dec_ref_known(v___x_4953_, 1);
v_fst_4955_ = lean_ctor_get(v_a_4954_, 0);
lean_inc(v_fst_4955_);
v_snd_4956_ = lean_ctor_get(v_a_4954_, 1);
lean_inc(v_snd_4956_);
lean_dec(v_a_4954_);
v___x_4957_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound(v_body_4940_, v_a_4870_, v_a_4871_, v_a_4872_, v_a_4873_, v_a_4874_, v_a_4875_);
if (lean_obj_tag(v___x_4957_) == 0)
{
lean_object* v_a_4958_; lean_object* v_fst_4959_; lean_object* v_snd_4960_; lean_object* v___x_4962_; uint8_t v_isShared_4963_; uint8_t v_isSharedCheck_4999_; 
v_a_4958_ = lean_ctor_get(v___x_4957_, 0);
lean_inc(v_a_4958_);
lean_dec_ref_known(v___x_4957_, 1);
v_fst_4959_ = lean_ctor_get(v_a_4958_, 0);
v_snd_4960_ = lean_ctor_get(v_a_4958_, 1);
v_isSharedCheck_4999_ = !lean_is_exclusive(v_a_4958_);
if (v_isSharedCheck_4999_ == 0)
{
v___x_4962_ = v_a_4958_;
v_isShared_4963_ = v_isSharedCheck_4999_;
goto v_resetjp_4961_;
}
else
{
lean_inc(v_snd_4960_);
lean_inc(v_fst_4959_);
lean_dec(v_a_4958_);
v___x_4962_ = lean_box(0);
v_isShared_4963_ = v_isSharedCheck_4999_;
goto v_resetjp_4961_;
}
v_resetjp_4961_:
{
lean_object* v___x_4964_; 
v___x_4964_ = l_Lean_mkArrow(v_fst_4955_, v_fst_4959_, v_a_4874_, v_a_4875_);
if (lean_obj_tag(v___x_4964_) == 0)
{
lean_object* v_a_4965_; lean_object* v___x_4966_; lean_object* v___x_4967_; lean_object* v___x_4968_; lean_object* v___x_4969_; lean_object* v___x_4970_; lean_object* v___x_4971_; 
v_a_4965_ = lean_ctor_get(v___x_4964_, 0);
lean_inc(v_a_4965_);
lean_dec_ref_known(v___x_4964_, 1);
v___x_4966_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__9));
v___x_4967_ = lean_unsigned_to_nat(2u);
v___x_4968_ = lean_mk_empty_array_with_capacity(v___x_4967_);
v___x_4969_ = lean_array_push(v___x_4968_, v_snd_4956_);
v___x_4970_ = lean_array_push(v___x_4969_, v_snd_4960_);
v___x_4971_ = l_Lean_Meta_mkAppM(v___x_4966_, v___x_4970_, v_a_4872_, v_a_4873_, v_a_4874_, v_a_4875_);
if (lean_obj_tag(v___x_4971_) == 0)
{
lean_object* v_a_4972_; lean_object* v___x_4974_; uint8_t v_isShared_4975_; uint8_t v_isSharedCheck_4982_; 
v_a_4972_ = lean_ctor_get(v___x_4971_, 0);
v_isSharedCheck_4982_ = !lean_is_exclusive(v___x_4971_);
if (v_isSharedCheck_4982_ == 0)
{
v___x_4974_ = v___x_4971_;
v_isShared_4975_ = v_isSharedCheck_4982_;
goto v_resetjp_4973_;
}
else
{
lean_inc(v_a_4972_);
lean_dec(v___x_4971_);
v___x_4974_ = lean_box(0);
v_isShared_4975_ = v_isSharedCheck_4982_;
goto v_resetjp_4973_;
}
v_resetjp_4973_:
{
lean_object* v___x_4977_; 
if (v_isShared_4963_ == 0)
{
lean_ctor_set(v___x_4962_, 1, v_a_4972_);
lean_ctor_set(v___x_4962_, 0, v_a_4965_);
v___x_4977_ = v___x_4962_;
goto v_reusejp_4976_;
}
else
{
lean_object* v_reuseFailAlloc_4981_; 
v_reuseFailAlloc_4981_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4981_, 0, v_a_4965_);
lean_ctor_set(v_reuseFailAlloc_4981_, 1, v_a_4972_);
v___x_4977_ = v_reuseFailAlloc_4981_;
goto v_reusejp_4976_;
}
v_reusejp_4976_:
{
lean_object* v___x_4979_; 
if (v_isShared_4975_ == 0)
{
lean_ctor_set(v___x_4974_, 0, v___x_4977_);
v___x_4979_ = v___x_4974_;
goto v_reusejp_4978_;
}
else
{
lean_object* v_reuseFailAlloc_4980_; 
v_reuseFailAlloc_4980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4980_, 0, v___x_4977_);
v___x_4979_ = v_reuseFailAlloc_4980_;
goto v_reusejp_4978_;
}
v_reusejp_4978_:
{
return v___x_4979_;
}
}
}
}
else
{
lean_object* v_a_4983_; lean_object* v___x_4985_; uint8_t v_isShared_4986_; uint8_t v_isSharedCheck_4990_; 
lean_dec(v_a_4965_);
lean_del_object(v___x_4962_);
v_a_4983_ = lean_ctor_get(v___x_4971_, 0);
v_isSharedCheck_4990_ = !lean_is_exclusive(v___x_4971_);
if (v_isSharedCheck_4990_ == 0)
{
v___x_4985_ = v___x_4971_;
v_isShared_4986_ = v_isSharedCheck_4990_;
goto v_resetjp_4984_;
}
else
{
lean_inc(v_a_4983_);
lean_dec(v___x_4971_);
v___x_4985_ = lean_box(0);
v_isShared_4986_ = v_isSharedCheck_4990_;
goto v_resetjp_4984_;
}
v_resetjp_4984_:
{
lean_object* v___x_4988_; 
if (v_isShared_4986_ == 0)
{
v___x_4988_ = v___x_4985_;
goto v_reusejp_4987_;
}
else
{
lean_object* v_reuseFailAlloc_4989_; 
v_reuseFailAlloc_4989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4989_, 0, v_a_4983_);
v___x_4988_ = v_reuseFailAlloc_4989_;
goto v_reusejp_4987_;
}
v_reusejp_4987_:
{
return v___x_4988_;
}
}
}
}
else
{
lean_object* v_a_4991_; lean_object* v___x_4993_; uint8_t v_isShared_4994_; uint8_t v_isSharedCheck_4998_; 
lean_del_object(v___x_4962_);
lean_dec(v_snd_4960_);
lean_dec(v_snd_4956_);
v_a_4991_ = lean_ctor_get(v___x_4964_, 0);
v_isSharedCheck_4998_ = !lean_is_exclusive(v___x_4964_);
if (v_isSharedCheck_4998_ == 0)
{
v___x_4993_ = v___x_4964_;
v_isShared_4994_ = v_isSharedCheck_4998_;
goto v_resetjp_4992_;
}
else
{
lean_inc(v_a_4991_);
lean_dec(v___x_4964_);
v___x_4993_ = lean_box(0);
v_isShared_4994_ = v_isSharedCheck_4998_;
goto v_resetjp_4992_;
}
v_resetjp_4992_:
{
lean_object* v___x_4996_; 
if (v_isShared_4994_ == 0)
{
v___x_4996_ = v___x_4993_;
goto v_reusejp_4995_;
}
else
{
lean_object* v_reuseFailAlloc_4997_; 
v_reuseFailAlloc_4997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4997_, 0, v_a_4991_);
v___x_4996_ = v_reuseFailAlloc_4997_;
goto v_reusejp_4995_;
}
v_reusejp_4995_:
{
return v___x_4996_;
}
}
}
}
}
else
{
lean_dec(v_snd_4956_);
lean_dec(v_fst_4955_);
return v___x_4957_;
}
}
else
{
lean_dec_ref(v_body_4940_);
return v___x_4953_;
}
}
else
{
uint8_t v___x_5000_; 
v___x_5000_ = 0;
v___y_4944_ = v___x_5000_;
goto v___jp_4943_;
}
}
v___jp_4943_:
{
uint8_t v___x_4945_; lean_object* v___x_4946_; lean_object* v___x_4947_; lean_object* v___f_4948_; lean_object* v___x_4949_; 
v___x_4945_ = 1;
v___x_4946_ = lean_box(v___y_4944_);
v___x_4947_ = lean_box(v___x_4945_);
v___f_4948_ = lean_alloc_closure((void*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___lam__0___boxed), 11, 3);
lean_closure_set(v___f_4948_, 0, v_body_4940_);
lean_closure_set(v___f_4948_, 1, v___x_4946_);
lean_closure_set(v___f_4948_, 2, v___x_4947_);
v___x_4949_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v_binderName_4938_, v_binderType_4939_, v___f_4948_, v_a_4870_, v_a_4871_, v_a_4872_, v_a_4873_, v_a_4874_, v_a_4875_);
return v___x_4949_;
}
}
else
{
lean_object* v_a_5001_; lean_object* v___x_5003_; uint8_t v_isShared_5004_; uint8_t v_isSharedCheck_5008_; 
lean_dec_ref(v_body_4940_);
lean_dec_ref(v_binderType_4939_);
lean_dec(v_binderName_4938_);
v_a_5001_ = lean_ctor_get(v___x_4941_, 0);
v_isSharedCheck_5008_ = !lean_is_exclusive(v___x_4941_);
if (v_isSharedCheck_5008_ == 0)
{
v___x_5003_ = v___x_4941_;
v_isShared_5004_ = v_isSharedCheck_5008_;
goto v_resetjp_5002_;
}
else
{
lean_inc(v_a_5001_);
lean_dec(v___x_4941_);
v___x_5003_ = lean_box(0);
v_isShared_5004_ = v_isSharedCheck_5008_;
goto v_resetjp_5002_;
}
v_resetjp_5002_:
{
lean_object* v___x_5006_; 
if (v_isShared_5004_ == 0)
{
v___x_5006_ = v___x_5003_;
goto v_reusejp_5005_;
}
else
{
lean_object* v_reuseFailAlloc_5007_; 
v_reuseFailAlloc_5007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5007_, 0, v_a_5001_);
v___x_5006_ = v_reuseFailAlloc_5007_;
goto v_reusejp_5005_;
}
v_reusejp_5005_:
{
return v___x_5006_;
}
}
}
}
case 10:
{
lean_object* v_expr_5009_; 
v_expr_5009_ = lean_ctor_get(v_e_4869_, 1);
lean_inc_ref(v_expr_5009_);
lean_dec_ref_known(v_e_4869_, 2);
v_e_4869_ = v_expr_5009_;
goto _start;
}
default: 
{
lean_object* v___x_5011_; 
lean_inc_ref(v_e_4869_);
v___x_5011_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_4869_, v_a_4873_);
if (lean_obj_tag(v___x_5011_) == 0)
{
lean_object* v_a_5012_; lean_object* v_e_5014_; lean_object* v___y_5015_; lean_object* v___y_5016_; lean_object* v___y_5017_; lean_object* v___y_5018_; lean_object* v___x_5042_; uint8_t v___x_5043_; 
v_a_5012_ = lean_ctor_get(v___x_5011_, 0);
lean_inc(v_a_5012_);
lean_dec_ref_known(v___x_5011_, 1);
v___x_5042_ = l_Lean_Expr_cleanupAnnotations(v_a_5012_);
v___x_5043_ = l_Lean_Expr_isApp(v___x_5042_);
if (v___x_5043_ == 0)
{
lean_dec_ref(v___x_5042_);
v_e_5014_ = v_e_4869_;
v___y_5015_ = v_a_4872_;
v___y_5016_ = v_a_4873_;
v___y_5017_ = v_a_4874_;
v___y_5018_ = v_a_4875_;
goto v___jp_5013_;
}
else
{
lean_object* v_arg_5044_; lean_object* v___x_5045_; lean_object* v___x_5046_; uint8_t v___x_5047_; 
v_arg_5044_ = lean_ctor_get(v___x_5042_, 1);
lean_inc_ref(v_arg_5044_);
v___x_5045_ = l_Lean_Expr_appFnCleanup___redArg(v___x_5042_);
v___x_5046_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__12));
v___x_5047_ = l_Lean_Expr_isConstOf(v___x_5045_, v___x_5046_);
if (v___x_5047_ == 0)
{
uint8_t v___x_5048_; 
v___x_5048_ = l_Lean_Expr_isApp(v___x_5045_);
if (v___x_5048_ == 0)
{
lean_dec_ref(v___x_5045_);
lean_dec_ref(v_arg_5044_);
v_e_5014_ = v_e_4869_;
v___y_5015_ = v_a_4872_;
v___y_5016_ = v_a_4873_;
v___y_5017_ = v_a_4874_;
v___y_5018_ = v_a_4875_;
goto v___jp_5013_;
}
else
{
lean_object* v_arg_5049_; lean_object* v___x_5050_; lean_object* v___x_5051_; uint8_t v___x_5052_; 
v_arg_5049_ = lean_ctor_get(v___x_5045_, 1);
lean_inc_ref(v_arg_5049_);
v___x_5050_ = l_Lean_Expr_appFnCleanup___redArg(v___x_5045_);
v___x_5051_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__1));
v___x_5052_ = l_Lean_Expr_isConstOf(v___x_5050_, v___x_5051_);
if (v___x_5052_ == 0)
{
lean_object* v___x_5053_; uint8_t v___x_5054_; 
v___x_5053_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__10));
v___x_5054_ = l_Lean_Expr_isConstOf(v___x_5050_, v___x_5053_);
if (v___x_5054_ == 0)
{
lean_object* v___x_5055_; uint8_t v___x_5056_; 
v___x_5055_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__16));
v___x_5056_ = l_Lean_Expr_isConstOf(v___x_5050_, v___x_5055_);
if (v___x_5056_ == 0)
{
lean_object* v___x_5057_; uint8_t v___x_5058_; 
v___x_5057_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__14));
v___x_5058_ = l_Lean_Expr_isConstOf(v___x_5050_, v___x_5057_);
if (v___x_5058_ == 0)
{
uint8_t v___x_5059_; 
v___x_5059_ = l_Lean_Expr_isApp(v___x_5050_);
if (v___x_5059_ == 0)
{
lean_dec_ref(v___x_5050_);
lean_dec_ref(v_arg_5049_);
lean_dec_ref(v_arg_5044_);
v_e_5014_ = v_e_4869_;
v___y_5015_ = v_a_4872_;
v___y_5016_ = v_a_4873_;
v___y_5017_ = v_a_4874_;
v___y_5018_ = v_a_4875_;
goto v___jp_5013_;
}
else
{
lean_object* v_arg_5060_; lean_object* v___x_5061_; lean_object* v___x_5062_; uint8_t v___x_5063_; 
v_arg_5060_ = lean_ctor_get(v___x_5050_, 1);
lean_inc_ref(v_arg_5060_);
v___x_5061_ = l_Lean_Expr_appFnCleanup___redArg(v___x_5050_);
v___x_5062_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_implies_spec__0___closed__3));
v___x_5063_ = l_Lean_Expr_isConstOf(v___x_5061_, v___x_5062_);
lean_dec_ref(v___x_5061_);
if (v___x_5063_ == 0)
{
lean_dec_ref(v_arg_5060_);
lean_dec_ref(v_arg_5049_);
lean_dec_ref(v_arg_5044_);
v_e_5014_ = v_e_4869_;
v___y_5015_ = v_a_4872_;
v___y_5016_ = v_a_4873_;
v___y_5017_ = v_a_4874_;
v___y_5018_ = v_a_4875_;
goto v___jp_5013_;
}
else
{
uint8_t v___x_5064_; 
v___x_5064_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_isPropType(v_arg_5060_);
lean_dec_ref(v_arg_5060_);
if (v___x_5064_ == 0)
{
lean_dec_ref(v_arg_5049_);
lean_dec_ref(v_arg_5044_);
v_e_5014_ = v_e_4869_;
v___y_5015_ = v_a_4872_;
v___y_5016_ = v_a_4873_;
v___y_5017_ = v_a_4874_;
v___y_5018_ = v_a_4875_;
goto v___jp_5013_;
}
else
{
lean_object* v___x_5065_; 
lean_dec_ref(v_e_4869_);
lean_inc_ref(v_arg_5049_);
v___x_5065_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound(v_arg_5049_, v_a_4870_, v_a_4871_, v_a_4872_, v_a_4873_, v_a_4874_, v_a_4875_);
if (lean_obj_tag(v___x_5065_) == 0)
{
lean_object* v_a_5066_; lean_object* v___x_5068_; uint8_t v_isShared_5069_; uint8_t v_isSharedCheck_5167_; 
v_a_5066_ = lean_ctor_get(v___x_5065_, 0);
v_isSharedCheck_5167_ = !lean_is_exclusive(v___x_5065_);
if (v_isSharedCheck_5167_ == 0)
{
v___x_5068_ = v___x_5065_;
v_isShared_5069_ = v_isSharedCheck_5167_;
goto v_resetjp_5067_;
}
else
{
lean_inc(v_a_5066_);
lean_dec(v___x_5065_);
v___x_5068_ = lean_box(0);
v_isShared_5069_ = v_isSharedCheck_5167_;
goto v_resetjp_5067_;
}
v_resetjp_5067_:
{
lean_object* v_fst_5070_; lean_object* v_snd_5071_; lean_object* v___x_5072_; 
v_fst_5070_ = lean_ctor_get(v_a_5066_, 0);
lean_inc(v_fst_5070_);
v_snd_5071_ = lean_ctor_get(v_a_5066_, 1);
lean_inc(v_snd_5071_);
lean_dec(v_a_5066_);
lean_inc_ref(v_arg_5044_);
v___x_5072_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound(v_arg_5044_, v_a_4870_, v_a_4871_, v_a_4872_, v_a_4873_, v_a_4874_, v_a_4875_);
if (lean_obj_tag(v___x_5072_) == 0)
{
lean_object* v_a_5073_; lean_object* v___x_5075_; uint8_t v_isShared_5076_; uint8_t v_isSharedCheck_5166_; 
v_a_5073_ = lean_ctor_get(v___x_5072_, 0);
v_isSharedCheck_5166_ = !lean_is_exclusive(v___x_5072_);
if (v_isSharedCheck_5166_ == 0)
{
v___x_5075_ = v___x_5072_;
v_isShared_5076_ = v_isSharedCheck_5166_;
goto v_resetjp_5074_;
}
else
{
lean_inc(v_a_5073_);
lean_dec(v___x_5072_);
v___x_5075_ = lean_box(0);
v_isShared_5076_ = v_isSharedCheck_5166_;
goto v_resetjp_5074_;
}
v_resetjp_5074_:
{
lean_object* v_fst_5077_; lean_object* v_snd_5078_; lean_object* v___x_5080_; uint8_t v_isShared_5081_; uint8_t v_isSharedCheck_5165_; 
v_fst_5077_ = lean_ctor_get(v_a_5073_, 0);
v_snd_5078_ = lean_ctor_get(v_a_5073_, 1);
v_isSharedCheck_5165_ = !lean_is_exclusive(v_a_5073_);
if (v_isSharedCheck_5165_ == 0)
{
v___x_5080_ = v_a_5073_;
v_isShared_5081_ = v_isSharedCheck_5165_;
goto v_resetjp_5079_;
}
else
{
lean_inc(v_snd_5078_);
lean_inc(v_fst_5077_);
lean_dec(v_a_5073_);
v___x_5080_ = lean_box(0);
v_isShared_5081_ = v_isSharedCheck_5165_;
goto v_resetjp_5079_;
}
v_resetjp_5079_:
{
lean_object* v___x_5082_; lean_object* v___x_5084_; 
v___x_5082_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_withoutUnits___redArg___closed__2));
if (v_isShared_5076_ == 0)
{
lean_ctor_set_tag(v___x_5075_, 1);
lean_ctor_set(v___x_5075_, 0, v_arg_5049_);
v___x_5084_ = v___x_5075_;
goto v_reusejp_5083_;
}
else
{
lean_object* v_reuseFailAlloc_5164_; 
v_reuseFailAlloc_5164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5164_, 0, v_arg_5049_);
v___x_5084_ = v_reuseFailAlloc_5164_;
goto v_reusejp_5083_;
}
v_reusejp_5083_:
{
lean_object* v___x_5086_; 
if (v_isShared_5069_ == 0)
{
lean_ctor_set_tag(v___x_5068_, 1);
lean_ctor_set(v___x_5068_, 0, v_arg_5044_);
v___x_5086_ = v___x_5068_;
goto v_reusejp_5085_;
}
else
{
lean_object* v_reuseFailAlloc_5163_; 
v_reuseFailAlloc_5163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5163_, 0, v_arg_5044_);
v___x_5086_ = v_reuseFailAlloc_5163_;
goto v_reusejp_5085_;
}
v_reusejp_5085_:
{
lean_object* v___x_5087_; lean_object* v___x_5088_; lean_object* v___x_5089_; lean_object* v___x_5090_; lean_object* v___x_5091_; 
v___x_5087_ = lean_unsigned_to_nat(2u);
v___x_5088_ = lean_mk_empty_array_with_capacity(v___x_5087_);
lean_inc_ref(v___x_5088_);
v___x_5089_ = lean_array_push(v___x_5088_, v___x_5084_);
v___x_5090_ = lean_array_push(v___x_5089_, v___x_5086_);
lean_inc_ref(v___x_5090_);
v___x_5091_ = l_Lean_Meta_mkAppOptM(v___x_5082_, v___x_5090_, v_a_4872_, v_a_4873_, v_a_4874_, v_a_4875_);
if (lean_obj_tag(v___x_5091_) == 0)
{
lean_object* v_a_5092_; lean_object* v___x_5093_; lean_object* v___x_5094_; 
v_a_5092_ = lean_ctor_get(v___x_5091_, 0);
lean_inc(v_a_5092_);
lean_dec_ref_known(v___x_5091_, 1);
v___x_5093_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___closed__1));
v___x_5094_ = l_Lean_Meta_mkAppOptM(v___x_5093_, v___x_5090_, v_a_4872_, v_a_4873_, v_a_4874_, v_a_4875_);
if (lean_obj_tag(v___x_5094_) == 0)
{
lean_object* v_a_5095_; lean_object* v___x_5096_; lean_object* v___x_5097_; lean_object* v___x_5098_; lean_object* v___x_5099_; 
v_a_5095_ = lean_ctor_get(v___x_5094_, 0);
lean_inc(v_a_5095_);
lean_dec_ref_known(v___x_5094_, 1);
v___x_5096_ = ((lean_object*)(lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__3___redArg___lam__8___closed__0));
lean_inc_ref(v___x_5088_);
v___x_5097_ = lean_array_push(v___x_5088_, v_a_5092_);
v___x_5098_ = lean_array_push(v___x_5097_, v_a_5095_);
v___x_5099_ = l_Lean_Meta_mkAppM(v___x_5096_, v___x_5098_, v_a_4872_, v_a_4873_, v_a_4874_, v_a_4875_);
if (lean_obj_tag(v___x_5099_) == 0)
{
lean_object* v_a_5100_; lean_object* v___x_5101_; lean_object* v___x_5102_; lean_object* v___x_5103_; lean_object* v___x_5104_; 
v_a_5100_ = lean_ctor_get(v___x_5099_, 0);
lean_inc(v_a_5100_);
lean_dec_ref_known(v___x_5099_, 1);
v___x_5101_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__11));
lean_inc_ref(v___x_5088_);
v___x_5102_ = lean_array_push(v___x_5088_, v_snd_5071_);
v___x_5103_ = lean_array_push(v___x_5102_, v_snd_5078_);
v___x_5104_ = l_Lean_Meta_mkAppM(v___x_5101_, v___x_5103_, v_a_4872_, v_a_4873_, v_a_4874_, v_a_4875_);
if (lean_obj_tag(v___x_5104_) == 0)
{
lean_object* v_a_5105_; lean_object* v___x_5106_; lean_object* v___x_5107_; lean_object* v___x_5108_; lean_object* v___x_5109_; 
v_a_5105_ = lean_ctor_get(v___x_5104_, 0);
lean_inc(v_a_5105_);
lean_dec_ref_known(v___x_5104_, 1);
v___x_5106_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__1));
v___x_5107_ = lean_array_push(v___x_5088_, v_a_5100_);
v___x_5108_ = lean_array_push(v___x_5107_, v_a_5105_);
v___x_5109_ = l_Lean_Meta_mkAppM(v___x_5106_, v___x_5108_, v_a_4872_, v_a_4873_, v_a_4874_, v_a_4875_);
if (lean_obj_tag(v___x_5109_) == 0)
{
lean_object* v_a_5110_; lean_object* v___x_5112_; uint8_t v_isShared_5113_; uint8_t v_isSharedCheck_5122_; 
v_a_5110_ = lean_ctor_get(v___x_5109_, 0);
v_isSharedCheck_5122_ = !lean_is_exclusive(v___x_5109_);
if (v_isSharedCheck_5122_ == 0)
{
v___x_5112_ = v___x_5109_;
v_isShared_5113_ = v_isSharedCheck_5122_;
goto v_resetjp_5111_;
}
else
{
lean_inc(v_a_5110_);
lean_dec(v___x_5109_);
v___x_5112_ = lean_box(0);
v_isShared_5113_ = v_isSharedCheck_5122_;
goto v_resetjp_5111_;
}
v_resetjp_5111_:
{
lean_object* v___x_5114_; lean_object* v___x_5115_; lean_object* v___x_5117_; 
v___x_5114_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_equivNormal_spec__2___closed__0, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_equivNormal_spec__2___closed__0_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_equivNormal_spec__2___closed__0);
v___x_5115_ = l_Lean_mkAppB(v___x_5114_, v_fst_5070_, v_fst_5077_);
if (v_isShared_5081_ == 0)
{
lean_ctor_set(v___x_5080_, 1, v_a_5110_);
lean_ctor_set(v___x_5080_, 0, v___x_5115_);
v___x_5117_ = v___x_5080_;
goto v_reusejp_5116_;
}
else
{
lean_object* v_reuseFailAlloc_5121_; 
v_reuseFailAlloc_5121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5121_, 0, v___x_5115_);
lean_ctor_set(v_reuseFailAlloc_5121_, 1, v_a_5110_);
v___x_5117_ = v_reuseFailAlloc_5121_;
goto v_reusejp_5116_;
}
v_reusejp_5116_:
{
lean_object* v___x_5119_; 
if (v_isShared_5113_ == 0)
{
lean_ctor_set(v___x_5112_, 0, v___x_5117_);
v___x_5119_ = v___x_5112_;
goto v_reusejp_5118_;
}
else
{
lean_object* v_reuseFailAlloc_5120_; 
v_reuseFailAlloc_5120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5120_, 0, v___x_5117_);
v___x_5119_ = v_reuseFailAlloc_5120_;
goto v_reusejp_5118_;
}
v_reusejp_5118_:
{
return v___x_5119_;
}
}
}
}
else
{
lean_object* v_a_5123_; lean_object* v___x_5125_; uint8_t v_isShared_5126_; uint8_t v_isSharedCheck_5130_; 
lean_del_object(v___x_5080_);
lean_dec(v_fst_5077_);
lean_dec(v_fst_5070_);
v_a_5123_ = lean_ctor_get(v___x_5109_, 0);
v_isSharedCheck_5130_ = !lean_is_exclusive(v___x_5109_);
if (v_isSharedCheck_5130_ == 0)
{
v___x_5125_ = v___x_5109_;
v_isShared_5126_ = v_isSharedCheck_5130_;
goto v_resetjp_5124_;
}
else
{
lean_inc(v_a_5123_);
lean_dec(v___x_5109_);
v___x_5125_ = lean_box(0);
v_isShared_5126_ = v_isSharedCheck_5130_;
goto v_resetjp_5124_;
}
v_resetjp_5124_:
{
lean_object* v___x_5128_; 
if (v_isShared_5126_ == 0)
{
v___x_5128_ = v___x_5125_;
goto v_reusejp_5127_;
}
else
{
lean_object* v_reuseFailAlloc_5129_; 
v_reuseFailAlloc_5129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5129_, 0, v_a_5123_);
v___x_5128_ = v_reuseFailAlloc_5129_;
goto v_reusejp_5127_;
}
v_reusejp_5127_:
{
return v___x_5128_;
}
}
}
}
else
{
lean_object* v_a_5131_; lean_object* v___x_5133_; uint8_t v_isShared_5134_; uint8_t v_isSharedCheck_5138_; 
lean_dec(v_a_5100_);
lean_dec_ref(v___x_5088_);
lean_del_object(v___x_5080_);
lean_dec(v_fst_5077_);
lean_dec(v_fst_5070_);
v_a_5131_ = lean_ctor_get(v___x_5104_, 0);
v_isSharedCheck_5138_ = !lean_is_exclusive(v___x_5104_);
if (v_isSharedCheck_5138_ == 0)
{
v___x_5133_ = v___x_5104_;
v_isShared_5134_ = v_isSharedCheck_5138_;
goto v_resetjp_5132_;
}
else
{
lean_inc(v_a_5131_);
lean_dec(v___x_5104_);
v___x_5133_ = lean_box(0);
v_isShared_5134_ = v_isSharedCheck_5138_;
goto v_resetjp_5132_;
}
v_resetjp_5132_:
{
lean_object* v___x_5136_; 
if (v_isShared_5134_ == 0)
{
v___x_5136_ = v___x_5133_;
goto v_reusejp_5135_;
}
else
{
lean_object* v_reuseFailAlloc_5137_; 
v_reuseFailAlloc_5137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5137_, 0, v_a_5131_);
v___x_5136_ = v_reuseFailAlloc_5137_;
goto v_reusejp_5135_;
}
v_reusejp_5135_:
{
return v___x_5136_;
}
}
}
}
else
{
lean_object* v_a_5139_; lean_object* v___x_5141_; uint8_t v_isShared_5142_; uint8_t v_isSharedCheck_5146_; 
lean_dec_ref(v___x_5088_);
lean_del_object(v___x_5080_);
lean_dec(v_snd_5078_);
lean_dec(v_fst_5077_);
lean_dec(v_snd_5071_);
lean_dec(v_fst_5070_);
v_a_5139_ = lean_ctor_get(v___x_5099_, 0);
v_isSharedCheck_5146_ = !lean_is_exclusive(v___x_5099_);
if (v_isSharedCheck_5146_ == 0)
{
v___x_5141_ = v___x_5099_;
v_isShared_5142_ = v_isSharedCheck_5146_;
goto v_resetjp_5140_;
}
else
{
lean_inc(v_a_5139_);
lean_dec(v___x_5099_);
v___x_5141_ = lean_box(0);
v_isShared_5142_ = v_isSharedCheck_5146_;
goto v_resetjp_5140_;
}
v_resetjp_5140_:
{
lean_object* v___x_5144_; 
if (v_isShared_5142_ == 0)
{
v___x_5144_ = v___x_5141_;
goto v_reusejp_5143_;
}
else
{
lean_object* v_reuseFailAlloc_5145_; 
v_reuseFailAlloc_5145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5145_, 0, v_a_5139_);
v___x_5144_ = v_reuseFailAlloc_5145_;
goto v_reusejp_5143_;
}
v_reusejp_5143_:
{
return v___x_5144_;
}
}
}
}
else
{
lean_object* v_a_5147_; lean_object* v___x_5149_; uint8_t v_isShared_5150_; uint8_t v_isSharedCheck_5154_; 
lean_dec(v_a_5092_);
lean_dec_ref(v___x_5088_);
lean_del_object(v___x_5080_);
lean_dec(v_snd_5078_);
lean_dec(v_fst_5077_);
lean_dec(v_snd_5071_);
lean_dec(v_fst_5070_);
v_a_5147_ = lean_ctor_get(v___x_5094_, 0);
v_isSharedCheck_5154_ = !lean_is_exclusive(v___x_5094_);
if (v_isSharedCheck_5154_ == 0)
{
v___x_5149_ = v___x_5094_;
v_isShared_5150_ = v_isSharedCheck_5154_;
goto v_resetjp_5148_;
}
else
{
lean_inc(v_a_5147_);
lean_dec(v___x_5094_);
v___x_5149_ = lean_box(0);
v_isShared_5150_ = v_isSharedCheck_5154_;
goto v_resetjp_5148_;
}
v_resetjp_5148_:
{
lean_object* v___x_5152_; 
if (v_isShared_5150_ == 0)
{
v___x_5152_ = v___x_5149_;
goto v_reusejp_5151_;
}
else
{
lean_object* v_reuseFailAlloc_5153_; 
v_reuseFailAlloc_5153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5153_, 0, v_a_5147_);
v___x_5152_ = v_reuseFailAlloc_5153_;
goto v_reusejp_5151_;
}
v_reusejp_5151_:
{
return v___x_5152_;
}
}
}
}
else
{
lean_object* v_a_5155_; lean_object* v___x_5157_; uint8_t v_isShared_5158_; uint8_t v_isSharedCheck_5162_; 
lean_dec_ref(v___x_5090_);
lean_dec_ref(v___x_5088_);
lean_del_object(v___x_5080_);
lean_dec(v_snd_5078_);
lean_dec(v_fst_5077_);
lean_dec(v_snd_5071_);
lean_dec(v_fst_5070_);
v_a_5155_ = lean_ctor_get(v___x_5091_, 0);
v_isSharedCheck_5162_ = !lean_is_exclusive(v___x_5091_);
if (v_isSharedCheck_5162_ == 0)
{
v___x_5157_ = v___x_5091_;
v_isShared_5158_ = v_isSharedCheck_5162_;
goto v_resetjp_5156_;
}
else
{
lean_inc(v_a_5155_);
lean_dec(v___x_5091_);
v___x_5157_ = lean_box(0);
v_isShared_5158_ = v_isSharedCheck_5162_;
goto v_resetjp_5156_;
}
v_resetjp_5156_:
{
lean_object* v___x_5160_; 
if (v_isShared_5158_ == 0)
{
v___x_5160_ = v___x_5157_;
goto v_reusejp_5159_;
}
else
{
lean_object* v_reuseFailAlloc_5161_; 
v_reuseFailAlloc_5161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5161_, 0, v_a_5155_);
v___x_5160_ = v_reuseFailAlloc_5161_;
goto v_reusejp_5159_;
}
v_reusejp_5159_:
{
return v___x_5160_;
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
lean_dec(v_snd_5071_);
lean_dec(v_fst_5070_);
lean_del_object(v___x_5068_);
lean_dec_ref(v_arg_5049_);
lean_dec_ref(v_arg_5044_);
return v___x_5072_;
}
}
}
else
{
lean_dec_ref(v_arg_5049_);
lean_dec_ref(v_arg_5044_);
return v___x_5065_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_5050_);
lean_dec_ref(v_e_4869_);
v_fn_4914_ = v___x_5057_;
v_a_4915_ = v_arg_5049_;
v_b_4916_ = v_arg_5044_;
v___y_4917_ = v_a_4870_;
v___y_4918_ = v_a_4871_;
v___y_4919_ = v_a_4872_;
v___y_4920_ = v_a_4873_;
v___y_4921_ = v_a_4874_;
v___y_4922_ = v_a_4875_;
goto v___jp_4913_;
}
}
else
{
lean_dec_ref(v___x_5050_);
lean_dec_ref(v_e_4869_);
v_fn_4914_ = v___x_5055_;
v_a_4915_ = v_arg_5049_;
v_b_4916_ = v_arg_5044_;
v___y_4917_ = v_a_4870_;
v___y_4918_ = v_a_4871_;
v___y_4919_ = v_a_4872_;
v___y_4920_ = v_a_4873_;
v___y_4921_ = v_a_4874_;
v___y_4922_ = v_a_4875_;
goto v___jp_4913_;
}
}
else
{
lean_dec_ref(v___x_5050_);
lean_dec_ref(v_e_4869_);
v_fn_4914_ = v___x_5053_;
v_a_4915_ = v_arg_5049_;
v_b_4916_ = v_arg_5044_;
v___y_4917_ = v_a_4870_;
v___y_4918_ = v_a_4871_;
v___y_4919_ = v_a_4872_;
v___y_4920_ = v_a_4873_;
v___y_4921_ = v_a_4874_;
v___y_4922_ = v_a_4875_;
goto v___jp_4913_;
}
}
else
{
lean_dec_ref(v___x_5050_);
lean_dec_ref(v_arg_5049_);
if (lean_obj_tag(v_arg_5044_) == 6)
{
lean_object* v_binderName_5168_; lean_object* v_binderType_5169_; lean_object* v_body_5170_; lean_object* v___x_5171_; lean_object* v___x_5172_; lean_object* v___f_5173_; lean_object* v___x_5174_; 
lean_dec_ref(v_e_4869_);
v_binderName_5168_ = lean_ctor_get(v_arg_5044_, 0);
lean_inc(v_binderName_5168_);
v_binderType_5169_ = lean_ctor_get(v_arg_5044_, 1);
lean_inc_ref(v_binderType_5169_);
v_body_5170_ = lean_ctor_get(v_arg_5044_, 2);
lean_inc_ref(v_body_5170_);
lean_dec_ref_known(v_arg_5044_, 3);
v___x_5171_ = lean_box(v___x_5047_);
v___x_5172_ = lean_box(v___x_5052_);
v___f_5173_ = lean_alloc_closure((void*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___lam__1___boxed), 12, 4);
lean_closure_set(v___f_5173_, 0, v_body_5170_);
lean_closure_set(v___f_5173_, 1, v___x_5171_);
lean_closure_set(v___f_5173_, 2, v___x_5172_);
lean_closure_set(v___f_5173_, 3, v___x_5051_);
v___x_5174_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v_binderName_5168_, v_binderType_5169_, v___f_5173_, v_a_4870_, v_a_4871_, v_a_4872_, v_a_4873_, v_a_4874_, v_a_4875_);
return v___x_5174_;
}
else
{
lean_dec_ref(v_arg_5044_);
v_e_5014_ = v_e_4869_;
v___y_5015_ = v_a_4872_;
v___y_5016_ = v_a_4873_;
v___y_5017_ = v_a_4874_;
v___y_5018_ = v_a_4875_;
goto v___jp_5013_;
}
}
}
}
else
{
lean_object* v___x_5175_; 
lean_dec_ref(v___x_5045_);
lean_inc_ref(v_arg_5044_);
v___x_5175_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_arg_5044_, v_a_4873_);
if (lean_obj_tag(v___x_5175_) == 0)
{
lean_object* v_a_5176_; lean_object* v___y_5178_; lean_object* v___y_5179_; lean_object* v___y_5180_; lean_object* v___y_5181_; lean_object* v___y_5182_; lean_object* v___y_5183_; lean_object* v___x_5218_; uint8_t v___x_5219_; 
v_a_5176_ = lean_ctor_get(v___x_5175_, 0);
lean_inc(v_a_5176_);
lean_dec_ref_known(v___x_5175_, 1);
v___x_5218_ = l_Lean_Expr_cleanupAnnotations(v_a_5176_);
v___x_5219_ = l_Lean_Expr_isApp(v___x_5218_);
if (v___x_5219_ == 0)
{
lean_dec_ref(v___x_5218_);
lean_dec_ref(v_e_4869_);
v___y_5178_ = v_a_4870_;
v___y_5179_ = v_a_4871_;
v___y_5180_ = v_a_4872_;
v___y_5181_ = v_a_4873_;
v___y_5182_ = v_a_4874_;
v___y_5183_ = v_a_4875_;
goto v___jp_5177_;
}
else
{
lean_object* v_arg_5220_; lean_object* v___x_5221_; uint8_t v___x_5222_; 
v_arg_5220_ = lean_ctor_get(v___x_5218_, 1);
lean_inc_ref(v_arg_5220_);
v___x_5221_ = l_Lean_Expr_appFnCleanup___redArg(v___x_5218_);
v___x_5222_ = l_Lean_Expr_isApp(v___x_5221_);
if (v___x_5222_ == 0)
{
lean_dec_ref(v___x_5221_);
lean_dec_ref(v_arg_5220_);
lean_dec_ref(v_e_4869_);
v___y_5178_ = v_a_4870_;
v___y_5179_ = v_a_4871_;
v___y_5180_ = v_a_4872_;
v___y_5181_ = v_a_4873_;
v___y_5182_ = v_a_4874_;
v___y_5183_ = v_a_4875_;
goto v___jp_5177_;
}
else
{
lean_object* v_arg_5223_; lean_object* v___x_5224_; uint8_t v___x_5225_; 
v_arg_5223_ = lean_ctor_get(v___x_5221_, 1);
lean_inc_ref(v_arg_5223_);
v___x_5224_ = l_Lean_Expr_appFnCleanup___redArg(v___x_5221_);
v___x_5225_ = l_Lean_Expr_isApp(v___x_5224_);
if (v___x_5225_ == 0)
{
lean_dec_ref(v___x_5224_);
lean_dec_ref(v_arg_5223_);
lean_dec_ref(v_arg_5220_);
lean_dec_ref(v_e_4869_);
v___y_5178_ = v_a_4870_;
v___y_5179_ = v_a_4871_;
v___y_5180_ = v_a_4872_;
v___y_5181_ = v_a_4873_;
v___y_5182_ = v_a_4874_;
v___y_5183_ = v_a_4875_;
goto v___jp_5177_;
}
else
{
lean_object* v___x_5226_; uint8_t v___x_5227_; 
v___x_5226_ = l_Lean_Expr_appFnCleanup___redArg(v___x_5224_);
v___x_5227_ = l_Lean_Expr_isApp(v___x_5226_);
if (v___x_5227_ == 0)
{
lean_dec_ref(v___x_5226_);
lean_dec_ref(v_arg_5223_);
lean_dec_ref(v_arg_5220_);
lean_dec_ref(v_e_4869_);
v___y_5178_ = v_a_4870_;
v___y_5179_ = v_a_4871_;
v___y_5180_ = v_a_4872_;
v___y_5181_ = v_a_4873_;
v___y_5182_ = v_a_4874_;
v___y_5183_ = v_a_4875_;
goto v___jp_5177_;
}
else
{
lean_object* v___x_5228_; lean_object* v___x_5229_; uint8_t v___x_5230_; 
v___x_5228_ = l_Lean_Expr_appFnCleanup___redArg(v___x_5226_);
v___x_5229_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___closed__4));
v___x_5230_ = l_Lean_Expr_isConstOf(v___x_5228_, v___x_5229_);
if (v___x_5230_ == 0)
{
lean_object* v___x_5231_; uint8_t v___x_5232_; 
v___x_5231_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___closed__7));
v___x_5232_ = l_Lean_Expr_isConstOf(v___x_5228_, v___x_5231_);
lean_dec_ref(v___x_5228_);
if (v___x_5232_ == 0)
{
lean_dec_ref(v_arg_5223_);
lean_dec_ref(v_arg_5220_);
lean_dec_ref(v_e_4869_);
v___y_5178_ = v_a_4870_;
v___y_5179_ = v_a_4871_;
v___y_5180_ = v_a_4872_;
v___y_5181_ = v_a_4873_;
v___y_5182_ = v_a_4874_;
v___y_5183_ = v_a_4875_;
goto v___jp_5177_;
}
else
{
lean_object* v___x_5233_; lean_object* v___x_5234_; lean_object* v___x_5235_; lean_object* v___x_5236_; lean_object* v___x_5237_; 
lean_dec_ref(v_arg_5044_);
v___x_5233_ = lean_unsigned_to_nat(2u);
v___x_5234_ = lean_mk_empty_array_with_capacity(v___x_5233_);
v___x_5235_ = lean_array_push(v___x_5234_, v_arg_5220_);
v___x_5236_ = lean_array_push(v___x_5235_, v_arg_5223_);
v___x_5237_ = l_Lean_Meta_mkAppM(v___x_5229_, v___x_5236_, v_a_4872_, v_a_4873_, v_a_4874_, v_a_4875_);
if (lean_obj_tag(v___x_5237_) == 0)
{
lean_object* v_a_5238_; lean_object* v___x_5239_; 
v_a_5238_ = lean_ctor_get(v___x_5237_, 0);
lean_inc_n(v_a_5238_, 2);
lean_dec_ref_known(v___x_5237_, 1);
v___x_5239_ = lp_vampireReplay_Vampire_Reconstruct_arithmeticIff(v_e_4869_, v_a_5238_, v_a_4870_, v_a_4871_, v_a_4872_, v_a_4873_, v_a_4874_, v_a_4875_);
if (lean_obj_tag(v___x_5239_) == 0)
{
lean_object* v_a_5240_; lean_object* v___x_5242_; uint8_t v_isShared_5243_; uint8_t v_isSharedCheck_5248_; 
v_a_5240_ = lean_ctor_get(v___x_5239_, 0);
v_isSharedCheck_5248_ = !lean_is_exclusive(v___x_5239_);
if (v_isSharedCheck_5248_ == 0)
{
v___x_5242_ = v___x_5239_;
v_isShared_5243_ = v_isSharedCheck_5248_;
goto v_resetjp_5241_;
}
else
{
lean_inc(v_a_5240_);
lean_dec(v___x_5239_);
v___x_5242_ = lean_box(0);
v_isShared_5243_ = v_isSharedCheck_5248_;
goto v_resetjp_5241_;
}
v_resetjp_5241_:
{
lean_object* v___x_5244_; lean_object* v___x_5246_; 
v___x_5244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5244_, 0, v_a_5238_);
lean_ctor_set(v___x_5244_, 1, v_a_5240_);
if (v_isShared_5243_ == 0)
{
lean_ctor_set(v___x_5242_, 0, v___x_5244_);
v___x_5246_ = v___x_5242_;
goto v_reusejp_5245_;
}
else
{
lean_object* v_reuseFailAlloc_5247_; 
v_reuseFailAlloc_5247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5247_, 0, v___x_5244_);
v___x_5246_ = v_reuseFailAlloc_5247_;
goto v_reusejp_5245_;
}
v_reusejp_5245_:
{
return v___x_5246_;
}
}
}
else
{
lean_object* v_a_5249_; lean_object* v___x_5251_; uint8_t v_isShared_5252_; uint8_t v_isSharedCheck_5256_; 
lean_dec(v_a_5238_);
v_a_5249_ = lean_ctor_get(v___x_5239_, 0);
v_isSharedCheck_5256_ = !lean_is_exclusive(v___x_5239_);
if (v_isSharedCheck_5256_ == 0)
{
v___x_5251_ = v___x_5239_;
v_isShared_5252_ = v_isSharedCheck_5256_;
goto v_resetjp_5250_;
}
else
{
lean_inc(v_a_5249_);
lean_dec(v___x_5239_);
v___x_5251_ = lean_box(0);
v_isShared_5252_ = v_isSharedCheck_5256_;
goto v_resetjp_5250_;
}
v_resetjp_5250_:
{
lean_object* v___x_5254_; 
if (v_isShared_5252_ == 0)
{
v___x_5254_ = v___x_5251_;
goto v_reusejp_5253_;
}
else
{
lean_object* v_reuseFailAlloc_5255_; 
v_reuseFailAlloc_5255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5255_, 0, v_a_5249_);
v___x_5254_ = v_reuseFailAlloc_5255_;
goto v_reusejp_5253_;
}
v_reusejp_5253_:
{
return v___x_5254_;
}
}
}
}
else
{
lean_object* v_a_5257_; lean_object* v___x_5259_; uint8_t v_isShared_5260_; uint8_t v_isSharedCheck_5264_; 
lean_dec_ref(v_e_4869_);
v_a_5257_ = lean_ctor_get(v___x_5237_, 0);
v_isSharedCheck_5264_ = !lean_is_exclusive(v___x_5237_);
if (v_isSharedCheck_5264_ == 0)
{
v___x_5259_ = v___x_5237_;
v_isShared_5260_ = v_isSharedCheck_5264_;
goto v_resetjp_5258_;
}
else
{
lean_inc(v_a_5257_);
lean_dec(v___x_5237_);
v___x_5259_ = lean_box(0);
v_isShared_5260_ = v_isSharedCheck_5264_;
goto v_resetjp_5258_;
}
v_resetjp_5258_:
{
lean_object* v___x_5262_; 
if (v_isShared_5260_ == 0)
{
v___x_5262_ = v___x_5259_;
goto v_reusejp_5261_;
}
else
{
lean_object* v_reuseFailAlloc_5263_; 
v_reuseFailAlloc_5263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5263_, 0, v_a_5257_);
v___x_5262_ = v_reuseFailAlloc_5263_;
goto v_reusejp_5261_;
}
v_reusejp_5261_:
{
return v___x_5262_;
}
}
}
}
}
else
{
lean_object* v___x_5265_; lean_object* v___x_5266_; lean_object* v___x_5267_; lean_object* v___x_5268_; lean_object* v___x_5269_; lean_object* v___x_5270_; 
lean_dec_ref(v___x_5228_);
lean_dec_ref(v_arg_5044_);
v___x_5265_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___closed__7));
v___x_5266_ = lean_unsigned_to_nat(2u);
v___x_5267_ = lean_mk_empty_array_with_capacity(v___x_5266_);
v___x_5268_ = lean_array_push(v___x_5267_, v_arg_5220_);
v___x_5269_ = lean_array_push(v___x_5268_, v_arg_5223_);
v___x_5270_ = l_Lean_Meta_mkAppM(v___x_5265_, v___x_5269_, v_a_4872_, v_a_4873_, v_a_4874_, v_a_4875_);
if (lean_obj_tag(v___x_5270_) == 0)
{
lean_object* v_a_5271_; lean_object* v___x_5272_; 
v_a_5271_ = lean_ctor_get(v___x_5270_, 0);
lean_inc_n(v_a_5271_, 2);
lean_dec_ref_known(v___x_5270_, 1);
v___x_5272_ = lp_vampireReplay_Vampire_Reconstruct_arithmeticIff(v_e_4869_, v_a_5271_, v_a_4870_, v_a_4871_, v_a_4872_, v_a_4873_, v_a_4874_, v_a_4875_);
if (lean_obj_tag(v___x_5272_) == 0)
{
lean_object* v_a_5273_; lean_object* v___x_5275_; uint8_t v_isShared_5276_; uint8_t v_isSharedCheck_5281_; 
v_a_5273_ = lean_ctor_get(v___x_5272_, 0);
v_isSharedCheck_5281_ = !lean_is_exclusive(v___x_5272_);
if (v_isSharedCheck_5281_ == 0)
{
v___x_5275_ = v___x_5272_;
v_isShared_5276_ = v_isSharedCheck_5281_;
goto v_resetjp_5274_;
}
else
{
lean_inc(v_a_5273_);
lean_dec(v___x_5272_);
v___x_5275_ = lean_box(0);
v_isShared_5276_ = v_isSharedCheck_5281_;
goto v_resetjp_5274_;
}
v_resetjp_5274_:
{
lean_object* v___x_5277_; lean_object* v___x_5279_; 
v___x_5277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5277_, 0, v_a_5271_);
lean_ctor_set(v___x_5277_, 1, v_a_5273_);
if (v_isShared_5276_ == 0)
{
lean_ctor_set(v___x_5275_, 0, v___x_5277_);
v___x_5279_ = v___x_5275_;
goto v_reusejp_5278_;
}
else
{
lean_object* v_reuseFailAlloc_5280_; 
v_reuseFailAlloc_5280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5280_, 0, v___x_5277_);
v___x_5279_ = v_reuseFailAlloc_5280_;
goto v_reusejp_5278_;
}
v_reusejp_5278_:
{
return v___x_5279_;
}
}
}
else
{
lean_object* v_a_5282_; lean_object* v___x_5284_; uint8_t v_isShared_5285_; uint8_t v_isSharedCheck_5289_; 
lean_dec(v_a_5271_);
v_a_5282_ = lean_ctor_get(v___x_5272_, 0);
v_isSharedCheck_5289_ = !lean_is_exclusive(v___x_5272_);
if (v_isSharedCheck_5289_ == 0)
{
v___x_5284_ = v___x_5272_;
v_isShared_5285_ = v_isSharedCheck_5289_;
goto v_resetjp_5283_;
}
else
{
lean_inc(v_a_5282_);
lean_dec(v___x_5272_);
v___x_5284_ = lean_box(0);
v_isShared_5285_ = v_isSharedCheck_5289_;
goto v_resetjp_5283_;
}
v_resetjp_5283_:
{
lean_object* v___x_5287_; 
if (v_isShared_5285_ == 0)
{
v___x_5287_ = v___x_5284_;
goto v_reusejp_5286_;
}
else
{
lean_object* v_reuseFailAlloc_5288_; 
v_reuseFailAlloc_5288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5288_, 0, v_a_5282_);
v___x_5287_ = v_reuseFailAlloc_5288_;
goto v_reusejp_5286_;
}
v_reusejp_5286_:
{
return v___x_5287_;
}
}
}
}
else
{
lean_object* v_a_5290_; lean_object* v___x_5292_; uint8_t v_isShared_5293_; uint8_t v_isSharedCheck_5297_; 
lean_dec_ref(v_e_4869_);
v_a_5290_ = lean_ctor_get(v___x_5270_, 0);
v_isSharedCheck_5297_ = !lean_is_exclusive(v___x_5270_);
if (v_isSharedCheck_5297_ == 0)
{
v___x_5292_ = v___x_5270_;
v_isShared_5293_ = v_isSharedCheck_5297_;
goto v_resetjp_5291_;
}
else
{
lean_inc(v_a_5290_);
lean_dec(v___x_5270_);
v___x_5292_ = lean_box(0);
v_isShared_5293_ = v_isSharedCheck_5297_;
goto v_resetjp_5291_;
}
v_resetjp_5291_:
{
lean_object* v___x_5295_; 
if (v_isShared_5293_ == 0)
{
v___x_5295_ = v___x_5292_;
goto v_reusejp_5294_;
}
else
{
lean_object* v_reuseFailAlloc_5296_; 
v_reuseFailAlloc_5296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5296_, 0, v_a_5290_);
v___x_5295_ = v_reuseFailAlloc_5296_;
goto v_reusejp_5294_;
}
v_reusejp_5294_:
{
return v___x_5295_;
}
}
}
}
}
}
}
}
v___jp_5177_:
{
lean_object* v___x_5184_; 
v___x_5184_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound(v_arg_5044_, v___y_5178_, v___y_5179_, v___y_5180_, v___y_5181_, v___y_5182_, v___y_5183_);
if (lean_obj_tag(v___x_5184_) == 0)
{
lean_object* v_a_5185_; lean_object* v_fst_5186_; lean_object* v_snd_5187_; lean_object* v___x_5189_; uint8_t v_isShared_5190_; uint8_t v_isSharedCheck_5217_; 
v_a_5185_ = lean_ctor_get(v___x_5184_, 0);
lean_inc(v_a_5185_);
lean_dec_ref_known(v___x_5184_, 1);
v_fst_5186_ = lean_ctor_get(v_a_5185_, 0);
v_snd_5187_ = lean_ctor_get(v_a_5185_, 1);
v_isSharedCheck_5217_ = !lean_is_exclusive(v_a_5185_);
if (v_isSharedCheck_5217_ == 0)
{
v___x_5189_ = v_a_5185_;
v_isShared_5190_ = v_isSharedCheck_5217_;
goto v_resetjp_5188_;
}
else
{
lean_inc(v_snd_5187_);
lean_inc(v_fst_5186_);
lean_dec(v_a_5185_);
v___x_5189_ = lean_box(0);
v_isShared_5190_ = v_isSharedCheck_5217_;
goto v_resetjp_5188_;
}
v_resetjp_5188_:
{
lean_object* v___x_5191_; lean_object* v___x_5192_; lean_object* v___x_5193_; lean_object* v___x_5194_; lean_object* v___x_5195_; 
v___x_5191_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__13));
v___x_5192_ = lean_unsigned_to_nat(1u);
v___x_5193_ = lean_mk_empty_array_with_capacity(v___x_5192_);
v___x_5194_ = lean_array_push(v___x_5193_, v_snd_5187_);
v___x_5195_ = l_Lean_Meta_mkAppM(v___x_5191_, v___x_5194_, v___y_5180_, v___y_5181_, v___y_5182_, v___y_5183_);
if (lean_obj_tag(v___x_5195_) == 0)
{
lean_object* v_a_5196_; lean_object* v___x_5198_; uint8_t v_isShared_5199_; uint8_t v_isSharedCheck_5208_; 
v_a_5196_ = lean_ctor_get(v___x_5195_, 0);
v_isSharedCheck_5208_ = !lean_is_exclusive(v___x_5195_);
if (v_isSharedCheck_5208_ == 0)
{
v___x_5198_ = v___x_5195_;
v_isShared_5199_ = v_isSharedCheck_5208_;
goto v_resetjp_5197_;
}
else
{
lean_inc(v_a_5196_);
lean_dec(v___x_5195_);
v___x_5198_ = lean_box(0);
v_isShared_5199_ = v_isSharedCheck_5208_;
goto v_resetjp_5197_;
}
v_resetjp_5197_:
{
lean_object* v___x_5200_; lean_object* v___x_5201_; lean_object* v___x_5203_; 
v___x_5200_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__18, &lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__18_once, _init_lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__18);
v___x_5201_ = l_Lean_Expr_app___override(v___x_5200_, v_fst_5186_);
if (v_isShared_5190_ == 0)
{
lean_ctor_set(v___x_5189_, 1, v_a_5196_);
lean_ctor_set(v___x_5189_, 0, v___x_5201_);
v___x_5203_ = v___x_5189_;
goto v_reusejp_5202_;
}
else
{
lean_object* v_reuseFailAlloc_5207_; 
v_reuseFailAlloc_5207_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5207_, 0, v___x_5201_);
lean_ctor_set(v_reuseFailAlloc_5207_, 1, v_a_5196_);
v___x_5203_ = v_reuseFailAlloc_5207_;
goto v_reusejp_5202_;
}
v_reusejp_5202_:
{
lean_object* v___x_5205_; 
if (v_isShared_5199_ == 0)
{
lean_ctor_set(v___x_5198_, 0, v___x_5203_);
v___x_5205_ = v___x_5198_;
goto v_reusejp_5204_;
}
else
{
lean_object* v_reuseFailAlloc_5206_; 
v_reuseFailAlloc_5206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5206_, 0, v___x_5203_);
v___x_5205_ = v_reuseFailAlloc_5206_;
goto v_reusejp_5204_;
}
v_reusejp_5204_:
{
return v___x_5205_;
}
}
}
}
else
{
lean_object* v_a_5209_; lean_object* v___x_5211_; uint8_t v_isShared_5212_; uint8_t v_isSharedCheck_5216_; 
lean_del_object(v___x_5189_);
lean_dec(v_fst_5186_);
v_a_5209_ = lean_ctor_get(v___x_5195_, 0);
v_isSharedCheck_5216_ = !lean_is_exclusive(v___x_5195_);
if (v_isSharedCheck_5216_ == 0)
{
v___x_5211_ = v___x_5195_;
v_isShared_5212_ = v_isSharedCheck_5216_;
goto v_resetjp_5210_;
}
else
{
lean_inc(v_a_5209_);
lean_dec(v___x_5195_);
v___x_5211_ = lean_box(0);
v_isShared_5212_ = v_isSharedCheck_5216_;
goto v_resetjp_5210_;
}
v_resetjp_5210_:
{
lean_object* v___x_5214_; 
if (v_isShared_5212_ == 0)
{
v___x_5214_ = v___x_5211_;
goto v_reusejp_5213_;
}
else
{
lean_object* v_reuseFailAlloc_5215_; 
v_reuseFailAlloc_5215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5215_, 0, v_a_5209_);
v___x_5214_ = v_reuseFailAlloc_5215_;
goto v_reusejp_5213_;
}
v_reusejp_5213_:
{
return v___x_5214_;
}
}
}
}
}
else
{
return v___x_5184_;
}
}
}
else
{
lean_object* v_a_5298_; lean_object* v___x_5300_; uint8_t v_isShared_5301_; uint8_t v_isSharedCheck_5305_; 
lean_dec_ref(v_arg_5044_);
lean_dec_ref(v_e_4869_);
v_a_5298_ = lean_ctor_get(v___x_5175_, 0);
v_isSharedCheck_5305_ = !lean_is_exclusive(v___x_5175_);
if (v_isSharedCheck_5305_ == 0)
{
v___x_5300_ = v___x_5175_;
v_isShared_5301_ = v_isSharedCheck_5305_;
goto v_resetjp_5299_;
}
else
{
lean_inc(v_a_5298_);
lean_dec(v___x_5175_);
v___x_5300_ = lean_box(0);
v_isShared_5301_ = v_isSharedCheck_5305_;
goto v_resetjp_5299_;
}
v_resetjp_5299_:
{
lean_object* v___x_5303_; 
if (v_isShared_5301_ == 0)
{
v___x_5303_ = v___x_5300_;
goto v_reusejp_5302_;
}
else
{
lean_object* v_reuseFailAlloc_5304_; 
v_reuseFailAlloc_5304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5304_, 0, v_a_5298_);
v___x_5303_ = v_reuseFailAlloc_5304_;
goto v_reusejp_5302_;
}
v_reusejp_5302_:
{
return v___x_5303_;
}
}
}
}
}
v___jp_5013_:
{
lean_object* v___x_5019_; lean_object* v___x_5020_; lean_object* v___x_5021_; lean_object* v___x_5022_; lean_object* v___x_5023_; lean_object* v___x_5024_; 
v___x_5019_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__11));
lean_inc_ref(v_e_5014_);
v___x_5020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5020_, 0, v_e_5014_);
v___x_5021_ = lean_unsigned_to_nat(1u);
v___x_5022_ = lean_mk_empty_array_with_capacity(v___x_5021_);
v___x_5023_ = lean_array_push(v___x_5022_, v___x_5020_);
v___x_5024_ = l_Lean_Meta_mkAppOptM(v___x_5019_, v___x_5023_, v___y_5015_, v___y_5016_, v___y_5017_, v___y_5018_);
if (lean_obj_tag(v___x_5024_) == 0)
{
lean_object* v_a_5025_; lean_object* v___x_5027_; uint8_t v_isShared_5028_; uint8_t v_isSharedCheck_5033_; 
v_a_5025_ = lean_ctor_get(v___x_5024_, 0);
v_isSharedCheck_5033_ = !lean_is_exclusive(v___x_5024_);
if (v_isSharedCheck_5033_ == 0)
{
v___x_5027_ = v___x_5024_;
v_isShared_5028_ = v_isSharedCheck_5033_;
goto v_resetjp_5026_;
}
else
{
lean_inc(v_a_5025_);
lean_dec(v___x_5024_);
v___x_5027_ = lean_box(0);
v_isShared_5028_ = v_isSharedCheck_5033_;
goto v_resetjp_5026_;
}
v_resetjp_5026_:
{
lean_object* v___x_5029_; lean_object* v___x_5031_; 
v___x_5029_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5029_, 0, v_e_5014_);
lean_ctor_set(v___x_5029_, 1, v_a_5025_);
if (v_isShared_5028_ == 0)
{
lean_ctor_set(v___x_5027_, 0, v___x_5029_);
v___x_5031_ = v___x_5027_;
goto v_reusejp_5030_;
}
else
{
lean_object* v_reuseFailAlloc_5032_; 
v_reuseFailAlloc_5032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5032_, 0, v___x_5029_);
v___x_5031_ = v_reuseFailAlloc_5032_;
goto v_reusejp_5030_;
}
v_reusejp_5030_:
{
return v___x_5031_;
}
}
}
else
{
lean_object* v_a_5034_; lean_object* v___x_5036_; uint8_t v_isShared_5037_; uint8_t v_isSharedCheck_5041_; 
lean_dec_ref(v_e_5014_);
v_a_5034_ = lean_ctor_get(v___x_5024_, 0);
v_isSharedCheck_5041_ = !lean_is_exclusive(v___x_5024_);
if (v_isSharedCheck_5041_ == 0)
{
v___x_5036_ = v___x_5024_;
v_isShared_5037_ = v_isSharedCheck_5041_;
goto v_resetjp_5035_;
}
else
{
lean_inc(v_a_5034_);
lean_dec(v___x_5024_);
v___x_5036_ = lean_box(0);
v_isShared_5037_ = v_isSharedCheck_5041_;
goto v_resetjp_5035_;
}
v_resetjp_5035_:
{
lean_object* v___x_5039_; 
if (v_isShared_5037_ == 0)
{
v___x_5039_ = v___x_5036_;
goto v_reusejp_5038_;
}
else
{
lean_object* v_reuseFailAlloc_5040_; 
v_reuseFailAlloc_5040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5040_, 0, v_a_5034_);
v___x_5039_ = v_reuseFailAlloc_5040_;
goto v_reusejp_5038_;
}
v_reusejp_5038_:
{
return v___x_5039_;
}
}
}
}
}
else
{
lean_object* v_a_5306_; lean_object* v___x_5308_; uint8_t v_isShared_5309_; uint8_t v_isSharedCheck_5313_; 
lean_dec_ref(v_e_4869_);
v_a_5306_ = lean_ctor_get(v___x_5011_, 0);
v_isSharedCheck_5313_ = !lean_is_exclusive(v___x_5011_);
if (v_isSharedCheck_5313_ == 0)
{
v___x_5308_ = v___x_5011_;
v_isShared_5309_ = v_isSharedCheck_5313_;
goto v_resetjp_5307_;
}
else
{
lean_inc(v_a_5306_);
lean_dec(v___x_5011_);
v___x_5308_ = lean_box(0);
v_isShared_5309_ = v_isSharedCheck_5313_;
goto v_resetjp_5307_;
}
v_resetjp_5307_:
{
lean_object* v___x_5311_; 
if (v_isShared_5309_ == 0)
{
v___x_5311_ = v___x_5308_;
goto v_reusejp_5310_;
}
else
{
lean_object* v_reuseFailAlloc_5312_; 
v_reuseFailAlloc_5312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5312_, 0, v_a_5306_);
v___x_5311_ = v_reuseFailAlloc_5312_;
goto v_reusejp_5310_;
}
v_reusejp_5310_:
{
return v___x_5311_;
}
}
}
}
}
v___jp_4877_:
{
lean_object* v___x_4888_; lean_object* v___x_4889_; lean_object* v___x_4890_; lean_object* v___x_4891_; lean_object* v___x_4892_; 
v___x_4888_ = lean_unsigned_to_nat(2u);
v___x_4889_ = lean_mk_empty_array_with_capacity(v___x_4888_);
v___x_4890_ = lean_array_push(v___x_4889_, v___y_4885_);
v___x_4891_ = lean_array_push(v___x_4890_, v___y_4883_);
lean_inc(v___y_4887_);
v___x_4892_ = l_Lean_Meta_mkAppM(v___y_4887_, v___x_4891_, v___y_4884_, v___y_4882_, v___y_4878_, v___y_4881_);
if (lean_obj_tag(v___x_4892_) == 0)
{
lean_object* v_a_4893_; lean_object* v___x_4895_; uint8_t v_isShared_4896_; uint8_t v_isSharedCheck_4904_; 
v_a_4893_ = lean_ctor_get(v___x_4892_, 0);
v_isSharedCheck_4904_ = !lean_is_exclusive(v___x_4892_);
if (v_isSharedCheck_4904_ == 0)
{
v___x_4895_ = v___x_4892_;
v_isShared_4896_ = v_isSharedCheck_4904_;
goto v_resetjp_4894_;
}
else
{
lean_inc(v_a_4893_);
lean_dec(v___x_4892_);
v___x_4895_ = lean_box(0);
v_isShared_4896_ = v_isSharedCheck_4904_;
goto v_resetjp_4894_;
}
v_resetjp_4894_:
{
lean_object* v___x_4897_; lean_object* v___x_4898_; lean_object* v___x_4899_; lean_object* v___x_4900_; lean_object* v___x_4902_; 
v___x_4897_ = lean_box(0);
lean_inc(v___y_4879_);
v___x_4898_ = l_Lean_Expr_const___override(v___y_4879_, v___x_4897_);
v___x_4899_ = l_Lean_mkAppB(v___x_4898_, v___y_4886_, v___y_4880_);
v___x_4900_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4900_, 0, v___x_4899_);
lean_ctor_set(v___x_4900_, 1, v_a_4893_);
if (v_isShared_4896_ == 0)
{
lean_ctor_set(v___x_4895_, 0, v___x_4900_);
v___x_4902_ = v___x_4895_;
goto v_reusejp_4901_;
}
else
{
lean_object* v_reuseFailAlloc_4903_; 
v_reuseFailAlloc_4903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4903_, 0, v___x_4900_);
v___x_4902_ = v_reuseFailAlloc_4903_;
goto v_reusejp_4901_;
}
v_reusejp_4901_:
{
return v___x_4902_;
}
}
}
else
{
lean_object* v_a_4905_; lean_object* v___x_4907_; uint8_t v_isShared_4908_; uint8_t v_isSharedCheck_4912_; 
lean_dec_ref(v___y_4886_);
lean_dec_ref(v___y_4880_);
v_a_4905_ = lean_ctor_get(v___x_4892_, 0);
v_isSharedCheck_4912_ = !lean_is_exclusive(v___x_4892_);
if (v_isSharedCheck_4912_ == 0)
{
v___x_4907_ = v___x_4892_;
v_isShared_4908_ = v_isSharedCheck_4912_;
goto v_resetjp_4906_;
}
else
{
lean_inc(v_a_4905_);
lean_dec(v___x_4892_);
v___x_4907_ = lean_box(0);
v_isShared_4908_ = v_isSharedCheck_4912_;
goto v_resetjp_4906_;
}
v_resetjp_4906_:
{
lean_object* v___x_4910_; 
if (v_isShared_4908_ == 0)
{
v___x_4910_ = v___x_4907_;
goto v_reusejp_4909_;
}
else
{
lean_object* v_reuseFailAlloc_4911_; 
v_reuseFailAlloc_4911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4911_, 0, v_a_4905_);
v___x_4910_ = v_reuseFailAlloc_4911_;
goto v_reusejp_4909_;
}
v_reusejp_4909_:
{
return v___x_4910_;
}
}
}
}
v___jp_4913_:
{
lean_object* v___x_4923_; 
v___x_4923_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound(v_a_4915_, v___y_4917_, v___y_4918_, v___y_4919_, v___y_4920_, v___y_4921_, v___y_4922_);
if (lean_obj_tag(v___x_4923_) == 0)
{
lean_object* v_a_4924_; lean_object* v_fst_4925_; lean_object* v_snd_4926_; lean_object* v___x_4927_; 
v_a_4924_ = lean_ctor_get(v___x_4923_, 0);
lean_inc(v_a_4924_);
lean_dec_ref_known(v___x_4923_, 1);
v_fst_4925_ = lean_ctor_get(v_a_4924_, 0);
lean_inc(v_fst_4925_);
v_snd_4926_ = lean_ctor_get(v_a_4924_, 1);
lean_inc(v_snd_4926_);
lean_dec(v_a_4924_);
v___x_4927_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound(v_b_4916_, v___y_4917_, v___y_4918_, v___y_4919_, v___y_4920_, v___y_4921_, v___y_4922_);
if (lean_obj_tag(v___x_4927_) == 0)
{
lean_object* v_a_4928_; lean_object* v_fst_4929_; lean_object* v_snd_4930_; lean_object* v___x_4931_; uint8_t v___x_4932_; 
v_a_4928_ = lean_ctor_get(v___x_4927_, 0);
lean_inc(v_a_4928_);
lean_dec_ref_known(v___x_4927_, 1);
v_fst_4929_ = lean_ctor_get(v_a_4928_, 0);
lean_inc(v_fst_4929_);
v_snd_4930_ = lean_ctor_get(v_a_4928_, 1);
lean_inc(v_snd_4930_);
lean_dec(v_a_4928_);
v___x_4931_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__14));
v___x_4932_ = lean_name_eq(v_fn_4914_, v___x_4931_);
if (v___x_4932_ == 0)
{
lean_object* v___x_4933_; uint8_t v___x_4934_; 
v___x_4933_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nnfStep___closed__16));
v___x_4934_ = lean_name_eq(v_fn_4914_, v___x_4933_);
if (v___x_4934_ == 0)
{
lean_object* v___x_4935_; 
v___x_4935_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_equivNormal___closed__11));
v___y_4878_ = v___y_4921_;
v___y_4879_ = v_fn_4914_;
v___y_4880_ = v_fst_4929_;
v___y_4881_ = v___y_4922_;
v___y_4882_ = v___y_4920_;
v___y_4883_ = v_snd_4930_;
v___y_4884_ = v___y_4919_;
v___y_4885_ = v_snd_4926_;
v___y_4886_ = v_fst_4925_;
v___y_4887_ = v___x_4935_;
goto v___jp_4877_;
}
else
{
lean_object* v___x_4936_; 
v___x_4936_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__6));
v___y_4878_ = v___y_4921_;
v___y_4879_ = v_fn_4914_;
v___y_4880_ = v_fst_4929_;
v___y_4881_ = v___y_4922_;
v___y_4882_ = v___y_4920_;
v___y_4883_ = v_snd_4930_;
v___y_4884_ = v___y_4919_;
v___y_4885_ = v_snd_4926_;
v___y_4886_ = v_fst_4925_;
v___y_4887_ = v___x_4936_;
goto v___jp_4877_;
}
}
else
{
lean_object* v___x_4937_; 
v___x_4937_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__3));
v___y_4878_ = v___y_4921_;
v___y_4879_ = v_fn_4914_;
v___y_4880_ = v_fst_4929_;
v___y_4881_ = v___y_4922_;
v___y_4882_ = v___y_4920_;
v___y_4883_ = v_snd_4930_;
v___y_4884_ = v___y_4919_;
v___y_4885_ = v_snd_4926_;
v___y_4886_ = v_fst_4925_;
v___y_4887_ = v___x_4937_;
goto v___jp_4877_;
}
}
else
{
lean_dec(v_snd_4926_);
lean_dec(v_fst_4925_);
return v___x_4927_;
}
}
else
{
lean_dec_ref(v_b_4916_);
return v___x_4923_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___lam__0(lean_object* v_body_5314_, uint8_t v___y_5315_, uint8_t v___x_5316_, lean_object* v_x_5317_, lean_object* v___y_5318_, lean_object* v___y_5319_, lean_object* v___y_5320_, lean_object* v___y_5321_, lean_object* v___y_5322_, lean_object* v___y_5323_){
_start:
{
lean_object* v___x_5325_; lean_object* v___x_5326_; 
v___x_5325_ = lean_expr_instantiate1(v_body_5314_, v_x_5317_);
v___x_5326_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound(v___x_5325_, v___y_5318_, v___y_5319_, v___y_5320_, v___y_5321_, v___y_5322_, v___y_5323_);
if (lean_obj_tag(v___x_5326_) == 0)
{
lean_object* v_a_5327_; lean_object* v_fst_5328_; lean_object* v_snd_5329_; lean_object* v___x_5331_; uint8_t v_isShared_5332_; uint8_t v_isSharedCheck_5379_; 
v_a_5327_ = lean_ctor_get(v___x_5326_, 0);
lean_inc(v_a_5327_);
lean_dec_ref_known(v___x_5326_, 1);
v_fst_5328_ = lean_ctor_get(v_a_5327_, 0);
v_snd_5329_ = lean_ctor_get(v_a_5327_, 1);
v_isSharedCheck_5379_ = !lean_is_exclusive(v_a_5327_);
if (v_isSharedCheck_5379_ == 0)
{
v___x_5331_ = v_a_5327_;
v_isShared_5332_ = v_isSharedCheck_5379_;
goto v_resetjp_5330_;
}
else
{
lean_inc(v_snd_5329_);
lean_inc(v_fst_5328_);
lean_dec(v_a_5327_);
v___x_5331_ = lean_box(0);
v_isShared_5332_ = v_isSharedCheck_5379_;
goto v_resetjp_5330_;
}
v_resetjp_5330_:
{
lean_object* v___x_5333_; lean_object* v___x_5334_; lean_object* v___x_5335_; uint8_t v___x_5336_; lean_object* v___x_5337_; 
v___x_5333_ = lean_unsigned_to_nat(1u);
v___x_5334_ = lean_mk_empty_array_with_capacity(v___x_5333_);
lean_inc_ref(v___x_5334_);
v___x_5335_ = lean_array_push(v___x_5334_, v_x_5317_);
v___x_5336_ = 1;
v___x_5337_ = l_Lean_Meta_mkForallFVars(v___x_5335_, v_fst_5328_, v___y_5315_, v___x_5316_, v___x_5316_, v___x_5336_, v___y_5320_, v___y_5321_, v___y_5322_, v___y_5323_);
if (lean_obj_tag(v___x_5337_) == 0)
{
lean_object* v_a_5338_; lean_object* v___x_5339_; 
v_a_5338_ = lean_ctor_get(v___x_5337_, 0);
lean_inc(v_a_5338_);
lean_dec_ref_known(v___x_5337_, 1);
v___x_5339_ = l_Lean_Meta_mkLambdaFVars(v___x_5335_, v_snd_5329_, v___y_5315_, v___x_5316_, v___y_5315_, v___x_5316_, v___x_5336_, v___y_5320_, v___y_5321_, v___y_5322_, v___y_5323_);
lean_dec_ref(v___x_5335_);
if (lean_obj_tag(v___x_5339_) == 0)
{
lean_object* v_a_5340_; lean_object* v___x_5341_; lean_object* v___x_5342_; lean_object* v___x_5343_; 
v_a_5340_ = lean_ctor_get(v___x_5339_, 0);
lean_inc(v_a_5340_);
lean_dec_ref_known(v___x_5339_, 1);
v___x_5341_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_toNNF___lam__0___closed__1));
v___x_5342_ = lean_array_push(v___x_5334_, v_a_5340_);
v___x_5343_ = l_Lean_Meta_mkAppM(v___x_5341_, v___x_5342_, v___y_5320_, v___y_5321_, v___y_5322_, v___y_5323_);
if (lean_obj_tag(v___x_5343_) == 0)
{
lean_object* v_a_5344_; lean_object* v___x_5346_; uint8_t v_isShared_5347_; uint8_t v_isSharedCheck_5354_; 
v_a_5344_ = lean_ctor_get(v___x_5343_, 0);
v_isSharedCheck_5354_ = !lean_is_exclusive(v___x_5343_);
if (v_isSharedCheck_5354_ == 0)
{
v___x_5346_ = v___x_5343_;
v_isShared_5347_ = v_isSharedCheck_5354_;
goto v_resetjp_5345_;
}
else
{
lean_inc(v_a_5344_);
lean_dec(v___x_5343_);
v___x_5346_ = lean_box(0);
v_isShared_5347_ = v_isSharedCheck_5354_;
goto v_resetjp_5345_;
}
v_resetjp_5345_:
{
lean_object* v___x_5349_; 
if (v_isShared_5332_ == 0)
{
lean_ctor_set(v___x_5331_, 1, v_a_5344_);
lean_ctor_set(v___x_5331_, 0, v_a_5338_);
v___x_5349_ = v___x_5331_;
goto v_reusejp_5348_;
}
else
{
lean_object* v_reuseFailAlloc_5353_; 
v_reuseFailAlloc_5353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5353_, 0, v_a_5338_);
lean_ctor_set(v_reuseFailAlloc_5353_, 1, v_a_5344_);
v___x_5349_ = v_reuseFailAlloc_5353_;
goto v_reusejp_5348_;
}
v_reusejp_5348_:
{
lean_object* v___x_5351_; 
if (v_isShared_5347_ == 0)
{
lean_ctor_set(v___x_5346_, 0, v___x_5349_);
v___x_5351_ = v___x_5346_;
goto v_reusejp_5350_;
}
else
{
lean_object* v_reuseFailAlloc_5352_; 
v_reuseFailAlloc_5352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5352_, 0, v___x_5349_);
v___x_5351_ = v_reuseFailAlloc_5352_;
goto v_reusejp_5350_;
}
v_reusejp_5350_:
{
return v___x_5351_;
}
}
}
}
else
{
lean_object* v_a_5355_; lean_object* v___x_5357_; uint8_t v_isShared_5358_; uint8_t v_isSharedCheck_5362_; 
lean_dec(v_a_5338_);
lean_del_object(v___x_5331_);
v_a_5355_ = lean_ctor_get(v___x_5343_, 0);
v_isSharedCheck_5362_ = !lean_is_exclusive(v___x_5343_);
if (v_isSharedCheck_5362_ == 0)
{
v___x_5357_ = v___x_5343_;
v_isShared_5358_ = v_isSharedCheck_5362_;
goto v_resetjp_5356_;
}
else
{
lean_inc(v_a_5355_);
lean_dec(v___x_5343_);
v___x_5357_ = lean_box(0);
v_isShared_5358_ = v_isSharedCheck_5362_;
goto v_resetjp_5356_;
}
v_resetjp_5356_:
{
lean_object* v___x_5360_; 
if (v_isShared_5358_ == 0)
{
v___x_5360_ = v___x_5357_;
goto v_reusejp_5359_;
}
else
{
lean_object* v_reuseFailAlloc_5361_; 
v_reuseFailAlloc_5361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5361_, 0, v_a_5355_);
v___x_5360_ = v_reuseFailAlloc_5361_;
goto v_reusejp_5359_;
}
v_reusejp_5359_:
{
return v___x_5360_;
}
}
}
}
else
{
lean_object* v_a_5363_; lean_object* v___x_5365_; uint8_t v_isShared_5366_; uint8_t v_isSharedCheck_5370_; 
lean_dec(v_a_5338_);
lean_dec_ref(v___x_5334_);
lean_del_object(v___x_5331_);
v_a_5363_ = lean_ctor_get(v___x_5339_, 0);
v_isSharedCheck_5370_ = !lean_is_exclusive(v___x_5339_);
if (v_isSharedCheck_5370_ == 0)
{
v___x_5365_ = v___x_5339_;
v_isShared_5366_ = v_isSharedCheck_5370_;
goto v_resetjp_5364_;
}
else
{
lean_inc(v_a_5363_);
lean_dec(v___x_5339_);
v___x_5365_ = lean_box(0);
v_isShared_5366_ = v_isSharedCheck_5370_;
goto v_resetjp_5364_;
}
v_resetjp_5364_:
{
lean_object* v___x_5368_; 
if (v_isShared_5366_ == 0)
{
v___x_5368_ = v___x_5365_;
goto v_reusejp_5367_;
}
else
{
lean_object* v_reuseFailAlloc_5369_; 
v_reuseFailAlloc_5369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5369_, 0, v_a_5363_);
v___x_5368_ = v_reuseFailAlloc_5369_;
goto v_reusejp_5367_;
}
v_reusejp_5367_:
{
return v___x_5368_;
}
}
}
}
else
{
lean_object* v_a_5371_; lean_object* v___x_5373_; uint8_t v_isShared_5374_; uint8_t v_isSharedCheck_5378_; 
lean_dec_ref(v___x_5335_);
lean_dec_ref(v___x_5334_);
lean_del_object(v___x_5331_);
lean_dec(v_snd_5329_);
v_a_5371_ = lean_ctor_get(v___x_5337_, 0);
v_isSharedCheck_5378_ = !lean_is_exclusive(v___x_5337_);
if (v_isSharedCheck_5378_ == 0)
{
v___x_5373_ = v___x_5337_;
v_isShared_5374_ = v_isSharedCheck_5378_;
goto v_resetjp_5372_;
}
else
{
lean_inc(v_a_5371_);
lean_dec(v___x_5337_);
v___x_5373_ = lean_box(0);
v_isShared_5374_ = v_isSharedCheck_5378_;
goto v_resetjp_5372_;
}
v_resetjp_5372_:
{
lean_object* v___x_5376_; 
if (v_isShared_5374_ == 0)
{
v___x_5376_ = v___x_5373_;
goto v_reusejp_5375_;
}
else
{
lean_object* v_reuseFailAlloc_5377_; 
v_reuseFailAlloc_5377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5377_, 0, v_a_5371_);
v___x_5376_ = v_reuseFailAlloc_5377_;
goto v_reusejp_5375_;
}
v_reusejp_5375_:
{
return v___x_5376_;
}
}
}
}
}
else
{
lean_dec_ref(v_x_5317_);
return v___x_5326_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound___boxed(lean_object* v_e_5380_, lean_object* v_a_5381_, lean_object* v_a_5382_, lean_object* v_a_5383_, lean_object* v_a_5384_, lean_object* v_a_5385_, lean_object* v_a_5386_, lean_object* v_a_5387_){
_start:
{
lean_object* v_res_5388_; 
v_res_5388_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound(v_e_5380_, v_a_5381_, v_a_5382_, v_a_5383_, v_a_5384_, v_a_5385_, v_a_5386_);
lean_dec(v_a_5386_);
lean_dec_ref(v_a_5385_);
lean_dec(v_a_5384_);
lean_dec_ref(v_a_5383_);
lean_dec(v_a_5382_);
lean_dec_ref(v_a_5381_);
return v_res_5388_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_equiv(lean_object* v_a_5389_, lean_object* v_b_5390_, lean_object* v_a_5391_, lean_object* v_a_5392_, lean_object* v_a_5393_, lean_object* v_a_5394_, lean_object* v_a_5395_, lean_object* v_a_5396_){
_start:
{
lean_object* v___x_5398_; lean_object* v_a_5399_; lean_object* v___x_5400_; lean_object* v_a_5401_; lean_object* v___x_5403_; uint8_t v_isShared_5404_; uint8_t v_isSharedCheck_5501_; 
v___x_5398_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_a_5389_, v_a_5394_);
v_a_5399_ = lean_ctor_get(v___x_5398_, 0);
lean_inc(v_a_5399_);
lean_dec_ref(v___x_5398_);
v___x_5400_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_b_5390_, v_a_5394_);
v_a_5401_ = lean_ctor_get(v___x_5400_, 0);
v_isSharedCheck_5501_ = !lean_is_exclusive(v___x_5400_);
if (v_isSharedCheck_5501_ == 0)
{
v___x_5403_ = v___x_5400_;
v_isShared_5404_ = v_isSharedCheck_5501_;
goto v_resetjp_5402_;
}
else
{
lean_inc(v_a_5401_);
lean_dec(v___x_5400_);
v___x_5403_ = lean_box(0);
v_isShared_5404_ = v_isSharedCheck_5501_;
goto v_resetjp_5402_;
}
v_resetjp_5402_:
{
lean_object* v___x_5405_; 
lean_inc(v_a_5401_);
lean_inc(v_a_5399_);
v___x_5405_ = l_Lean_Meta_isExprDefEq(v_a_5399_, v_a_5401_, v_a_5393_, v_a_5394_, v_a_5395_, v_a_5396_);
if (lean_obj_tag(v___x_5405_) == 0)
{
lean_object* v_a_5406_; uint8_t v___x_5407_; 
v_a_5406_ = lean_ctor_get(v___x_5405_, 0);
lean_inc(v_a_5406_);
lean_dec_ref_known(v___x_5405_, 1);
v___x_5407_ = lean_unbox(v_a_5406_);
lean_dec(v_a_5406_);
if (v___x_5407_ == 0)
{
lean_object* v___x_5408_; 
lean_del_object(v___x_5403_);
v___x_5408_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound(v_a_5399_, v_a_5391_, v_a_5392_, v_a_5393_, v_a_5394_, v_a_5395_, v_a_5396_);
if (lean_obj_tag(v___x_5408_) == 0)
{
lean_object* v_a_5409_; lean_object* v_fst_5410_; lean_object* v_snd_5411_; lean_object* v___x_5412_; 
v_a_5409_ = lean_ctor_get(v___x_5408_, 0);
lean_inc(v_a_5409_);
lean_dec_ref_known(v___x_5408_, 1);
v_fst_5410_ = lean_ctor_get(v_a_5409_, 0);
lean_inc(v_fst_5410_);
v_snd_5411_ = lean_ctor_get(v_a_5409_, 1);
lean_inc(v_snd_5411_);
lean_dec(v_a_5409_);
v___x_5412_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Equiv_0__Vampire_Reconstruct_sameWayRound(v_a_5401_, v_a_5391_, v_a_5392_, v_a_5393_, v_a_5394_, v_a_5395_, v_a_5396_);
if (lean_obj_tag(v___x_5412_) == 0)
{
lean_object* v_a_5413_; lean_object* v_fst_5414_; lean_object* v_snd_5415_; lean_object* v___x_5416_; 
v_a_5413_ = lean_ctor_get(v___x_5412_, 0);
lean_inc(v_a_5413_);
lean_dec_ref_known(v___x_5412_, 1);
v_fst_5414_ = lean_ctor_get(v_a_5413_, 0);
lean_inc(v_fst_5414_);
v_snd_5415_ = lean_ctor_get(v_a_5413_, 1);
lean_inc(v_snd_5415_);
lean_dec(v_a_5413_);
v___x_5416_ = lp_vampireReplay_Vampire_Reconstruct_toNNF(v_fst_5410_, v_a_5391_, v_a_5392_, v_a_5393_, v_a_5394_, v_a_5395_, v_a_5396_);
if (lean_obj_tag(v___x_5416_) == 0)
{
lean_object* v_a_5417_; lean_object* v_fst_5418_; lean_object* v_snd_5419_; lean_object* v___x_5420_; 
v_a_5417_ = lean_ctor_get(v___x_5416_, 0);
lean_inc(v_a_5417_);
lean_dec_ref_known(v___x_5416_, 1);
v_fst_5418_ = lean_ctor_get(v_a_5417_, 0);
lean_inc(v_fst_5418_);
v_snd_5419_ = lean_ctor_get(v_a_5417_, 1);
lean_inc(v_snd_5419_);
lean_dec(v_a_5417_);
v___x_5420_ = lp_vampireReplay_Vampire_Reconstruct_toNNF(v_fst_5414_, v_a_5391_, v_a_5392_, v_a_5393_, v_a_5394_, v_a_5395_, v_a_5396_);
if (lean_obj_tag(v___x_5420_) == 0)
{
lean_object* v_a_5421_; lean_object* v_fst_5422_; lean_object* v_snd_5423_; lean_object* v___x_5424_; 
v_a_5421_ = lean_ctor_get(v___x_5420_, 0);
lean_inc(v_a_5421_);
lean_dec_ref_known(v___x_5420_, 1);
v_fst_5422_ = lean_ctor_get(v_a_5421_, 0);
lean_inc(v_fst_5422_);
v_snd_5423_ = lean_ctor_get(v_a_5421_, 1);
lean_inc(v_snd_5423_);
lean_dec(v_a_5421_);
v___x_5424_ = lp_vampireReplay_Vampire_Reconstruct_equivNormal(v_fst_5418_, v_fst_5422_, v_a_5391_, v_a_5392_, v_a_5393_, v_a_5394_, v_a_5395_, v_a_5396_);
if (lean_obj_tag(v___x_5424_) == 0)
{
lean_object* v_a_5425_; lean_object* v___x_5426_; lean_object* v___x_5427_; lean_object* v___x_5428_; lean_object* v___x_5429_; lean_object* v___x_5430_; 
v_a_5425_ = lean_ctor_get(v___x_5424_, 0);
lean_inc(v_a_5425_);
lean_dec_ref_known(v___x_5424_, 1);
v___x_5426_ = ((lean_object*)(lp_vampireReplay_List_forIn_x27_loop___at___00Vampire_Reconstruct_equivNormal_spec__4___redArg___closed__0));
v___x_5427_ = lean_unsigned_to_nat(1u);
v___x_5428_ = lean_mk_empty_array_with_capacity(v___x_5427_);
lean_inc_ref(v___x_5428_);
v___x_5429_ = lean_array_push(v___x_5428_, v_snd_5423_);
v___x_5430_ = l_Lean_Meta_mkAppM(v___x_5426_, v___x_5429_, v_a_5393_, v_a_5394_, v_a_5395_, v_a_5396_);
if (lean_obj_tag(v___x_5430_) == 0)
{
lean_object* v_a_5431_; lean_object* v___x_5432_; lean_object* v___x_5433_; lean_object* v___x_5434_; lean_object* v___x_5435_; lean_object* v___x_5436_; lean_object* v___x_5437_; 
v_a_5431_ = lean_ctor_get(v___x_5430_, 0);
lean_inc(v_a_5431_);
lean_dec_ref_known(v___x_5430_, 1);
v___x_5432_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__1));
v___x_5433_ = lean_unsigned_to_nat(2u);
v___x_5434_ = lean_mk_empty_array_with_capacity(v___x_5433_);
lean_inc_ref(v___x_5434_);
v___x_5435_ = lean_array_push(v___x_5434_, v_a_5425_);
v___x_5436_ = lean_array_push(v___x_5435_, v_a_5431_);
v___x_5437_ = l_Lean_Meta_mkAppM(v___x_5432_, v___x_5436_, v_a_5393_, v_a_5394_, v_a_5395_, v_a_5396_);
if (lean_obj_tag(v___x_5437_) == 0)
{
lean_object* v_a_5438_; lean_object* v___x_5439_; lean_object* v___x_5440_; lean_object* v___x_5441_; 
v_a_5438_ = lean_ctor_get(v___x_5437_, 0);
lean_inc(v_a_5438_);
lean_dec_ref_known(v___x_5437_, 1);
lean_inc_ref(v___x_5434_);
v___x_5439_ = lean_array_push(v___x_5434_, v_snd_5419_);
v___x_5440_ = lean_array_push(v___x_5439_, v_a_5438_);
v___x_5441_ = l_Lean_Meta_mkAppM(v___x_5432_, v___x_5440_, v_a_5393_, v_a_5394_, v_a_5395_, v_a_5396_);
if (lean_obj_tag(v___x_5441_) == 0)
{
lean_object* v_a_5442_; lean_object* v___x_5443_; lean_object* v___x_5444_; 
v_a_5442_ = lean_ctor_get(v___x_5441_, 0);
lean_inc(v_a_5442_);
lean_dec_ref_known(v___x_5441_, 1);
v___x_5443_ = lean_array_push(v___x_5428_, v_snd_5415_);
v___x_5444_ = l_Lean_Meta_mkAppM(v___x_5426_, v___x_5443_, v_a_5393_, v_a_5394_, v_a_5395_, v_a_5396_);
if (lean_obj_tag(v___x_5444_) == 0)
{
lean_object* v_a_5445_; lean_object* v___x_5446_; lean_object* v___x_5447_; lean_object* v___x_5448_; 
v_a_5445_ = lean_ctor_get(v___x_5444_, 0);
lean_inc(v_a_5445_);
lean_dec_ref_known(v___x_5444_, 1);
lean_inc_ref(v___x_5434_);
v___x_5446_ = lean_array_push(v___x_5434_, v_a_5442_);
v___x_5447_ = lean_array_push(v___x_5446_, v_a_5445_);
v___x_5448_ = l_Lean_Meta_mkAppM(v___x_5432_, v___x_5447_, v_a_5393_, v_a_5394_, v_a_5395_, v_a_5396_);
if (lean_obj_tag(v___x_5448_) == 0)
{
lean_object* v_a_5449_; lean_object* v___x_5450_; lean_object* v___x_5451_; lean_object* v___x_5452_; 
v_a_5449_ = lean_ctor_get(v___x_5448_, 0);
lean_inc(v_a_5449_);
lean_dec_ref_known(v___x_5448_, 1);
v___x_5450_ = lean_array_push(v___x_5434_, v_snd_5411_);
v___x_5451_ = lean_array_push(v___x_5450_, v_a_5449_);
v___x_5452_ = l_Lean_Meta_mkAppM(v___x_5432_, v___x_5451_, v_a_5393_, v_a_5394_, v_a_5395_, v_a_5396_);
return v___x_5452_;
}
else
{
lean_dec_ref(v___x_5434_);
lean_dec(v_snd_5411_);
return v___x_5448_;
}
}
else
{
lean_dec(v_a_5442_);
lean_dec_ref(v___x_5434_);
lean_dec(v_snd_5411_);
return v___x_5444_;
}
}
else
{
lean_dec_ref(v___x_5434_);
lean_dec_ref(v___x_5428_);
lean_dec(v_snd_5415_);
lean_dec(v_snd_5411_);
return v___x_5441_;
}
}
else
{
lean_dec_ref(v___x_5434_);
lean_dec_ref(v___x_5428_);
lean_dec(v_snd_5419_);
lean_dec(v_snd_5415_);
lean_dec(v_snd_5411_);
return v___x_5437_;
}
}
else
{
lean_dec_ref(v___x_5428_);
lean_dec(v_a_5425_);
lean_dec(v_snd_5419_);
lean_dec(v_snd_5415_);
lean_dec(v_snd_5411_);
return v___x_5430_;
}
}
else
{
lean_dec(v_snd_5423_);
lean_dec(v_snd_5419_);
lean_dec(v_snd_5415_);
lean_dec(v_snd_5411_);
return v___x_5424_;
}
}
else
{
lean_object* v_a_5453_; lean_object* v___x_5455_; uint8_t v_isShared_5456_; uint8_t v_isSharedCheck_5460_; 
lean_dec(v_snd_5419_);
lean_dec(v_fst_5418_);
lean_dec(v_snd_5415_);
lean_dec(v_snd_5411_);
v_a_5453_ = lean_ctor_get(v___x_5420_, 0);
v_isSharedCheck_5460_ = !lean_is_exclusive(v___x_5420_);
if (v_isSharedCheck_5460_ == 0)
{
v___x_5455_ = v___x_5420_;
v_isShared_5456_ = v_isSharedCheck_5460_;
goto v_resetjp_5454_;
}
else
{
lean_inc(v_a_5453_);
lean_dec(v___x_5420_);
v___x_5455_ = lean_box(0);
v_isShared_5456_ = v_isSharedCheck_5460_;
goto v_resetjp_5454_;
}
v_resetjp_5454_:
{
lean_object* v___x_5458_; 
if (v_isShared_5456_ == 0)
{
v___x_5458_ = v___x_5455_;
goto v_reusejp_5457_;
}
else
{
lean_object* v_reuseFailAlloc_5459_; 
v_reuseFailAlloc_5459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5459_, 0, v_a_5453_);
v___x_5458_ = v_reuseFailAlloc_5459_;
goto v_reusejp_5457_;
}
v_reusejp_5457_:
{
return v___x_5458_;
}
}
}
}
else
{
lean_object* v_a_5461_; lean_object* v___x_5463_; uint8_t v_isShared_5464_; uint8_t v_isSharedCheck_5468_; 
lean_dec(v_snd_5415_);
lean_dec(v_fst_5414_);
lean_dec(v_snd_5411_);
v_a_5461_ = lean_ctor_get(v___x_5416_, 0);
v_isSharedCheck_5468_ = !lean_is_exclusive(v___x_5416_);
if (v_isSharedCheck_5468_ == 0)
{
v___x_5463_ = v___x_5416_;
v_isShared_5464_ = v_isSharedCheck_5468_;
goto v_resetjp_5462_;
}
else
{
lean_inc(v_a_5461_);
lean_dec(v___x_5416_);
v___x_5463_ = lean_box(0);
v_isShared_5464_ = v_isSharedCheck_5468_;
goto v_resetjp_5462_;
}
v_resetjp_5462_:
{
lean_object* v___x_5466_; 
if (v_isShared_5464_ == 0)
{
v___x_5466_ = v___x_5463_;
goto v_reusejp_5465_;
}
else
{
lean_object* v_reuseFailAlloc_5467_; 
v_reuseFailAlloc_5467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5467_, 0, v_a_5461_);
v___x_5466_ = v_reuseFailAlloc_5467_;
goto v_reusejp_5465_;
}
v_reusejp_5465_:
{
return v___x_5466_;
}
}
}
}
else
{
lean_object* v_a_5469_; lean_object* v___x_5471_; uint8_t v_isShared_5472_; uint8_t v_isSharedCheck_5476_; 
lean_dec(v_snd_5411_);
lean_dec(v_fst_5410_);
v_a_5469_ = lean_ctor_get(v___x_5412_, 0);
v_isSharedCheck_5476_ = !lean_is_exclusive(v___x_5412_);
if (v_isSharedCheck_5476_ == 0)
{
v___x_5471_ = v___x_5412_;
v_isShared_5472_ = v_isSharedCheck_5476_;
goto v_resetjp_5470_;
}
else
{
lean_inc(v_a_5469_);
lean_dec(v___x_5412_);
v___x_5471_ = lean_box(0);
v_isShared_5472_ = v_isSharedCheck_5476_;
goto v_resetjp_5470_;
}
v_resetjp_5470_:
{
lean_object* v___x_5474_; 
if (v_isShared_5472_ == 0)
{
v___x_5474_ = v___x_5471_;
goto v_reusejp_5473_;
}
else
{
lean_object* v_reuseFailAlloc_5475_; 
v_reuseFailAlloc_5475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5475_, 0, v_a_5469_);
v___x_5474_ = v_reuseFailAlloc_5475_;
goto v_reusejp_5473_;
}
v_reusejp_5473_:
{
return v___x_5474_;
}
}
}
}
else
{
lean_object* v_a_5477_; lean_object* v___x_5479_; uint8_t v_isShared_5480_; uint8_t v_isSharedCheck_5484_; 
lean_dec(v_a_5401_);
v_a_5477_ = lean_ctor_get(v___x_5408_, 0);
v_isSharedCheck_5484_ = !lean_is_exclusive(v___x_5408_);
if (v_isSharedCheck_5484_ == 0)
{
v___x_5479_ = v___x_5408_;
v_isShared_5480_ = v_isSharedCheck_5484_;
goto v_resetjp_5478_;
}
else
{
lean_inc(v_a_5477_);
lean_dec(v___x_5408_);
v___x_5479_ = lean_box(0);
v_isShared_5480_ = v_isSharedCheck_5484_;
goto v_resetjp_5478_;
}
v_resetjp_5478_:
{
lean_object* v___x_5482_; 
if (v_isShared_5480_ == 0)
{
v___x_5482_ = v___x_5479_;
goto v_reusejp_5481_;
}
else
{
lean_object* v_reuseFailAlloc_5483_; 
v_reuseFailAlloc_5483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5483_, 0, v_a_5477_);
v___x_5482_ = v_reuseFailAlloc_5483_;
goto v_reusejp_5481_;
}
v_reusejp_5481_:
{
return v___x_5482_;
}
}
}
}
else
{
lean_object* v___x_5485_; lean_object* v___x_5487_; 
lean_dec(v_a_5401_);
v___x_5485_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_toNNF___closed__11));
if (v_isShared_5404_ == 0)
{
lean_ctor_set_tag(v___x_5403_, 1);
lean_ctor_set(v___x_5403_, 0, v_a_5399_);
v___x_5487_ = v___x_5403_;
goto v_reusejp_5486_;
}
else
{
lean_object* v_reuseFailAlloc_5492_; 
v_reuseFailAlloc_5492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5492_, 0, v_a_5399_);
v___x_5487_ = v_reuseFailAlloc_5492_;
goto v_reusejp_5486_;
}
v_reusejp_5486_:
{
lean_object* v___x_5488_; lean_object* v___x_5489_; lean_object* v___x_5490_; lean_object* v___x_5491_; 
v___x_5488_ = lean_unsigned_to_nat(1u);
v___x_5489_ = lean_mk_empty_array_with_capacity(v___x_5488_);
v___x_5490_ = lean_array_push(v___x_5489_, v___x_5487_);
v___x_5491_ = l_Lean_Meta_mkAppOptM(v___x_5485_, v___x_5490_, v_a_5393_, v_a_5394_, v_a_5395_, v_a_5396_);
return v___x_5491_;
}
}
}
else
{
lean_object* v_a_5493_; lean_object* v___x_5495_; uint8_t v_isShared_5496_; uint8_t v_isSharedCheck_5500_; 
lean_del_object(v___x_5403_);
lean_dec(v_a_5401_);
lean_dec(v_a_5399_);
v_a_5493_ = lean_ctor_get(v___x_5405_, 0);
v_isSharedCheck_5500_ = !lean_is_exclusive(v___x_5405_);
if (v_isSharedCheck_5500_ == 0)
{
v___x_5495_ = v___x_5405_;
v_isShared_5496_ = v_isSharedCheck_5500_;
goto v_resetjp_5494_;
}
else
{
lean_inc(v_a_5493_);
lean_dec(v___x_5405_);
v___x_5495_ = lean_box(0);
v_isShared_5496_ = v_isSharedCheck_5500_;
goto v_resetjp_5494_;
}
v_resetjp_5494_:
{
lean_object* v___x_5498_; 
if (v_isShared_5496_ == 0)
{
v___x_5498_ = v___x_5495_;
goto v_reusejp_5497_;
}
else
{
lean_object* v_reuseFailAlloc_5499_; 
v_reuseFailAlloc_5499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5499_, 0, v_a_5493_);
v___x_5498_ = v_reuseFailAlloc_5499_;
goto v_reusejp_5497_;
}
v_reusejp_5497_:
{
return v___x_5498_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_equiv___boxed(lean_object* v_a_5502_, lean_object* v_b_5503_, lean_object* v_a_5504_, lean_object* v_a_5505_, lean_object* v_a_5506_, lean_object* v_a_5507_, lean_object* v_a_5508_, lean_object* v_a_5509_, lean_object* v_a_5510_){
_start:
{
lean_object* v_res_5511_; 
v_res_5511_ = lp_vampireReplay_Vampire_Reconstruct_equiv(v_a_5502_, v_b_5503_, v_a_5504_, v_a_5505_, v_a_5506_, v_a_5507_, v_a_5508_, v_a_5509_);
lean_dec(v_a_5509_);
lean_dec_ref(v_a_5508_);
lean_dec(v_a_5507_);
lean_dec_ref(v_a_5506_);
lean_dec(v_a_5505_);
lean_dec_ref(v_a_5504_);
return v_res_5511_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_vampireReplay_VampireReplay_Reconstruct_Literal(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_vampireReplay_VampireReplay_Reconstruct_Equiv(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_vampireReplay_VampireReplay_Reconstruct_Literal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
