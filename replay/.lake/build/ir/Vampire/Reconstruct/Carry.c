// Lean compiler output
// Module: Vampire.Reconstruct.Carry
// Imports: public import Init public meta import Init public import Vampire.Reconstruct.Literal
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
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_placeLiteral(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_bvar___override(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_elimParts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carrying___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carrying___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_carrying___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_carrying___lam__1___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_carrying___lam__1___closed__0_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_carrying___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_carrying___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(247, 80, 99, 121, 74, 33, 203, 108)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_carrying___lam__1___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_carrying___lam__1___closed__1_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carrying___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carrying___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carrying___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carrying___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carrying___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carrying___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_carrying___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Or"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_carrying___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_carrying___closed__0_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_carrying___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_carrying___closed__0_value),LEAN_SCALAR_PTR_LITERAL(34, 237, 162, 225, 217, 98, 205, 196)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_carrying___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_carrying___closed__1_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_carrying___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_carrying___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_carrying___closed__2_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_carrying___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_carrying___closed__2_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_carrying___closed__3 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_carrying___closed__3_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_carrying___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "inl"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_carrying___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_carrying___closed__4_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_carrying___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_carrying___closed__0_value),LEAN_SCALAR_PTR_LITERAL(34, 237, 162, 225, 217, 98, 205, 196)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_carrying___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_carrying___closed__5_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_carrying___closed__4_value),LEAN_SCALAR_PTR_LITERAL(115, 149, 175, 58, 225, 90, 105, 195)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_carrying___closed__5 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_carrying___closed__5_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_carrying___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_carrying___closed__6;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_carrying___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_carrying___closed__7;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_carrying___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "elim"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_carrying___closed__8 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_carrying___closed__8_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_carrying___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_carrying___closed__0_value),LEAN_SCALAR_PTR_LITERAL(34, 237, 162, 225, 217, 98, 205, 196)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_carrying___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_carrying___closed__9_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_carrying___closed__8_value),LEAN_SCALAR_PTR_LITERAL(94, 178, 144, 142, 106, 224, 229, 213)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_carrying___closed__9 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_carrying___closed__9_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_carrying___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_carrying___closed__10;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_carrying___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "imp"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_carrying___closed__11 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_carrying___closed__11_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_carrying___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_carrying___closed__0_value),LEAN_SCALAR_PTR_LITERAL(34, 237, 162, 225, 217, 98, 205, 196)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_carrying___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_carrying___closed__12_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_carrying___closed__11_value),LEAN_SCALAR_PTR_LITERAL(126, 233, 224, 142, 141, 35, 198, 209)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_carrying___closed__12 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_carrying___closed__12_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_carrying___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_carrying___closed__13;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carrying(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carrying___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryWith___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryWith___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryWith___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryWith___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryWith___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryWith___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryWith(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryWith___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryPast___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryPast___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryPast___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryPast___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryPast___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryPast___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryPast(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryPast___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___lam__0___closed__0 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___lam__0___closed__0_value;
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___lam__0___closed__1 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___lam__0___closed__1_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___lam__0___closed__2;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Not"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___lam__0___closed__3 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___lam__0___closed__3_value;
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(185, 11, 203, 55, 27, 192, 137, 230)}};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___lam__0___closed__4 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___lam__0___closed__4_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "symm"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___closed__0_value;
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___closed__1_value_aux_0),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(220, 149, 144, 59, 77, 93, 25, 217)}};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___closed__1 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___closed__1_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Ne"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___closed__2 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___closed__2_value;
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 247, 70, 70, 118, 145, 235, 92)}};
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___closed__3_value_aux_0),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(106, 137, 24, 74, 49, 62, 0, 94)}};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___closed__3 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___closed__3_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryAll_alike___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryAll_alike___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryAll_alike(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryAll_alike___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryAll___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryAll___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_vampireReplay_Vampire_Reconstruct_carryAll___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_vampireReplay_Vampire_Reconstruct_carryAll___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_carryAll___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_carryAll___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carrying___lam__0(lean_object* v_inStep_1_, lean_object* v_i_2_, lean_object* v_t_3_, lean_object* v_a_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_, lean_object* v___y_9_, lean_object* v___y_10_){
_start:
{
lean_object* v___x_12_; 
lean_inc(v___y_10_);
lean_inc_ref(v___y_9_);
lean_inc(v___y_8_);
lean_inc_ref(v___y_7_);
lean_inc(v___y_6_);
lean_inc_ref(v___y_5_);
lean_inc_ref(v_a_4_);
v___x_12_ = lean_apply_10(v_inStep_1_, v_i_2_, v_a_4_, v_t_3_, v___y_5_, v___y_6_, v___y_7_, v___y_8_, v___y_9_, v___y_10_, lean_box(0));
if (lean_obj_tag(v___x_12_) == 0)
{
lean_object* v_a_13_; 
v_a_13_ = lean_ctor_get(v___x_12_, 0);
lean_inc(v_a_13_);
if (lean_obj_tag(v_a_13_) == 0)
{
lean_dec_ref(v_a_4_);
return v___x_12_;
}
else
{
lean_object* v_val_14_; lean_object* v___x_16_; uint8_t v_isShared_17_; uint8_t v_isSharedCheck_44_; 
lean_dec_ref_known(v___x_12_, 1);
v_val_14_ = lean_ctor_get(v_a_13_, 0);
v_isSharedCheck_44_ = !lean_is_exclusive(v_a_13_);
if (v_isSharedCheck_44_ == 0)
{
v___x_16_ = v_a_13_;
v_isShared_17_ = v_isSharedCheck_44_;
goto v_resetjp_15_;
}
else
{
lean_inc(v_val_14_);
lean_dec(v_a_13_);
v___x_16_ = lean_box(0);
v_isShared_17_ = v_isSharedCheck_44_;
goto v_resetjp_15_;
}
v_resetjp_15_:
{
lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; uint8_t v___x_21_; uint8_t v___x_22_; uint8_t v___x_23_; lean_object* v___x_24_; 
v___x_18_ = lean_unsigned_to_nat(1u);
v___x_19_ = lean_mk_empty_array_with_capacity(v___x_18_);
v___x_20_ = lean_array_push(v___x_19_, v_a_4_);
v___x_21_ = 0;
v___x_22_ = 1;
v___x_23_ = 1;
v___x_24_ = l_Lean_Meta_mkLambdaFVars(v___x_20_, v_val_14_, v___x_21_, v___x_22_, v___x_21_, v___x_22_, v___x_23_, v___y_7_, v___y_8_, v___y_9_, v___y_10_);
lean_dec_ref(v___x_20_);
if (lean_obj_tag(v___x_24_) == 0)
{
lean_object* v_a_25_; lean_object* v___x_27_; uint8_t v_isShared_28_; uint8_t v_isSharedCheck_35_; 
v_a_25_ = lean_ctor_get(v___x_24_, 0);
v_isSharedCheck_35_ = !lean_is_exclusive(v___x_24_);
if (v_isSharedCheck_35_ == 0)
{
v___x_27_ = v___x_24_;
v_isShared_28_ = v_isSharedCheck_35_;
goto v_resetjp_26_;
}
else
{
lean_inc(v_a_25_);
lean_dec(v___x_24_);
v___x_27_ = lean_box(0);
v_isShared_28_ = v_isSharedCheck_35_;
goto v_resetjp_26_;
}
v_resetjp_26_:
{
lean_object* v___x_30_; 
if (v_isShared_17_ == 0)
{
lean_ctor_set(v___x_16_, 0, v_a_25_);
v___x_30_ = v___x_16_;
goto v_reusejp_29_;
}
else
{
lean_object* v_reuseFailAlloc_34_; 
v_reuseFailAlloc_34_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_34_, 0, v_a_25_);
v___x_30_ = v_reuseFailAlloc_34_;
goto v_reusejp_29_;
}
v_reusejp_29_:
{
lean_object* v___x_32_; 
if (v_isShared_28_ == 0)
{
lean_ctor_set(v___x_27_, 0, v___x_30_);
v___x_32_ = v___x_27_;
goto v_reusejp_31_;
}
else
{
lean_object* v_reuseFailAlloc_33_; 
v_reuseFailAlloc_33_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_33_, 0, v___x_30_);
v___x_32_ = v_reuseFailAlloc_33_;
goto v_reusejp_31_;
}
v_reusejp_31_:
{
return v___x_32_;
}
}
}
}
else
{
lean_object* v_a_36_; lean_object* v___x_38_; uint8_t v_isShared_39_; uint8_t v_isSharedCheck_43_; 
lean_del_object(v___x_16_);
v_a_36_ = lean_ctor_get(v___x_24_, 0);
v_isSharedCheck_43_ = !lean_is_exclusive(v___x_24_);
if (v_isSharedCheck_43_ == 0)
{
v___x_38_ = v___x_24_;
v_isShared_39_ = v_isSharedCheck_43_;
goto v_resetjp_37_;
}
else
{
lean_inc(v_a_36_);
lean_dec(v___x_24_);
v___x_38_ = lean_box(0);
v_isShared_39_ = v_isSharedCheck_43_;
goto v_resetjp_37_;
}
v_resetjp_37_:
{
lean_object* v___x_41_; 
if (v_isShared_39_ == 0)
{
v___x_41_ = v___x_38_;
goto v_reusejp_40_;
}
else
{
lean_object* v_reuseFailAlloc_42_; 
v_reuseFailAlloc_42_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_42_, 0, v_a_36_);
v___x_41_ = v_reuseFailAlloc_42_;
goto v_reusejp_40_;
}
v_reusejp_40_:
{
return v___x_41_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_a_4_);
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carrying___lam__0___boxed(lean_object* v_inStep_45_, lean_object* v_i_46_, lean_object* v_t_47_, lean_object* v_a_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_){
_start:
{
lean_object* v_res_56_; 
v_res_56_ = lp_vampireReplay_Vampire_Reconstruct_carrying___lam__0(v_inStep_45_, v_i_46_, v_t_47_, v_a_48_, v___y_49_, v___y_50_, v___y_51_, v___y_52_, v___y_53_, v___y_54_);
lean_dec(v___y_54_);
lean_dec_ref(v___y_53_);
lean_dec(v___y_52_);
lean_dec_ref(v___y_51_);
lean_dec(v___y_50_);
lean_dec_ref(v___y_49_);
return v_res_56_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carrying___lam__1(lean_object* v_inStep_60_, lean_object* v_i_61_, lean_object* v_from___62_, lean_object* v_t_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_){
_start:
{
lean_object* v___f_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
v___f_71_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_carrying___lam__0___boxed), 11, 3);
lean_closure_set(v___f_71_, 0, v_inStep_60_);
lean_closure_set(v___f_71_, 1, v_i_61_);
lean_closure_set(v___f_71_, 2, v_t_63_);
v___x_72_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_carrying___lam__1___closed__1));
v___x_73_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_72_, v_from___62_, v___f_71_, v___y_64_, v___y_65_, v___y_66_, v___y_67_, v___y_68_, v___y_69_);
return v___x_73_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carrying___lam__1___boxed(lean_object* v_inStep_74_, lean_object* v_i_75_, lean_object* v_from___76_, lean_object* v_t_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = lp_vampireReplay_Vampire_Reconstruct_carrying___lam__1(v_inStep_74_, v_i_75_, v_from___76_, v_t_77_, v___y_78_, v___y_79_, v___y_80_, v___y_81_, v___y_82_, v___y_83_);
lean_dec(v___y_83_);
lean_dec_ref(v___y_82_);
lean_dec(v___y_81_);
lean_dec_ref(v___y_80_);
lean_dec(v___y_79_);
lean_dec_ref(v___y_78_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carrying___lam__2(lean_object* v_whole_86_, lean_object* v_i_87_, lean_object* v_target_88_, lean_object* v_a_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_){
_start:
{
lean_object* v___x_97_; 
lean_inc(v___y_95_);
lean_inc_ref(v___y_94_);
lean_inc(v___y_93_);
lean_inc_ref(v___y_92_);
lean_inc(v___y_91_);
lean_inc_ref(v___y_90_);
lean_inc_ref(v_a_89_);
v___x_97_ = lean_apply_10(v_whole_86_, v_i_87_, v_a_89_, v_target_88_, v___y_90_, v___y_91_, v___y_92_, v___y_93_, v___y_94_, v___y_95_, lean_box(0));
if (lean_obj_tag(v___x_97_) == 0)
{
lean_object* v_a_98_; 
v_a_98_ = lean_ctor_get(v___x_97_, 0);
lean_inc(v_a_98_);
if (lean_obj_tag(v_a_98_) == 0)
{
lean_dec_ref(v_a_89_);
return v___x_97_;
}
else
{
lean_object* v_val_99_; lean_object* v___x_101_; uint8_t v_isShared_102_; uint8_t v_isSharedCheck_129_; 
lean_dec_ref_known(v___x_97_, 1);
v_val_99_ = lean_ctor_get(v_a_98_, 0);
v_isSharedCheck_129_ = !lean_is_exclusive(v_a_98_);
if (v_isSharedCheck_129_ == 0)
{
v___x_101_ = v_a_98_;
v_isShared_102_ = v_isSharedCheck_129_;
goto v_resetjp_100_;
}
else
{
lean_inc(v_val_99_);
lean_dec(v_a_98_);
v___x_101_ = lean_box(0);
v_isShared_102_ = v_isSharedCheck_129_;
goto v_resetjp_100_;
}
v_resetjp_100_:
{
lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; uint8_t v___x_106_; uint8_t v___x_107_; uint8_t v___x_108_; lean_object* v___x_109_; 
v___x_103_ = lean_unsigned_to_nat(1u);
v___x_104_ = lean_mk_empty_array_with_capacity(v___x_103_);
v___x_105_ = lean_array_push(v___x_104_, v_a_89_);
v___x_106_ = 0;
v___x_107_ = 1;
v___x_108_ = 1;
v___x_109_ = l_Lean_Meta_mkLambdaFVars(v___x_105_, v_val_99_, v___x_106_, v___x_107_, v___x_106_, v___x_107_, v___x_108_, v___y_92_, v___y_93_, v___y_94_, v___y_95_);
lean_dec_ref(v___x_105_);
if (lean_obj_tag(v___x_109_) == 0)
{
lean_object* v_a_110_; lean_object* v___x_112_; uint8_t v_isShared_113_; uint8_t v_isSharedCheck_120_; 
v_a_110_ = lean_ctor_get(v___x_109_, 0);
v_isSharedCheck_120_ = !lean_is_exclusive(v___x_109_);
if (v_isSharedCheck_120_ == 0)
{
v___x_112_ = v___x_109_;
v_isShared_113_ = v_isSharedCheck_120_;
goto v_resetjp_111_;
}
else
{
lean_inc(v_a_110_);
lean_dec(v___x_109_);
v___x_112_ = lean_box(0);
v_isShared_113_ = v_isSharedCheck_120_;
goto v_resetjp_111_;
}
v_resetjp_111_:
{
lean_object* v___x_115_; 
if (v_isShared_102_ == 0)
{
lean_ctor_set(v___x_101_, 0, v_a_110_);
v___x_115_ = v___x_101_;
goto v_reusejp_114_;
}
else
{
lean_object* v_reuseFailAlloc_119_; 
v_reuseFailAlloc_119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_119_, 0, v_a_110_);
v___x_115_ = v_reuseFailAlloc_119_;
goto v_reusejp_114_;
}
v_reusejp_114_:
{
lean_object* v___x_117_; 
if (v_isShared_113_ == 0)
{
lean_ctor_set(v___x_112_, 0, v___x_115_);
v___x_117_ = v___x_112_;
goto v_reusejp_116_;
}
else
{
lean_object* v_reuseFailAlloc_118_; 
v_reuseFailAlloc_118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_118_, 0, v___x_115_);
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
else
{
lean_object* v_a_121_; lean_object* v___x_123_; uint8_t v_isShared_124_; uint8_t v_isSharedCheck_128_; 
lean_del_object(v___x_101_);
v_a_121_ = lean_ctor_get(v___x_109_, 0);
v_isSharedCheck_128_ = !lean_is_exclusive(v___x_109_);
if (v_isSharedCheck_128_ == 0)
{
v___x_123_ = v___x_109_;
v_isShared_124_ = v_isSharedCheck_128_;
goto v_resetjp_122_;
}
else
{
lean_inc(v_a_121_);
lean_dec(v___x_109_);
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
}
}
}
else
{
lean_dec_ref(v_a_89_);
return v___x_97_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carrying___lam__2___boxed(lean_object* v_whole_130_, lean_object* v_i_131_, lean_object* v_target_132_, lean_object* v_a_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_){
_start:
{
lean_object* v_res_141_; 
v_res_141_ = lp_vampireReplay_Vampire_Reconstruct_carrying___lam__2(v_whole_130_, v_i_131_, v_target_132_, v_a_133_, v___y_134_, v___y_135_, v___y_136_, v___y_137_, v___y_138_, v___y_139_);
lean_dec(v___y_139_);
lean_dec_ref(v___y_138_);
lean_dec(v___y_137_);
lean_dec_ref(v___y_136_);
lean_dec(v___y_135_);
lean_dec_ref(v___y_134_);
return v_res_141_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carrying___lam__3(lean_object* v___f_142_, lean_object* v_from___143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_){
_start:
{
lean_object* v___x_151_; lean_object* v___x_152_; 
v___x_151_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_carrying___lam__1___closed__1));
v___x_152_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_151_, v_from___143_, v___f_142_, v___y_144_, v___y_145_, v___y_146_, v___y_147_, v___y_148_, v___y_149_);
return v___x_152_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carrying___lam__3___boxed(lean_object* v___f_153_, lean_object* v_from___154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_, lean_object* v___y_161_){
_start:
{
lean_object* v_res_162_; 
v_res_162_ = lp_vampireReplay_Vampire_Reconstruct_carrying___lam__3(v___f_153_, v_from___154_, v___y_155_, v___y_156_, v___y_157_, v___y_158_, v___y_159_, v___y_160_);
lean_dec(v___y_160_);
lean_dec_ref(v___y_159_);
lean_dec(v___y_158_);
lean_dec_ref(v___y_157_);
lean_dec(v___y_156_);
lean_dec_ref(v___y_155_);
return v_res_162_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_carrying___closed__6(void){
_start:
{
lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; 
v___x_173_ = lean_box(0);
v___x_174_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_carrying___closed__5));
v___x_175_ = l_Lean_Expr_const___override(v___x_174_, v___x_173_);
return v___x_175_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_carrying___closed__7(void){
_start:
{
lean_object* v___x_176_; lean_object* v___x_177_; 
v___x_176_ = lean_unsigned_to_nat(0u);
v___x_177_ = l_Lean_Expr_bvar___override(v___x_176_);
return v___x_177_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_carrying___closed__10(void){
_start:
{
lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_182_ = lean_box(0);
v___x_183_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_carrying___closed__9));
v___x_184_ = l_Lean_Expr_const___override(v___x_183_, v___x_182_);
return v___x_184_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_carrying___closed__13(void){
_start:
{
lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; 
v___x_189_ = lean_box(0);
v___x_190_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_carrying___closed__12));
v___x_191_ = l_Lean_Expr_const___override(v___x_190_, v___x_189_);
return v___x_191_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carrying(lean_object* v_source_192_, lean_object* v_target_193_, lean_object* v_i_194_, lean_object* v_inStep_195_, lean_object* v_whole_196_, lean_object* v_a_197_, lean_object* v_a_198_, lean_object* v_a_199_, lean_object* v_a_200_, lean_object* v_a_201_, lean_object* v_a_202_){
_start:
{
lean_object* v___f_204_; lean_object* v___x_205_; lean_object* v___x_206_; uint8_t v___x_207_; 
lean_inc_ref(v_target_193_);
lean_inc(v_i_194_);
lean_inc_ref(v_whole_196_);
v___f_204_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_carrying___lam__2___boxed), 11, 3);
lean_closure_set(v___f_204_, 0, v_whole_196_);
lean_closure_set(v___f_204_, 1, v_i_194_);
lean_closure_set(v___f_204_, 2, v_target_193_);
v___x_205_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_carrying___closed__1));
v___x_206_ = lean_unsigned_to_nat(2u);
v___x_207_ = l_Lean_Expr_isAppOfArity(v_source_192_, v___x_205_, v___x_206_);
if (v___x_207_ == 0)
{
uint8_t v___x_208_; 
lean_dec_ref(v_whole_196_);
v___x_208_ = l_Lean_Expr_isAppOfArity(v_target_193_, v___x_205_, v___x_206_);
if (v___x_208_ == 0)
{
lean_object* v___x_209_; 
lean_dec_ref(v_inStep_195_);
lean_dec(v_i_194_);
lean_dec_ref(v_target_193_);
v___x_209_ = lp_vampireReplay_Vampire_Reconstruct_carrying___lam__3(v___f_204_, v_source_192_, v_a_197_, v_a_198_, v_a_199_, v_a_200_, v_a_201_, v_a_202_);
return v___x_209_;
}
else
{
lean_object* v___x_210_; lean_object* v_t_211_; lean_object* v___x_212_; 
v___x_210_ = l_Lean_Expr_appFn_x21(v_target_193_);
v_t_211_ = l_Lean_Expr_appArg_x21(v___x_210_);
lean_dec_ref(v___x_210_);
lean_inc_ref(v_t_211_);
lean_inc_ref(v_source_192_);
v___x_212_ = lp_vampireReplay_Vampire_Reconstruct_carrying___lam__1(v_inStep_195_, v_i_194_, v_source_192_, v_t_211_, v_a_197_, v_a_198_, v_a_199_, v_a_200_, v_a_201_, v_a_202_);
if (lean_obj_tag(v___x_212_) == 0)
{
lean_object* v_a_213_; lean_object* v___x_215_; uint8_t v_isShared_216_; uint8_t v_isSharedCheck_237_; 
v_a_213_ = lean_ctor_get(v___x_212_, 0);
v_isSharedCheck_237_ = !lean_is_exclusive(v___x_212_);
if (v_isSharedCheck_237_ == 0)
{
v___x_215_ = v___x_212_;
v_isShared_216_ = v_isSharedCheck_237_;
goto v_resetjp_214_;
}
else
{
lean_inc(v_a_213_);
lean_dec(v___x_212_);
v___x_215_ = lean_box(0);
v_isShared_216_ = v_isSharedCheck_237_;
goto v_resetjp_214_;
}
v_resetjp_214_:
{
if (lean_obj_tag(v_a_213_) == 1)
{
lean_object* v_val_217_; lean_object* v___x_219_; uint8_t v_isShared_220_; uint8_t v_isSharedCheck_235_; 
lean_dec_ref(v___f_204_);
v_val_217_ = lean_ctor_get(v_a_213_, 0);
v_isSharedCheck_235_ = !lean_is_exclusive(v_a_213_);
if (v_isSharedCheck_235_ == 0)
{
v___x_219_ = v_a_213_;
v_isShared_220_ = v_isSharedCheck_235_;
goto v_resetjp_218_;
}
else
{
lean_inc(v_val_217_);
lean_dec(v_a_213_);
v___x_219_ = lean_box(0);
v_isShared_220_ = v_isSharedCheck_235_;
goto v_resetjp_218_;
}
v_resetjp_218_:
{
lean_object* v_restT_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; uint8_t v___x_227_; lean_object* v___x_228_; lean_object* v___x_230_; 
v_restT_221_ = l_Lean_Expr_appArg_x21(v_target_193_);
lean_dec_ref(v_target_193_);
v___x_222_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_carrying___closed__3));
v___x_223_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_carrying___closed__6, &lp_vampireReplay_Vampire_Reconstruct_carrying___closed__6_once, _init_lp_vampireReplay_Vampire_Reconstruct_carrying___closed__6);
v___x_224_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_carrying___closed__7, &lp_vampireReplay_Vampire_Reconstruct_carrying___closed__7_once, _init_lp_vampireReplay_Vampire_Reconstruct_carrying___closed__7);
v___x_225_ = l_Lean_Expr_app___override(v_val_217_, v___x_224_);
v___x_226_ = l_Lean_mkApp3(v___x_223_, v_t_211_, v_restT_221_, v___x_225_);
v___x_227_ = 0;
v___x_228_ = l_Lean_Expr_lam___override(v___x_222_, v_source_192_, v___x_226_, v___x_227_);
if (v_isShared_220_ == 0)
{
lean_ctor_set(v___x_219_, 0, v___x_228_);
v___x_230_ = v___x_219_;
goto v_reusejp_229_;
}
else
{
lean_object* v_reuseFailAlloc_234_; 
v_reuseFailAlloc_234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_234_, 0, v___x_228_);
v___x_230_ = v_reuseFailAlloc_234_;
goto v_reusejp_229_;
}
v_reusejp_229_:
{
lean_object* v___x_232_; 
if (v_isShared_216_ == 0)
{
lean_ctor_set(v___x_215_, 0, v___x_230_);
v___x_232_ = v___x_215_;
goto v_reusejp_231_;
}
else
{
lean_object* v_reuseFailAlloc_233_; 
v_reuseFailAlloc_233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_233_, 0, v___x_230_);
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
else
{
lean_object* v___x_236_; 
lean_del_object(v___x_215_);
lean_dec(v_a_213_);
lean_dec_ref(v_t_211_);
lean_dec_ref(v_target_193_);
v___x_236_ = lp_vampireReplay_Vampire_Reconstruct_carrying___lam__3(v___f_204_, v_source_192_, v_a_197_, v_a_198_, v_a_199_, v_a_200_, v_a_201_, v_a_202_);
return v___x_236_;
}
}
}
else
{
lean_dec_ref(v_t_211_);
lean_dec_ref(v___f_204_);
lean_dec_ref(v_target_193_);
lean_dec_ref(v_source_192_);
return v___x_212_;
}
}
}
else
{
lean_object* v___x_238_; lean_object* v_s_239_; lean_object* v_restS_240_; lean_object* v___y_242_; lean_object* v___y_243_; lean_object* v___y_244_; lean_object* v___y_245_; lean_object* v___y_246_; lean_object* v___y_247_; uint8_t v___x_288_; 
v___x_238_ = l_Lean_Expr_appFn_x21(v_source_192_);
v_s_239_ = l_Lean_Expr_appArg_x21(v___x_238_);
lean_dec_ref(v___x_238_);
v_restS_240_ = l_Lean_Expr_appArg_x21(v_source_192_);
v___x_288_ = l_Lean_Expr_isAppOfArity(v_target_193_, v___x_205_, v___x_206_);
if (v___x_288_ == 0)
{
v___y_242_ = v_a_197_;
v___y_243_ = v_a_198_;
v___y_244_ = v_a_199_;
v___y_245_ = v_a_200_;
v___y_246_ = v_a_201_;
v___y_247_ = v_a_202_;
goto v___jp_241_;
}
else
{
lean_object* v___x_289_; lean_object* v_t_290_; lean_object* v___x_291_; 
v___x_289_ = l_Lean_Expr_appFn_x21(v_target_193_);
v_t_290_ = l_Lean_Expr_appArg_x21(v___x_289_);
lean_dec_ref(v___x_289_);
lean_inc_ref(v_t_290_);
lean_inc_ref(v_s_239_);
lean_inc(v_i_194_);
lean_inc_ref(v_inStep_195_);
v___x_291_ = lp_vampireReplay_Vampire_Reconstruct_carrying___lam__1(v_inStep_195_, v_i_194_, v_s_239_, v_t_290_, v_a_197_, v_a_198_, v_a_199_, v_a_200_, v_a_201_, v_a_202_);
if (lean_obj_tag(v___x_291_) == 0)
{
lean_object* v_a_292_; 
v_a_292_ = lean_ctor_get(v___x_291_, 0);
lean_inc(v_a_292_);
lean_dec_ref_known(v___x_291_, 1);
if (lean_obj_tag(v_a_292_) == 1)
{
lean_object* v_val_293_; lean_object* v_restT_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; 
lean_dec_ref(v___f_204_);
lean_dec_ref(v_source_192_);
v_val_293_ = lean_ctor_get(v_a_292_, 0);
lean_inc(v_val_293_);
lean_dec_ref_known(v_a_292_, 1);
v_restT_294_ = l_Lean_Expr_appArg_x21(v_target_193_);
lean_dec_ref(v_target_193_);
v___x_295_ = lean_unsigned_to_nat(1u);
v___x_296_ = lean_nat_add(v_i_194_, v___x_295_);
lean_dec(v_i_194_);
lean_inc_ref(v_restT_294_);
lean_inc_ref(v_restS_240_);
v___x_297_ = lp_vampireReplay_Vampire_Reconstruct_carrying(v_restS_240_, v_restT_294_, v___x_296_, v_inStep_195_, v_whole_196_, v_a_197_, v_a_198_, v_a_199_, v_a_200_, v_a_201_, v_a_202_);
if (lean_obj_tag(v___x_297_) == 0)
{
lean_object* v_a_298_; lean_object* v___x_300_; uint8_t v_isShared_301_; uint8_t v_isSharedCheck_319_; 
v_a_298_ = lean_ctor_get(v___x_297_, 0);
v_isSharedCheck_319_ = !lean_is_exclusive(v___x_297_);
if (v_isSharedCheck_319_ == 0)
{
v___x_300_ = v___x_297_;
v_isShared_301_ = v_isSharedCheck_319_;
goto v_resetjp_299_;
}
else
{
lean_inc(v_a_298_);
lean_dec(v___x_297_);
v___x_300_ = lean_box(0);
v_isShared_301_ = v_isSharedCheck_319_;
goto v_resetjp_299_;
}
v_resetjp_299_:
{
if (lean_obj_tag(v_a_298_) == 1)
{
lean_object* v_val_302_; lean_object* v___x_304_; uint8_t v_isShared_305_; uint8_t v_isSharedCheck_314_; 
v_val_302_ = lean_ctor_get(v_a_298_, 0);
v_isSharedCheck_314_ = !lean_is_exclusive(v_a_298_);
if (v_isSharedCheck_314_ == 0)
{
v___x_304_ = v_a_298_;
v_isShared_305_ = v_isSharedCheck_314_;
goto v_resetjp_303_;
}
else
{
lean_inc(v_val_302_);
lean_dec(v_a_298_);
v___x_304_ = lean_box(0);
v_isShared_305_ = v_isSharedCheck_314_;
goto v_resetjp_303_;
}
v_resetjp_303_:
{
lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_309_; 
v___x_306_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_carrying___closed__13, &lp_vampireReplay_Vampire_Reconstruct_carrying___closed__13_once, _init_lp_vampireReplay_Vampire_Reconstruct_carrying___closed__13);
v___x_307_ = l_Lean_mkApp6(v___x_306_, v_s_239_, v_t_290_, v_restS_240_, v_restT_294_, v_val_293_, v_val_302_);
if (v_isShared_305_ == 0)
{
lean_ctor_set(v___x_304_, 0, v___x_307_);
v___x_309_ = v___x_304_;
goto v_reusejp_308_;
}
else
{
lean_object* v_reuseFailAlloc_313_; 
v_reuseFailAlloc_313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_313_, 0, v___x_307_);
v___x_309_ = v_reuseFailAlloc_313_;
goto v_reusejp_308_;
}
v_reusejp_308_:
{
lean_object* v___x_311_; 
if (v_isShared_301_ == 0)
{
lean_ctor_set(v___x_300_, 0, v___x_309_);
v___x_311_ = v___x_300_;
goto v_reusejp_310_;
}
else
{
lean_object* v_reuseFailAlloc_312_; 
v_reuseFailAlloc_312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_312_, 0, v___x_309_);
v___x_311_ = v_reuseFailAlloc_312_;
goto v_reusejp_310_;
}
v_reusejp_310_:
{
return v___x_311_;
}
}
}
}
else
{
lean_object* v___x_315_; lean_object* v___x_317_; 
lean_dec(v_a_298_);
lean_dec_ref(v_restT_294_);
lean_dec(v_val_293_);
lean_dec_ref(v_t_290_);
lean_dec_ref(v_restS_240_);
lean_dec_ref(v_s_239_);
v___x_315_ = lean_box(0);
if (v_isShared_301_ == 0)
{
lean_ctor_set(v___x_300_, 0, v___x_315_);
v___x_317_ = v___x_300_;
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
}
else
{
lean_dec_ref(v_restT_294_);
lean_dec(v_val_293_);
lean_dec_ref(v_t_290_);
lean_dec_ref(v_restS_240_);
lean_dec_ref(v_s_239_);
return v___x_297_;
}
}
else
{
lean_dec(v_a_292_);
lean_dec_ref(v_t_290_);
v___y_242_ = v_a_197_;
v___y_243_ = v_a_198_;
v___y_244_ = v_a_199_;
v___y_245_ = v_a_200_;
v___y_246_ = v_a_201_;
v___y_247_ = v_a_202_;
goto v___jp_241_;
}
}
else
{
lean_dec_ref(v_t_290_);
lean_dec_ref(v_restS_240_);
lean_dec_ref(v_s_239_);
lean_dec_ref(v___f_204_);
lean_dec_ref(v_whole_196_);
lean_dec_ref(v_inStep_195_);
lean_dec(v_i_194_);
lean_dec_ref(v_target_193_);
lean_dec_ref(v_source_192_);
return v___x_291_;
}
}
v___jp_241_:
{
lean_object* v___x_248_; 
lean_inc_ref(v_s_239_);
v___x_248_ = lp_vampireReplay_Vampire_Reconstruct_carrying___lam__3(v___f_204_, v_s_239_, v___y_242_, v___y_243_, v___y_244_, v___y_245_, v___y_246_, v___y_247_);
if (lean_obj_tag(v___x_248_) == 0)
{
lean_object* v_a_249_; lean_object* v___x_251_; uint8_t v_isShared_252_; uint8_t v_isSharedCheck_287_; 
v_a_249_ = lean_ctor_get(v___x_248_, 0);
v_isSharedCheck_287_ = !lean_is_exclusive(v___x_248_);
if (v_isSharedCheck_287_ == 0)
{
v___x_251_ = v___x_248_;
v_isShared_252_ = v_isSharedCheck_287_;
goto v_resetjp_250_;
}
else
{
lean_inc(v_a_249_);
lean_dec(v___x_248_);
v___x_251_ = lean_box(0);
v_isShared_252_ = v_isSharedCheck_287_;
goto v_resetjp_250_;
}
v_resetjp_250_:
{
if (lean_obj_tag(v_a_249_) == 1)
{
lean_object* v_val_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; 
lean_del_object(v___x_251_);
v_val_253_ = lean_ctor_get(v_a_249_, 0);
lean_inc(v_val_253_);
lean_dec_ref_known(v_a_249_, 1);
v___x_254_ = lean_unsigned_to_nat(1u);
v___x_255_ = lean_nat_add(v_i_194_, v___x_254_);
lean_dec(v_i_194_);
lean_inc_ref(v_target_193_);
lean_inc_ref(v_restS_240_);
v___x_256_ = lp_vampireReplay_Vampire_Reconstruct_carrying(v_restS_240_, v_target_193_, v___x_255_, v_inStep_195_, v_whole_196_, v___y_242_, v___y_243_, v___y_244_, v___y_245_, v___y_246_, v___y_247_);
if (lean_obj_tag(v___x_256_) == 0)
{
lean_object* v_a_257_; lean_object* v___x_259_; uint8_t v_isShared_260_; uint8_t v_isSharedCheck_282_; 
v_a_257_ = lean_ctor_get(v___x_256_, 0);
v_isSharedCheck_282_ = !lean_is_exclusive(v___x_256_);
if (v_isSharedCheck_282_ == 0)
{
v___x_259_ = v___x_256_;
v_isShared_260_ = v_isSharedCheck_282_;
goto v_resetjp_258_;
}
else
{
lean_inc(v_a_257_);
lean_dec(v___x_256_);
v___x_259_ = lean_box(0);
v_isShared_260_ = v_isSharedCheck_282_;
goto v_resetjp_258_;
}
v_resetjp_258_:
{
if (lean_obj_tag(v_a_257_) == 1)
{
lean_object* v_val_261_; lean_object* v___x_263_; uint8_t v_isShared_264_; uint8_t v_isSharedCheck_277_; 
v_val_261_ = lean_ctor_get(v_a_257_, 0);
v_isSharedCheck_277_ = !lean_is_exclusive(v_a_257_);
if (v_isSharedCheck_277_ == 0)
{
v___x_263_ = v_a_257_;
v_isShared_264_ = v_isSharedCheck_277_;
goto v_resetjp_262_;
}
else
{
lean_inc(v_val_261_);
lean_dec(v_a_257_);
v___x_263_ = lean_box(0);
v_isShared_264_ = v_isSharedCheck_277_;
goto v_resetjp_262_;
}
v_resetjp_262_:
{
lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; uint8_t v___x_269_; lean_object* v___x_270_; lean_object* v___x_272_; 
v___x_265_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_carrying___closed__3));
v___x_266_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_carrying___closed__10, &lp_vampireReplay_Vampire_Reconstruct_carrying___closed__10_once, _init_lp_vampireReplay_Vampire_Reconstruct_carrying___closed__10);
v___x_267_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_carrying___closed__7, &lp_vampireReplay_Vampire_Reconstruct_carrying___closed__7_once, _init_lp_vampireReplay_Vampire_Reconstruct_carrying___closed__7);
v___x_268_ = l_Lean_mkApp6(v___x_266_, v_s_239_, v_restS_240_, v_target_193_, v___x_267_, v_val_253_, v_val_261_);
v___x_269_ = 0;
v___x_270_ = l_Lean_Expr_lam___override(v___x_265_, v_source_192_, v___x_268_, v___x_269_);
if (v_isShared_264_ == 0)
{
lean_ctor_set(v___x_263_, 0, v___x_270_);
v___x_272_ = v___x_263_;
goto v_reusejp_271_;
}
else
{
lean_object* v_reuseFailAlloc_276_; 
v_reuseFailAlloc_276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_276_, 0, v___x_270_);
v___x_272_ = v_reuseFailAlloc_276_;
goto v_reusejp_271_;
}
v_reusejp_271_:
{
lean_object* v___x_274_; 
if (v_isShared_260_ == 0)
{
lean_ctor_set(v___x_259_, 0, v___x_272_);
v___x_274_ = v___x_259_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_275_; 
v_reuseFailAlloc_275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_275_, 0, v___x_272_);
v___x_274_ = v_reuseFailAlloc_275_;
goto v_reusejp_273_;
}
v_reusejp_273_:
{
return v___x_274_;
}
}
}
}
else
{
lean_object* v___x_278_; lean_object* v___x_280_; 
lean_dec(v_a_257_);
lean_dec(v_val_253_);
lean_dec_ref(v_restS_240_);
lean_dec_ref(v_s_239_);
lean_dec_ref(v_target_193_);
lean_dec_ref(v_source_192_);
v___x_278_ = lean_box(0);
if (v_isShared_260_ == 0)
{
lean_ctor_set(v___x_259_, 0, v___x_278_);
v___x_280_ = v___x_259_;
goto v_reusejp_279_;
}
else
{
lean_object* v_reuseFailAlloc_281_; 
v_reuseFailAlloc_281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_281_, 0, v___x_278_);
v___x_280_ = v_reuseFailAlloc_281_;
goto v_reusejp_279_;
}
v_reusejp_279_:
{
return v___x_280_;
}
}
}
}
else
{
lean_dec(v_val_253_);
lean_dec_ref(v_restS_240_);
lean_dec_ref(v_s_239_);
lean_dec_ref(v_target_193_);
lean_dec_ref(v_source_192_);
return v___x_256_;
}
}
else
{
lean_object* v___x_283_; lean_object* v___x_285_; 
lean_dec(v_a_249_);
lean_dec_ref(v_restS_240_);
lean_dec_ref(v_s_239_);
lean_dec_ref(v_whole_196_);
lean_dec_ref(v_inStep_195_);
lean_dec(v_i_194_);
lean_dec_ref(v_target_193_);
lean_dec_ref(v_source_192_);
v___x_283_ = lean_box(0);
if (v_isShared_252_ == 0)
{
lean_ctor_set(v___x_251_, 0, v___x_283_);
v___x_285_ = v___x_251_;
goto v_reusejp_284_;
}
else
{
lean_object* v_reuseFailAlloc_286_; 
v_reuseFailAlloc_286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_286_, 0, v___x_283_);
v___x_285_ = v_reuseFailAlloc_286_;
goto v_reusejp_284_;
}
v_reusejp_284_:
{
return v___x_285_;
}
}
}
}
else
{
lean_dec_ref(v_restS_240_);
lean_dec_ref(v_s_239_);
lean_dec_ref(v_whole_196_);
lean_dec_ref(v_inStep_195_);
lean_dec(v_i_194_);
lean_dec_ref(v_target_193_);
lean_dec_ref(v_source_192_);
return v___x_248_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carrying___boxed(lean_object* v_source_320_, lean_object* v_target_321_, lean_object* v_i_322_, lean_object* v_inStep_323_, lean_object* v_whole_324_, lean_object* v_a_325_, lean_object* v_a_326_, lean_object* v_a_327_, lean_object* v_a_328_, lean_object* v_a_329_, lean_object* v_a_330_, lean_object* v_a_331_){
_start:
{
lean_object* v_res_332_; 
v_res_332_ = lp_vampireReplay_Vampire_Reconstruct_carrying(v_source_320_, v_target_321_, v_i_322_, v_inStep_323_, v_whole_324_, v_a_325_, v_a_326_, v_a_327_, v_a_328_, v_a_329_, v_a_330_);
lean_dec(v_a_330_);
lean_dec_ref(v_a_329_);
lean_dec(v_a_328_);
lean_dec_ref(v_a_327_);
lean_dec(v_a_326_);
lean_dec_ref(v_a_325_);
return v_res_332_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryWith___lam__0(lean_object* v_literal_333_, lean_object* v_i_334_, lean_object* v_a_335_, lean_object* v_rest_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_){
_start:
{
lean_object* v___y_345_; uint8_t v___y_346_; lean_object* v_a_351_; lean_object* v___x_354_; 
lean_inc(v___y_342_);
lean_inc_ref(v___y_341_);
lean_inc(v___y_340_);
lean_inc_ref(v___y_339_);
lean_inc(v___y_338_);
lean_inc_ref(v___y_337_);
v___x_354_ = lean_apply_9(v_literal_333_, v_i_334_, v_a_335_, v___y_337_, v___y_338_, v___y_339_, v___y_340_, v___y_341_, v___y_342_, lean_box(0));
if (lean_obj_tag(v___x_354_) == 0)
{
lean_object* v_a_355_; lean_object* v___x_357_; uint8_t v_isShared_358_; uint8_t v_isSharedCheck_372_; 
v_a_355_ = lean_ctor_get(v___x_354_, 0);
v_isSharedCheck_372_ = !lean_is_exclusive(v___x_354_);
if (v_isSharedCheck_372_ == 0)
{
v___x_357_ = v___x_354_;
v_isShared_358_ = v_isSharedCheck_372_;
goto v_resetjp_356_;
}
else
{
lean_inc(v_a_355_);
lean_dec(v___x_354_);
v___x_357_ = lean_box(0);
v_isShared_358_ = v_isSharedCheck_372_;
goto v_resetjp_356_;
}
v_resetjp_356_:
{
lean_object* v___x_359_; 
v___x_359_ = lp_vampireReplay_Vampire_Reconstruct_placeLiteral(v_rest_336_, v_a_355_, v___y_337_, v___y_338_, v___y_339_, v___y_340_, v___y_341_, v___y_342_);
if (lean_obj_tag(v___x_359_) == 0)
{
lean_object* v_a_360_; lean_object* v___x_362_; uint8_t v_isShared_363_; uint8_t v_isSharedCheck_370_; 
v_a_360_ = lean_ctor_get(v___x_359_, 0);
v_isSharedCheck_370_ = !lean_is_exclusive(v___x_359_);
if (v_isSharedCheck_370_ == 0)
{
v___x_362_ = v___x_359_;
v_isShared_363_ = v_isSharedCheck_370_;
goto v_resetjp_361_;
}
else
{
lean_inc(v_a_360_);
lean_dec(v___x_359_);
v___x_362_ = lean_box(0);
v_isShared_363_ = v_isSharedCheck_370_;
goto v_resetjp_361_;
}
v_resetjp_361_:
{
lean_object* v___x_365_; 
if (v_isShared_358_ == 0)
{
lean_ctor_set_tag(v___x_357_, 1);
lean_ctor_set(v___x_357_, 0, v_a_360_);
v___x_365_ = v___x_357_;
goto v_reusejp_364_;
}
else
{
lean_object* v_reuseFailAlloc_369_; 
v_reuseFailAlloc_369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_369_, 0, v_a_360_);
v___x_365_ = v_reuseFailAlloc_369_;
goto v_reusejp_364_;
}
v_reusejp_364_:
{
lean_object* v___x_367_; 
if (v_isShared_363_ == 0)
{
lean_ctor_set(v___x_362_, 0, v___x_365_);
v___x_367_ = v___x_362_;
goto v_reusejp_366_;
}
else
{
lean_object* v_reuseFailAlloc_368_; 
v_reuseFailAlloc_368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_368_, 0, v___x_365_);
v___x_367_ = v_reuseFailAlloc_368_;
goto v_reusejp_366_;
}
v_reusejp_366_:
{
return v___x_367_;
}
}
}
}
else
{
lean_object* v_a_371_; 
lean_del_object(v___x_357_);
v_a_371_ = lean_ctor_get(v___x_359_, 0);
lean_inc(v_a_371_);
lean_dec_ref_known(v___x_359_, 1);
v_a_351_ = v_a_371_;
goto v___jp_350_;
}
}
}
else
{
lean_object* v_a_373_; 
lean_dec_ref(v_rest_336_);
v_a_373_ = lean_ctor_get(v___x_354_, 0);
lean_inc(v_a_373_);
lean_dec_ref_known(v___x_354_, 1);
v_a_351_ = v_a_373_;
goto v___jp_350_;
}
v___jp_344_:
{
if (v___y_346_ == 0)
{
lean_object* v___x_347_; lean_object* v___x_348_; 
lean_dec_ref(v___y_345_);
v___x_347_ = lean_box(0);
v___x_348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_348_, 0, v___x_347_);
return v___x_348_;
}
else
{
lean_object* v___x_349_; 
v___x_349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_349_, 0, v___y_345_);
return v___x_349_;
}
}
v___jp_350_:
{
uint8_t v___x_352_; 
v___x_352_ = l_Lean_Exception_isInterrupt(v_a_351_);
if (v___x_352_ == 0)
{
uint8_t v___x_353_; 
lean_inc_ref(v_a_351_);
v___x_353_ = l_Lean_Exception_isRuntime(v_a_351_);
v___y_345_ = v_a_351_;
v___y_346_ = v___x_353_;
goto v___jp_344_;
}
else
{
v___y_345_ = v_a_351_;
v___y_346_ = v___x_352_;
goto v___jp_344_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryWith___lam__0___boxed(lean_object* v_literal_374_, lean_object* v_i_375_, lean_object* v_a_376_, lean_object* v_rest_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_){
_start:
{
lean_object* v_res_385_; 
v_res_385_ = lp_vampireReplay_Vampire_Reconstruct_carryWith___lam__0(v_literal_374_, v_i_375_, v_a_376_, v_rest_377_, v___y_378_, v___y_379_, v___y_380_, v___y_381_, v___y_382_, v___y_383_);
lean_dec(v___y_383_);
lean_dec_ref(v___y_382_);
lean_dec(v___y_381_);
lean_dec_ref(v___y_380_);
lean_dec(v___y_379_);
lean_dec_ref(v___y_378_);
return v_res_385_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryWith___lam__1(lean_object* v_literal_386_, lean_object* v_i_387_, lean_object* v_a_388_, lean_object* v_t_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_){
_start:
{
lean_object* v___x_397_; 
lean_inc(v___y_395_);
lean_inc_ref(v___y_394_);
lean_inc(v___y_393_);
lean_inc_ref(v___y_392_);
lean_inc(v___y_391_);
lean_inc_ref(v___y_390_);
v___x_397_ = lean_apply_9(v_literal_386_, v_i_387_, v_a_388_, v___y_390_, v___y_391_, v___y_392_, v___y_393_, v___y_394_, v___y_395_, lean_box(0));
if (lean_obj_tag(v___x_397_) == 0)
{
lean_object* v_a_398_; lean_object* v___x_399_; 
v_a_398_ = lean_ctor_get(v___x_397_, 0);
lean_inc_n(v_a_398_, 2);
lean_dec_ref_known(v___x_397_, 1);
lean_inc(v___y_395_);
lean_inc_ref(v___y_394_);
lean_inc(v___y_393_);
lean_inc_ref(v___y_392_);
v___x_399_ = lean_infer_type(v_a_398_, v___y_392_, v___y_393_, v___y_394_, v___y_395_);
if (lean_obj_tag(v___x_399_) == 0)
{
lean_object* v_a_400_; lean_object* v___x_401_; lean_object* v_a_402_; lean_object* v___x_404_; uint8_t v_isShared_405_; uint8_t v_isSharedCheck_475_; 
v_a_400_ = lean_ctor_get(v___x_399_, 0);
lean_inc(v_a_400_);
lean_dec_ref_known(v___x_399_, 1);
v___x_401_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_a_400_, v___y_393_);
v_a_402_ = lean_ctor_get(v___x_401_, 0);
v_isSharedCheck_475_ = !lean_is_exclusive(v___x_401_);
if (v_isSharedCheck_475_ == 0)
{
v___x_404_ = v___x_401_;
v_isShared_405_ = v_isSharedCheck_475_;
goto v_resetjp_403_;
}
else
{
lean_inc(v_a_402_);
lean_dec(v___x_401_);
v___x_404_ = lean_box(0);
v_isShared_405_ = v_isSharedCheck_475_;
goto v_resetjp_403_;
}
v_resetjp_403_:
{
uint8_t v___x_406_; 
v___x_406_ = lean_expr_eqv(v_a_402_, v_t_389_);
if (v___x_406_ == 0)
{
lean_object* v___x_407_; 
lean_del_object(v___x_404_);
lean_inc_ref(v_t_389_);
v___x_407_ = l_Lean_Meta_isExprDefEq(v_a_402_, v_t_389_, v___y_392_, v___y_393_, v___y_394_, v___y_395_);
if (lean_obj_tag(v___x_407_) == 0)
{
lean_object* v_a_408_; lean_object* v___x_410_; uint8_t v_isShared_411_; uint8_t v_isSharedCheck_462_; 
v_a_408_ = lean_ctor_get(v___x_407_, 0);
v_isSharedCheck_462_ = !lean_is_exclusive(v___x_407_);
if (v_isSharedCheck_462_ == 0)
{
v___x_410_ = v___x_407_;
v_isShared_411_ = v_isSharedCheck_462_;
goto v_resetjp_409_;
}
else
{
lean_inc(v_a_408_);
lean_dec(v___x_407_);
v___x_410_ = lean_box(0);
v_isShared_411_ = v_isSharedCheck_462_;
goto v_resetjp_409_;
}
v_resetjp_409_:
{
uint8_t v___x_412_; 
v___x_412_ = lean_unbox(v_a_408_);
lean_dec(v_a_408_);
if (v___x_412_ == 0)
{
lean_object* v___x_413_; 
lean_del_object(v___x_410_);
v___x_413_ = lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg(v_a_398_, v___y_392_, v___y_393_, v___y_394_, v___y_395_);
if (lean_obj_tag(v___x_413_) == 0)
{
lean_object* v_a_414_; lean_object* v___x_416_; uint8_t v_isShared_417_; uint8_t v_isSharedCheck_457_; 
v_a_414_ = lean_ctor_get(v___x_413_, 0);
v_isSharedCheck_457_ = !lean_is_exclusive(v___x_413_);
if (v_isSharedCheck_457_ == 0)
{
v___x_416_ = v___x_413_;
v_isShared_417_ = v_isSharedCheck_457_;
goto v_resetjp_415_;
}
else
{
lean_inc(v_a_414_);
lean_dec(v___x_413_);
v___x_416_ = lean_box(0);
v_isShared_417_ = v_isSharedCheck_457_;
goto v_resetjp_415_;
}
v_resetjp_415_:
{
if (lean_obj_tag(v_a_414_) == 1)
{
lean_object* v_val_418_; lean_object* v___x_419_; 
lean_del_object(v___x_416_);
v_val_418_ = lean_ctor_get(v_a_414_, 0);
lean_inc(v___y_395_);
lean_inc_ref(v___y_394_);
lean_inc(v___y_393_);
lean_inc_ref(v___y_392_);
lean_inc(v_val_418_);
v___x_419_ = lean_infer_type(v_val_418_, v___y_392_, v___y_393_, v___y_394_, v___y_395_);
if (lean_obj_tag(v___x_419_) == 0)
{
lean_object* v_a_420_; lean_object* v___x_421_; lean_object* v_a_422_; lean_object* v___x_423_; 
v_a_420_ = lean_ctor_get(v___x_419_, 0);
lean_inc(v_a_420_);
lean_dec_ref_known(v___x_419_, 1);
v___x_421_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_a_420_, v___y_393_);
v_a_422_ = lean_ctor_get(v___x_421_, 0);
lean_inc(v_a_422_);
lean_dec_ref(v___x_421_);
v___x_423_ = l_Lean_Meta_isExprDefEq(v_a_422_, v_t_389_, v___y_392_, v___y_393_, v___y_394_, v___y_395_);
if (lean_obj_tag(v___x_423_) == 0)
{
lean_object* v_a_424_; lean_object* v___x_426_; uint8_t v_isShared_427_; uint8_t v_isSharedCheck_436_; 
v_a_424_ = lean_ctor_get(v___x_423_, 0);
v_isSharedCheck_436_ = !lean_is_exclusive(v___x_423_);
if (v_isSharedCheck_436_ == 0)
{
v___x_426_ = v___x_423_;
v_isShared_427_ = v_isSharedCheck_436_;
goto v_resetjp_425_;
}
else
{
lean_inc(v_a_424_);
lean_dec(v___x_423_);
v___x_426_ = lean_box(0);
v_isShared_427_ = v_isSharedCheck_436_;
goto v_resetjp_425_;
}
v_resetjp_425_:
{
uint8_t v___x_428_; 
v___x_428_ = lean_unbox(v_a_424_);
lean_dec(v_a_424_);
if (v___x_428_ == 0)
{
lean_object* v___x_429_; lean_object* v___x_431_; 
lean_dec_ref_known(v_a_414_, 1);
v___x_429_ = lean_box(0);
if (v_isShared_427_ == 0)
{
lean_ctor_set(v___x_426_, 0, v___x_429_);
v___x_431_ = v___x_426_;
goto v_reusejp_430_;
}
else
{
lean_object* v_reuseFailAlloc_432_; 
v_reuseFailAlloc_432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_432_, 0, v___x_429_);
v___x_431_ = v_reuseFailAlloc_432_;
goto v_reusejp_430_;
}
v_reusejp_430_:
{
return v___x_431_;
}
}
else
{
lean_object* v___x_434_; 
if (v_isShared_427_ == 0)
{
lean_ctor_set(v___x_426_, 0, v_a_414_);
v___x_434_ = v___x_426_;
goto v_reusejp_433_;
}
else
{
lean_object* v_reuseFailAlloc_435_; 
v_reuseFailAlloc_435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_435_, 0, v_a_414_);
v___x_434_ = v_reuseFailAlloc_435_;
goto v_reusejp_433_;
}
v_reusejp_433_:
{
return v___x_434_;
}
}
}
}
else
{
lean_object* v_a_437_; lean_object* v___x_439_; uint8_t v_isShared_440_; uint8_t v_isSharedCheck_444_; 
lean_dec_ref_known(v_a_414_, 1);
v_a_437_ = lean_ctor_get(v___x_423_, 0);
v_isSharedCheck_444_ = !lean_is_exclusive(v___x_423_);
if (v_isSharedCheck_444_ == 0)
{
v___x_439_ = v___x_423_;
v_isShared_440_ = v_isSharedCheck_444_;
goto v_resetjp_438_;
}
else
{
lean_inc(v_a_437_);
lean_dec(v___x_423_);
v___x_439_ = lean_box(0);
v_isShared_440_ = v_isSharedCheck_444_;
goto v_resetjp_438_;
}
v_resetjp_438_:
{
lean_object* v___x_442_; 
if (v_isShared_440_ == 0)
{
v___x_442_ = v___x_439_;
goto v_reusejp_441_;
}
else
{
lean_object* v_reuseFailAlloc_443_; 
v_reuseFailAlloc_443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_443_, 0, v_a_437_);
v___x_442_ = v_reuseFailAlloc_443_;
goto v_reusejp_441_;
}
v_reusejp_441_:
{
return v___x_442_;
}
}
}
}
else
{
lean_object* v_a_445_; lean_object* v___x_447_; uint8_t v_isShared_448_; uint8_t v_isSharedCheck_452_; 
lean_dec_ref_known(v_a_414_, 1);
lean_dec_ref(v_t_389_);
v_a_445_ = lean_ctor_get(v___x_419_, 0);
v_isSharedCheck_452_ = !lean_is_exclusive(v___x_419_);
if (v_isSharedCheck_452_ == 0)
{
v___x_447_ = v___x_419_;
v_isShared_448_ = v_isSharedCheck_452_;
goto v_resetjp_446_;
}
else
{
lean_inc(v_a_445_);
lean_dec(v___x_419_);
v___x_447_ = lean_box(0);
v_isShared_448_ = v_isSharedCheck_452_;
goto v_resetjp_446_;
}
v_resetjp_446_:
{
lean_object* v___x_450_; 
if (v_isShared_448_ == 0)
{
v___x_450_ = v___x_447_;
goto v_reusejp_449_;
}
else
{
lean_object* v_reuseFailAlloc_451_; 
v_reuseFailAlloc_451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_451_, 0, v_a_445_);
v___x_450_ = v_reuseFailAlloc_451_;
goto v_reusejp_449_;
}
v_reusejp_449_:
{
return v___x_450_;
}
}
}
}
else
{
lean_object* v___x_453_; lean_object* v___x_455_; 
lean_dec(v_a_414_);
lean_dec_ref(v_t_389_);
v___x_453_ = lean_box(0);
if (v_isShared_417_ == 0)
{
lean_ctor_set(v___x_416_, 0, v___x_453_);
v___x_455_ = v___x_416_;
goto v_reusejp_454_;
}
else
{
lean_object* v_reuseFailAlloc_456_; 
v_reuseFailAlloc_456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_456_, 0, v___x_453_);
v___x_455_ = v_reuseFailAlloc_456_;
goto v_reusejp_454_;
}
v_reusejp_454_:
{
return v___x_455_;
}
}
}
}
else
{
lean_dec_ref(v_t_389_);
return v___x_413_;
}
}
else
{
lean_object* v___x_458_; lean_object* v___x_460_; 
lean_dec_ref(v_t_389_);
v___x_458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_458_, 0, v_a_398_);
if (v_isShared_411_ == 0)
{
lean_ctor_set(v___x_410_, 0, v___x_458_);
v___x_460_ = v___x_410_;
goto v_reusejp_459_;
}
else
{
lean_object* v_reuseFailAlloc_461_; 
v_reuseFailAlloc_461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_461_, 0, v___x_458_);
v___x_460_ = v_reuseFailAlloc_461_;
goto v_reusejp_459_;
}
v_reusejp_459_:
{
return v___x_460_;
}
}
}
}
else
{
lean_object* v_a_463_; lean_object* v___x_465_; uint8_t v_isShared_466_; uint8_t v_isSharedCheck_470_; 
lean_dec(v_a_398_);
lean_dec_ref(v_t_389_);
v_a_463_ = lean_ctor_get(v___x_407_, 0);
v_isSharedCheck_470_ = !lean_is_exclusive(v___x_407_);
if (v_isSharedCheck_470_ == 0)
{
v___x_465_ = v___x_407_;
v_isShared_466_ = v_isSharedCheck_470_;
goto v_resetjp_464_;
}
else
{
lean_inc(v_a_463_);
lean_dec(v___x_407_);
v___x_465_ = lean_box(0);
v_isShared_466_ = v_isSharedCheck_470_;
goto v_resetjp_464_;
}
v_resetjp_464_:
{
lean_object* v___x_468_; 
if (v_isShared_466_ == 0)
{
v___x_468_ = v___x_465_;
goto v_reusejp_467_;
}
else
{
lean_object* v_reuseFailAlloc_469_; 
v_reuseFailAlloc_469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_469_, 0, v_a_463_);
v___x_468_ = v_reuseFailAlloc_469_;
goto v_reusejp_467_;
}
v_reusejp_467_:
{
return v___x_468_;
}
}
}
}
else
{
lean_object* v___x_471_; lean_object* v___x_473_; 
lean_dec(v_a_402_);
lean_dec_ref(v_t_389_);
v___x_471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_471_, 0, v_a_398_);
if (v_isShared_405_ == 0)
{
lean_ctor_set(v___x_404_, 0, v___x_471_);
v___x_473_ = v___x_404_;
goto v_reusejp_472_;
}
else
{
lean_object* v_reuseFailAlloc_474_; 
v_reuseFailAlloc_474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_474_, 0, v___x_471_);
v___x_473_ = v_reuseFailAlloc_474_;
goto v_reusejp_472_;
}
v_reusejp_472_:
{
return v___x_473_;
}
}
}
}
else
{
lean_object* v_a_476_; lean_object* v___x_478_; uint8_t v_isShared_479_; uint8_t v_isSharedCheck_483_; 
lean_dec(v_a_398_);
lean_dec_ref(v_t_389_);
v_a_476_ = lean_ctor_get(v___x_399_, 0);
v_isSharedCheck_483_ = !lean_is_exclusive(v___x_399_);
if (v_isSharedCheck_483_ == 0)
{
v___x_478_ = v___x_399_;
v_isShared_479_ = v_isSharedCheck_483_;
goto v_resetjp_477_;
}
else
{
lean_inc(v_a_476_);
lean_dec(v___x_399_);
v___x_478_ = lean_box(0);
v_isShared_479_ = v_isSharedCheck_483_;
goto v_resetjp_477_;
}
v_resetjp_477_:
{
lean_object* v___x_481_; 
if (v_isShared_479_ == 0)
{
v___x_481_ = v___x_478_;
goto v_reusejp_480_;
}
else
{
lean_object* v_reuseFailAlloc_482_; 
v_reuseFailAlloc_482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_482_, 0, v_a_476_);
v___x_481_ = v_reuseFailAlloc_482_;
goto v_reusejp_480_;
}
v_reusejp_480_:
{
return v___x_481_;
}
}
}
}
else
{
lean_object* v_a_484_; lean_object* v___x_486_; uint8_t v_isShared_487_; uint8_t v_isSharedCheck_499_; 
lean_dec_ref(v_t_389_);
v_a_484_ = lean_ctor_get(v___x_397_, 0);
v_isSharedCheck_499_ = !lean_is_exclusive(v___x_397_);
if (v_isSharedCheck_499_ == 0)
{
v___x_486_ = v___x_397_;
v_isShared_487_ = v_isSharedCheck_499_;
goto v_resetjp_485_;
}
else
{
lean_inc(v_a_484_);
lean_dec(v___x_397_);
v___x_486_ = lean_box(0);
v_isShared_487_ = v_isSharedCheck_499_;
goto v_resetjp_485_;
}
v_resetjp_485_:
{
uint8_t v___y_489_; uint8_t v___x_497_; 
v___x_497_ = l_Lean_Exception_isInterrupt(v_a_484_);
if (v___x_497_ == 0)
{
uint8_t v___x_498_; 
lean_inc(v_a_484_);
v___x_498_ = l_Lean_Exception_isRuntime(v_a_484_);
v___y_489_ = v___x_498_;
goto v___jp_488_;
}
else
{
v___y_489_ = v___x_497_;
goto v___jp_488_;
}
v___jp_488_:
{
if (v___y_489_ == 0)
{
lean_object* v___x_490_; lean_object* v___x_492_; 
lean_dec(v_a_484_);
v___x_490_ = lean_box(0);
if (v_isShared_487_ == 0)
{
lean_ctor_set_tag(v___x_486_, 0);
lean_ctor_set(v___x_486_, 0, v___x_490_);
v___x_492_ = v___x_486_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_493_; 
v_reuseFailAlloc_493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_493_, 0, v___x_490_);
v___x_492_ = v_reuseFailAlloc_493_;
goto v_reusejp_491_;
}
v_reusejp_491_:
{
return v___x_492_;
}
}
else
{
lean_object* v___x_495_; 
if (v_isShared_487_ == 0)
{
v___x_495_ = v___x_486_;
goto v_reusejp_494_;
}
else
{
lean_object* v_reuseFailAlloc_496_; 
v_reuseFailAlloc_496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_496_, 0, v_a_484_);
v___x_495_ = v_reuseFailAlloc_496_;
goto v_reusejp_494_;
}
v_reusejp_494_:
{
return v___x_495_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryWith___lam__1___boxed(lean_object* v_literal_500_, lean_object* v_i_501_, lean_object* v_a_502_, lean_object* v_t_503_, lean_object* v___y_504_, lean_object* v___y_505_, lean_object* v___y_506_, lean_object* v___y_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_){
_start:
{
lean_object* v_res_511_; 
v_res_511_ = lp_vampireReplay_Vampire_Reconstruct_carryWith___lam__1(v_literal_500_, v_i_501_, v_a_502_, v_t_503_, v___y_504_, v___y_505_, v___y_506_, v___y_507_, v___y_508_, v___y_509_);
lean_dec(v___y_509_);
lean_dec_ref(v___y_508_);
lean_dec(v___y_507_);
lean_dec_ref(v___y_506_);
lean_dec(v___y_505_);
lean_dec_ref(v___y_504_);
return v_res_511_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryWith___lam__2(lean_object* v_literal_512_, lean_object* v_target_513_, lean_object* v_i_514_, lean_object* v_h_515_, lean_object* v___y_516_, lean_object* v___y_517_, lean_object* v___y_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_){
_start:
{
lean_object* v___x_523_; 
lean_inc(v___y_521_);
lean_inc_ref(v___y_520_);
lean_inc(v___y_519_);
lean_inc_ref(v___y_518_);
lean_inc(v___y_517_);
lean_inc_ref(v___y_516_);
v___x_523_ = lean_apply_9(v_literal_512_, v_i_514_, v_h_515_, v___y_516_, v___y_517_, v___y_518_, v___y_519_, v___y_520_, v___y_521_, lean_box(0));
if (lean_obj_tag(v___x_523_) == 0)
{
lean_object* v_a_524_; lean_object* v___x_525_; 
v_a_524_ = lean_ctor_get(v___x_523_, 0);
lean_inc(v_a_524_);
lean_dec_ref_known(v___x_523_, 1);
v___x_525_ = lp_vampireReplay_Vampire_Reconstruct_placeLiteral(v_target_513_, v_a_524_, v___y_516_, v___y_517_, v___y_518_, v___y_519_, v___y_520_, v___y_521_);
return v___x_525_;
}
else
{
lean_dec_ref(v_target_513_);
return v___x_523_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryWith___lam__2___boxed(lean_object* v_literal_526_, lean_object* v_target_527_, lean_object* v_i_528_, lean_object* v_h_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_, lean_object* v___y_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_){
_start:
{
lean_object* v_res_537_; 
v_res_537_ = lp_vampireReplay_Vampire_Reconstruct_carryWith___lam__2(v_literal_526_, v_target_527_, v_i_528_, v_h_529_, v___y_530_, v___y_531_, v___y_532_, v___y_533_, v___y_534_, v___y_535_);
lean_dec(v___y_535_);
lean_dec_ref(v___y_534_);
lean_dec(v___y_533_);
lean_dec_ref(v___y_532_);
lean_dec(v___y_531_);
lean_dec_ref(v___y_530_);
return v_res_537_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryWith(lean_object* v_source_538_, lean_object* v_target_539_, lean_object* v_proof_540_, lean_object* v_literal_541_, lean_object* v_a_542_, lean_object* v_a_543_, lean_object* v_a_544_, lean_object* v_a_545_, lean_object* v_a_546_, lean_object* v_a_547_){
_start:
{
lean_object* v_whole_549_; lean_object* v_inStep_550_; lean_object* v___x_551_; lean_object* v___x_552_; 
lean_inc_ref_n(v_literal_541_, 2);
v_whole_549_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_carryWith___lam__0___boxed), 11, 1);
lean_closure_set(v_whole_549_, 0, v_literal_541_);
v_inStep_550_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_carryWith___lam__1___boxed), 11, 1);
lean_closure_set(v_inStep_550_, 0, v_literal_541_);
v___x_551_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_target_539_);
lean_inc_ref(v_source_538_);
v___x_552_ = lp_vampireReplay_Vampire_Reconstruct_carrying(v_source_538_, v_target_539_, v___x_551_, v_inStep_550_, v_whole_549_, v_a_542_, v_a_543_, v_a_544_, v_a_545_, v_a_546_, v_a_547_);
if (lean_obj_tag(v___x_552_) == 0)
{
lean_object* v_a_553_; lean_object* v___x_555_; uint8_t v_isShared_556_; uint8_t v_isSharedCheck_564_; 
v_a_553_ = lean_ctor_get(v___x_552_, 0);
v_isSharedCheck_564_ = !lean_is_exclusive(v___x_552_);
if (v_isSharedCheck_564_ == 0)
{
v___x_555_ = v___x_552_;
v_isShared_556_ = v_isSharedCheck_564_;
goto v_resetjp_554_;
}
else
{
lean_inc(v_a_553_);
lean_dec(v___x_552_);
v___x_555_ = lean_box(0);
v_isShared_556_ = v_isSharedCheck_564_;
goto v_resetjp_554_;
}
v_resetjp_554_:
{
if (lean_obj_tag(v_a_553_) == 0)
{
lean_object* v___f_557_; lean_object* v___x_558_; 
lean_del_object(v___x_555_);
v___f_557_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_carryWith___lam__2___boxed), 11, 2);
lean_closure_set(v___f_557_, 0, v_literal_541_);
lean_closure_set(v___f_557_, 1, v_target_539_);
v___x_558_ = lp_vampireReplay_Vampire_Reconstruct_elimParts(v_source_538_, v___x_551_, v___f_557_, v_proof_540_, v_a_542_, v_a_543_, v_a_544_, v_a_545_, v_a_546_, v_a_547_);
lean_dec_ref(v_source_538_);
return v___x_558_;
}
else
{
lean_object* v_val_559_; lean_object* v___x_560_; lean_object* v___x_562_; 
lean_dec_ref(v_literal_541_);
lean_dec_ref(v_target_539_);
lean_dec_ref(v_source_538_);
v_val_559_ = lean_ctor_get(v_a_553_, 0);
lean_inc(v_val_559_);
lean_dec_ref_known(v_a_553_, 1);
v___x_560_ = l_Lean_Expr_app___override(v_val_559_, v_proof_540_);
if (v_isShared_556_ == 0)
{
lean_ctor_set(v___x_555_, 0, v___x_560_);
v___x_562_ = v___x_555_;
goto v_reusejp_561_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v___x_560_);
v___x_562_ = v_reuseFailAlloc_563_;
goto v_reusejp_561_;
}
v_reusejp_561_:
{
return v___x_562_;
}
}
}
}
else
{
lean_object* v_a_565_; lean_object* v___x_567_; uint8_t v_isShared_568_; uint8_t v_isSharedCheck_572_; 
lean_dec_ref(v_literal_541_);
lean_dec_ref(v_proof_540_);
lean_dec_ref(v_target_539_);
lean_dec_ref(v_source_538_);
v_a_565_ = lean_ctor_get(v___x_552_, 0);
v_isSharedCheck_572_ = !lean_is_exclusive(v___x_552_);
if (v_isSharedCheck_572_ == 0)
{
v___x_567_ = v___x_552_;
v_isShared_568_ = v_isSharedCheck_572_;
goto v_resetjp_566_;
}
else
{
lean_inc(v_a_565_);
lean_dec(v___x_552_);
v___x_567_ = lean_box(0);
v_isShared_568_ = v_isSharedCheck_572_;
goto v_resetjp_566_;
}
v_resetjp_566_:
{
lean_object* v___x_570_; 
if (v_isShared_568_ == 0)
{
v___x_570_ = v___x_567_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_571_; 
v_reuseFailAlloc_571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_571_, 0, v_a_565_);
v___x_570_ = v_reuseFailAlloc_571_;
goto v_reusejp_569_;
}
v_reusejp_569_:
{
return v___x_570_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryWith___boxed(lean_object* v_source_573_, lean_object* v_target_574_, lean_object* v_proof_575_, lean_object* v_literal_576_, lean_object* v_a_577_, lean_object* v_a_578_, lean_object* v_a_579_, lean_object* v_a_580_, lean_object* v_a_581_, lean_object* v_a_582_, lean_object* v_a_583_){
_start:
{
lean_object* v_res_584_; 
v_res_584_ = lp_vampireReplay_Vampire_Reconstruct_carryWith(v_source_573_, v_target_574_, v_proof_575_, v_literal_576_, v_a_577_, v_a_578_, v_a_579_, v_a_580_, v_a_581_, v_a_582_);
lean_dec(v_a_582_);
lean_dec_ref(v_a_581_);
lean_dec(v_a_580_);
lean_dec_ref(v_a_579_);
lean_dec(v_a_578_);
lean_dec_ref(v_a_577_);
return v_res_584_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryPast___lam__0(lean_object* v_special_585_, lean_object* v_onKept_586_, lean_object* v_onSpecial_587_, lean_object* v_i_588_, lean_object* v_a_589_, lean_object* v_rest_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_){
_start:
{
lean_object* v___y_599_; uint8_t v___y_600_; lean_object* v_a_605_; lean_object* v___x_608_; uint8_t v___x_609_; 
lean_inc(v_i_588_);
v___x_608_ = lean_apply_1(v_special_585_, v_i_588_);
v___x_609_ = lean_unbox(v___x_608_);
if (v___x_609_ == 0)
{
lean_object* v___x_610_; 
lean_dec_ref(v_onSpecial_587_);
lean_inc(v___y_596_);
lean_inc_ref(v___y_595_);
lean_inc(v___y_594_);
lean_inc_ref(v___y_593_);
lean_inc(v___y_592_);
lean_inc_ref(v___y_591_);
v___x_610_ = lean_apply_9(v_onKept_586_, v_i_588_, v_a_589_, v___y_591_, v___y_592_, v___y_593_, v___y_594_, v___y_595_, v___y_596_, lean_box(0));
if (lean_obj_tag(v___x_610_) == 0)
{
lean_object* v_a_611_; lean_object* v___x_613_; uint8_t v_isShared_614_; uint8_t v_isSharedCheck_628_; 
v_a_611_ = lean_ctor_get(v___x_610_, 0);
v_isSharedCheck_628_ = !lean_is_exclusive(v___x_610_);
if (v_isSharedCheck_628_ == 0)
{
v___x_613_ = v___x_610_;
v_isShared_614_ = v_isSharedCheck_628_;
goto v_resetjp_612_;
}
else
{
lean_inc(v_a_611_);
lean_dec(v___x_610_);
v___x_613_ = lean_box(0);
v_isShared_614_ = v_isSharedCheck_628_;
goto v_resetjp_612_;
}
v_resetjp_612_:
{
lean_object* v___x_615_; 
v___x_615_ = lp_vampireReplay_Vampire_Reconstruct_placeLiteral(v_rest_590_, v_a_611_, v___y_591_, v___y_592_, v___y_593_, v___y_594_, v___y_595_, v___y_596_);
if (lean_obj_tag(v___x_615_) == 0)
{
lean_object* v_a_616_; lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_626_; 
v_a_616_ = lean_ctor_get(v___x_615_, 0);
v_isSharedCheck_626_ = !lean_is_exclusive(v___x_615_);
if (v_isSharedCheck_626_ == 0)
{
v___x_618_ = v___x_615_;
v_isShared_619_ = v_isSharedCheck_626_;
goto v_resetjp_617_;
}
else
{
lean_inc(v_a_616_);
lean_dec(v___x_615_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_626_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
lean_object* v___x_621_; 
if (v_isShared_614_ == 0)
{
lean_ctor_set_tag(v___x_613_, 1);
lean_ctor_set(v___x_613_, 0, v_a_616_);
v___x_621_ = v___x_613_;
goto v_reusejp_620_;
}
else
{
lean_object* v_reuseFailAlloc_625_; 
v_reuseFailAlloc_625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_625_, 0, v_a_616_);
v___x_621_ = v_reuseFailAlloc_625_;
goto v_reusejp_620_;
}
v_reusejp_620_:
{
lean_object* v___x_623_; 
if (v_isShared_619_ == 0)
{
lean_ctor_set(v___x_618_, 0, v___x_621_);
v___x_623_ = v___x_618_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v___x_621_);
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
else
{
lean_object* v_a_627_; 
lean_del_object(v___x_613_);
v_a_627_ = lean_ctor_get(v___x_615_, 0);
lean_inc(v_a_627_);
lean_dec_ref_known(v___x_615_, 1);
v_a_605_ = v_a_627_;
goto v___jp_604_;
}
}
}
else
{
lean_object* v_a_629_; 
lean_dec_ref(v_rest_590_);
v_a_629_ = lean_ctor_get(v___x_610_, 0);
lean_inc(v_a_629_);
lean_dec_ref_known(v___x_610_, 1);
v_a_605_ = v_a_629_;
goto v___jp_604_;
}
}
else
{
lean_object* v___x_630_; 
lean_dec_ref(v_onKept_586_);
lean_inc(v___y_596_);
lean_inc_ref(v___y_595_);
lean_inc(v___y_594_);
lean_inc_ref(v___y_593_);
lean_inc(v___y_592_);
lean_inc_ref(v___y_591_);
v___x_630_ = lean_apply_10(v_onSpecial_587_, v_i_588_, v_a_589_, v_rest_590_, v___y_591_, v___y_592_, v___y_593_, v___y_594_, v___y_595_, v___y_596_, lean_box(0));
if (lean_obj_tag(v___x_630_) == 0)
{
lean_object* v_a_631_; lean_object* v___x_633_; uint8_t v_isShared_634_; uint8_t v_isSharedCheck_639_; 
v_a_631_ = lean_ctor_get(v___x_630_, 0);
v_isSharedCheck_639_ = !lean_is_exclusive(v___x_630_);
if (v_isSharedCheck_639_ == 0)
{
v___x_633_ = v___x_630_;
v_isShared_634_ = v_isSharedCheck_639_;
goto v_resetjp_632_;
}
else
{
lean_inc(v_a_631_);
lean_dec(v___x_630_);
v___x_633_ = lean_box(0);
v_isShared_634_ = v_isSharedCheck_639_;
goto v_resetjp_632_;
}
v_resetjp_632_:
{
lean_object* v___x_635_; lean_object* v___x_637_; 
v___x_635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_635_, 0, v_a_631_);
if (v_isShared_634_ == 0)
{
lean_ctor_set(v___x_633_, 0, v___x_635_);
v___x_637_ = v___x_633_;
goto v_reusejp_636_;
}
else
{
lean_object* v_reuseFailAlloc_638_; 
v_reuseFailAlloc_638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_638_, 0, v___x_635_);
v___x_637_ = v_reuseFailAlloc_638_;
goto v_reusejp_636_;
}
v_reusejp_636_:
{
return v___x_637_;
}
}
}
else
{
lean_object* v_a_640_; 
v_a_640_ = lean_ctor_get(v___x_630_, 0);
lean_inc(v_a_640_);
lean_dec_ref_known(v___x_630_, 1);
v_a_605_ = v_a_640_;
goto v___jp_604_;
}
}
v___jp_598_:
{
if (v___y_600_ == 0)
{
lean_object* v___x_601_; lean_object* v___x_602_; 
lean_dec_ref(v___y_599_);
v___x_601_ = lean_box(0);
v___x_602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_602_, 0, v___x_601_);
return v___x_602_;
}
else
{
lean_object* v___x_603_; 
v___x_603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_603_, 0, v___y_599_);
return v___x_603_;
}
}
v___jp_604_:
{
uint8_t v___x_606_; 
v___x_606_ = l_Lean_Exception_isInterrupt(v_a_605_);
if (v___x_606_ == 0)
{
uint8_t v___x_607_; 
lean_inc_ref(v_a_605_);
v___x_607_ = l_Lean_Exception_isRuntime(v_a_605_);
v___y_599_ = v_a_605_;
v___y_600_ = v___x_607_;
goto v___jp_598_;
}
else
{
v___y_599_ = v_a_605_;
v___y_600_ = v___x_606_;
goto v___jp_598_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryPast___lam__0___boxed(lean_object* v_special_641_, lean_object* v_onKept_642_, lean_object* v_onSpecial_643_, lean_object* v_i_644_, lean_object* v_a_645_, lean_object* v_rest_646_, lean_object* v___y_647_, lean_object* v___y_648_, lean_object* v___y_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_){
_start:
{
lean_object* v_res_654_; 
v_res_654_ = lp_vampireReplay_Vampire_Reconstruct_carryPast___lam__0(v_special_641_, v_onKept_642_, v_onSpecial_643_, v_i_644_, v_a_645_, v_rest_646_, v___y_647_, v___y_648_, v___y_649_, v___y_650_, v___y_651_, v___y_652_);
lean_dec(v___y_652_);
lean_dec_ref(v___y_651_);
lean_dec(v___y_650_);
lean_dec_ref(v___y_649_);
lean_dec(v___y_648_);
lean_dec_ref(v___y_647_);
return v_res_654_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryPast___lam__1(lean_object* v_special_655_, lean_object* v_onKept_656_, lean_object* v_i_657_, lean_object* v_a_658_, lean_object* v_t_659_, lean_object* v___y_660_, lean_object* v___y_661_, lean_object* v___y_662_, lean_object* v___y_663_, lean_object* v___y_664_, lean_object* v___y_665_){
_start:
{
lean_object* v___x_667_; uint8_t v___x_668_; 
lean_inc(v_i_657_);
v___x_667_ = lean_apply_1(v_special_655_, v_i_657_);
v___x_668_ = lean_unbox(v___x_667_);
if (v___x_668_ == 0)
{
lean_object* v___x_669_; 
lean_inc(v___y_665_);
lean_inc_ref(v___y_664_);
lean_inc(v___y_663_);
lean_inc_ref(v___y_662_);
lean_inc(v___y_661_);
lean_inc_ref(v___y_660_);
v___x_669_ = lean_apply_9(v_onKept_656_, v_i_657_, v_a_658_, v___y_660_, v___y_661_, v___y_662_, v___y_663_, v___y_664_, v___y_665_, lean_box(0));
if (lean_obj_tag(v___x_669_) == 0)
{
lean_object* v_a_670_; lean_object* v___x_671_; 
v_a_670_ = lean_ctor_get(v___x_669_, 0);
lean_inc_n(v_a_670_, 2);
lean_dec_ref_known(v___x_669_, 1);
lean_inc(v___y_665_);
lean_inc_ref(v___y_664_);
lean_inc(v___y_663_);
lean_inc_ref(v___y_662_);
v___x_671_ = lean_infer_type(v_a_670_, v___y_662_, v___y_663_, v___y_664_, v___y_665_);
if (lean_obj_tag(v___x_671_) == 0)
{
lean_object* v_a_672_; lean_object* v___x_673_; lean_object* v_a_674_; lean_object* v___x_676_; uint8_t v_isShared_677_; uint8_t v_isSharedCheck_703_; 
v_a_672_ = lean_ctor_get(v___x_671_, 0);
lean_inc(v_a_672_);
lean_dec_ref_known(v___x_671_, 1);
v___x_673_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_a_672_, v___y_663_);
v_a_674_ = lean_ctor_get(v___x_673_, 0);
v_isSharedCheck_703_ = !lean_is_exclusive(v___x_673_);
if (v_isSharedCheck_703_ == 0)
{
v___x_676_ = v___x_673_;
v_isShared_677_ = v_isSharedCheck_703_;
goto v_resetjp_675_;
}
else
{
lean_inc(v_a_674_);
lean_dec(v___x_673_);
v___x_676_ = lean_box(0);
v_isShared_677_ = v_isSharedCheck_703_;
goto v_resetjp_675_;
}
v_resetjp_675_:
{
lean_object* v___x_678_; 
v___x_678_ = l_Lean_Meta_isExprDefEq(v_a_674_, v_t_659_, v___y_662_, v___y_663_, v___y_664_, v___y_665_);
if (lean_obj_tag(v___x_678_) == 0)
{
lean_object* v_a_679_; lean_object* v___x_681_; uint8_t v_isShared_682_; uint8_t v_isSharedCheck_694_; 
v_a_679_ = lean_ctor_get(v___x_678_, 0);
v_isSharedCheck_694_ = !lean_is_exclusive(v___x_678_);
if (v_isSharedCheck_694_ == 0)
{
v___x_681_ = v___x_678_;
v_isShared_682_ = v_isSharedCheck_694_;
goto v_resetjp_680_;
}
else
{
lean_inc(v_a_679_);
lean_dec(v___x_678_);
v___x_681_ = lean_box(0);
v_isShared_682_ = v_isSharedCheck_694_;
goto v_resetjp_680_;
}
v_resetjp_680_:
{
uint8_t v___x_683_; 
v___x_683_ = lean_unbox(v_a_679_);
lean_dec(v_a_679_);
if (v___x_683_ == 0)
{
lean_object* v___x_684_; lean_object* v___x_686_; 
lean_del_object(v___x_676_);
lean_dec(v_a_670_);
v___x_684_ = lean_box(0);
if (v_isShared_682_ == 0)
{
lean_ctor_set(v___x_681_, 0, v___x_684_);
v___x_686_ = v___x_681_;
goto v_reusejp_685_;
}
else
{
lean_object* v_reuseFailAlloc_687_; 
v_reuseFailAlloc_687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_687_, 0, v___x_684_);
v___x_686_ = v_reuseFailAlloc_687_;
goto v_reusejp_685_;
}
v_reusejp_685_:
{
return v___x_686_;
}
}
else
{
lean_object* v___x_689_; 
if (v_isShared_677_ == 0)
{
lean_ctor_set_tag(v___x_676_, 1);
lean_ctor_set(v___x_676_, 0, v_a_670_);
v___x_689_ = v___x_676_;
goto v_reusejp_688_;
}
else
{
lean_object* v_reuseFailAlloc_693_; 
v_reuseFailAlloc_693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_693_, 0, v_a_670_);
v___x_689_ = v_reuseFailAlloc_693_;
goto v_reusejp_688_;
}
v_reusejp_688_:
{
lean_object* v___x_691_; 
if (v_isShared_682_ == 0)
{
lean_ctor_set(v___x_681_, 0, v___x_689_);
v___x_691_ = v___x_681_;
goto v_reusejp_690_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v___x_689_);
v___x_691_ = v_reuseFailAlloc_692_;
goto v_reusejp_690_;
}
v_reusejp_690_:
{
return v___x_691_;
}
}
}
}
}
else
{
lean_object* v_a_695_; lean_object* v___x_697_; uint8_t v_isShared_698_; uint8_t v_isSharedCheck_702_; 
lean_del_object(v___x_676_);
lean_dec(v_a_670_);
v_a_695_ = lean_ctor_get(v___x_678_, 0);
v_isSharedCheck_702_ = !lean_is_exclusive(v___x_678_);
if (v_isSharedCheck_702_ == 0)
{
v___x_697_ = v___x_678_;
v_isShared_698_ = v_isSharedCheck_702_;
goto v_resetjp_696_;
}
else
{
lean_inc(v_a_695_);
lean_dec(v___x_678_);
v___x_697_ = lean_box(0);
v_isShared_698_ = v_isSharedCheck_702_;
goto v_resetjp_696_;
}
v_resetjp_696_:
{
lean_object* v___x_700_; 
if (v_isShared_698_ == 0)
{
v___x_700_ = v___x_697_;
goto v_reusejp_699_;
}
else
{
lean_object* v_reuseFailAlloc_701_; 
v_reuseFailAlloc_701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_701_, 0, v_a_695_);
v___x_700_ = v_reuseFailAlloc_701_;
goto v_reusejp_699_;
}
v_reusejp_699_:
{
return v___x_700_;
}
}
}
}
}
else
{
lean_object* v_a_704_; lean_object* v___x_706_; uint8_t v_isShared_707_; uint8_t v_isSharedCheck_711_; 
lean_dec(v_a_670_);
lean_dec_ref(v_t_659_);
v_a_704_ = lean_ctor_get(v___x_671_, 0);
v_isSharedCheck_711_ = !lean_is_exclusive(v___x_671_);
if (v_isSharedCheck_711_ == 0)
{
v___x_706_ = v___x_671_;
v_isShared_707_ = v_isSharedCheck_711_;
goto v_resetjp_705_;
}
else
{
lean_inc(v_a_704_);
lean_dec(v___x_671_);
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
}
else
{
lean_object* v_a_712_; lean_object* v___x_714_; uint8_t v_isShared_715_; uint8_t v_isSharedCheck_727_; 
lean_dec_ref(v_t_659_);
v_a_712_ = lean_ctor_get(v___x_669_, 0);
v_isSharedCheck_727_ = !lean_is_exclusive(v___x_669_);
if (v_isSharedCheck_727_ == 0)
{
v___x_714_ = v___x_669_;
v_isShared_715_ = v_isSharedCheck_727_;
goto v_resetjp_713_;
}
else
{
lean_inc(v_a_712_);
lean_dec(v___x_669_);
v___x_714_ = lean_box(0);
v_isShared_715_ = v_isSharedCheck_727_;
goto v_resetjp_713_;
}
v_resetjp_713_:
{
uint8_t v___y_717_; uint8_t v___x_725_; 
v___x_725_ = l_Lean_Exception_isInterrupt(v_a_712_);
if (v___x_725_ == 0)
{
uint8_t v___x_726_; 
lean_inc(v_a_712_);
v___x_726_ = l_Lean_Exception_isRuntime(v_a_712_);
v___y_717_ = v___x_726_;
goto v___jp_716_;
}
else
{
v___y_717_ = v___x_725_;
goto v___jp_716_;
}
v___jp_716_:
{
if (v___y_717_ == 0)
{
lean_object* v___x_718_; lean_object* v___x_720_; 
lean_dec(v_a_712_);
v___x_718_ = lean_box(0);
if (v_isShared_715_ == 0)
{
lean_ctor_set_tag(v___x_714_, 0);
lean_ctor_set(v___x_714_, 0, v___x_718_);
v___x_720_ = v___x_714_;
goto v_reusejp_719_;
}
else
{
lean_object* v_reuseFailAlloc_721_; 
v_reuseFailAlloc_721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_721_, 0, v___x_718_);
v___x_720_ = v_reuseFailAlloc_721_;
goto v_reusejp_719_;
}
v_reusejp_719_:
{
return v___x_720_;
}
}
else
{
lean_object* v___x_723_; 
if (v_isShared_715_ == 0)
{
v___x_723_ = v___x_714_;
goto v_reusejp_722_;
}
else
{
lean_object* v_reuseFailAlloc_724_; 
v_reuseFailAlloc_724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_724_, 0, v_a_712_);
v___x_723_ = v_reuseFailAlloc_724_;
goto v_reusejp_722_;
}
v_reusejp_722_:
{
return v___x_723_;
}
}
}
}
}
}
else
{
lean_object* v___x_728_; lean_object* v___x_729_; 
lean_dec_ref(v_t_659_);
lean_dec_ref(v_a_658_);
lean_dec(v_i_657_);
lean_dec_ref(v_onKept_656_);
v___x_728_ = lean_box(0);
v___x_729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_729_, 0, v___x_728_);
return v___x_729_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryPast___lam__1___boxed(lean_object* v_special_730_, lean_object* v_onKept_731_, lean_object* v_i_732_, lean_object* v_a_733_, lean_object* v_t_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_){
_start:
{
lean_object* v_res_742_; 
v_res_742_ = lp_vampireReplay_Vampire_Reconstruct_carryPast___lam__1(v_special_730_, v_onKept_731_, v_i_732_, v_a_733_, v_t_734_, v___y_735_, v___y_736_, v___y_737_, v___y_738_, v___y_739_, v___y_740_);
lean_dec(v___y_740_);
lean_dec_ref(v___y_739_);
lean_dec(v___y_738_);
lean_dec_ref(v___y_737_);
lean_dec(v___y_736_);
lean_dec_ref(v___y_735_);
return v_res_742_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryPast___lam__2(lean_object* v_special_743_, lean_object* v_onKept_744_, lean_object* v_target_745_, lean_object* v_onSpecial_746_, lean_object* v_i_747_, lean_object* v_h_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_){
_start:
{
lean_object* v___x_756_; uint8_t v___x_757_; 
lean_inc(v_i_747_);
v___x_756_ = lean_apply_1(v_special_743_, v_i_747_);
v___x_757_ = lean_unbox(v___x_756_);
if (v___x_757_ == 0)
{
lean_object* v___x_758_; 
lean_dec_ref(v_onSpecial_746_);
lean_inc(v___y_754_);
lean_inc_ref(v___y_753_);
lean_inc(v___y_752_);
lean_inc_ref(v___y_751_);
lean_inc(v___y_750_);
lean_inc_ref(v___y_749_);
v___x_758_ = lean_apply_9(v_onKept_744_, v_i_747_, v_h_748_, v___y_749_, v___y_750_, v___y_751_, v___y_752_, v___y_753_, v___y_754_, lean_box(0));
if (lean_obj_tag(v___x_758_) == 0)
{
lean_object* v_a_759_; lean_object* v___x_760_; 
v_a_759_ = lean_ctor_get(v___x_758_, 0);
lean_inc(v_a_759_);
lean_dec_ref_known(v___x_758_, 1);
v___x_760_ = lp_vampireReplay_Vampire_Reconstruct_placeLiteral(v_target_745_, v_a_759_, v___y_749_, v___y_750_, v___y_751_, v___y_752_, v___y_753_, v___y_754_);
return v___x_760_;
}
else
{
lean_dec_ref(v_target_745_);
return v___x_758_;
}
}
else
{
lean_object* v___x_761_; 
lean_dec_ref(v_onKept_744_);
lean_inc(v___y_754_);
lean_inc_ref(v___y_753_);
lean_inc(v___y_752_);
lean_inc_ref(v___y_751_);
lean_inc(v___y_750_);
lean_inc_ref(v___y_749_);
v___x_761_ = lean_apply_10(v_onSpecial_746_, v_i_747_, v_h_748_, v_target_745_, v___y_749_, v___y_750_, v___y_751_, v___y_752_, v___y_753_, v___y_754_, lean_box(0));
return v___x_761_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryPast___lam__2___boxed(lean_object* v_special_762_, lean_object* v_onKept_763_, lean_object* v_target_764_, lean_object* v_onSpecial_765_, lean_object* v_i_766_, lean_object* v_h_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_, lean_object* v___y_771_, lean_object* v___y_772_, lean_object* v___y_773_, lean_object* v___y_774_){
_start:
{
lean_object* v_res_775_; 
v_res_775_ = lp_vampireReplay_Vampire_Reconstruct_carryPast___lam__2(v_special_762_, v_onKept_763_, v_target_764_, v_onSpecial_765_, v_i_766_, v_h_767_, v___y_768_, v___y_769_, v___y_770_, v___y_771_, v___y_772_, v___y_773_);
lean_dec(v___y_773_);
lean_dec_ref(v___y_772_);
lean_dec(v___y_771_);
lean_dec_ref(v___y_770_);
lean_dec(v___y_769_);
lean_dec_ref(v___y_768_);
return v_res_775_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryPast(lean_object* v_source_776_, lean_object* v_target_777_, lean_object* v_proof_778_, lean_object* v_special_779_, lean_object* v_onSpecial_780_, lean_object* v_onKept_781_, lean_object* v_a_782_, lean_object* v_a_783_, lean_object* v_a_784_, lean_object* v_a_785_, lean_object* v_a_786_, lean_object* v_a_787_){
_start:
{
lean_object* v_whole_789_; lean_object* v_inStep_790_; lean_object* v___x_791_; lean_object* v___x_792_; 
lean_inc_ref(v_onSpecial_780_);
lean_inc_ref_n(v_onKept_781_, 2);
lean_inc_ref_n(v_special_779_, 2);
v_whole_789_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_carryPast___lam__0___boxed), 13, 3);
lean_closure_set(v_whole_789_, 0, v_special_779_);
lean_closure_set(v_whole_789_, 1, v_onKept_781_);
lean_closure_set(v_whole_789_, 2, v_onSpecial_780_);
v_inStep_790_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_carryPast___lam__1___boxed), 12, 2);
lean_closure_set(v_inStep_790_, 0, v_special_779_);
lean_closure_set(v_inStep_790_, 1, v_onKept_781_);
v___x_791_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_target_777_);
lean_inc_ref(v_source_776_);
v___x_792_ = lp_vampireReplay_Vampire_Reconstruct_carrying(v_source_776_, v_target_777_, v___x_791_, v_inStep_790_, v_whole_789_, v_a_782_, v_a_783_, v_a_784_, v_a_785_, v_a_786_, v_a_787_);
if (lean_obj_tag(v___x_792_) == 0)
{
lean_object* v_a_793_; lean_object* v___x_795_; uint8_t v_isShared_796_; uint8_t v_isSharedCheck_804_; 
v_a_793_ = lean_ctor_get(v___x_792_, 0);
v_isSharedCheck_804_ = !lean_is_exclusive(v___x_792_);
if (v_isSharedCheck_804_ == 0)
{
v___x_795_ = v___x_792_;
v_isShared_796_ = v_isSharedCheck_804_;
goto v_resetjp_794_;
}
else
{
lean_inc(v_a_793_);
lean_dec(v___x_792_);
v___x_795_ = lean_box(0);
v_isShared_796_ = v_isSharedCheck_804_;
goto v_resetjp_794_;
}
v_resetjp_794_:
{
if (lean_obj_tag(v_a_793_) == 0)
{
lean_object* v___f_797_; lean_object* v___x_798_; 
lean_del_object(v___x_795_);
v___f_797_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_carryPast___lam__2___boxed), 13, 4);
lean_closure_set(v___f_797_, 0, v_special_779_);
lean_closure_set(v___f_797_, 1, v_onKept_781_);
lean_closure_set(v___f_797_, 2, v_target_777_);
lean_closure_set(v___f_797_, 3, v_onSpecial_780_);
v___x_798_ = lp_vampireReplay_Vampire_Reconstruct_elimParts(v_source_776_, v___x_791_, v___f_797_, v_proof_778_, v_a_782_, v_a_783_, v_a_784_, v_a_785_, v_a_786_, v_a_787_);
lean_dec_ref(v_source_776_);
return v___x_798_;
}
else
{
lean_object* v_val_799_; lean_object* v___x_800_; lean_object* v___x_802_; 
lean_dec_ref(v_onKept_781_);
lean_dec_ref(v_onSpecial_780_);
lean_dec_ref(v_special_779_);
lean_dec_ref(v_target_777_);
lean_dec_ref(v_source_776_);
v_val_799_ = lean_ctor_get(v_a_793_, 0);
lean_inc(v_val_799_);
lean_dec_ref_known(v_a_793_, 1);
v___x_800_ = l_Lean_Expr_app___override(v_val_799_, v_proof_778_);
if (v_isShared_796_ == 0)
{
lean_ctor_set(v___x_795_, 0, v___x_800_);
v___x_802_ = v___x_795_;
goto v_reusejp_801_;
}
else
{
lean_object* v_reuseFailAlloc_803_; 
v_reuseFailAlloc_803_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_803_, 0, v___x_800_);
v___x_802_ = v_reuseFailAlloc_803_;
goto v_reusejp_801_;
}
v_reusejp_801_:
{
return v___x_802_;
}
}
}
}
else
{
lean_object* v_a_805_; lean_object* v___x_807_; uint8_t v_isShared_808_; uint8_t v_isSharedCheck_812_; 
lean_dec_ref(v_onKept_781_);
lean_dec_ref(v_onSpecial_780_);
lean_dec_ref(v_special_779_);
lean_dec_ref(v_proof_778_);
lean_dec_ref(v_target_777_);
lean_dec_ref(v_source_776_);
v_a_805_ = lean_ctor_get(v___x_792_, 0);
v_isSharedCheck_812_ = !lean_is_exclusive(v___x_792_);
if (v_isSharedCheck_812_ == 0)
{
v___x_807_ = v___x_792_;
v_isShared_808_ = v_isSharedCheck_812_;
goto v_resetjp_806_;
}
else
{
lean_inc(v_a_805_);
lean_dec(v___x_792_);
v___x_807_ = lean_box(0);
v_isShared_808_ = v_isSharedCheck_812_;
goto v_resetjp_806_;
}
v_resetjp_806_:
{
lean_object* v___x_810_; 
if (v_isShared_808_ == 0)
{
v___x_810_ = v___x_807_;
goto v_reusejp_809_;
}
else
{
lean_object* v_reuseFailAlloc_811_; 
v_reuseFailAlloc_811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_811_, 0, v_a_805_);
v___x_810_ = v_reuseFailAlloc_811_;
goto v_reusejp_809_;
}
v_reusejp_809_:
{
return v___x_810_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryPast___boxed(lean_object* v_source_813_, lean_object* v_target_814_, lean_object* v_proof_815_, lean_object* v_special_816_, lean_object* v_onSpecial_817_, lean_object* v_onKept_818_, lean_object* v_a_819_, lean_object* v_a_820_, lean_object* v_a_821_, lean_object* v_a_822_, lean_object* v_a_823_, lean_object* v_a_824_, lean_object* v_a_825_){
_start:
{
lean_object* v_res_826_; 
v_res_826_ = lp_vampireReplay_Vampire_Reconstruct_carryPast(v_source_813_, v_target_814_, v_proof_815_, v_special_816_, v_onSpecial_817_, v_onKept_818_, v_a_819_, v_a_820_, v_a_821_, v_a_822_, v_a_823_, v_a_824_);
lean_dec(v_a_824_);
lean_dec_ref(v_a_823_);
lean_dec(v_a_822_);
lean_dec_ref(v_a_821_);
lean_dec(v_a_820_);
lean_dec_ref(v_a_819_);
return v_res_826_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_830_; lean_object* v_dummy_831_; 
v___x_830_ = lean_box(0);
v_dummy_831_ = l_Lean_Expr_sort___override(v___x_830_);
return v_dummy_831_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___lam__0(uint8_t v___x_835_, uint8_t v___x_836_, lean_object* v_e_837_){
_start:
{
lean_object* v_fst_839_; uint8_t v_snd_840_; lean_object* v___x_864_; lean_object* v___x_865_; uint8_t v___x_866_; 
v___x_864_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___lam__0___closed__4));
v___x_865_ = lean_unsigned_to_nat(1u);
v___x_866_ = l_Lean_Expr_isAppOfArity(v_e_837_, v___x_864_, v___x_865_);
if (v___x_866_ == 0)
{
v_fst_839_ = v_e_837_;
v_snd_840_ = v___x_835_;
goto v___jp_838_;
}
else
{
lean_object* v___x_867_; 
v___x_867_ = l_Lean_Expr_appArg_x21(v_e_837_);
lean_dec_ref(v_e_837_);
v_fst_839_ = v___x_867_;
v_snd_840_ = v___x_836_;
goto v___jp_838_;
}
v___jp_838_:
{
lean_object* v___x_841_; lean_object* v___x_842_; uint8_t v___x_843_; 
v___x_841_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___lam__0___closed__1));
v___x_842_ = lean_unsigned_to_nat(3u);
v___x_843_ = l_Lean_Expr_isAppOfArity(v_fst_839_, v___x_841_, v___x_842_);
if (v___x_843_ == 0)
{
lean_object* v___x_844_; 
lean_dec_ref(v_fst_839_);
v___x_844_ = lean_box(0);
return v___x_844_;
}
else
{
lean_object* v_dummy_845_; lean_object* v_nargs_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; uint8_t v___x_852_; 
v_dummy_845_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___lam__0___closed__2, &lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___lam__0___closed__2_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___lam__0___closed__2);
v_nargs_846_ = l_Lean_Expr_getAppNumArgs(v_fst_839_);
lean_inc(v_nargs_846_);
v___x_847_ = lean_mk_array(v_nargs_846_, v_dummy_845_);
v___x_848_ = lean_unsigned_to_nat(1u);
v___x_849_ = lean_nat_sub(v_nargs_846_, v___x_848_);
lean_dec(v_nargs_846_);
v___x_850_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_fst_839_, v___x_847_, v___x_849_);
v___x_851_ = lean_array_get_size(v___x_850_);
v___x_852_ = lean_nat_dec_eq(v___x_851_, v___x_842_);
if (v___x_852_ == 0)
{
lean_object* v___x_853_; 
lean_dec_ref(v___x_850_);
v___x_853_ = lean_box(0);
return v___x_853_;
}
else
{
lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; 
v___x_854_ = lean_unsigned_to_nat(0u);
v___x_855_ = lean_array_fget(v___x_850_, v___x_854_);
v___x_856_ = lean_array_fget(v___x_850_, v___x_848_);
v___x_857_ = lean_unsigned_to_nat(2u);
v___x_858_ = lean_array_fget(v___x_850_, v___x_857_);
lean_dec_ref(v___x_850_);
v___x_859_ = lean_box(v_snd_840_);
v___x_860_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_860_, 0, v___x_858_);
lean_ctor_set(v___x_860_, 1, v___x_859_);
v___x_861_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_861_, 0, v___x_856_);
lean_ctor_set(v___x_861_, 1, v___x_860_);
v___x_862_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_862_, 0, v___x_855_);
lean_ctor_set(v___x_862_, 1, v___x_861_);
v___x_863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_863_, 0, v___x_862_);
return v___x_863_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___lam__0___boxed(lean_object* v___x_868_, lean_object* v___x_869_, lean_object* v_e_870_){
_start:
{
uint8_t v___x_2762__boxed_871_; uint8_t v___x_2763__boxed_872_; lean_object* v_res_873_; 
v___x_2762__boxed_871_ = lean_unbox(v___x_868_);
v___x_2763__boxed_872_ = lean_unbox(v___x_869_);
v_res_873_ = lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___lam__0(v___x_2762__boxed_871_, v___x_2763__boxed_872_, v_e_870_);
return v_res_873_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg(lean_object* v_s_882_, lean_object* v_t_883_, lean_object* v_a_884_, lean_object* v_a_885_, lean_object* v_a_886_, lean_object* v_a_887_){
_start:
{
lean_object* v___y_890_; lean_object* v___y_891_; lean_object* v___y_892_; lean_object* v___y_893_; uint8_t v___x_921_; 
v___x_921_ = lean_expr_eqv(v_s_882_, v_t_883_);
if (v___x_921_ == 0)
{
uint8_t v___x_922_; lean_object* v___x_923_; 
v___x_922_ = 1;
lean_inc_ref(v_s_882_);
v___x_923_ = lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___lam__0(v___x_921_, v___x_922_, v_s_882_);
if (lean_obj_tag(v___x_923_) == 1)
{
lean_object* v_val_924_; lean_object* v___x_926_; uint8_t v_isShared_927_; uint8_t v_isSharedCheck_990_; 
v_val_924_ = lean_ctor_get(v___x_923_, 0);
v_isSharedCheck_990_ = !lean_is_exclusive(v___x_923_);
if (v_isSharedCheck_990_ == 0)
{
v___x_926_ = v___x_923_;
v_isShared_927_ = v_isSharedCheck_990_;
goto v_resetjp_925_;
}
else
{
lean_inc(v_val_924_);
lean_dec(v___x_923_);
v___x_926_ = lean_box(0);
v_isShared_927_ = v_isSharedCheck_990_;
goto v_resetjp_925_;
}
v_resetjp_925_:
{
lean_object* v_snd_928_; lean_object* v_snd_929_; lean_object* v_fst_930_; lean_object* v_fst_931_; lean_object* v_fst_932_; lean_object* v_snd_933_; lean_object* v___x_935_; uint8_t v_isShared_936_; uint8_t v_isSharedCheck_989_; 
v_snd_928_ = lean_ctor_get(v_val_924_, 1);
lean_inc(v_snd_928_);
v_snd_929_ = lean_ctor_get(v_snd_928_, 1);
lean_inc(v_snd_929_);
v_fst_930_ = lean_ctor_get(v_val_924_, 0);
lean_inc(v_fst_930_);
lean_dec(v_val_924_);
v_fst_931_ = lean_ctor_get(v_snd_928_, 0);
lean_inc(v_fst_931_);
lean_dec(v_snd_928_);
v_fst_932_ = lean_ctor_get(v_snd_929_, 0);
v_snd_933_ = lean_ctor_get(v_snd_929_, 1);
v_isSharedCheck_989_ = !lean_is_exclusive(v_snd_929_);
if (v_isSharedCheck_989_ == 0)
{
v___x_935_ = v_snd_929_;
v_isShared_936_ = v_isSharedCheck_989_;
goto v_resetjp_934_;
}
else
{
lean_inc(v_snd_933_);
lean_inc(v_fst_932_);
lean_dec(v_snd_929_);
v___x_935_ = lean_box(0);
v_isShared_936_ = v_isSharedCheck_989_;
goto v_resetjp_934_;
}
v_resetjp_934_:
{
lean_object* v___y_938_; lean_object* v___x_973_; 
lean_inc_ref(v_t_883_);
v___x_973_ = lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___lam__0(v___x_921_, v___x_922_, v_t_883_);
if (lean_obj_tag(v___x_973_) == 1)
{
lean_object* v_val_974_; lean_object* v_snd_975_; lean_object* v_snd_976_; lean_object* v_fst_977_; lean_object* v_fst_978_; lean_object* v_fst_979_; lean_object* v_snd_980_; uint8_t v___y_982_; uint8_t v___x_987_; 
v_val_974_ = lean_ctor_get(v___x_973_, 0);
lean_inc(v_val_974_);
lean_dec_ref_known(v___x_973_, 1);
v_snd_975_ = lean_ctor_get(v_val_974_, 1);
lean_inc(v_snd_975_);
v_snd_976_ = lean_ctor_get(v_snd_975_, 1);
lean_inc(v_snd_976_);
v_fst_977_ = lean_ctor_get(v_val_974_, 0);
lean_inc(v_fst_977_);
lean_dec(v_val_974_);
v_fst_978_ = lean_ctor_get(v_snd_975_, 0);
lean_inc(v_fst_978_);
lean_dec(v_snd_975_);
v_fst_979_ = lean_ctor_get(v_snd_976_, 0);
lean_inc(v_fst_979_);
v_snd_980_ = lean_ctor_get(v_snd_976_, 1);
lean_inc(v_snd_980_);
lean_dec(v_snd_976_);
v___x_987_ = lean_expr_eqv(v_fst_930_, v_fst_977_);
lean_dec(v_fst_977_);
if (v___x_987_ == 0)
{
lean_dec(v_fst_979_);
v___y_982_ = v___x_987_;
goto v___jp_981_;
}
else
{
uint8_t v___x_988_; 
v___x_988_ = lean_expr_eqv(v_fst_931_, v_fst_979_);
lean_dec(v_fst_979_);
v___y_982_ = v___x_988_;
goto v___jp_981_;
}
v___jp_981_:
{
if (v___y_982_ == 0)
{
lean_dec(v_snd_980_);
lean_dec(v_fst_978_);
lean_del_object(v___x_935_);
lean_dec(v_snd_933_);
lean_dec(v_fst_932_);
lean_dec(v_fst_931_);
lean_dec(v_fst_930_);
lean_del_object(v___x_926_);
v___y_890_ = v_a_884_;
v___y_891_ = v_a_885_;
v___y_892_ = v_a_886_;
v___y_893_ = v_a_887_;
goto v___jp_889_;
}
else
{
uint8_t v___x_983_; 
v___x_983_ = lean_expr_eqv(v_fst_932_, v_fst_978_);
lean_dec(v_fst_978_);
if (v___x_983_ == 0)
{
lean_dec(v_snd_980_);
lean_del_object(v___x_935_);
lean_dec(v_snd_933_);
lean_dec(v_fst_932_);
lean_dec(v_fst_931_);
lean_dec(v_fst_930_);
lean_del_object(v___x_926_);
v___y_890_ = v_a_884_;
v___y_891_ = v_a_885_;
v___y_892_ = v_a_886_;
v___y_893_ = v_a_887_;
goto v___jp_889_;
}
else
{
uint8_t v___x_984_; 
v___x_984_ = lean_unbox(v_snd_933_);
if (v___x_984_ == 0)
{
uint8_t v___x_985_; 
v___x_985_ = lean_unbox(v_snd_980_);
lean_dec(v_snd_980_);
if (v___x_985_ == 0)
{
lean_dec_ref(v_t_883_);
goto v___jp_969_;
}
else
{
lean_del_object(v___x_935_);
lean_dec(v_snd_933_);
lean_dec(v_fst_932_);
lean_dec(v_fst_931_);
lean_dec(v_fst_930_);
lean_del_object(v___x_926_);
v___y_890_ = v_a_884_;
v___y_891_ = v_a_885_;
v___y_892_ = v_a_886_;
v___y_893_ = v_a_887_;
goto v___jp_889_;
}
}
else
{
uint8_t v___x_986_; 
v___x_986_ = lean_unbox(v_snd_980_);
lean_dec(v_snd_980_);
if (v___x_986_ == 0)
{
lean_del_object(v___x_935_);
lean_dec(v_snd_933_);
lean_dec(v_fst_932_);
lean_dec(v_fst_931_);
lean_dec(v_fst_930_);
lean_del_object(v___x_926_);
v___y_890_ = v_a_884_;
v___y_891_ = v_a_885_;
v___y_892_ = v_a_886_;
v___y_893_ = v_a_887_;
goto v___jp_889_;
}
else
{
lean_dec_ref(v_t_883_);
goto v___jp_969_;
}
}
}
}
}
}
else
{
lean_dec(v___x_973_);
lean_del_object(v___x_935_);
lean_dec(v_snd_933_);
lean_dec(v_fst_932_);
lean_dec(v_fst_931_);
lean_dec(v_fst_930_);
lean_del_object(v___x_926_);
v___y_890_ = v_a_884_;
v___y_891_ = v_a_885_;
v___y_892_ = v_a_886_;
v___y_893_ = v_a_887_;
goto v___jp_889_;
}
v___jp_937_:
{
lean_object* v___x_939_; 
lean_inc(v_fst_930_);
v___x_939_ = l_Lean_Meta_getLevel(v_fst_930_, v_a_884_, v_a_885_, v_a_886_, v_a_887_);
if (lean_obj_tag(v___x_939_) == 0)
{
lean_object* v_a_940_; lean_object* v___x_942_; uint8_t v_isShared_943_; uint8_t v_isSharedCheck_960_; 
v_a_940_ = lean_ctor_get(v___x_939_, 0);
v_isSharedCheck_960_ = !lean_is_exclusive(v___x_939_);
if (v_isSharedCheck_960_ == 0)
{
v___x_942_ = v___x_939_;
v_isShared_943_ = v_isSharedCheck_960_;
goto v_resetjp_941_;
}
else
{
lean_inc(v_a_940_);
lean_dec(v___x_939_);
v___x_942_ = lean_box(0);
v_isShared_943_ = v_isSharedCheck_960_;
goto v_resetjp_941_;
}
v_resetjp_941_:
{
lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_947_; 
v___x_944_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_carrying___lam__1___closed__1));
v___x_945_ = lean_box(0);
if (v_isShared_936_ == 0)
{
lean_ctor_set_tag(v___x_935_, 1);
lean_ctor_set(v___x_935_, 1, v___x_945_);
lean_ctor_set(v___x_935_, 0, v_a_940_);
v___x_947_ = v___x_935_;
goto v_reusejp_946_;
}
else
{
lean_object* v_reuseFailAlloc_959_; 
v_reuseFailAlloc_959_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_959_, 0, v_a_940_);
lean_ctor_set(v_reuseFailAlloc_959_, 1, v___x_945_);
v___x_947_ = v_reuseFailAlloc_959_;
goto v_reusejp_946_;
}
v_reusejp_946_:
{
lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; uint8_t v___x_951_; lean_object* v___x_952_; lean_object* v___x_954_; 
lean_inc(v___y_938_);
v___x_948_ = l_Lean_Expr_const___override(v___y_938_, v___x_947_);
v___x_949_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_carrying___closed__7, &lp_vampireReplay_Vampire_Reconstruct_carrying___closed__7_once, _init_lp_vampireReplay_Vampire_Reconstruct_carrying___closed__7);
v___x_950_ = l_Lean_mkApp4(v___x_948_, v_fst_930_, v_fst_931_, v_fst_932_, v___x_949_);
v___x_951_ = 0;
v___x_952_ = l_Lean_Expr_lam___override(v___x_944_, v_s_882_, v___x_950_, v___x_951_);
if (v_isShared_927_ == 0)
{
lean_ctor_set(v___x_926_, 0, v___x_952_);
v___x_954_ = v___x_926_;
goto v_reusejp_953_;
}
else
{
lean_object* v_reuseFailAlloc_958_; 
v_reuseFailAlloc_958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_958_, 0, v___x_952_);
v___x_954_ = v_reuseFailAlloc_958_;
goto v_reusejp_953_;
}
v_reusejp_953_:
{
lean_object* v___x_956_; 
if (v_isShared_943_ == 0)
{
lean_ctor_set(v___x_942_, 0, v___x_954_);
v___x_956_ = v___x_942_;
goto v_reusejp_955_;
}
else
{
lean_object* v_reuseFailAlloc_957_; 
v_reuseFailAlloc_957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_957_, 0, v___x_954_);
v___x_956_ = v_reuseFailAlloc_957_;
goto v_reusejp_955_;
}
v_reusejp_955_:
{
return v___x_956_;
}
}
}
}
}
else
{
lean_object* v_a_961_; lean_object* v___x_963_; uint8_t v_isShared_964_; uint8_t v_isSharedCheck_968_; 
lean_del_object(v___x_935_);
lean_dec(v_fst_932_);
lean_dec(v_fst_931_);
lean_dec(v_fst_930_);
lean_del_object(v___x_926_);
lean_dec_ref(v_s_882_);
v_a_961_ = lean_ctor_get(v___x_939_, 0);
v_isSharedCheck_968_ = !lean_is_exclusive(v___x_939_);
if (v_isSharedCheck_968_ == 0)
{
v___x_963_ = v___x_939_;
v_isShared_964_ = v_isSharedCheck_968_;
goto v_resetjp_962_;
}
else
{
lean_inc(v_a_961_);
lean_dec(v___x_939_);
v___x_963_ = lean_box(0);
v_isShared_964_ = v_isSharedCheck_968_;
goto v_resetjp_962_;
}
v_resetjp_962_:
{
lean_object* v___x_966_; 
if (v_isShared_964_ == 0)
{
v___x_966_ = v___x_963_;
goto v_reusejp_965_;
}
else
{
lean_object* v_reuseFailAlloc_967_; 
v_reuseFailAlloc_967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_967_, 0, v_a_961_);
v___x_966_ = v_reuseFailAlloc_967_;
goto v_reusejp_965_;
}
v_reusejp_965_:
{
return v___x_966_;
}
}
}
}
v___jp_969_:
{
uint8_t v___x_970_; 
v___x_970_ = lean_unbox(v_snd_933_);
lean_dec(v_snd_933_);
if (v___x_970_ == 0)
{
lean_object* v___x_971_; 
v___x_971_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___closed__1));
v___y_938_ = v___x_971_;
goto v___jp_937_;
}
else
{
lean_object* v___x_972_; 
v___x_972_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___closed__3));
v___y_938_ = v___x_972_;
goto v___jp_937_;
}
}
}
}
}
else
{
lean_dec(v___x_923_);
v___y_890_ = v_a_884_;
v___y_891_ = v_a_885_;
v___y_892_ = v_a_886_;
v___y_893_ = v_a_887_;
goto v___jp_889_;
}
}
else
{
lean_object* v___x_991_; lean_object* v___x_992_; uint8_t v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; 
lean_dec_ref(v_t_883_);
v___x_991_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_carrying___lam__1___closed__1));
v___x_992_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_carrying___closed__7, &lp_vampireReplay_Vampire_Reconstruct_carrying___closed__7_once, _init_lp_vampireReplay_Vampire_Reconstruct_carrying___closed__7);
v___x_993_ = 0;
v___x_994_ = l_Lean_Expr_lam___override(v___x_991_, v_s_882_, v___x_992_, v___x_993_);
v___x_995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_995_, 0, v___x_994_);
v___x_996_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_996_, 0, v___x_995_);
return v___x_996_;
}
v___jp_889_:
{
lean_object* v___x_894_; 
lean_inc_ref(v_s_882_);
v___x_894_ = l_Lean_Meta_isExprDefEq(v_s_882_, v_t_883_, v___y_890_, v___y_891_, v___y_892_, v___y_893_);
if (lean_obj_tag(v___x_894_) == 0)
{
lean_object* v_a_895_; lean_object* v___x_897_; uint8_t v_isShared_898_; uint8_t v_isSharedCheck_912_; 
v_a_895_ = lean_ctor_get(v___x_894_, 0);
v_isSharedCheck_912_ = !lean_is_exclusive(v___x_894_);
if (v_isSharedCheck_912_ == 0)
{
v___x_897_ = v___x_894_;
v_isShared_898_ = v_isSharedCheck_912_;
goto v_resetjp_896_;
}
else
{
lean_inc(v_a_895_);
lean_dec(v___x_894_);
v___x_897_ = lean_box(0);
v_isShared_898_ = v_isSharedCheck_912_;
goto v_resetjp_896_;
}
v_resetjp_896_:
{
uint8_t v___x_899_; 
v___x_899_ = lean_unbox(v_a_895_);
lean_dec(v_a_895_);
if (v___x_899_ == 0)
{
lean_object* v___x_900_; lean_object* v___x_902_; 
lean_dec_ref(v_s_882_);
v___x_900_ = lean_box(0);
if (v_isShared_898_ == 0)
{
lean_ctor_set(v___x_897_, 0, v___x_900_);
v___x_902_ = v___x_897_;
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
else
{
lean_object* v___x_904_; lean_object* v___x_905_; uint8_t v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_910_; 
v___x_904_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_carrying___lam__1___closed__1));
v___x_905_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_carrying___closed__7, &lp_vampireReplay_Vampire_Reconstruct_carrying___closed__7_once, _init_lp_vampireReplay_Vampire_Reconstruct_carrying___closed__7);
v___x_906_ = 0;
v___x_907_ = l_Lean_Expr_lam___override(v___x_904_, v_s_882_, v___x_905_, v___x_906_);
v___x_908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_908_, 0, v___x_907_);
if (v_isShared_898_ == 0)
{
lean_ctor_set(v___x_897_, 0, v___x_908_);
v___x_910_ = v___x_897_;
goto v_reusejp_909_;
}
else
{
lean_object* v_reuseFailAlloc_911_; 
v_reuseFailAlloc_911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_911_, 0, v___x_908_);
v___x_910_ = v_reuseFailAlloc_911_;
goto v_reusejp_909_;
}
v_reusejp_909_:
{
return v___x_910_;
}
}
}
}
else
{
lean_object* v_a_913_; lean_object* v___x_915_; uint8_t v_isShared_916_; uint8_t v_isSharedCheck_920_; 
lean_dec_ref(v_s_882_);
v_a_913_ = lean_ctor_get(v___x_894_, 0);
v_isSharedCheck_920_ = !lean_is_exclusive(v___x_894_);
if (v_isSharedCheck_920_ == 0)
{
v___x_915_ = v___x_894_;
v_isShared_916_ = v_isSharedCheck_920_;
goto v_resetjp_914_;
}
else
{
lean_inc(v_a_913_);
lean_dec(v___x_894_);
v___x_915_ = lean_box(0);
v_isShared_916_ = v_isSharedCheck_920_;
goto v_resetjp_914_;
}
v_resetjp_914_:
{
lean_object* v___x_918_; 
if (v_isShared_916_ == 0)
{
v___x_918_ = v___x_915_;
goto v_reusejp_917_;
}
else
{
lean_object* v_reuseFailAlloc_919_; 
v_reuseFailAlloc_919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_919_, 0, v_a_913_);
v___x_918_ = v_reuseFailAlloc_919_;
goto v_reusejp_917_;
}
v_reusejp_917_:
{
return v___x_918_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg___boxed(lean_object* v_s_997_, lean_object* v_t_998_, lean_object* v_a_999_, lean_object* v_a_1000_, lean_object* v_a_1001_, lean_object* v_a_1002_, lean_object* v_a_1003_){
_start:
{
lean_object* v_res_1004_; 
v_res_1004_ = lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg(v_s_997_, v_t_998_, v_a_999_, v_a_1000_, v_a_1001_, v_a_1002_);
lean_dec(v_a_1002_);
lean_dec_ref(v_a_1001_);
lean_dec(v_a_1000_);
lean_dec_ref(v_a_999_);
return v_res_1004_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike(lean_object* v_s_1005_, lean_object* v_t_1006_, lean_object* v_a_1007_, lean_object* v_a_1008_, lean_object* v_a_1009_, lean_object* v_a_1010_, lean_object* v_a_1011_, lean_object* v_a_1012_){
_start:
{
lean_object* v___x_1014_; 
v___x_1014_ = lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg(v_s_1005_, v_t_1006_, v_a_1009_, v_a_1010_, v_a_1011_, v_a_1012_);
return v___x_1014_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___boxed(lean_object* v_s_1015_, lean_object* v_t_1016_, lean_object* v_a_1017_, lean_object* v_a_1018_, lean_object* v_a_1019_, lean_object* v_a_1020_, lean_object* v_a_1021_, lean_object* v_a_1022_, lean_object* v_a_1023_){
_start:
{
lean_object* v_res_1024_; 
v_res_1024_ = lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike(v_s_1015_, v_t_1016_, v_a_1017_, v_a_1018_, v_a_1019_, v_a_1020_, v_a_1021_, v_a_1022_);
lean_dec(v_a_1022_);
lean_dec_ref(v_a_1021_);
lean_dec(v_a_1020_);
lean_dec_ref(v_a_1019_);
lean_dec(v_a_1018_);
lean_dec_ref(v_a_1017_);
return v_res_1024_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryAll_alike___redArg(lean_object* v_source_1025_, lean_object* v_target_1026_, lean_object* v_a_1027_, lean_object* v_a_1028_, lean_object* v_a_1029_, lean_object* v_a_1030_){
_start:
{
uint8_t v___y_1033_; lean_object* v___x_1075_; lean_object* v___x_1076_; uint8_t v___x_1077_; 
v___x_1075_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_carrying___closed__1));
v___x_1076_ = lean_unsigned_to_nat(2u);
v___x_1077_ = l_Lean_Expr_isAppOfArity(v_source_1025_, v___x_1075_, v___x_1076_);
if (v___x_1077_ == 0)
{
v___y_1033_ = v___x_1077_;
goto v___jp_1032_;
}
else
{
uint8_t v___x_1078_; 
v___x_1078_ = l_Lean_Expr_isAppOfArity(v_target_1026_, v___x_1075_, v___x_1076_);
v___y_1033_ = v___x_1078_;
goto v___jp_1032_;
}
v___jp_1032_:
{
if (v___y_1033_ == 0)
{
lean_object* v___x_1034_; 
v___x_1034_ = lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg(v_source_1025_, v_target_1026_, v_a_1027_, v_a_1028_, v_a_1029_, v_a_1030_);
return v___x_1034_;
}
else
{
lean_object* v___x_1035_; lean_object* v_s_1036_; lean_object* v___x_1037_; lean_object* v_t_1038_; lean_object* v___x_1039_; 
v___x_1035_ = l_Lean_Expr_appFn_x21(v_source_1025_);
v_s_1036_ = l_Lean_Expr_appArg_x21(v___x_1035_);
lean_dec_ref(v___x_1035_);
v___x_1037_ = l_Lean_Expr_appFn_x21(v_target_1026_);
v_t_1038_ = l_Lean_Expr_appArg_x21(v___x_1037_);
lean_dec_ref(v___x_1037_);
lean_inc_ref(v_t_1038_);
lean_inc_ref(v_s_1036_);
v___x_1039_ = lp_vampireReplay___private_Vampire_Reconstruct_Carry_0__Vampire_Reconstruct_carriedAlike___redArg(v_s_1036_, v_t_1038_, v_a_1027_, v_a_1028_, v_a_1029_, v_a_1030_);
if (lean_obj_tag(v___x_1039_) == 0)
{
lean_object* v_a_1040_; lean_object* v___x_1042_; uint8_t v_isShared_1043_; uint8_t v_isSharedCheck_1074_; 
v_a_1040_ = lean_ctor_get(v___x_1039_, 0);
v_isSharedCheck_1074_ = !lean_is_exclusive(v___x_1039_);
if (v_isSharedCheck_1074_ == 0)
{
v___x_1042_ = v___x_1039_;
v_isShared_1043_ = v_isSharedCheck_1074_;
goto v_resetjp_1041_;
}
else
{
lean_inc(v_a_1040_);
lean_dec(v___x_1039_);
v___x_1042_ = lean_box(0);
v_isShared_1043_ = v_isSharedCheck_1074_;
goto v_resetjp_1041_;
}
v_resetjp_1041_:
{
if (lean_obj_tag(v_a_1040_) == 1)
{
lean_object* v_val_1044_; lean_object* v_restS_1045_; lean_object* v_restT_1046_; lean_object* v___x_1047_; 
lean_del_object(v___x_1042_);
v_val_1044_ = lean_ctor_get(v_a_1040_, 0);
lean_inc(v_val_1044_);
lean_dec_ref_known(v_a_1040_, 1);
v_restS_1045_ = l_Lean_Expr_appArg_x21(v_source_1025_);
lean_dec_ref(v_source_1025_);
v_restT_1046_ = l_Lean_Expr_appArg_x21(v_target_1026_);
lean_dec_ref(v_target_1026_);
lean_inc_ref(v_restT_1046_);
lean_inc_ref(v_restS_1045_);
v___x_1047_ = lp_vampireReplay_Vampire_Reconstruct_carryAll_alike___redArg(v_restS_1045_, v_restT_1046_, v_a_1027_, v_a_1028_, v_a_1029_, v_a_1030_);
if (lean_obj_tag(v___x_1047_) == 0)
{
lean_object* v_a_1048_; lean_object* v___x_1050_; uint8_t v_isShared_1051_; uint8_t v_isSharedCheck_1069_; 
v_a_1048_ = lean_ctor_get(v___x_1047_, 0);
v_isSharedCheck_1069_ = !lean_is_exclusive(v___x_1047_);
if (v_isSharedCheck_1069_ == 0)
{
v___x_1050_ = v___x_1047_;
v_isShared_1051_ = v_isSharedCheck_1069_;
goto v_resetjp_1049_;
}
else
{
lean_inc(v_a_1048_);
lean_dec(v___x_1047_);
v___x_1050_ = lean_box(0);
v_isShared_1051_ = v_isSharedCheck_1069_;
goto v_resetjp_1049_;
}
v_resetjp_1049_:
{
if (lean_obj_tag(v_a_1048_) == 1)
{
lean_object* v_val_1052_; lean_object* v___x_1054_; uint8_t v_isShared_1055_; uint8_t v_isSharedCheck_1064_; 
v_val_1052_ = lean_ctor_get(v_a_1048_, 0);
v_isSharedCheck_1064_ = !lean_is_exclusive(v_a_1048_);
if (v_isSharedCheck_1064_ == 0)
{
v___x_1054_ = v_a_1048_;
v_isShared_1055_ = v_isSharedCheck_1064_;
goto v_resetjp_1053_;
}
else
{
lean_inc(v_val_1052_);
lean_dec(v_a_1048_);
v___x_1054_ = lean_box(0);
v_isShared_1055_ = v_isSharedCheck_1064_;
goto v_resetjp_1053_;
}
v_resetjp_1053_:
{
lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1059_; 
v___x_1056_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_carrying___closed__13, &lp_vampireReplay_Vampire_Reconstruct_carrying___closed__13_once, _init_lp_vampireReplay_Vampire_Reconstruct_carrying___closed__13);
v___x_1057_ = l_Lean_mkApp6(v___x_1056_, v_s_1036_, v_t_1038_, v_restS_1045_, v_restT_1046_, v_val_1044_, v_val_1052_);
if (v_isShared_1055_ == 0)
{
lean_ctor_set(v___x_1054_, 0, v___x_1057_);
v___x_1059_ = v___x_1054_;
goto v_reusejp_1058_;
}
else
{
lean_object* v_reuseFailAlloc_1063_; 
v_reuseFailAlloc_1063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1063_, 0, v___x_1057_);
v___x_1059_ = v_reuseFailAlloc_1063_;
goto v_reusejp_1058_;
}
v_reusejp_1058_:
{
lean_object* v___x_1061_; 
if (v_isShared_1051_ == 0)
{
lean_ctor_set(v___x_1050_, 0, v___x_1059_);
v___x_1061_ = v___x_1050_;
goto v_reusejp_1060_;
}
else
{
lean_object* v_reuseFailAlloc_1062_; 
v_reuseFailAlloc_1062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1062_, 0, v___x_1059_);
v___x_1061_ = v_reuseFailAlloc_1062_;
goto v_reusejp_1060_;
}
v_reusejp_1060_:
{
return v___x_1061_;
}
}
}
}
else
{
lean_object* v___x_1065_; lean_object* v___x_1067_; 
lean_dec(v_a_1048_);
lean_dec_ref(v_restT_1046_);
lean_dec_ref(v_restS_1045_);
lean_dec(v_val_1044_);
lean_dec_ref(v_t_1038_);
lean_dec_ref(v_s_1036_);
v___x_1065_ = lean_box(0);
if (v_isShared_1051_ == 0)
{
lean_ctor_set(v___x_1050_, 0, v___x_1065_);
v___x_1067_ = v___x_1050_;
goto v_reusejp_1066_;
}
else
{
lean_object* v_reuseFailAlloc_1068_; 
v_reuseFailAlloc_1068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1068_, 0, v___x_1065_);
v___x_1067_ = v_reuseFailAlloc_1068_;
goto v_reusejp_1066_;
}
v_reusejp_1066_:
{
return v___x_1067_;
}
}
}
}
else
{
lean_dec_ref(v_restT_1046_);
lean_dec_ref(v_restS_1045_);
lean_dec(v_val_1044_);
lean_dec_ref(v_t_1038_);
lean_dec_ref(v_s_1036_);
return v___x_1047_;
}
}
else
{
lean_object* v___x_1070_; lean_object* v___x_1072_; 
lean_dec(v_a_1040_);
lean_dec_ref(v_t_1038_);
lean_dec_ref(v_s_1036_);
lean_dec_ref(v_target_1026_);
lean_dec_ref(v_source_1025_);
v___x_1070_ = lean_box(0);
if (v_isShared_1043_ == 0)
{
lean_ctor_set(v___x_1042_, 0, v___x_1070_);
v___x_1072_ = v___x_1042_;
goto v_reusejp_1071_;
}
else
{
lean_object* v_reuseFailAlloc_1073_; 
v_reuseFailAlloc_1073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1073_, 0, v___x_1070_);
v___x_1072_ = v_reuseFailAlloc_1073_;
goto v_reusejp_1071_;
}
v_reusejp_1071_:
{
return v___x_1072_;
}
}
}
}
else
{
lean_dec_ref(v_t_1038_);
lean_dec_ref(v_s_1036_);
lean_dec_ref(v_target_1026_);
lean_dec_ref(v_source_1025_);
return v___x_1039_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryAll_alike___redArg___boxed(lean_object* v_source_1079_, lean_object* v_target_1080_, lean_object* v_a_1081_, lean_object* v_a_1082_, lean_object* v_a_1083_, lean_object* v_a_1084_, lean_object* v_a_1085_){
_start:
{
lean_object* v_res_1086_; 
v_res_1086_ = lp_vampireReplay_Vampire_Reconstruct_carryAll_alike___redArg(v_source_1079_, v_target_1080_, v_a_1081_, v_a_1082_, v_a_1083_, v_a_1084_);
lean_dec(v_a_1084_);
lean_dec_ref(v_a_1083_);
lean_dec(v_a_1082_);
lean_dec_ref(v_a_1081_);
return v_res_1086_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryAll_alike(lean_object* v_source_1087_, lean_object* v_target_1088_, lean_object* v_a_1089_, lean_object* v_a_1090_, lean_object* v_a_1091_, lean_object* v_a_1092_, lean_object* v_a_1093_, lean_object* v_a_1094_){
_start:
{
lean_object* v___x_1096_; 
v___x_1096_ = lp_vampireReplay_Vampire_Reconstruct_carryAll_alike___redArg(v_source_1087_, v_target_1088_, v_a_1091_, v_a_1092_, v_a_1093_, v_a_1094_);
return v___x_1096_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryAll_alike___boxed(lean_object* v_source_1097_, lean_object* v_target_1098_, lean_object* v_a_1099_, lean_object* v_a_1100_, lean_object* v_a_1101_, lean_object* v_a_1102_, lean_object* v_a_1103_, lean_object* v_a_1104_, lean_object* v_a_1105_){
_start:
{
lean_object* v_res_1106_; 
v_res_1106_ = lp_vampireReplay_Vampire_Reconstruct_carryAll_alike(v_source_1097_, v_target_1098_, v_a_1099_, v_a_1100_, v_a_1101_, v_a_1102_, v_a_1103_, v_a_1104_);
lean_dec(v_a_1104_);
lean_dec_ref(v_a_1103_);
lean_dec(v_a_1102_);
lean_dec_ref(v_a_1101_);
lean_dec(v_a_1100_);
lean_dec_ref(v_a_1099_);
return v_res_1106_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryAll___lam__0(lean_object* v_x_1107_, lean_object* v_h_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_){
_start:
{
lean_object* v___x_1116_; 
v___x_1116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1116_, 0, v_h_1108_);
return v___x_1116_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryAll___lam__0___boxed(lean_object* v_x_1117_, lean_object* v_h_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_){
_start:
{
lean_object* v_res_1126_; 
v_res_1126_ = lp_vampireReplay_Vampire_Reconstruct_carryAll___lam__0(v_x_1117_, v_h_1118_, v___y_1119_, v___y_1120_, v___y_1121_, v___y_1122_, v___y_1123_, v___y_1124_);
lean_dec(v___y_1124_);
lean_dec_ref(v___y_1123_);
lean_dec(v___y_1122_);
lean_dec_ref(v___y_1121_);
lean_dec(v___y_1120_);
lean_dec_ref(v___y_1119_);
lean_dec(v_x_1117_);
return v_res_1126_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryAll(lean_object* v_source_1128_, lean_object* v_target_1129_, lean_object* v_proof_1130_, lean_object* v_a_1131_, lean_object* v_a_1132_, lean_object* v_a_1133_, lean_object* v_a_1134_, lean_object* v_a_1135_, lean_object* v_a_1136_){
_start:
{
lean_object* v___x_1138_; 
lean_inc_ref(v_target_1129_);
lean_inc_ref(v_source_1128_);
v___x_1138_ = l_Lean_Meta_isExprDefEq(v_source_1128_, v_target_1129_, v_a_1133_, v_a_1134_, v_a_1135_, v_a_1136_);
if (lean_obj_tag(v___x_1138_) == 0)
{
lean_object* v_a_1139_; lean_object* v___x_1141_; uint8_t v_isShared_1142_; uint8_t v_isSharedCheck_1168_; 
v_a_1139_ = lean_ctor_get(v___x_1138_, 0);
v_isSharedCheck_1168_ = !lean_is_exclusive(v___x_1138_);
if (v_isSharedCheck_1168_ == 0)
{
v___x_1141_ = v___x_1138_;
v_isShared_1142_ = v_isSharedCheck_1168_;
goto v_resetjp_1140_;
}
else
{
lean_inc(v_a_1139_);
lean_dec(v___x_1138_);
v___x_1141_ = lean_box(0);
v_isShared_1142_ = v_isSharedCheck_1168_;
goto v_resetjp_1140_;
}
v_resetjp_1140_:
{
uint8_t v___x_1143_; 
v___x_1143_ = lean_unbox(v_a_1139_);
lean_dec(v_a_1139_);
if (v___x_1143_ == 0)
{
lean_object* v___x_1144_; 
lean_del_object(v___x_1141_);
lean_inc_ref(v_target_1129_);
lean_inc_ref(v_source_1128_);
v___x_1144_ = lp_vampireReplay_Vampire_Reconstruct_carryAll_alike___redArg(v_source_1128_, v_target_1129_, v_a_1133_, v_a_1134_, v_a_1135_, v_a_1136_);
if (lean_obj_tag(v___x_1144_) == 0)
{
lean_object* v_a_1145_; lean_object* v___x_1147_; uint8_t v_isShared_1148_; uint8_t v_isSharedCheck_1156_; 
v_a_1145_ = lean_ctor_get(v___x_1144_, 0);
v_isSharedCheck_1156_ = !lean_is_exclusive(v___x_1144_);
if (v_isSharedCheck_1156_ == 0)
{
v___x_1147_ = v___x_1144_;
v_isShared_1148_ = v_isSharedCheck_1156_;
goto v_resetjp_1146_;
}
else
{
lean_inc(v_a_1145_);
lean_dec(v___x_1144_);
v___x_1147_ = lean_box(0);
v_isShared_1148_ = v_isSharedCheck_1156_;
goto v_resetjp_1146_;
}
v_resetjp_1146_:
{
if (lean_obj_tag(v_a_1145_) == 0)
{
lean_object* v___f_1149_; lean_object* v___x_1150_; 
lean_del_object(v___x_1147_);
v___f_1149_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_carryAll___closed__0));
v___x_1150_ = lp_vampireReplay_Vampire_Reconstruct_carryWith(v_source_1128_, v_target_1129_, v_proof_1130_, v___f_1149_, v_a_1131_, v_a_1132_, v_a_1133_, v_a_1134_, v_a_1135_, v_a_1136_);
return v___x_1150_;
}
else
{
lean_object* v_val_1151_; lean_object* v___x_1152_; lean_object* v___x_1154_; 
lean_dec_ref(v_target_1129_);
lean_dec_ref(v_source_1128_);
v_val_1151_ = lean_ctor_get(v_a_1145_, 0);
lean_inc(v_val_1151_);
lean_dec_ref_known(v_a_1145_, 1);
v___x_1152_ = l_Lean_Expr_app___override(v_val_1151_, v_proof_1130_);
if (v_isShared_1148_ == 0)
{
lean_ctor_set(v___x_1147_, 0, v___x_1152_);
v___x_1154_ = v___x_1147_;
goto v_reusejp_1153_;
}
else
{
lean_object* v_reuseFailAlloc_1155_; 
v_reuseFailAlloc_1155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1155_, 0, v___x_1152_);
v___x_1154_ = v_reuseFailAlloc_1155_;
goto v_reusejp_1153_;
}
v_reusejp_1153_:
{
return v___x_1154_;
}
}
}
}
else
{
lean_object* v_a_1157_; lean_object* v___x_1159_; uint8_t v_isShared_1160_; uint8_t v_isSharedCheck_1164_; 
lean_dec_ref(v_proof_1130_);
lean_dec_ref(v_target_1129_);
lean_dec_ref(v_source_1128_);
v_a_1157_ = lean_ctor_get(v___x_1144_, 0);
v_isSharedCheck_1164_ = !lean_is_exclusive(v___x_1144_);
if (v_isSharedCheck_1164_ == 0)
{
v___x_1159_ = v___x_1144_;
v_isShared_1160_ = v_isSharedCheck_1164_;
goto v_resetjp_1158_;
}
else
{
lean_inc(v_a_1157_);
lean_dec(v___x_1144_);
v___x_1159_ = lean_box(0);
v_isShared_1160_ = v_isSharedCheck_1164_;
goto v_resetjp_1158_;
}
v_resetjp_1158_:
{
lean_object* v___x_1162_; 
if (v_isShared_1160_ == 0)
{
v___x_1162_ = v___x_1159_;
goto v_reusejp_1161_;
}
else
{
lean_object* v_reuseFailAlloc_1163_; 
v_reuseFailAlloc_1163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1163_, 0, v_a_1157_);
v___x_1162_ = v_reuseFailAlloc_1163_;
goto v_reusejp_1161_;
}
v_reusejp_1161_:
{
return v___x_1162_;
}
}
}
}
else
{
lean_object* v___x_1166_; 
lean_dec_ref(v_target_1129_);
lean_dec_ref(v_source_1128_);
if (v_isShared_1142_ == 0)
{
lean_ctor_set(v___x_1141_, 0, v_proof_1130_);
v___x_1166_ = v___x_1141_;
goto v_reusejp_1165_;
}
else
{
lean_object* v_reuseFailAlloc_1167_; 
v_reuseFailAlloc_1167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1167_, 0, v_proof_1130_);
v___x_1166_ = v_reuseFailAlloc_1167_;
goto v_reusejp_1165_;
}
v_reusejp_1165_:
{
return v___x_1166_;
}
}
}
}
else
{
lean_object* v_a_1169_; lean_object* v___x_1171_; uint8_t v_isShared_1172_; uint8_t v_isSharedCheck_1176_; 
lean_dec_ref(v_proof_1130_);
lean_dec_ref(v_target_1129_);
lean_dec_ref(v_source_1128_);
v_a_1169_ = lean_ctor_get(v___x_1138_, 0);
v_isSharedCheck_1176_ = !lean_is_exclusive(v___x_1138_);
if (v_isSharedCheck_1176_ == 0)
{
v___x_1171_ = v___x_1138_;
v_isShared_1172_ = v_isSharedCheck_1176_;
goto v_resetjp_1170_;
}
else
{
lean_inc(v_a_1169_);
lean_dec(v___x_1138_);
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
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_carryAll___boxed(lean_object* v_source_1177_, lean_object* v_target_1178_, lean_object* v_proof_1179_, lean_object* v_a_1180_, lean_object* v_a_1181_, lean_object* v_a_1182_, lean_object* v_a_1183_, lean_object* v_a_1184_, lean_object* v_a_1185_, lean_object* v_a_1186_){
_start:
{
lean_object* v_res_1187_; 
v_res_1187_ = lp_vampireReplay_Vampire_Reconstruct_carryAll(v_source_1177_, v_target_1178_, v_proof_1179_, v_a_1180_, v_a_1181_, v_a_1182_, v_a_1183_, v_a_1184_, v_a_1185_);
lean_dec(v_a_1185_);
lean_dec_ref(v_a_1184_);
lean_dec(v_a_1183_);
lean_dec_ref(v_a_1182_);
lean_dec(v_a_1181_);
lean_dec_ref(v_a_1180_);
return v_res_1187_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_vampireReplay_Vampire_Reconstruct_Literal(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_vampireReplay_Vampire_Reconstruct_Carry(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_vampireReplay_Vampire_Reconstruct_Literal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
