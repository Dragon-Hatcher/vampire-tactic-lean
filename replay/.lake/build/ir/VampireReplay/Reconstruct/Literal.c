// Lean compiler output
// Module: VampireReplay.Reconstruct.Literal
// Imports: public import Init public meta import Init public import VampireReplay.Reconstruct.Choice public import VampireReplay.Reconstruct.Junction
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
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_projectGiven(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_array_size(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lp_vampireReplay_Vampire_Reconstruct_injectGiven(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_zipIdx___redArg(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_eraseIdx_x21___redArg(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_asNegation(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkExpectedTypeHint(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_junctionParts(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_elimGiven(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_introGiven(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_Meta_Tactic_FunInd_0__Lean_Tactic_FunInd_unpackMutualInduction_doRealize_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__0_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__1_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Not"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__2_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(185, 11, 203, 55, 27, 192, 137, 230)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__3 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__3_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__4;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Ne"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__5 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__5_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "symm"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__6 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__6_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(161, 247, 70, 70, 118, 145, 235, 92)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__7_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(106, 137, 24, 74, 49, 62, 0, 94)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__7 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__7_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__8_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(220, 149, 144, 59, 77, 93, 25, 217)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__8 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__8_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_flipEquality(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_flipEquality___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Classical"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__0_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "not_not"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__1_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(40, 236, 220, 79, 38, 141, 161, 150)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__2_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(145, 137, 207, 135, 95, 147, 196, 34)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__2_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Iff"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__3 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__3_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "mpr"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__4_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__5_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(14, 81, 9, 215, 230, 198, 87, 3)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__5 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__5_value;
static const lean_array_object lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__6 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__6_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mp"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__7 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__7_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__8_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(147, 220, 216, 40, 239, 165, 44, 174)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__8 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__8_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_doubleNegations(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_doubleNegations___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Literal_0__Vampire_Reconstruct_stripped(lean_object*);
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Literal_0__Vampire_Reconstruct_strippedOf___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "refl"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Literal_0__Vampire_Reconstruct_strippedOf___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Literal_0__Vampire_Reconstruct_strippedOf___redArg___closed__0_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Literal_0__Vampire_Reconstruct_strippedOf___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Literal_0__Vampire_Reconstruct_strippedOf___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Literal_0__Vampire_Reconstruct_strippedOf___redArg___closed__1_value_aux_0),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Literal_0__Vampire_Reconstruct_strippedOf___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(196, 84, 201, 13, 92, 117, 118, 47)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Literal_0__Vampire_Reconstruct_strippedOf___redArg___closed__1 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Literal_0__Vampire_Reconstruct_strippedOf___redArg___closed__1_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Literal_0__Vampire_Reconstruct_strippedOf___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trans"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Literal_0__Vampire_Reconstruct_strippedOf___redArg___closed__2 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Literal_0__Vampire_Reconstruct_strippedOf___redArg___closed__2_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Literal_0__Vampire_Reconstruct_strippedOf___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Literal_0__Vampire_Reconstruct_strippedOf___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Literal_0__Vampire_Reconstruct_strippedOf___redArg___closed__3_value_aux_0),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Literal_0__Vampire_Reconstruct_strippedOf___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(25, 192, 189, 143, 180, 129, 112, 178)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Literal_0__Vampire_Reconstruct_strippedOf___redArg___closed__3 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Literal_0__Vampire_Reconstruct_strippedOf___redArg___closed__3_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Literal_0__Vampire_Reconstruct_strippedOf___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Literal_0__Vampire_Reconstruct_strippedOf___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Literal_0__Vampire_Reconstruct_strippedOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Literal_0__Vampire_Reconstruct_strippedOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_sameUpToDoubleNegation___redArg___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_sameUpToDoubleNegation___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_sameUpToDoubleNegation___redArg___closed__0_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(176, 247, 20, 85, 206, 87, 7, 233)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_sameUpToDoubleNegation___redArg___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_sameUpToDoubleNegation___redArg___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_sameUpToDoubleNegation___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_sameUpToDoubleNegation___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_sameUpToDoubleNegation(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_sameUpToDoubleNegation___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "absurd"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__0_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(93, 22, 196, 124, 199, 219, 238, 136)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__1_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "the literals"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__2_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__3;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "\nand"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__4_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__5;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "\nare not complementary"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__6 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__6_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__7;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "the literals resolved on are not complementary"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__8 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__8_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__9;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_closeComplementary(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_closeComplementary___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__0___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__0___redArg___closed__0_value;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Or"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__0___redArg___closed__1 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__0___redArg___closed__1_value;
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(34, 237, 162, 225, 217, 98, 205, 196)}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__0___redArg___closed__2 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_placeLiteral___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_placeLiteral___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__1_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__1_spec__1___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__1_spec__1___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__1_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_placeLiteral___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "the literal"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_placeLiteral___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_placeLiteral___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_placeLiteral___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_placeLiteral___closed__1;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_placeLiteral___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "\nis not among"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_placeLiteral___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_placeLiteral___closed__2_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_placeLiteral___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_placeLiteral___closed__3;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_placeLiteral(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_placeLiteral___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_ofNotNot___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_ofNotNot___closed__0;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_ofNotNot___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_ofNotNot___closed__1;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_ofNotNot___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_ofNotNot___closed__2;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_ofNotNot(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_plainly(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_plainly___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_byArithmetic___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_byArithmetic___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__2___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__2___redArg___closed__0_value;
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__2___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__2___redArg___closed__1 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__2___redArg___closed__1_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__2___redArg___closed__2;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__2___redArg___closed__3;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_byArithmetic_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_byArithmetic_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__6_spec__6(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__6_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__6(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__8___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__8___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "l"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__8___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__8___closed__0_value;
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__8___closed__0_value),LEAN_SCALAR_PTR_LITERAL(140, 76, 64, 139, 36, 56, 191, 236)}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__8___closed__1 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__8___closed__1_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__8(lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "And"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__1___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__1___closed__0_value;
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__1___closed__1 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__1___closed__1_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_byArithmetic___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_byArithmetic___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_byArithmetic___closed__0_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_byArithmetic___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_byArithmetic___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_byArithmetic___closed__1_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_byArithmetic___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_byArithmetic___closed__1_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_byArithmetic___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_byArithmetic___closed__2_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__4(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_byArithmetic___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* lp_vampireReplay_Vampire_Reconstruct_byArithmetic___boxed__const__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_byArithmetic___boxed__const__1_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_byArithmetic___lam__1(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_byArithmetic___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_byArithmetic___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_byArithmetic___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_byArithmetic___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "intro"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_byArithmetic___closed__3 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_byArithmetic___closed__3_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_byArithmetic___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_byArithmetic___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_byArithmetic___closed__4_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_byArithmetic___closed__3_value),LEAN_SCALAR_PTR_LITERAL(176, 155, 85, 49, 105, 137, 67, 168)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_byArithmetic___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_byArithmetic___closed__4_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_byArithmetic___lam__4(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_byArithmetic___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_byArithmetic___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_byArithmetic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_byArithmetic___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_byArithmetic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_byArithmetic_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_byArithmetic_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_arithmeticIff___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_arithmeticIff___closed__0;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_arithmeticIff(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_arithmeticIff___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__4(void){
_start:
{
lean_object* v___x_7_; lean_object* v_dummy_8_; 
v___x_7_ = lean_box(0);
v_dummy_8_ = l_Lean_Expr_sort___override(v___x_7_);
return v_dummy_8_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg(lean_object* v_h_17_, lean_object* v_a_18_, lean_object* v_a_19_, lean_object* v_a_20_, lean_object* v_a_21_){
_start:
{
lean_object* v___x_26_; 
lean_inc(v_a_21_);
lean_inc_ref(v_a_20_);
lean_inc(v_a_19_);
lean_inc_ref(v_a_18_);
lean_inc_ref(v_h_17_);
v___x_26_ = lean_infer_type(v_h_17_, v_a_18_, v_a_19_, v_a_20_, v_a_21_);
if (lean_obj_tag(v___x_26_) == 0)
{
lean_object* v_a_27_; lean_object* v___x_28_; lean_object* v_a_29_; lean_object* v___x_31_; uint8_t v_isShared_32_; uint8_t v_isSharedCheck_120_; 
v_a_27_ = lean_ctor_get(v___x_26_, 0);
lean_inc(v_a_27_);
lean_dec_ref_known(v___x_26_, 1);
v___x_28_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_a_27_, v_a_19_);
v_a_29_ = lean_ctor_get(v___x_28_, 0);
v_isSharedCheck_120_ = !lean_is_exclusive(v___x_28_);
if (v_isSharedCheck_120_ == 0)
{
v___x_31_ = v___x_28_;
v_isShared_32_ = v_isSharedCheck_120_;
goto v_resetjp_30_;
}
else
{
lean_inc(v_a_29_);
lean_dec(v___x_28_);
v___x_31_ = lean_box(0);
v_isShared_32_ = v_isSharedCheck_120_;
goto v_resetjp_30_;
}
v_resetjp_30_:
{
lean_object* v___x_33_; lean_object* v___x_34_; uint8_t v___x_35_; 
v___x_33_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__1));
v___x_34_ = lean_unsigned_to_nat(3u);
v___x_35_ = l_Lean_Expr_isAppOfArity(v_a_29_, v___x_33_, v___x_34_);
if (v___x_35_ == 0)
{
lean_object* v___x_36_; lean_object* v___x_37_; uint8_t v___x_38_; 
v___x_36_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__3));
v___x_37_ = lean_unsigned_to_nat(1u);
v___x_38_ = l_Lean_Expr_isAppOfArity(v_a_29_, v___x_36_, v___x_37_);
if (v___x_38_ == 0)
{
lean_del_object(v___x_31_);
lean_dec(v_a_29_);
lean_dec_ref(v_h_17_);
goto v___jp_23_;
}
else
{
lean_object* v___x_39_; uint8_t v___x_40_; 
v___x_39_ = l_Lean_Expr_appArg_x21(v_a_29_);
lean_dec(v_a_29_);
v___x_40_ = l_Lean_Expr_isAppOfArity(v___x_39_, v___x_33_, v___x_34_);
if (v___x_40_ == 0)
{
lean_dec_ref(v___x_39_);
lean_del_object(v___x_31_);
lean_dec_ref(v_h_17_);
goto v___jp_23_;
}
else
{
lean_object* v_dummy_41_; lean_object* v_nargs_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; uint8_t v___x_47_; 
v_dummy_41_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__4, &lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__4_once, _init_lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__4);
v_nargs_42_ = l_Lean_Expr_getAppNumArgs(v___x_39_);
lean_inc(v_nargs_42_);
v___x_43_ = lean_mk_array(v_nargs_42_, v_dummy_41_);
v___x_44_ = lean_nat_sub(v_nargs_42_, v___x_37_);
lean_dec(v_nargs_42_);
v___x_45_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___x_39_, v___x_43_, v___x_44_);
v___x_46_ = lean_array_get_size(v___x_45_);
v___x_47_ = lean_nat_dec_eq(v___x_46_, v___x_34_);
if (v___x_47_ == 0)
{
lean_object* v___x_48_; lean_object* v___x_50_; 
lean_dec_ref(v___x_45_);
lean_dec_ref(v_h_17_);
v___x_48_ = lean_box(0);
if (v_isShared_32_ == 0)
{
lean_ctor_set(v___x_31_, 0, v___x_48_);
v___x_50_ = v___x_31_;
goto v_reusejp_49_;
}
else
{
lean_object* v_reuseFailAlloc_51_; 
v_reuseFailAlloc_51_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_51_, 0, v___x_48_);
v___x_50_ = v_reuseFailAlloc_51_;
goto v_reusejp_49_;
}
v_reusejp_49_:
{
return v___x_50_;
}
}
else
{
lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
lean_del_object(v___x_31_);
v___x_52_ = lean_unsigned_to_nat(0u);
v___x_53_ = lean_array_fget(v___x_45_, v___x_52_);
lean_inc(v___x_53_);
v___x_54_ = l_Lean_Meta_getLevel(v___x_53_, v_a_18_, v_a_19_, v_a_20_, v_a_21_);
if (lean_obj_tag(v___x_54_) == 0)
{
lean_object* v_a_55_; lean_object* v___x_57_; uint8_t v_isShared_58_; uint8_t v_isSharedCheck_71_; 
v_a_55_ = lean_ctor_get(v___x_54_, 0);
v_isSharedCheck_71_ = !lean_is_exclusive(v___x_54_);
if (v_isSharedCheck_71_ == 0)
{
v___x_57_ = v___x_54_;
v_isShared_58_ = v_isSharedCheck_71_;
goto v_resetjp_56_;
}
else
{
lean_inc(v_a_55_);
lean_dec(v___x_54_);
v___x_57_ = lean_box(0);
v_isShared_58_ = v_isSharedCheck_71_;
goto v_resetjp_56_;
}
v_resetjp_56_:
{
lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_69_; 
v___x_59_ = lean_array_fget(v___x_45_, v___x_37_);
v___x_60_ = lean_unsigned_to_nat(2u);
v___x_61_ = lean_array_fget(v___x_45_, v___x_60_);
lean_dec_ref(v___x_45_);
v___x_62_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__7));
v___x_63_ = lean_box(0);
v___x_64_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_64_, 0, v_a_55_);
lean_ctor_set(v___x_64_, 1, v___x_63_);
v___x_65_ = l_Lean_Expr_const___override(v___x_62_, v___x_64_);
v___x_66_ = l_Lean_mkApp4(v___x_65_, v___x_53_, v___x_59_, v___x_61_, v_h_17_);
v___x_67_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_67_, 0, v___x_66_);
if (v_isShared_58_ == 0)
{
lean_ctor_set(v___x_57_, 0, v___x_67_);
v___x_69_ = v___x_57_;
goto v_reusejp_68_;
}
else
{
lean_object* v_reuseFailAlloc_70_; 
v_reuseFailAlloc_70_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_70_, 0, v___x_67_);
v___x_69_ = v_reuseFailAlloc_70_;
goto v_reusejp_68_;
}
v_reusejp_68_:
{
return v___x_69_;
}
}
}
else
{
lean_object* v_a_72_; lean_object* v___x_74_; uint8_t v_isShared_75_; uint8_t v_isSharedCheck_79_; 
lean_dec(v___x_53_);
lean_dec_ref(v___x_45_);
lean_dec_ref(v_h_17_);
v_a_72_ = lean_ctor_get(v___x_54_, 0);
v_isSharedCheck_79_ = !lean_is_exclusive(v___x_54_);
if (v_isSharedCheck_79_ == 0)
{
v___x_74_ = v___x_54_;
v_isShared_75_ = v_isSharedCheck_79_;
goto v_resetjp_73_;
}
else
{
lean_inc(v_a_72_);
lean_dec(v___x_54_);
v___x_74_ = lean_box(0);
v_isShared_75_ = v_isSharedCheck_79_;
goto v_resetjp_73_;
}
v_resetjp_73_:
{
lean_object* v___x_77_; 
if (v_isShared_75_ == 0)
{
v___x_77_ = v___x_74_;
goto v_reusejp_76_;
}
else
{
lean_object* v_reuseFailAlloc_78_; 
v_reuseFailAlloc_78_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_78_, 0, v_a_72_);
v___x_77_ = v_reuseFailAlloc_78_;
goto v_reusejp_76_;
}
v_reusejp_76_:
{
return v___x_77_;
}
}
}
}
}
}
}
else
{
lean_object* v_dummy_80_; lean_object* v_nargs_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; uint8_t v___x_87_; 
v_dummy_80_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__4, &lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__4_once, _init_lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__4);
v_nargs_81_ = l_Lean_Expr_getAppNumArgs(v_a_29_);
lean_inc(v_nargs_81_);
v___x_82_ = lean_mk_array(v_nargs_81_, v_dummy_80_);
v___x_83_ = lean_unsigned_to_nat(1u);
v___x_84_ = lean_nat_sub(v_nargs_81_, v___x_83_);
lean_dec(v_nargs_81_);
v___x_85_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_29_, v___x_82_, v___x_84_);
v___x_86_ = lean_array_get_size(v___x_85_);
v___x_87_ = lean_nat_dec_eq(v___x_86_, v___x_34_);
if (v___x_87_ == 0)
{
lean_object* v___x_88_; lean_object* v___x_90_; 
lean_dec_ref(v___x_85_);
lean_dec_ref(v_h_17_);
v___x_88_ = lean_box(0);
if (v_isShared_32_ == 0)
{
lean_ctor_set(v___x_31_, 0, v___x_88_);
v___x_90_ = v___x_31_;
goto v_reusejp_89_;
}
else
{
lean_object* v_reuseFailAlloc_91_; 
v_reuseFailAlloc_91_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_91_, 0, v___x_88_);
v___x_90_ = v_reuseFailAlloc_91_;
goto v_reusejp_89_;
}
v_reusejp_89_:
{
return v___x_90_;
}
}
else
{
lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
lean_del_object(v___x_31_);
v___x_92_ = lean_unsigned_to_nat(0u);
v___x_93_ = lean_array_fget(v___x_85_, v___x_92_);
lean_inc(v___x_93_);
v___x_94_ = l_Lean_Meta_getLevel(v___x_93_, v_a_18_, v_a_19_, v_a_20_, v_a_21_);
if (lean_obj_tag(v___x_94_) == 0)
{
lean_object* v_a_95_; lean_object* v___x_97_; uint8_t v_isShared_98_; uint8_t v_isSharedCheck_111_; 
v_a_95_ = lean_ctor_get(v___x_94_, 0);
v_isSharedCheck_111_ = !lean_is_exclusive(v___x_94_);
if (v_isSharedCheck_111_ == 0)
{
v___x_97_ = v___x_94_;
v_isShared_98_ = v_isSharedCheck_111_;
goto v_resetjp_96_;
}
else
{
lean_inc(v_a_95_);
lean_dec(v___x_94_);
v___x_97_ = lean_box(0);
v_isShared_98_ = v_isSharedCheck_111_;
goto v_resetjp_96_;
}
v_resetjp_96_:
{
lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_109_; 
v___x_99_ = lean_array_fget(v___x_85_, v___x_83_);
v___x_100_ = lean_unsigned_to_nat(2u);
v___x_101_ = lean_array_fget(v___x_85_, v___x_100_);
lean_dec_ref(v___x_85_);
v___x_102_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__8));
v___x_103_ = lean_box(0);
v___x_104_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_104_, 0, v_a_95_);
lean_ctor_set(v___x_104_, 1, v___x_103_);
v___x_105_ = l_Lean_Expr_const___override(v___x_102_, v___x_104_);
v___x_106_ = l_Lean_mkApp4(v___x_105_, v___x_93_, v___x_99_, v___x_101_, v_h_17_);
v___x_107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_107_, 0, v___x_106_);
if (v_isShared_98_ == 0)
{
lean_ctor_set(v___x_97_, 0, v___x_107_);
v___x_109_ = v___x_97_;
goto v_reusejp_108_;
}
else
{
lean_object* v_reuseFailAlloc_110_; 
v_reuseFailAlloc_110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_110_, 0, v___x_107_);
v___x_109_ = v_reuseFailAlloc_110_;
goto v_reusejp_108_;
}
v_reusejp_108_:
{
return v___x_109_;
}
}
}
else
{
lean_object* v_a_112_; lean_object* v___x_114_; uint8_t v_isShared_115_; uint8_t v_isSharedCheck_119_; 
lean_dec(v___x_93_);
lean_dec_ref(v___x_85_);
lean_dec_ref(v_h_17_);
v_a_112_ = lean_ctor_get(v___x_94_, 0);
v_isSharedCheck_119_ = !lean_is_exclusive(v___x_94_);
if (v_isSharedCheck_119_ == 0)
{
v___x_114_ = v___x_94_;
v_isShared_115_ = v_isSharedCheck_119_;
goto v_resetjp_113_;
}
else
{
lean_inc(v_a_112_);
lean_dec(v___x_94_);
v___x_114_ = lean_box(0);
v_isShared_115_ = v_isSharedCheck_119_;
goto v_resetjp_113_;
}
v_resetjp_113_:
{
lean_object* v___x_117_; 
if (v_isShared_115_ == 0)
{
v___x_117_ = v___x_114_;
goto v_reusejp_116_;
}
else
{
lean_object* v_reuseFailAlloc_118_; 
v_reuseFailAlloc_118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_118_, 0, v_a_112_);
v___x_117_ = v_reuseFailAlloc_118_;
goto v_reusejp_116_;
}
v_reusejp_116_:
{
return v___x_117_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_121_; lean_object* v___x_123_; uint8_t v_isShared_124_; uint8_t v_isSharedCheck_128_; 
lean_dec_ref(v_h_17_);
v_a_121_ = lean_ctor_get(v___x_26_, 0);
v_isSharedCheck_128_ = !lean_is_exclusive(v___x_26_);
if (v_isSharedCheck_128_ == 0)
{
v___x_123_ = v___x_26_;
v_isShared_124_ = v_isSharedCheck_128_;
goto v_resetjp_122_;
}
else
{
lean_inc(v_a_121_);
lean_dec(v___x_26_);
v___x_123_ = lean_box(0);
v_isShared_124_ = v_isSharedCheck_128_;
goto v_resetjp_122_;
}
v_resetjp_122_:
{
lean_object* v___x_126_; 
if (v_isShared_124_ == 0)
{
v___x_126_ = v___x_123_;
goto v_reusejp_125_;
}
else
{
lean_object* v_reuseFailAlloc_127_; 
v_reuseFailAlloc_127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_127_, 0, v_a_121_);
v___x_126_ = v_reuseFailAlloc_127_;
goto v_reusejp_125_;
}
v_reusejp_125_:
{
return v___x_126_;
}
}
}
v___jp_23_:
{
lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_24_ = lean_box(0);
v___x_25_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_25_, 0, v___x_24_);
return v___x_25_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___boxed(lean_object* v_h_129_, lean_object* v_a_130_, lean_object* v_a_131_, lean_object* v_a_132_, lean_object* v_a_133_, lean_object* v_a_134_){
_start:
{
lean_object* v_res_135_; 
v_res_135_ = lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg(v_h_129_, v_a_130_, v_a_131_, v_a_132_, v_a_133_);
lean_dec(v_a_133_);
lean_dec_ref(v_a_132_);
lean_dec(v_a_131_);
lean_dec_ref(v_a_130_);
return v_res_135_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_flipEquality(lean_object* v_h_136_, lean_object* v_a_137_, lean_object* v_a_138_, lean_object* v_a_139_, lean_object* v_a_140_, lean_object* v_a_141_, lean_object* v_a_142_){
_start:
{
lean_object* v___x_144_; 
v___x_144_ = lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg(v_h_136_, v_a_139_, v_a_140_, v_a_141_, v_a_142_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_flipEquality___boxed(lean_object* v_h_145_, lean_object* v_a_146_, lean_object* v_a_147_, lean_object* v_a_148_, lean_object* v_a_149_, lean_object* v_a_150_, lean_object* v_a_151_, lean_object* v_a_152_){
_start:
{
lean_object* v_res_153_; 
v_res_153_ = lp_vampireReplay_Vampire_Reconstruct_flipEquality(v_h_145_, v_a_146_, v_a_147_, v_a_148_, v_a_149_, v_a_150_, v_a_151_);
lean_dec(v_a_151_);
lean_dec_ref(v_a_150_);
lean_dec(v_a_149_);
lean_dec_ref(v_a_148_);
lean_dec(v_a_147_);
lean_dec_ref(v_a_146_);
return v_res_153_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg(lean_object* v_h_170_, lean_object* v_a_171_, lean_object* v_a_172_, lean_object* v_a_173_, lean_object* v_a_174_){
_start:
{
lean_object* v___x_176_; 
lean_inc(v_a_174_);
lean_inc_ref(v_a_173_);
lean_inc(v_a_172_);
lean_inc_ref(v_a_171_);
lean_inc_ref(v_h_170_);
v___x_176_ = lean_infer_type(v_h_170_, v_a_171_, v_a_172_, v_a_173_, v_a_174_);
if (lean_obj_tag(v___x_176_) == 0)
{
lean_object* v_a_177_; lean_object* v___x_178_; lean_object* v_a_179_; lean_object* v___x_181_; uint8_t v_isShared_182_; uint8_t v_isSharedCheck_266_; 
v_a_177_ = lean_ctor_get(v___x_176_, 0);
lean_inc(v_a_177_);
lean_dec_ref_known(v___x_176_, 1);
v___x_178_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_a_177_, v_a_172_);
v_a_179_ = lean_ctor_get(v___x_178_, 0);
v_isSharedCheck_266_ = !lean_is_exclusive(v___x_178_);
if (v_isSharedCheck_266_ == 0)
{
v___x_181_ = v___x_178_;
v_isShared_182_ = v_isSharedCheck_266_;
goto v_resetjp_180_;
}
else
{
lean_inc(v_a_179_);
lean_dec(v___x_178_);
v___x_181_ = lean_box(0);
v_isShared_182_ = v_isSharedCheck_266_;
goto v_resetjp_180_;
}
v_resetjp_180_:
{
lean_object* v_out_184_; lean_object* v___y_185_; lean_object* v___y_186_; lean_object* v___y_187_; lean_object* v___y_188_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; uint8_t v___x_232_; 
v___x_229_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__6));
v___x_230_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__3));
v___x_231_ = lean_unsigned_to_nat(1u);
v___x_232_ = l_Lean_Expr_isAppOfArity(v_a_179_, v___x_230_, v___x_231_);
if (v___x_232_ == 0)
{
v_out_184_ = v___x_229_;
v___y_185_ = v_a_171_;
v___y_186_ = v_a_172_;
v___y_187_ = v_a_173_;
v___y_188_ = v_a_174_;
goto v___jp_183_;
}
else
{
lean_object* v___x_233_; uint8_t v___x_234_; 
v___x_233_ = l_Lean_Expr_appArg_x21(v_a_179_);
v___x_234_ = l_Lean_Expr_isAppOfArity(v___x_233_, v___x_230_, v___x_231_);
if (v___x_234_ == 0)
{
lean_dec_ref(v___x_233_);
v_out_184_ = v___x_229_;
v___y_185_ = v_a_171_;
v___y_186_ = v_a_172_;
v___y_187_ = v_a_173_;
v___y_188_ = v_a_174_;
goto v___jp_183_;
}
else
{
lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; 
v___x_235_ = l_Lean_Expr_appArg_x21(v___x_233_);
lean_dec_ref(v___x_233_);
v___x_236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_236_, 0, v___x_235_);
v___x_237_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__2));
v___x_238_ = lean_mk_empty_array_with_capacity(v___x_231_);
v___x_239_ = lean_array_push(v___x_238_, v___x_236_);
v___x_240_ = l_Lean_Meta_mkAppOptM(v___x_237_, v___x_239_, v_a_171_, v_a_172_, v_a_173_, v_a_174_);
if (lean_obj_tag(v___x_240_) == 0)
{
lean_object* v_a_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; 
v_a_241_ = lean_ctor_get(v___x_240_, 0);
lean_inc(v_a_241_);
lean_dec_ref_known(v___x_240_, 1);
v___x_242_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__8));
v___x_243_ = lean_unsigned_to_nat(2u);
v___x_244_ = lean_mk_empty_array_with_capacity(v___x_243_);
v___x_245_ = lean_array_push(v___x_244_, v_a_241_);
lean_inc_ref(v_h_170_);
v___x_246_ = lean_array_push(v___x_245_, v_h_170_);
v___x_247_ = l_Lean_Meta_mkAppM(v___x_242_, v___x_246_, v_a_171_, v_a_172_, v_a_173_, v_a_174_);
if (lean_obj_tag(v___x_247_) == 0)
{
lean_object* v_a_248_; lean_object* v___x_249_; 
v_a_248_ = lean_ctor_get(v___x_247_, 0);
lean_inc(v_a_248_);
lean_dec_ref_known(v___x_247_, 1);
v___x_249_ = lean_array_push(v___x_229_, v_a_248_);
v_out_184_ = v___x_249_;
v___y_185_ = v_a_171_;
v___y_186_ = v_a_172_;
v___y_187_ = v_a_173_;
v___y_188_ = v_a_174_;
goto v___jp_183_;
}
else
{
lean_object* v_a_250_; lean_object* v___x_252_; uint8_t v_isShared_253_; uint8_t v_isSharedCheck_257_; 
lean_del_object(v___x_181_);
lean_dec(v_a_179_);
lean_dec_ref(v_h_170_);
v_a_250_ = lean_ctor_get(v___x_247_, 0);
v_isSharedCheck_257_ = !lean_is_exclusive(v___x_247_);
if (v_isSharedCheck_257_ == 0)
{
v___x_252_ = v___x_247_;
v_isShared_253_ = v_isSharedCheck_257_;
goto v_resetjp_251_;
}
else
{
lean_inc(v_a_250_);
lean_dec(v___x_247_);
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
else
{
lean_object* v_a_258_; lean_object* v___x_260_; uint8_t v_isShared_261_; uint8_t v_isSharedCheck_265_; 
lean_del_object(v___x_181_);
lean_dec(v_a_179_);
lean_dec_ref(v_h_170_);
v_a_258_ = lean_ctor_get(v___x_240_, 0);
v_isSharedCheck_265_ = !lean_is_exclusive(v___x_240_);
if (v_isSharedCheck_265_ == 0)
{
v___x_260_ = v___x_240_;
v_isShared_261_ = v_isSharedCheck_265_;
goto v_resetjp_259_;
}
else
{
lean_inc(v_a_258_);
lean_dec(v___x_240_);
v___x_260_ = lean_box(0);
v_isShared_261_ = v_isSharedCheck_265_;
goto v_resetjp_259_;
}
v_resetjp_259_:
{
lean_object* v___x_263_; 
if (v_isShared_261_ == 0)
{
v___x_263_ = v___x_260_;
goto v_reusejp_262_;
}
else
{
lean_object* v_reuseFailAlloc_264_; 
v_reuseFailAlloc_264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_264_, 0, v_a_258_);
v___x_263_ = v_reuseFailAlloc_264_;
goto v_reusejp_262_;
}
v_reusejp_262_:
{
return v___x_263_;
}
}
}
}
}
v___jp_183_:
{
lean_object* v___x_189_; lean_object* v___x_191_; 
v___x_189_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__2));
if (v_isShared_182_ == 0)
{
lean_ctor_set_tag(v___x_181_, 1);
v___x_191_ = v___x_181_;
goto v_reusejp_190_;
}
else
{
lean_object* v_reuseFailAlloc_228_; 
v_reuseFailAlloc_228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_228_, 0, v_a_179_);
v___x_191_ = v_reuseFailAlloc_228_;
goto v_reusejp_190_;
}
v_reusejp_190_:
{
lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; 
v___x_192_ = lean_unsigned_to_nat(1u);
v___x_193_ = lean_mk_empty_array_with_capacity(v___x_192_);
v___x_194_ = lean_array_push(v___x_193_, v___x_191_);
v___x_195_ = l_Lean_Meta_mkAppOptM(v___x_189_, v___x_194_, v___y_185_, v___y_186_, v___y_187_, v___y_188_);
if (lean_obj_tag(v___x_195_) == 0)
{
lean_object* v_a_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
v_a_196_ = lean_ctor_get(v___x_195_, 0);
lean_inc(v_a_196_);
lean_dec_ref_known(v___x_195_, 1);
v___x_197_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__5));
v___x_198_ = lean_unsigned_to_nat(2u);
v___x_199_ = lean_mk_empty_array_with_capacity(v___x_198_);
v___x_200_ = lean_array_push(v___x_199_, v_a_196_);
v___x_201_ = lean_array_push(v___x_200_, v_h_170_);
v___x_202_ = l_Lean_Meta_mkAppM(v___x_197_, v___x_201_, v___y_185_, v___y_186_, v___y_187_, v___y_188_);
if (lean_obj_tag(v___x_202_) == 0)
{
lean_object* v_a_203_; lean_object* v___x_205_; uint8_t v_isShared_206_; uint8_t v_isSharedCheck_211_; 
v_a_203_ = lean_ctor_get(v___x_202_, 0);
v_isSharedCheck_211_ = !lean_is_exclusive(v___x_202_);
if (v_isSharedCheck_211_ == 0)
{
v___x_205_ = v___x_202_;
v_isShared_206_ = v_isSharedCheck_211_;
goto v_resetjp_204_;
}
else
{
lean_inc(v_a_203_);
lean_dec(v___x_202_);
v___x_205_ = lean_box(0);
v_isShared_206_ = v_isSharedCheck_211_;
goto v_resetjp_204_;
}
v_resetjp_204_:
{
lean_object* v___x_207_; lean_object* v___x_209_; 
v___x_207_ = lean_array_push(v_out_184_, v_a_203_);
if (v_isShared_206_ == 0)
{
lean_ctor_set(v___x_205_, 0, v___x_207_);
v___x_209_ = v___x_205_;
goto v_reusejp_208_;
}
else
{
lean_object* v_reuseFailAlloc_210_; 
v_reuseFailAlloc_210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_210_, 0, v___x_207_);
v___x_209_ = v_reuseFailAlloc_210_;
goto v_reusejp_208_;
}
v_reusejp_208_:
{
return v___x_209_;
}
}
}
else
{
lean_object* v_a_212_; lean_object* v___x_214_; uint8_t v_isShared_215_; uint8_t v_isSharedCheck_219_; 
lean_dec_ref(v_out_184_);
v_a_212_ = lean_ctor_get(v___x_202_, 0);
v_isSharedCheck_219_ = !lean_is_exclusive(v___x_202_);
if (v_isSharedCheck_219_ == 0)
{
v___x_214_ = v___x_202_;
v_isShared_215_ = v_isSharedCheck_219_;
goto v_resetjp_213_;
}
else
{
lean_inc(v_a_212_);
lean_dec(v___x_202_);
v___x_214_ = lean_box(0);
v_isShared_215_ = v_isSharedCheck_219_;
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
lean_object* v_reuseFailAlloc_218_; 
v_reuseFailAlloc_218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_218_, 0, v_a_212_);
v___x_217_ = v_reuseFailAlloc_218_;
goto v_reusejp_216_;
}
v_reusejp_216_:
{
return v___x_217_;
}
}
}
}
else
{
lean_object* v_a_220_; lean_object* v___x_222_; uint8_t v_isShared_223_; uint8_t v_isSharedCheck_227_; 
lean_dec_ref(v_out_184_);
lean_dec_ref(v_h_170_);
v_a_220_ = lean_ctor_get(v___x_195_, 0);
v_isSharedCheck_227_ = !lean_is_exclusive(v___x_195_);
if (v_isSharedCheck_227_ == 0)
{
v___x_222_ = v___x_195_;
v_isShared_223_ = v_isSharedCheck_227_;
goto v_resetjp_221_;
}
else
{
lean_inc(v_a_220_);
lean_dec(v___x_195_);
v___x_222_ = lean_box(0);
v_isShared_223_ = v_isSharedCheck_227_;
goto v_resetjp_221_;
}
v_resetjp_221_:
{
lean_object* v___x_225_; 
if (v_isShared_223_ == 0)
{
v___x_225_ = v___x_222_;
goto v_reusejp_224_;
}
else
{
lean_object* v_reuseFailAlloc_226_; 
v_reuseFailAlloc_226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_226_, 0, v_a_220_);
v___x_225_ = v_reuseFailAlloc_226_;
goto v_reusejp_224_;
}
v_reusejp_224_:
{
return v___x_225_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_267_; lean_object* v___x_269_; uint8_t v_isShared_270_; uint8_t v_isSharedCheck_274_; 
lean_dec_ref(v_h_170_);
v_a_267_ = lean_ctor_get(v___x_176_, 0);
v_isSharedCheck_274_ = !lean_is_exclusive(v___x_176_);
if (v_isSharedCheck_274_ == 0)
{
v___x_269_ = v___x_176_;
v_isShared_270_ = v_isSharedCheck_274_;
goto v_resetjp_268_;
}
else
{
lean_inc(v_a_267_);
lean_dec(v___x_176_);
v___x_269_ = lean_box(0);
v_isShared_270_ = v_isSharedCheck_274_;
goto v_resetjp_268_;
}
v_resetjp_268_:
{
lean_object* v___x_272_; 
if (v_isShared_270_ == 0)
{
v___x_272_ = v___x_269_;
goto v_reusejp_271_;
}
else
{
lean_object* v_reuseFailAlloc_273_; 
v_reuseFailAlloc_273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_273_, 0, v_a_267_);
v___x_272_ = v_reuseFailAlloc_273_;
goto v_reusejp_271_;
}
v_reusejp_271_:
{
return v___x_272_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___boxed(lean_object* v_h_275_, lean_object* v_a_276_, lean_object* v_a_277_, lean_object* v_a_278_, lean_object* v_a_279_, lean_object* v_a_280_){
_start:
{
lean_object* v_res_281_; 
v_res_281_ = lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg(v_h_275_, v_a_276_, v_a_277_, v_a_278_, v_a_279_);
lean_dec(v_a_279_);
lean_dec_ref(v_a_278_);
lean_dec(v_a_277_);
lean_dec_ref(v_a_276_);
return v_res_281_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_doubleNegations(lean_object* v_h_282_, lean_object* v_a_283_, lean_object* v_a_284_, lean_object* v_a_285_, lean_object* v_a_286_, lean_object* v_a_287_, lean_object* v_a_288_){
_start:
{
lean_object* v___x_290_; 
v___x_290_ = lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg(v_h_282_, v_a_285_, v_a_286_, v_a_287_, v_a_288_);
return v___x_290_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_doubleNegations___boxed(lean_object* v_h_291_, lean_object* v_a_292_, lean_object* v_a_293_, lean_object* v_a_294_, lean_object* v_a_295_, lean_object* v_a_296_, lean_object* v_a_297_, lean_object* v_a_298_){
_start:
{
lean_object* v_res_299_; 
v_res_299_ = lp_vampireReplay_Vampire_Reconstruct_doubleNegations(v_h_291_, v_a_292_, v_a_293_, v_a_294_, v_a_295_, v_a_296_, v_a_297_);
lean_dec(v_a_297_);
lean_dec_ref(v_a_296_);
lean_dec(v_a_295_);
lean_dec_ref(v_a_294_);
lean_dec(v_a_293_);
lean_dec_ref(v_a_292_);
return v_res_299_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Literal_0__Vampire_Reconstruct_stripped(lean_object* v_a_300_){
_start:
{
lean_object* v___x_301_; lean_object* v___x_302_; uint8_t v___x_303_; 
v___x_301_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__3));
v___x_302_ = lean_unsigned_to_nat(1u);
v___x_303_ = l_Lean_Expr_isAppOfArity(v_a_300_, v___x_301_, v___x_302_);
if (v___x_303_ == 0)
{
return v_a_300_;
}
else
{
lean_object* v___x_304_; uint8_t v___x_305_; 
v___x_304_ = l_Lean_Expr_appArg_x21(v_a_300_);
v___x_305_ = l_Lean_Expr_isAppOfArity(v___x_304_, v___x_301_, v___x_302_);
if (v___x_305_ == 0)
{
lean_dec_ref(v___x_304_);
return v_a_300_;
}
else
{
lean_object* v___x_306_; 
lean_dec_ref(v_a_300_);
v___x_306_ = l_Lean_Expr_appArg_x21(v___x_304_);
lean_dec_ref(v___x_304_);
v_a_300_ = v___x_306_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Literal_0__Vampire_Reconstruct_strippedOf___redArg(lean_object* v_a_316_, lean_object* v_a_317_, lean_object* v_a_318_, lean_object* v_a_319_, lean_object* v_a_320_){
_start:
{
lean_object* v___y_323_; lean_object* v___y_324_; lean_object* v___y_325_; lean_object* v___y_326_; lean_object* v___x_350_; lean_object* v___x_351_; uint8_t v___x_352_; 
v___x_350_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__3));
v___x_351_ = lean_unsigned_to_nat(1u);
v___x_352_ = l_Lean_Expr_isAppOfArity(v_a_316_, v___x_350_, v___x_351_);
if (v___x_352_ == 0)
{
v___y_323_ = v_a_317_;
v___y_324_ = v_a_318_;
v___y_325_ = v_a_319_;
v___y_326_ = v_a_320_;
goto v___jp_322_;
}
else
{
lean_object* v___x_353_; uint8_t v___x_354_; 
v___x_353_ = l_Lean_Expr_appArg_x21(v_a_316_);
v___x_354_ = l_Lean_Expr_isAppOfArity(v___x_353_, v___x_350_, v___x_351_);
if (v___x_354_ == 0)
{
lean_dec_ref(v___x_353_);
v___y_323_ = v_a_317_;
v___y_324_ = v_a_318_;
v___y_325_ = v_a_319_;
v___y_326_ = v_a_320_;
goto v___jp_322_;
}
else
{
lean_object* v___x_355_; lean_object* v___x_356_; 
lean_dec_ref(v_a_316_);
v___x_355_ = l_Lean_Expr_appArg_x21(v___x_353_);
lean_dec_ref(v___x_353_);
lean_inc_ref(v___x_355_);
v___x_356_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Literal_0__Vampire_Reconstruct_strippedOf___redArg(v___x_355_, v_a_317_, v_a_318_, v_a_319_, v_a_320_);
if (lean_obj_tag(v___x_356_) == 0)
{
lean_object* v_a_357_; lean_object* v___x_359_; uint8_t v_isShared_360_; uint8_t v_isSharedCheck_408_; 
v_a_357_ = lean_ctor_get(v___x_356_, 0);
v_isSharedCheck_408_ = !lean_is_exclusive(v___x_356_);
if (v_isSharedCheck_408_ == 0)
{
v___x_359_ = v___x_356_;
v_isShared_360_ = v_isSharedCheck_408_;
goto v_resetjp_358_;
}
else
{
lean_inc(v_a_357_);
lean_dec(v___x_356_);
v___x_359_ = lean_box(0);
v_isShared_360_ = v_isSharedCheck_408_;
goto v_resetjp_358_;
}
v_resetjp_358_:
{
lean_object* v_fst_361_; lean_object* v_snd_362_; lean_object* v___x_364_; uint8_t v_isShared_365_; uint8_t v_isSharedCheck_407_; 
v_fst_361_ = lean_ctor_get(v_a_357_, 0);
v_snd_362_ = lean_ctor_get(v_a_357_, 1);
v_isSharedCheck_407_ = !lean_is_exclusive(v_a_357_);
if (v_isSharedCheck_407_ == 0)
{
v___x_364_ = v_a_357_;
v_isShared_365_ = v_isSharedCheck_407_;
goto v_resetjp_363_;
}
else
{
lean_inc(v_snd_362_);
lean_inc(v_fst_361_);
lean_dec(v_a_357_);
v___x_364_ = lean_box(0);
v_isShared_365_ = v_isSharedCheck_407_;
goto v_resetjp_363_;
}
v_resetjp_363_:
{
lean_object* v___x_366_; lean_object* v___x_368_; 
v___x_366_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__2));
if (v_isShared_360_ == 0)
{
lean_ctor_set_tag(v___x_359_, 1);
lean_ctor_set(v___x_359_, 0, v___x_355_);
v___x_368_ = v___x_359_;
goto v_reusejp_367_;
}
else
{
lean_object* v_reuseFailAlloc_406_; 
v_reuseFailAlloc_406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_406_, 0, v___x_355_);
v___x_368_ = v_reuseFailAlloc_406_;
goto v_reusejp_367_;
}
v_reusejp_367_:
{
lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; 
v___x_369_ = lean_mk_empty_array_with_capacity(v___x_351_);
v___x_370_ = lean_array_push(v___x_369_, v___x_368_);
v___x_371_ = l_Lean_Meta_mkAppOptM(v___x_366_, v___x_370_, v_a_317_, v_a_318_, v_a_319_, v_a_320_);
if (lean_obj_tag(v___x_371_) == 0)
{
lean_object* v_a_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; 
v_a_372_ = lean_ctor_get(v___x_371_, 0);
lean_inc(v_a_372_);
lean_dec_ref_known(v___x_371_, 1);
v___x_373_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Literal_0__Vampire_Reconstruct_strippedOf___redArg___closed__3));
v___x_374_ = lean_unsigned_to_nat(2u);
v___x_375_ = lean_mk_empty_array_with_capacity(v___x_374_);
v___x_376_ = lean_array_push(v___x_375_, v_a_372_);
v___x_377_ = lean_array_push(v___x_376_, v_snd_362_);
v___x_378_ = l_Lean_Meta_mkAppM(v___x_373_, v___x_377_, v_a_317_, v_a_318_, v_a_319_, v_a_320_);
if (lean_obj_tag(v___x_378_) == 0)
{
lean_object* v_a_379_; lean_object* v___x_381_; uint8_t v_isShared_382_; uint8_t v_isSharedCheck_389_; 
v_a_379_ = lean_ctor_get(v___x_378_, 0);
v_isSharedCheck_389_ = !lean_is_exclusive(v___x_378_);
if (v_isSharedCheck_389_ == 0)
{
v___x_381_ = v___x_378_;
v_isShared_382_ = v_isSharedCheck_389_;
goto v_resetjp_380_;
}
else
{
lean_inc(v_a_379_);
lean_dec(v___x_378_);
v___x_381_ = lean_box(0);
v_isShared_382_ = v_isSharedCheck_389_;
goto v_resetjp_380_;
}
v_resetjp_380_:
{
lean_object* v___x_384_; 
if (v_isShared_365_ == 0)
{
lean_ctor_set(v___x_364_, 1, v_a_379_);
v___x_384_ = v___x_364_;
goto v_reusejp_383_;
}
else
{
lean_object* v_reuseFailAlloc_388_; 
v_reuseFailAlloc_388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_388_, 0, v_fst_361_);
lean_ctor_set(v_reuseFailAlloc_388_, 1, v_a_379_);
v___x_384_ = v_reuseFailAlloc_388_;
goto v_reusejp_383_;
}
v_reusejp_383_:
{
lean_object* v___x_386_; 
if (v_isShared_382_ == 0)
{
lean_ctor_set(v___x_381_, 0, v___x_384_);
v___x_386_ = v___x_381_;
goto v_reusejp_385_;
}
else
{
lean_object* v_reuseFailAlloc_387_; 
v_reuseFailAlloc_387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_387_, 0, v___x_384_);
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
lean_object* v_a_390_; lean_object* v___x_392_; uint8_t v_isShared_393_; uint8_t v_isSharedCheck_397_; 
lean_del_object(v___x_364_);
lean_dec(v_fst_361_);
v_a_390_ = lean_ctor_get(v___x_378_, 0);
v_isSharedCheck_397_ = !lean_is_exclusive(v___x_378_);
if (v_isSharedCheck_397_ == 0)
{
v___x_392_ = v___x_378_;
v_isShared_393_ = v_isSharedCheck_397_;
goto v_resetjp_391_;
}
else
{
lean_inc(v_a_390_);
lean_dec(v___x_378_);
v___x_392_ = lean_box(0);
v_isShared_393_ = v_isSharedCheck_397_;
goto v_resetjp_391_;
}
v_resetjp_391_:
{
lean_object* v___x_395_; 
if (v_isShared_393_ == 0)
{
v___x_395_ = v___x_392_;
goto v_reusejp_394_;
}
else
{
lean_object* v_reuseFailAlloc_396_; 
v_reuseFailAlloc_396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_396_, 0, v_a_390_);
v___x_395_ = v_reuseFailAlloc_396_;
goto v_reusejp_394_;
}
v_reusejp_394_:
{
return v___x_395_;
}
}
}
}
else
{
lean_object* v_a_398_; lean_object* v___x_400_; uint8_t v_isShared_401_; uint8_t v_isSharedCheck_405_; 
lean_del_object(v___x_364_);
lean_dec(v_snd_362_);
lean_dec(v_fst_361_);
v_a_398_ = lean_ctor_get(v___x_371_, 0);
v_isSharedCheck_405_ = !lean_is_exclusive(v___x_371_);
if (v_isSharedCheck_405_ == 0)
{
v___x_400_ = v___x_371_;
v_isShared_401_ = v_isSharedCheck_405_;
goto v_resetjp_399_;
}
else
{
lean_inc(v_a_398_);
lean_dec(v___x_371_);
v___x_400_ = lean_box(0);
v_isShared_401_ = v_isSharedCheck_405_;
goto v_resetjp_399_;
}
v_resetjp_399_:
{
lean_object* v___x_403_; 
if (v_isShared_401_ == 0)
{
v___x_403_ = v___x_400_;
goto v_reusejp_402_;
}
else
{
lean_object* v_reuseFailAlloc_404_; 
v_reuseFailAlloc_404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_404_, 0, v_a_398_);
v___x_403_ = v_reuseFailAlloc_404_;
goto v_reusejp_402_;
}
v_reusejp_402_:
{
return v___x_403_;
}
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_355_);
return v___x_356_;
}
}
}
v___jp_322_:
{
lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; 
v___x_327_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Literal_0__Vampire_Reconstruct_strippedOf___redArg___closed__1));
lean_inc_ref(v_a_316_);
v___x_328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_328_, 0, v_a_316_);
v___x_329_ = lean_unsigned_to_nat(1u);
v___x_330_ = lean_mk_empty_array_with_capacity(v___x_329_);
v___x_331_ = lean_array_push(v___x_330_, v___x_328_);
v___x_332_ = l_Lean_Meta_mkAppOptM(v___x_327_, v___x_331_, v___y_323_, v___y_324_, v___y_325_, v___y_326_);
if (lean_obj_tag(v___x_332_) == 0)
{
lean_object* v_a_333_; lean_object* v___x_335_; uint8_t v_isShared_336_; uint8_t v_isSharedCheck_341_; 
v_a_333_ = lean_ctor_get(v___x_332_, 0);
v_isSharedCheck_341_ = !lean_is_exclusive(v___x_332_);
if (v_isSharedCheck_341_ == 0)
{
v___x_335_ = v___x_332_;
v_isShared_336_ = v_isSharedCheck_341_;
goto v_resetjp_334_;
}
else
{
lean_inc(v_a_333_);
lean_dec(v___x_332_);
v___x_335_ = lean_box(0);
v_isShared_336_ = v_isSharedCheck_341_;
goto v_resetjp_334_;
}
v_resetjp_334_:
{
lean_object* v___x_337_; lean_object* v___x_339_; 
v___x_337_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_337_, 0, v_a_316_);
lean_ctor_set(v___x_337_, 1, v_a_333_);
if (v_isShared_336_ == 0)
{
lean_ctor_set(v___x_335_, 0, v___x_337_);
v___x_339_ = v___x_335_;
goto v_reusejp_338_;
}
else
{
lean_object* v_reuseFailAlloc_340_; 
v_reuseFailAlloc_340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_340_, 0, v___x_337_);
v___x_339_ = v_reuseFailAlloc_340_;
goto v_reusejp_338_;
}
v_reusejp_338_:
{
return v___x_339_;
}
}
}
else
{
lean_object* v_a_342_; lean_object* v___x_344_; uint8_t v_isShared_345_; uint8_t v_isSharedCheck_349_; 
lean_dec_ref(v_a_316_);
v_a_342_ = lean_ctor_get(v___x_332_, 0);
v_isSharedCheck_349_ = !lean_is_exclusive(v___x_332_);
if (v_isSharedCheck_349_ == 0)
{
v___x_344_ = v___x_332_;
v_isShared_345_ = v_isSharedCheck_349_;
goto v_resetjp_343_;
}
else
{
lean_inc(v_a_342_);
lean_dec(v___x_332_);
v___x_344_ = lean_box(0);
v_isShared_345_ = v_isSharedCheck_349_;
goto v_resetjp_343_;
}
v_resetjp_343_:
{
lean_object* v___x_347_; 
if (v_isShared_345_ == 0)
{
v___x_347_ = v___x_344_;
goto v_reusejp_346_;
}
else
{
lean_object* v_reuseFailAlloc_348_; 
v_reuseFailAlloc_348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_348_, 0, v_a_342_);
v___x_347_ = v_reuseFailAlloc_348_;
goto v_reusejp_346_;
}
v_reusejp_346_:
{
return v___x_347_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Literal_0__Vampire_Reconstruct_strippedOf___redArg___boxed(lean_object* v_a_409_, lean_object* v_a_410_, lean_object* v_a_411_, lean_object* v_a_412_, lean_object* v_a_413_, lean_object* v_a_414_){
_start:
{
lean_object* v_res_415_; 
v_res_415_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Literal_0__Vampire_Reconstruct_strippedOf___redArg(v_a_409_, v_a_410_, v_a_411_, v_a_412_, v_a_413_);
lean_dec(v_a_413_);
lean_dec_ref(v_a_412_);
lean_dec(v_a_411_);
lean_dec_ref(v_a_410_);
return v_res_415_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Literal_0__Vampire_Reconstruct_strippedOf(lean_object* v_a_416_, lean_object* v_a_417_, lean_object* v_a_418_, lean_object* v_a_419_, lean_object* v_a_420_, lean_object* v_a_421_, lean_object* v_a_422_){
_start:
{
lean_object* v___x_424_; 
v___x_424_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Literal_0__Vampire_Reconstruct_strippedOf___redArg(v_a_416_, v_a_419_, v_a_420_, v_a_421_, v_a_422_);
return v___x_424_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Literal_0__Vampire_Reconstruct_strippedOf___boxed(lean_object* v_a_425_, lean_object* v_a_426_, lean_object* v_a_427_, lean_object* v_a_428_, lean_object* v_a_429_, lean_object* v_a_430_, lean_object* v_a_431_, lean_object* v_a_432_){
_start:
{
lean_object* v_res_433_; 
v_res_433_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Literal_0__Vampire_Reconstruct_strippedOf(v_a_425_, v_a_426_, v_a_427_, v_a_428_, v_a_429_, v_a_430_, v_a_431_);
lean_dec(v_a_431_);
lean_dec_ref(v_a_430_);
lean_dec(v_a_429_);
lean_dec_ref(v_a_428_);
lean_dec(v_a_427_);
lean_dec_ref(v_a_426_);
return v_res_433_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_sameUpToDoubleNegation___redArg(lean_object* v_a_437_, lean_object* v_b_438_, lean_object* v_a_439_, lean_object* v_a_440_, lean_object* v_a_441_, lean_object* v_a_442_){
_start:
{
lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; 
lean_inc_ref(v_a_437_);
v___x_444_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Literal_0__Vampire_Reconstruct_stripped(v_a_437_);
lean_inc_ref(v_b_438_);
v___x_445_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Literal_0__Vampire_Reconstruct_stripped(v_b_438_);
v___x_446_ = l_Lean_Meta_isExprDefEq(v___x_444_, v___x_445_, v_a_439_, v_a_440_, v_a_441_, v_a_442_);
if (lean_obj_tag(v___x_446_) == 0)
{
lean_object* v_a_447_; lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_515_; 
v_a_447_ = lean_ctor_get(v___x_446_, 0);
v_isSharedCheck_515_ = !lean_is_exclusive(v___x_446_);
if (v_isSharedCheck_515_ == 0)
{
v___x_449_ = v___x_446_;
v_isShared_450_ = v_isSharedCheck_515_;
goto v_resetjp_448_;
}
else
{
lean_inc(v_a_447_);
lean_dec(v___x_446_);
v___x_449_ = lean_box(0);
v_isShared_450_ = v_isSharedCheck_515_;
goto v_resetjp_448_;
}
v_resetjp_448_:
{
uint8_t v___x_451_; 
v___x_451_ = lean_unbox(v_a_447_);
lean_dec(v_a_447_);
if (v___x_451_ == 0)
{
lean_object* v___x_452_; lean_object* v___x_454_; 
lean_dec_ref(v_b_438_);
lean_dec_ref(v_a_437_);
v___x_452_ = lean_box(0);
if (v_isShared_450_ == 0)
{
lean_ctor_set(v___x_449_, 0, v___x_452_);
v___x_454_ = v___x_449_;
goto v_reusejp_453_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v___x_452_);
v___x_454_ = v_reuseFailAlloc_455_;
goto v_reusejp_453_;
}
v_reusejp_453_:
{
return v___x_454_;
}
}
else
{
lean_object* v___x_456_; 
lean_del_object(v___x_449_);
v___x_456_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Literal_0__Vampire_Reconstruct_strippedOf___redArg(v_a_437_, v_a_439_, v_a_440_, v_a_441_, v_a_442_);
if (lean_obj_tag(v___x_456_) == 0)
{
lean_object* v_a_457_; lean_object* v_snd_458_; lean_object* v___x_459_; 
v_a_457_ = lean_ctor_get(v___x_456_, 0);
lean_inc(v_a_457_);
lean_dec_ref_known(v___x_456_, 1);
v_snd_458_ = lean_ctor_get(v_a_457_, 1);
lean_inc(v_snd_458_);
lean_dec(v_a_457_);
v___x_459_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Literal_0__Vampire_Reconstruct_strippedOf___redArg(v_b_438_, v_a_439_, v_a_440_, v_a_441_, v_a_442_);
if (lean_obj_tag(v___x_459_) == 0)
{
lean_object* v_a_460_; lean_object* v_snd_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; 
v_a_460_ = lean_ctor_get(v___x_459_, 0);
lean_inc(v_a_460_);
lean_dec_ref_known(v___x_459_, 1);
v_snd_461_ = lean_ctor_get(v_a_460_, 1);
lean_inc(v_snd_461_);
lean_dec(v_a_460_);
v___x_462_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_sameUpToDoubleNegation___redArg___closed__0));
v___x_463_ = lean_unsigned_to_nat(1u);
v___x_464_ = lean_mk_empty_array_with_capacity(v___x_463_);
v___x_465_ = lean_array_push(v___x_464_, v_snd_461_);
v___x_466_ = l_Lean_Meta_mkAppM(v___x_462_, v___x_465_, v_a_439_, v_a_440_, v_a_441_, v_a_442_);
if (lean_obj_tag(v___x_466_) == 0)
{
lean_object* v_a_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; 
v_a_467_ = lean_ctor_get(v___x_466_, 0);
lean_inc(v_a_467_);
lean_dec_ref_known(v___x_466_, 1);
v___x_468_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Literal_0__Vampire_Reconstruct_strippedOf___redArg___closed__3));
v___x_469_ = lean_unsigned_to_nat(2u);
v___x_470_ = lean_mk_empty_array_with_capacity(v___x_469_);
v___x_471_ = lean_array_push(v___x_470_, v_snd_458_);
v___x_472_ = lean_array_push(v___x_471_, v_a_467_);
v___x_473_ = l_Lean_Meta_mkAppM(v___x_468_, v___x_472_, v_a_439_, v_a_440_, v_a_441_, v_a_442_);
if (lean_obj_tag(v___x_473_) == 0)
{
lean_object* v_a_474_; lean_object* v___x_476_; uint8_t v_isShared_477_; uint8_t v_isSharedCheck_482_; 
v_a_474_ = lean_ctor_get(v___x_473_, 0);
v_isSharedCheck_482_ = !lean_is_exclusive(v___x_473_);
if (v_isSharedCheck_482_ == 0)
{
v___x_476_ = v___x_473_;
v_isShared_477_ = v_isSharedCheck_482_;
goto v_resetjp_475_;
}
else
{
lean_inc(v_a_474_);
lean_dec(v___x_473_);
v___x_476_ = lean_box(0);
v_isShared_477_ = v_isSharedCheck_482_;
goto v_resetjp_475_;
}
v_resetjp_475_:
{
lean_object* v___x_478_; lean_object* v___x_480_; 
v___x_478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_478_, 0, v_a_474_);
if (v_isShared_477_ == 0)
{
lean_ctor_set(v___x_476_, 0, v___x_478_);
v___x_480_ = v___x_476_;
goto v_reusejp_479_;
}
else
{
lean_object* v_reuseFailAlloc_481_; 
v_reuseFailAlloc_481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_481_, 0, v___x_478_);
v___x_480_ = v_reuseFailAlloc_481_;
goto v_reusejp_479_;
}
v_reusejp_479_:
{
return v___x_480_;
}
}
}
else
{
lean_object* v_a_483_; lean_object* v___x_485_; uint8_t v_isShared_486_; uint8_t v_isSharedCheck_490_; 
v_a_483_ = lean_ctor_get(v___x_473_, 0);
v_isSharedCheck_490_ = !lean_is_exclusive(v___x_473_);
if (v_isSharedCheck_490_ == 0)
{
v___x_485_ = v___x_473_;
v_isShared_486_ = v_isSharedCheck_490_;
goto v_resetjp_484_;
}
else
{
lean_inc(v_a_483_);
lean_dec(v___x_473_);
v___x_485_ = lean_box(0);
v_isShared_486_ = v_isSharedCheck_490_;
goto v_resetjp_484_;
}
v_resetjp_484_:
{
lean_object* v___x_488_; 
if (v_isShared_486_ == 0)
{
v___x_488_ = v___x_485_;
goto v_reusejp_487_;
}
else
{
lean_object* v_reuseFailAlloc_489_; 
v_reuseFailAlloc_489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_489_, 0, v_a_483_);
v___x_488_ = v_reuseFailAlloc_489_;
goto v_reusejp_487_;
}
v_reusejp_487_:
{
return v___x_488_;
}
}
}
}
else
{
lean_object* v_a_491_; lean_object* v___x_493_; uint8_t v_isShared_494_; uint8_t v_isSharedCheck_498_; 
lean_dec(v_snd_458_);
v_a_491_ = lean_ctor_get(v___x_466_, 0);
v_isSharedCheck_498_ = !lean_is_exclusive(v___x_466_);
if (v_isSharedCheck_498_ == 0)
{
v___x_493_ = v___x_466_;
v_isShared_494_ = v_isSharedCheck_498_;
goto v_resetjp_492_;
}
else
{
lean_inc(v_a_491_);
lean_dec(v___x_466_);
v___x_493_ = lean_box(0);
v_isShared_494_ = v_isSharedCheck_498_;
goto v_resetjp_492_;
}
v_resetjp_492_:
{
lean_object* v___x_496_; 
if (v_isShared_494_ == 0)
{
v___x_496_ = v___x_493_;
goto v_reusejp_495_;
}
else
{
lean_object* v_reuseFailAlloc_497_; 
v_reuseFailAlloc_497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_497_, 0, v_a_491_);
v___x_496_ = v_reuseFailAlloc_497_;
goto v_reusejp_495_;
}
v_reusejp_495_:
{
return v___x_496_;
}
}
}
}
else
{
lean_object* v_a_499_; lean_object* v___x_501_; uint8_t v_isShared_502_; uint8_t v_isSharedCheck_506_; 
lean_dec(v_snd_458_);
v_a_499_ = lean_ctor_get(v___x_459_, 0);
v_isSharedCheck_506_ = !lean_is_exclusive(v___x_459_);
if (v_isSharedCheck_506_ == 0)
{
v___x_501_ = v___x_459_;
v_isShared_502_ = v_isSharedCheck_506_;
goto v_resetjp_500_;
}
else
{
lean_inc(v_a_499_);
lean_dec(v___x_459_);
v___x_501_ = lean_box(0);
v_isShared_502_ = v_isSharedCheck_506_;
goto v_resetjp_500_;
}
v_resetjp_500_:
{
lean_object* v___x_504_; 
if (v_isShared_502_ == 0)
{
v___x_504_ = v___x_501_;
goto v_reusejp_503_;
}
else
{
lean_object* v_reuseFailAlloc_505_; 
v_reuseFailAlloc_505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_505_, 0, v_a_499_);
v___x_504_ = v_reuseFailAlloc_505_;
goto v_reusejp_503_;
}
v_reusejp_503_:
{
return v___x_504_;
}
}
}
}
else
{
lean_object* v_a_507_; lean_object* v___x_509_; uint8_t v_isShared_510_; uint8_t v_isSharedCheck_514_; 
lean_dec_ref(v_b_438_);
v_a_507_ = lean_ctor_get(v___x_456_, 0);
v_isSharedCheck_514_ = !lean_is_exclusive(v___x_456_);
if (v_isSharedCheck_514_ == 0)
{
v___x_509_ = v___x_456_;
v_isShared_510_ = v_isSharedCheck_514_;
goto v_resetjp_508_;
}
else
{
lean_inc(v_a_507_);
lean_dec(v___x_456_);
v___x_509_ = lean_box(0);
v_isShared_510_ = v_isSharedCheck_514_;
goto v_resetjp_508_;
}
v_resetjp_508_:
{
lean_object* v___x_512_; 
if (v_isShared_510_ == 0)
{
v___x_512_ = v___x_509_;
goto v_reusejp_511_;
}
else
{
lean_object* v_reuseFailAlloc_513_; 
v_reuseFailAlloc_513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_513_, 0, v_a_507_);
v___x_512_ = v_reuseFailAlloc_513_;
goto v_reusejp_511_;
}
v_reusejp_511_:
{
return v___x_512_;
}
}
}
}
}
}
else
{
lean_object* v_a_516_; lean_object* v___x_518_; uint8_t v_isShared_519_; uint8_t v_isSharedCheck_523_; 
lean_dec_ref(v_b_438_);
lean_dec_ref(v_a_437_);
v_a_516_ = lean_ctor_get(v___x_446_, 0);
v_isSharedCheck_523_ = !lean_is_exclusive(v___x_446_);
if (v_isSharedCheck_523_ == 0)
{
v___x_518_ = v___x_446_;
v_isShared_519_ = v_isSharedCheck_523_;
goto v_resetjp_517_;
}
else
{
lean_inc(v_a_516_);
lean_dec(v___x_446_);
v___x_518_ = lean_box(0);
v_isShared_519_ = v_isSharedCheck_523_;
goto v_resetjp_517_;
}
v_resetjp_517_:
{
lean_object* v___x_521_; 
if (v_isShared_519_ == 0)
{
v___x_521_ = v___x_518_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_522_; 
v_reuseFailAlloc_522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_522_, 0, v_a_516_);
v___x_521_ = v_reuseFailAlloc_522_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
return v___x_521_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_sameUpToDoubleNegation___redArg___boxed(lean_object* v_a_524_, lean_object* v_b_525_, lean_object* v_a_526_, lean_object* v_a_527_, lean_object* v_a_528_, lean_object* v_a_529_, lean_object* v_a_530_){
_start:
{
lean_object* v_res_531_; 
v_res_531_ = lp_vampireReplay_Vampire_Reconstruct_sameUpToDoubleNegation___redArg(v_a_524_, v_b_525_, v_a_526_, v_a_527_, v_a_528_, v_a_529_);
lean_dec(v_a_529_);
lean_dec_ref(v_a_528_);
lean_dec(v_a_527_);
lean_dec_ref(v_a_526_);
return v_res_531_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_sameUpToDoubleNegation(lean_object* v_a_532_, lean_object* v_b_533_, lean_object* v_a_534_, lean_object* v_a_535_, lean_object* v_a_536_, lean_object* v_a_537_, lean_object* v_a_538_, lean_object* v_a_539_){
_start:
{
lean_object* v___x_541_; 
v___x_541_ = lp_vampireReplay_Vampire_Reconstruct_sameUpToDoubleNegation___redArg(v_a_532_, v_b_533_, v_a_536_, v_a_537_, v_a_538_, v_a_539_);
return v___x_541_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_sameUpToDoubleNegation___boxed(lean_object* v_a_542_, lean_object* v_b_543_, lean_object* v_a_544_, lean_object* v_a_545_, lean_object* v_a_546_, lean_object* v_a_547_, lean_object* v_a_548_, lean_object* v_a_549_, lean_object* v_a_550_){
_start:
{
lean_object* v_res_551_; 
v_res_551_ = lp_vampireReplay_Vampire_Reconstruct_sameUpToDoubleNegation(v_a_542_, v_b_543_, v_a_544_, v_a_545_, v_a_546_, v_a_547_, v_a_548_, v_a_549_);
lean_dec(v_a_549_);
lean_dec_ref(v_a_548_);
lean_dec(v_a_547_);
lean_dec_ref(v_a_546_);
lean_dec(v_a_545_);
lean_dec_ref(v_a_544_);
return v_res_551_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__3(void){
_start:
{
lean_object* v___x_556_; lean_object* v___x_557_; 
v___x_556_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__2));
v___x_557_ = l_Lean_stringToMessageData(v___x_556_);
return v___x_557_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__5(void){
_start:
{
lean_object* v___x_559_; lean_object* v___x_560_; 
v___x_559_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__4));
v___x_560_ = l_Lean_stringToMessageData(v___x_559_);
return v___x_560_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__7(void){
_start:
{
lean_object* v___x_562_; lean_object* v___x_563_; 
v___x_562_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__6));
v___x_563_ = l_Lean_stringToMessageData(v___x_562_);
return v___x_563_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__9(void){
_start:
{
lean_object* v___x_565_; lean_object* v___x_566_; 
v___x_565_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__8));
v___x_566_ = l_Lean_stringToMessageData(v___x_565_);
return v___x_566_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg(lean_object* v_target_567_, lean_object* v_h_u2081_568_, lean_object* v_h_u2082_569_, lean_object* v_a_570_, lean_object* v_a_571_, lean_object* v_a_572_, lean_object* v_a_573_){
_start:
{
lean_object* v___y_576_; lean_object* v_positive_577_; lean_object* v___y_578_; lean_object* v___y_579_; lean_object* v___y_580_; lean_object* v___y_581_; lean_object* v___x_602_; 
lean_inc(v_a_573_);
lean_inc_ref(v_a_572_);
lean_inc(v_a_571_);
lean_inc_ref(v_a_570_);
lean_inc_ref(v_h_u2081_568_);
v___x_602_ = lean_infer_type(v_h_u2081_568_, v_a_570_, v_a_571_, v_a_572_, v_a_573_);
if (lean_obj_tag(v___x_602_) == 0)
{
lean_object* v_a_603_; lean_object* v___x_604_; lean_object* v_a_605_; lean_object* v_fst_607_; lean_object* v_snd_608_; lean_object* v___y_609_; lean_object* v___y_610_; lean_object* v___y_611_; lean_object* v___y_612_; lean_object* v___x_657_; 
v_a_603_ = lean_ctor_get(v___x_602_, 0);
lean_inc(v_a_603_);
lean_dec_ref_known(v___x_602_, 1);
v___x_604_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_a_603_, v_a_571_);
v_a_605_ = lean_ctor_get(v___x_604_, 0);
lean_inc(v_a_605_);
lean_dec_ref(v___x_604_);
v___x_657_ = lp_vampireReplay_Vampire_Reconstruct_asNegation(v_a_605_);
if (lean_obj_tag(v___x_657_) == 0)
{
v_fst_607_ = v_h_u2081_568_;
v_snd_608_ = v_h_u2082_569_;
v___y_609_ = v_a_570_;
v___y_610_ = v_a_571_;
v___y_611_ = v_a_572_;
v___y_612_ = v_a_573_;
goto v___jp_606_;
}
else
{
lean_dec_ref_known(v___x_657_, 1);
v_fst_607_ = v_h_u2082_569_;
v_snd_608_ = v_h_u2081_568_;
v___y_609_ = v_a_570_;
v___y_610_ = v_a_571_;
v___y_611_ = v_a_572_;
v___y_612_ = v_a_573_;
goto v___jp_606_;
}
v___jp_606_:
{
lean_object* v___x_613_; 
lean_inc(v___y_612_);
lean_inc_ref(v___y_611_);
lean_inc(v___y_610_);
lean_inc_ref(v___y_609_);
lean_inc_ref(v_fst_607_);
v___x_613_ = lean_infer_type(v_fst_607_, v___y_609_, v___y_610_, v___y_611_, v___y_612_);
if (lean_obj_tag(v___x_613_) == 0)
{
lean_object* v_a_614_; lean_object* v___x_615_; lean_object* v_a_616_; lean_object* v___x_617_; 
v_a_614_ = lean_ctor_get(v___x_613_, 0);
lean_inc(v_a_614_);
lean_dec_ref_known(v___x_613_, 1);
v___x_615_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_a_614_, v___y_610_);
v_a_616_ = lean_ctor_get(v___x_615_, 0);
lean_inc(v_a_616_);
lean_dec_ref(v___x_615_);
lean_inc(v___y_612_);
lean_inc_ref(v___y_611_);
lean_inc(v___y_610_);
lean_inc_ref(v___y_609_);
lean_inc_ref(v_snd_608_);
v___x_617_ = lean_infer_type(v_snd_608_, v___y_609_, v___y_610_, v___y_611_, v___y_612_);
if (lean_obj_tag(v___x_617_) == 0)
{
lean_object* v_a_618_; lean_object* v___x_619_; lean_object* v_a_620_; lean_object* v___x_621_; 
v_a_618_ = lean_ctor_get(v___x_617_, 0);
lean_inc(v_a_618_);
lean_dec_ref_known(v___x_617_, 1);
v___x_619_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_a_618_, v___y_610_);
v_a_620_ = lean_ctor_get(v___x_619_, 0);
lean_inc(v_a_620_);
lean_dec_ref(v___x_619_);
v___x_621_ = lp_vampireReplay_Vampire_Reconstruct_asNegation(v_a_620_);
if (lean_obj_tag(v___x_621_) == 1)
{
lean_object* v_val_622_; lean_object* v___x_623_; 
v_val_622_ = lean_ctor_get(v___x_621_, 0);
lean_inc_n(v_val_622_, 2);
lean_dec_ref_known(v___x_621_, 1);
lean_inc(v_a_616_);
v___x_623_ = l_Lean_Meta_isExprDefEq(v_val_622_, v_a_616_, v___y_609_, v___y_610_, v___y_611_, v___y_612_);
if (lean_obj_tag(v___x_623_) == 0)
{
lean_object* v_a_624_; uint8_t v___x_625_; 
v_a_624_ = lean_ctor_get(v___x_623_, 0);
lean_inc(v_a_624_);
lean_dec_ref_known(v___x_623_, 1);
v___x_625_ = lean_unbox(v_a_624_);
lean_dec(v_a_624_);
if (v___x_625_ == 0)
{
lean_object* v___x_626_; 
v___x_626_ = lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg(v_fst_607_, v___y_609_, v___y_610_, v___y_611_, v___y_612_);
if (lean_obj_tag(v___x_626_) == 0)
{
lean_object* v_a_627_; 
v_a_627_ = lean_ctor_get(v___x_626_, 0);
lean_inc(v_a_627_);
lean_dec_ref_known(v___x_626_, 1);
if (lean_obj_tag(v_a_627_) == 1)
{
lean_object* v_val_628_; 
lean_dec(v_val_622_);
lean_dec(v_a_616_);
v_val_628_ = lean_ctor_get(v_a_627_, 0);
lean_inc(v_val_628_);
lean_dec_ref_known(v_a_627_, 1);
v___y_576_ = v_snd_608_;
v_positive_577_ = v_val_628_;
v___y_578_ = v___y_609_;
v___y_579_ = v___y_610_;
v___y_580_ = v___y_611_;
v___y_581_ = v___y_612_;
goto v___jp_575_;
}
else
{
lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; 
lean_dec(v_a_627_);
lean_dec_ref(v_snd_608_);
lean_dec_ref(v_target_567_);
v___x_629_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__3, &lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__3);
v___x_630_ = l_Lean_indentExpr(v_a_616_);
v___x_631_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_631_, 0, v___x_629_);
lean_ctor_set(v___x_631_, 1, v___x_630_);
v___x_632_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__5, &lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__5_once, _init_lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__5);
v___x_633_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_633_, 0, v___x_631_);
lean_ctor_set(v___x_633_, 1, v___x_632_);
v___x_634_ = l_Lean_indentExpr(v_val_622_);
v___x_635_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_635_, 0, v___x_633_);
lean_ctor_set(v___x_635_, 1, v___x_634_);
v___x_636_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__7, &lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__7_once, _init_lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__7);
v___x_637_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_637_, 0, v___x_635_);
lean_ctor_set(v___x_637_, 1, v___x_636_);
v___x_638_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_637_, v___y_609_, v___y_610_, v___y_611_, v___y_612_);
return v___x_638_;
}
}
else
{
lean_object* v_a_639_; lean_object* v___x_641_; uint8_t v_isShared_642_; uint8_t v_isSharedCheck_646_; 
lean_dec(v_val_622_);
lean_dec(v_a_616_);
lean_dec_ref(v_snd_608_);
lean_dec_ref(v_target_567_);
v_a_639_ = lean_ctor_get(v___x_626_, 0);
v_isSharedCheck_646_ = !lean_is_exclusive(v___x_626_);
if (v_isSharedCheck_646_ == 0)
{
v___x_641_ = v___x_626_;
v_isShared_642_ = v_isSharedCheck_646_;
goto v_resetjp_640_;
}
else
{
lean_inc(v_a_639_);
lean_dec(v___x_626_);
v___x_641_ = lean_box(0);
v_isShared_642_ = v_isSharedCheck_646_;
goto v_resetjp_640_;
}
v_resetjp_640_:
{
lean_object* v___x_644_; 
if (v_isShared_642_ == 0)
{
v___x_644_ = v___x_641_;
goto v_reusejp_643_;
}
else
{
lean_object* v_reuseFailAlloc_645_; 
v_reuseFailAlloc_645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_645_, 0, v_a_639_);
v___x_644_ = v_reuseFailAlloc_645_;
goto v_reusejp_643_;
}
v_reusejp_643_:
{
return v___x_644_;
}
}
}
}
else
{
lean_dec(v_val_622_);
lean_dec(v_a_616_);
v___y_576_ = v_snd_608_;
v_positive_577_ = v_fst_607_;
v___y_578_ = v___y_609_;
v___y_579_ = v___y_610_;
v___y_580_ = v___y_611_;
v___y_581_ = v___y_612_;
goto v___jp_575_;
}
}
else
{
lean_object* v_a_647_; lean_object* v___x_649_; uint8_t v_isShared_650_; uint8_t v_isSharedCheck_654_; 
lean_dec(v_val_622_);
lean_dec(v_a_616_);
lean_dec_ref(v_snd_608_);
lean_dec_ref(v_fst_607_);
lean_dec_ref(v_target_567_);
v_a_647_ = lean_ctor_get(v___x_623_, 0);
v_isSharedCheck_654_ = !lean_is_exclusive(v___x_623_);
if (v_isSharedCheck_654_ == 0)
{
v___x_649_ = v___x_623_;
v_isShared_650_ = v_isSharedCheck_654_;
goto v_resetjp_648_;
}
else
{
lean_inc(v_a_647_);
lean_dec(v___x_623_);
v___x_649_ = lean_box(0);
v_isShared_650_ = v_isSharedCheck_654_;
goto v_resetjp_648_;
}
v_resetjp_648_:
{
lean_object* v___x_652_; 
if (v_isShared_650_ == 0)
{
v___x_652_ = v___x_649_;
goto v_reusejp_651_;
}
else
{
lean_object* v_reuseFailAlloc_653_; 
v_reuseFailAlloc_653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_653_, 0, v_a_647_);
v___x_652_ = v_reuseFailAlloc_653_;
goto v_reusejp_651_;
}
v_reusejp_651_:
{
return v___x_652_;
}
}
}
}
else
{
lean_object* v___x_655_; lean_object* v___x_656_; 
lean_dec(v___x_621_);
lean_dec(v_a_616_);
lean_dec_ref(v_snd_608_);
lean_dec_ref(v_fst_607_);
lean_dec_ref(v_target_567_);
v___x_655_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__9, &lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__9_once, _init_lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__9);
v___x_656_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_655_, v___y_609_, v___y_610_, v___y_611_, v___y_612_);
return v___x_656_;
}
}
else
{
lean_dec(v_a_616_);
lean_dec_ref(v_snd_608_);
lean_dec_ref(v_fst_607_);
lean_dec_ref(v_target_567_);
return v___x_617_;
}
}
else
{
lean_dec_ref(v_snd_608_);
lean_dec_ref(v_fst_607_);
lean_dec_ref(v_target_567_);
return v___x_613_;
}
}
}
else
{
lean_dec_ref(v_h_u2082_569_);
lean_dec_ref(v_h_u2081_568_);
lean_dec_ref(v_target_567_);
return v___x_602_;
}
v___jp_575_:
{
lean_object* v___x_582_; 
lean_inc(v___y_581_);
lean_inc_ref(v___y_580_);
lean_inc(v___y_579_);
lean_inc_ref(v___y_578_);
lean_inc_ref(v_positive_577_);
v___x_582_ = lean_infer_type(v_positive_577_, v___y_578_, v___y_579_, v___y_580_, v___y_581_);
if (lean_obj_tag(v___x_582_) == 0)
{
lean_object* v_a_583_; lean_object* v___x_585_; uint8_t v_isShared_586_; uint8_t v_isSharedCheck_601_; 
v_a_583_ = lean_ctor_get(v___x_582_, 0);
v_isSharedCheck_601_ = !lean_is_exclusive(v___x_582_);
if (v_isSharedCheck_601_ == 0)
{
v___x_585_ = v___x_582_;
v_isShared_586_ = v_isSharedCheck_601_;
goto v_resetjp_584_;
}
else
{
lean_inc(v_a_583_);
lean_dec(v___x_582_);
v___x_585_ = lean_box(0);
v_isShared_586_ = v_isSharedCheck_601_;
goto v_resetjp_584_;
}
v_resetjp_584_:
{
lean_object* v___x_587_; lean_object* v___x_589_; 
v___x_587_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__1));
if (v_isShared_586_ == 0)
{
lean_ctor_set_tag(v___x_585_, 1);
v___x_589_ = v___x_585_;
goto v_reusejp_588_;
}
else
{
lean_object* v_reuseFailAlloc_600_; 
v_reuseFailAlloc_600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_600_, 0, v_a_583_);
v___x_589_ = v_reuseFailAlloc_600_;
goto v_reusejp_588_;
}
v_reusejp_588_:
{
lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; 
v___x_590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_590_, 0, v_target_567_);
v___x_591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_591_, 0, v_positive_577_);
v___x_592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_592_, 0, v___y_576_);
v___x_593_ = lean_unsigned_to_nat(4u);
v___x_594_ = lean_mk_empty_array_with_capacity(v___x_593_);
v___x_595_ = lean_array_push(v___x_594_, v___x_589_);
v___x_596_ = lean_array_push(v___x_595_, v___x_590_);
v___x_597_ = lean_array_push(v___x_596_, v___x_591_);
v___x_598_ = lean_array_push(v___x_597_, v___x_592_);
v___x_599_ = l_Lean_Meta_mkAppOptM(v___x_587_, v___x_598_, v___y_578_, v___y_579_, v___y_580_, v___y_581_);
return v___x_599_;
}
}
}
else
{
lean_dec_ref(v_positive_577_);
lean_dec_ref(v___y_576_);
lean_dec_ref(v_target_567_);
return v___x_582_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___boxed(lean_object* v_target_658_, lean_object* v_h_u2081_659_, lean_object* v_h_u2082_660_, lean_object* v_a_661_, lean_object* v_a_662_, lean_object* v_a_663_, lean_object* v_a_664_, lean_object* v_a_665_){
_start:
{
lean_object* v_res_666_; 
v_res_666_ = lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg(v_target_658_, v_h_u2081_659_, v_h_u2082_660_, v_a_661_, v_a_662_, v_a_663_, v_a_664_);
lean_dec(v_a_664_);
lean_dec_ref(v_a_663_);
lean_dec(v_a_662_);
lean_dec_ref(v_a_661_);
return v_res_666_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_closeComplementary(lean_object* v_target_667_, lean_object* v_h_u2081_668_, lean_object* v_h_u2082_669_, lean_object* v_a_670_, lean_object* v_a_671_, lean_object* v_a_672_, lean_object* v_a_673_, lean_object* v_a_674_, lean_object* v_a_675_){
_start:
{
lean_object* v___x_677_; 
v___x_677_ = lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg(v_target_667_, v_h_u2081_668_, v_h_u2082_669_, v_a_672_, v_a_673_, v_a_674_, v_a_675_);
return v___x_677_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_closeComplementary___boxed(lean_object* v_target_678_, lean_object* v_h_u2081_679_, lean_object* v_h_u2082_680_, lean_object* v_a_681_, lean_object* v_a_682_, lean_object* v_a_683_, lean_object* v_a_684_, lean_object* v_a_685_, lean_object* v_a_686_, lean_object* v_a_687_){
_start:
{
lean_object* v_res_688_; 
v_res_688_ = lp_vampireReplay_Vampire_Reconstruct_closeComplementary(v_target_678_, v_h_u2081_679_, v_h_u2082_680_, v_a_681_, v_a_682_, v_a_683_, v_a_684_, v_a_685_, v_a_686_);
lean_dec(v_a_686_);
lean_dec_ref(v_a_685_);
lean_dec(v_a_684_);
lean_dec_ref(v_a_683_);
lean_dec(v_a_682_);
lean_dec_ref(v_a_681_);
return v_res_688_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__0___redArg(lean_object* v_a_695_, lean_object* v_target_696_, lean_object* v_candidate_697_, lean_object* v_as_698_, size_t v_sz_699_, size_t v_i_700_, lean_object* v_b_701_, lean_object* v___y_702_, lean_object* v___y_703_, lean_object* v___y_704_, lean_object* v___y_705_){
_start:
{
uint8_t v___x_707_; 
v___x_707_ = lean_usize_dec_lt(v_i_700_, v_sz_699_);
if (v___x_707_ == 0)
{
lean_object* v___x_708_; 
lean_dec_ref(v_candidate_697_);
lean_dec_ref(v_a_695_);
v___x_708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_708_, 0, v_b_701_);
return v___x_708_;
}
else
{
lean_object* v_a_709_; lean_object* v_fst_710_; lean_object* v_snd_711_; lean_object* v___x_713_; uint8_t v_isShared_714_; uint8_t v_isSharedCheck_754_; 
lean_dec_ref(v_b_701_);
v_a_709_ = lean_array_uget(v_as_698_, v_i_700_);
v_fst_710_ = lean_ctor_get(v_a_709_, 0);
v_snd_711_ = lean_ctor_get(v_a_709_, 1);
v_isSharedCheck_754_ = !lean_is_exclusive(v_a_709_);
if (v_isSharedCheck_754_ == 0)
{
v___x_713_ = v_a_709_;
v_isShared_714_ = v_isSharedCheck_754_;
goto v_resetjp_712_;
}
else
{
lean_inc(v_snd_711_);
lean_inc(v_fst_710_);
lean_dec(v_a_709_);
v___x_713_ = lean_box(0);
v_isShared_714_ = v_isSharedCheck_754_;
goto v_resetjp_712_;
}
v_resetjp_712_:
{
lean_object* v___x_715_; 
lean_inc_ref(v_a_695_);
v___x_715_ = l_Lean_Meta_isExprDefEq(v_fst_710_, v_a_695_, v___y_702_, v___y_703_, v___y_704_, v___y_705_);
if (lean_obj_tag(v___x_715_) == 0)
{
lean_object* v_a_716_; lean_object* v___x_717_; uint8_t v___x_718_; 
v_a_716_ = lean_ctor_get(v___x_715_, 0);
lean_inc(v_a_716_);
lean_dec_ref_known(v___x_715_, 1);
v___x_717_ = lean_box(0);
v___x_718_ = lean_unbox(v_a_716_);
lean_dec(v_a_716_);
if (v___x_718_ == 0)
{
lean_object* v___x_719_; size_t v___x_720_; size_t v___x_721_; 
lean_del_object(v___x_713_);
lean_dec(v_snd_711_);
v___x_719_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__0___redArg___closed__0));
v___x_720_ = ((size_t)1ULL);
v___x_721_ = lean_usize_add(v_i_700_, v___x_720_);
v_i_700_ = v___x_721_;
v_b_701_ = v___x_719_;
goto _start;
}
else
{
lean_object* v___x_723_; lean_object* v___x_724_; 
lean_dec_ref(v_a_695_);
v___x_723_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__0___redArg___closed__2));
v___x_724_ = lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg(v___x_723_, v_target_696_, v_snd_711_, v_candidate_697_);
lean_dec(v_snd_711_);
if (lean_obj_tag(v___x_724_) == 0)
{
lean_object* v_a_725_; lean_object* v___x_727_; uint8_t v_isShared_728_; uint8_t v_isSharedCheck_737_; 
v_a_725_ = lean_ctor_get(v___x_724_, 0);
v_isSharedCheck_737_ = !lean_is_exclusive(v___x_724_);
if (v_isSharedCheck_737_ == 0)
{
v___x_727_ = v___x_724_;
v_isShared_728_ = v_isSharedCheck_737_;
goto v_resetjp_726_;
}
else
{
lean_inc(v_a_725_);
lean_dec(v___x_724_);
v___x_727_ = lean_box(0);
v_isShared_728_ = v_isSharedCheck_737_;
goto v_resetjp_726_;
}
v_resetjp_726_:
{
lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_732_; 
v___x_729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_729_, 0, v_a_725_);
v___x_730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_730_, 0, v___x_729_);
if (v_isShared_714_ == 0)
{
lean_ctor_set(v___x_713_, 1, v___x_717_);
lean_ctor_set(v___x_713_, 0, v___x_730_);
v___x_732_ = v___x_713_;
goto v_reusejp_731_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v___x_730_);
lean_ctor_set(v_reuseFailAlloc_736_, 1, v___x_717_);
v___x_732_ = v_reuseFailAlloc_736_;
goto v_reusejp_731_;
}
v_reusejp_731_:
{
lean_object* v___x_734_; 
if (v_isShared_728_ == 0)
{
lean_ctor_set(v___x_727_, 0, v___x_732_);
v___x_734_ = v___x_727_;
goto v_reusejp_733_;
}
else
{
lean_object* v_reuseFailAlloc_735_; 
v_reuseFailAlloc_735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_735_, 0, v___x_732_);
v___x_734_ = v_reuseFailAlloc_735_;
goto v_reusejp_733_;
}
v_reusejp_733_:
{
return v___x_734_;
}
}
}
}
else
{
lean_object* v_a_738_; lean_object* v___x_740_; uint8_t v_isShared_741_; uint8_t v_isSharedCheck_745_; 
lean_del_object(v___x_713_);
v_a_738_ = lean_ctor_get(v___x_724_, 0);
v_isSharedCheck_745_ = !lean_is_exclusive(v___x_724_);
if (v_isSharedCheck_745_ == 0)
{
v___x_740_ = v___x_724_;
v_isShared_741_ = v_isSharedCheck_745_;
goto v_resetjp_739_;
}
else
{
lean_inc(v_a_738_);
lean_dec(v___x_724_);
v___x_740_ = lean_box(0);
v_isShared_741_ = v_isSharedCheck_745_;
goto v_resetjp_739_;
}
v_resetjp_739_:
{
lean_object* v___x_743_; 
if (v_isShared_741_ == 0)
{
v___x_743_ = v___x_740_;
goto v_reusejp_742_;
}
else
{
lean_object* v_reuseFailAlloc_744_; 
v_reuseFailAlloc_744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_744_, 0, v_a_738_);
v___x_743_ = v_reuseFailAlloc_744_;
goto v_reusejp_742_;
}
v_reusejp_742_:
{
return v___x_743_;
}
}
}
}
}
else
{
lean_object* v_a_746_; lean_object* v___x_748_; uint8_t v_isShared_749_; uint8_t v_isSharedCheck_753_; 
lean_del_object(v___x_713_);
lean_dec(v_snd_711_);
lean_dec_ref(v_candidate_697_);
lean_dec_ref(v_a_695_);
v_a_746_ = lean_ctor_get(v___x_715_, 0);
v_isSharedCheck_753_ = !lean_is_exclusive(v___x_715_);
if (v_isSharedCheck_753_ == 0)
{
v___x_748_ = v___x_715_;
v_isShared_749_ = v_isSharedCheck_753_;
goto v_resetjp_747_;
}
else
{
lean_inc(v_a_746_);
lean_dec(v___x_715_);
v___x_748_ = lean_box(0);
v_isShared_749_ = v_isSharedCheck_753_;
goto v_resetjp_747_;
}
v_resetjp_747_:
{
lean_object* v___x_751_; 
if (v_isShared_749_ == 0)
{
v___x_751_ = v___x_748_;
goto v_reusejp_750_;
}
else
{
lean_object* v_reuseFailAlloc_752_; 
v_reuseFailAlloc_752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_752_, 0, v_a_746_);
v___x_751_ = v_reuseFailAlloc_752_;
goto v_reusejp_750_;
}
v_reusejp_750_:
{
return v___x_751_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__0___redArg___boxed(lean_object* v_a_755_, lean_object* v_target_756_, lean_object* v_candidate_757_, lean_object* v_as_758_, lean_object* v_sz_759_, lean_object* v_i_760_, lean_object* v_b_761_, lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_){
_start:
{
size_t v_sz_boxed_767_; size_t v_i_boxed_768_; lean_object* v_res_769_; 
v_sz_boxed_767_ = lean_unbox_usize(v_sz_759_);
lean_dec(v_sz_759_);
v_i_boxed_768_ = lean_unbox_usize(v_i_760_);
lean_dec(v_i_760_);
v_res_769_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__0___redArg(v_a_755_, v_target_756_, v_candidate_757_, v_as_758_, v_sz_boxed_767_, v_i_boxed_768_, v_b_761_, v___y_762_, v___y_763_, v___y_764_, v___y_765_);
lean_dec(v___y_765_);
lean_dec_ref(v___y_764_);
lean_dec(v___y_763_);
lean_dec_ref(v___y_762_);
lean_dec_ref(v_as_758_);
lean_dec_ref(v_target_756_);
return v_res_769_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_placeLiteral___lam__0(lean_object* v_parts_770_, lean_object* v___x_771_, lean_object* v_target_772_, lean_object* v_candidate_773_, lean_object* v___y_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_){
_start:
{
lean_object* v___x_781_; 
lean_inc(v___y_779_);
lean_inc_ref(v___y_778_);
lean_inc(v___y_777_);
lean_inc_ref(v___y_776_);
lean_inc_ref(v_candidate_773_);
v___x_781_ = lean_infer_type(v_candidate_773_, v___y_776_, v___y_777_, v___y_778_, v___y_779_);
if (lean_obj_tag(v___x_781_) == 0)
{
lean_object* v_a_782_; lean_object* v___x_783_; lean_object* v_a_784_; lean_object* v___x_785_; lean_object* v___x_786_; 
v_a_782_ = lean_ctor_get(v___x_781_, 0);
lean_inc(v_a_782_);
lean_dec_ref_known(v___x_781_, 1);
v___x_783_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_a_782_, v___y_777_);
v_a_784_ = lean_ctor_get(v___x_783_, 0);
lean_inc(v_a_784_);
lean_dec_ref(v___x_783_);
v___x_785_ = lean_unsigned_to_nat(0u);
v___x_786_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_Meta_Tactic_FunInd_0__Lean_Tactic_FunInd_unpackMutualInduction_doRealize_spec__0(v_a_784_, v_parts_770_, v___x_785_);
if (lean_obj_tag(v___x_786_) == 1)
{
lean_object* v_val_787_; lean_object* v___x_789_; uint8_t v_isShared_790_; uint8_t v_isSharedCheck_811_; 
lean_dec(v_a_784_);
lean_dec_ref(v_parts_770_);
v_val_787_ = lean_ctor_get(v___x_786_, 0);
v_isSharedCheck_811_ = !lean_is_exclusive(v___x_786_);
if (v_isSharedCheck_811_ == 0)
{
v___x_789_ = v___x_786_;
v_isShared_790_ = v_isSharedCheck_811_;
goto v_resetjp_788_;
}
else
{
lean_inc(v_val_787_);
lean_dec(v___x_786_);
v___x_789_ = lean_box(0);
v_isShared_790_ = v_isSharedCheck_811_;
goto v_resetjp_788_;
}
v_resetjp_788_:
{
lean_object* v___x_791_; 
v___x_791_ = lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg(v___x_771_, v_target_772_, v_val_787_, v_candidate_773_);
lean_dec(v_val_787_);
if (lean_obj_tag(v___x_791_) == 0)
{
lean_object* v_a_792_; lean_object* v___x_794_; uint8_t v_isShared_795_; uint8_t v_isSharedCheck_802_; 
v_a_792_ = lean_ctor_get(v___x_791_, 0);
v_isSharedCheck_802_ = !lean_is_exclusive(v___x_791_);
if (v_isSharedCheck_802_ == 0)
{
v___x_794_ = v___x_791_;
v_isShared_795_ = v_isSharedCheck_802_;
goto v_resetjp_793_;
}
else
{
lean_inc(v_a_792_);
lean_dec(v___x_791_);
v___x_794_ = lean_box(0);
v_isShared_795_ = v_isSharedCheck_802_;
goto v_resetjp_793_;
}
v_resetjp_793_:
{
lean_object* v___x_797_; 
if (v_isShared_790_ == 0)
{
lean_ctor_set(v___x_789_, 0, v_a_792_);
v___x_797_ = v___x_789_;
goto v_reusejp_796_;
}
else
{
lean_object* v_reuseFailAlloc_801_; 
v_reuseFailAlloc_801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_801_, 0, v_a_792_);
v___x_797_ = v_reuseFailAlloc_801_;
goto v_reusejp_796_;
}
v_reusejp_796_:
{
lean_object* v___x_799_; 
if (v_isShared_795_ == 0)
{
lean_ctor_set(v___x_794_, 0, v___x_797_);
v___x_799_ = v___x_794_;
goto v_reusejp_798_;
}
else
{
lean_object* v_reuseFailAlloc_800_; 
v_reuseFailAlloc_800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_800_, 0, v___x_797_);
v___x_799_ = v_reuseFailAlloc_800_;
goto v_reusejp_798_;
}
v_reusejp_798_:
{
return v___x_799_;
}
}
}
}
else
{
lean_object* v_a_803_; lean_object* v___x_805_; uint8_t v_isShared_806_; uint8_t v_isSharedCheck_810_; 
lean_del_object(v___x_789_);
v_a_803_ = lean_ctor_get(v___x_791_, 0);
v_isSharedCheck_810_ = !lean_is_exclusive(v___x_791_);
if (v_isSharedCheck_810_ == 0)
{
v___x_805_ = v___x_791_;
v_isShared_806_ = v_isSharedCheck_810_;
goto v_resetjp_804_;
}
else
{
lean_inc(v_a_803_);
lean_dec(v___x_791_);
v___x_805_ = lean_box(0);
v_isShared_806_ = v_isSharedCheck_810_;
goto v_resetjp_804_;
}
v_resetjp_804_:
{
lean_object* v___x_808_; 
if (v_isShared_806_ == 0)
{
v___x_808_ = v___x_805_;
goto v_reusejp_807_;
}
else
{
lean_object* v_reuseFailAlloc_809_; 
v_reuseFailAlloc_809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_809_, 0, v_a_803_);
v___x_808_ = v_reuseFailAlloc_809_;
goto v_reusejp_807_;
}
v_reusejp_807_:
{
return v___x_808_;
}
}
}
}
}
else
{
lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; size_t v_sz_815_; size_t v___x_816_; lean_object* v___x_817_; 
lean_dec(v___x_786_);
v___x_812_ = l_Array_zipIdx___redArg(v_parts_770_, v___x_785_);
v___x_813_ = lean_box(0);
v___x_814_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__0___redArg___closed__0));
v_sz_815_ = lean_array_size(v___x_812_);
v___x_816_ = ((size_t)0ULL);
v___x_817_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__0___redArg(v_a_784_, v_target_772_, v_candidate_773_, v___x_812_, v_sz_815_, v___x_816_, v___x_814_, v___y_776_, v___y_777_, v___y_778_, v___y_779_);
lean_dec_ref(v___x_812_);
if (lean_obj_tag(v___x_817_) == 0)
{
lean_object* v_a_818_; lean_object* v___x_820_; uint8_t v_isShared_821_; uint8_t v_isSharedCheck_830_; 
v_a_818_ = lean_ctor_get(v___x_817_, 0);
v_isSharedCheck_830_ = !lean_is_exclusive(v___x_817_);
if (v_isSharedCheck_830_ == 0)
{
v___x_820_ = v___x_817_;
v_isShared_821_ = v_isSharedCheck_830_;
goto v_resetjp_819_;
}
else
{
lean_inc(v_a_818_);
lean_dec(v___x_817_);
v___x_820_ = lean_box(0);
v_isShared_821_ = v_isSharedCheck_830_;
goto v_resetjp_819_;
}
v_resetjp_819_:
{
lean_object* v_fst_822_; 
v_fst_822_ = lean_ctor_get(v_a_818_, 0);
lean_inc(v_fst_822_);
lean_dec(v_a_818_);
if (lean_obj_tag(v_fst_822_) == 0)
{
lean_object* v___x_824_; 
if (v_isShared_821_ == 0)
{
lean_ctor_set(v___x_820_, 0, v___x_813_);
v___x_824_ = v___x_820_;
goto v_reusejp_823_;
}
else
{
lean_object* v_reuseFailAlloc_825_; 
v_reuseFailAlloc_825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_825_, 0, v___x_813_);
v___x_824_ = v_reuseFailAlloc_825_;
goto v_reusejp_823_;
}
v_reusejp_823_:
{
return v___x_824_;
}
}
else
{
lean_object* v_val_826_; lean_object* v___x_828_; 
v_val_826_ = lean_ctor_get(v_fst_822_, 0);
lean_inc(v_val_826_);
lean_dec_ref_known(v_fst_822_, 1);
if (v_isShared_821_ == 0)
{
lean_ctor_set(v___x_820_, 0, v_val_826_);
v___x_828_ = v___x_820_;
goto v_reusejp_827_;
}
else
{
lean_object* v_reuseFailAlloc_829_; 
v_reuseFailAlloc_829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_829_, 0, v_val_826_);
v___x_828_ = v_reuseFailAlloc_829_;
goto v_reusejp_827_;
}
v_reusejp_827_:
{
return v___x_828_;
}
}
}
}
else
{
lean_object* v_a_831_; lean_object* v___x_833_; uint8_t v_isShared_834_; uint8_t v_isSharedCheck_838_; 
v_a_831_ = lean_ctor_get(v___x_817_, 0);
v_isSharedCheck_838_ = !lean_is_exclusive(v___x_817_);
if (v_isSharedCheck_838_ == 0)
{
v___x_833_ = v___x_817_;
v_isShared_834_ = v_isSharedCheck_838_;
goto v_resetjp_832_;
}
else
{
lean_inc(v_a_831_);
lean_dec(v___x_817_);
v___x_833_ = lean_box(0);
v_isShared_834_ = v_isSharedCheck_838_;
goto v_resetjp_832_;
}
v_resetjp_832_:
{
lean_object* v___x_836_; 
if (v_isShared_834_ == 0)
{
v___x_836_ = v___x_833_;
goto v_reusejp_835_;
}
else
{
lean_object* v_reuseFailAlloc_837_; 
v_reuseFailAlloc_837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_837_, 0, v_a_831_);
v___x_836_ = v_reuseFailAlloc_837_;
goto v_reusejp_835_;
}
v_reusejp_835_:
{
return v___x_836_;
}
}
}
}
}
else
{
lean_object* v_a_839_; lean_object* v___x_841_; uint8_t v_isShared_842_; uint8_t v_isSharedCheck_846_; 
lean_dec_ref(v_candidate_773_);
lean_dec_ref(v_parts_770_);
v_a_839_ = lean_ctor_get(v___x_781_, 0);
v_isSharedCheck_846_ = !lean_is_exclusive(v___x_781_);
if (v_isSharedCheck_846_ == 0)
{
v___x_841_ = v___x_781_;
v_isShared_842_ = v_isSharedCheck_846_;
goto v_resetjp_840_;
}
else
{
lean_inc(v_a_839_);
lean_dec(v___x_781_);
v___x_841_ = lean_box(0);
v_isShared_842_ = v_isSharedCheck_846_;
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
lean_object* v_reuseFailAlloc_845_; 
v_reuseFailAlloc_845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_845_, 0, v_a_839_);
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
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_placeLiteral___lam__0___boxed(lean_object* v_parts_847_, lean_object* v___x_848_, lean_object* v_target_849_, lean_object* v_candidate_850_, lean_object* v___y_851_, lean_object* v___y_852_, lean_object* v___y_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_, lean_object* v___y_857_){
_start:
{
lean_object* v_res_858_; 
v_res_858_ = lp_vampireReplay_Vampire_Reconstruct_placeLiteral___lam__0(v_parts_847_, v___x_848_, v_target_849_, v_candidate_850_, v___y_851_, v___y_852_, v___y_853_, v___y_854_, v___y_855_, v___y_856_);
lean_dec(v___y_856_);
lean_dec_ref(v___y_855_);
lean_dec(v___y_854_);
lean_dec_ref(v___y_853_);
lean_dec(v___y_852_);
lean_dec_ref(v___y_851_);
lean_dec_ref(v_target_849_);
lean_dec(v___x_848_);
return v_res_858_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__1_spec__1(lean_object* v_parts_862_, lean_object* v_target_863_, lean_object* v_as_864_, size_t v_sz_865_, size_t v_i_866_, lean_object* v_b_867_, lean_object* v___y_868_, lean_object* v___y_869_, lean_object* v___y_870_, lean_object* v___y_871_, lean_object* v___y_872_, lean_object* v___y_873_){
_start:
{
lean_object* v_a_876_; uint8_t v___x_880_; 
v___x_880_ = lean_usize_dec_lt(v_i_866_, v_sz_865_);
if (v___x_880_ == 0)
{
lean_object* v___x_881_; 
lean_dec_ref(v_parts_862_);
v___x_881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_881_, 0, v_b_867_);
return v___x_881_;
}
else
{
lean_object* v_a_882_; lean_object* v___x_883_; 
lean_dec_ref(v_b_867_);
v_a_882_ = lean_array_uget_borrowed(v_as_864_, v_i_866_);
lean_inc(v___y_873_);
lean_inc_ref(v___y_872_);
lean_inc(v___y_871_);
lean_inc_ref(v___y_870_);
lean_inc(v_a_882_);
v___x_883_ = lean_infer_type(v_a_882_, v___y_870_, v___y_871_, v___y_872_, v___y_873_);
if (lean_obj_tag(v___x_883_) == 0)
{
lean_object* v_a_884_; lean_object* v___x_885_; 
v_a_884_ = lean_ctor_get(v___x_883_, 0);
lean_inc(v_a_884_);
lean_dec_ref_known(v___x_883_, 1);
v___x_885_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_a_884_, v___y_871_);
if (lean_obj_tag(v___x_885_) == 0)
{
lean_object* v_a_886_; lean_object* v___x_888_; uint8_t v_isShared_889_; uint8_t v_isSharedCheck_934_; 
v_a_886_ = lean_ctor_get(v___x_885_, 0);
v_isSharedCheck_934_ = !lean_is_exclusive(v___x_885_);
if (v_isSharedCheck_934_ == 0)
{
v___x_888_ = v___x_885_;
v_isShared_889_ = v_isSharedCheck_934_;
goto v_resetjp_887_;
}
else
{
lean_inc(v_a_886_);
lean_dec(v___x_885_);
v___x_888_ = lean_box(0);
v_isShared_889_ = v_isSharedCheck_934_;
goto v_resetjp_887_;
}
v_resetjp_887_:
{
lean_object* v___x_890_; lean_object* v_a_892_; lean_object* v___x_897_; lean_object* v___x_898_; 
v___x_890_ = lean_box(0);
v___x_897_ = lean_unsigned_to_nat(0u);
v___x_898_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_Meta_Tactic_FunInd_0__Lean_Tactic_FunInd_unpackMutualInduction_doRealize_spec__0(v_a_886_, v_parts_862_, v___x_897_);
if (lean_obj_tag(v___x_898_) == 1)
{
lean_object* v_val_899_; lean_object* v___x_901_; uint8_t v_isShared_902_; uint8_t v_isSharedCheck_917_; 
lean_dec(v_a_886_);
lean_dec_ref(v_parts_862_);
v_val_899_ = lean_ctor_get(v___x_898_, 0);
v_isSharedCheck_917_ = !lean_is_exclusive(v___x_898_);
if (v_isSharedCheck_917_ == 0)
{
v___x_901_ = v___x_898_;
v_isShared_902_ = v_isSharedCheck_917_;
goto v_resetjp_900_;
}
else
{
lean_inc(v_val_899_);
lean_dec(v___x_898_);
v___x_901_ = lean_box(0);
v_isShared_902_ = v_isSharedCheck_917_;
goto v_resetjp_900_;
}
v_resetjp_900_:
{
lean_object* v___x_903_; lean_object* v___x_904_; 
v___x_903_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__0___redArg___closed__2));
lean_inc(v_a_882_);
v___x_904_ = lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg(v___x_903_, v_target_863_, v_val_899_, v_a_882_);
lean_dec(v_val_899_);
if (lean_obj_tag(v___x_904_) == 0)
{
lean_object* v_a_905_; lean_object* v___x_907_; 
v_a_905_ = lean_ctor_get(v___x_904_, 0);
lean_inc(v_a_905_);
lean_dec_ref_known(v___x_904_, 1);
if (v_isShared_902_ == 0)
{
lean_ctor_set(v___x_901_, 0, v_a_905_);
v___x_907_ = v___x_901_;
goto v_reusejp_906_;
}
else
{
lean_object* v_reuseFailAlloc_908_; 
v_reuseFailAlloc_908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_908_, 0, v_a_905_);
v___x_907_ = v_reuseFailAlloc_908_;
goto v_reusejp_906_;
}
v_reusejp_906_:
{
v_a_892_ = v___x_907_;
goto v___jp_891_;
}
}
else
{
lean_object* v_a_909_; lean_object* v___x_911_; uint8_t v_isShared_912_; uint8_t v_isSharedCheck_916_; 
lean_del_object(v___x_901_);
lean_del_object(v___x_888_);
v_a_909_ = lean_ctor_get(v___x_904_, 0);
v_isSharedCheck_916_ = !lean_is_exclusive(v___x_904_);
if (v_isSharedCheck_916_ == 0)
{
v___x_911_ = v___x_904_;
v_isShared_912_ = v_isSharedCheck_916_;
goto v_resetjp_910_;
}
else
{
lean_inc(v_a_909_);
lean_dec(v___x_904_);
v___x_911_ = lean_box(0);
v_isShared_912_ = v_isSharedCheck_916_;
goto v_resetjp_910_;
}
v_resetjp_910_:
{
lean_object* v___x_914_; 
if (v_isShared_912_ == 0)
{
v___x_914_ = v___x_911_;
goto v_reusejp_913_;
}
else
{
lean_object* v_reuseFailAlloc_915_; 
v_reuseFailAlloc_915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_915_, 0, v_a_909_);
v___x_914_ = v_reuseFailAlloc_915_;
goto v_reusejp_913_;
}
v_reusejp_913_:
{
return v___x_914_;
}
}
}
}
}
else
{
lean_object* v___x_918_; lean_object* v___x_919_; size_t v_sz_920_; size_t v___x_921_; lean_object* v___x_922_; 
lean_dec(v___x_898_);
v___x_918_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__1_spec__1___closed__0));
lean_inc_ref(v_parts_862_);
v___x_919_ = l_Array_zipIdx___redArg(v_parts_862_, v___x_897_);
v_sz_920_ = lean_array_size(v___x_919_);
v___x_921_ = ((size_t)0ULL);
lean_inc(v_a_882_);
v___x_922_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__0___redArg(v_a_886_, v_target_863_, v_a_882_, v___x_919_, v_sz_920_, v___x_921_, v___x_918_, v___y_870_, v___y_871_, v___y_872_, v___y_873_);
lean_dec_ref(v___x_919_);
if (lean_obj_tag(v___x_922_) == 0)
{
lean_object* v_a_923_; lean_object* v_fst_924_; 
v_a_923_ = lean_ctor_get(v___x_922_, 0);
lean_inc(v_a_923_);
lean_dec_ref_known(v___x_922_, 1);
v_fst_924_ = lean_ctor_get(v_a_923_, 0);
lean_inc(v_fst_924_);
lean_dec(v_a_923_);
if (lean_obj_tag(v_fst_924_) == 0)
{
lean_del_object(v___x_888_);
v_a_876_ = v___x_918_;
goto v___jp_875_;
}
else
{
lean_object* v_val_925_; 
v_val_925_ = lean_ctor_get(v_fst_924_, 0);
lean_inc(v_val_925_);
lean_dec_ref_known(v_fst_924_, 1);
if (lean_obj_tag(v_val_925_) == 1)
{
lean_dec_ref(v_parts_862_);
v_a_892_ = v_val_925_;
goto v___jp_891_;
}
else
{
lean_dec(v_val_925_);
lean_del_object(v___x_888_);
v_a_876_ = v___x_918_;
goto v___jp_875_;
}
}
}
else
{
lean_object* v_a_926_; lean_object* v___x_928_; uint8_t v_isShared_929_; uint8_t v_isSharedCheck_933_; 
lean_del_object(v___x_888_);
lean_dec_ref(v_parts_862_);
v_a_926_ = lean_ctor_get(v___x_922_, 0);
v_isSharedCheck_933_ = !lean_is_exclusive(v___x_922_);
if (v_isSharedCheck_933_ == 0)
{
v___x_928_ = v___x_922_;
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
else
{
lean_inc(v_a_926_);
lean_dec(v___x_922_);
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
v___jp_891_:
{
lean_object* v___x_893_; lean_object* v___x_895_; 
v___x_893_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_893_, 0, v_a_892_);
lean_ctor_set(v___x_893_, 1, v___x_890_);
if (v_isShared_889_ == 0)
{
lean_ctor_set(v___x_888_, 0, v___x_893_);
v___x_895_ = v___x_888_;
goto v_reusejp_894_;
}
else
{
lean_object* v_reuseFailAlloc_896_; 
v_reuseFailAlloc_896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_896_, 0, v___x_893_);
v___x_895_ = v_reuseFailAlloc_896_;
goto v_reusejp_894_;
}
v_reusejp_894_:
{
return v___x_895_;
}
}
}
}
else
{
lean_object* v_a_935_; lean_object* v___x_937_; uint8_t v_isShared_938_; uint8_t v_isSharedCheck_942_; 
lean_dec_ref(v_parts_862_);
v_a_935_ = lean_ctor_get(v___x_885_, 0);
v_isSharedCheck_942_ = !lean_is_exclusive(v___x_885_);
if (v_isSharedCheck_942_ == 0)
{
v___x_937_ = v___x_885_;
v_isShared_938_ = v_isSharedCheck_942_;
goto v_resetjp_936_;
}
else
{
lean_inc(v_a_935_);
lean_dec(v___x_885_);
v___x_937_ = lean_box(0);
v_isShared_938_ = v_isSharedCheck_942_;
goto v_resetjp_936_;
}
v_resetjp_936_:
{
lean_object* v___x_940_; 
if (v_isShared_938_ == 0)
{
v___x_940_ = v___x_937_;
goto v_reusejp_939_;
}
else
{
lean_object* v_reuseFailAlloc_941_; 
v_reuseFailAlloc_941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_941_, 0, v_a_935_);
v___x_940_ = v_reuseFailAlloc_941_;
goto v_reusejp_939_;
}
v_reusejp_939_:
{
return v___x_940_;
}
}
}
}
else
{
lean_object* v_a_943_; lean_object* v___x_945_; uint8_t v_isShared_946_; uint8_t v_isSharedCheck_950_; 
lean_dec_ref(v_parts_862_);
v_a_943_ = lean_ctor_get(v___x_883_, 0);
v_isSharedCheck_950_ = !lean_is_exclusive(v___x_883_);
if (v_isSharedCheck_950_ == 0)
{
v___x_945_ = v___x_883_;
v_isShared_946_ = v_isSharedCheck_950_;
goto v_resetjp_944_;
}
else
{
lean_inc(v_a_943_);
lean_dec(v___x_883_);
v___x_945_ = lean_box(0);
v_isShared_946_ = v_isSharedCheck_950_;
goto v_resetjp_944_;
}
v_resetjp_944_:
{
lean_object* v___x_948_; 
if (v_isShared_946_ == 0)
{
v___x_948_ = v___x_945_;
goto v_reusejp_947_;
}
else
{
lean_object* v_reuseFailAlloc_949_; 
v_reuseFailAlloc_949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_949_, 0, v_a_943_);
v___x_948_ = v_reuseFailAlloc_949_;
goto v_reusejp_947_;
}
v_reusejp_947_:
{
return v___x_948_;
}
}
}
}
v___jp_875_:
{
size_t v___x_877_; size_t v___x_878_; 
v___x_877_ = ((size_t)1ULL);
v___x_878_ = lean_usize_add(v_i_866_, v___x_877_);
v_i_866_ = v___x_878_;
v_b_867_ = v_a_876_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__1_spec__1___boxed(lean_object* v_parts_951_, lean_object* v_target_952_, lean_object* v_as_953_, lean_object* v_sz_954_, lean_object* v_i_955_, lean_object* v_b_956_, lean_object* v___y_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_){
_start:
{
size_t v_sz_boxed_964_; size_t v_i_boxed_965_; lean_object* v_res_966_; 
v_sz_boxed_964_ = lean_unbox_usize(v_sz_954_);
lean_dec(v_sz_954_);
v_i_boxed_965_ = lean_unbox_usize(v_i_955_);
lean_dec(v_i_955_);
v_res_966_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__1_spec__1(v_parts_951_, v_target_952_, v_as_953_, v_sz_boxed_964_, v_i_boxed_965_, v_b_956_, v___y_957_, v___y_958_, v___y_959_, v___y_960_, v___y_961_, v___y_962_);
lean_dec(v___y_962_);
lean_dec_ref(v___y_961_);
lean_dec(v___y_960_);
lean_dec_ref(v___y_959_);
lean_dec(v___y_958_);
lean_dec_ref(v___y_957_);
lean_dec_ref(v_as_953_);
lean_dec_ref(v_target_952_);
return v_res_966_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__1(lean_object* v_parts_967_, lean_object* v_target_968_, lean_object* v_as_969_, size_t v_sz_970_, size_t v_i_971_, lean_object* v_b_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_, lean_object* v___y_977_, lean_object* v___y_978_){
_start:
{
lean_object* v_a_981_; uint8_t v___x_985_; 
v___x_985_ = lean_usize_dec_lt(v_i_971_, v_sz_970_);
if (v___x_985_ == 0)
{
lean_object* v___x_986_; 
lean_dec_ref(v_parts_967_);
v___x_986_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_986_, 0, v_b_972_);
return v___x_986_;
}
else
{
lean_object* v_a_987_; lean_object* v___x_988_; 
lean_dec_ref(v_b_972_);
v_a_987_ = lean_array_uget_borrowed(v_as_969_, v_i_971_);
lean_inc(v___y_978_);
lean_inc_ref(v___y_977_);
lean_inc(v___y_976_);
lean_inc_ref(v___y_975_);
lean_inc(v_a_987_);
v___x_988_ = lean_infer_type(v_a_987_, v___y_975_, v___y_976_, v___y_977_, v___y_978_);
if (lean_obj_tag(v___x_988_) == 0)
{
lean_object* v_a_989_; lean_object* v___x_990_; 
v_a_989_ = lean_ctor_get(v___x_988_, 0);
lean_inc(v_a_989_);
lean_dec_ref_known(v___x_988_, 1);
v___x_990_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_a_989_, v___y_976_);
if (lean_obj_tag(v___x_990_) == 0)
{
lean_object* v_a_991_; lean_object* v___x_993_; uint8_t v_isShared_994_; uint8_t v_isSharedCheck_1039_; 
v_a_991_ = lean_ctor_get(v___x_990_, 0);
v_isSharedCheck_1039_ = !lean_is_exclusive(v___x_990_);
if (v_isSharedCheck_1039_ == 0)
{
v___x_993_ = v___x_990_;
v_isShared_994_ = v_isSharedCheck_1039_;
goto v_resetjp_992_;
}
else
{
lean_inc(v_a_991_);
lean_dec(v___x_990_);
v___x_993_ = lean_box(0);
v_isShared_994_ = v_isSharedCheck_1039_;
goto v_resetjp_992_;
}
v_resetjp_992_:
{
lean_object* v___x_995_; lean_object* v_a_997_; lean_object* v___x_1002_; lean_object* v___x_1003_; 
v___x_995_ = lean_box(0);
v___x_1002_ = lean_unsigned_to_nat(0u);
v___x_1003_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_Meta_Tactic_FunInd_0__Lean_Tactic_FunInd_unpackMutualInduction_doRealize_spec__0(v_a_991_, v_parts_967_, v___x_1002_);
if (lean_obj_tag(v___x_1003_) == 1)
{
lean_object* v_val_1004_; lean_object* v___x_1006_; uint8_t v_isShared_1007_; uint8_t v_isSharedCheck_1022_; 
lean_dec(v_a_991_);
lean_dec_ref(v_parts_967_);
v_val_1004_ = lean_ctor_get(v___x_1003_, 0);
v_isSharedCheck_1022_ = !lean_is_exclusive(v___x_1003_);
if (v_isSharedCheck_1022_ == 0)
{
v___x_1006_ = v___x_1003_;
v_isShared_1007_ = v_isSharedCheck_1022_;
goto v_resetjp_1005_;
}
else
{
lean_inc(v_val_1004_);
lean_dec(v___x_1003_);
v___x_1006_ = lean_box(0);
v_isShared_1007_ = v_isSharedCheck_1022_;
goto v_resetjp_1005_;
}
v_resetjp_1005_:
{
lean_object* v___x_1008_; lean_object* v___x_1009_; 
v___x_1008_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__0___redArg___closed__2));
lean_inc(v_a_987_);
v___x_1009_ = lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg(v___x_1008_, v_target_968_, v_val_1004_, v_a_987_);
lean_dec(v_val_1004_);
if (lean_obj_tag(v___x_1009_) == 0)
{
lean_object* v_a_1010_; lean_object* v___x_1012_; 
v_a_1010_ = lean_ctor_get(v___x_1009_, 0);
lean_inc(v_a_1010_);
lean_dec_ref_known(v___x_1009_, 1);
if (v_isShared_1007_ == 0)
{
lean_ctor_set(v___x_1006_, 0, v_a_1010_);
v___x_1012_ = v___x_1006_;
goto v_reusejp_1011_;
}
else
{
lean_object* v_reuseFailAlloc_1013_; 
v_reuseFailAlloc_1013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1013_, 0, v_a_1010_);
v___x_1012_ = v_reuseFailAlloc_1013_;
goto v_reusejp_1011_;
}
v_reusejp_1011_:
{
v_a_997_ = v___x_1012_;
goto v___jp_996_;
}
}
else
{
lean_object* v_a_1014_; lean_object* v___x_1016_; uint8_t v_isShared_1017_; uint8_t v_isSharedCheck_1021_; 
lean_del_object(v___x_1006_);
lean_del_object(v___x_993_);
v_a_1014_ = lean_ctor_get(v___x_1009_, 0);
v_isSharedCheck_1021_ = !lean_is_exclusive(v___x_1009_);
if (v_isSharedCheck_1021_ == 0)
{
v___x_1016_ = v___x_1009_;
v_isShared_1017_ = v_isSharedCheck_1021_;
goto v_resetjp_1015_;
}
else
{
lean_inc(v_a_1014_);
lean_dec(v___x_1009_);
v___x_1016_ = lean_box(0);
v_isShared_1017_ = v_isSharedCheck_1021_;
goto v_resetjp_1015_;
}
v_resetjp_1015_:
{
lean_object* v___x_1019_; 
if (v_isShared_1017_ == 0)
{
v___x_1019_ = v___x_1016_;
goto v_reusejp_1018_;
}
else
{
lean_object* v_reuseFailAlloc_1020_; 
v_reuseFailAlloc_1020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1020_, 0, v_a_1014_);
v___x_1019_ = v_reuseFailAlloc_1020_;
goto v_reusejp_1018_;
}
v_reusejp_1018_:
{
return v___x_1019_;
}
}
}
}
}
else
{
lean_object* v___x_1023_; lean_object* v___x_1024_; size_t v_sz_1025_; size_t v___x_1026_; lean_object* v___x_1027_; 
lean_dec(v___x_1003_);
v___x_1023_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__1_spec__1___closed__0));
lean_inc_ref(v_parts_967_);
v___x_1024_ = l_Array_zipIdx___redArg(v_parts_967_, v___x_1002_);
v_sz_1025_ = lean_array_size(v___x_1024_);
v___x_1026_ = ((size_t)0ULL);
lean_inc(v_a_987_);
v___x_1027_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__0___redArg(v_a_991_, v_target_968_, v_a_987_, v___x_1024_, v_sz_1025_, v___x_1026_, v___x_1023_, v___y_975_, v___y_976_, v___y_977_, v___y_978_);
lean_dec_ref(v___x_1024_);
if (lean_obj_tag(v___x_1027_) == 0)
{
lean_object* v_a_1028_; lean_object* v_fst_1029_; 
v_a_1028_ = lean_ctor_get(v___x_1027_, 0);
lean_inc(v_a_1028_);
lean_dec_ref_known(v___x_1027_, 1);
v_fst_1029_ = lean_ctor_get(v_a_1028_, 0);
lean_inc(v_fst_1029_);
lean_dec(v_a_1028_);
if (lean_obj_tag(v_fst_1029_) == 0)
{
lean_del_object(v___x_993_);
v_a_981_ = v___x_1023_;
goto v___jp_980_;
}
else
{
lean_object* v_val_1030_; 
v_val_1030_ = lean_ctor_get(v_fst_1029_, 0);
lean_inc(v_val_1030_);
lean_dec_ref_known(v_fst_1029_, 1);
if (lean_obj_tag(v_val_1030_) == 1)
{
lean_dec_ref(v_parts_967_);
v_a_997_ = v_val_1030_;
goto v___jp_996_;
}
else
{
lean_dec(v_val_1030_);
lean_del_object(v___x_993_);
v_a_981_ = v___x_1023_;
goto v___jp_980_;
}
}
}
else
{
lean_object* v_a_1031_; lean_object* v___x_1033_; uint8_t v_isShared_1034_; uint8_t v_isSharedCheck_1038_; 
lean_del_object(v___x_993_);
lean_dec_ref(v_parts_967_);
v_a_1031_ = lean_ctor_get(v___x_1027_, 0);
v_isSharedCheck_1038_ = !lean_is_exclusive(v___x_1027_);
if (v_isSharedCheck_1038_ == 0)
{
v___x_1033_ = v___x_1027_;
v_isShared_1034_ = v_isSharedCheck_1038_;
goto v_resetjp_1032_;
}
else
{
lean_inc(v_a_1031_);
lean_dec(v___x_1027_);
v___x_1033_ = lean_box(0);
v_isShared_1034_ = v_isSharedCheck_1038_;
goto v_resetjp_1032_;
}
v_resetjp_1032_:
{
lean_object* v___x_1036_; 
if (v_isShared_1034_ == 0)
{
v___x_1036_ = v___x_1033_;
goto v_reusejp_1035_;
}
else
{
lean_object* v_reuseFailAlloc_1037_; 
v_reuseFailAlloc_1037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1037_, 0, v_a_1031_);
v___x_1036_ = v_reuseFailAlloc_1037_;
goto v_reusejp_1035_;
}
v_reusejp_1035_:
{
return v___x_1036_;
}
}
}
}
v___jp_996_:
{
lean_object* v___x_998_; lean_object* v___x_1000_; 
v___x_998_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_998_, 0, v_a_997_);
lean_ctor_set(v___x_998_, 1, v___x_995_);
if (v_isShared_994_ == 0)
{
lean_ctor_set(v___x_993_, 0, v___x_998_);
v___x_1000_ = v___x_993_;
goto v_reusejp_999_;
}
else
{
lean_object* v_reuseFailAlloc_1001_; 
v_reuseFailAlloc_1001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1001_, 0, v___x_998_);
v___x_1000_ = v_reuseFailAlloc_1001_;
goto v_reusejp_999_;
}
v_reusejp_999_:
{
return v___x_1000_;
}
}
}
}
else
{
lean_object* v_a_1040_; lean_object* v___x_1042_; uint8_t v_isShared_1043_; uint8_t v_isSharedCheck_1047_; 
lean_dec_ref(v_parts_967_);
v_a_1040_ = lean_ctor_get(v___x_990_, 0);
v_isSharedCheck_1047_ = !lean_is_exclusive(v___x_990_);
if (v_isSharedCheck_1047_ == 0)
{
v___x_1042_ = v___x_990_;
v_isShared_1043_ = v_isSharedCheck_1047_;
goto v_resetjp_1041_;
}
else
{
lean_inc(v_a_1040_);
lean_dec(v___x_990_);
v___x_1042_ = lean_box(0);
v_isShared_1043_ = v_isSharedCheck_1047_;
goto v_resetjp_1041_;
}
v_resetjp_1041_:
{
lean_object* v___x_1045_; 
if (v_isShared_1043_ == 0)
{
v___x_1045_ = v___x_1042_;
goto v_reusejp_1044_;
}
else
{
lean_object* v_reuseFailAlloc_1046_; 
v_reuseFailAlloc_1046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1046_, 0, v_a_1040_);
v___x_1045_ = v_reuseFailAlloc_1046_;
goto v_reusejp_1044_;
}
v_reusejp_1044_:
{
return v___x_1045_;
}
}
}
}
else
{
lean_object* v_a_1048_; lean_object* v___x_1050_; uint8_t v_isShared_1051_; uint8_t v_isSharedCheck_1055_; 
lean_dec_ref(v_parts_967_);
v_a_1048_ = lean_ctor_get(v___x_988_, 0);
v_isSharedCheck_1055_ = !lean_is_exclusive(v___x_988_);
if (v_isSharedCheck_1055_ == 0)
{
v___x_1050_ = v___x_988_;
v_isShared_1051_ = v_isSharedCheck_1055_;
goto v_resetjp_1049_;
}
else
{
lean_inc(v_a_1048_);
lean_dec(v___x_988_);
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
}
v___jp_980_:
{
size_t v___x_982_; size_t v___x_983_; lean_object* v___x_984_; 
v___x_982_ = ((size_t)1ULL);
v___x_983_ = lean_usize_add(v_i_971_, v___x_982_);
v___x_984_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__1_spec__1(v_parts_967_, v_target_968_, v_as_969_, v_sz_970_, v___x_983_, v_a_981_, v___y_973_, v___y_974_, v___y_975_, v___y_976_, v___y_977_, v___y_978_);
return v___x_984_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__1___boxed(lean_object* v_parts_1056_, lean_object* v_target_1057_, lean_object* v_as_1058_, lean_object* v_sz_1059_, lean_object* v_i_1060_, lean_object* v_b_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_){
_start:
{
size_t v_sz_boxed_1069_; size_t v_i_boxed_1070_; lean_object* v_res_1071_; 
v_sz_boxed_1069_ = lean_unbox_usize(v_sz_1059_);
lean_dec(v_sz_1059_);
v_i_boxed_1070_ = lean_unbox_usize(v_i_1060_);
lean_dec(v_i_1060_);
v_res_1071_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__1(v_parts_1056_, v_target_1057_, v_as_1058_, v_sz_boxed_1069_, v_i_boxed_1070_, v_b_1061_, v___y_1062_, v___y_1063_, v___y_1064_, v___y_1065_, v___y_1066_, v___y_1067_);
lean_dec(v___y_1067_);
lean_dec_ref(v___y_1066_);
lean_dec(v___y_1065_);
lean_dec_ref(v___y_1064_);
lean_dec(v___y_1063_);
lean_dec_ref(v___y_1062_);
lean_dec_ref(v_as_1058_);
lean_dec_ref(v_target_1057_);
return v_res_1071_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_placeLiteral___closed__1(void){
_start:
{
lean_object* v___x_1073_; lean_object* v___x_1074_; 
v___x_1073_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_placeLiteral___closed__0));
v___x_1074_ = l_Lean_stringToMessageData(v___x_1073_);
return v___x_1074_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_placeLiteral___closed__3(void){
_start:
{
lean_object* v___x_1076_; lean_object* v___x_1077_; 
v___x_1076_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_placeLiteral___closed__2));
v___x_1077_ = l_Lean_stringToMessageData(v___x_1076_);
return v___x_1077_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_placeLiteral(lean_object* v_target_1078_, lean_object* v_h_1079_, lean_object* v_a_1080_, lean_object* v_a_1081_, lean_object* v_a_1082_, lean_object* v_a_1083_, lean_object* v_a_1084_, lean_object* v_a_1085_){
_start:
{
lean_object* v___x_1087_; lean_object* v_parts_1088_; lean_object* v___y_1090_; lean_object* v___y_1091_; lean_object* v___y_1092_; lean_object* v___y_1093_; lean_object* v___y_1094_; lean_object* v___y_1095_; lean_object* v___x_1147_; 
v___x_1087_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__0___redArg___closed__2));
lean_inc_ref(v_target_1078_);
v_parts_1088_ = lp_vampireReplay_Vampire_Reconstruct_junctionParts(v___x_1087_, v_target_1078_);
lean_inc_ref(v_h_1079_);
lean_inc_ref(v_parts_1088_);
v___x_1147_ = lp_vampireReplay_Vampire_Reconstruct_placeLiteral___lam__0(v_parts_1088_, v___x_1087_, v_target_1078_, v_h_1079_, v_a_1080_, v_a_1081_, v_a_1082_, v_a_1083_, v_a_1084_, v_a_1085_);
if (lean_obj_tag(v___x_1147_) == 0)
{
lean_object* v_a_1148_; lean_object* v___x_1150_; uint8_t v_isShared_1151_; uint8_t v_isSharedCheck_1185_; 
v_a_1148_ = lean_ctor_get(v___x_1147_, 0);
v_isSharedCheck_1185_ = !lean_is_exclusive(v___x_1147_);
if (v_isSharedCheck_1185_ == 0)
{
v___x_1150_ = v___x_1147_;
v_isShared_1151_ = v_isSharedCheck_1185_;
goto v_resetjp_1149_;
}
else
{
lean_inc(v_a_1148_);
lean_dec(v___x_1147_);
v___x_1150_ = lean_box(0);
v_isShared_1151_ = v_isSharedCheck_1185_;
goto v_resetjp_1149_;
}
v_resetjp_1149_:
{
if (lean_obj_tag(v_a_1148_) == 1)
{
lean_object* v_val_1152_; lean_object* v___x_1154_; 
lean_dec_ref(v_parts_1088_);
lean_dec_ref(v_h_1079_);
lean_dec_ref(v_target_1078_);
v_val_1152_ = lean_ctor_get(v_a_1148_, 0);
lean_inc(v_val_1152_);
lean_dec_ref_known(v_a_1148_, 1);
if (v_isShared_1151_ == 0)
{
lean_ctor_set(v___x_1150_, 0, v_val_1152_);
v___x_1154_ = v___x_1150_;
goto v_reusejp_1153_;
}
else
{
lean_object* v_reuseFailAlloc_1155_; 
v_reuseFailAlloc_1155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1155_, 0, v_val_1152_);
v___x_1154_ = v_reuseFailAlloc_1155_;
goto v_reusejp_1153_;
}
v_reusejp_1153_:
{
return v___x_1154_;
}
}
else
{
lean_object* v___x_1156_; 
lean_del_object(v___x_1150_);
lean_dec(v_a_1148_);
lean_inc_ref(v_h_1079_);
v___x_1156_ = lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg(v_h_1079_, v_a_1082_, v_a_1083_, v_a_1084_, v_a_1085_);
if (lean_obj_tag(v___x_1156_) == 0)
{
lean_object* v_a_1157_; 
v_a_1157_ = lean_ctor_get(v___x_1156_, 0);
lean_inc(v_a_1157_);
lean_dec_ref_known(v___x_1156_, 1);
if (lean_obj_tag(v_a_1157_) == 1)
{
lean_object* v_val_1158_; lean_object* v___x_1159_; 
v_val_1158_ = lean_ctor_get(v_a_1157_, 0);
lean_inc(v_val_1158_);
lean_dec_ref_known(v_a_1157_, 1);
lean_inc_ref(v_parts_1088_);
v___x_1159_ = lp_vampireReplay_Vampire_Reconstruct_placeLiteral___lam__0(v_parts_1088_, v___x_1087_, v_target_1078_, v_val_1158_, v_a_1080_, v_a_1081_, v_a_1082_, v_a_1083_, v_a_1084_, v_a_1085_);
if (lean_obj_tag(v___x_1159_) == 0)
{
lean_object* v_a_1160_; lean_object* v___x_1162_; uint8_t v_isShared_1163_; uint8_t v_isSharedCheck_1168_; 
v_a_1160_ = lean_ctor_get(v___x_1159_, 0);
v_isSharedCheck_1168_ = !lean_is_exclusive(v___x_1159_);
if (v_isSharedCheck_1168_ == 0)
{
v___x_1162_ = v___x_1159_;
v_isShared_1163_ = v_isSharedCheck_1168_;
goto v_resetjp_1161_;
}
else
{
lean_inc(v_a_1160_);
lean_dec(v___x_1159_);
v___x_1162_ = lean_box(0);
v_isShared_1163_ = v_isSharedCheck_1168_;
goto v_resetjp_1161_;
}
v_resetjp_1161_:
{
if (lean_obj_tag(v_a_1160_) == 1)
{
lean_object* v_val_1164_; lean_object* v___x_1166_; 
lean_dec_ref(v_parts_1088_);
lean_dec_ref(v_h_1079_);
lean_dec_ref(v_target_1078_);
v_val_1164_ = lean_ctor_get(v_a_1160_, 0);
lean_inc(v_val_1164_);
lean_dec_ref_known(v_a_1160_, 1);
if (v_isShared_1163_ == 0)
{
lean_ctor_set(v___x_1162_, 0, v_val_1164_);
v___x_1166_ = v___x_1162_;
goto v_reusejp_1165_;
}
else
{
lean_object* v_reuseFailAlloc_1167_; 
v_reuseFailAlloc_1167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1167_, 0, v_val_1164_);
v___x_1166_ = v_reuseFailAlloc_1167_;
goto v_reusejp_1165_;
}
v_reusejp_1165_:
{
return v___x_1166_;
}
}
else
{
lean_del_object(v___x_1162_);
lean_dec(v_a_1160_);
v___y_1090_ = v_a_1080_;
v___y_1091_ = v_a_1081_;
v___y_1092_ = v_a_1082_;
v___y_1093_ = v_a_1083_;
v___y_1094_ = v_a_1084_;
v___y_1095_ = v_a_1085_;
goto v___jp_1089_;
}
}
}
else
{
lean_object* v_a_1169_; lean_object* v___x_1171_; uint8_t v_isShared_1172_; uint8_t v_isSharedCheck_1176_; 
lean_dec_ref(v_parts_1088_);
lean_dec_ref(v_h_1079_);
lean_dec_ref(v_target_1078_);
v_a_1169_ = lean_ctor_get(v___x_1159_, 0);
v_isSharedCheck_1176_ = !lean_is_exclusive(v___x_1159_);
if (v_isSharedCheck_1176_ == 0)
{
v___x_1171_ = v___x_1159_;
v_isShared_1172_ = v_isSharedCheck_1176_;
goto v_resetjp_1170_;
}
else
{
lean_inc(v_a_1169_);
lean_dec(v___x_1159_);
v___x_1171_ = lean_box(0);
v_isShared_1172_ = v_isSharedCheck_1176_;
goto v_resetjp_1170_;
}
v_resetjp_1170_:
{
lean_object* v___x_1174_; 
if (v_isShared_1172_ == 0)
{
v___x_1174_ = v___x_1171_;
goto v_reusejp_1173_;
}
else
{
lean_object* v_reuseFailAlloc_1175_; 
v_reuseFailAlloc_1175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1175_, 0, v_a_1169_);
v___x_1174_ = v_reuseFailAlloc_1175_;
goto v_reusejp_1173_;
}
v_reusejp_1173_:
{
return v___x_1174_;
}
}
}
}
else
{
lean_dec(v_a_1157_);
v___y_1090_ = v_a_1080_;
v___y_1091_ = v_a_1081_;
v___y_1092_ = v_a_1082_;
v___y_1093_ = v_a_1083_;
v___y_1094_ = v_a_1084_;
v___y_1095_ = v_a_1085_;
goto v___jp_1089_;
}
}
else
{
lean_object* v_a_1177_; lean_object* v___x_1179_; uint8_t v_isShared_1180_; uint8_t v_isSharedCheck_1184_; 
lean_dec_ref(v_parts_1088_);
lean_dec_ref(v_h_1079_);
lean_dec_ref(v_target_1078_);
v_a_1177_ = lean_ctor_get(v___x_1156_, 0);
v_isSharedCheck_1184_ = !lean_is_exclusive(v___x_1156_);
if (v_isSharedCheck_1184_ == 0)
{
v___x_1179_ = v___x_1156_;
v_isShared_1180_ = v_isSharedCheck_1184_;
goto v_resetjp_1178_;
}
else
{
lean_inc(v_a_1177_);
lean_dec(v___x_1156_);
v___x_1179_ = lean_box(0);
v_isShared_1180_ = v_isSharedCheck_1184_;
goto v_resetjp_1178_;
}
v_resetjp_1178_:
{
lean_object* v___x_1182_; 
if (v_isShared_1180_ == 0)
{
v___x_1182_ = v___x_1179_;
goto v_reusejp_1181_;
}
else
{
lean_object* v_reuseFailAlloc_1183_; 
v_reuseFailAlloc_1183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1183_, 0, v_a_1177_);
v___x_1182_ = v_reuseFailAlloc_1183_;
goto v_reusejp_1181_;
}
v_reusejp_1181_:
{
return v___x_1182_;
}
}
}
}
}
}
else
{
lean_object* v_a_1186_; lean_object* v___x_1188_; uint8_t v_isShared_1189_; uint8_t v_isSharedCheck_1193_; 
lean_dec_ref(v_parts_1088_);
lean_dec_ref(v_h_1079_);
lean_dec_ref(v_target_1078_);
v_a_1186_ = lean_ctor_get(v___x_1147_, 0);
v_isSharedCheck_1193_ = !lean_is_exclusive(v___x_1147_);
if (v_isSharedCheck_1193_ == 0)
{
v___x_1188_ = v___x_1147_;
v_isShared_1189_ = v_isSharedCheck_1193_;
goto v_resetjp_1187_;
}
else
{
lean_inc(v_a_1186_);
lean_dec(v___x_1147_);
v___x_1188_ = lean_box(0);
v_isShared_1189_ = v_isSharedCheck_1193_;
goto v_resetjp_1187_;
}
v_resetjp_1187_:
{
lean_object* v___x_1191_; 
if (v_isShared_1189_ == 0)
{
v___x_1191_ = v___x_1188_;
goto v_reusejp_1190_;
}
else
{
lean_object* v_reuseFailAlloc_1192_; 
v_reuseFailAlloc_1192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1192_, 0, v_a_1186_);
v___x_1191_ = v_reuseFailAlloc_1192_;
goto v_reusejp_1190_;
}
v_reusejp_1190_:
{
return v___x_1191_;
}
}
}
v___jp_1089_:
{
lean_object* v___x_1096_; 
lean_inc_ref(v_h_1079_);
v___x_1096_ = lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg(v_h_1079_, v___y_1092_, v___y_1093_, v___y_1094_, v___y_1095_);
if (lean_obj_tag(v___x_1096_) == 0)
{
lean_object* v_a_1097_; lean_object* v___x_1098_; size_t v_sz_1099_; size_t v___x_1100_; lean_object* v___x_1101_; 
v_a_1097_ = lean_ctor_get(v___x_1096_, 0);
lean_inc(v_a_1097_);
lean_dec_ref_known(v___x_1096_, 1);
v___x_1098_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__1_spec__1___closed__0));
v_sz_1099_ = lean_array_size(v_a_1097_);
v___x_1100_ = ((size_t)0ULL);
v___x_1101_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__1(v_parts_1088_, v_target_1078_, v_a_1097_, v_sz_1099_, v___x_1100_, v___x_1098_, v___y_1090_, v___y_1091_, v___y_1092_, v___y_1093_, v___y_1094_, v___y_1095_);
lean_dec(v_a_1097_);
if (lean_obj_tag(v___x_1101_) == 0)
{
lean_object* v_a_1102_; lean_object* v___x_1104_; uint8_t v_isShared_1105_; uint8_t v_isSharedCheck_1130_; 
v_a_1102_ = lean_ctor_get(v___x_1101_, 0);
v_isSharedCheck_1130_ = !lean_is_exclusive(v___x_1101_);
if (v_isSharedCheck_1130_ == 0)
{
v___x_1104_ = v___x_1101_;
v_isShared_1105_ = v_isSharedCheck_1130_;
goto v_resetjp_1103_;
}
else
{
lean_inc(v_a_1102_);
lean_dec(v___x_1101_);
v___x_1104_ = lean_box(0);
v_isShared_1105_ = v_isSharedCheck_1130_;
goto v_resetjp_1103_;
}
v_resetjp_1103_:
{
lean_object* v_fst_1106_; lean_object* v___x_1108_; uint8_t v_isShared_1109_; uint8_t v_isSharedCheck_1128_; 
v_fst_1106_ = lean_ctor_get(v_a_1102_, 0);
v_isSharedCheck_1128_ = !lean_is_exclusive(v_a_1102_);
if (v_isSharedCheck_1128_ == 0)
{
lean_object* v_unused_1129_; 
v_unused_1129_ = lean_ctor_get(v_a_1102_, 1);
lean_dec(v_unused_1129_);
v___x_1108_ = v_a_1102_;
v_isShared_1109_ = v_isSharedCheck_1128_;
goto v_resetjp_1107_;
}
else
{
lean_inc(v_fst_1106_);
lean_dec(v_a_1102_);
v___x_1108_ = lean_box(0);
v_isShared_1109_ = v_isSharedCheck_1128_;
goto v_resetjp_1107_;
}
v_resetjp_1107_:
{
if (lean_obj_tag(v_fst_1106_) == 0)
{
lean_object* v___x_1110_; 
lean_del_object(v___x_1104_);
lean_inc(v___y_1095_);
lean_inc_ref(v___y_1094_);
lean_inc(v___y_1093_);
lean_inc_ref(v___y_1092_);
v___x_1110_ = lean_infer_type(v_h_1079_, v___y_1092_, v___y_1093_, v___y_1094_, v___y_1095_);
if (lean_obj_tag(v___x_1110_) == 0)
{
lean_object* v_a_1111_; lean_object* v___x_1112_; lean_object* v_a_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1117_; 
v_a_1111_ = lean_ctor_get(v___x_1110_, 0);
lean_inc(v_a_1111_);
lean_dec_ref_known(v___x_1110_, 1);
v___x_1112_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_a_1111_, v___y_1093_);
v_a_1113_ = lean_ctor_get(v___x_1112_, 0);
lean_inc(v_a_1113_);
lean_dec_ref(v___x_1112_);
v___x_1114_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_placeLiteral___closed__1, &lp_vampireReplay_Vampire_Reconstruct_placeLiteral___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_placeLiteral___closed__1);
v___x_1115_ = l_Lean_indentExpr(v_a_1113_);
if (v_isShared_1109_ == 0)
{
lean_ctor_set_tag(v___x_1108_, 7);
lean_ctor_set(v___x_1108_, 1, v___x_1115_);
lean_ctor_set(v___x_1108_, 0, v___x_1114_);
v___x_1117_ = v___x_1108_;
goto v_reusejp_1116_;
}
else
{
lean_object* v_reuseFailAlloc_1123_; 
v_reuseFailAlloc_1123_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1123_, 0, v___x_1114_);
lean_ctor_set(v_reuseFailAlloc_1123_, 1, v___x_1115_);
v___x_1117_ = v_reuseFailAlloc_1123_;
goto v_reusejp_1116_;
}
v_reusejp_1116_:
{
lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; 
v___x_1118_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_placeLiteral___closed__3, &lp_vampireReplay_Vampire_Reconstruct_placeLiteral___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_placeLiteral___closed__3);
v___x_1119_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1119_, 0, v___x_1117_);
lean_ctor_set(v___x_1119_, 1, v___x_1118_);
v___x_1120_ = l_Lean_indentExpr(v_target_1078_);
v___x_1121_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1121_, 0, v___x_1119_);
lean_ctor_set(v___x_1121_, 1, v___x_1120_);
v___x_1122_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1121_, v___y_1092_, v___y_1093_, v___y_1094_, v___y_1095_);
return v___x_1122_;
}
}
else
{
lean_del_object(v___x_1108_);
lean_dec_ref(v_target_1078_);
return v___x_1110_;
}
}
else
{
lean_object* v_val_1124_; lean_object* v___x_1126_; 
lean_del_object(v___x_1108_);
lean_dec_ref(v_h_1079_);
lean_dec_ref(v_target_1078_);
v_val_1124_ = lean_ctor_get(v_fst_1106_, 0);
lean_inc(v_val_1124_);
lean_dec_ref_known(v_fst_1106_, 1);
if (v_isShared_1105_ == 0)
{
lean_ctor_set(v___x_1104_, 0, v_val_1124_);
v___x_1126_ = v___x_1104_;
goto v_reusejp_1125_;
}
else
{
lean_object* v_reuseFailAlloc_1127_; 
v_reuseFailAlloc_1127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1127_, 0, v_val_1124_);
v___x_1126_ = v_reuseFailAlloc_1127_;
goto v_reusejp_1125_;
}
v_reusejp_1125_:
{
return v___x_1126_;
}
}
}
}
}
else
{
lean_object* v_a_1131_; lean_object* v___x_1133_; uint8_t v_isShared_1134_; uint8_t v_isSharedCheck_1138_; 
lean_dec_ref(v_h_1079_);
lean_dec_ref(v_target_1078_);
v_a_1131_ = lean_ctor_get(v___x_1101_, 0);
v_isSharedCheck_1138_ = !lean_is_exclusive(v___x_1101_);
if (v_isSharedCheck_1138_ == 0)
{
v___x_1133_ = v___x_1101_;
v_isShared_1134_ = v_isSharedCheck_1138_;
goto v_resetjp_1132_;
}
else
{
lean_inc(v_a_1131_);
lean_dec(v___x_1101_);
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
}
else
{
lean_object* v_a_1139_; lean_object* v___x_1141_; uint8_t v_isShared_1142_; uint8_t v_isSharedCheck_1146_; 
lean_dec_ref(v_parts_1088_);
lean_dec_ref(v_h_1079_);
lean_dec_ref(v_target_1078_);
v_a_1139_ = lean_ctor_get(v___x_1096_, 0);
v_isSharedCheck_1146_ = !lean_is_exclusive(v___x_1096_);
if (v_isSharedCheck_1146_ == 0)
{
v___x_1141_ = v___x_1096_;
v_isShared_1142_ = v_isSharedCheck_1146_;
goto v_resetjp_1140_;
}
else
{
lean_inc(v_a_1139_);
lean_dec(v___x_1096_);
v___x_1141_ = lean_box(0);
v_isShared_1142_ = v_isSharedCheck_1146_;
goto v_resetjp_1140_;
}
v_resetjp_1140_:
{
lean_object* v___x_1144_; 
if (v_isShared_1142_ == 0)
{
v___x_1144_ = v___x_1141_;
goto v_reusejp_1143_;
}
else
{
lean_object* v_reuseFailAlloc_1145_; 
v_reuseFailAlloc_1145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1145_, 0, v_a_1139_);
v___x_1144_ = v_reuseFailAlloc_1145_;
goto v_reusejp_1143_;
}
v_reusejp_1143_:
{
return v___x_1144_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_placeLiteral___boxed(lean_object* v_target_1194_, lean_object* v_h_1195_, lean_object* v_a_1196_, lean_object* v_a_1197_, lean_object* v_a_1198_, lean_object* v_a_1199_, lean_object* v_a_1200_, lean_object* v_a_1201_, lean_object* v_a_1202_){
_start:
{
lean_object* v_res_1203_; 
v_res_1203_ = lp_vampireReplay_Vampire_Reconstruct_placeLiteral(v_target_1194_, v_h_1195_, v_a_1196_, v_a_1197_, v_a_1198_, v_a_1199_, v_a_1200_, v_a_1201_);
lean_dec(v_a_1201_);
lean_dec_ref(v_a_1200_);
lean_dec(v_a_1199_);
lean_dec_ref(v_a_1198_);
lean_dec(v_a_1197_);
lean_dec_ref(v_a_1196_);
return v_res_1203_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__0(lean_object* v_a_1204_, lean_object* v_target_1205_, lean_object* v_candidate_1206_, lean_object* v_as_1207_, size_t v_sz_1208_, size_t v_i_1209_, lean_object* v_b_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_){
_start:
{
lean_object* v___x_1218_; 
v___x_1218_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__0___redArg(v_a_1204_, v_target_1205_, v_candidate_1206_, v_as_1207_, v_sz_1208_, v_i_1209_, v_b_1210_, v___y_1213_, v___y_1214_, v___y_1215_, v___y_1216_);
return v___x_1218_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__0___boxed(lean_object* v_a_1219_, lean_object* v_target_1220_, lean_object* v_candidate_1221_, lean_object* v_as_1222_, lean_object* v_sz_1223_, lean_object* v_i_1224_, lean_object* v_b_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_){
_start:
{
size_t v_sz_boxed_1233_; size_t v_i_boxed_1234_; lean_object* v_res_1235_; 
v_sz_boxed_1233_ = lean_unbox_usize(v_sz_1223_);
lean_dec(v_sz_1223_);
v_i_boxed_1234_ = lean_unbox_usize(v_i_1224_);
lean_dec(v_i_1224_);
v_res_1235_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__0(v_a_1219_, v_target_1220_, v_candidate_1221_, v_as_1222_, v_sz_boxed_1233_, v_i_boxed_1234_, v_b_1225_, v___y_1226_, v___y_1227_, v___y_1228_, v___y_1229_, v___y_1230_, v___y_1231_);
lean_dec(v___y_1231_);
lean_dec_ref(v___y_1230_);
lean_dec(v___y_1229_);
lean_dec_ref(v___y_1228_);
lean_dec(v___y_1227_);
lean_dec_ref(v___y_1226_);
lean_dec_ref(v_as_1222_);
lean_dec_ref(v_target_1220_);
return v_res_1235_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_ofNotNot___closed__0(void){
_start:
{
lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; 
v___x_1236_ = lean_box(0);
v___x_1237_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__3));
v___x_1238_ = l_Lean_Expr_const___override(v___x_1237_, v___x_1236_);
return v___x_1238_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_ofNotNot___closed__1(void){
_start:
{
lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; 
v___x_1239_ = lean_box(0);
v___x_1240_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__8));
v___x_1241_ = l_Lean_Expr_const___override(v___x_1240_, v___x_1239_);
return v___x_1241_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_ofNotNot___closed__2(void){
_start:
{
lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; 
v___x_1242_ = lean_box(0);
v___x_1243_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__2));
v___x_1244_ = l_Lean_Expr_const___override(v___x_1243_, v___x_1242_);
return v___x_1244_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_ofNotNot(lean_object* v_a_1245_, lean_object* v_h_1246_){
_start:
{
lean_object* v___x_1247_; lean_object* v_negated_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; 
v___x_1247_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_ofNotNot___closed__0, &lp_vampireReplay_Vampire_Reconstruct_ofNotNot___closed__0_once, _init_lp_vampireReplay_Vampire_Reconstruct_ofNotNot___closed__0);
lean_inc_ref_n(v_a_1245_, 2);
v_negated_1248_ = l_Lean_Expr_app___override(v___x_1247_, v_a_1245_);
v___x_1249_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_ofNotNot___closed__1, &lp_vampireReplay_Vampire_Reconstruct_ofNotNot___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_ofNotNot___closed__1);
v___x_1250_ = l_Lean_Expr_app___override(v___x_1247_, v_negated_1248_);
v___x_1251_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_ofNotNot___closed__2, &lp_vampireReplay_Vampire_Reconstruct_ofNotNot___closed__2_once, _init_lp_vampireReplay_Vampire_Reconstruct_ofNotNot___closed__2);
v___x_1252_ = l_Lean_Expr_app___override(v___x_1251_, v_a_1245_);
v___x_1253_ = l_Lean_mkApp4(v___x_1249_, v___x_1250_, v_a_1245_, v___x_1252_, v_h_1246_);
return v___x_1253_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_plainly(lean_object* v_h_1254_, lean_object* v_a_1255_, lean_object* v_a_1256_, lean_object* v_a_1257_, lean_object* v_a_1258_, lean_object* v_a_1259_, lean_object* v_a_1260_){
_start:
{
lean_object* v___x_1262_; 
lean_inc(v_a_1260_);
lean_inc_ref(v_a_1259_);
lean_inc(v_a_1258_);
lean_inc_ref(v_a_1257_);
lean_inc_ref(v_h_1254_);
v___x_1262_ = lean_infer_type(v_h_1254_, v_a_1257_, v_a_1258_, v_a_1259_, v_a_1260_);
if (lean_obj_tag(v___x_1262_) == 0)
{
lean_object* v_a_1263_; lean_object* v___x_1264_; 
v_a_1263_ = lean_ctor_get(v___x_1262_, 0);
lean_inc(v_a_1263_);
lean_dec_ref_known(v___x_1262_, 1);
v___x_1264_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_a_1263_, v_a_1258_);
if (lean_obj_tag(v___x_1264_) == 0)
{
lean_object* v_a_1265_; lean_object* v___x_1267_; uint8_t v_isShared_1268_; uint8_t v_isSharedCheck_1305_; 
v_a_1265_ = lean_ctor_get(v___x_1264_, 0);
v_isSharedCheck_1305_ = !lean_is_exclusive(v___x_1264_);
if (v_isSharedCheck_1305_ == 0)
{
v___x_1267_ = v___x_1264_;
v_isShared_1268_ = v_isSharedCheck_1305_;
goto v_resetjp_1266_;
}
else
{
lean_inc(v_a_1265_);
lean_dec(v___x_1264_);
v___x_1267_ = lean_box(0);
v_isShared_1268_ = v_isSharedCheck_1305_;
goto v_resetjp_1266_;
}
v_resetjp_1266_:
{
lean_object* v___y_1270_; lean_object* v___y_1271_; lean_object* v___y_1272_; lean_object* v___y_1273_; lean_object* v___y_1274_; lean_object* v___y_1275_; lean_object* v___x_1297_; lean_object* v___x_1298_; uint8_t v___x_1299_; 
v___x_1297_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__3));
v___x_1298_ = lean_unsigned_to_nat(1u);
v___x_1299_ = l_Lean_Expr_isAppOfArity(v_a_1265_, v___x_1297_, v___x_1298_);
if (v___x_1299_ == 0)
{
v___y_1270_ = v_a_1255_;
v___y_1271_ = v_a_1256_;
v___y_1272_ = v_a_1257_;
v___y_1273_ = v_a_1258_;
v___y_1274_ = v_a_1259_;
v___y_1275_ = v_a_1260_;
goto v___jp_1269_;
}
else
{
lean_object* v___x_1300_; uint8_t v___x_1301_; 
v___x_1300_ = l_Lean_Expr_appArg_x21(v_a_1265_);
v___x_1301_ = l_Lean_Expr_isAppOfArity(v___x_1300_, v___x_1297_, v___x_1298_);
if (v___x_1301_ == 0)
{
lean_dec_ref(v___x_1300_);
v___y_1270_ = v_a_1255_;
v___y_1271_ = v_a_1256_;
v___y_1272_ = v_a_1257_;
v___y_1273_ = v_a_1258_;
v___y_1274_ = v_a_1259_;
v___y_1275_ = v_a_1260_;
goto v___jp_1269_;
}
else
{
lean_object* v___x_1302_; lean_object* v___x_1303_; 
lean_del_object(v___x_1267_);
lean_dec(v_a_1265_);
v___x_1302_ = l_Lean_Expr_appArg_x21(v___x_1300_);
lean_dec_ref(v___x_1300_);
v___x_1303_ = lp_vampireReplay_Vampire_Reconstruct_ofNotNot(v___x_1302_, v_h_1254_);
v_h_1254_ = v___x_1303_;
goto _start;
}
}
v___jp_1269_:
{
lean_object* v___x_1276_; 
lean_inc(v_a_1265_);
v___x_1276_ = lp_vampireReplay_Vampire_Reconstruct_asNegation(v_a_1265_);
if (lean_obj_tag(v___x_1276_) == 1)
{
lean_object* v_val_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; uint8_t v___x_1280_; 
v_val_1277_ = lean_ctor_get(v___x_1276_, 0);
lean_inc(v_val_1277_);
lean_dec_ref_known(v___x_1276_, 1);
v___x_1278_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__3));
v___x_1279_ = lean_unsigned_to_nat(1u);
v___x_1280_ = l_Lean_Expr_isAppOfArity(v_val_1277_, v___x_1278_, v___x_1279_);
if (v___x_1280_ == 0)
{
uint8_t v___x_1281_; 
v___x_1281_ = l_Lean_Expr_isAppOfArity(v_a_1265_, v___x_1278_, v___x_1279_);
lean_dec(v_a_1265_);
if (v___x_1281_ == 0)
{
if (v___x_1280_ == 0)
{
lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; 
lean_del_object(v___x_1267_);
v___x_1282_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_ofNotNot___closed__0, &lp_vampireReplay_Vampire_Reconstruct_ofNotNot___closed__0_once, _init_lp_vampireReplay_Vampire_Reconstruct_ofNotNot___closed__0);
v___x_1283_ = l_Lean_Expr_app___override(v___x_1282_, v_val_1277_);
v___x_1284_ = l_Lean_Meta_mkExpectedTypeHint(v_h_1254_, v___x_1283_, v___y_1272_, v___y_1273_, v___y_1274_, v___y_1275_);
return v___x_1284_;
}
else
{
lean_object* v___x_1286_; 
lean_dec(v_val_1277_);
if (v_isShared_1268_ == 0)
{
lean_ctor_set(v___x_1267_, 0, v_h_1254_);
v___x_1286_ = v___x_1267_;
goto v_reusejp_1285_;
}
else
{
lean_object* v_reuseFailAlloc_1287_; 
v_reuseFailAlloc_1287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1287_, 0, v_h_1254_);
v___x_1286_ = v_reuseFailAlloc_1287_;
goto v_reusejp_1285_;
}
v_reusejp_1285_:
{
return v___x_1286_;
}
}
}
else
{
lean_object* v___x_1289_; 
lean_dec(v_val_1277_);
if (v_isShared_1268_ == 0)
{
lean_ctor_set(v___x_1267_, 0, v_h_1254_);
v___x_1289_ = v___x_1267_;
goto v_reusejp_1288_;
}
else
{
lean_object* v_reuseFailAlloc_1290_; 
v_reuseFailAlloc_1290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1290_, 0, v_h_1254_);
v___x_1289_ = v_reuseFailAlloc_1290_;
goto v_reusejp_1288_;
}
v_reusejp_1288_:
{
return v___x_1289_;
}
}
}
else
{
lean_object* v___x_1291_; lean_object* v___x_1292_; 
lean_del_object(v___x_1267_);
lean_dec(v_a_1265_);
v___x_1291_ = l_Lean_Expr_appArg_x21(v_val_1277_);
lean_dec(v_val_1277_);
v___x_1292_ = lp_vampireReplay_Vampire_Reconstruct_ofNotNot(v___x_1291_, v_h_1254_);
v_h_1254_ = v___x_1292_;
v_a_1255_ = v___y_1270_;
v_a_1256_ = v___y_1271_;
v_a_1257_ = v___y_1272_;
v_a_1258_ = v___y_1273_;
v_a_1259_ = v___y_1274_;
v_a_1260_ = v___y_1275_;
goto _start;
}
}
else
{
lean_object* v___x_1295_; 
lean_dec(v___x_1276_);
lean_dec(v_a_1265_);
if (v_isShared_1268_ == 0)
{
lean_ctor_set(v___x_1267_, 0, v_h_1254_);
v___x_1295_ = v___x_1267_;
goto v_reusejp_1294_;
}
else
{
lean_object* v_reuseFailAlloc_1296_; 
v_reuseFailAlloc_1296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1296_, 0, v_h_1254_);
v___x_1295_ = v_reuseFailAlloc_1296_;
goto v_reusejp_1294_;
}
v_reusejp_1294_:
{
return v___x_1295_;
}
}
}
}
}
else
{
lean_dec_ref(v_h_1254_);
return v___x_1264_;
}
}
else
{
lean_dec_ref(v_h_1254_);
return v___x_1262_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_plainly___boxed(lean_object* v_h_1306_, lean_object* v_a_1307_, lean_object* v_a_1308_, lean_object* v_a_1309_, lean_object* v_a_1310_, lean_object* v_a_1311_, lean_object* v_a_1312_, lean_object* v_a_1313_){
_start:
{
lean_object* v_res_1314_; 
v_res_1314_ = lp_vampireReplay_Vampire_Reconstruct_plainly(v_h_1306_, v_a_1307_, v_a_1308_, v_a_1309_, v_a_1310_, v_a_1311_, v_a_1312_);
lean_dec(v_a_1312_);
lean_dec_ref(v_a_1311_);
lean_dec(v_a_1310_);
lean_dec_ref(v_a_1309_);
lean_dec(v_a_1308_);
lean_dec_ref(v_a_1307_);
return v_res_1314_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_byArithmetic___lam__0(lean_object* v_facts_1315_, lean_object* v_contradiction_1316_, lean_object* v___x_1317_, lean_object* v___x_1318_, uint8_t v___y_1319_, uint8_t v___x_1320_, lean_object* v_h_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_){
_start:
{
lean_object* v___x_1329_; 
lean_inc_ref(v_h_1321_);
v___x_1329_ = lp_vampireReplay_Vampire_Reconstruct_plainly(v_h_1321_, v___y_1322_, v___y_1323_, v___y_1324_, v___y_1325_, v___y_1326_, v___y_1327_);
if (lean_obj_tag(v___x_1329_) == 0)
{
lean_object* v_a_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; 
v_a_1330_ = lean_ctor_get(v___x_1329_, 0);
lean_inc(v_a_1330_);
lean_dec_ref_known(v___x_1329_, 1);
v___x_1331_ = lean_array_push(v_facts_1315_, v_a_1330_);
lean_inc(v___y_1327_);
lean_inc_ref(v___y_1326_);
lean_inc(v___y_1325_);
lean_inc_ref(v___y_1324_);
v___x_1332_ = lean_apply_7(v_contradiction_1316_, v___x_1331_, v___x_1317_, v___y_1324_, v___y_1325_, v___y_1326_, v___y_1327_, lean_box(0));
if (lean_obj_tag(v___x_1332_) == 0)
{
lean_object* v_a_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; uint8_t v___x_1336_; lean_object* v___x_1337_; 
v_a_1333_ = lean_ctor_get(v___x_1332_, 0);
lean_inc(v_a_1333_);
lean_dec_ref_known(v___x_1332_, 1);
v___x_1334_ = lean_mk_empty_array_with_capacity(v___x_1318_);
v___x_1335_ = lean_array_push(v___x_1334_, v_h_1321_);
v___x_1336_ = 1;
v___x_1337_ = l_Lean_Meta_mkLambdaFVars(v___x_1335_, v_a_1333_, v___y_1319_, v___x_1320_, v___y_1319_, v___x_1320_, v___x_1336_, v___y_1324_, v___y_1325_, v___y_1326_, v___y_1327_);
lean_dec_ref(v___x_1335_);
return v___x_1337_;
}
else
{
lean_dec_ref(v_h_1321_);
return v___x_1332_;
}
}
else
{
lean_dec_ref(v_h_1321_);
lean_dec(v___x_1317_);
lean_dec_ref(v_contradiction_1316_);
lean_dec_ref(v_facts_1315_);
return v___x_1329_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_byArithmetic___lam__0___boxed(lean_object* v_facts_1338_, lean_object* v_contradiction_1339_, lean_object* v___x_1340_, lean_object* v___x_1341_, lean_object* v___y_1342_, lean_object* v___x_1343_, lean_object* v_h_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_){
_start:
{
uint8_t v___y_67074__boxed_1352_; uint8_t v___x_67075__boxed_1353_; lean_object* v_res_1354_; 
v___y_67074__boxed_1352_ = lean_unbox(v___y_1342_);
v___x_67075__boxed_1353_ = lean_unbox(v___x_1343_);
v_res_1354_ = lp_vampireReplay_Vampire_Reconstruct_byArithmetic___lam__0(v_facts_1338_, v_contradiction_1339_, v___x_1340_, v___x_1341_, v___y_67074__boxed_1352_, v___x_67075__boxed_1353_, v_h_1344_, v___y_1345_, v___y_1346_, v___y_1347_, v___y_1348_, v___y_1349_, v___y_1350_);
lean_dec(v___y_1350_);
lean_dec_ref(v___y_1349_);
lean_dec(v___y_1348_);
lean_dec_ref(v___y_1347_);
lean_dec(v___y_1346_);
lean_dec_ref(v___y_1345_);
lean_dec(v___x_1341_);
return v_res_1354_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; 
v___x_1358_ = lean_box(0);
v___x_1359_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__2___redArg___closed__1));
v___x_1360_ = l_Lean_Expr_const___override(v___x_1359_, v___x_1358_);
return v___x_1360_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_1361_; lean_object* v___x_1362_; 
v___x_1361_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__2___redArg___closed__2, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__2___redArg___closed__2_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__2___redArg___closed__2);
v___x_1362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1362_, 0, v___x_1361_);
return v___x_1362_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__2___redArg(lean_object* v___x_1363_, lean_object* v_fst_1364_, lean_object* v___x_1365_, lean_object* v_as_1366_, size_t v_sz_1367_, size_t v_i_1368_, lean_object* v_b_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_){
_start:
{
uint8_t v___x_1375_; 
v___x_1375_ = lean_usize_dec_lt(v_i_1368_, v_sz_1367_);
if (v___x_1375_ == 0)
{
lean_object* v___x_1376_; 
lean_dec(v___x_1365_);
lean_dec_ref(v_fst_1364_);
lean_dec_ref(v___x_1363_);
v___x_1376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1376_, 0, v_b_1369_);
return v___x_1376_;
}
else
{
lean_object* v_a_1377_; lean_object* v___x_1378_; 
lean_dec_ref(v_b_1369_);
v_a_1377_ = lean_array_uget_borrowed(v_as_1366_, v_i_1368_);
lean_inc(v___y_1373_);
lean_inc_ref(v___y_1372_);
lean_inc(v___y_1371_);
lean_inc_ref(v___y_1370_);
lean_inc(v_a_1377_);
v___x_1378_ = lean_infer_type(v_a_1377_, v___y_1370_, v___y_1371_, v___y_1372_, v___y_1373_);
if (lean_obj_tag(v___x_1378_) == 0)
{
lean_object* v_a_1379_; lean_object* v___x_1380_; 
v_a_1379_ = lean_ctor_get(v___x_1378_, 0);
lean_inc(v_a_1379_);
lean_dec_ref_known(v___x_1378_, 1);
v___x_1380_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_a_1379_, v___y_1371_);
if (lean_obj_tag(v___x_1380_) == 0)
{
lean_object* v_a_1381_; lean_object* v___x_1382_; 
v_a_1381_ = lean_ctor_get(v___x_1380_, 0);
lean_inc(v_a_1381_);
lean_dec_ref_known(v___x_1380_, 1);
lean_inc_ref(v___x_1363_);
v___x_1382_ = l_Lean_Meta_isExprDefEq(v___x_1363_, v_a_1381_, v___y_1370_, v___y_1371_, v___y_1372_, v___y_1373_);
if (lean_obj_tag(v___x_1382_) == 0)
{
lean_object* v_a_1383_; lean_object* v___x_1384_; uint8_t v___x_1385_; 
v_a_1383_ = lean_ctor_get(v___x_1382_, 0);
lean_inc(v_a_1383_);
lean_dec_ref_known(v___x_1382_, 1);
v___x_1384_ = lean_box(0);
v___x_1385_ = lean_unbox(v_a_1383_);
lean_dec(v_a_1383_);
if (v___x_1385_ == 0)
{
lean_object* v___x_1386_; size_t v___x_1387_; size_t v___x_1388_; 
v___x_1386_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__1_spec__1___closed__0));
v___x_1387_ = ((size_t)1ULL);
v___x_1388_ = lean_usize_add(v_i_1368_, v___x_1387_);
v_i_1368_ = v___x_1388_;
v_b_1369_ = v___x_1386_;
goto _start;
}
else
{
lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; 
lean_dec_ref(v___x_1363_);
v___x_1390_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__1));
v___x_1391_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__2___redArg___closed__3, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__2___redArg___closed__3_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__2___redArg___closed__3);
lean_inc(v_a_1377_);
v___x_1392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1392_, 0, v_a_1377_);
v___x_1393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1393_, 0, v_fst_1364_);
v___x_1394_ = lean_unsigned_to_nat(4u);
v___x_1395_ = lean_mk_empty_array_with_capacity(v___x_1394_);
v___x_1396_ = lean_array_push(v___x_1395_, v___x_1365_);
v___x_1397_ = lean_array_push(v___x_1396_, v___x_1391_);
v___x_1398_ = lean_array_push(v___x_1397_, v___x_1392_);
v___x_1399_ = lean_array_push(v___x_1398_, v___x_1393_);
v___x_1400_ = l_Lean_Meta_mkAppOptM(v___x_1390_, v___x_1399_, v___y_1370_, v___y_1371_, v___y_1372_, v___y_1373_);
if (lean_obj_tag(v___x_1400_) == 0)
{
lean_object* v_a_1401_; lean_object* v___x_1403_; uint8_t v_isShared_1404_; uint8_t v_isSharedCheck_1410_; 
v_a_1401_ = lean_ctor_get(v___x_1400_, 0);
v_isSharedCheck_1410_ = !lean_is_exclusive(v___x_1400_);
if (v_isSharedCheck_1410_ == 0)
{
v___x_1403_ = v___x_1400_;
v_isShared_1404_ = v_isSharedCheck_1410_;
goto v_resetjp_1402_;
}
else
{
lean_inc(v_a_1401_);
lean_dec(v___x_1400_);
v___x_1403_ = lean_box(0);
v_isShared_1404_ = v_isSharedCheck_1410_;
goto v_resetjp_1402_;
}
v_resetjp_1402_:
{
lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1408_; 
v___x_1405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1405_, 0, v_a_1401_);
v___x_1406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1406_, 0, v___x_1405_);
lean_ctor_set(v___x_1406_, 1, v___x_1384_);
if (v_isShared_1404_ == 0)
{
lean_ctor_set(v___x_1403_, 0, v___x_1406_);
v___x_1408_ = v___x_1403_;
goto v_reusejp_1407_;
}
else
{
lean_object* v_reuseFailAlloc_1409_; 
v_reuseFailAlloc_1409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1409_, 0, v___x_1406_);
v___x_1408_ = v_reuseFailAlloc_1409_;
goto v_reusejp_1407_;
}
v_reusejp_1407_:
{
return v___x_1408_;
}
}
}
else
{
lean_object* v_a_1411_; lean_object* v___x_1413_; uint8_t v_isShared_1414_; uint8_t v_isSharedCheck_1418_; 
v_a_1411_ = lean_ctor_get(v___x_1400_, 0);
v_isSharedCheck_1418_ = !lean_is_exclusive(v___x_1400_);
if (v_isSharedCheck_1418_ == 0)
{
v___x_1413_ = v___x_1400_;
v_isShared_1414_ = v_isSharedCheck_1418_;
goto v_resetjp_1412_;
}
else
{
lean_inc(v_a_1411_);
lean_dec(v___x_1400_);
v___x_1413_ = lean_box(0);
v_isShared_1414_ = v_isSharedCheck_1418_;
goto v_resetjp_1412_;
}
v_resetjp_1412_:
{
lean_object* v___x_1416_; 
if (v_isShared_1414_ == 0)
{
v___x_1416_ = v___x_1413_;
goto v_reusejp_1415_;
}
else
{
lean_object* v_reuseFailAlloc_1417_; 
v_reuseFailAlloc_1417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1417_, 0, v_a_1411_);
v___x_1416_ = v_reuseFailAlloc_1417_;
goto v_reusejp_1415_;
}
v_reusejp_1415_:
{
return v___x_1416_;
}
}
}
}
}
else
{
lean_object* v_a_1419_; lean_object* v___x_1421_; uint8_t v_isShared_1422_; uint8_t v_isSharedCheck_1426_; 
lean_dec(v___x_1365_);
lean_dec_ref(v_fst_1364_);
lean_dec_ref(v___x_1363_);
v_a_1419_ = lean_ctor_get(v___x_1382_, 0);
v_isSharedCheck_1426_ = !lean_is_exclusive(v___x_1382_);
if (v_isSharedCheck_1426_ == 0)
{
v___x_1421_ = v___x_1382_;
v_isShared_1422_ = v_isSharedCheck_1426_;
goto v_resetjp_1420_;
}
else
{
lean_inc(v_a_1419_);
lean_dec(v___x_1382_);
v___x_1421_ = lean_box(0);
v_isShared_1422_ = v_isSharedCheck_1426_;
goto v_resetjp_1420_;
}
v_resetjp_1420_:
{
lean_object* v___x_1424_; 
if (v_isShared_1422_ == 0)
{
v___x_1424_ = v___x_1421_;
goto v_reusejp_1423_;
}
else
{
lean_object* v_reuseFailAlloc_1425_; 
v_reuseFailAlloc_1425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1425_, 0, v_a_1419_);
v___x_1424_ = v_reuseFailAlloc_1425_;
goto v_reusejp_1423_;
}
v_reusejp_1423_:
{
return v___x_1424_;
}
}
}
}
else
{
lean_object* v_a_1427_; lean_object* v___x_1429_; uint8_t v_isShared_1430_; uint8_t v_isSharedCheck_1434_; 
lean_dec(v___x_1365_);
lean_dec_ref(v_fst_1364_);
lean_dec_ref(v___x_1363_);
v_a_1427_ = lean_ctor_get(v___x_1380_, 0);
v_isSharedCheck_1434_ = !lean_is_exclusive(v___x_1380_);
if (v_isSharedCheck_1434_ == 0)
{
v___x_1429_ = v___x_1380_;
v_isShared_1430_ = v_isSharedCheck_1434_;
goto v_resetjp_1428_;
}
else
{
lean_inc(v_a_1427_);
lean_dec(v___x_1380_);
v___x_1429_ = lean_box(0);
v_isShared_1430_ = v_isSharedCheck_1434_;
goto v_resetjp_1428_;
}
v_resetjp_1428_:
{
lean_object* v___x_1432_; 
if (v_isShared_1430_ == 0)
{
v___x_1432_ = v___x_1429_;
goto v_reusejp_1431_;
}
else
{
lean_object* v_reuseFailAlloc_1433_; 
v_reuseFailAlloc_1433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1433_, 0, v_a_1427_);
v___x_1432_ = v_reuseFailAlloc_1433_;
goto v_reusejp_1431_;
}
v_reusejp_1431_:
{
return v___x_1432_;
}
}
}
}
else
{
lean_object* v_a_1435_; lean_object* v___x_1437_; uint8_t v_isShared_1438_; uint8_t v_isSharedCheck_1442_; 
lean_dec(v___x_1365_);
lean_dec_ref(v_fst_1364_);
lean_dec_ref(v___x_1363_);
v_a_1435_ = lean_ctor_get(v___x_1378_, 0);
v_isSharedCheck_1442_ = !lean_is_exclusive(v___x_1378_);
if (v_isSharedCheck_1442_ == 0)
{
v___x_1437_ = v___x_1378_;
v_isShared_1438_ = v_isSharedCheck_1442_;
goto v_resetjp_1436_;
}
else
{
lean_inc(v_a_1435_);
lean_dec(v___x_1378_);
v___x_1437_ = lean_box(0);
v_isShared_1438_ = v_isSharedCheck_1442_;
goto v_resetjp_1436_;
}
v_resetjp_1436_:
{
lean_object* v___x_1440_; 
if (v_isShared_1438_ == 0)
{
v___x_1440_ = v___x_1437_;
goto v_reusejp_1439_;
}
else
{
lean_object* v_reuseFailAlloc_1441_; 
v_reuseFailAlloc_1441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1441_, 0, v_a_1435_);
v___x_1440_ = v_reuseFailAlloc_1441_;
goto v_reusejp_1439_;
}
v_reusejp_1439_:
{
return v___x_1440_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__2___redArg___boxed(lean_object* v___x_1443_, lean_object* v_fst_1444_, lean_object* v___x_1445_, lean_object* v_as_1446_, lean_object* v_sz_1447_, lean_object* v_i_1448_, lean_object* v_b_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_){
_start:
{
size_t v_sz_boxed_1455_; size_t v_i_boxed_1456_; lean_object* v_res_1457_; 
v_sz_boxed_1455_ = lean_unbox_usize(v_sz_1447_);
lean_dec(v_sz_1447_);
v_i_boxed_1456_ = lean_unbox_usize(v_i_1448_);
lean_dec(v_i_1448_);
v_res_1457_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__2___redArg(v___x_1443_, v_fst_1444_, v___x_1445_, v_as_1446_, v_sz_boxed_1455_, v_i_boxed_1456_, v_b_1449_, v___y_1450_, v___y_1451_, v___y_1452_, v___y_1453_);
lean_dec(v___y_1453_);
lean_dec_ref(v___y_1452_);
lean_dec(v___y_1451_);
lean_dec_ref(v___y_1450_);
lean_dec_ref(v_as_1446_);
return v_res_1457_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__3(lean_object* v_facts_1458_, lean_object* v_as_1459_, size_t v_sz_1460_, size_t v_i_1461_, lean_object* v_b_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_){
_start:
{
lean_object* v_a_1471_; uint8_t v___x_1475_; 
v___x_1475_ = lean_usize_dec_lt(v_i_1461_, v_sz_1460_);
if (v___x_1475_ == 0)
{
lean_object* v___x_1476_; 
lean_dec_ref(v_facts_1458_);
v___x_1476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1476_, 0, v_b_1462_);
return v___x_1476_;
}
else
{
lean_object* v_a_1477_; lean_object* v_fst_1478_; lean_object* v_snd_1479_; lean_object* v___x_1480_; 
lean_dec_ref(v_b_1462_);
v_a_1477_ = lean_array_uget_borrowed(v_as_1459_, v_i_1461_);
v_fst_1478_ = lean_ctor_get(v_a_1477_, 0);
v_snd_1479_ = lean_ctor_get(v_a_1477_, 1);
lean_inc(v___y_1468_);
lean_inc_ref(v___y_1467_);
lean_inc(v___y_1466_);
lean_inc_ref(v___y_1465_);
lean_inc(v_fst_1478_);
v___x_1480_ = lean_infer_type(v_fst_1478_, v___y_1465_, v___y_1466_, v___y_1467_, v___y_1468_);
if (lean_obj_tag(v___x_1480_) == 0)
{
lean_object* v_a_1481_; lean_object* v___x_1482_; 
v_a_1481_ = lean_ctor_get(v___x_1480_, 0);
lean_inc(v_a_1481_);
lean_dec_ref_known(v___x_1480_, 1);
v___x_1482_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_a_1481_, v___y_1466_);
if (lean_obj_tag(v___x_1482_) == 0)
{
lean_object* v_a_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; uint8_t v___x_1488_; 
v_a_1483_ = lean_ctor_get(v___x_1482_, 0);
lean_inc(v_a_1483_);
lean_dec_ref_known(v___x_1482_, 1);
v___x_1484_ = lean_box(0);
v___x_1485_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__1_spec__1___closed__0));
v___x_1486_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__3));
v___x_1487_ = lean_unsigned_to_nat(1u);
v___x_1488_ = l_Lean_Expr_isAppOfArity(v_a_1483_, v___x_1486_, v___x_1487_);
if (v___x_1488_ == 0)
{
lean_dec(v_a_1483_);
v_a_1471_ = v___x_1485_;
goto v___jp_1470_;
}
else
{
lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; size_t v_sz_1492_; size_t v___x_1493_; lean_object* v___x_1494_; 
v___x_1489_ = l_Lean_Expr_appArg_x21(v_a_1483_);
lean_dec(v_a_1483_);
lean_inc_ref(v___x_1489_);
v___x_1490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1490_, 0, v___x_1489_);
lean_inc(v_snd_1479_);
lean_inc_ref(v_facts_1458_);
v___x_1491_ = l_Array_eraseIdx_x21___redArg(v_facts_1458_, v_snd_1479_);
v_sz_1492_ = lean_array_size(v___x_1491_);
v___x_1493_ = ((size_t)0ULL);
lean_inc(v_fst_1478_);
v___x_1494_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__2___redArg(v___x_1489_, v_fst_1478_, v___x_1490_, v___x_1491_, v_sz_1492_, v___x_1493_, v___x_1485_, v___y_1465_, v___y_1466_, v___y_1467_, v___y_1468_);
lean_dec_ref(v___x_1491_);
if (lean_obj_tag(v___x_1494_) == 0)
{
lean_object* v_a_1495_; lean_object* v___x_1497_; uint8_t v_isShared_1498_; uint8_t v_isSharedCheck_1511_; 
v_a_1495_ = lean_ctor_get(v___x_1494_, 0);
v_isSharedCheck_1511_ = !lean_is_exclusive(v___x_1494_);
if (v_isSharedCheck_1511_ == 0)
{
v___x_1497_ = v___x_1494_;
v_isShared_1498_ = v_isSharedCheck_1511_;
goto v_resetjp_1496_;
}
else
{
lean_inc(v_a_1495_);
lean_dec(v___x_1494_);
v___x_1497_ = lean_box(0);
v_isShared_1498_ = v_isSharedCheck_1511_;
goto v_resetjp_1496_;
}
v_resetjp_1496_:
{
lean_object* v_fst_1499_; lean_object* v___x_1501_; uint8_t v_isShared_1502_; uint8_t v_isSharedCheck_1509_; 
v_fst_1499_ = lean_ctor_get(v_a_1495_, 0);
v_isSharedCheck_1509_ = !lean_is_exclusive(v_a_1495_);
if (v_isSharedCheck_1509_ == 0)
{
lean_object* v_unused_1510_; 
v_unused_1510_ = lean_ctor_get(v_a_1495_, 1);
lean_dec(v_unused_1510_);
v___x_1501_ = v_a_1495_;
v_isShared_1502_ = v_isSharedCheck_1509_;
goto v_resetjp_1500_;
}
else
{
lean_inc(v_fst_1499_);
lean_dec(v_a_1495_);
v___x_1501_ = lean_box(0);
v_isShared_1502_ = v_isSharedCheck_1509_;
goto v_resetjp_1500_;
}
v_resetjp_1500_:
{
if (lean_obj_tag(v_fst_1499_) == 0)
{
lean_del_object(v___x_1501_);
lean_del_object(v___x_1497_);
v_a_1471_ = v___x_1485_;
goto v___jp_1470_;
}
else
{
lean_object* v___x_1504_; 
lean_dec_ref(v_facts_1458_);
if (v_isShared_1502_ == 0)
{
lean_ctor_set(v___x_1501_, 1, v___x_1484_);
v___x_1504_ = v___x_1501_;
goto v_reusejp_1503_;
}
else
{
lean_object* v_reuseFailAlloc_1508_; 
v_reuseFailAlloc_1508_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1508_, 0, v_fst_1499_);
lean_ctor_set(v_reuseFailAlloc_1508_, 1, v___x_1484_);
v___x_1504_ = v_reuseFailAlloc_1508_;
goto v_reusejp_1503_;
}
v_reusejp_1503_:
{
lean_object* v___x_1506_; 
if (v_isShared_1498_ == 0)
{
lean_ctor_set(v___x_1497_, 0, v___x_1504_);
v___x_1506_ = v___x_1497_;
goto v_reusejp_1505_;
}
else
{
lean_object* v_reuseFailAlloc_1507_; 
v_reuseFailAlloc_1507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1507_, 0, v___x_1504_);
v___x_1506_ = v_reuseFailAlloc_1507_;
goto v_reusejp_1505_;
}
v_reusejp_1505_:
{
return v___x_1506_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_facts_1458_);
return v___x_1494_;
}
}
}
else
{
lean_object* v_a_1512_; lean_object* v___x_1514_; uint8_t v_isShared_1515_; uint8_t v_isSharedCheck_1519_; 
lean_dec_ref(v_facts_1458_);
v_a_1512_ = lean_ctor_get(v___x_1482_, 0);
v_isSharedCheck_1519_ = !lean_is_exclusive(v___x_1482_);
if (v_isSharedCheck_1519_ == 0)
{
v___x_1514_ = v___x_1482_;
v_isShared_1515_ = v_isSharedCheck_1519_;
goto v_resetjp_1513_;
}
else
{
lean_inc(v_a_1512_);
lean_dec(v___x_1482_);
v___x_1514_ = lean_box(0);
v_isShared_1515_ = v_isSharedCheck_1519_;
goto v_resetjp_1513_;
}
v_resetjp_1513_:
{
lean_object* v___x_1517_; 
if (v_isShared_1515_ == 0)
{
v___x_1517_ = v___x_1514_;
goto v_reusejp_1516_;
}
else
{
lean_object* v_reuseFailAlloc_1518_; 
v_reuseFailAlloc_1518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1518_, 0, v_a_1512_);
v___x_1517_ = v_reuseFailAlloc_1518_;
goto v_reusejp_1516_;
}
v_reusejp_1516_:
{
return v___x_1517_;
}
}
}
}
else
{
lean_object* v_a_1520_; lean_object* v___x_1522_; uint8_t v_isShared_1523_; uint8_t v_isSharedCheck_1527_; 
lean_dec_ref(v_facts_1458_);
v_a_1520_ = lean_ctor_get(v___x_1480_, 0);
v_isSharedCheck_1527_ = !lean_is_exclusive(v___x_1480_);
if (v_isSharedCheck_1527_ == 0)
{
v___x_1522_ = v___x_1480_;
v_isShared_1523_ = v_isSharedCheck_1527_;
goto v_resetjp_1521_;
}
else
{
lean_inc(v_a_1520_);
lean_dec(v___x_1480_);
v___x_1522_ = lean_box(0);
v_isShared_1523_ = v_isSharedCheck_1527_;
goto v_resetjp_1521_;
}
v_resetjp_1521_:
{
lean_object* v___x_1525_; 
if (v_isShared_1523_ == 0)
{
v___x_1525_ = v___x_1522_;
goto v_reusejp_1524_;
}
else
{
lean_object* v_reuseFailAlloc_1526_; 
v_reuseFailAlloc_1526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1526_, 0, v_a_1520_);
v___x_1525_ = v_reuseFailAlloc_1526_;
goto v_reusejp_1524_;
}
v_reusejp_1524_:
{
return v___x_1525_;
}
}
}
}
v___jp_1470_:
{
size_t v___x_1472_; size_t v___x_1473_; 
v___x_1472_ = ((size_t)1ULL);
v___x_1473_ = lean_usize_add(v_i_1461_, v___x_1472_);
v_i_1461_ = v___x_1473_;
v_b_1462_ = v_a_1471_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__3___boxed(lean_object* v_facts_1528_, lean_object* v_as_1529_, lean_object* v_sz_1530_, lean_object* v_i_1531_, lean_object* v_b_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_){
_start:
{
size_t v_sz_boxed_1540_; size_t v_i_boxed_1541_; lean_object* v_res_1542_; 
v_sz_boxed_1540_ = lean_unbox_usize(v_sz_1530_);
lean_dec(v_sz_1530_);
v_i_boxed_1541_ = lean_unbox_usize(v_i_1531_);
lean_dec(v_i_1531_);
v_res_1542_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__3(v_facts_1528_, v_as_1529_, v_sz_boxed_1540_, v_i_boxed_1541_, v_b_1532_, v___y_1533_, v___y_1534_, v___y_1535_, v___y_1536_, v___y_1537_, v___y_1538_);
lean_dec(v___y_1538_);
lean_dec_ref(v___y_1537_);
lean_dec(v___y_1536_);
lean_dec_ref(v___y_1535_);
lean_dec(v___y_1534_);
lean_dec_ref(v___y_1533_);
lean_dec_ref(v_as_1529_);
return v_res_1542_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_byArithmetic_spec__0___redArg(lean_object* v___x_1543_, lean_object* v_fst_1544_, lean_object* v_range_1545_, lean_object* v_b_1546_, lean_object* v_i_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_){
_start:
{
lean_object* v_stop_1555_; lean_object* v_step_1556_; uint8_t v___x_1557_; 
v_stop_1555_ = lean_ctor_get(v_range_1545_, 1);
v_step_1556_ = lean_ctor_get(v_range_1545_, 2);
v___x_1557_ = lean_nat_dec_lt(v_i_1547_, v_stop_1555_);
if (v___x_1557_ == 0)
{
lean_object* v___x_1558_; 
lean_dec(v_i_1547_);
lean_dec_ref(v_fst_1544_);
v___x_1558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1558_, 0, v_b_1546_);
return v___x_1558_;
}
else
{
lean_object* v___x_1559_; lean_object* v_a_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; 
lean_inc_ref(v_fst_1544_);
lean_inc(v_i_1547_);
v___x_1559_ = lp_vampireReplay_Vampire_Reconstruct_projectGiven(v___x_1543_, v_i_1547_, v_fst_1544_, v___y_1548_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_, v___y_1553_);
v_a_1560_ = lean_ctor_get(v___x_1559_, 0);
lean_inc(v_a_1560_);
lean_dec_ref(v___x_1559_);
v___x_1561_ = lean_array_push(v_b_1546_, v_a_1560_);
v___x_1562_ = lean_nat_add(v_i_1547_, v_step_1556_);
lean_dec(v_i_1547_);
v_b_1546_ = v___x_1561_;
v_i_1547_ = v___x_1562_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_byArithmetic_spec__0___redArg___boxed(lean_object* v___x_1564_, lean_object* v_fst_1565_, lean_object* v_range_1566_, lean_object* v_b_1567_, lean_object* v_i_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_){
_start:
{
lean_object* v_res_1576_; 
v_res_1576_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_byArithmetic_spec__0___redArg(v___x_1564_, v_fst_1565_, v_range_1566_, v_b_1567_, v_i_1568_, v___y_1569_, v___y_1570_, v___y_1571_, v___y_1572_, v___y_1573_, v___y_1574_);
lean_dec(v___y_1574_);
lean_dec_ref(v___y_1573_);
lean_dec(v___y_1572_);
lean_dec_ref(v___y_1571_);
lean_dec(v___y_1570_);
lean_dec_ref(v___y_1569_);
lean_dec_ref(v_range_1566_);
lean_dec_ref(v___x_1564_);
return v_res_1576_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__5(lean_object* v_fst_1577_, lean_object* v___x_1578_, lean_object* v_snd_1579_, lean_object* v_as_1580_, size_t v_sz_1581_, size_t v_i_1582_, lean_object* v_b_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_){
_start:
{
uint8_t v___x_1591_; 
v___x_1591_ = lean_usize_dec_lt(v_i_1582_, v_sz_1581_);
if (v___x_1591_ == 0)
{
lean_object* v___x_1592_; 
lean_dec(v_snd_1579_);
lean_dec_ref(v_fst_1577_);
v___x_1592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1592_, 0, v_b_1583_);
return v___x_1592_;
}
else
{
lean_object* v_a_1593_; lean_object* v___x_1594_; 
lean_dec_ref(v_b_1583_);
v_a_1593_ = lean_array_uget_borrowed(v_as_1580_, v_i_1582_);
lean_inc(v___y_1589_);
lean_inc_ref(v___y_1588_);
lean_inc(v___y_1587_);
lean_inc_ref(v___y_1586_);
lean_inc(v_a_1593_);
v___x_1594_ = lean_infer_type(v_a_1593_, v___y_1586_, v___y_1587_, v___y_1588_, v___y_1589_);
if (lean_obj_tag(v___x_1594_) == 0)
{
lean_object* v_a_1595_; lean_object* v___x_1596_; 
v_a_1595_ = lean_ctor_get(v___x_1594_, 0);
lean_inc(v_a_1595_);
lean_dec_ref_known(v___x_1594_, 1);
v___x_1596_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_a_1595_, v___y_1587_);
if (lean_obj_tag(v___x_1596_) == 0)
{
lean_object* v_a_1597_; lean_object* v___x_1598_; 
v_a_1597_ = lean_ctor_get(v___x_1596_, 0);
lean_inc(v_a_1597_);
lean_dec_ref_known(v___x_1596_, 1);
lean_inc_ref(v_fst_1577_);
v___x_1598_ = l_Lean_Meta_isExprDefEq(v_fst_1577_, v_a_1597_, v___y_1586_, v___y_1587_, v___y_1588_, v___y_1589_);
if (lean_obj_tag(v___x_1598_) == 0)
{
lean_object* v_a_1599_; lean_object* v___x_1600_; uint8_t v___x_1601_; 
v_a_1599_ = lean_ctor_get(v___x_1598_, 0);
lean_inc(v_a_1599_);
lean_dec_ref_known(v___x_1598_, 1);
v___x_1600_ = lean_box(0);
v___x_1601_ = lean_unbox(v_a_1599_);
lean_dec(v_a_1599_);
if (v___x_1601_ == 0)
{
lean_object* v___x_1602_; size_t v___x_1603_; size_t v___x_1604_; 
v___x_1602_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__1_spec__1___closed__0));
v___x_1603_ = ((size_t)1ULL);
v___x_1604_ = lean_usize_add(v_i_1582_, v___x_1603_);
v_i_1582_ = v___x_1604_;
v_b_1583_ = v___x_1602_;
goto _start;
}
else
{
lean_object* v___x_1606_; 
lean_dec_ref(v_fst_1577_);
lean_inc(v_a_1593_);
v___x_1606_ = lp_vampireReplay_Vampire_Reconstruct_injectGiven(v___x_1578_, v_snd_1579_, v_a_1593_, v___y_1584_, v___y_1585_, v___y_1586_, v___y_1587_, v___y_1588_, v___y_1589_);
if (lean_obj_tag(v___x_1606_) == 0)
{
lean_object* v_a_1607_; lean_object* v___x_1609_; uint8_t v_isShared_1610_; uint8_t v_isSharedCheck_1616_; 
v_a_1607_ = lean_ctor_get(v___x_1606_, 0);
v_isSharedCheck_1616_ = !lean_is_exclusive(v___x_1606_);
if (v_isSharedCheck_1616_ == 0)
{
v___x_1609_ = v___x_1606_;
v_isShared_1610_ = v_isSharedCheck_1616_;
goto v_resetjp_1608_;
}
else
{
lean_inc(v_a_1607_);
lean_dec(v___x_1606_);
v___x_1609_ = lean_box(0);
v_isShared_1610_ = v_isSharedCheck_1616_;
goto v_resetjp_1608_;
}
v_resetjp_1608_:
{
lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1614_; 
v___x_1611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1611_, 0, v_a_1607_);
v___x_1612_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1612_, 0, v___x_1611_);
lean_ctor_set(v___x_1612_, 1, v___x_1600_);
if (v_isShared_1610_ == 0)
{
lean_ctor_set(v___x_1609_, 0, v___x_1612_);
v___x_1614_ = v___x_1609_;
goto v_reusejp_1613_;
}
else
{
lean_object* v_reuseFailAlloc_1615_; 
v_reuseFailAlloc_1615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1615_, 0, v___x_1612_);
v___x_1614_ = v_reuseFailAlloc_1615_;
goto v_reusejp_1613_;
}
v_reusejp_1613_:
{
return v___x_1614_;
}
}
}
else
{
lean_object* v_a_1617_; lean_object* v___x_1619_; uint8_t v_isShared_1620_; uint8_t v_isSharedCheck_1624_; 
v_a_1617_ = lean_ctor_get(v___x_1606_, 0);
v_isSharedCheck_1624_ = !lean_is_exclusive(v___x_1606_);
if (v_isSharedCheck_1624_ == 0)
{
v___x_1619_ = v___x_1606_;
v_isShared_1620_ = v_isSharedCheck_1624_;
goto v_resetjp_1618_;
}
else
{
lean_inc(v_a_1617_);
lean_dec(v___x_1606_);
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
else
{
lean_object* v_a_1625_; lean_object* v___x_1627_; uint8_t v_isShared_1628_; uint8_t v_isSharedCheck_1632_; 
lean_dec(v_snd_1579_);
lean_dec_ref(v_fst_1577_);
v_a_1625_ = lean_ctor_get(v___x_1598_, 0);
v_isSharedCheck_1632_ = !lean_is_exclusive(v___x_1598_);
if (v_isSharedCheck_1632_ == 0)
{
v___x_1627_ = v___x_1598_;
v_isShared_1628_ = v_isSharedCheck_1632_;
goto v_resetjp_1626_;
}
else
{
lean_inc(v_a_1625_);
lean_dec(v___x_1598_);
v___x_1627_ = lean_box(0);
v_isShared_1628_ = v_isSharedCheck_1632_;
goto v_resetjp_1626_;
}
v_resetjp_1626_:
{
lean_object* v___x_1630_; 
if (v_isShared_1628_ == 0)
{
v___x_1630_ = v___x_1627_;
goto v_reusejp_1629_;
}
else
{
lean_object* v_reuseFailAlloc_1631_; 
v_reuseFailAlloc_1631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1631_, 0, v_a_1625_);
v___x_1630_ = v_reuseFailAlloc_1631_;
goto v_reusejp_1629_;
}
v_reusejp_1629_:
{
return v___x_1630_;
}
}
}
}
else
{
lean_object* v_a_1633_; lean_object* v___x_1635_; uint8_t v_isShared_1636_; uint8_t v_isSharedCheck_1640_; 
lean_dec(v_snd_1579_);
lean_dec_ref(v_fst_1577_);
v_a_1633_ = lean_ctor_get(v___x_1596_, 0);
v_isSharedCheck_1640_ = !lean_is_exclusive(v___x_1596_);
if (v_isSharedCheck_1640_ == 0)
{
v___x_1635_ = v___x_1596_;
v_isShared_1636_ = v_isSharedCheck_1640_;
goto v_resetjp_1634_;
}
else
{
lean_inc(v_a_1633_);
lean_dec(v___x_1596_);
v___x_1635_ = lean_box(0);
v_isShared_1636_ = v_isSharedCheck_1640_;
goto v_resetjp_1634_;
}
v_resetjp_1634_:
{
lean_object* v___x_1638_; 
if (v_isShared_1636_ == 0)
{
v___x_1638_ = v___x_1635_;
goto v_reusejp_1637_;
}
else
{
lean_object* v_reuseFailAlloc_1639_; 
v_reuseFailAlloc_1639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1639_, 0, v_a_1633_);
v___x_1638_ = v_reuseFailAlloc_1639_;
goto v_reusejp_1637_;
}
v_reusejp_1637_:
{
return v___x_1638_;
}
}
}
}
else
{
lean_object* v_a_1641_; lean_object* v___x_1643_; uint8_t v_isShared_1644_; uint8_t v_isSharedCheck_1648_; 
lean_dec(v_snd_1579_);
lean_dec_ref(v_fst_1577_);
v_a_1641_ = lean_ctor_get(v___x_1594_, 0);
v_isSharedCheck_1648_ = !lean_is_exclusive(v___x_1594_);
if (v_isSharedCheck_1648_ == 0)
{
v___x_1643_ = v___x_1594_;
v_isShared_1644_ = v_isSharedCheck_1648_;
goto v_resetjp_1642_;
}
else
{
lean_inc(v_a_1641_);
lean_dec(v___x_1594_);
v___x_1643_ = lean_box(0);
v_isShared_1644_ = v_isSharedCheck_1648_;
goto v_resetjp_1642_;
}
v_resetjp_1642_:
{
lean_object* v___x_1646_; 
if (v_isShared_1644_ == 0)
{
v___x_1646_ = v___x_1643_;
goto v_reusejp_1645_;
}
else
{
lean_object* v_reuseFailAlloc_1647_; 
v_reuseFailAlloc_1647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1647_, 0, v_a_1641_);
v___x_1646_ = v_reuseFailAlloc_1647_;
goto v_reusejp_1645_;
}
v_reusejp_1645_:
{
return v___x_1646_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__5___boxed(lean_object* v_fst_1649_, lean_object* v___x_1650_, lean_object* v_snd_1651_, lean_object* v_as_1652_, lean_object* v_sz_1653_, lean_object* v_i_1654_, lean_object* v_b_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_){
_start:
{
size_t v_sz_boxed_1663_; size_t v_i_boxed_1664_; lean_object* v_res_1665_; 
v_sz_boxed_1663_ = lean_unbox_usize(v_sz_1653_);
lean_dec(v_sz_1653_);
v_i_boxed_1664_ = lean_unbox_usize(v_i_1654_);
lean_dec(v_i_1654_);
v_res_1665_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__5(v_fst_1649_, v___x_1650_, v_snd_1651_, v_as_1652_, v_sz_boxed_1663_, v_i_boxed_1664_, v_b_1655_, v___y_1656_, v___y_1657_, v___y_1658_, v___y_1659_, v___y_1660_, v___y_1661_);
lean_dec(v___y_1661_);
lean_dec_ref(v___y_1660_);
lean_dec(v___y_1659_);
lean_dec_ref(v___y_1658_);
lean_dec(v___y_1657_);
lean_dec_ref(v___y_1656_);
lean_dec_ref(v_as_1652_);
lean_dec_ref(v___x_1650_);
return v_res_1665_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__6_spec__6(lean_object* v_facts_1666_, lean_object* v___x_1667_, lean_object* v_as_1668_, size_t v_sz_1669_, size_t v_i_1670_, lean_object* v_b_1671_, lean_object* v___y_1672_, lean_object* v___y_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_, lean_object* v___y_1677_){
_start:
{
uint8_t v___x_1679_; 
v___x_1679_ = lean_usize_dec_lt(v_i_1670_, v_sz_1669_);
if (v___x_1679_ == 0)
{
lean_object* v___x_1680_; 
v___x_1680_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1680_, 0, v_b_1671_);
return v___x_1680_;
}
else
{
lean_object* v_a_1681_; lean_object* v_fst_1682_; lean_object* v_snd_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; size_t v_sz_1686_; size_t v___x_1687_; lean_object* v___x_1688_; 
lean_dec_ref(v_b_1671_);
v_a_1681_ = lean_array_uget_borrowed(v_as_1668_, v_i_1670_);
v_fst_1682_ = lean_ctor_get(v_a_1681_, 0);
v_snd_1683_ = lean_ctor_get(v_a_1681_, 1);
v___x_1684_ = lean_box(0);
v___x_1685_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__1_spec__1___closed__0));
v_sz_1686_ = lean_array_size(v_facts_1666_);
v___x_1687_ = ((size_t)0ULL);
lean_inc(v_snd_1683_);
lean_inc(v_fst_1682_);
v___x_1688_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__5(v_fst_1682_, v___x_1667_, v_snd_1683_, v_facts_1666_, v_sz_1686_, v___x_1687_, v___x_1685_, v___y_1672_, v___y_1673_, v___y_1674_, v___y_1675_, v___y_1676_, v___y_1677_);
if (lean_obj_tag(v___x_1688_) == 0)
{
lean_object* v_a_1689_; lean_object* v___x_1691_; uint8_t v_isShared_1692_; uint8_t v_isSharedCheck_1708_; 
v_a_1689_ = lean_ctor_get(v___x_1688_, 0);
v_isSharedCheck_1708_ = !lean_is_exclusive(v___x_1688_);
if (v_isSharedCheck_1708_ == 0)
{
v___x_1691_ = v___x_1688_;
v_isShared_1692_ = v_isSharedCheck_1708_;
goto v_resetjp_1690_;
}
else
{
lean_inc(v_a_1689_);
lean_dec(v___x_1688_);
v___x_1691_ = lean_box(0);
v_isShared_1692_ = v_isSharedCheck_1708_;
goto v_resetjp_1690_;
}
v_resetjp_1690_:
{
lean_object* v_fst_1693_; lean_object* v___x_1695_; uint8_t v_isShared_1696_; uint8_t v_isSharedCheck_1706_; 
v_fst_1693_ = lean_ctor_get(v_a_1689_, 0);
v_isSharedCheck_1706_ = !lean_is_exclusive(v_a_1689_);
if (v_isSharedCheck_1706_ == 0)
{
lean_object* v_unused_1707_; 
v_unused_1707_ = lean_ctor_get(v_a_1689_, 1);
lean_dec(v_unused_1707_);
v___x_1695_ = v_a_1689_;
v_isShared_1696_ = v_isSharedCheck_1706_;
goto v_resetjp_1694_;
}
else
{
lean_inc(v_fst_1693_);
lean_dec(v_a_1689_);
v___x_1695_ = lean_box(0);
v_isShared_1696_ = v_isSharedCheck_1706_;
goto v_resetjp_1694_;
}
v_resetjp_1694_:
{
if (lean_obj_tag(v_fst_1693_) == 0)
{
size_t v___x_1697_; size_t v___x_1698_; 
lean_del_object(v___x_1695_);
lean_del_object(v___x_1691_);
v___x_1697_ = ((size_t)1ULL);
v___x_1698_ = lean_usize_add(v_i_1670_, v___x_1697_);
v_i_1670_ = v___x_1698_;
v_b_1671_ = v___x_1685_;
goto _start;
}
else
{
lean_object* v___x_1701_; 
if (v_isShared_1696_ == 0)
{
lean_ctor_set(v___x_1695_, 1, v___x_1684_);
v___x_1701_ = v___x_1695_;
goto v_reusejp_1700_;
}
else
{
lean_object* v_reuseFailAlloc_1705_; 
v_reuseFailAlloc_1705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1705_, 0, v_fst_1693_);
lean_ctor_set(v_reuseFailAlloc_1705_, 1, v___x_1684_);
v___x_1701_ = v_reuseFailAlloc_1705_;
goto v_reusejp_1700_;
}
v_reusejp_1700_:
{
lean_object* v___x_1703_; 
if (v_isShared_1692_ == 0)
{
lean_ctor_set(v___x_1691_, 0, v___x_1701_);
v___x_1703_ = v___x_1691_;
goto v_reusejp_1702_;
}
else
{
lean_object* v_reuseFailAlloc_1704_; 
v_reuseFailAlloc_1704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1704_, 0, v___x_1701_);
v___x_1703_ = v_reuseFailAlloc_1704_;
goto v_reusejp_1702_;
}
v_reusejp_1702_:
{
return v___x_1703_;
}
}
}
}
}
}
else
{
return v___x_1688_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__6_spec__6___boxed(lean_object* v_facts_1709_, lean_object* v___x_1710_, lean_object* v_as_1711_, lean_object* v_sz_1712_, lean_object* v_i_1713_, lean_object* v_b_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_){
_start:
{
size_t v_sz_boxed_1722_; size_t v_i_boxed_1723_; lean_object* v_res_1724_; 
v_sz_boxed_1722_ = lean_unbox_usize(v_sz_1712_);
lean_dec(v_sz_1712_);
v_i_boxed_1723_ = lean_unbox_usize(v_i_1713_);
lean_dec(v_i_1713_);
v_res_1724_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__6_spec__6(v_facts_1709_, v___x_1710_, v_as_1711_, v_sz_boxed_1722_, v_i_boxed_1723_, v_b_1714_, v___y_1715_, v___y_1716_, v___y_1717_, v___y_1718_, v___y_1719_, v___y_1720_);
lean_dec(v___y_1720_);
lean_dec_ref(v___y_1719_);
lean_dec(v___y_1718_);
lean_dec_ref(v___y_1717_);
lean_dec(v___y_1716_);
lean_dec_ref(v___y_1715_);
lean_dec_ref(v_as_1711_);
lean_dec_ref(v___x_1710_);
lean_dec_ref(v_facts_1709_);
return v_res_1724_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__6(lean_object* v___x_1725_, lean_object* v_facts_1726_, lean_object* v_as_1727_, size_t v_sz_1728_, size_t v_i_1729_, lean_object* v_b_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_, lean_object* v___y_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_){
_start:
{
uint8_t v___x_1738_; 
v___x_1738_ = lean_usize_dec_lt(v_i_1729_, v_sz_1728_);
if (v___x_1738_ == 0)
{
lean_object* v___x_1739_; 
v___x_1739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1739_, 0, v_b_1730_);
return v___x_1739_;
}
else
{
lean_object* v_a_1740_; lean_object* v_fst_1741_; lean_object* v_snd_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; size_t v_sz_1745_; size_t v___x_1746_; lean_object* v___x_1747_; 
lean_dec_ref(v_b_1730_);
v_a_1740_ = lean_array_uget_borrowed(v_as_1727_, v_i_1729_);
v_fst_1741_ = lean_ctor_get(v_a_1740_, 0);
v_snd_1742_ = lean_ctor_get(v_a_1740_, 1);
v___x_1743_ = lean_box(0);
v___x_1744_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__1_spec__1___closed__0));
v_sz_1745_ = lean_array_size(v_facts_1726_);
v___x_1746_ = ((size_t)0ULL);
lean_inc(v_snd_1742_);
lean_inc(v_fst_1741_);
v___x_1747_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__5(v_fst_1741_, v___x_1725_, v_snd_1742_, v_facts_1726_, v_sz_1745_, v___x_1746_, v___x_1744_, v___y_1731_, v___y_1732_, v___y_1733_, v___y_1734_, v___y_1735_, v___y_1736_);
if (lean_obj_tag(v___x_1747_) == 0)
{
lean_object* v_a_1748_; lean_object* v___x_1750_; uint8_t v_isShared_1751_; uint8_t v_isSharedCheck_1767_; 
v_a_1748_ = lean_ctor_get(v___x_1747_, 0);
v_isSharedCheck_1767_ = !lean_is_exclusive(v___x_1747_);
if (v_isSharedCheck_1767_ == 0)
{
v___x_1750_ = v___x_1747_;
v_isShared_1751_ = v_isSharedCheck_1767_;
goto v_resetjp_1749_;
}
else
{
lean_inc(v_a_1748_);
lean_dec(v___x_1747_);
v___x_1750_ = lean_box(0);
v_isShared_1751_ = v_isSharedCheck_1767_;
goto v_resetjp_1749_;
}
v_resetjp_1749_:
{
lean_object* v_fst_1752_; lean_object* v___x_1754_; uint8_t v_isShared_1755_; uint8_t v_isSharedCheck_1765_; 
v_fst_1752_ = lean_ctor_get(v_a_1748_, 0);
v_isSharedCheck_1765_ = !lean_is_exclusive(v_a_1748_);
if (v_isSharedCheck_1765_ == 0)
{
lean_object* v_unused_1766_; 
v_unused_1766_ = lean_ctor_get(v_a_1748_, 1);
lean_dec(v_unused_1766_);
v___x_1754_ = v_a_1748_;
v_isShared_1755_ = v_isSharedCheck_1765_;
goto v_resetjp_1753_;
}
else
{
lean_inc(v_fst_1752_);
lean_dec(v_a_1748_);
v___x_1754_ = lean_box(0);
v_isShared_1755_ = v_isSharedCheck_1765_;
goto v_resetjp_1753_;
}
v_resetjp_1753_:
{
if (lean_obj_tag(v_fst_1752_) == 0)
{
size_t v___x_1756_; size_t v___x_1757_; lean_object* v___x_1758_; 
lean_del_object(v___x_1754_);
lean_del_object(v___x_1750_);
v___x_1756_ = ((size_t)1ULL);
v___x_1757_ = lean_usize_add(v_i_1729_, v___x_1756_);
v___x_1758_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__6_spec__6(v_facts_1726_, v___x_1725_, v_as_1727_, v_sz_1728_, v___x_1757_, v___x_1744_, v___y_1731_, v___y_1732_, v___y_1733_, v___y_1734_, v___y_1735_, v___y_1736_);
return v___x_1758_;
}
else
{
lean_object* v___x_1760_; 
if (v_isShared_1755_ == 0)
{
lean_ctor_set(v___x_1754_, 1, v___x_1743_);
v___x_1760_ = v___x_1754_;
goto v_reusejp_1759_;
}
else
{
lean_object* v_reuseFailAlloc_1764_; 
v_reuseFailAlloc_1764_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1764_, 0, v_fst_1752_);
lean_ctor_set(v_reuseFailAlloc_1764_, 1, v___x_1743_);
v___x_1760_ = v_reuseFailAlloc_1764_;
goto v_reusejp_1759_;
}
v_reusejp_1759_:
{
lean_object* v___x_1762_; 
if (v_isShared_1751_ == 0)
{
lean_ctor_set(v___x_1750_, 0, v___x_1760_);
v___x_1762_ = v___x_1750_;
goto v_reusejp_1761_;
}
else
{
lean_object* v_reuseFailAlloc_1763_; 
v_reuseFailAlloc_1763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1763_, 0, v___x_1760_);
v___x_1762_ = v_reuseFailAlloc_1763_;
goto v_reusejp_1761_;
}
v_reusejp_1761_:
{
return v___x_1762_;
}
}
}
}
}
}
else
{
return v___x_1747_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__6___boxed(lean_object* v___x_1768_, lean_object* v_facts_1769_, lean_object* v_as_1770_, lean_object* v_sz_1771_, lean_object* v_i_1772_, lean_object* v_b_1773_, lean_object* v___y_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_, lean_object* v___y_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_){
_start:
{
size_t v_sz_boxed_1781_; size_t v_i_boxed_1782_; lean_object* v_res_1783_; 
v_sz_boxed_1781_ = lean_unbox_usize(v_sz_1771_);
lean_dec(v_sz_1771_);
v_i_boxed_1782_ = lean_unbox_usize(v_i_1772_);
lean_dec(v_i_1772_);
v_res_1783_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__6(v___x_1768_, v_facts_1769_, v_as_1770_, v_sz_boxed_1781_, v_i_boxed_1782_, v_b_1773_, v___y_1774_, v___y_1775_, v___y_1776_, v___y_1777_, v___y_1778_, v___y_1779_);
lean_dec(v___y_1779_);
lean_dec_ref(v___y_1778_);
lean_dec(v___y_1777_);
lean_dec_ref(v___y_1776_);
lean_dec(v___y_1775_);
lean_dec_ref(v___y_1774_);
lean_dec_ref(v_as_1770_);
lean_dec_ref(v_facts_1769_);
lean_dec_ref(v___x_1768_);
return v_res_1783_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__8___lam__0(lean_object* v___x_1784_, lean_object* v_snd_1785_, lean_object* v_h_1786_, uint8_t v___x_1787_, uint8_t v___x_1788_, lean_object* v_l_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_, lean_object* v___y_1795_){
_start:
{
lean_object* v___x_1797_; 
lean_inc_ref(v_l_1789_);
v___x_1797_ = lp_vampireReplay_Vampire_Reconstruct_injectGiven(v___x_1784_, v_snd_1785_, v_l_1789_, v___y_1790_, v___y_1791_, v___y_1792_, v___y_1793_, v___y_1794_, v___y_1795_);
if (lean_obj_tag(v___x_1797_) == 0)
{
lean_object* v_a_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; uint8_t v___x_1803_; lean_object* v___x_1804_; 
v_a_1798_ = lean_ctor_get(v___x_1797_, 0);
lean_inc(v_a_1798_);
lean_dec_ref_known(v___x_1797_, 1);
v___x_1799_ = lean_unsigned_to_nat(1u);
v___x_1800_ = lean_mk_empty_array_with_capacity(v___x_1799_);
v___x_1801_ = lean_array_push(v___x_1800_, v_l_1789_);
v___x_1802_ = l_Lean_Expr_app___override(v_h_1786_, v_a_1798_);
v___x_1803_ = 1;
v___x_1804_ = l_Lean_Meta_mkLambdaFVars(v___x_1801_, v___x_1802_, v___x_1787_, v___x_1788_, v___x_1787_, v___x_1788_, v___x_1803_, v___y_1792_, v___y_1793_, v___y_1794_, v___y_1795_);
lean_dec_ref(v___x_1801_);
return v___x_1804_;
}
else
{
lean_dec_ref(v_l_1789_);
lean_dec_ref(v_h_1786_);
return v___x_1797_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__8___lam__0___boxed(lean_object* v___x_1805_, lean_object* v_snd_1806_, lean_object* v_h_1807_, lean_object* v___x_1808_, lean_object* v___x_1809_, lean_object* v_l_1810_, lean_object* v___y_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_){
_start:
{
uint8_t v___x_67814__boxed_1818_; uint8_t v___x_67815__boxed_1819_; lean_object* v_res_1820_; 
v___x_67814__boxed_1818_ = lean_unbox(v___x_1808_);
v___x_67815__boxed_1819_ = lean_unbox(v___x_1809_);
v_res_1820_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__8___lam__0(v___x_1805_, v_snd_1806_, v_h_1807_, v___x_67814__boxed_1818_, v___x_67815__boxed_1819_, v_l_1810_, v___y_1811_, v___y_1812_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_);
lean_dec(v___y_1816_);
lean_dec_ref(v___y_1815_);
lean_dec(v___y_1814_);
lean_dec_ref(v___y_1813_);
lean_dec(v___y_1812_);
lean_dec_ref(v___y_1811_);
lean_dec_ref(v___x_1805_);
return v_res_1820_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__8(lean_object* v___x_1824_, lean_object* v_h_1825_, uint8_t v___x_1826_, lean_object* v_as_1827_, size_t v_sz_1828_, size_t v_i_1829_, lean_object* v_b_1830_, lean_object* v___y_1831_, lean_object* v___y_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_){
_start:
{
uint8_t v___x_1838_; 
v___x_1838_ = lean_usize_dec_lt(v_i_1829_, v_sz_1828_);
if (v___x_1838_ == 0)
{
lean_object* v___x_1839_; 
lean_dec_ref(v_h_1825_);
lean_dec_ref(v___x_1824_);
v___x_1839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1839_, 0, v_b_1830_);
return v___x_1839_;
}
else
{
lean_object* v_a_1840_; lean_object* v_fst_1841_; lean_object* v_snd_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___f_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; 
v_a_1840_ = lean_array_uget_borrowed(v_as_1827_, v_i_1829_);
v_fst_1841_ = lean_ctor_get(v_a_1840_, 0);
v_snd_1842_ = lean_ctor_get(v_a_1840_, 1);
v___x_1843_ = lean_box(v___x_1826_);
v___x_1844_ = lean_box(v___x_1838_);
lean_inc_ref(v_h_1825_);
lean_inc(v_snd_1842_);
lean_inc_ref(v___x_1824_);
v___f_1845_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__8___lam__0___boxed), 13, 5);
lean_closure_set(v___f_1845_, 0, v___x_1824_);
lean_closure_set(v___f_1845_, 1, v_snd_1842_);
lean_closure_set(v___f_1845_, 2, v_h_1825_);
lean_closure_set(v___f_1845_, 3, v___x_1843_);
lean_closure_set(v___f_1845_, 4, v___x_1844_);
v___x_1846_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__8___closed__1));
lean_inc(v_fst_1841_);
v___x_1847_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_1846_, v_fst_1841_, v___f_1845_, v___y_1831_, v___y_1832_, v___y_1833_, v___y_1834_, v___y_1835_, v___y_1836_);
if (lean_obj_tag(v___x_1847_) == 0)
{
lean_object* v_a_1848_; lean_object* v___x_1849_; 
v_a_1848_ = lean_ctor_get(v___x_1847_, 0);
lean_inc(v_a_1848_);
lean_dec_ref_known(v___x_1847_, 1);
v___x_1849_ = lp_vampireReplay_Vampire_Reconstruct_plainly(v_a_1848_, v___y_1831_, v___y_1832_, v___y_1833_, v___y_1834_, v___y_1835_, v___y_1836_);
if (lean_obj_tag(v___x_1849_) == 0)
{
lean_object* v_a_1850_; lean_object* v___x_1851_; size_t v___x_1852_; size_t v___x_1853_; 
v_a_1850_ = lean_ctor_get(v___x_1849_, 0);
lean_inc(v_a_1850_);
lean_dec_ref_known(v___x_1849_, 1);
v___x_1851_ = lean_array_push(v_b_1830_, v_a_1850_);
v___x_1852_ = ((size_t)1ULL);
v___x_1853_ = lean_usize_add(v_i_1829_, v___x_1852_);
v_i_1829_ = v___x_1853_;
v_b_1830_ = v___x_1851_;
goto _start;
}
else
{
lean_object* v_a_1855_; lean_object* v___x_1857_; uint8_t v_isShared_1858_; uint8_t v_isSharedCheck_1862_; 
lean_dec_ref(v_b_1830_);
lean_dec_ref(v_h_1825_);
lean_dec_ref(v___x_1824_);
v_a_1855_ = lean_ctor_get(v___x_1849_, 0);
v_isSharedCheck_1862_ = !lean_is_exclusive(v___x_1849_);
if (v_isSharedCheck_1862_ == 0)
{
v___x_1857_ = v___x_1849_;
v_isShared_1858_ = v_isSharedCheck_1862_;
goto v_resetjp_1856_;
}
else
{
lean_inc(v_a_1855_);
lean_dec(v___x_1849_);
v___x_1857_ = lean_box(0);
v_isShared_1858_ = v_isSharedCheck_1862_;
goto v_resetjp_1856_;
}
v_resetjp_1856_:
{
lean_object* v___x_1860_; 
if (v_isShared_1858_ == 0)
{
v___x_1860_ = v___x_1857_;
goto v_reusejp_1859_;
}
else
{
lean_object* v_reuseFailAlloc_1861_; 
v_reuseFailAlloc_1861_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1861_, 0, v_a_1855_);
v___x_1860_ = v_reuseFailAlloc_1861_;
goto v_reusejp_1859_;
}
v_reusejp_1859_:
{
return v___x_1860_;
}
}
}
}
else
{
lean_object* v_a_1863_; lean_object* v___x_1865_; uint8_t v_isShared_1866_; uint8_t v_isSharedCheck_1870_; 
lean_dec_ref(v_b_1830_);
lean_dec_ref(v_h_1825_);
lean_dec_ref(v___x_1824_);
v_a_1863_ = lean_ctor_get(v___x_1847_, 0);
v_isSharedCheck_1870_ = !lean_is_exclusive(v___x_1847_);
if (v_isSharedCheck_1870_ == 0)
{
v___x_1865_ = v___x_1847_;
v_isShared_1866_ = v_isSharedCheck_1870_;
goto v_resetjp_1864_;
}
else
{
lean_inc(v_a_1863_);
lean_dec(v___x_1847_);
v___x_1865_ = lean_box(0);
v_isShared_1866_ = v_isSharedCheck_1870_;
goto v_resetjp_1864_;
}
v_resetjp_1864_:
{
lean_object* v___x_1868_; 
if (v_isShared_1866_ == 0)
{
v___x_1868_ = v___x_1865_;
goto v_reusejp_1867_;
}
else
{
lean_object* v_reuseFailAlloc_1869_; 
v_reuseFailAlloc_1869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1869_, 0, v_a_1863_);
v___x_1868_ = v_reuseFailAlloc_1869_;
goto v_reusejp_1867_;
}
v_reusejp_1867_:
{
return v___x_1868_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__8___boxed(lean_object* v___x_1871_, lean_object* v_h_1872_, lean_object* v___x_1873_, lean_object* v_as_1874_, lean_object* v_sz_1875_, lean_object* v_i_1876_, lean_object* v_b_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_, lean_object* v___y_1880_, lean_object* v___y_1881_, lean_object* v___y_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_){
_start:
{
uint8_t v___x_67869__boxed_1885_; size_t v_sz_boxed_1886_; size_t v_i_boxed_1887_; lean_object* v_res_1888_; 
v___x_67869__boxed_1885_ = lean_unbox(v___x_1873_);
v_sz_boxed_1886_ = lean_unbox_usize(v_sz_1875_);
lean_dec(v_sz_1875_);
v_i_boxed_1887_ = lean_unbox_usize(v_i_1876_);
lean_dec(v_i_1876_);
v_res_1888_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__8(v___x_1871_, v_h_1872_, v___x_67869__boxed_1885_, v_as_1874_, v_sz_boxed_1886_, v_i_boxed_1887_, v_b_1877_, v___y_1878_, v___y_1879_, v___y_1880_, v___y_1881_, v___y_1882_, v___y_1883_);
lean_dec(v___y_1883_);
lean_dec_ref(v___y_1882_);
lean_dec(v___y_1881_);
lean_dec_ref(v___y_1880_);
lean_dec(v___y_1879_);
lean_dec_ref(v___y_1878_);
lean_dec_ref(v_as_1874_);
return v_res_1888_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__1___lam__0(lean_object* v___x_1892_, lean_object* v_goal_1893_, lean_object* v_fuel_1894_, lean_object* v_x_1895_, lean_object* v_h_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_){
_start:
{
lean_object* v___x_1904_; 
v___x_1904_ = lp_vampireReplay_Vampire_Reconstruct_plainly(v_h_1896_, v___y_1897_, v___y_1898_, v___y_1899_, v___y_1900_, v___y_1901_, v___y_1902_);
if (lean_obj_tag(v___x_1904_) == 0)
{
lean_object* v_a_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; 
v_a_1905_ = lean_ctor_get(v___x_1904_, 0);
lean_inc(v_a_1905_);
lean_dec_ref_known(v___x_1904_, 1);
v___x_1906_ = lean_array_push(v___x_1892_, v_a_1905_);
v___x_1907_ = lp_vampireReplay_Vampire_Reconstruct_byArithmetic(v___x_1906_, v_goal_1893_, v_fuel_1894_, v___y_1897_, v___y_1898_, v___y_1899_, v___y_1900_, v___y_1901_, v___y_1902_);
return v___x_1907_;
}
else
{
lean_dec(v_fuel_1894_);
lean_dec_ref(v_goal_1893_);
lean_dec_ref(v___x_1892_);
return v___x_1904_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__1___lam__0___boxed(lean_object* v___x_1908_, lean_object* v_goal_1909_, lean_object* v_fuel_1910_, lean_object* v_x_1911_, lean_object* v_h_1912_, lean_object* v___y_1913_, lean_object* v___y_1914_, lean_object* v___y_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_){
_start:
{
lean_object* v_res_1920_; 
v_res_1920_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__1___lam__0(v___x_1908_, v_goal_1909_, v_fuel_1910_, v_x_1911_, v_h_1912_, v___y_1913_, v___y_1914_, v___y_1915_, v___y_1916_, v___y_1917_, v___y_1918_);
lean_dec(v___y_1918_);
lean_dec_ref(v___y_1917_);
lean_dec(v___y_1916_);
lean_dec_ref(v___y_1915_);
lean_dec(v___y_1914_);
lean_dec_ref(v___y_1913_);
lean_dec(v_x_1911_);
return v_res_1920_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__1(lean_object* v_facts_1921_, lean_object* v_goal_1922_, lean_object* v_fuel_1923_, lean_object* v_as_1924_, size_t v_sz_1925_, size_t v_i_1926_, lean_object* v_b_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_, lean_object* v___y_1931_, lean_object* v___y_1932_, lean_object* v___y_1933_){
_start:
{
uint8_t v___x_1935_; 
v___x_1935_ = lean_usize_dec_lt(v_i_1926_, v_sz_1925_);
if (v___x_1935_ == 0)
{
lean_object* v___x_1936_; 
lean_dec(v_fuel_1923_);
lean_dec_ref(v_goal_1922_);
lean_dec_ref(v_facts_1921_);
v___x_1936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1936_, 0, v_b_1927_);
return v___x_1936_;
}
else
{
lean_object* v_a_1937_; lean_object* v_fst_1938_; lean_object* v_snd_1939_; lean_object* v___x_1941_; uint8_t v_isShared_1942_; uint8_t v_isSharedCheck_2035_; 
lean_dec_ref(v_b_1927_);
v_a_1937_ = lean_array_uget(v_as_1924_, v_i_1926_);
v_fst_1938_ = lean_ctor_get(v_a_1937_, 0);
v_snd_1939_ = lean_ctor_get(v_a_1937_, 1);
v_isSharedCheck_2035_ = !lean_is_exclusive(v_a_1937_);
if (v_isSharedCheck_2035_ == 0)
{
v___x_1941_ = v_a_1937_;
v_isShared_1942_ = v_isSharedCheck_2035_;
goto v_resetjp_1940_;
}
else
{
lean_inc(v_snd_1939_);
lean_inc(v_fst_1938_);
lean_dec(v_a_1937_);
v___x_1941_ = lean_box(0);
v_isShared_1942_ = v_isSharedCheck_2035_;
goto v_resetjp_1940_;
}
v_resetjp_1940_:
{
lean_object* v___x_1943_; 
lean_inc(v___y_1933_);
lean_inc_ref(v___y_1932_);
lean_inc(v___y_1931_);
lean_inc_ref(v___y_1930_);
lean_inc(v_fst_1938_);
v___x_1943_ = lean_infer_type(v_fst_1938_, v___y_1930_, v___y_1931_, v___y_1932_, v___y_1933_);
if (lean_obj_tag(v___x_1943_) == 0)
{
lean_object* v_a_1944_; lean_object* v___x_1945_; 
v_a_1944_ = lean_ctor_get(v___x_1943_, 0);
lean_inc(v_a_1944_);
lean_dec_ref_known(v___x_1943_, 1);
v___x_1945_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_a_1944_, v___y_1931_);
if (lean_obj_tag(v___x_1945_) == 0)
{
lean_object* v_a_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; uint8_t v___x_1951_; 
v_a_1946_ = lean_ctor_get(v___x_1945_, 0);
lean_inc(v_a_1946_);
lean_dec_ref_known(v___x_1945_, 1);
v___x_1947_ = lean_box(0);
v___x_1948_ = lean_unsigned_to_nat(0u);
v___x_1949_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__1___closed__1));
v___x_1950_ = lean_unsigned_to_nat(2u);
v___x_1951_ = l_Lean_Expr_isAppOfArity(v_a_1946_, v___x_1949_, v___x_1950_);
if (v___x_1951_ == 0)
{
lean_object* v___x_1952_; lean_object* v___x_1953_; uint8_t v___x_1954_; 
v___x_1952_ = lean_box(0);
v___x_1953_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__0___redArg___closed__2));
v___x_1954_ = l_Lean_Expr_isAppOfArity(v_a_1946_, v___x_1953_, v___x_1950_);
if (v___x_1954_ == 0)
{
lean_object* v___x_1955_; size_t v___x_1956_; size_t v___x_1957_; 
lean_dec(v_a_1946_);
lean_del_object(v___x_1941_);
lean_dec(v_snd_1939_);
lean_dec(v_fst_1938_);
v___x_1955_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__1_spec__1___closed__0));
v___x_1956_ = ((size_t)1ULL);
v___x_1957_ = lean_usize_add(v_i_1926_, v___x_1956_);
v_i_1926_ = v___x_1957_;
v_b_1927_ = v___x_1955_;
goto _start;
}
else
{
lean_object* v___x_1959_; lean_object* v___f_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; 
v___x_1959_ = l_Array_eraseIdx_x21___redArg(v_facts_1921_, v_snd_1939_);
v___f_1960_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__1___lam__0___boxed), 12, 3);
lean_closure_set(v___f_1960_, 0, v___x_1959_);
lean_closure_set(v___f_1960_, 1, v_goal_1922_);
lean_closure_set(v___f_1960_, 2, v_fuel_1923_);
v___x_1961_ = lp_vampireReplay_Vampire_Reconstruct_junctionParts(v___x_1953_, v_a_1946_);
v___x_1962_ = lp_vampireReplay_Vampire_Reconstruct_elimGiven(v___x_1961_, v___f_1960_, v_fst_1938_, v___x_1948_, v___x_1952_, v___y_1928_, v___y_1929_, v___y_1930_, v___y_1931_, v___y_1932_, v___y_1933_);
lean_dec_ref(v___x_1961_);
if (lean_obj_tag(v___x_1962_) == 0)
{
lean_object* v_a_1963_; lean_object* v___x_1965_; uint8_t v_isShared_1966_; uint8_t v_isSharedCheck_1974_; 
v_a_1963_ = lean_ctor_get(v___x_1962_, 0);
v_isSharedCheck_1974_ = !lean_is_exclusive(v___x_1962_);
if (v_isSharedCheck_1974_ == 0)
{
v___x_1965_ = v___x_1962_;
v_isShared_1966_ = v_isSharedCheck_1974_;
goto v_resetjp_1964_;
}
else
{
lean_inc(v_a_1963_);
lean_dec(v___x_1962_);
v___x_1965_ = lean_box(0);
v_isShared_1966_ = v_isSharedCheck_1974_;
goto v_resetjp_1964_;
}
v_resetjp_1964_:
{
lean_object* v___x_1967_; lean_object* v___x_1969_; 
v___x_1967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1967_, 0, v_a_1963_);
if (v_isShared_1942_ == 0)
{
lean_ctor_set(v___x_1941_, 1, v___x_1947_);
lean_ctor_set(v___x_1941_, 0, v___x_1967_);
v___x_1969_ = v___x_1941_;
goto v_reusejp_1968_;
}
else
{
lean_object* v_reuseFailAlloc_1973_; 
v_reuseFailAlloc_1973_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1973_, 0, v___x_1967_);
lean_ctor_set(v_reuseFailAlloc_1973_, 1, v___x_1947_);
v___x_1969_ = v_reuseFailAlloc_1973_;
goto v_reusejp_1968_;
}
v_reusejp_1968_:
{
lean_object* v___x_1971_; 
if (v_isShared_1966_ == 0)
{
lean_ctor_set(v___x_1965_, 0, v___x_1969_);
v___x_1971_ = v___x_1965_;
goto v_reusejp_1970_;
}
else
{
lean_object* v_reuseFailAlloc_1972_; 
v_reuseFailAlloc_1972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1972_, 0, v___x_1969_);
v___x_1971_ = v_reuseFailAlloc_1972_;
goto v_reusejp_1970_;
}
v_reusejp_1970_:
{
return v___x_1971_;
}
}
}
}
else
{
lean_object* v_a_1975_; lean_object* v___x_1977_; uint8_t v_isShared_1978_; uint8_t v_isSharedCheck_1982_; 
lean_del_object(v___x_1941_);
v_a_1975_ = lean_ctor_get(v___x_1962_, 0);
v_isSharedCheck_1982_ = !lean_is_exclusive(v___x_1962_);
if (v_isSharedCheck_1982_ == 0)
{
v___x_1977_ = v___x_1962_;
v_isShared_1978_ = v_isSharedCheck_1982_;
goto v_resetjp_1976_;
}
else
{
lean_inc(v_a_1975_);
lean_dec(v___x_1962_);
v___x_1977_ = lean_box(0);
v_isShared_1978_ = v_isSharedCheck_1982_;
goto v_resetjp_1976_;
}
v_resetjp_1976_:
{
lean_object* v___x_1980_; 
if (v_isShared_1978_ == 0)
{
v___x_1980_ = v___x_1977_;
goto v_reusejp_1979_;
}
else
{
lean_object* v_reuseFailAlloc_1981_; 
v_reuseFailAlloc_1981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1981_, 0, v_a_1975_);
v___x_1980_ = v_reuseFailAlloc_1981_;
goto v_reusejp_1979_;
}
v_reusejp_1979_:
{
return v___x_1980_;
}
}
}
}
}
else
{
lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; 
v___x_1983_ = l_Array_eraseIdx_x21___redArg(v_facts_1921_, v_snd_1939_);
v___x_1984_ = lp_vampireReplay_Vampire_Reconstruct_junctionParts(v___x_1949_, v_a_1946_);
v___x_1985_ = lean_array_get_size(v___x_1984_);
v___x_1986_ = lean_unsigned_to_nat(1u);
v___x_1987_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1987_, 0, v___x_1948_);
lean_ctor_set(v___x_1987_, 1, v___x_1985_);
lean_ctor_set(v___x_1987_, 2, v___x_1986_);
v___x_1988_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_byArithmetic_spec__0___redArg(v___x_1984_, v_fst_1938_, v___x_1987_, v___x_1983_, v___x_1948_, v___y_1928_, v___y_1929_, v___y_1930_, v___y_1931_, v___y_1932_, v___y_1933_);
lean_dec_ref_known(v___x_1987_, 3);
lean_dec_ref(v___x_1984_);
if (lean_obj_tag(v___x_1988_) == 0)
{
lean_object* v_a_1989_; lean_object* v___x_1990_; 
v_a_1989_ = lean_ctor_get(v___x_1988_, 0);
lean_inc(v_a_1989_);
lean_dec_ref_known(v___x_1988_, 1);
v___x_1990_ = lp_vampireReplay_Vampire_Reconstruct_byArithmetic(v_a_1989_, v_goal_1922_, v_fuel_1923_, v___y_1928_, v___y_1929_, v___y_1930_, v___y_1931_, v___y_1932_, v___y_1933_);
if (lean_obj_tag(v___x_1990_) == 0)
{
lean_object* v_a_1991_; lean_object* v___x_1993_; uint8_t v_isShared_1994_; uint8_t v_isSharedCheck_2002_; 
v_a_1991_ = lean_ctor_get(v___x_1990_, 0);
v_isSharedCheck_2002_ = !lean_is_exclusive(v___x_1990_);
if (v_isSharedCheck_2002_ == 0)
{
v___x_1993_ = v___x_1990_;
v_isShared_1994_ = v_isSharedCheck_2002_;
goto v_resetjp_1992_;
}
else
{
lean_inc(v_a_1991_);
lean_dec(v___x_1990_);
v___x_1993_ = lean_box(0);
v_isShared_1994_ = v_isSharedCheck_2002_;
goto v_resetjp_1992_;
}
v_resetjp_1992_:
{
lean_object* v___x_1995_; lean_object* v___x_1997_; 
v___x_1995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1995_, 0, v_a_1991_);
if (v_isShared_1942_ == 0)
{
lean_ctor_set(v___x_1941_, 1, v___x_1947_);
lean_ctor_set(v___x_1941_, 0, v___x_1995_);
v___x_1997_ = v___x_1941_;
goto v_reusejp_1996_;
}
else
{
lean_object* v_reuseFailAlloc_2001_; 
v_reuseFailAlloc_2001_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2001_, 0, v___x_1995_);
lean_ctor_set(v_reuseFailAlloc_2001_, 1, v___x_1947_);
v___x_1997_ = v_reuseFailAlloc_2001_;
goto v_reusejp_1996_;
}
v_reusejp_1996_:
{
lean_object* v___x_1999_; 
if (v_isShared_1994_ == 0)
{
lean_ctor_set(v___x_1993_, 0, v___x_1997_);
v___x_1999_ = v___x_1993_;
goto v_reusejp_1998_;
}
else
{
lean_object* v_reuseFailAlloc_2000_; 
v_reuseFailAlloc_2000_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2000_, 0, v___x_1997_);
v___x_1999_ = v_reuseFailAlloc_2000_;
goto v_reusejp_1998_;
}
v_reusejp_1998_:
{
return v___x_1999_;
}
}
}
}
else
{
lean_object* v_a_2003_; lean_object* v___x_2005_; uint8_t v_isShared_2006_; uint8_t v_isSharedCheck_2010_; 
lean_del_object(v___x_1941_);
v_a_2003_ = lean_ctor_get(v___x_1990_, 0);
v_isSharedCheck_2010_ = !lean_is_exclusive(v___x_1990_);
if (v_isSharedCheck_2010_ == 0)
{
v___x_2005_ = v___x_1990_;
v_isShared_2006_ = v_isSharedCheck_2010_;
goto v_resetjp_2004_;
}
else
{
lean_inc(v_a_2003_);
lean_dec(v___x_1990_);
v___x_2005_ = lean_box(0);
v_isShared_2006_ = v_isSharedCheck_2010_;
goto v_resetjp_2004_;
}
v_resetjp_2004_:
{
lean_object* v___x_2008_; 
if (v_isShared_2006_ == 0)
{
v___x_2008_ = v___x_2005_;
goto v_reusejp_2007_;
}
else
{
lean_object* v_reuseFailAlloc_2009_; 
v_reuseFailAlloc_2009_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2009_, 0, v_a_2003_);
v___x_2008_ = v_reuseFailAlloc_2009_;
goto v_reusejp_2007_;
}
v_reusejp_2007_:
{
return v___x_2008_;
}
}
}
}
else
{
lean_object* v_a_2011_; lean_object* v___x_2013_; uint8_t v_isShared_2014_; uint8_t v_isSharedCheck_2018_; 
lean_del_object(v___x_1941_);
lean_dec(v_fuel_1923_);
lean_dec_ref(v_goal_1922_);
v_a_2011_ = lean_ctor_get(v___x_1988_, 0);
v_isSharedCheck_2018_ = !lean_is_exclusive(v___x_1988_);
if (v_isSharedCheck_2018_ == 0)
{
v___x_2013_ = v___x_1988_;
v_isShared_2014_ = v_isSharedCheck_2018_;
goto v_resetjp_2012_;
}
else
{
lean_inc(v_a_2011_);
lean_dec(v___x_1988_);
v___x_2013_ = lean_box(0);
v_isShared_2014_ = v_isSharedCheck_2018_;
goto v_resetjp_2012_;
}
v_resetjp_2012_:
{
lean_object* v___x_2016_; 
if (v_isShared_2014_ == 0)
{
v___x_2016_ = v___x_2013_;
goto v_reusejp_2015_;
}
else
{
lean_object* v_reuseFailAlloc_2017_; 
v_reuseFailAlloc_2017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2017_, 0, v_a_2011_);
v___x_2016_ = v_reuseFailAlloc_2017_;
goto v_reusejp_2015_;
}
v_reusejp_2015_:
{
return v___x_2016_;
}
}
}
}
}
else
{
lean_object* v_a_2019_; lean_object* v___x_2021_; uint8_t v_isShared_2022_; uint8_t v_isSharedCheck_2026_; 
lean_del_object(v___x_1941_);
lean_dec(v_snd_1939_);
lean_dec(v_fst_1938_);
lean_dec(v_fuel_1923_);
lean_dec_ref(v_goal_1922_);
lean_dec_ref(v_facts_1921_);
v_a_2019_ = lean_ctor_get(v___x_1945_, 0);
v_isSharedCheck_2026_ = !lean_is_exclusive(v___x_1945_);
if (v_isSharedCheck_2026_ == 0)
{
v___x_2021_ = v___x_1945_;
v_isShared_2022_ = v_isSharedCheck_2026_;
goto v_resetjp_2020_;
}
else
{
lean_inc(v_a_2019_);
lean_dec(v___x_1945_);
v___x_2021_ = lean_box(0);
v_isShared_2022_ = v_isSharedCheck_2026_;
goto v_resetjp_2020_;
}
v_resetjp_2020_:
{
lean_object* v___x_2024_; 
if (v_isShared_2022_ == 0)
{
v___x_2024_ = v___x_2021_;
goto v_reusejp_2023_;
}
else
{
lean_object* v_reuseFailAlloc_2025_; 
v_reuseFailAlloc_2025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2025_, 0, v_a_2019_);
v___x_2024_ = v_reuseFailAlloc_2025_;
goto v_reusejp_2023_;
}
v_reusejp_2023_:
{
return v___x_2024_;
}
}
}
}
else
{
lean_object* v_a_2027_; lean_object* v___x_2029_; uint8_t v_isShared_2030_; uint8_t v_isSharedCheck_2034_; 
lean_del_object(v___x_1941_);
lean_dec(v_snd_1939_);
lean_dec(v_fst_1938_);
lean_dec(v_fuel_1923_);
lean_dec_ref(v_goal_1922_);
lean_dec_ref(v_facts_1921_);
v_a_2027_ = lean_ctor_get(v___x_1943_, 0);
v_isSharedCheck_2034_ = !lean_is_exclusive(v___x_1943_);
if (v_isSharedCheck_2034_ == 0)
{
v___x_2029_ = v___x_1943_;
v_isShared_2030_ = v_isSharedCheck_2034_;
goto v_resetjp_2028_;
}
else
{
lean_inc(v_a_2027_);
lean_dec(v___x_1943_);
v___x_2029_ = lean_box(0);
v_isShared_2030_ = v_isSharedCheck_2034_;
goto v_resetjp_2028_;
}
v_resetjp_2028_:
{
lean_object* v___x_2032_; 
if (v_isShared_2030_ == 0)
{
v___x_2032_ = v___x_2029_;
goto v_reusejp_2031_;
}
else
{
lean_object* v_reuseFailAlloc_2033_; 
v_reuseFailAlloc_2033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2033_, 0, v_a_2027_);
v___x_2032_ = v_reuseFailAlloc_2033_;
goto v_reusejp_2031_;
}
v_reusejp_2031_:
{
return v___x_2032_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__4(lean_object* v_facts_2041_, lean_object* v_fuel_2042_, lean_object* v_as_2043_, size_t v_sz_2044_, size_t v_i_2045_, lean_object* v_b_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_, lean_object* v___y_2051_, lean_object* v___y_2052_){
_start:
{
lean_object* v_a_2055_; uint8_t v___x_2059_; 
v___x_2059_ = lean_usize_dec_lt(v_i_2045_, v_sz_2044_);
if (v___x_2059_ == 0)
{
lean_object* v___x_2060_; 
lean_dec_ref(v_facts_2041_);
v___x_2060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2060_, 0, v_b_2046_);
return v___x_2060_;
}
else
{
lean_object* v_a_2061_; lean_object* v_fst_2062_; lean_object* v_snd_2063_; lean_object* v___x_2065_; uint8_t v_isShared_2066_; uint8_t v_isSharedCheck_2143_; 
lean_dec_ref(v_b_2046_);
v_a_2061_ = lean_array_uget(v_as_2043_, v_i_2045_);
v_fst_2062_ = lean_ctor_get(v_a_2061_, 0);
v_snd_2063_ = lean_ctor_get(v_a_2061_, 1);
v_isSharedCheck_2143_ = !lean_is_exclusive(v_a_2061_);
if (v_isSharedCheck_2143_ == 0)
{
v___x_2065_ = v_a_2061_;
v_isShared_2066_ = v_isSharedCheck_2143_;
goto v_resetjp_2064_;
}
else
{
lean_inc(v_snd_2063_);
lean_inc(v_fst_2062_);
lean_dec(v_a_2061_);
v___x_2065_ = lean_box(0);
v_isShared_2066_ = v_isSharedCheck_2143_;
goto v_resetjp_2064_;
}
v_resetjp_2064_:
{
lean_object* v___x_2067_; 
lean_inc(v___y_2052_);
lean_inc_ref(v___y_2051_);
lean_inc(v___y_2050_);
lean_inc_ref(v___y_2049_);
lean_inc(v_fst_2062_);
v___x_2067_ = lean_infer_type(v_fst_2062_, v___y_2049_, v___y_2050_, v___y_2051_, v___y_2052_);
if (lean_obj_tag(v___x_2067_) == 0)
{
lean_object* v_a_2068_; lean_object* v___x_2069_; 
v_a_2068_ = lean_ctor_get(v___x_2067_, 0);
lean_inc(v_a_2068_);
lean_dec_ref_known(v___x_2067_, 1);
v___x_2069_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_a_2068_, v___y_2050_);
if (lean_obj_tag(v___x_2069_) == 0)
{
lean_object* v_a_2070_; lean_object* v___x_2072_; uint8_t v_isShared_2073_; uint8_t v_isSharedCheck_2126_; 
v_a_2070_ = lean_ctor_get(v___x_2069_, 0);
v_isSharedCheck_2126_ = !lean_is_exclusive(v___x_2069_);
if (v_isSharedCheck_2126_ == 0)
{
v___x_2072_ = v___x_2069_;
v_isShared_2073_ = v_isSharedCheck_2126_;
goto v_resetjp_2071_;
}
else
{
lean_inc(v_a_2070_);
lean_dec(v___x_2069_);
v___x_2072_ = lean_box(0);
v_isShared_2073_ = v_isSharedCheck_2126_;
goto v_resetjp_2071_;
}
v_resetjp_2071_:
{
lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___y_2077_; uint8_t v___y_2078_; lean_object* v_a_2083_; lean_object* v___x_2086_; lean_object* v___x_2087_; uint8_t v___x_2088_; 
v___x_2074_ = lean_box(0);
v___x_2075_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__1_spec__1___closed__0));
v___x_2086_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__3));
v___x_2087_ = lean_unsigned_to_nat(1u);
v___x_2088_ = l_Lean_Expr_isAppOfArity(v_a_2070_, v___x_2086_, v___x_2087_);
if (v___x_2088_ == 0)
{
lean_del_object(v___x_2072_);
lean_dec(v_a_2070_);
lean_del_object(v___x_2065_);
lean_dec(v_snd_2063_);
lean_dec(v_fst_2062_);
v_a_2055_ = v___x_2075_;
goto v___jp_2054_;
}
else
{
lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; 
v___x_2089_ = l_Lean_Expr_appArg_x21(v_a_2070_);
lean_dec(v_a_2070_);
lean_inc_ref(v___x_2089_);
v___x_2090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2090_, 0, v___x_2089_);
lean_inc_ref(v_facts_2041_);
v___x_2091_ = l_Array_eraseIdx_x21___redArg(v_facts_2041_, v_snd_2063_);
v___x_2092_ = lean_nat_sub(v_fuel_2042_, v___x_2087_);
v___x_2093_ = lp_vampireReplay_Vampire_Reconstruct_byArithmetic(v___x_2091_, v___x_2089_, v___x_2092_, v___y_2047_, v___y_2048_, v___y_2049_, v___y_2050_, v___y_2051_, v___y_2052_);
if (lean_obj_tag(v___x_2093_) == 0)
{
lean_object* v_a_2094_; lean_object* v___x_2096_; uint8_t v_isShared_2097_; uint8_t v_isSharedCheck_2124_; 
v_a_2094_ = lean_ctor_get(v___x_2093_, 0);
v_isSharedCheck_2124_ = !lean_is_exclusive(v___x_2093_);
if (v_isSharedCheck_2124_ == 0)
{
v___x_2096_ = v___x_2093_;
v_isShared_2097_ = v_isSharedCheck_2124_;
goto v_resetjp_2095_;
}
else
{
lean_inc(v_a_2094_);
lean_dec(v___x_2093_);
v___x_2096_ = lean_box(0);
v_isShared_2097_ = v_isSharedCheck_2124_;
goto v_resetjp_2095_;
}
v_resetjp_2095_:
{
lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2101_; 
v___x_2098_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg___closed__1));
v___x_2099_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__2___redArg___closed__3, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__2___redArg___closed__3_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__2___redArg___closed__3);
if (v_isShared_2097_ == 0)
{
lean_ctor_set_tag(v___x_2096_, 1);
v___x_2101_ = v___x_2096_;
goto v_reusejp_2100_;
}
else
{
lean_object* v_reuseFailAlloc_2123_; 
v_reuseFailAlloc_2123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2123_, 0, v_a_2094_);
v___x_2101_ = v_reuseFailAlloc_2123_;
goto v_reusejp_2100_;
}
v_reusejp_2100_:
{
lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; 
v___x_2102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2102_, 0, v_fst_2062_);
v___x_2103_ = lean_unsigned_to_nat(4u);
v___x_2104_ = lean_mk_empty_array_with_capacity(v___x_2103_);
v___x_2105_ = lean_array_push(v___x_2104_, v___x_2090_);
v___x_2106_ = lean_array_push(v___x_2105_, v___x_2099_);
v___x_2107_ = lean_array_push(v___x_2106_, v___x_2101_);
v___x_2108_ = lean_array_push(v___x_2107_, v___x_2102_);
v___x_2109_ = l_Lean_Meta_mkAppOptM(v___x_2098_, v___x_2108_, v___y_2049_, v___y_2050_, v___y_2051_, v___y_2052_);
if (lean_obj_tag(v___x_2109_) == 0)
{
lean_object* v_a_2110_; lean_object* v___x_2112_; uint8_t v_isShared_2113_; uint8_t v_isSharedCheck_2121_; 
lean_del_object(v___x_2072_);
lean_dec_ref(v_facts_2041_);
v_a_2110_ = lean_ctor_get(v___x_2109_, 0);
v_isSharedCheck_2121_ = !lean_is_exclusive(v___x_2109_);
if (v_isSharedCheck_2121_ == 0)
{
v___x_2112_ = v___x_2109_;
v_isShared_2113_ = v_isSharedCheck_2121_;
goto v_resetjp_2111_;
}
else
{
lean_inc(v_a_2110_);
lean_dec(v___x_2109_);
v___x_2112_ = lean_box(0);
v_isShared_2113_ = v_isSharedCheck_2121_;
goto v_resetjp_2111_;
}
v_resetjp_2111_:
{
lean_object* v___x_2114_; lean_object* v___x_2116_; 
v___x_2114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2114_, 0, v_a_2110_);
if (v_isShared_2066_ == 0)
{
lean_ctor_set(v___x_2065_, 1, v___x_2074_);
lean_ctor_set(v___x_2065_, 0, v___x_2114_);
v___x_2116_ = v___x_2065_;
goto v_reusejp_2115_;
}
else
{
lean_object* v_reuseFailAlloc_2120_; 
v_reuseFailAlloc_2120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2120_, 0, v___x_2114_);
lean_ctor_set(v_reuseFailAlloc_2120_, 1, v___x_2074_);
v___x_2116_ = v_reuseFailAlloc_2120_;
goto v_reusejp_2115_;
}
v_reusejp_2115_:
{
lean_object* v___x_2118_; 
if (v_isShared_2113_ == 0)
{
lean_ctor_set(v___x_2112_, 0, v___x_2116_);
v___x_2118_ = v___x_2112_;
goto v_reusejp_2117_;
}
else
{
lean_object* v_reuseFailAlloc_2119_; 
v_reuseFailAlloc_2119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2119_, 0, v___x_2116_);
v___x_2118_ = v_reuseFailAlloc_2119_;
goto v_reusejp_2117_;
}
v_reusejp_2117_:
{
return v___x_2118_;
}
}
}
}
else
{
lean_object* v_a_2122_; 
lean_del_object(v___x_2065_);
v_a_2122_ = lean_ctor_get(v___x_2109_, 0);
lean_inc(v_a_2122_);
lean_dec_ref_known(v___x_2109_, 1);
v_a_2083_ = v_a_2122_;
goto v___jp_2082_;
}
}
}
}
else
{
lean_object* v_a_2125_; 
lean_dec_ref_known(v___x_2090_, 1);
lean_del_object(v___x_2065_);
lean_dec(v_fst_2062_);
v_a_2125_ = lean_ctor_get(v___x_2093_, 0);
lean_inc(v_a_2125_);
lean_dec_ref_known(v___x_2093_, 1);
v_a_2083_ = v_a_2125_;
goto v___jp_2082_;
}
}
v___jp_2076_:
{
if (v___y_2078_ == 0)
{
lean_dec_ref(v___y_2077_);
lean_del_object(v___x_2072_);
v_a_2055_ = v___x_2075_;
goto v___jp_2054_;
}
else
{
lean_object* v___x_2080_; 
lean_dec_ref(v_facts_2041_);
if (v_isShared_2073_ == 0)
{
lean_ctor_set_tag(v___x_2072_, 1);
lean_ctor_set(v___x_2072_, 0, v___y_2077_);
v___x_2080_ = v___x_2072_;
goto v_reusejp_2079_;
}
else
{
lean_object* v_reuseFailAlloc_2081_; 
v_reuseFailAlloc_2081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2081_, 0, v___y_2077_);
v___x_2080_ = v_reuseFailAlloc_2081_;
goto v_reusejp_2079_;
}
v_reusejp_2079_:
{
return v___x_2080_;
}
}
}
v___jp_2082_:
{
uint8_t v___x_2084_; 
v___x_2084_ = l_Lean_Exception_isInterrupt(v_a_2083_);
if (v___x_2084_ == 0)
{
uint8_t v___x_2085_; 
lean_inc_ref(v_a_2083_);
v___x_2085_ = l_Lean_Exception_isRuntime(v_a_2083_);
v___y_2077_ = v_a_2083_;
v___y_2078_ = v___x_2085_;
goto v___jp_2076_;
}
else
{
v___y_2077_ = v_a_2083_;
v___y_2078_ = v___x_2084_;
goto v___jp_2076_;
}
}
}
}
else
{
lean_object* v_a_2127_; lean_object* v___x_2129_; uint8_t v_isShared_2130_; uint8_t v_isSharedCheck_2134_; 
lean_del_object(v___x_2065_);
lean_dec(v_snd_2063_);
lean_dec(v_fst_2062_);
lean_dec_ref(v_facts_2041_);
v_a_2127_ = lean_ctor_get(v___x_2069_, 0);
v_isSharedCheck_2134_ = !lean_is_exclusive(v___x_2069_);
if (v_isSharedCheck_2134_ == 0)
{
v___x_2129_ = v___x_2069_;
v_isShared_2130_ = v_isSharedCheck_2134_;
goto v_resetjp_2128_;
}
else
{
lean_inc(v_a_2127_);
lean_dec(v___x_2069_);
v___x_2129_ = lean_box(0);
v_isShared_2130_ = v_isSharedCheck_2134_;
goto v_resetjp_2128_;
}
v_resetjp_2128_:
{
lean_object* v___x_2132_; 
if (v_isShared_2130_ == 0)
{
v___x_2132_ = v___x_2129_;
goto v_reusejp_2131_;
}
else
{
lean_object* v_reuseFailAlloc_2133_; 
v_reuseFailAlloc_2133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2133_, 0, v_a_2127_);
v___x_2132_ = v_reuseFailAlloc_2133_;
goto v_reusejp_2131_;
}
v_reusejp_2131_:
{
return v___x_2132_;
}
}
}
}
else
{
lean_object* v_a_2135_; lean_object* v___x_2137_; uint8_t v_isShared_2138_; uint8_t v_isSharedCheck_2142_; 
lean_del_object(v___x_2065_);
lean_dec(v_snd_2063_);
lean_dec(v_fst_2062_);
lean_dec_ref(v_facts_2041_);
v_a_2135_ = lean_ctor_get(v___x_2067_, 0);
v_isSharedCheck_2142_ = !lean_is_exclusive(v___x_2067_);
if (v_isSharedCheck_2142_ == 0)
{
v___x_2137_ = v___x_2067_;
v_isShared_2138_ = v_isSharedCheck_2142_;
goto v_resetjp_2136_;
}
else
{
lean_inc(v_a_2135_);
lean_dec(v___x_2067_);
v___x_2137_ = lean_box(0);
v_isShared_2138_ = v_isSharedCheck_2142_;
goto v_resetjp_2136_;
}
v_resetjp_2136_:
{
lean_object* v___x_2140_; 
if (v_isShared_2138_ == 0)
{
v___x_2140_ = v___x_2137_;
goto v_reusejp_2139_;
}
else
{
lean_object* v_reuseFailAlloc_2141_; 
v_reuseFailAlloc_2141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2141_, 0, v_a_2135_);
v___x_2140_ = v_reuseFailAlloc_2141_;
goto v_reusejp_2139_;
}
v_reusejp_2139_:
{
return v___x_2140_;
}
}
}
}
}
v___jp_2054_:
{
size_t v___x_2056_; size_t v___x_2057_; 
v___x_2056_ = ((size_t)1ULL);
v___x_2057_ = lean_usize_add(v_i_2045_, v___x_2056_);
lean_inc_ref(v_a_2055_);
v_i_2045_ = v___x_2057_;
v_b_2046_ = v_a_2055_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__7(lean_object* v_facts_2144_, lean_object* v_fuel_2145_, lean_object* v___x_2146_, lean_object* v_as_2147_, size_t v_sz_2148_, size_t v_i_2149_, lean_object* v_b_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_, lean_object* v___y_2154_, lean_object* v___y_2155_, lean_object* v___y_2156_){
_start:
{
uint8_t v___x_2158_; 
v___x_2158_ = lean_usize_dec_lt(v_i_2149_, v_sz_2148_);
if (v___x_2158_ == 0)
{
lean_object* v___x_2159_; 
lean_dec(v_fuel_2145_);
lean_dec_ref(v_facts_2144_);
v___x_2159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2159_, 0, v_b_2150_);
return v___x_2159_;
}
else
{
lean_object* v_a_2160_; lean_object* v_fst_2161_; lean_object* v_snd_2162_; lean_object* v___x_2164_; uint8_t v_isShared_2165_; uint8_t v_isSharedCheck_2202_; 
lean_dec_ref(v_b_2150_);
v_a_2160_ = lean_array_uget(v_as_2147_, v_i_2149_);
v_fst_2161_ = lean_ctor_get(v_a_2160_, 0);
v_snd_2162_ = lean_ctor_get(v_a_2160_, 1);
v_isSharedCheck_2202_ = !lean_is_exclusive(v_a_2160_);
if (v_isSharedCheck_2202_ == 0)
{
v___x_2164_ = v_a_2160_;
v_isShared_2165_ = v_isSharedCheck_2202_;
goto v_resetjp_2163_;
}
else
{
lean_inc(v_snd_2162_);
lean_inc(v_fst_2161_);
lean_dec(v_a_2160_);
v___x_2164_ = lean_box(0);
v_isShared_2165_ = v_isSharedCheck_2202_;
goto v_resetjp_2163_;
}
v_resetjp_2163_:
{
lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___y_2169_; uint8_t v___y_2170_; lean_object* v_a_2176_; lean_object* v___x_2179_; 
v___x_2166_ = lean_box(0);
v___x_2167_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__1_spec__1___closed__0));
lean_inc(v_fuel_2145_);
lean_inc_ref(v_facts_2144_);
v___x_2179_ = lp_vampireReplay_Vampire_Reconstruct_byArithmetic(v_facts_2144_, v_fst_2161_, v_fuel_2145_, v___y_2151_, v___y_2152_, v___y_2153_, v___y_2154_, v___y_2155_, v___y_2156_);
if (lean_obj_tag(v___x_2179_) == 0)
{
lean_object* v_a_2180_; lean_object* v___x_2182_; uint8_t v_isShared_2183_; uint8_t v_isSharedCheck_2200_; 
v_a_2180_ = lean_ctor_get(v___x_2179_, 0);
v_isSharedCheck_2200_ = !lean_is_exclusive(v___x_2179_);
if (v_isSharedCheck_2200_ == 0)
{
v___x_2182_ = v___x_2179_;
v_isShared_2183_ = v_isSharedCheck_2200_;
goto v_resetjp_2181_;
}
else
{
lean_inc(v_a_2180_);
lean_dec(v___x_2179_);
v___x_2182_ = lean_box(0);
v_isShared_2183_ = v_isSharedCheck_2200_;
goto v_resetjp_2181_;
}
v_resetjp_2181_:
{
lean_object* v___x_2184_; 
v___x_2184_ = lp_vampireReplay_Vampire_Reconstruct_injectGiven(v___x_2146_, v_snd_2162_, v_a_2180_, v___y_2151_, v___y_2152_, v___y_2153_, v___y_2154_, v___y_2155_, v___y_2156_);
if (lean_obj_tag(v___x_2184_) == 0)
{
lean_object* v_a_2185_; lean_object* v___x_2187_; uint8_t v_isShared_2188_; uint8_t v_isSharedCheck_2198_; 
lean_dec(v_fuel_2145_);
lean_dec_ref(v_facts_2144_);
v_a_2185_ = lean_ctor_get(v___x_2184_, 0);
v_isSharedCheck_2198_ = !lean_is_exclusive(v___x_2184_);
if (v_isSharedCheck_2198_ == 0)
{
v___x_2187_ = v___x_2184_;
v_isShared_2188_ = v_isSharedCheck_2198_;
goto v_resetjp_2186_;
}
else
{
lean_inc(v_a_2185_);
lean_dec(v___x_2184_);
v___x_2187_ = lean_box(0);
v_isShared_2188_ = v_isSharedCheck_2198_;
goto v_resetjp_2186_;
}
v_resetjp_2186_:
{
lean_object* v___x_2190_; 
if (v_isShared_2183_ == 0)
{
lean_ctor_set_tag(v___x_2182_, 1);
lean_ctor_set(v___x_2182_, 0, v_a_2185_);
v___x_2190_ = v___x_2182_;
goto v_reusejp_2189_;
}
else
{
lean_object* v_reuseFailAlloc_2197_; 
v_reuseFailAlloc_2197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2197_, 0, v_a_2185_);
v___x_2190_ = v_reuseFailAlloc_2197_;
goto v_reusejp_2189_;
}
v_reusejp_2189_:
{
lean_object* v___x_2192_; 
if (v_isShared_2165_ == 0)
{
lean_ctor_set(v___x_2164_, 1, v___x_2166_);
lean_ctor_set(v___x_2164_, 0, v___x_2190_);
v___x_2192_ = v___x_2164_;
goto v_reusejp_2191_;
}
else
{
lean_object* v_reuseFailAlloc_2196_; 
v_reuseFailAlloc_2196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2196_, 0, v___x_2190_);
lean_ctor_set(v_reuseFailAlloc_2196_, 1, v___x_2166_);
v___x_2192_ = v_reuseFailAlloc_2196_;
goto v_reusejp_2191_;
}
v_reusejp_2191_:
{
lean_object* v___x_2194_; 
if (v_isShared_2188_ == 0)
{
lean_ctor_set(v___x_2187_, 0, v___x_2192_);
v___x_2194_ = v___x_2187_;
goto v_reusejp_2193_;
}
else
{
lean_object* v_reuseFailAlloc_2195_; 
v_reuseFailAlloc_2195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2195_, 0, v___x_2192_);
v___x_2194_ = v_reuseFailAlloc_2195_;
goto v_reusejp_2193_;
}
v_reusejp_2193_:
{
return v___x_2194_;
}
}
}
}
}
else
{
lean_object* v_a_2199_; 
lean_del_object(v___x_2182_);
lean_del_object(v___x_2164_);
v_a_2199_ = lean_ctor_get(v___x_2184_, 0);
lean_inc(v_a_2199_);
lean_dec_ref_known(v___x_2184_, 1);
v_a_2176_ = v_a_2199_;
goto v___jp_2175_;
}
}
}
else
{
lean_object* v_a_2201_; 
lean_del_object(v___x_2164_);
lean_dec(v_snd_2162_);
v_a_2201_ = lean_ctor_get(v___x_2179_, 0);
lean_inc(v_a_2201_);
lean_dec_ref_known(v___x_2179_, 1);
v_a_2176_ = v_a_2201_;
goto v___jp_2175_;
}
v___jp_2168_:
{
if (v___y_2170_ == 0)
{
size_t v___x_2171_; size_t v___x_2172_; 
lean_dec_ref(v___y_2169_);
v___x_2171_ = ((size_t)1ULL);
v___x_2172_ = lean_usize_add(v_i_2149_, v___x_2171_);
v_i_2149_ = v___x_2172_;
v_b_2150_ = v___x_2167_;
goto _start;
}
else
{
lean_object* v___x_2174_; 
lean_dec(v_fuel_2145_);
lean_dec_ref(v_facts_2144_);
v___x_2174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2174_, 0, v___y_2169_);
return v___x_2174_;
}
}
v___jp_2175_:
{
uint8_t v___x_2177_; 
v___x_2177_ = l_Lean_Exception_isInterrupt(v_a_2176_);
if (v___x_2177_ == 0)
{
uint8_t v___x_2178_; 
lean_inc_ref(v_a_2176_);
v___x_2178_ = l_Lean_Exception_isRuntime(v_a_2176_);
v___y_2169_ = v_a_2176_;
v___y_2170_ = v___x_2178_;
goto v___jp_2168_;
}
else
{
v___y_2169_ = v_a_2176_;
v___y_2170_ = v___x_2177_;
goto v___jp_2168_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_byArithmetic___lam__1(lean_object* v___x_2205_, uint8_t v___x_2206_, lean_object* v___x_2207_, size_t v_sz_2208_, size_t v___x_2209_, lean_object* v_facts_2210_, lean_object* v___x_2211_, lean_object* v_fuel_2212_, lean_object* v___x_2213_, uint8_t v___x_2214_, lean_object* v_h_2215_, lean_object* v___y_2216_, lean_object* v___y_2217_, lean_object* v___y_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_){
_start:
{
lean_object* v___x_2223_; 
lean_inc_ref(v_h_2215_);
v___x_2223_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__8(v___x_2205_, v_h_2215_, v___x_2206_, v___x_2207_, v_sz_2208_, v___x_2209_, v_facts_2210_, v___y_2216_, v___y_2217_, v___y_2218_, v___y_2219_, v___y_2220_, v___y_2221_);
if (lean_obj_tag(v___x_2223_) == 0)
{
lean_object* v_a_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; 
v_a_2224_ = lean_ctor_get(v___x_2223_, 0);
lean_inc(v_a_2224_);
lean_dec_ref_known(v___x_2223_, 1);
v___x_2225_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__2___redArg___closed__1));
v___x_2226_ = l_Lean_Expr_const___override(v___x_2225_, v___x_2211_);
v___x_2227_ = lp_vampireReplay_Vampire_Reconstruct_byArithmetic(v_a_2224_, v___x_2226_, v_fuel_2212_, v___y_2216_, v___y_2217_, v___y_2218_, v___y_2219_, v___y_2220_, v___y_2221_);
if (lean_obj_tag(v___x_2227_) == 0)
{
lean_object* v_a_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; uint8_t v___x_2231_; lean_object* v___x_2232_; 
v_a_2228_ = lean_ctor_get(v___x_2227_, 0);
lean_inc(v_a_2228_);
lean_dec_ref_known(v___x_2227_, 1);
v___x_2229_ = lean_mk_empty_array_with_capacity(v___x_2213_);
v___x_2230_ = lean_array_push(v___x_2229_, v_h_2215_);
v___x_2231_ = 1;
v___x_2232_ = l_Lean_Meta_mkLambdaFVars(v___x_2230_, v_a_2228_, v___x_2206_, v___x_2214_, v___x_2206_, v___x_2214_, v___x_2231_, v___y_2218_, v___y_2219_, v___y_2220_, v___y_2221_);
lean_dec_ref(v___x_2230_);
return v___x_2232_;
}
else
{
lean_dec_ref(v_h_2215_);
return v___x_2227_;
}
}
else
{
lean_object* v_a_2233_; lean_object* v___x_2235_; uint8_t v_isShared_2236_; uint8_t v_isSharedCheck_2240_; 
lean_dec_ref(v_h_2215_);
lean_dec(v_fuel_2212_);
lean_dec(v___x_2211_);
v_a_2233_ = lean_ctor_get(v___x_2223_, 0);
v_isSharedCheck_2240_ = !lean_is_exclusive(v___x_2223_);
if (v_isSharedCheck_2240_ == 0)
{
v___x_2235_ = v___x_2223_;
v_isShared_2236_ = v_isSharedCheck_2240_;
goto v_resetjp_2234_;
}
else
{
lean_inc(v_a_2233_);
lean_dec(v___x_2223_);
v___x_2235_ = lean_box(0);
v_isShared_2236_ = v_isSharedCheck_2240_;
goto v_resetjp_2234_;
}
v_resetjp_2234_:
{
lean_object* v___x_2238_; 
if (v_isShared_2236_ == 0)
{
v___x_2238_ = v___x_2235_;
goto v_reusejp_2237_;
}
else
{
lean_object* v_reuseFailAlloc_2239_; 
v_reuseFailAlloc_2239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2239_, 0, v_a_2233_);
v___x_2238_ = v_reuseFailAlloc_2239_;
goto v_reusejp_2237_;
}
v_reusejp_2237_:
{
return v___x_2238_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_byArithmetic___lam__1___boxed(lean_object** _args){
lean_object* v___x_2241_ = _args[0];
lean_object* v___x_2242_ = _args[1];
lean_object* v___x_2243_ = _args[2];
lean_object* v_sz_2244_ = _args[3];
lean_object* v___x_2245_ = _args[4];
lean_object* v_facts_2246_ = _args[5];
lean_object* v___x_2247_ = _args[6];
lean_object* v_fuel_2248_ = _args[7];
lean_object* v___x_2249_ = _args[8];
lean_object* v___x_2250_ = _args[9];
lean_object* v_h_2251_ = _args[10];
lean_object* v___y_2252_ = _args[11];
lean_object* v___y_2253_ = _args[12];
lean_object* v___y_2254_ = _args[13];
lean_object* v___y_2255_ = _args[14];
lean_object* v___y_2256_ = _args[15];
lean_object* v___y_2257_ = _args[16];
lean_object* v___y_2258_ = _args[17];
_start:
{
uint8_t v___x_68088__boxed_2259_; size_t v_sz_boxed_2260_; size_t v___x_68090__boxed_2261_; uint8_t v___x_68093__boxed_2262_; lean_object* v_res_2263_; 
v___x_68088__boxed_2259_ = lean_unbox(v___x_2242_);
v_sz_boxed_2260_ = lean_unbox_usize(v_sz_2244_);
lean_dec(v_sz_2244_);
v___x_68090__boxed_2261_ = lean_unbox_usize(v___x_2245_);
lean_dec(v___x_2245_);
v___x_68093__boxed_2262_ = lean_unbox(v___x_2250_);
v_res_2263_ = lp_vampireReplay_Vampire_Reconstruct_byArithmetic___lam__1(v___x_2241_, v___x_68088__boxed_2259_, v___x_2243_, v_sz_boxed_2260_, v___x_68090__boxed_2261_, v_facts_2246_, v___x_2247_, v_fuel_2248_, v___x_2249_, v___x_68093__boxed_2262_, v_h_2251_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_, v___y_2257_);
lean_dec(v___y_2257_);
lean_dec_ref(v___y_2256_);
lean_dec(v___y_2255_);
lean_dec_ref(v___y_2254_);
lean_dec(v___y_2253_);
lean_dec_ref(v___y_2252_);
lean_dec(v___x_2249_);
lean_dec_ref(v___x_2243_);
return v_res_2263_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_byArithmetic___lam__2(lean_object* v_facts_2264_, lean_object* v___x_2265_, lean_object* v_fuel_2266_, lean_object* v___x_2267_, uint8_t v___x_2268_, uint8_t v___x_2269_, lean_object* v_h_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_, lean_object* v___y_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_){
_start:
{
lean_object* v___x_2278_; 
lean_inc_ref(v_h_2270_);
v___x_2278_ = lp_vampireReplay_Vampire_Reconstruct_plainly(v_h_2270_, v___y_2271_, v___y_2272_, v___y_2273_, v___y_2274_, v___y_2275_, v___y_2276_);
if (lean_obj_tag(v___x_2278_) == 0)
{
lean_object* v_a_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; 
v_a_2279_ = lean_ctor_get(v___x_2278_, 0);
lean_inc(v_a_2279_);
lean_dec_ref_known(v___x_2278_, 1);
v___x_2280_ = lean_array_push(v_facts_2264_, v_a_2279_);
v___x_2281_ = lp_vampireReplay_Vampire_Reconstruct_byArithmetic(v___x_2280_, v___x_2265_, v_fuel_2266_, v___y_2271_, v___y_2272_, v___y_2273_, v___y_2274_, v___y_2275_, v___y_2276_);
if (lean_obj_tag(v___x_2281_) == 0)
{
lean_object* v_a_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; uint8_t v___x_2285_; lean_object* v___x_2286_; 
v_a_2282_ = lean_ctor_get(v___x_2281_, 0);
lean_inc(v_a_2282_);
lean_dec_ref_known(v___x_2281_, 1);
v___x_2283_ = lean_mk_empty_array_with_capacity(v___x_2267_);
v___x_2284_ = lean_array_push(v___x_2283_, v_h_2270_);
v___x_2285_ = 1;
v___x_2286_ = l_Lean_Meta_mkLambdaFVars(v___x_2284_, v_a_2282_, v___x_2268_, v___x_2269_, v___x_2268_, v___x_2269_, v___x_2285_, v___y_2273_, v___y_2274_, v___y_2275_, v___y_2276_);
lean_dec_ref(v___x_2284_);
return v___x_2286_;
}
else
{
lean_dec_ref(v_h_2270_);
return v___x_2281_;
}
}
else
{
lean_dec_ref(v_h_2270_);
lean_dec(v_fuel_2266_);
lean_dec_ref(v___x_2265_);
lean_dec_ref(v_facts_2264_);
return v___x_2278_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_byArithmetic___lam__2___boxed(lean_object* v_facts_2287_, lean_object* v___x_2288_, lean_object* v_fuel_2289_, lean_object* v___x_2290_, lean_object* v___x_2291_, lean_object* v___x_2292_, lean_object* v_h_2293_, lean_object* v___y_2294_, lean_object* v___y_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_){
_start:
{
uint8_t v___x_68067__boxed_2301_; uint8_t v___x_68068__boxed_2302_; lean_object* v_res_2303_; 
v___x_68067__boxed_2301_ = lean_unbox(v___x_2291_);
v___x_68068__boxed_2302_ = lean_unbox(v___x_2292_);
v_res_2303_ = lp_vampireReplay_Vampire_Reconstruct_byArithmetic___lam__2(v_facts_2287_, v___x_2288_, v_fuel_2289_, v___x_2290_, v___x_68067__boxed_2301_, v___x_68068__boxed_2302_, v_h_2293_, v___y_2294_, v___y_2295_, v___y_2296_, v___y_2297_, v___y_2298_, v___y_2299_);
lean_dec(v___y_2299_);
lean_dec_ref(v___y_2298_);
lean_dec(v___y_2297_);
lean_dec_ref(v___y_2296_);
lean_dec(v___y_2295_);
lean_dec_ref(v___y_2294_);
lean_dec(v___x_2290_);
return v_res_2303_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_byArithmetic___lam__4(lean_object* v_facts_2308_, lean_object* v_fuel_2309_, uint8_t v___x_2310_, uint8_t v___x_2311_, lean_object* v_h_2312_, lean_object* v___y_2313_, lean_object* v___y_2314_, lean_object* v___y_2315_, lean_object* v___y_2316_, lean_object* v___y_2317_, lean_object* v___y_2318_){
_start:
{
lean_object* v___x_2320_; 
lean_inc_ref(v_h_2312_);
v___x_2320_ = lp_vampireReplay_Vampire_Reconstruct_plainly(v_h_2312_, v___y_2313_, v___y_2314_, v___y_2315_, v___y_2316_, v___y_2317_, v___y_2318_);
if (lean_obj_tag(v___x_2320_) == 0)
{
lean_object* v_a_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; 
v_a_2321_ = lean_ctor_get(v___x_2320_, 0);
lean_inc(v_a_2321_);
lean_dec_ref_known(v___x_2320_, 1);
v___x_2322_ = lean_array_push(v_facts_2308_, v_a_2321_);
v___x_2323_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__2___redArg___closed__2, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__2___redArg___closed__2_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__2___redArg___closed__2);
v___x_2324_ = lp_vampireReplay_Vampire_Reconstruct_byArithmetic(v___x_2322_, v___x_2323_, v_fuel_2309_, v___y_2313_, v___y_2314_, v___y_2315_, v___y_2316_, v___y_2317_, v___y_2318_);
if (lean_obj_tag(v___x_2324_) == 0)
{
lean_object* v_a_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; uint8_t v___x_2329_; lean_object* v___x_2330_; 
v_a_2325_ = lean_ctor_get(v___x_2324_, 0);
lean_inc(v_a_2325_);
lean_dec_ref_known(v___x_2324_, 1);
v___x_2326_ = lean_unsigned_to_nat(1u);
v___x_2327_ = lean_mk_empty_array_with_capacity(v___x_2326_);
v___x_2328_ = lean_array_push(v___x_2327_, v_h_2312_);
v___x_2329_ = 1;
v___x_2330_ = l_Lean_Meta_mkLambdaFVars(v___x_2328_, v_a_2325_, v___x_2310_, v___x_2311_, v___x_2310_, v___x_2311_, v___x_2329_, v___y_2315_, v___y_2316_, v___y_2317_, v___y_2318_);
lean_dec_ref(v___x_2328_);
return v___x_2330_;
}
else
{
lean_dec_ref(v_h_2312_);
return v___x_2324_;
}
}
else
{
lean_dec_ref(v_h_2312_);
lean_dec(v_fuel_2309_);
lean_dec_ref(v_facts_2308_);
return v___x_2320_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_byArithmetic___lam__4___boxed(lean_object* v_facts_2331_, lean_object* v_fuel_2332_, lean_object* v___x_2333_, lean_object* v___x_2334_, lean_object* v_h_2335_, lean_object* v___y_2336_, lean_object* v___y_2337_, lean_object* v___y_2338_, lean_object* v___y_2339_, lean_object* v___y_2340_, lean_object* v___y_2341_, lean_object* v___y_2342_){
_start:
{
uint8_t v___x_68115__boxed_2343_; uint8_t v___x_68116__boxed_2344_; lean_object* v_res_2345_; 
v___x_68115__boxed_2343_ = lean_unbox(v___x_2333_);
v___x_68116__boxed_2344_ = lean_unbox(v___x_2334_);
v_res_2345_ = lp_vampireReplay_Vampire_Reconstruct_byArithmetic___lam__4(v_facts_2331_, v_fuel_2332_, v___x_68115__boxed_2343_, v___x_68116__boxed_2344_, v_h_2335_, v___y_2336_, v___y_2337_, v___y_2338_, v___y_2339_, v___y_2340_, v___y_2341_);
lean_dec(v___y_2341_);
lean_dec_ref(v___y_2340_);
lean_dec(v___y_2339_);
lean_dec_ref(v___y_2338_);
lean_dec(v___y_2337_);
lean_dec_ref(v___y_2336_);
return v_res_2345_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_byArithmetic___lam__3___boxed(lean_object* v___x_2346_, lean_object* v_facts_2347_, lean_object* v_fuel_2348_, lean_object* v_i_2349_, lean_object* v___y_2350_, lean_object* v___y_2351_, lean_object* v___y_2352_, lean_object* v___y_2353_, lean_object* v___y_2354_, lean_object* v___y_2355_, lean_object* v___y_2356_){
_start:
{
lean_object* v_res_2357_; 
v_res_2357_ = lp_vampireReplay_Vampire_Reconstruct_byArithmetic___lam__3(v___x_2346_, v_facts_2347_, v_fuel_2348_, v_i_2349_, v___y_2350_, v___y_2351_, v___y_2352_, v___y_2353_, v___y_2354_, v___y_2355_);
lean_dec(v___y_2355_);
lean_dec_ref(v___y_2354_);
lean_dec(v___y_2353_);
lean_dec_ref(v___y_2352_);
lean_dec(v___y_2351_);
lean_dec_ref(v___y_2350_);
lean_dec(v_i_2349_);
lean_dec_ref(v___x_2346_);
return v_res_2357_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_byArithmetic(lean_object* v_facts_2358_, lean_object* v_goal_2359_, lean_object* v_fuel_2360_, lean_object* v_a_2361_, lean_object* v_a_2362_, lean_object* v_a_2363_, lean_object* v_a_2364_, lean_object* v_a_2365_, lean_object* v_a_2366_){
_start:
{
lean_object* v_contradiction_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; size_t v_sz_2373_; size_t v___x_2374_; lean_object* v___x_2375_; 
v_contradiction_2368_ = lean_ctor_get(v_a_2361_, 3);
v___x_2369_ = lean_unsigned_to_nat(0u);
lean_inc_ref_n(v_facts_2358_, 2);
v___x_2370_ = l_Array_zipIdx___redArg(v_facts_2358_, v___x_2369_);
v___x_2371_ = lean_box(0);
v___x_2372_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__1_spec__1___closed__0));
v_sz_2373_ = lean_array_size(v___x_2370_);
v___x_2374_ = ((size_t)0ULL);
lean_inc(v_fuel_2360_);
lean_inc_ref(v_goal_2359_);
v___x_2375_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__1(v_facts_2358_, v_goal_2359_, v_fuel_2360_, v___x_2370_, v_sz_2373_, v___x_2374_, v___x_2372_, v_a_2361_, v_a_2362_, v_a_2363_, v_a_2364_, v_a_2365_, v_a_2366_);
if (lean_obj_tag(v___x_2375_) == 0)
{
lean_object* v_a_2376_; lean_object* v___x_2378_; uint8_t v_isShared_2379_; uint8_t v_isSharedCheck_2550_; 
v_a_2376_ = lean_ctor_get(v___x_2375_, 0);
v_isSharedCheck_2550_ = !lean_is_exclusive(v___x_2375_);
if (v_isSharedCheck_2550_ == 0)
{
v___x_2378_ = v___x_2375_;
v_isShared_2379_ = v_isSharedCheck_2550_;
goto v_resetjp_2377_;
}
else
{
lean_inc(v_a_2376_);
lean_dec(v___x_2375_);
v___x_2378_ = lean_box(0);
v_isShared_2379_ = v_isSharedCheck_2550_;
goto v_resetjp_2377_;
}
v_resetjp_2377_:
{
lean_object* v_fst_2380_; 
v_fst_2380_ = lean_ctor_get(v_a_2376_, 0);
lean_inc(v_fst_2380_);
lean_dec(v_a_2376_);
if (lean_obj_tag(v_fst_2380_) == 0)
{
lean_object* v___x_2381_; lean_object* v___x_2382_; uint8_t v___x_2383_; 
lean_del_object(v___x_2378_);
v___x_2381_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__1___closed__1));
v___x_2382_ = lean_unsigned_to_nat(2u);
v___x_2383_ = l_Lean_Expr_isAppOfArity(v_goal_2359_, v___x_2381_, v___x_2382_);
if (v___x_2383_ == 0)
{
uint8_t v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; uint8_t v___x_2387_; 
v___x_2384_ = 1;
v___x_2385_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg___closed__3));
v___x_2386_ = lean_unsigned_to_nat(1u);
v___x_2387_ = l_Lean_Expr_isAppOfArity(v_goal_2359_, v___x_2385_, v___x_2386_);
if (v___x_2387_ == 0)
{
lean_object* v___x_2388_; uint8_t v___x_2389_; 
v___x_2388_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_byArithmetic___closed__0));
v___x_2389_ = l_Lean_Expr_isAppOfArity(v_goal_2359_, v___x_2388_, v___x_2382_);
if (v___x_2389_ == 0)
{
lean_object* v___x_2390_; uint8_t v___x_2391_; 
v___x_2390_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_placeLiteral_spec__0___redArg___closed__2));
v___x_2391_ = l_Lean_Expr_isAppOfArity(v_goal_2359_, v___x_2390_, v___x_2382_);
if (v___x_2391_ == 0)
{
lean_object* v___x_2392_; uint8_t v___x_2393_; 
v___x_2392_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__2___redArg___closed__1));
v___x_2393_ = l_Lean_Expr_isConstOf(v_goal_2359_, v___x_2392_);
if (v___x_2393_ == 0)
{
lean_object* v___x_2394_; lean_object* v___x_2395_; 
lean_dec_ref(v___x_2370_);
lean_dec(v_fuel_2360_);
lean_inc_ref(v_goal_2359_);
v___x_2394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2394_, 0, v_goal_2359_);
lean_inc_ref(v_contradiction_2368_);
lean_inc(v_a_2366_);
lean_inc_ref(v_a_2365_);
lean_inc(v_a_2364_);
lean_inc_ref(v_a_2363_);
lean_inc_ref(v_facts_2358_);
v___x_2395_ = lean_apply_7(v_contradiction_2368_, v_facts_2358_, v___x_2394_, v_a_2363_, v_a_2364_, v_a_2365_, v_a_2366_, lean_box(0));
if (lean_obj_tag(v___x_2395_) == 0)
{
lean_dec_ref(v_goal_2359_);
lean_dec_ref(v_facts_2358_);
return v___x_2395_;
}
else
{
lean_object* v_a_2396_; uint8_t v___y_2398_; uint8_t v___x_2415_; 
v_a_2396_ = lean_ctor_get(v___x_2395_, 0);
lean_inc(v_a_2396_);
v___x_2415_ = l_Lean_Exception_isInterrupt(v_a_2396_);
if (v___x_2415_ == 0)
{
uint8_t v___x_2416_; 
v___x_2416_ = l_Lean_Exception_isRuntime(v_a_2396_);
v___y_2398_ = v___x_2416_;
goto v___jp_2397_;
}
else
{
lean_dec(v_a_2396_);
v___y_2398_ = v___x_2415_;
goto v___jp_2397_;
}
v___jp_2397_:
{
if (v___y_2398_ == 0)
{
lean_object* v___x_2399_; lean_object* v___x_2400_; lean_object* v___f_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; 
lean_dec_ref_known(v___x_2395_, 1);
v___x_2399_ = lean_box(v___y_2398_);
v___x_2400_ = lean_box(v___x_2384_);
lean_inc_ref(v_contradiction_2368_);
v___f_2401_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_byArithmetic___lam__0___boxed), 14, 6);
lean_closure_set(v___f_2401_, 0, v_facts_2358_);
lean_closure_set(v___f_2401_, 1, v_contradiction_2368_);
lean_closure_set(v___f_2401_, 2, v___x_2371_);
lean_closure_set(v___f_2401_, 3, v___x_2386_);
lean_closure_set(v___f_2401_, 4, v___x_2399_);
lean_closure_set(v___f_2401_, 5, v___x_2400_);
v___x_2402_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_byArithmetic___closed__2));
v___x_2403_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_ofNotNot___closed__0, &lp_vampireReplay_Vampire_Reconstruct_ofNotNot___closed__0_once, _init_lp_vampireReplay_Vampire_Reconstruct_ofNotNot___closed__0);
lean_inc_ref(v_goal_2359_);
v___x_2404_ = l_Lean_Expr_app___override(v___x_2403_, v_goal_2359_);
v___x_2405_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_2402_, v___x_2404_, v___f_2401_, v_a_2361_, v_a_2362_, v_a_2363_, v_a_2364_, v_a_2365_, v_a_2366_);
if (lean_obj_tag(v___x_2405_) == 0)
{
lean_object* v_a_2406_; lean_object* v___x_2408_; uint8_t v_isShared_2409_; uint8_t v_isSharedCheck_2414_; 
v_a_2406_ = lean_ctor_get(v___x_2405_, 0);
v_isSharedCheck_2414_ = !lean_is_exclusive(v___x_2405_);
if (v_isSharedCheck_2414_ == 0)
{
v___x_2408_ = v___x_2405_;
v_isShared_2409_ = v_isSharedCheck_2414_;
goto v_resetjp_2407_;
}
else
{
lean_inc(v_a_2406_);
lean_dec(v___x_2405_);
v___x_2408_ = lean_box(0);
v_isShared_2409_ = v_isSharedCheck_2414_;
goto v_resetjp_2407_;
}
v_resetjp_2407_:
{
lean_object* v___x_2410_; lean_object* v___x_2412_; 
v___x_2410_ = lp_vampireReplay_Vampire_Reconstruct_ofNotNot(v_goal_2359_, v_a_2406_);
if (v_isShared_2409_ == 0)
{
lean_ctor_set(v___x_2408_, 0, v___x_2410_);
v___x_2412_ = v___x_2408_;
goto v_reusejp_2411_;
}
else
{
lean_object* v_reuseFailAlloc_2413_; 
v_reuseFailAlloc_2413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2413_, 0, v___x_2410_);
v___x_2412_ = v_reuseFailAlloc_2413_;
goto v_reusejp_2411_;
}
v_reusejp_2411_:
{
return v___x_2412_;
}
}
}
else
{
lean_dec_ref(v_goal_2359_);
return v___x_2405_;
}
}
else
{
lean_dec_ref(v_goal_2359_);
lean_dec_ref(v_facts_2358_);
return v___x_2395_;
}
}
}
}
else
{
lean_object* v___x_2417_; 
lean_dec_ref(v_goal_2359_);
lean_inc_ref(v_facts_2358_);
v___x_2417_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__3(v_facts_2358_, v___x_2370_, v_sz_2373_, v___x_2374_, v___x_2372_, v_a_2361_, v_a_2362_, v_a_2363_, v_a_2364_, v_a_2365_, v_a_2366_);
if (lean_obj_tag(v___x_2417_) == 0)
{
lean_object* v_a_2418_; lean_object* v___x_2420_; uint8_t v_isShared_2421_; uint8_t v_isSharedCheck_2449_; 
v_a_2418_ = lean_ctor_get(v___x_2417_, 0);
v_isSharedCheck_2449_ = !lean_is_exclusive(v___x_2417_);
if (v_isSharedCheck_2449_ == 0)
{
v___x_2420_ = v___x_2417_;
v_isShared_2421_ = v_isSharedCheck_2449_;
goto v_resetjp_2419_;
}
else
{
lean_inc(v_a_2418_);
lean_dec(v___x_2417_);
v___x_2420_ = lean_box(0);
v_isShared_2421_ = v_isSharedCheck_2449_;
goto v_resetjp_2419_;
}
v_resetjp_2419_:
{
lean_object* v_fst_2422_; 
v_fst_2422_ = lean_ctor_get(v_a_2418_, 0);
lean_inc(v_fst_2422_);
lean_dec(v_a_2418_);
if (lean_obj_tag(v_fst_2422_) == 0)
{
uint8_t v___x_2423_; 
lean_del_object(v___x_2420_);
v___x_2423_ = lean_nat_dec_lt(v___x_2369_, v_fuel_2360_);
if (v___x_2423_ == 0)
{
lean_object* v___x_2424_; 
lean_dec_ref(v___x_2370_);
lean_dec(v_fuel_2360_);
lean_inc_ref(v_contradiction_2368_);
lean_inc(v_a_2366_);
lean_inc_ref(v_a_2365_);
lean_inc(v_a_2364_);
lean_inc_ref(v_a_2363_);
v___x_2424_ = lean_apply_7(v_contradiction_2368_, v_facts_2358_, v___x_2371_, v_a_2363_, v_a_2364_, v_a_2365_, v_a_2366_, lean_box(0));
return v___x_2424_;
}
else
{
lean_object* v___x_2425_; 
lean_inc_ref(v_facts_2358_);
v___x_2425_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__4(v_facts_2358_, v_fuel_2360_, v___x_2370_, v_sz_2373_, v___x_2374_, v___x_2372_, v_a_2361_, v_a_2362_, v_a_2363_, v_a_2364_, v_a_2365_, v_a_2366_);
lean_dec_ref(v___x_2370_);
lean_dec(v_fuel_2360_);
if (lean_obj_tag(v___x_2425_) == 0)
{
lean_object* v_a_2426_; lean_object* v___x_2428_; uint8_t v_isShared_2429_; uint8_t v_isSharedCheck_2436_; 
v_a_2426_ = lean_ctor_get(v___x_2425_, 0);
v_isSharedCheck_2436_ = !lean_is_exclusive(v___x_2425_);
if (v_isSharedCheck_2436_ == 0)
{
v___x_2428_ = v___x_2425_;
v_isShared_2429_ = v_isSharedCheck_2436_;
goto v_resetjp_2427_;
}
else
{
lean_inc(v_a_2426_);
lean_dec(v___x_2425_);
v___x_2428_ = lean_box(0);
v_isShared_2429_ = v_isSharedCheck_2436_;
goto v_resetjp_2427_;
}
v_resetjp_2427_:
{
lean_object* v_fst_2430_; 
v_fst_2430_ = lean_ctor_get(v_a_2426_, 0);
lean_inc(v_fst_2430_);
lean_dec(v_a_2426_);
if (lean_obj_tag(v_fst_2430_) == 0)
{
lean_object* v___x_2431_; 
lean_del_object(v___x_2428_);
lean_inc_ref(v_contradiction_2368_);
lean_inc(v_a_2366_);
lean_inc_ref(v_a_2365_);
lean_inc(v_a_2364_);
lean_inc_ref(v_a_2363_);
v___x_2431_ = lean_apply_7(v_contradiction_2368_, v_facts_2358_, v___x_2371_, v_a_2363_, v_a_2364_, v_a_2365_, v_a_2366_, lean_box(0));
return v___x_2431_;
}
else
{
lean_object* v_val_2432_; lean_object* v___x_2434_; 
lean_dec_ref(v_facts_2358_);
v_val_2432_ = lean_ctor_get(v_fst_2430_, 0);
lean_inc(v_val_2432_);
lean_dec_ref_known(v_fst_2430_, 1);
if (v_isShared_2429_ == 0)
{
lean_ctor_set(v___x_2428_, 0, v_val_2432_);
v___x_2434_ = v___x_2428_;
goto v_reusejp_2433_;
}
else
{
lean_object* v_reuseFailAlloc_2435_; 
v_reuseFailAlloc_2435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2435_, 0, v_val_2432_);
v___x_2434_ = v_reuseFailAlloc_2435_;
goto v_reusejp_2433_;
}
v_reusejp_2433_:
{
return v___x_2434_;
}
}
}
}
else
{
lean_object* v_a_2437_; lean_object* v___x_2439_; uint8_t v_isShared_2440_; uint8_t v_isSharedCheck_2444_; 
lean_dec_ref(v_facts_2358_);
v_a_2437_ = lean_ctor_get(v___x_2425_, 0);
v_isSharedCheck_2444_ = !lean_is_exclusive(v___x_2425_);
if (v_isSharedCheck_2444_ == 0)
{
v___x_2439_ = v___x_2425_;
v_isShared_2440_ = v_isSharedCheck_2444_;
goto v_resetjp_2438_;
}
else
{
lean_inc(v_a_2437_);
lean_dec(v___x_2425_);
v___x_2439_ = lean_box(0);
v_isShared_2440_ = v_isSharedCheck_2444_;
goto v_resetjp_2438_;
}
v_resetjp_2438_:
{
lean_object* v___x_2442_; 
if (v_isShared_2440_ == 0)
{
v___x_2442_ = v___x_2439_;
goto v_reusejp_2441_;
}
else
{
lean_object* v_reuseFailAlloc_2443_; 
v_reuseFailAlloc_2443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2443_, 0, v_a_2437_);
v___x_2442_ = v_reuseFailAlloc_2443_;
goto v_reusejp_2441_;
}
v_reusejp_2441_:
{
return v___x_2442_;
}
}
}
}
}
else
{
lean_object* v_val_2445_; lean_object* v___x_2447_; 
lean_dec_ref(v___x_2370_);
lean_dec(v_fuel_2360_);
lean_dec_ref(v_facts_2358_);
v_val_2445_ = lean_ctor_get(v_fst_2422_, 0);
lean_inc(v_val_2445_);
lean_dec_ref_known(v_fst_2422_, 1);
if (v_isShared_2421_ == 0)
{
lean_ctor_set(v___x_2420_, 0, v_val_2445_);
v___x_2447_ = v___x_2420_;
goto v_reusejp_2446_;
}
else
{
lean_object* v_reuseFailAlloc_2448_; 
v_reuseFailAlloc_2448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2448_, 0, v_val_2445_);
v___x_2447_ = v_reuseFailAlloc_2448_;
goto v_reusejp_2446_;
}
v_reusejp_2446_:
{
return v___x_2447_;
}
}
}
}
else
{
lean_object* v_a_2450_; lean_object* v___x_2452_; uint8_t v_isShared_2453_; uint8_t v_isSharedCheck_2457_; 
lean_dec_ref(v___x_2370_);
lean_dec(v_fuel_2360_);
lean_dec_ref(v_facts_2358_);
v_a_2450_ = lean_ctor_get(v___x_2417_, 0);
v_isSharedCheck_2457_ = !lean_is_exclusive(v___x_2417_);
if (v_isSharedCheck_2457_ == 0)
{
v___x_2452_ = v___x_2417_;
v_isShared_2453_ = v_isSharedCheck_2457_;
goto v_resetjp_2451_;
}
else
{
lean_inc(v_a_2450_);
lean_dec(v___x_2417_);
v___x_2452_ = lean_box(0);
v_isShared_2453_ = v_isSharedCheck_2457_;
goto v_resetjp_2451_;
}
v_resetjp_2451_:
{
lean_object* v___x_2455_; 
if (v_isShared_2453_ == 0)
{
v___x_2455_ = v___x_2452_;
goto v_reusejp_2454_;
}
else
{
lean_object* v_reuseFailAlloc_2456_; 
v_reuseFailAlloc_2456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2456_, 0, v_a_2450_);
v___x_2455_ = v_reuseFailAlloc_2456_;
goto v_reusejp_2454_;
}
v_reusejp_2454_:
{
return v___x_2455_;
}
}
}
}
}
else
{
lean_object* v___x_2458_; lean_object* v___x_2459_; size_t v_sz_2460_; lean_object* v___x_2461_; 
lean_dec_ref(v___x_2370_);
lean_inc_ref(v_goal_2359_);
v___x_2458_ = lp_vampireReplay_Vampire_Reconstruct_junctionParts(v___x_2390_, v_goal_2359_);
lean_inc_ref(v___x_2458_);
v___x_2459_ = l_Array_zipIdx___redArg(v___x_2458_, v___x_2369_);
v_sz_2460_ = lean_array_size(v___x_2459_);
v___x_2461_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__6(v___x_2458_, v_facts_2358_, v___x_2459_, v_sz_2460_, v___x_2374_, v___x_2372_, v_a_2361_, v_a_2362_, v_a_2363_, v_a_2364_, v_a_2365_, v_a_2366_);
if (lean_obj_tag(v___x_2461_) == 0)
{
lean_object* v_a_2462_; lean_object* v___x_2464_; uint8_t v_isShared_2465_; uint8_t v_isSharedCheck_2509_; 
v_a_2462_ = lean_ctor_get(v___x_2461_, 0);
v_isSharedCheck_2509_ = !lean_is_exclusive(v___x_2461_);
if (v_isSharedCheck_2509_ == 0)
{
v___x_2464_ = v___x_2461_;
v_isShared_2465_ = v_isSharedCheck_2509_;
goto v_resetjp_2463_;
}
else
{
lean_inc(v_a_2462_);
lean_dec(v___x_2461_);
v___x_2464_ = lean_box(0);
v_isShared_2465_ = v_isSharedCheck_2509_;
goto v_resetjp_2463_;
}
v_resetjp_2463_:
{
lean_object* v_fst_2466_; 
v_fst_2466_ = lean_ctor_get(v_a_2462_, 0);
lean_inc(v_fst_2466_);
lean_dec(v_a_2462_);
if (lean_obj_tag(v_fst_2466_) == 0)
{
lean_object* v___x_2467_; 
lean_del_object(v___x_2464_);
lean_inc(v_fuel_2360_);
lean_inc_ref(v_facts_2358_);
v___x_2467_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__7(v_facts_2358_, v_fuel_2360_, v___x_2458_, v___x_2459_, v_sz_2460_, v___x_2374_, v___x_2372_, v_a_2361_, v_a_2362_, v_a_2363_, v_a_2364_, v_a_2365_, v_a_2366_);
if (lean_obj_tag(v___x_2467_) == 0)
{
lean_object* v_a_2468_; lean_object* v___x_2470_; uint8_t v_isShared_2471_; uint8_t v_isSharedCheck_2496_; 
v_a_2468_ = lean_ctor_get(v___x_2467_, 0);
v_isSharedCheck_2496_ = !lean_is_exclusive(v___x_2467_);
if (v_isSharedCheck_2496_ == 0)
{
v___x_2470_ = v___x_2467_;
v_isShared_2471_ = v_isSharedCheck_2496_;
goto v_resetjp_2469_;
}
else
{
lean_inc(v_a_2468_);
lean_dec(v___x_2467_);
v___x_2470_ = lean_box(0);
v_isShared_2471_ = v_isSharedCheck_2496_;
goto v_resetjp_2469_;
}
v_resetjp_2469_:
{
lean_object* v_fst_2472_; 
v_fst_2472_ = lean_ctor_get(v_a_2468_, 0);
lean_inc(v_fst_2472_);
lean_dec(v_a_2468_);
if (lean_obj_tag(v_fst_2472_) == 0)
{
lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___f_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; 
lean_del_object(v___x_2470_);
v___x_2473_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_byArithmetic___closed__2));
v___x_2474_ = lean_box(0);
v___x_2475_ = lean_box(v___x_2389_);
v___x_2476_ = lean_box_usize(v_sz_2460_);
v___x_2477_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_byArithmetic___boxed__const__1));
v___x_2478_ = lean_box(v___x_2384_);
v___f_2479_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_byArithmetic___lam__1___boxed), 18, 10);
lean_closure_set(v___f_2479_, 0, v___x_2458_);
lean_closure_set(v___f_2479_, 1, v___x_2475_);
lean_closure_set(v___f_2479_, 2, v___x_2459_);
lean_closure_set(v___f_2479_, 3, v___x_2476_);
lean_closure_set(v___f_2479_, 4, v___x_2477_);
lean_closure_set(v___f_2479_, 5, v_facts_2358_);
lean_closure_set(v___f_2479_, 6, v___x_2474_);
lean_closure_set(v___f_2479_, 7, v_fuel_2360_);
lean_closure_set(v___f_2479_, 8, v___x_2386_);
lean_closure_set(v___f_2479_, 9, v___x_2478_);
v___x_2480_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_ofNotNot___closed__0, &lp_vampireReplay_Vampire_Reconstruct_ofNotNot___closed__0_once, _init_lp_vampireReplay_Vampire_Reconstruct_ofNotNot___closed__0);
lean_inc_ref(v_goal_2359_);
v___x_2481_ = l_Lean_Expr_app___override(v___x_2480_, v_goal_2359_);
v___x_2482_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_2473_, v___x_2481_, v___f_2479_, v_a_2361_, v_a_2362_, v_a_2363_, v_a_2364_, v_a_2365_, v_a_2366_);
if (lean_obj_tag(v___x_2482_) == 0)
{
lean_object* v_a_2483_; lean_object* v___x_2485_; uint8_t v_isShared_2486_; uint8_t v_isSharedCheck_2491_; 
v_a_2483_ = lean_ctor_get(v___x_2482_, 0);
v_isSharedCheck_2491_ = !lean_is_exclusive(v___x_2482_);
if (v_isSharedCheck_2491_ == 0)
{
v___x_2485_ = v___x_2482_;
v_isShared_2486_ = v_isSharedCheck_2491_;
goto v_resetjp_2484_;
}
else
{
lean_inc(v_a_2483_);
lean_dec(v___x_2482_);
v___x_2485_ = lean_box(0);
v_isShared_2486_ = v_isSharedCheck_2491_;
goto v_resetjp_2484_;
}
v_resetjp_2484_:
{
lean_object* v___x_2487_; lean_object* v___x_2489_; 
v___x_2487_ = lp_vampireReplay_Vampire_Reconstruct_ofNotNot(v_goal_2359_, v_a_2483_);
if (v_isShared_2486_ == 0)
{
lean_ctor_set(v___x_2485_, 0, v___x_2487_);
v___x_2489_ = v___x_2485_;
goto v_reusejp_2488_;
}
else
{
lean_object* v_reuseFailAlloc_2490_; 
v_reuseFailAlloc_2490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2490_, 0, v___x_2487_);
v___x_2489_ = v_reuseFailAlloc_2490_;
goto v_reusejp_2488_;
}
v_reusejp_2488_:
{
return v___x_2489_;
}
}
}
else
{
lean_dec_ref(v_goal_2359_);
return v___x_2482_;
}
}
else
{
lean_object* v_val_2492_; lean_object* v___x_2494_; 
lean_dec_ref(v___x_2459_);
lean_dec_ref(v___x_2458_);
lean_dec(v_fuel_2360_);
lean_dec_ref(v_goal_2359_);
lean_dec_ref(v_facts_2358_);
v_val_2492_ = lean_ctor_get(v_fst_2472_, 0);
lean_inc(v_val_2492_);
lean_dec_ref_known(v_fst_2472_, 1);
if (v_isShared_2471_ == 0)
{
lean_ctor_set(v___x_2470_, 0, v_val_2492_);
v___x_2494_ = v___x_2470_;
goto v_reusejp_2493_;
}
else
{
lean_object* v_reuseFailAlloc_2495_; 
v_reuseFailAlloc_2495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2495_, 0, v_val_2492_);
v___x_2494_ = v_reuseFailAlloc_2495_;
goto v_reusejp_2493_;
}
v_reusejp_2493_:
{
return v___x_2494_;
}
}
}
}
else
{
lean_object* v_a_2497_; lean_object* v___x_2499_; uint8_t v_isShared_2500_; uint8_t v_isSharedCheck_2504_; 
lean_dec_ref(v___x_2459_);
lean_dec_ref(v___x_2458_);
lean_dec(v_fuel_2360_);
lean_dec_ref(v_goal_2359_);
lean_dec_ref(v_facts_2358_);
v_a_2497_ = lean_ctor_get(v___x_2467_, 0);
v_isSharedCheck_2504_ = !lean_is_exclusive(v___x_2467_);
if (v_isSharedCheck_2504_ == 0)
{
v___x_2499_ = v___x_2467_;
v_isShared_2500_ = v_isSharedCheck_2504_;
goto v_resetjp_2498_;
}
else
{
lean_inc(v_a_2497_);
lean_dec(v___x_2467_);
v___x_2499_ = lean_box(0);
v_isShared_2500_ = v_isSharedCheck_2504_;
goto v_resetjp_2498_;
}
v_resetjp_2498_:
{
lean_object* v___x_2502_; 
if (v_isShared_2500_ == 0)
{
v___x_2502_ = v___x_2499_;
goto v_reusejp_2501_;
}
else
{
lean_object* v_reuseFailAlloc_2503_; 
v_reuseFailAlloc_2503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2503_, 0, v_a_2497_);
v___x_2502_ = v_reuseFailAlloc_2503_;
goto v_reusejp_2501_;
}
v_reusejp_2501_:
{
return v___x_2502_;
}
}
}
}
else
{
lean_object* v_val_2505_; lean_object* v___x_2507_; 
lean_dec_ref(v___x_2459_);
lean_dec_ref(v___x_2458_);
lean_dec(v_fuel_2360_);
lean_dec_ref(v_goal_2359_);
lean_dec_ref(v_facts_2358_);
v_val_2505_ = lean_ctor_get(v_fst_2466_, 0);
lean_inc(v_val_2505_);
lean_dec_ref_known(v_fst_2466_, 1);
if (v_isShared_2465_ == 0)
{
lean_ctor_set(v___x_2464_, 0, v_val_2505_);
v___x_2507_ = v___x_2464_;
goto v_reusejp_2506_;
}
else
{
lean_object* v_reuseFailAlloc_2508_; 
v_reuseFailAlloc_2508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2508_, 0, v_val_2505_);
v___x_2507_ = v_reuseFailAlloc_2508_;
goto v_reusejp_2506_;
}
v_reusejp_2506_:
{
return v___x_2507_;
}
}
}
}
else
{
lean_object* v_a_2510_; lean_object* v___x_2512_; uint8_t v_isShared_2513_; uint8_t v_isSharedCheck_2517_; 
lean_dec_ref(v___x_2459_);
lean_dec_ref(v___x_2458_);
lean_dec(v_fuel_2360_);
lean_dec_ref(v_goal_2359_);
lean_dec_ref(v_facts_2358_);
v_a_2510_ = lean_ctor_get(v___x_2461_, 0);
v_isSharedCheck_2517_ = !lean_is_exclusive(v___x_2461_);
if (v_isSharedCheck_2517_ == 0)
{
v___x_2512_ = v___x_2461_;
v_isShared_2513_ = v_isSharedCheck_2517_;
goto v_resetjp_2511_;
}
else
{
lean_inc(v_a_2510_);
lean_dec(v___x_2461_);
v___x_2512_ = lean_box(0);
v_isShared_2513_ = v_isSharedCheck_2517_;
goto v_resetjp_2511_;
}
v_resetjp_2511_:
{
lean_object* v___x_2515_; 
if (v_isShared_2513_ == 0)
{
v___x_2515_ = v___x_2512_;
goto v_reusejp_2514_;
}
else
{
lean_object* v_reuseFailAlloc_2516_; 
v_reuseFailAlloc_2516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2516_, 0, v_a_2510_);
v___x_2515_ = v_reuseFailAlloc_2516_;
goto v_reusejp_2514_;
}
v_reusejp_2514_:
{
return v___x_2515_;
}
}
}
}
}
else
{
lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___f_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; 
lean_dec_ref(v___x_2370_);
v___x_2518_ = l_Lean_Expr_appFn_x21(v_goal_2359_);
v___x_2519_ = l_Lean_Expr_appArg_x21(v___x_2518_);
lean_dec_ref(v___x_2518_);
v___x_2520_ = l_Lean_Expr_appArg_x21(v_goal_2359_);
lean_dec_ref(v_goal_2359_);
v___x_2521_ = lean_box(v___x_2387_);
v___x_2522_ = lean_box(v___x_2384_);
lean_inc(v_fuel_2360_);
lean_inc_ref(v___x_2520_);
lean_inc_ref(v_facts_2358_);
v___f_2523_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_byArithmetic___lam__2___boxed), 14, 6);
lean_closure_set(v___f_2523_, 0, v_facts_2358_);
lean_closure_set(v___f_2523_, 1, v___x_2520_);
lean_closure_set(v___f_2523_, 2, v_fuel_2360_);
lean_closure_set(v___f_2523_, 3, v___x_2386_);
lean_closure_set(v___f_2523_, 4, v___x_2521_);
lean_closure_set(v___f_2523_, 5, v___x_2522_);
v___x_2524_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_byArithmetic___closed__2));
lean_inc_ref(v___x_2519_);
v___x_2525_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_2524_, v___x_2519_, v___f_2523_, v_a_2361_, v_a_2362_, v_a_2363_, v_a_2364_, v_a_2365_, v_a_2366_);
if (lean_obj_tag(v___x_2525_) == 0)
{
lean_object* v_a_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___f_2529_; lean_object* v___x_2530_; 
v_a_2526_ = lean_ctor_get(v___x_2525_, 0);
lean_inc(v_a_2526_);
lean_dec_ref_known(v___x_2525_, 1);
v___x_2527_ = lean_box(v___x_2387_);
v___x_2528_ = lean_box(v___x_2384_);
v___f_2529_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_byArithmetic___lam__2___boxed), 14, 6);
lean_closure_set(v___f_2529_, 0, v_facts_2358_);
lean_closure_set(v___f_2529_, 1, v___x_2519_);
lean_closure_set(v___f_2529_, 2, v_fuel_2360_);
lean_closure_set(v___f_2529_, 3, v___x_2386_);
lean_closure_set(v___f_2529_, 4, v___x_2527_);
lean_closure_set(v___f_2529_, 5, v___x_2528_);
v___x_2530_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_2524_, v___x_2520_, v___f_2529_, v_a_2361_, v_a_2362_, v_a_2363_, v_a_2364_, v_a_2365_, v_a_2366_);
if (lean_obj_tag(v___x_2530_) == 0)
{
lean_object* v_a_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; 
v_a_2531_ = lean_ctor_get(v___x_2530_, 0);
lean_inc(v_a_2531_);
lean_dec_ref_known(v___x_2530_, 1);
v___x_2532_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_byArithmetic___closed__4));
v___x_2533_ = lean_mk_empty_array_with_capacity(v___x_2382_);
v___x_2534_ = lean_array_push(v___x_2533_, v_a_2526_);
v___x_2535_ = lean_array_push(v___x_2534_, v_a_2531_);
v___x_2536_ = l_Lean_Meta_mkAppM(v___x_2532_, v___x_2535_, v_a_2363_, v_a_2364_, v_a_2365_, v_a_2366_);
return v___x_2536_;
}
else
{
lean_dec(v_a_2526_);
return v___x_2530_;
}
}
else
{
lean_dec_ref(v___x_2520_);
lean_dec_ref(v___x_2519_);
lean_dec(v_fuel_2360_);
lean_dec_ref(v_facts_2358_);
return v___x_2525_;
}
}
}
else
{
lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___f_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; 
lean_dec_ref(v___x_2370_);
v___x_2537_ = lean_box(v___x_2383_);
v___x_2538_ = lean_box(v___x_2384_);
v___f_2539_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_byArithmetic___lam__4___boxed), 12, 4);
lean_closure_set(v___f_2539_, 0, v_facts_2358_);
lean_closure_set(v___f_2539_, 1, v_fuel_2360_);
lean_closure_set(v___f_2539_, 2, v___x_2537_);
lean_closure_set(v___f_2539_, 3, v___x_2538_);
v___x_2540_ = l_Lean_Expr_appArg_x21(v_goal_2359_);
lean_dec_ref(v_goal_2359_);
v___x_2541_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_byArithmetic___closed__2));
v___x_2542_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_2541_, v___x_2540_, v___f_2539_, v_a_2361_, v_a_2362_, v_a_2363_, v_a_2364_, v_a_2365_, v_a_2366_);
return v___x_2542_;
}
}
else
{
lean_object* v___x_2543_; lean_object* v___f_2544_; lean_object* v___x_2545_; 
lean_dec_ref(v___x_2370_);
v___x_2543_ = lp_vampireReplay_Vampire_Reconstruct_junctionParts(v___x_2381_, v_goal_2359_);
lean_inc_ref(v___x_2543_);
v___f_2544_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_byArithmetic___lam__3___boxed), 11, 3);
lean_closure_set(v___f_2544_, 0, v___x_2543_);
lean_closure_set(v___f_2544_, 1, v_facts_2358_);
lean_closure_set(v___f_2544_, 2, v_fuel_2360_);
v___x_2545_ = lp_vampireReplay_Vampire_Reconstruct_introGiven(v___x_2543_, v___f_2544_, v___x_2369_, v_a_2361_, v_a_2362_, v_a_2363_, v_a_2364_, v_a_2365_, v_a_2366_);
lean_dec_ref(v___x_2543_);
return v___x_2545_;
}
}
else
{
lean_object* v_val_2546_; lean_object* v___x_2548_; 
lean_dec_ref(v___x_2370_);
lean_dec(v_fuel_2360_);
lean_dec_ref(v_goal_2359_);
lean_dec_ref(v_facts_2358_);
v_val_2546_ = lean_ctor_get(v_fst_2380_, 0);
lean_inc(v_val_2546_);
lean_dec_ref_known(v_fst_2380_, 1);
if (v_isShared_2379_ == 0)
{
lean_ctor_set(v___x_2378_, 0, v_val_2546_);
v___x_2548_ = v___x_2378_;
goto v_reusejp_2547_;
}
else
{
lean_object* v_reuseFailAlloc_2549_; 
v_reuseFailAlloc_2549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2549_, 0, v_val_2546_);
v___x_2548_ = v_reuseFailAlloc_2549_;
goto v_reusejp_2547_;
}
v_reusejp_2547_:
{
return v___x_2548_;
}
}
}
}
else
{
lean_object* v_a_2551_; lean_object* v___x_2553_; uint8_t v_isShared_2554_; uint8_t v_isSharedCheck_2558_; 
lean_dec_ref(v___x_2370_);
lean_dec(v_fuel_2360_);
lean_dec_ref(v_goal_2359_);
lean_dec_ref(v_facts_2358_);
v_a_2551_ = lean_ctor_get(v___x_2375_, 0);
v_isSharedCheck_2558_ = !lean_is_exclusive(v___x_2375_);
if (v_isSharedCheck_2558_ == 0)
{
v___x_2553_ = v___x_2375_;
v_isShared_2554_ = v_isSharedCheck_2558_;
goto v_resetjp_2552_;
}
else
{
lean_inc(v_a_2551_);
lean_dec(v___x_2375_);
v___x_2553_ = lean_box(0);
v_isShared_2554_ = v_isSharedCheck_2558_;
goto v_resetjp_2552_;
}
v_resetjp_2552_:
{
lean_object* v___x_2556_; 
if (v_isShared_2554_ == 0)
{
v___x_2556_ = v___x_2553_;
goto v_reusejp_2555_;
}
else
{
lean_object* v_reuseFailAlloc_2557_; 
v_reuseFailAlloc_2557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2557_, 0, v_a_2551_);
v___x_2556_ = v_reuseFailAlloc_2557_;
goto v_reusejp_2555_;
}
v_reusejp_2555_:
{
return v___x_2556_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_byArithmetic___lam__3(lean_object* v___x_2559_, lean_object* v_facts_2560_, lean_object* v_fuel_2561_, lean_object* v_i_2562_, lean_object* v___y_2563_, lean_object* v___y_2564_, lean_object* v___y_2565_, lean_object* v___y_2566_, lean_object* v___y_2567_, lean_object* v___y_2568_){
_start:
{
lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; 
v___x_2570_ = l_Lean_instInhabitedExpr;
v___x_2571_ = lean_array_get_borrowed(v___x_2570_, v___x_2559_, v_i_2562_);
lean_inc(v___x_2571_);
v___x_2572_ = lp_vampireReplay_Vampire_Reconstruct_byArithmetic(v_facts_2560_, v___x_2571_, v_fuel_2561_, v___y_2563_, v___y_2564_, v___y_2565_, v___y_2566_, v___y_2567_, v___y_2568_);
return v___x_2572_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__7___boxed(lean_object* v_facts_2573_, lean_object* v_fuel_2574_, lean_object* v___x_2575_, lean_object* v_as_2576_, lean_object* v_sz_2577_, lean_object* v_i_2578_, lean_object* v_b_2579_, lean_object* v___y_2580_, lean_object* v___y_2581_, lean_object* v___y_2582_, lean_object* v___y_2583_, lean_object* v___y_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_){
_start:
{
size_t v_sz_boxed_2587_; size_t v_i_boxed_2588_; lean_object* v_res_2589_; 
v_sz_boxed_2587_ = lean_unbox_usize(v_sz_2577_);
lean_dec(v_sz_2577_);
v_i_boxed_2588_ = lean_unbox_usize(v_i_2578_);
lean_dec(v_i_2578_);
v_res_2589_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__7(v_facts_2573_, v_fuel_2574_, v___x_2575_, v_as_2576_, v_sz_boxed_2587_, v_i_boxed_2588_, v_b_2579_, v___y_2580_, v___y_2581_, v___y_2582_, v___y_2583_, v___y_2584_, v___y_2585_);
lean_dec(v___y_2585_);
lean_dec_ref(v___y_2584_);
lean_dec(v___y_2583_);
lean_dec_ref(v___y_2582_);
lean_dec(v___y_2581_);
lean_dec_ref(v___y_2580_);
lean_dec_ref(v_as_2576_);
lean_dec_ref(v___x_2575_);
return v_res_2589_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__1___boxed(lean_object* v_facts_2590_, lean_object* v_goal_2591_, lean_object* v_fuel_2592_, lean_object* v_as_2593_, lean_object* v_sz_2594_, lean_object* v_i_2595_, lean_object* v_b_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_, lean_object* v___y_2599_, lean_object* v___y_2600_, lean_object* v___y_2601_, lean_object* v___y_2602_, lean_object* v___y_2603_){
_start:
{
size_t v_sz_boxed_2604_; size_t v_i_boxed_2605_; lean_object* v_res_2606_; 
v_sz_boxed_2604_ = lean_unbox_usize(v_sz_2594_);
lean_dec(v_sz_2594_);
v_i_boxed_2605_ = lean_unbox_usize(v_i_2595_);
lean_dec(v_i_2595_);
v_res_2606_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__1(v_facts_2590_, v_goal_2591_, v_fuel_2592_, v_as_2593_, v_sz_boxed_2604_, v_i_boxed_2605_, v_b_2596_, v___y_2597_, v___y_2598_, v___y_2599_, v___y_2600_, v___y_2601_, v___y_2602_);
lean_dec(v___y_2602_);
lean_dec_ref(v___y_2601_);
lean_dec(v___y_2600_);
lean_dec_ref(v___y_2599_);
lean_dec(v___y_2598_);
lean_dec_ref(v___y_2597_);
lean_dec_ref(v_as_2593_);
return v_res_2606_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__4___boxed(lean_object* v_facts_2607_, lean_object* v_fuel_2608_, lean_object* v_as_2609_, lean_object* v_sz_2610_, lean_object* v_i_2611_, lean_object* v_b_2612_, lean_object* v___y_2613_, lean_object* v___y_2614_, lean_object* v___y_2615_, lean_object* v___y_2616_, lean_object* v___y_2617_, lean_object* v___y_2618_, lean_object* v___y_2619_){
_start:
{
size_t v_sz_boxed_2620_; size_t v_i_boxed_2621_; lean_object* v_res_2622_; 
v_sz_boxed_2620_ = lean_unbox_usize(v_sz_2610_);
lean_dec(v_sz_2610_);
v_i_boxed_2621_ = lean_unbox_usize(v_i_2611_);
lean_dec(v_i_2611_);
v_res_2622_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__4(v_facts_2607_, v_fuel_2608_, v_as_2609_, v_sz_boxed_2620_, v_i_boxed_2621_, v_b_2612_, v___y_2613_, v___y_2614_, v___y_2615_, v___y_2616_, v___y_2617_, v___y_2618_);
lean_dec(v___y_2618_);
lean_dec_ref(v___y_2617_);
lean_dec(v___y_2616_);
lean_dec_ref(v___y_2615_);
lean_dec(v___y_2614_);
lean_dec_ref(v___y_2613_);
lean_dec_ref(v_as_2609_);
lean_dec(v_fuel_2608_);
return v_res_2622_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_byArithmetic___boxed(lean_object* v_facts_2623_, lean_object* v_goal_2624_, lean_object* v_fuel_2625_, lean_object* v_a_2626_, lean_object* v_a_2627_, lean_object* v_a_2628_, lean_object* v_a_2629_, lean_object* v_a_2630_, lean_object* v_a_2631_, lean_object* v_a_2632_){
_start:
{
lean_object* v_res_2633_; 
v_res_2633_ = lp_vampireReplay_Vampire_Reconstruct_byArithmetic(v_facts_2623_, v_goal_2624_, v_fuel_2625_, v_a_2626_, v_a_2627_, v_a_2628_, v_a_2629_, v_a_2630_, v_a_2631_);
lean_dec(v_a_2631_);
lean_dec_ref(v_a_2630_);
lean_dec(v_a_2629_);
lean_dec_ref(v_a_2628_);
lean_dec(v_a_2627_);
lean_dec_ref(v_a_2626_);
return v_res_2633_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_byArithmetic_spec__0(lean_object* v___x_2634_, lean_object* v_fst_2635_, lean_object* v_range_2636_, lean_object* v_b_2637_, lean_object* v_i_2638_, lean_object* v_hs_2639_, lean_object* v_hl_2640_, lean_object* v___y_2641_, lean_object* v___y_2642_, lean_object* v___y_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_){
_start:
{
lean_object* v___x_2648_; 
v___x_2648_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_byArithmetic_spec__0___redArg(v___x_2634_, v_fst_2635_, v_range_2636_, v_b_2637_, v_i_2638_, v___y_2641_, v___y_2642_, v___y_2643_, v___y_2644_, v___y_2645_, v___y_2646_);
return v___x_2648_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_byArithmetic_spec__0___boxed(lean_object* v___x_2649_, lean_object* v_fst_2650_, lean_object* v_range_2651_, lean_object* v_b_2652_, lean_object* v_i_2653_, lean_object* v_hs_2654_, lean_object* v_hl_2655_, lean_object* v___y_2656_, lean_object* v___y_2657_, lean_object* v___y_2658_, lean_object* v___y_2659_, lean_object* v___y_2660_, lean_object* v___y_2661_, lean_object* v___y_2662_){
_start:
{
lean_object* v_res_2663_; 
v_res_2663_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_byArithmetic_spec__0(v___x_2649_, v_fst_2650_, v_range_2651_, v_b_2652_, v_i_2653_, v_hs_2654_, v_hl_2655_, v___y_2656_, v___y_2657_, v___y_2658_, v___y_2659_, v___y_2660_, v___y_2661_);
lean_dec(v___y_2661_);
lean_dec_ref(v___y_2660_);
lean_dec(v___y_2659_);
lean_dec_ref(v___y_2658_);
lean_dec(v___y_2657_);
lean_dec_ref(v___y_2656_);
lean_dec_ref(v_range_2651_);
lean_dec_ref(v___x_2649_);
return v_res_2663_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__2(lean_object* v___x_2664_, lean_object* v_fst_2665_, lean_object* v___x_2666_, lean_object* v_as_2667_, size_t v_sz_2668_, size_t v_i_2669_, lean_object* v_b_2670_, lean_object* v___y_2671_, lean_object* v___y_2672_, lean_object* v___y_2673_, lean_object* v___y_2674_, lean_object* v___y_2675_, lean_object* v___y_2676_){
_start:
{
lean_object* v___x_2678_; 
v___x_2678_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__2___redArg(v___x_2664_, v_fst_2665_, v___x_2666_, v_as_2667_, v_sz_2668_, v_i_2669_, v_b_2670_, v___y_2673_, v___y_2674_, v___y_2675_, v___y_2676_);
return v___x_2678_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__2___boxed(lean_object* v___x_2679_, lean_object* v_fst_2680_, lean_object* v___x_2681_, lean_object* v_as_2682_, lean_object* v_sz_2683_, lean_object* v_i_2684_, lean_object* v_b_2685_, lean_object* v___y_2686_, lean_object* v___y_2687_, lean_object* v___y_2688_, lean_object* v___y_2689_, lean_object* v___y_2690_, lean_object* v___y_2691_, lean_object* v___y_2692_){
_start:
{
size_t v_sz_boxed_2693_; size_t v_i_boxed_2694_; lean_object* v_res_2695_; 
v_sz_boxed_2693_ = lean_unbox_usize(v_sz_2683_);
lean_dec(v_sz_2683_);
v_i_boxed_2694_ = lean_unbox_usize(v_i_2684_);
lean_dec(v_i_2684_);
v_res_2695_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_byArithmetic_spec__2(v___x_2679_, v_fst_2680_, v___x_2681_, v_as_2682_, v_sz_boxed_2693_, v_i_boxed_2694_, v_b_2685_, v___y_2686_, v___y_2687_, v___y_2688_, v___y_2689_, v___y_2690_, v___y_2691_);
lean_dec(v___y_2691_);
lean_dec_ref(v___y_2690_);
lean_dec(v___y_2689_);
lean_dec_ref(v___y_2688_);
lean_dec(v___y_2687_);
lean_dec_ref(v___y_2686_);
lean_dec_ref(v_as_2682_);
return v_res_2695_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_arithmeticIff___closed__0(void){
_start:
{
lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; 
v___x_2696_ = lean_box(0);
v___x_2697_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_byArithmetic___closed__0));
v___x_2698_ = l_Lean_Expr_const___override(v___x_2697_, v___x_2696_);
return v___x_2698_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_arithmeticIff(lean_object* v_a_2699_, lean_object* v_b_2700_, lean_object* v_a_2701_, lean_object* v_a_2702_, lean_object* v_a_2703_, lean_object* v_a_2704_, lean_object* v_a_2705_, lean_object* v_a_2706_){
_start:
{
lean_object* v_rearranged_2708_; lean_object* v___x_2709_; 
v_rearranged_2708_ = lean_ctor_get(v_a_2701_, 4);
lean_inc_ref(v_rearranged_2708_);
lean_inc(v_a_2706_);
lean_inc_ref(v_a_2705_);
lean_inc(v_a_2704_);
lean_inc_ref(v_a_2703_);
lean_inc_ref(v_b_2700_);
lean_inc_ref(v_a_2699_);
v___x_2709_ = lean_apply_7(v_rearranged_2708_, v_a_2699_, v_b_2700_, v_a_2703_, v_a_2704_, v_a_2705_, v_a_2706_, lean_box(0));
if (lean_obj_tag(v___x_2709_) == 0)
{
lean_object* v_a_2710_; lean_object* v___x_2712_; uint8_t v_isShared_2713_; uint8_t v_isSharedCheck_2723_; 
v_a_2710_ = lean_ctor_get(v___x_2709_, 0);
v_isSharedCheck_2723_ = !lean_is_exclusive(v___x_2709_);
if (v_isSharedCheck_2723_ == 0)
{
v___x_2712_ = v___x_2709_;
v_isShared_2713_ = v_isSharedCheck_2723_;
goto v_resetjp_2711_;
}
else
{
lean_inc(v_a_2710_);
lean_dec(v___x_2709_);
v___x_2712_ = lean_box(0);
v_isShared_2713_ = v_isSharedCheck_2723_;
goto v_resetjp_2711_;
}
v_resetjp_2711_:
{
if (lean_obj_tag(v_a_2710_) == 1)
{
lean_object* v_val_2714_; lean_object* v___x_2716_; 
lean_dec_ref(v_b_2700_);
lean_dec_ref(v_a_2699_);
v_val_2714_ = lean_ctor_get(v_a_2710_, 0);
lean_inc(v_val_2714_);
lean_dec_ref_known(v_a_2710_, 1);
if (v_isShared_2713_ == 0)
{
lean_ctor_set(v___x_2712_, 0, v_val_2714_);
v___x_2716_ = v___x_2712_;
goto v_reusejp_2715_;
}
else
{
lean_object* v_reuseFailAlloc_2717_; 
v_reuseFailAlloc_2717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2717_, 0, v_val_2714_);
v___x_2716_ = v_reuseFailAlloc_2717_;
goto v_reusejp_2715_;
}
v_reusejp_2715_:
{
return v___x_2716_;
}
}
else
{
lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; 
lean_del_object(v___x_2712_);
lean_dec(v_a_2710_);
v___x_2718_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg___closed__6));
v___x_2719_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_arithmeticIff___closed__0, &lp_vampireReplay_Vampire_Reconstruct_arithmeticIff___closed__0_once, _init_lp_vampireReplay_Vampire_Reconstruct_arithmeticIff___closed__0);
v___x_2720_ = l_Lean_mkAppB(v___x_2719_, v_a_2699_, v_b_2700_);
v___x_2721_ = lean_unsigned_to_nat(2u);
v___x_2722_ = lp_vampireReplay_Vampire_Reconstruct_byArithmetic(v___x_2718_, v___x_2720_, v___x_2721_, v_a_2701_, v_a_2702_, v_a_2703_, v_a_2704_, v_a_2705_, v_a_2706_);
return v___x_2722_;
}
}
}
else
{
lean_object* v_a_2724_; lean_object* v___x_2726_; uint8_t v_isShared_2727_; uint8_t v_isSharedCheck_2731_; 
lean_dec_ref(v_b_2700_);
lean_dec_ref(v_a_2699_);
v_a_2724_ = lean_ctor_get(v___x_2709_, 0);
v_isSharedCheck_2731_ = !lean_is_exclusive(v___x_2709_);
if (v_isSharedCheck_2731_ == 0)
{
v___x_2726_ = v___x_2709_;
v_isShared_2727_ = v_isSharedCheck_2731_;
goto v_resetjp_2725_;
}
else
{
lean_inc(v_a_2724_);
lean_dec(v___x_2709_);
v___x_2726_ = lean_box(0);
v_isShared_2727_ = v_isSharedCheck_2731_;
goto v_resetjp_2725_;
}
v_resetjp_2725_:
{
lean_object* v___x_2729_; 
if (v_isShared_2727_ == 0)
{
v___x_2729_ = v___x_2726_;
goto v_reusejp_2728_;
}
else
{
lean_object* v_reuseFailAlloc_2730_; 
v_reuseFailAlloc_2730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2730_, 0, v_a_2724_);
v___x_2729_ = v_reuseFailAlloc_2730_;
goto v_reusejp_2728_;
}
v_reusejp_2728_:
{
return v___x_2729_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_arithmeticIff___boxed(lean_object* v_a_2732_, lean_object* v_b_2733_, lean_object* v_a_2734_, lean_object* v_a_2735_, lean_object* v_a_2736_, lean_object* v_a_2737_, lean_object* v_a_2738_, lean_object* v_a_2739_, lean_object* v_a_2740_){
_start:
{
lean_object* v_res_2741_; 
v_res_2741_ = lp_vampireReplay_Vampire_Reconstruct_arithmeticIff(v_a_2732_, v_b_2733_, v_a_2734_, v_a_2735_, v_a_2736_, v_a_2737_, v_a_2738_, v_a_2739_);
lean_dec(v_a_2739_);
lean_dec_ref(v_a_2738_);
lean_dec(v_a_2737_);
lean_dec_ref(v_a_2736_);
lean_dec(v_a_2735_);
lean_dec_ref(v_a_2734_);
return v_res_2741_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_vampireReplay_VampireReplay_Reconstruct_Choice(uint8_t builtin);
lean_object* initialize_vampireReplay_VampireReplay_Reconstruct_Junction(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_vampireReplay_VampireReplay_Reconstruct_Literal(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_vampireReplay_VampireReplay_Reconstruct_Choice(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_vampireReplay_VampireReplay_Reconstruct_Junction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
