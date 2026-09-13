// Lean compiler output
// Module: VampireReplay.Reconstruct.Junction
// Imports: public import Init public meta import Init public import VampireReplay.Reconstruct.Stated
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_junctionParts(lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_bvar___override(lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "And"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__0_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "right"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__1_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__2_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(18, 204, 165, 192, 253, 41, 237, 145)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__2_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__3;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "left"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__4_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__5_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(12, 252, 227, 83, 88, 185, 40, 148)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__5 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__5_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__6;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_projectPart(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_projectPart___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Or"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__0_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "inr"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__1_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(34, 237, 162, 225, 217, 98, 205, 196)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__2_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(100, 75, 208, 15, 82, 176, 164, 239)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__2_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__3;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "inl"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__4_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(34, 237, 162, 225, 217, 98, 205, 196)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__5_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(115, 149, 175, 58, 225, 90, 105, 195)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__5 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__5_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__6;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_injectPart(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_injectPart___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_elimFunction___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_elimFunction___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(34, 237, 162, 225, 217, 98, 205, 196)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__0_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__1_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__1_value),LEAN_SCALAR_PTR_LITERAL(247, 80, 99, 121, 74, 33, 203, 108)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__2_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__3 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__3_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__3_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__4_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "elim"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__5 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__5_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(34, 237, 162, 225, 217, 98, 205, 196)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__6_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__5_value),LEAN_SCALAR_PTR_LITERAL(94, 178, 144, 142, 106, 224, 229, 213)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__6 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__6_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__7;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__8;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_elimFunction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_elimFunction___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_elimParts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_elimParts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_suffixJunctions_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_suffixJunctions_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_suffixJunctions(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_suffixJunctions___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_suffixJunctions_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_suffixJunctions_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_injectGiven_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_injectGiven_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_injectGiven___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_injectGiven___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_injectGiven___closed__0_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_injectGiven___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_injectGiven___closed__0_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_injectGiven___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_injectGiven___closed__1_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_injectGiven(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_injectGiven___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_injectGiven_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_injectGiven_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Junction_0__Vampire_Reconstruct_elimGivenAt___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Junction_0__Vampire_Reconstruct_elimGivenAt___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Junction_0__Vampire_Reconstruct_elimGivenAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Junction_0__Vampire_Reconstruct_elimGivenAt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Junction_0__Vampire_Reconstruct_elimGivenFrom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Junction_0__Vampire_Reconstruct_elimGivenFrom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_elimGivenFunction___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "a junction with no arguments"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_elimGivenFunction___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_elimGivenFunction___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_elimGivenFunction___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_elimGivenFunction___closed__1;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_elimGivenFunction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_elimGivenFunction___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_elimGiven(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_elimGiven___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_projectGiven_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_projectGiven_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_projectGiven___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_projectGiven___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_projectGiven___closed__0_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_projectGiven___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_projectGiven___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_projectGiven___closed__1_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_projectGiven___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_projectGiven___closed__1_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_projectGiven___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_projectGiven___closed__2_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_projectGiven(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_projectGiven___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_projectGiven_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_projectGiven_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_introGiven_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_introGiven_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_introGiven_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "intro"};
static const lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_introGiven_spec__1___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_introGiven_spec__1___redArg___closed__0_value;
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_introGiven_spec__1___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_introGiven_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_introGiven_spec__1___redArg___closed__1_value_aux_0),((lean_object*)&lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_introGiven_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(58, 46, 244, 208, 18, 71, 77, 162)}};
static const lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_introGiven_spec__1___redArg___closed__1 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_introGiven_spec__1___redArg___closed__1_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_introGiven_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_introGiven_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_introGiven_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_introGiven_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_vampireReplay_Vampire_Reconstruct_introGiven___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_introGiven___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_introGiven___closed__0_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_introGiven___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_projectGiven___closed__1_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_introGiven___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_introGiven___closed__1_value_aux_0),((lean_object*)&lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_introGiven_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(177, 152, 123, 219, 220, 182, 189, 250)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_introGiven___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_introGiven___closed__1_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_introGiven___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_introGiven___closed__2;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_introGiven(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_introGiven___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_introGiven_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_introGiven_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_introGiven_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_introGiven_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_introParts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_introParts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_congrJunction___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_congrJunction___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_congrJunction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_congrJunction___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__3(void){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_6_ = lean_box(0);
v___x_7_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__2));
v___x_8_ = l_Lean_Expr_const___override(v___x_7_, v___x_6_);
return v___x_8_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__6(void){
_start:
{
lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_13_ = lean_box(0);
v___x_14_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__5));
v___x_15_ = l_Lean_Expr_const___override(v___x_14_, v___x_13_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg(lean_object* v_fn_16_, lean_object* v_chain_17_, lean_object* v_i_18_, lean_object* v_h_19_){
_start:
{
lean_object* v___x_21_; uint8_t v___x_22_; 
v___x_21_ = lean_unsigned_to_nat(2u);
v___x_22_ = l_Lean_Expr_isAppOfArity(v_chain_17_, v_fn_16_, v___x_21_);
if (v___x_22_ == 0)
{
lean_object* v___x_23_; 
lean_dec(v_i_18_);
lean_dec_ref(v_chain_17_);
v___x_23_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_23_, 0, v_h_19_);
return v___x_23_;
}
else
{
lean_object* v___x_24_; lean_object* v_left_25_; lean_object* v_right_26_; lean_object* v___x_27_; lean_object* v_n_28_; uint8_t v___x_29_; 
v___x_24_ = l_Lean_Expr_appFn_x21(v_chain_17_);
v_left_25_ = l_Lean_Expr_appArg_x21(v___x_24_);
lean_dec_ref(v___x_24_);
v_right_26_ = l_Lean_Expr_appArg_x21(v_chain_17_);
lean_dec_ref(v_chain_17_);
lean_inc_ref(v_left_25_);
v___x_27_ = lp_vampireReplay_Vampire_Reconstruct_junctionParts(v_fn_16_, v_left_25_);
v_n_28_ = lean_array_get_size(v___x_27_);
lean_dec_ref(v___x_27_);
v___x_29_ = lean_nat_dec_lt(v_i_18_, v_n_28_);
if (v___x_29_ == 0)
{
lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; 
v___x_30_ = lean_nat_sub(v_i_18_, v_n_28_);
lean_dec(v_i_18_);
v___x_31_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__3, &lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__3);
lean_inc_ref(v_right_26_);
v___x_32_ = l_Lean_mkApp3(v___x_31_, v_left_25_, v_right_26_, v_h_19_);
v_chain_17_ = v_right_26_;
v_i_18_ = v___x_30_;
v_h_19_ = v___x_32_;
goto _start;
}
else
{
lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_34_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__6, &lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__6_once, _init_lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__6);
lean_inc_ref(v_left_25_);
v___x_35_ = l_Lean_mkApp3(v___x_34_, v_left_25_, v_right_26_, v_h_19_);
v_chain_17_ = v_left_25_;
v_h_19_ = v___x_35_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___boxed(lean_object* v_fn_37_, lean_object* v_chain_38_, lean_object* v_i_39_, lean_object* v_h_40_, lean_object* v_a_41_){
_start:
{
lean_object* v_res_42_; 
v_res_42_ = lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg(v_fn_37_, v_chain_38_, v_i_39_, v_h_40_);
lean_dec(v_fn_37_);
return v_res_42_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_projectPart(lean_object* v_fn_43_, lean_object* v_chain_44_, lean_object* v_i_45_, lean_object* v_h_46_, lean_object* v_a_47_, lean_object* v_a_48_, lean_object* v_a_49_, lean_object* v_a_50_, lean_object* v_a_51_, lean_object* v_a_52_){
_start:
{
lean_object* v___x_54_; 
v___x_54_ = lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg(v_fn_43_, v_chain_44_, v_i_45_, v_h_46_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_projectPart___boxed(lean_object* v_fn_55_, lean_object* v_chain_56_, lean_object* v_i_57_, lean_object* v_h_58_, lean_object* v_a_59_, lean_object* v_a_60_, lean_object* v_a_61_, lean_object* v_a_62_, lean_object* v_a_63_, lean_object* v_a_64_, lean_object* v_a_65_){
_start:
{
lean_object* v_res_66_; 
v_res_66_ = lp_vampireReplay_Vampire_Reconstruct_projectPart(v_fn_55_, v_chain_56_, v_i_57_, v_h_58_, v_a_59_, v_a_60_, v_a_61_, v_a_62_, v_a_63_, v_a_64_);
lean_dec(v_a_64_);
lean_dec_ref(v_a_63_);
lean_dec(v_a_62_);
lean_dec_ref(v_a_61_);
lean_dec(v_a_60_);
lean_dec_ref(v_a_59_);
lean_dec(v_fn_55_);
return v_res_66_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__3(void){
_start:
{
lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; 
v___x_72_ = lean_box(0);
v___x_73_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__2));
v___x_74_ = l_Lean_Expr_const___override(v___x_73_, v___x_72_);
return v___x_74_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__6(void){
_start:
{
lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; 
v___x_79_ = lean_box(0);
v___x_80_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__5));
v___x_81_ = l_Lean_Expr_const___override(v___x_80_, v___x_79_);
return v___x_81_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg(lean_object* v_fn_82_, lean_object* v_chain_83_, lean_object* v_i_84_, lean_object* v_h_85_){
_start:
{
lean_object* v___x_87_; uint8_t v___x_88_; 
v___x_87_ = lean_unsigned_to_nat(2u);
v___x_88_ = l_Lean_Expr_isAppOfArity(v_chain_83_, v_fn_82_, v___x_87_);
if (v___x_88_ == 0)
{
lean_object* v___x_89_; 
v___x_89_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_89_, 0, v_h_85_);
return v___x_89_;
}
else
{
lean_object* v___x_90_; lean_object* v_left_91_; lean_object* v_right_92_; lean_object* v___x_93_; lean_object* v_n_94_; uint8_t v___x_95_; 
v___x_90_ = l_Lean_Expr_appFn_x21(v_chain_83_);
v_left_91_ = l_Lean_Expr_appArg_x21(v___x_90_);
lean_dec_ref(v___x_90_);
v_right_92_ = l_Lean_Expr_appArg_x21(v_chain_83_);
lean_inc_ref(v_left_91_);
v___x_93_ = lp_vampireReplay_Vampire_Reconstruct_junctionParts(v_fn_82_, v_left_91_);
v_n_94_ = lean_array_get_size(v___x_93_);
lean_dec_ref(v___x_93_);
v___x_95_ = lean_nat_dec_lt(v_i_84_, v_n_94_);
if (v___x_95_ == 0)
{
lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_96_ = lean_nat_sub(v_i_84_, v_n_94_);
v___x_97_ = lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg(v_fn_82_, v_right_92_, v___x_96_, v_h_85_);
lean_dec(v___x_96_);
if (lean_obj_tag(v___x_97_) == 0)
{
lean_object* v_a_98_; lean_object* v___x_100_; uint8_t v_isShared_101_; uint8_t v_isSharedCheck_107_; 
v_a_98_ = lean_ctor_get(v___x_97_, 0);
v_isSharedCheck_107_ = !lean_is_exclusive(v___x_97_);
if (v_isSharedCheck_107_ == 0)
{
v___x_100_ = v___x_97_;
v_isShared_101_ = v_isSharedCheck_107_;
goto v_resetjp_99_;
}
else
{
lean_inc(v_a_98_);
lean_dec(v___x_97_);
v___x_100_ = lean_box(0);
v_isShared_101_ = v_isSharedCheck_107_;
goto v_resetjp_99_;
}
v_resetjp_99_:
{
lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_105_; 
v___x_102_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__3, &lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__3);
v___x_103_ = l_Lean_mkApp3(v___x_102_, v_left_91_, v_right_92_, v_a_98_);
if (v_isShared_101_ == 0)
{
lean_ctor_set(v___x_100_, 0, v___x_103_);
v___x_105_ = v___x_100_;
goto v_reusejp_104_;
}
else
{
lean_object* v_reuseFailAlloc_106_; 
v_reuseFailAlloc_106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_106_, 0, v___x_103_);
v___x_105_ = v_reuseFailAlloc_106_;
goto v_reusejp_104_;
}
v_reusejp_104_:
{
return v___x_105_;
}
}
}
else
{
lean_dec_ref(v_right_92_);
lean_dec_ref(v_left_91_);
return v___x_97_;
}
}
else
{
lean_object* v___x_108_; 
v___x_108_ = lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg(v_fn_82_, v_left_91_, v_i_84_, v_h_85_);
if (lean_obj_tag(v___x_108_) == 0)
{
lean_object* v_a_109_; lean_object* v___x_111_; uint8_t v_isShared_112_; uint8_t v_isSharedCheck_118_; 
v_a_109_ = lean_ctor_get(v___x_108_, 0);
v_isSharedCheck_118_ = !lean_is_exclusive(v___x_108_);
if (v_isSharedCheck_118_ == 0)
{
v___x_111_ = v___x_108_;
v_isShared_112_ = v_isSharedCheck_118_;
goto v_resetjp_110_;
}
else
{
lean_inc(v_a_109_);
lean_dec(v___x_108_);
v___x_111_ = lean_box(0);
v_isShared_112_ = v_isSharedCheck_118_;
goto v_resetjp_110_;
}
v_resetjp_110_:
{
lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_116_; 
v___x_113_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__6, &lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__6_once, _init_lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__6);
v___x_114_ = l_Lean_mkApp3(v___x_113_, v_left_91_, v_right_92_, v_a_109_);
if (v_isShared_112_ == 0)
{
lean_ctor_set(v___x_111_, 0, v___x_114_);
v___x_116_ = v___x_111_;
goto v_reusejp_115_;
}
else
{
lean_object* v_reuseFailAlloc_117_; 
v_reuseFailAlloc_117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_117_, 0, v___x_114_);
v___x_116_ = v_reuseFailAlloc_117_;
goto v_reusejp_115_;
}
v_reusejp_115_:
{
return v___x_116_;
}
}
}
else
{
lean_dec_ref(v_right_92_);
lean_dec_ref(v_left_91_);
return v___x_108_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___boxed(lean_object* v_fn_119_, lean_object* v_chain_120_, lean_object* v_i_121_, lean_object* v_h_122_, lean_object* v_a_123_){
_start:
{
lean_object* v_res_124_; 
v_res_124_ = lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg(v_fn_119_, v_chain_120_, v_i_121_, v_h_122_);
lean_dec(v_i_121_);
lean_dec_ref(v_chain_120_);
lean_dec(v_fn_119_);
return v_res_124_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_injectPart(lean_object* v_fn_125_, lean_object* v_chain_126_, lean_object* v_i_127_, lean_object* v_h_128_, lean_object* v_a_129_, lean_object* v_a_130_, lean_object* v_a_131_, lean_object* v_a_132_, lean_object* v_a_133_, lean_object* v_a_134_){
_start:
{
lean_object* v___x_136_; 
v___x_136_ = lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg(v_fn_125_, v_chain_126_, v_i_127_, v_h_128_);
return v___x_136_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_injectPart___boxed(lean_object* v_fn_137_, lean_object* v_chain_138_, lean_object* v_i_139_, lean_object* v_h_140_, lean_object* v_a_141_, lean_object* v_a_142_, lean_object* v_a_143_, lean_object* v_a_144_, lean_object* v_a_145_, lean_object* v_a_146_, lean_object* v_a_147_){
_start:
{
lean_object* v_res_148_; 
v_res_148_ = lp_vampireReplay_Vampire_Reconstruct_injectPart(v_fn_137_, v_chain_138_, v_i_139_, v_h_140_, v_a_141_, v_a_142_, v_a_143_, v_a_144_, v_a_145_, v_a_146_);
lean_dec(v_a_146_);
lean_dec_ref(v_a_145_);
lean_dec(v_a_144_);
lean_dec_ref(v_a_143_);
lean_dec(v_a_142_);
lean_dec_ref(v_a_141_);
lean_dec(v_i_139_);
lean_dec_ref(v_chain_138_);
lean_dec(v_fn_137_);
return v_res_148_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_elimFunction___lam__0(lean_object* v_handler_149_, lean_object* v_offset_150_, uint8_t v___x_151_, uint8_t v___x_152_, lean_object* v_motive_x3f_153_, lean_object* v_a_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_){
_start:
{
lean_object* v___x_162_; 
lean_inc(v___y_160_);
lean_inc_ref(v___y_159_);
lean_inc(v___y_158_);
lean_inc_ref(v___y_157_);
lean_inc(v___y_156_);
lean_inc_ref(v___y_155_);
lean_inc_ref(v_a_154_);
v___x_162_ = lean_apply_9(v_handler_149_, v_offset_150_, v_a_154_, v___y_155_, v___y_156_, v___y_157_, v___y_158_, v___y_159_, v___y_160_, lean_box(0));
if (lean_obj_tag(v___x_162_) == 0)
{
lean_object* v_a_163_; lean_object* v_motive_165_; lean_object* v___y_166_; lean_object* v___y_167_; lean_object* v___y_168_; lean_object* v___y_169_; 
v_a_163_ = lean_ctor_get(v___x_162_, 0);
lean_inc(v_a_163_);
lean_dec_ref_known(v___x_162_, 1);
if (lean_obj_tag(v_motive_x3f_153_) == 0)
{
lean_object* v___x_192_; 
lean_inc(v___y_160_);
lean_inc_ref(v___y_159_);
lean_inc(v___y_158_);
lean_inc_ref(v___y_157_);
lean_inc(v_a_163_);
v___x_192_ = lean_infer_type(v_a_163_, v___y_157_, v___y_158_, v___y_159_, v___y_160_);
if (lean_obj_tag(v___x_192_) == 0)
{
lean_object* v_a_193_; 
v_a_193_ = lean_ctor_get(v___x_192_, 0);
lean_inc(v_a_193_);
lean_dec_ref_known(v___x_192_, 1);
v_motive_165_ = v_a_193_;
v___y_166_ = v___y_157_;
v___y_167_ = v___y_158_;
v___y_168_ = v___y_159_;
v___y_169_ = v___y_160_;
goto v___jp_164_;
}
else
{
lean_object* v_a_194_; lean_object* v___x_196_; uint8_t v_isShared_197_; uint8_t v_isSharedCheck_201_; 
lean_dec(v_a_163_);
lean_dec_ref(v_a_154_);
v_a_194_ = lean_ctor_get(v___x_192_, 0);
v_isSharedCheck_201_ = !lean_is_exclusive(v___x_192_);
if (v_isSharedCheck_201_ == 0)
{
v___x_196_ = v___x_192_;
v_isShared_197_ = v_isSharedCheck_201_;
goto v_resetjp_195_;
}
else
{
lean_inc(v_a_194_);
lean_dec(v___x_192_);
v___x_196_ = lean_box(0);
v_isShared_197_ = v_isSharedCheck_201_;
goto v_resetjp_195_;
}
v_resetjp_195_:
{
lean_object* v___x_199_; 
if (v_isShared_197_ == 0)
{
v___x_199_ = v___x_196_;
goto v_reusejp_198_;
}
else
{
lean_object* v_reuseFailAlloc_200_; 
v_reuseFailAlloc_200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_200_, 0, v_a_194_);
v___x_199_ = v_reuseFailAlloc_200_;
goto v_reusejp_198_;
}
v_reusejp_198_:
{
return v___x_199_;
}
}
}
}
else
{
lean_object* v_val_202_; 
v_val_202_ = lean_ctor_get(v_motive_x3f_153_, 0);
lean_inc(v_val_202_);
lean_dec_ref_known(v_motive_x3f_153_, 1);
v_motive_165_ = v_val_202_;
v___y_166_ = v___y_157_;
v___y_167_ = v___y_158_;
v___y_168_ = v___y_159_;
v___y_169_ = v___y_160_;
goto v___jp_164_;
}
v___jp_164_:
{
lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; uint8_t v___x_173_; lean_object* v___x_174_; 
v___x_170_ = lean_unsigned_to_nat(1u);
v___x_171_ = lean_mk_empty_array_with_capacity(v___x_170_);
v___x_172_ = lean_array_push(v___x_171_, v_a_154_);
v___x_173_ = 1;
v___x_174_ = l_Lean_Meta_mkLambdaFVars(v___x_172_, v_a_163_, v___x_151_, v___x_152_, v___x_151_, v___x_152_, v___x_173_, v___y_166_, v___y_167_, v___y_168_, v___y_169_);
lean_dec_ref(v___x_172_);
if (lean_obj_tag(v___x_174_) == 0)
{
lean_object* v_a_175_; lean_object* v___x_177_; uint8_t v_isShared_178_; uint8_t v_isSharedCheck_183_; 
v_a_175_ = lean_ctor_get(v___x_174_, 0);
v_isSharedCheck_183_ = !lean_is_exclusive(v___x_174_);
if (v_isSharedCheck_183_ == 0)
{
v___x_177_ = v___x_174_;
v_isShared_178_ = v_isSharedCheck_183_;
goto v_resetjp_176_;
}
else
{
lean_inc(v_a_175_);
lean_dec(v___x_174_);
v___x_177_ = lean_box(0);
v_isShared_178_ = v_isSharedCheck_183_;
goto v_resetjp_176_;
}
v_resetjp_176_:
{
lean_object* v___x_179_; lean_object* v___x_181_; 
v___x_179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_179_, 0, v_a_175_);
lean_ctor_set(v___x_179_, 1, v_motive_165_);
if (v_isShared_178_ == 0)
{
lean_ctor_set(v___x_177_, 0, v___x_179_);
v___x_181_ = v___x_177_;
goto v_reusejp_180_;
}
else
{
lean_object* v_reuseFailAlloc_182_; 
v_reuseFailAlloc_182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_182_, 0, v___x_179_);
v___x_181_ = v_reuseFailAlloc_182_;
goto v_reusejp_180_;
}
v_reusejp_180_:
{
return v___x_181_;
}
}
}
else
{
lean_object* v_a_184_; lean_object* v___x_186_; uint8_t v_isShared_187_; uint8_t v_isSharedCheck_191_; 
lean_dec_ref(v_motive_165_);
v_a_184_ = lean_ctor_get(v___x_174_, 0);
v_isSharedCheck_191_ = !lean_is_exclusive(v___x_174_);
if (v_isSharedCheck_191_ == 0)
{
v___x_186_ = v___x_174_;
v_isShared_187_ = v_isSharedCheck_191_;
goto v_resetjp_185_;
}
else
{
lean_inc(v_a_184_);
lean_dec(v___x_174_);
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
}
else
{
lean_object* v_a_203_; lean_object* v___x_205_; uint8_t v_isShared_206_; uint8_t v_isSharedCheck_210_; 
lean_dec_ref(v_a_154_);
lean_dec(v_motive_x3f_153_);
v_a_203_ = lean_ctor_get(v___x_162_, 0);
v_isSharedCheck_210_ = !lean_is_exclusive(v___x_162_);
if (v_isSharedCheck_210_ == 0)
{
v___x_205_ = v___x_162_;
v_isShared_206_ = v_isSharedCheck_210_;
goto v_resetjp_204_;
}
else
{
lean_inc(v_a_203_);
lean_dec(v___x_162_);
v___x_205_ = lean_box(0);
v_isShared_206_ = v_isSharedCheck_210_;
goto v_resetjp_204_;
}
v_resetjp_204_:
{
lean_object* v___x_208_; 
if (v_isShared_206_ == 0)
{
v___x_208_ = v___x_205_;
goto v_reusejp_207_;
}
else
{
lean_object* v_reuseFailAlloc_209_; 
v_reuseFailAlloc_209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_209_, 0, v_a_203_);
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
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_elimFunction___lam__0___boxed(lean_object* v_handler_211_, lean_object* v_offset_212_, lean_object* v___x_213_, lean_object* v___x_214_, lean_object* v_motive_x3f_215_, lean_object* v_a_216_, lean_object* v___y_217_, lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_){
_start:
{
uint8_t v___x_2940__boxed_224_; uint8_t v___x_2941__boxed_225_; lean_object* v_res_226_; 
v___x_2940__boxed_224_ = lean_unbox(v___x_213_);
v___x_2941__boxed_225_ = lean_unbox(v___x_214_);
v_res_226_ = lp_vampireReplay_Vampire_Reconstruct_elimFunction___lam__0(v_handler_211_, v_offset_212_, v___x_2940__boxed_224_, v___x_2941__boxed_225_, v_motive_x3f_215_, v_a_216_, v___y_217_, v___y_218_, v___y_219_, v___y_220_, v___y_221_, v___y_222_);
lean_dec(v___y_222_);
lean_dec_ref(v___y_221_);
lean_dec(v___y_220_);
lean_dec_ref(v___y_219_);
lean_dec(v___y_218_);
lean_dec_ref(v___y_217_);
return v_res_226_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__7(void){
_start:
{
lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_239_ = lean_box(0);
v___x_240_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__6));
v___x_241_ = l_Lean_Expr_const___override(v___x_240_, v___x_239_);
return v___x_241_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__8(void){
_start:
{
lean_object* v___x_242_; lean_object* v___x_243_; 
v___x_242_ = lean_unsigned_to_nat(0u);
v___x_243_ = l_Lean_Expr_bvar___override(v___x_242_);
return v___x_243_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_elimFunction(lean_object* v_chain_244_, lean_object* v_offset_245_, lean_object* v_handler_246_, lean_object* v_motive_x3f_247_, lean_object* v_a_248_, lean_object* v_a_249_, lean_object* v_a_250_, lean_object* v_a_251_, lean_object* v_a_252_, lean_object* v_a_253_){
_start:
{
lean_object* v___x_255_; lean_object* v___x_256_; uint8_t v___x_257_; 
v___x_255_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__0));
v___x_256_ = lean_unsigned_to_nat(2u);
v___x_257_ = l_Lean_Expr_isAppOfArity(v_chain_244_, v___x_255_, v___x_256_);
if (v___x_257_ == 0)
{
uint8_t v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___f_261_; lean_object* v___x_262_; lean_object* v___x_263_; 
v___x_258_ = 1;
v___x_259_ = lean_box(v___x_257_);
v___x_260_ = lean_box(v___x_258_);
v___f_261_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_elimFunction___lam__0___boxed), 13, 5);
lean_closure_set(v___f_261_, 0, v_handler_246_);
lean_closure_set(v___f_261_, 1, v_offset_245_);
lean_closure_set(v___f_261_, 2, v___x_259_);
lean_closure_set(v___f_261_, 3, v___x_260_);
lean_closure_set(v___f_261_, 4, v_motive_x3f_247_);
v___x_262_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__2));
v___x_263_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_262_, v_chain_244_, v___f_261_, v_a_248_, v_a_249_, v_a_250_, v_a_251_, v_a_252_, v_a_253_);
return v___x_263_;
}
else
{
lean_object* v___x_264_; lean_object* v_left_265_; lean_object* v___x_266_; lean_object* v___x_267_; 
v___x_264_ = l_Lean_Expr_appFn_x21(v_chain_244_);
v_left_265_ = l_Lean_Expr_appArg_x21(v___x_264_);
lean_dec_ref(v___x_264_);
lean_inc_ref_n(v_left_265_, 2);
v___x_266_ = lp_vampireReplay_Vampire_Reconstruct_junctionParts(v___x_255_, v_left_265_);
lean_inc_ref(v_handler_246_);
lean_inc(v_offset_245_);
v___x_267_ = lp_vampireReplay_Vampire_Reconstruct_elimFunction(v_left_265_, v_offset_245_, v_handler_246_, v_motive_x3f_247_, v_a_248_, v_a_249_, v_a_250_, v_a_251_, v_a_252_, v_a_253_);
if (lean_obj_tag(v___x_267_) == 0)
{
lean_object* v_a_268_; lean_object* v___x_270_; uint8_t v_isShared_271_; uint8_t v_isSharedCheck_304_; 
v_a_268_ = lean_ctor_get(v___x_267_, 0);
v_isSharedCheck_304_ = !lean_is_exclusive(v___x_267_);
if (v_isSharedCheck_304_ == 0)
{
v___x_270_ = v___x_267_;
v_isShared_271_ = v_isSharedCheck_304_;
goto v_resetjp_269_;
}
else
{
lean_inc(v_a_268_);
lean_dec(v___x_267_);
v___x_270_ = lean_box(0);
v_isShared_271_ = v_isSharedCheck_304_;
goto v_resetjp_269_;
}
v_resetjp_269_:
{
lean_object* v_fst_272_; lean_object* v_snd_273_; lean_object* v_right_274_; lean_object* v_n_275_; lean_object* v___x_276_; lean_object* v___x_278_; 
v_fst_272_ = lean_ctor_get(v_a_268_, 0);
lean_inc(v_fst_272_);
v_snd_273_ = lean_ctor_get(v_a_268_, 1);
lean_inc_n(v_snd_273_, 2);
lean_dec(v_a_268_);
v_right_274_ = l_Lean_Expr_appArg_x21(v_chain_244_);
v_n_275_ = lean_array_get_size(v___x_266_);
lean_dec_ref(v___x_266_);
v___x_276_ = lean_nat_add(v_offset_245_, v_n_275_);
lean_dec(v_offset_245_);
if (v_isShared_271_ == 0)
{
lean_ctor_set_tag(v___x_270_, 1);
lean_ctor_set(v___x_270_, 0, v_snd_273_);
v___x_278_ = v___x_270_;
goto v_reusejp_277_;
}
else
{
lean_object* v_reuseFailAlloc_303_; 
v_reuseFailAlloc_303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_303_, 0, v_snd_273_);
v___x_278_ = v_reuseFailAlloc_303_;
goto v_reusejp_277_;
}
v_reusejp_277_:
{
lean_object* v___x_279_; 
lean_inc_ref(v_right_274_);
v___x_279_ = lp_vampireReplay_Vampire_Reconstruct_elimFunction(v_right_274_, v___x_276_, v_handler_246_, v___x_278_, v_a_248_, v_a_249_, v_a_250_, v_a_251_, v_a_252_, v_a_253_);
if (lean_obj_tag(v___x_279_) == 0)
{
lean_object* v_a_280_; lean_object* v___x_282_; uint8_t v_isShared_283_; uint8_t v_isSharedCheck_302_; 
v_a_280_ = lean_ctor_get(v___x_279_, 0);
v_isSharedCheck_302_ = !lean_is_exclusive(v___x_279_);
if (v_isSharedCheck_302_ == 0)
{
v___x_282_ = v___x_279_;
v_isShared_283_ = v_isSharedCheck_302_;
goto v_resetjp_281_;
}
else
{
lean_inc(v_a_280_);
lean_dec(v___x_279_);
v___x_282_ = lean_box(0);
v_isShared_283_ = v_isSharedCheck_302_;
goto v_resetjp_281_;
}
v_resetjp_281_:
{
lean_object* v_fst_284_; lean_object* v___x_286_; uint8_t v_isShared_287_; uint8_t v_isSharedCheck_300_; 
v_fst_284_ = lean_ctor_get(v_a_280_, 0);
v_isSharedCheck_300_ = !lean_is_exclusive(v_a_280_);
if (v_isSharedCheck_300_ == 0)
{
lean_object* v_unused_301_; 
v_unused_301_ = lean_ctor_get(v_a_280_, 1);
lean_dec(v_unused_301_);
v___x_286_ = v_a_280_;
v_isShared_287_ = v_isSharedCheck_300_;
goto v_resetjp_285_;
}
else
{
lean_inc(v_fst_284_);
lean_dec(v_a_280_);
v___x_286_ = lean_box(0);
v_isShared_287_ = v_isSharedCheck_300_;
goto v_resetjp_285_;
}
v_resetjp_285_:
{
lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; uint8_t v___x_292_; lean_object* v___x_293_; lean_object* v___x_295_; 
v___x_288_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__4));
v___x_289_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__7, &lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__7_once, _init_lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__7);
v___x_290_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__8, &lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__8_once, _init_lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__8);
lean_inc(v_snd_273_);
v___x_291_ = l_Lean_mkApp6(v___x_289_, v_left_265_, v_right_274_, v_snd_273_, v___x_290_, v_fst_272_, v_fst_284_);
v___x_292_ = 0;
v___x_293_ = l_Lean_Expr_lam___override(v___x_288_, v_chain_244_, v___x_291_, v___x_292_);
if (v_isShared_287_ == 0)
{
lean_ctor_set(v___x_286_, 1, v_snd_273_);
lean_ctor_set(v___x_286_, 0, v___x_293_);
v___x_295_ = v___x_286_;
goto v_reusejp_294_;
}
else
{
lean_object* v_reuseFailAlloc_299_; 
v_reuseFailAlloc_299_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_299_, 0, v___x_293_);
lean_ctor_set(v_reuseFailAlloc_299_, 1, v_snd_273_);
v___x_295_ = v_reuseFailAlloc_299_;
goto v_reusejp_294_;
}
v_reusejp_294_:
{
lean_object* v___x_297_; 
if (v_isShared_283_ == 0)
{
lean_ctor_set(v___x_282_, 0, v___x_295_);
v___x_297_ = v___x_282_;
goto v_reusejp_296_;
}
else
{
lean_object* v_reuseFailAlloc_298_; 
v_reuseFailAlloc_298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_298_, 0, v___x_295_);
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
else
{
lean_dec_ref(v_right_274_);
lean_dec(v_snd_273_);
lean_dec(v_fst_272_);
lean_dec_ref(v_left_265_);
lean_dec_ref(v_chain_244_);
return v___x_279_;
}
}
}
}
else
{
lean_dec_ref(v___x_266_);
lean_dec_ref(v_left_265_);
lean_dec_ref(v_handler_246_);
lean_dec(v_offset_245_);
lean_dec_ref(v_chain_244_);
return v___x_267_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_elimFunction___boxed(lean_object* v_chain_305_, lean_object* v_offset_306_, lean_object* v_handler_307_, lean_object* v_motive_x3f_308_, lean_object* v_a_309_, lean_object* v_a_310_, lean_object* v_a_311_, lean_object* v_a_312_, lean_object* v_a_313_, lean_object* v_a_314_, lean_object* v_a_315_){
_start:
{
lean_object* v_res_316_; 
v_res_316_ = lp_vampireReplay_Vampire_Reconstruct_elimFunction(v_chain_305_, v_offset_306_, v_handler_307_, v_motive_x3f_308_, v_a_309_, v_a_310_, v_a_311_, v_a_312_, v_a_313_, v_a_314_);
lean_dec(v_a_314_);
lean_dec_ref(v_a_313_);
lean_dec(v_a_312_);
lean_dec_ref(v_a_311_);
lean_dec(v_a_310_);
lean_dec_ref(v_a_309_);
return v_res_316_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_elimParts(lean_object* v_chain_317_, lean_object* v_offset_318_, lean_object* v_handler_319_, lean_object* v_h_320_, lean_object* v_a_321_, lean_object* v_a_322_, lean_object* v_a_323_, lean_object* v_a_324_, lean_object* v_a_325_, lean_object* v_a_326_){
_start:
{
lean_object* v___x_328_; lean_object* v___x_329_; uint8_t v___x_330_; 
v___x_328_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__0));
v___x_329_ = lean_unsigned_to_nat(2u);
v___x_330_ = l_Lean_Expr_isAppOfArity(v_chain_317_, v___x_328_, v___x_329_);
if (v___x_330_ == 0)
{
lean_object* v___x_331_; 
lean_inc(v_a_326_);
lean_inc_ref(v_a_325_);
lean_inc(v_a_324_);
lean_inc_ref(v_a_323_);
lean_inc(v_a_322_);
lean_inc_ref(v_a_321_);
v___x_331_ = lean_apply_9(v_handler_319_, v_offset_318_, v_h_320_, v_a_321_, v_a_322_, v_a_323_, v_a_324_, v_a_325_, v_a_326_, lean_box(0));
return v___x_331_;
}
else
{
lean_object* v___x_332_; lean_object* v_left_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_332_ = l_Lean_Expr_appFn_x21(v_chain_317_);
v_left_333_ = l_Lean_Expr_appArg_x21(v___x_332_);
lean_dec_ref(v___x_332_);
lean_inc_ref_n(v_left_333_, 2);
v___x_334_ = lp_vampireReplay_Vampire_Reconstruct_junctionParts(v___x_328_, v_left_333_);
v___x_335_ = lean_box(0);
lean_inc_ref(v_handler_319_);
lean_inc(v_offset_318_);
v___x_336_ = lp_vampireReplay_Vampire_Reconstruct_elimFunction(v_left_333_, v_offset_318_, v_handler_319_, v___x_335_, v_a_321_, v_a_322_, v_a_323_, v_a_324_, v_a_325_, v_a_326_);
if (lean_obj_tag(v___x_336_) == 0)
{
lean_object* v_a_337_; lean_object* v_fst_338_; lean_object* v_snd_339_; lean_object* v_right_340_; lean_object* v_n_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; 
v_a_337_ = lean_ctor_get(v___x_336_, 0);
lean_inc(v_a_337_);
lean_dec_ref_known(v___x_336_, 1);
v_fst_338_ = lean_ctor_get(v_a_337_, 0);
lean_inc(v_fst_338_);
v_snd_339_ = lean_ctor_get(v_a_337_, 1);
lean_inc_n(v_snd_339_, 2);
lean_dec(v_a_337_);
v_right_340_ = l_Lean_Expr_appArg_x21(v_chain_317_);
v_n_341_ = lean_array_get_size(v___x_334_);
lean_dec_ref(v___x_334_);
v___x_342_ = lean_nat_add(v_offset_318_, v_n_341_);
lean_dec(v_offset_318_);
v___x_343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_343_, 0, v_snd_339_);
lean_inc_ref(v_right_340_);
v___x_344_ = lp_vampireReplay_Vampire_Reconstruct_elimFunction(v_right_340_, v___x_342_, v_handler_319_, v___x_343_, v_a_321_, v_a_322_, v_a_323_, v_a_324_, v_a_325_, v_a_326_);
if (lean_obj_tag(v___x_344_) == 0)
{
lean_object* v_a_345_; lean_object* v___x_347_; uint8_t v_isShared_348_; uint8_t v_isSharedCheck_355_; 
v_a_345_ = lean_ctor_get(v___x_344_, 0);
v_isSharedCheck_355_ = !lean_is_exclusive(v___x_344_);
if (v_isSharedCheck_355_ == 0)
{
v___x_347_ = v___x_344_;
v_isShared_348_ = v_isSharedCheck_355_;
goto v_resetjp_346_;
}
else
{
lean_inc(v_a_345_);
lean_dec(v___x_344_);
v___x_347_ = lean_box(0);
v_isShared_348_ = v_isSharedCheck_355_;
goto v_resetjp_346_;
}
v_resetjp_346_:
{
lean_object* v_fst_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_353_; 
v_fst_349_ = lean_ctor_get(v_a_345_, 0);
lean_inc(v_fst_349_);
lean_dec(v_a_345_);
v___x_350_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__7, &lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__7_once, _init_lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__7);
v___x_351_ = l_Lean_mkApp6(v___x_350_, v_left_333_, v_right_340_, v_snd_339_, v_h_320_, v_fst_338_, v_fst_349_);
if (v_isShared_348_ == 0)
{
lean_ctor_set(v___x_347_, 0, v___x_351_);
v___x_353_ = v___x_347_;
goto v_reusejp_352_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v___x_351_);
v___x_353_ = v_reuseFailAlloc_354_;
goto v_reusejp_352_;
}
v_reusejp_352_:
{
return v___x_353_;
}
}
}
else
{
lean_object* v_a_356_; lean_object* v___x_358_; uint8_t v_isShared_359_; uint8_t v_isSharedCheck_363_; 
lean_dec_ref(v_right_340_);
lean_dec(v_snd_339_);
lean_dec(v_fst_338_);
lean_dec_ref(v_left_333_);
lean_dec_ref(v_h_320_);
v_a_356_ = lean_ctor_get(v___x_344_, 0);
v_isSharedCheck_363_ = !lean_is_exclusive(v___x_344_);
if (v_isSharedCheck_363_ == 0)
{
v___x_358_ = v___x_344_;
v_isShared_359_ = v_isSharedCheck_363_;
goto v_resetjp_357_;
}
else
{
lean_inc(v_a_356_);
lean_dec(v___x_344_);
v___x_358_ = lean_box(0);
v_isShared_359_ = v_isSharedCheck_363_;
goto v_resetjp_357_;
}
v_resetjp_357_:
{
lean_object* v___x_361_; 
if (v_isShared_359_ == 0)
{
v___x_361_ = v___x_358_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v_a_356_);
v___x_361_ = v_reuseFailAlloc_362_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
return v___x_361_;
}
}
}
}
else
{
lean_object* v_a_364_; lean_object* v___x_366_; uint8_t v_isShared_367_; uint8_t v_isSharedCheck_371_; 
lean_dec_ref(v___x_334_);
lean_dec_ref(v_left_333_);
lean_dec_ref(v_h_320_);
lean_dec_ref(v_handler_319_);
lean_dec(v_offset_318_);
v_a_364_ = lean_ctor_get(v___x_336_, 0);
v_isSharedCheck_371_ = !lean_is_exclusive(v___x_336_);
if (v_isSharedCheck_371_ == 0)
{
v___x_366_ = v___x_336_;
v_isShared_367_ = v_isSharedCheck_371_;
goto v_resetjp_365_;
}
else
{
lean_inc(v_a_364_);
lean_dec(v___x_336_);
v___x_366_ = lean_box(0);
v_isShared_367_ = v_isSharedCheck_371_;
goto v_resetjp_365_;
}
v_resetjp_365_:
{
lean_object* v___x_369_; 
if (v_isShared_367_ == 0)
{
v___x_369_ = v___x_366_;
goto v_reusejp_368_;
}
else
{
lean_object* v_reuseFailAlloc_370_; 
v_reuseFailAlloc_370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_370_, 0, v_a_364_);
v___x_369_ = v_reuseFailAlloc_370_;
goto v_reusejp_368_;
}
v_reusejp_368_:
{
return v___x_369_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_elimParts___boxed(lean_object* v_chain_372_, lean_object* v_offset_373_, lean_object* v_handler_374_, lean_object* v_h_375_, lean_object* v_a_376_, lean_object* v_a_377_, lean_object* v_a_378_, lean_object* v_a_379_, lean_object* v_a_380_, lean_object* v_a_381_, lean_object* v_a_382_){
_start:
{
lean_object* v_res_383_; 
v_res_383_ = lp_vampireReplay_Vampire_Reconstruct_elimParts(v_chain_372_, v_offset_373_, v_handler_374_, v_h_375_, v_a_376_, v_a_377_, v_a_378_, v_a_379_, v_a_380_, v_a_381_);
lean_dec(v_a_381_);
lean_dec_ref(v_a_380_);
lean_dec(v_a_379_);
lean_dec_ref(v_a_378_);
lean_dec(v_a_377_);
lean_dec_ref(v_a_376_);
lean_dec_ref(v_chain_372_);
return v_res_383_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_suffixJunctions_spec__0___redArg(lean_object* v_n_384_, lean_object* v_fn_385_, lean_object* v_parts_386_, lean_object* v_range_387_, lean_object* v_b_388_, lean_object* v_i_389_){
_start:
{
lean_object* v_stop_390_; lean_object* v_step_391_; lean_object* v___y_393_; uint8_t v___x_397_; 
v_stop_390_ = lean_ctor_get(v_range_387_, 1);
v_step_391_ = lean_ctor_get(v_range_387_, 2);
v___x_397_ = lean_nat_dec_lt(v_i_389_, v_stop_390_);
if (v___x_397_ == 0)
{
lean_dec(v_i_389_);
lean_dec(v_fn_385_);
return v_b_388_;
}
else
{
lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; uint8_t v___x_403_; 
v___x_398_ = lean_unsigned_to_nat(1u);
v___x_399_ = l_Lean_instInhabitedExpr;
v___x_400_ = lean_nat_sub(v_n_384_, v___x_398_);
v___x_401_ = lean_nat_sub(v___x_400_, v_i_389_);
lean_dec(v___x_400_);
v___x_402_ = lean_nat_add(v___x_401_, v___x_398_);
v___x_403_ = lean_nat_dec_eq(v___x_402_, v_n_384_);
lean_dec(v___x_402_);
if (v___x_403_ == 0)
{
lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; 
v___x_404_ = lean_box(0);
v___x_405_ = lean_array_get_size(v_b_388_);
v___x_406_ = lean_nat_sub(v___x_405_, v___x_398_);
v___x_407_ = lean_array_get_borrowed(v___x_399_, v_b_388_, v___x_406_);
lean_dec(v___x_406_);
lean_inc(v_fn_385_);
v___x_408_ = l_Lean_Expr_const___override(v_fn_385_, v___x_404_);
v___x_409_ = lean_array_get_borrowed(v___x_399_, v_parts_386_, v___x_401_);
lean_dec(v___x_401_);
lean_inc(v___x_407_);
lean_inc(v___x_409_);
v___x_410_ = l_Lean_mkAppB(v___x_408_, v___x_409_, v___x_407_);
v___y_393_ = v___x_410_;
goto v___jp_392_;
}
else
{
lean_object* v___x_411_; 
v___x_411_ = lean_array_get_borrowed(v___x_399_, v_parts_386_, v___x_401_);
lean_dec(v___x_401_);
lean_inc(v___x_411_);
v___y_393_ = v___x_411_;
goto v___jp_392_;
}
}
v___jp_392_:
{
lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_394_ = lean_array_push(v_b_388_, v___y_393_);
v___x_395_ = lean_nat_add(v_i_389_, v_step_391_);
lean_dec(v_i_389_);
v_b_388_ = v___x_394_;
v_i_389_ = v___x_395_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_suffixJunctions_spec__0___redArg___boxed(lean_object* v_n_412_, lean_object* v_fn_413_, lean_object* v_parts_414_, lean_object* v_range_415_, lean_object* v_b_416_, lean_object* v_i_417_){
_start:
{
lean_object* v_res_418_; 
v_res_418_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_suffixJunctions_spec__0___redArg(v_n_412_, v_fn_413_, v_parts_414_, v_range_415_, v_b_416_, v_i_417_);
lean_dec_ref(v_range_415_);
lean_dec_ref(v_parts_414_);
lean_dec(v_n_412_);
return v_res_418_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_suffixJunctions(lean_object* v_fn_419_, lean_object* v_unit_420_, lean_object* v_parts_421_){
_start:
{
lean_object* v_n_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v_rev_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; 
v_n_422_ = lean_array_get_size(v_parts_421_);
v___x_423_ = lean_box(0);
v___x_424_ = l_Lean_Expr_const___override(v_unit_420_, v___x_423_);
v___x_425_ = lean_unsigned_to_nat(1u);
v___x_426_ = lean_mk_empty_array_with_capacity(v___x_425_);
v_rev_427_ = lean_array_push(v___x_426_, v___x_424_);
v___x_428_ = lean_unsigned_to_nat(0u);
v___x_429_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_429_, 0, v___x_428_);
lean_ctor_set(v___x_429_, 1, v_n_422_);
lean_ctor_set(v___x_429_, 2, v___x_425_);
v___x_430_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_suffixJunctions_spec__0___redArg(v_n_422_, v_fn_419_, v_parts_421_, v___x_429_, v_rev_427_, v___x_428_);
lean_dec_ref_known(v___x_429_, 3);
v___x_431_ = l_Array_reverse___redArg(v___x_430_);
return v___x_431_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_suffixJunctions___boxed(lean_object* v_fn_432_, lean_object* v_unit_433_, lean_object* v_parts_434_){
_start:
{
lean_object* v_res_435_; 
v_res_435_ = lp_vampireReplay_Vampire_Reconstruct_suffixJunctions(v_fn_432_, v_unit_433_, v_parts_434_);
lean_dec_ref(v_parts_434_);
return v_res_435_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_suffixJunctions_spec__0(lean_object* v_n_436_, lean_object* v_fn_437_, lean_object* v_parts_438_, lean_object* v_range_439_, lean_object* v_b_440_, lean_object* v_i_441_, lean_object* v_hs_442_, lean_object* v_hl_443_){
_start:
{
lean_object* v___x_444_; 
v___x_444_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_suffixJunctions_spec__0___redArg(v_n_436_, v_fn_437_, v_parts_438_, v_range_439_, v_b_440_, v_i_441_);
return v___x_444_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_suffixJunctions_spec__0___boxed(lean_object* v_n_445_, lean_object* v_fn_446_, lean_object* v_parts_447_, lean_object* v_range_448_, lean_object* v_b_449_, lean_object* v_i_450_, lean_object* v_hs_451_, lean_object* v_hl_452_){
_start:
{
lean_object* v_res_453_; 
v_res_453_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_suffixJunctions_spec__0(v_n_445_, v_fn_446_, v_parts_447_, v_range_448_, v_b_449_, v_i_450_, v_hs_451_, v_hl_452_);
lean_dec_ref(v_range_448_);
lean_dec_ref(v_parts_447_);
lean_dec(v_n_445_);
return v_res_453_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_injectGiven_spec__0___redArg(lean_object* v___y_454_, lean_object* v_parts_455_, lean_object* v_suffix_456_, lean_object* v_range_457_, lean_object* v_b_458_, lean_object* v_i_459_){
_start:
{
lean_object* v_stop_461_; lean_object* v_step_462_; uint8_t v___x_463_; 
v_stop_461_ = lean_ctor_get(v_range_457_, 1);
v_step_462_ = lean_ctor_get(v_range_457_, 2);
v___x_463_ = lean_nat_dec_lt(v_i_459_, v_stop_461_);
if (v___x_463_ == 0)
{
lean_object* v___x_464_; 
lean_dec(v_i_459_);
v___x_464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_464_, 0, v_b_458_);
return v___x_464_;
}
else
{
lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; 
v___x_465_ = lean_unsigned_to_nat(1u);
v___x_466_ = lean_nat_sub(v___y_454_, v___x_465_);
v___x_467_ = lean_nat_sub(v___x_466_, v_i_459_);
lean_dec(v___x_466_);
v___x_468_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__3, &lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__3);
v___x_469_ = l_Lean_instInhabitedExpr;
v___x_470_ = lean_array_get_borrowed(v___x_469_, v_parts_455_, v___x_467_);
v___x_471_ = lean_nat_add(v___x_467_, v___x_465_);
lean_dec(v___x_467_);
v___x_472_ = lean_array_get_borrowed(v___x_469_, v_suffix_456_, v___x_471_);
lean_dec(v___x_471_);
lean_inc(v___x_472_);
lean_inc(v___x_470_);
v___x_473_ = l_Lean_mkApp3(v___x_468_, v___x_470_, v___x_472_, v_b_458_);
v___x_474_ = lean_nat_add(v_i_459_, v_step_462_);
lean_dec(v_i_459_);
v_b_458_ = v___x_473_;
v_i_459_ = v___x_474_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_injectGiven_spec__0___redArg___boxed(lean_object* v___y_476_, lean_object* v_parts_477_, lean_object* v_suffix_478_, lean_object* v_range_479_, lean_object* v_b_480_, lean_object* v_i_481_, lean_object* v___y_482_){
_start:
{
lean_object* v_res_483_; 
v_res_483_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_injectGiven_spec__0___redArg(v___y_476_, v_parts_477_, v_suffix_478_, v_range_479_, v_b_480_, v_i_481_);
lean_dec_ref(v_range_479_);
lean_dec_ref(v_suffix_478_);
lean_dec_ref(v_parts_477_);
lean_dec(v___y_476_);
return v_res_483_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_injectGiven(lean_object* v_parts_487_, lean_object* v_i_488_, lean_object* v_h_489_, lean_object* v_a_490_, lean_object* v_a_491_, lean_object* v_a_492_, lean_object* v_a_493_, lean_object* v_a_494_, lean_object* v_a_495_){
_start:
{
lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___y_500_; lean_object* v___y_501_; lean_object* v___y_502_; lean_object* v___y_507_; uint8_t v___x_518_; 
v___x_497_ = lean_array_get_size(v_parts_487_);
v___x_498_ = lean_unsigned_to_nat(1u);
v___x_518_ = lean_nat_dec_le(v___x_497_, v___x_498_);
if (v___x_518_ == 0)
{
lean_object* v___x_519_; uint8_t v___x_520_; 
v___x_519_ = lean_nat_sub(v___x_497_, v___x_498_);
v___x_520_ = lean_nat_dec_le(v_i_488_, v___x_519_);
if (v___x_520_ == 0)
{
lean_dec(v_i_488_);
v___y_507_ = v___x_519_;
goto v___jp_506_;
}
else
{
lean_dec(v___x_519_);
v___y_507_ = v_i_488_;
goto v___jp_506_;
}
}
else
{
lean_object* v___x_521_; 
lean_dec(v_i_488_);
v___x_521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_521_, 0, v_h_489_);
return v___x_521_;
}
v___jp_499_:
{
lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; 
v___x_503_ = lean_unsigned_to_nat(0u);
lean_inc(v___y_501_);
v___x_504_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_504_, 0, v___x_503_);
lean_ctor_set(v___x_504_, 1, v___y_501_);
lean_ctor_set(v___x_504_, 2, v___x_498_);
v___x_505_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_injectGiven_spec__0___redArg(v___y_501_, v_parts_487_, v___y_500_, v___x_504_, v___y_502_, v___x_503_);
lean_dec_ref_known(v___x_504_, 3);
lean_dec_ref(v___y_500_);
lean_dec(v___y_501_);
return v___x_505_;
}
v___jp_506_:
{
lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v_suffix_510_; lean_object* v___x_511_; uint8_t v___x_512_; 
v___x_508_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__0));
v___x_509_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_injectGiven___closed__1));
v_suffix_510_ = lp_vampireReplay_Vampire_Reconstruct_suffixJunctions(v___x_508_, v___x_509_, v_parts_487_);
v___x_511_ = lean_nat_add(v___y_507_, v___x_498_);
v___x_512_ = lean_nat_dec_eq(v___x_511_, v___x_497_);
if (v___x_512_ == 0)
{
lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_513_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__6, &lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__6_once, _init_lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg___closed__6);
v___x_514_ = l_Lean_instInhabitedExpr;
v___x_515_ = lean_array_get_borrowed(v___x_514_, v_parts_487_, v___y_507_);
v___x_516_ = lean_array_get(v___x_514_, v_suffix_510_, v___x_511_);
lean_dec(v___x_511_);
lean_inc(v___x_515_);
v___x_517_ = l_Lean_mkApp3(v___x_513_, v___x_515_, v___x_516_, v_h_489_);
v___y_500_ = v_suffix_510_;
v___y_501_ = v___y_507_;
v___y_502_ = v___x_517_;
goto v___jp_499_;
}
else
{
lean_dec(v___x_511_);
v___y_500_ = v_suffix_510_;
v___y_501_ = v___y_507_;
v___y_502_ = v_h_489_;
goto v___jp_499_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_injectGiven___boxed(lean_object* v_parts_522_, lean_object* v_i_523_, lean_object* v_h_524_, lean_object* v_a_525_, lean_object* v_a_526_, lean_object* v_a_527_, lean_object* v_a_528_, lean_object* v_a_529_, lean_object* v_a_530_, lean_object* v_a_531_){
_start:
{
lean_object* v_res_532_; 
v_res_532_ = lp_vampireReplay_Vampire_Reconstruct_injectGiven(v_parts_522_, v_i_523_, v_h_524_, v_a_525_, v_a_526_, v_a_527_, v_a_528_, v_a_529_, v_a_530_);
lean_dec(v_a_530_);
lean_dec_ref(v_a_529_);
lean_dec(v_a_528_);
lean_dec_ref(v_a_527_);
lean_dec(v_a_526_);
lean_dec_ref(v_a_525_);
lean_dec_ref(v_parts_522_);
return v_res_532_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_injectGiven_spec__0(lean_object* v___y_533_, lean_object* v_parts_534_, lean_object* v_suffix_535_, lean_object* v_range_536_, lean_object* v_b_537_, lean_object* v_i_538_, lean_object* v_hs_539_, lean_object* v_hl_540_, lean_object* v___y_541_, lean_object* v___y_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_){
_start:
{
lean_object* v___x_548_; 
v___x_548_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_injectGiven_spec__0___redArg(v___y_533_, v_parts_534_, v_suffix_535_, v_range_536_, v_b_537_, v_i_538_);
return v___x_548_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_injectGiven_spec__0___boxed(lean_object* v___y_549_, lean_object* v_parts_550_, lean_object* v_suffix_551_, lean_object* v_range_552_, lean_object* v_b_553_, lean_object* v_i_554_, lean_object* v_hs_555_, lean_object* v_hl_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_){
_start:
{
lean_object* v_res_564_; 
v_res_564_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_injectGiven_spec__0(v___y_549_, v_parts_550_, v_suffix_551_, v_range_552_, v_b_553_, v_i_554_, v_hs_555_, v_hl_556_, v___y_557_, v___y_558_, v___y_559_, v___y_560_, v___y_561_, v___y_562_);
lean_dec(v___y_562_);
lean_dec_ref(v___y_561_);
lean_dec(v___y_560_);
lean_dec_ref(v___y_559_);
lean_dec(v___y_558_);
lean_dec_ref(v___y_557_);
lean_dec_ref(v_range_552_);
lean_dec_ref(v_suffix_551_);
lean_dec_ref(v_parts_550_);
lean_dec(v___y_549_);
return v_res_564_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Junction_0__Vampire_Reconstruct_elimGivenAt___lam__0(lean_object* v_offset_565_, lean_object* v_k_566_, lean_object* v_handler_567_, lean_object* v_motive_x3f_568_, lean_object* v_a_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_, lean_object* v___y_575_){
_start:
{
lean_object* v___x_577_; lean_object* v___x_578_; 
v___x_577_ = lean_nat_add(v_offset_565_, v_k_566_);
lean_inc(v___y_575_);
lean_inc_ref(v___y_574_);
lean_inc(v___y_573_);
lean_inc_ref(v___y_572_);
lean_inc(v___y_571_);
lean_inc_ref(v___y_570_);
lean_inc_ref(v_a_569_);
v___x_578_ = lean_apply_9(v_handler_567_, v___x_577_, v_a_569_, v___y_570_, v___y_571_, v___y_572_, v___y_573_, v___y_574_, v___y_575_, lean_box(0));
if (lean_obj_tag(v___x_578_) == 0)
{
lean_object* v_a_579_; lean_object* v_motive_581_; lean_object* v___y_582_; lean_object* v___y_583_; lean_object* v___y_584_; lean_object* v___y_585_; 
v_a_579_ = lean_ctor_get(v___x_578_, 0);
lean_inc(v_a_579_);
lean_dec_ref_known(v___x_578_, 1);
if (lean_obj_tag(v_motive_x3f_568_) == 0)
{
lean_object* v___x_610_; 
lean_inc(v___y_575_);
lean_inc_ref(v___y_574_);
lean_inc(v___y_573_);
lean_inc_ref(v___y_572_);
lean_inc(v_a_579_);
v___x_610_ = lean_infer_type(v_a_579_, v___y_572_, v___y_573_, v___y_574_, v___y_575_);
if (lean_obj_tag(v___x_610_) == 0)
{
lean_object* v_a_611_; 
v_a_611_ = lean_ctor_get(v___x_610_, 0);
lean_inc(v_a_611_);
lean_dec_ref_known(v___x_610_, 1);
v_motive_581_ = v_a_611_;
v___y_582_ = v___y_572_;
v___y_583_ = v___y_573_;
v___y_584_ = v___y_574_;
v___y_585_ = v___y_575_;
goto v___jp_580_;
}
else
{
lean_object* v_a_612_; lean_object* v___x_614_; uint8_t v_isShared_615_; uint8_t v_isSharedCheck_619_; 
lean_dec(v_a_579_);
lean_dec_ref(v_a_569_);
v_a_612_ = lean_ctor_get(v___x_610_, 0);
v_isSharedCheck_619_ = !lean_is_exclusive(v___x_610_);
if (v_isSharedCheck_619_ == 0)
{
v___x_614_ = v___x_610_;
v_isShared_615_ = v_isSharedCheck_619_;
goto v_resetjp_613_;
}
else
{
lean_inc(v_a_612_);
lean_dec(v___x_610_);
v___x_614_ = lean_box(0);
v_isShared_615_ = v_isSharedCheck_619_;
goto v_resetjp_613_;
}
v_resetjp_613_:
{
lean_object* v___x_617_; 
if (v_isShared_615_ == 0)
{
v___x_617_ = v___x_614_;
goto v_reusejp_616_;
}
else
{
lean_object* v_reuseFailAlloc_618_; 
v_reuseFailAlloc_618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_618_, 0, v_a_612_);
v___x_617_ = v_reuseFailAlloc_618_;
goto v_reusejp_616_;
}
v_reusejp_616_:
{
return v___x_617_;
}
}
}
}
else
{
lean_object* v_val_620_; 
v_val_620_ = lean_ctor_get(v_motive_x3f_568_, 0);
lean_inc(v_val_620_);
lean_dec_ref_known(v_motive_x3f_568_, 1);
v_motive_581_ = v_val_620_;
v___y_582_ = v___y_572_;
v___y_583_ = v___y_573_;
v___y_584_ = v___y_574_;
v___y_585_ = v___y_575_;
goto v___jp_580_;
}
v___jp_580_:
{
lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; uint8_t v___x_589_; uint8_t v___x_590_; uint8_t v___x_591_; lean_object* v___x_592_; 
v___x_586_ = lean_unsigned_to_nat(1u);
v___x_587_ = lean_mk_empty_array_with_capacity(v___x_586_);
v___x_588_ = lean_array_push(v___x_587_, v_a_569_);
v___x_589_ = 0;
v___x_590_ = 1;
v___x_591_ = 1;
v___x_592_ = l_Lean_Meta_mkLambdaFVars(v___x_588_, v_a_579_, v___x_589_, v___x_590_, v___x_589_, v___x_590_, v___x_591_, v___y_582_, v___y_583_, v___y_584_, v___y_585_);
lean_dec_ref(v___x_588_);
if (lean_obj_tag(v___x_592_) == 0)
{
lean_object* v_a_593_; lean_object* v___x_595_; uint8_t v_isShared_596_; uint8_t v_isSharedCheck_601_; 
v_a_593_ = lean_ctor_get(v___x_592_, 0);
v_isSharedCheck_601_ = !lean_is_exclusive(v___x_592_);
if (v_isSharedCheck_601_ == 0)
{
v___x_595_ = v___x_592_;
v_isShared_596_ = v_isSharedCheck_601_;
goto v_resetjp_594_;
}
else
{
lean_inc(v_a_593_);
lean_dec(v___x_592_);
v___x_595_ = lean_box(0);
v_isShared_596_ = v_isSharedCheck_601_;
goto v_resetjp_594_;
}
v_resetjp_594_:
{
lean_object* v___x_597_; lean_object* v___x_599_; 
v___x_597_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_597_, 0, v_a_593_);
lean_ctor_set(v___x_597_, 1, v_motive_581_);
if (v_isShared_596_ == 0)
{
lean_ctor_set(v___x_595_, 0, v___x_597_);
v___x_599_ = v___x_595_;
goto v_reusejp_598_;
}
else
{
lean_object* v_reuseFailAlloc_600_; 
v_reuseFailAlloc_600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_600_, 0, v___x_597_);
v___x_599_ = v_reuseFailAlloc_600_;
goto v_reusejp_598_;
}
v_reusejp_598_:
{
return v___x_599_;
}
}
}
else
{
lean_object* v_a_602_; lean_object* v___x_604_; uint8_t v_isShared_605_; uint8_t v_isSharedCheck_609_; 
lean_dec_ref(v_motive_581_);
v_a_602_ = lean_ctor_get(v___x_592_, 0);
v_isSharedCheck_609_ = !lean_is_exclusive(v___x_592_);
if (v_isSharedCheck_609_ == 0)
{
v___x_604_ = v___x_592_;
v_isShared_605_ = v_isSharedCheck_609_;
goto v_resetjp_603_;
}
else
{
lean_inc(v_a_602_);
lean_dec(v___x_592_);
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
}
else
{
lean_object* v_a_621_; lean_object* v___x_623_; uint8_t v_isShared_624_; uint8_t v_isSharedCheck_628_; 
lean_dec_ref(v_a_569_);
lean_dec(v_motive_x3f_568_);
v_a_621_ = lean_ctor_get(v___x_578_, 0);
v_isSharedCheck_628_ = !lean_is_exclusive(v___x_578_);
if (v_isSharedCheck_628_ == 0)
{
v___x_623_ = v___x_578_;
v_isShared_624_ = v_isSharedCheck_628_;
goto v_resetjp_622_;
}
else
{
lean_inc(v_a_621_);
lean_dec(v___x_578_);
v___x_623_ = lean_box(0);
v_isShared_624_ = v_isSharedCheck_628_;
goto v_resetjp_622_;
}
v_resetjp_622_:
{
lean_object* v___x_626_; 
if (v_isShared_624_ == 0)
{
v___x_626_ = v___x_623_;
goto v_reusejp_625_;
}
else
{
lean_object* v_reuseFailAlloc_627_; 
v_reuseFailAlloc_627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_627_, 0, v_a_621_);
v___x_626_ = v_reuseFailAlloc_627_;
goto v_reusejp_625_;
}
v_reusejp_625_:
{
return v___x_626_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Junction_0__Vampire_Reconstruct_elimGivenAt___lam__0___boxed(lean_object* v_offset_629_, lean_object* v_k_630_, lean_object* v_handler_631_, lean_object* v_motive_x3f_632_, lean_object* v_a_633_, lean_object* v___y_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_, lean_object* v___y_638_, lean_object* v___y_639_, lean_object* v___y_640_){
_start:
{
lean_object* v_res_641_; 
v_res_641_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Junction_0__Vampire_Reconstruct_elimGivenAt___lam__0(v_offset_629_, v_k_630_, v_handler_631_, v_motive_x3f_632_, v_a_633_, v___y_634_, v___y_635_, v___y_636_, v___y_637_, v___y_638_, v___y_639_);
lean_dec(v___y_639_);
lean_dec_ref(v___y_638_);
lean_dec(v___y_637_);
lean_dec_ref(v___y_636_);
lean_dec(v___y_635_);
lean_dec_ref(v___y_634_);
lean_dec(v_k_630_);
lean_dec(v_offset_629_);
return v_res_641_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Junction_0__Vampire_Reconstruct_elimGivenAt(lean_object* v_parts_642_, lean_object* v_k_643_, lean_object* v_offset_644_, lean_object* v_handler_645_, lean_object* v_motive_x3f_646_, lean_object* v_a_647_, lean_object* v_a_648_, lean_object* v_a_649_, lean_object* v_a_650_, lean_object* v_a_651_, lean_object* v_a_652_){
_start:
{
lean_object* v___f_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; 
lean_inc(v_k_643_);
v___f_654_ = lean_alloc_closure((void*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Junction_0__Vampire_Reconstruct_elimGivenAt___lam__0___boxed), 12, 4);
lean_closure_set(v___f_654_, 0, v_offset_644_);
lean_closure_set(v___f_654_, 1, v_k_643_);
lean_closure_set(v___f_654_, 2, v_handler_645_);
lean_closure_set(v___f_654_, 3, v_motive_x3f_646_);
v___x_655_ = l_Lean_instInhabitedExpr;
v___x_656_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__2));
v___x_657_ = lean_array_get_borrowed(v___x_655_, v_parts_642_, v_k_643_);
lean_dec(v_k_643_);
lean_inc(v___x_657_);
v___x_658_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_656_, v___x_657_, v___f_654_, v_a_647_, v_a_648_, v_a_649_, v_a_650_, v_a_651_, v_a_652_);
return v___x_658_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Junction_0__Vampire_Reconstruct_elimGivenAt___boxed(lean_object* v_parts_659_, lean_object* v_k_660_, lean_object* v_offset_661_, lean_object* v_handler_662_, lean_object* v_motive_x3f_663_, lean_object* v_a_664_, lean_object* v_a_665_, lean_object* v_a_666_, lean_object* v_a_667_, lean_object* v_a_668_, lean_object* v_a_669_, lean_object* v_a_670_){
_start:
{
lean_object* v_res_671_; 
v_res_671_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Junction_0__Vampire_Reconstruct_elimGivenAt(v_parts_659_, v_k_660_, v_offset_661_, v_handler_662_, v_motive_x3f_663_, v_a_664_, v_a_665_, v_a_666_, v_a_667_, v_a_668_, v_a_669_);
lean_dec(v_a_669_);
lean_dec_ref(v_a_668_);
lean_dec(v_a_667_);
lean_dec_ref(v_a_666_);
lean_dec(v_a_665_);
lean_dec_ref(v_a_664_);
lean_dec_ref(v_parts_659_);
return v_res_671_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Junction_0__Vampire_Reconstruct_elimGivenFrom(lean_object* v_parts_672_, lean_object* v_suffix_673_, lean_object* v_k_674_, lean_object* v_offset_675_, lean_object* v_handler_676_, lean_object* v_motive_x3f_677_, lean_object* v_a_678_, lean_object* v_a_679_, lean_object* v_a_680_, lean_object* v_a_681_, lean_object* v_a_682_, lean_object* v_a_683_){
_start:
{
lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; uint8_t v___x_688_; 
v___x_685_ = lean_array_get_size(v_parts_672_);
v___x_686_ = lean_unsigned_to_nat(1u);
v___x_687_ = lean_nat_add(v_k_674_, v___x_686_);
v___x_688_ = lean_nat_dec_le(v___x_685_, v___x_687_);
if (v___x_688_ == 0)
{
lean_object* v___x_689_; 
lean_inc_ref(v_handler_676_);
lean_inc(v_offset_675_);
lean_inc(v_k_674_);
v___x_689_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Junction_0__Vampire_Reconstruct_elimGivenAt(v_parts_672_, v_k_674_, v_offset_675_, v_handler_676_, v_motive_x3f_677_, v_a_678_, v_a_679_, v_a_680_, v_a_681_, v_a_682_, v_a_683_);
if (lean_obj_tag(v___x_689_) == 0)
{
lean_object* v_a_690_; lean_object* v___x_692_; uint8_t v_isShared_693_; uint8_t v_isSharedCheck_727_; 
v_a_690_ = lean_ctor_get(v___x_689_, 0);
v_isSharedCheck_727_ = !lean_is_exclusive(v___x_689_);
if (v_isSharedCheck_727_ == 0)
{
v___x_692_ = v___x_689_;
v_isShared_693_ = v_isSharedCheck_727_;
goto v_resetjp_691_;
}
else
{
lean_inc(v_a_690_);
lean_dec(v___x_689_);
v___x_692_ = lean_box(0);
v_isShared_693_ = v_isSharedCheck_727_;
goto v_resetjp_691_;
}
v_resetjp_691_:
{
lean_object* v_fst_694_; lean_object* v_snd_695_; lean_object* v___x_697_; 
v_fst_694_ = lean_ctor_get(v_a_690_, 0);
lean_inc(v_fst_694_);
v_snd_695_ = lean_ctor_get(v_a_690_, 1);
lean_inc_n(v_snd_695_, 2);
lean_dec(v_a_690_);
if (v_isShared_693_ == 0)
{
lean_ctor_set_tag(v___x_692_, 1);
lean_ctor_set(v___x_692_, 0, v_snd_695_);
v___x_697_ = v___x_692_;
goto v_reusejp_696_;
}
else
{
lean_object* v_reuseFailAlloc_726_; 
v_reuseFailAlloc_726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_726_, 0, v_snd_695_);
v___x_697_ = v_reuseFailAlloc_726_;
goto v_reusejp_696_;
}
v_reusejp_696_:
{
lean_object* v___x_698_; 
lean_inc(v___x_687_);
v___x_698_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Junction_0__Vampire_Reconstruct_elimGivenFrom(v_parts_672_, v_suffix_673_, v___x_687_, v_offset_675_, v_handler_676_, v___x_697_, v_a_678_, v_a_679_, v_a_680_, v_a_681_, v_a_682_, v_a_683_);
if (lean_obj_tag(v___x_698_) == 0)
{
lean_object* v_a_699_; lean_object* v___x_701_; uint8_t v_isShared_702_; uint8_t v_isSharedCheck_725_; 
v_a_699_ = lean_ctor_get(v___x_698_, 0);
v_isSharedCheck_725_ = !lean_is_exclusive(v___x_698_);
if (v_isSharedCheck_725_ == 0)
{
v___x_701_ = v___x_698_;
v_isShared_702_ = v_isSharedCheck_725_;
goto v_resetjp_700_;
}
else
{
lean_inc(v_a_699_);
lean_dec(v___x_698_);
v___x_701_ = lean_box(0);
v_isShared_702_ = v_isSharedCheck_725_;
goto v_resetjp_700_;
}
v_resetjp_700_:
{
lean_object* v_fst_703_; lean_object* v___x_705_; uint8_t v_isShared_706_; uint8_t v_isSharedCheck_723_; 
v_fst_703_ = lean_ctor_get(v_a_699_, 0);
v_isSharedCheck_723_ = !lean_is_exclusive(v_a_699_);
if (v_isSharedCheck_723_ == 0)
{
lean_object* v_unused_724_; 
v_unused_724_ = lean_ctor_get(v_a_699_, 1);
lean_dec(v_unused_724_);
v___x_705_ = v_a_699_;
v_isShared_706_ = v_isSharedCheck_723_;
goto v_resetjp_704_;
}
else
{
lean_inc(v_fst_703_);
lean_dec(v_a_699_);
v___x_705_ = lean_box(0);
v_isShared_706_ = v_isSharedCheck_723_;
goto v_resetjp_704_;
}
v_resetjp_704_:
{
lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; uint8_t v___x_715_; lean_object* v___x_716_; lean_object* v___x_718_; 
v___x_707_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__4));
v___x_708_ = l_Lean_instInhabitedExpr;
v___x_709_ = lean_array_get_borrowed(v___x_708_, v_suffix_673_, v_k_674_);
v___x_710_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__7, &lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__7_once, _init_lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__7);
v___x_711_ = lean_array_get_borrowed(v___x_708_, v_parts_672_, v_k_674_);
lean_dec(v_k_674_);
v___x_712_ = lean_array_get_borrowed(v___x_708_, v_suffix_673_, v___x_687_);
lean_dec(v___x_687_);
v___x_713_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__8, &lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__8_once, _init_lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__8);
lean_inc(v_snd_695_);
lean_inc(v___x_712_);
lean_inc(v___x_711_);
v___x_714_ = l_Lean_mkApp6(v___x_710_, v___x_711_, v___x_712_, v_snd_695_, v___x_713_, v_fst_694_, v_fst_703_);
v___x_715_ = 0;
lean_inc(v___x_709_);
v___x_716_ = l_Lean_Expr_lam___override(v___x_707_, v___x_709_, v___x_714_, v___x_715_);
if (v_isShared_706_ == 0)
{
lean_ctor_set(v___x_705_, 1, v_snd_695_);
lean_ctor_set(v___x_705_, 0, v___x_716_);
v___x_718_ = v___x_705_;
goto v_reusejp_717_;
}
else
{
lean_object* v_reuseFailAlloc_722_; 
v_reuseFailAlloc_722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_722_, 0, v___x_716_);
lean_ctor_set(v_reuseFailAlloc_722_, 1, v_snd_695_);
v___x_718_ = v_reuseFailAlloc_722_;
goto v_reusejp_717_;
}
v_reusejp_717_:
{
lean_object* v___x_720_; 
if (v_isShared_702_ == 0)
{
lean_ctor_set(v___x_701_, 0, v___x_718_);
v___x_720_ = v___x_701_;
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
}
}
}
else
{
lean_dec(v_snd_695_);
lean_dec(v_fst_694_);
lean_dec(v___x_687_);
lean_dec(v_k_674_);
return v___x_698_;
}
}
}
}
else
{
lean_dec(v___x_687_);
lean_dec_ref(v_handler_676_);
lean_dec(v_offset_675_);
lean_dec(v_k_674_);
return v___x_689_;
}
}
else
{
lean_object* v___x_728_; 
lean_dec(v___x_687_);
v___x_728_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Junction_0__Vampire_Reconstruct_elimGivenAt(v_parts_672_, v_k_674_, v_offset_675_, v_handler_676_, v_motive_x3f_677_, v_a_678_, v_a_679_, v_a_680_, v_a_681_, v_a_682_, v_a_683_);
return v___x_728_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Junction_0__Vampire_Reconstruct_elimGivenFrom___boxed(lean_object* v_parts_729_, lean_object* v_suffix_730_, lean_object* v_k_731_, lean_object* v_offset_732_, lean_object* v_handler_733_, lean_object* v_motive_x3f_734_, lean_object* v_a_735_, lean_object* v_a_736_, lean_object* v_a_737_, lean_object* v_a_738_, lean_object* v_a_739_, lean_object* v_a_740_, lean_object* v_a_741_){
_start:
{
lean_object* v_res_742_; 
v_res_742_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Junction_0__Vampire_Reconstruct_elimGivenFrom(v_parts_729_, v_suffix_730_, v_k_731_, v_offset_732_, v_handler_733_, v_motive_x3f_734_, v_a_735_, v_a_736_, v_a_737_, v_a_738_, v_a_739_, v_a_740_);
lean_dec(v_a_740_);
lean_dec_ref(v_a_739_);
lean_dec(v_a_738_);
lean_dec_ref(v_a_737_);
lean_dec(v_a_736_);
lean_dec_ref(v_a_735_);
lean_dec_ref(v_suffix_730_);
lean_dec_ref(v_parts_729_);
return v_res_742_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_elimGivenFunction___closed__1(void){
_start:
{
lean_object* v___x_744_; lean_object* v___x_745_; 
v___x_744_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_elimGivenFunction___closed__0));
v___x_745_ = l_Lean_stringToMessageData(v___x_744_);
return v___x_745_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_elimGivenFunction(lean_object* v_parts_746_, lean_object* v_offset_747_, lean_object* v_handler_748_, lean_object* v_motive_x3f_749_, lean_object* v_a_750_, lean_object* v_a_751_, lean_object* v_a_752_, lean_object* v_a_753_, lean_object* v_a_754_, lean_object* v_a_755_){
_start:
{
lean_object* v___y_758_; lean_object* v___y_759_; lean_object* v___y_760_; lean_object* v___y_761_; lean_object* v___y_762_; lean_object* v___y_763_; lean_object* v___x_769_; lean_object* v___x_770_; uint8_t v___x_771_; 
v___x_769_ = lean_array_get_size(v_parts_746_);
v___x_770_ = lean_unsigned_to_nat(0u);
v___x_771_ = lean_nat_dec_eq(v___x_769_, v___x_770_);
if (v___x_771_ == 0)
{
v___y_758_ = v_a_750_;
v___y_759_ = v_a_751_;
v___y_760_ = v_a_752_;
v___y_761_ = v_a_753_;
v___y_762_ = v_a_754_;
v___y_763_ = v_a_755_;
goto v___jp_757_;
}
else
{
lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v_a_774_; lean_object* v___x_776_; uint8_t v_isShared_777_; uint8_t v_isSharedCheck_781_; 
lean_dec(v_motive_x3f_749_);
lean_dec_ref(v_handler_748_);
lean_dec(v_offset_747_);
v___x_772_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_elimGivenFunction___closed__1, &lp_vampireReplay_Vampire_Reconstruct_elimGivenFunction___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_elimGivenFunction___closed__1);
v___x_773_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_772_, v_a_752_, v_a_753_, v_a_754_, v_a_755_);
v_a_774_ = lean_ctor_get(v___x_773_, 0);
v_isSharedCheck_781_ = !lean_is_exclusive(v___x_773_);
if (v_isSharedCheck_781_ == 0)
{
v___x_776_ = v___x_773_;
v_isShared_777_ = v_isSharedCheck_781_;
goto v_resetjp_775_;
}
else
{
lean_inc(v_a_774_);
lean_dec(v___x_773_);
v___x_776_ = lean_box(0);
v_isShared_777_ = v_isSharedCheck_781_;
goto v_resetjp_775_;
}
v_resetjp_775_:
{
lean_object* v___x_779_; 
if (v_isShared_777_ == 0)
{
v___x_779_ = v___x_776_;
goto v_reusejp_778_;
}
else
{
lean_object* v_reuseFailAlloc_780_; 
v_reuseFailAlloc_780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_780_, 0, v_a_774_);
v___x_779_ = v_reuseFailAlloc_780_;
goto v_reusejp_778_;
}
v_reusejp_778_:
{
return v___x_779_;
}
}
}
v___jp_757_:
{
lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; 
v___x_764_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__0));
v___x_765_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_injectGiven___closed__1));
v___x_766_ = lp_vampireReplay_Vampire_Reconstruct_suffixJunctions(v___x_764_, v___x_765_, v_parts_746_);
v___x_767_ = lean_unsigned_to_nat(0u);
v___x_768_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Junction_0__Vampire_Reconstruct_elimGivenFrom(v_parts_746_, v___x_766_, v___x_767_, v_offset_747_, v_handler_748_, v_motive_x3f_749_, v___y_758_, v___y_759_, v___y_760_, v___y_761_, v___y_762_, v___y_763_);
lean_dec_ref(v___x_766_);
return v___x_768_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_elimGivenFunction___boxed(lean_object* v_parts_782_, lean_object* v_offset_783_, lean_object* v_handler_784_, lean_object* v_motive_x3f_785_, lean_object* v_a_786_, lean_object* v_a_787_, lean_object* v_a_788_, lean_object* v_a_789_, lean_object* v_a_790_, lean_object* v_a_791_, lean_object* v_a_792_){
_start:
{
lean_object* v_res_793_; 
v_res_793_ = lp_vampireReplay_Vampire_Reconstruct_elimGivenFunction(v_parts_782_, v_offset_783_, v_handler_784_, v_motive_x3f_785_, v_a_786_, v_a_787_, v_a_788_, v_a_789_, v_a_790_, v_a_791_);
lean_dec(v_a_791_);
lean_dec_ref(v_a_790_);
lean_dec(v_a_789_);
lean_dec_ref(v_a_788_);
lean_dec(v_a_787_);
lean_dec_ref(v_a_786_);
lean_dec_ref(v_parts_782_);
return v_res_793_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_elimGiven(lean_object* v_parts_794_, lean_object* v_handler_795_, lean_object* v_h_796_, lean_object* v_offset_797_, lean_object* v_motive_x3f_798_, lean_object* v_a_799_, lean_object* v_a_800_, lean_object* v_a_801_, lean_object* v_a_802_, lean_object* v_a_803_, lean_object* v_a_804_){
_start:
{
lean_object* v___x_806_; lean_object* v___x_807_; uint8_t v___x_808_; 
v___x_806_ = lean_array_get_size(v_parts_794_);
v___x_807_ = lean_unsigned_to_nat(1u);
v___x_808_ = lean_nat_dec_le(v___x_806_, v___x_807_);
if (v___x_808_ == 0)
{
lean_object* v___x_809_; lean_object* v___x_810_; 
v___x_809_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_handler_795_);
lean_inc(v_offset_797_);
v___x_810_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Junction_0__Vampire_Reconstruct_elimGivenAt(v_parts_794_, v___x_809_, v_offset_797_, v_handler_795_, v_motive_x3f_798_, v_a_799_, v_a_800_, v_a_801_, v_a_802_, v_a_803_, v_a_804_);
if (lean_obj_tag(v___x_810_) == 0)
{
lean_object* v_a_811_; lean_object* v_fst_812_; lean_object* v_snd_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v_suffix_816_; lean_object* v___x_817_; lean_object* v___x_818_; 
v_a_811_ = lean_ctor_get(v___x_810_, 0);
lean_inc(v_a_811_);
lean_dec_ref_known(v___x_810_, 1);
v_fst_812_ = lean_ctor_get(v_a_811_, 0);
lean_inc(v_fst_812_);
v_snd_813_ = lean_ctor_get(v_a_811_, 1);
lean_inc_n(v_snd_813_, 2);
lean_dec(v_a_811_);
v___x_814_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__0));
v___x_815_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_injectGiven___closed__1));
v_suffix_816_ = lp_vampireReplay_Vampire_Reconstruct_suffixJunctions(v___x_814_, v___x_815_, v_parts_794_);
v___x_817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_817_, 0, v_snd_813_);
v___x_818_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Junction_0__Vampire_Reconstruct_elimGivenFrom(v_parts_794_, v_suffix_816_, v___x_807_, v_offset_797_, v_handler_795_, v___x_817_, v_a_799_, v_a_800_, v_a_801_, v_a_802_, v_a_803_, v_a_804_);
if (lean_obj_tag(v___x_818_) == 0)
{
lean_object* v_a_819_; lean_object* v___x_821_; uint8_t v_isShared_822_; uint8_t v_isSharedCheck_832_; 
v_a_819_ = lean_ctor_get(v___x_818_, 0);
v_isSharedCheck_832_ = !lean_is_exclusive(v___x_818_);
if (v_isSharedCheck_832_ == 0)
{
v___x_821_ = v___x_818_;
v_isShared_822_ = v_isSharedCheck_832_;
goto v_resetjp_820_;
}
else
{
lean_inc(v_a_819_);
lean_dec(v___x_818_);
v___x_821_ = lean_box(0);
v_isShared_822_ = v_isSharedCheck_832_;
goto v_resetjp_820_;
}
v_resetjp_820_:
{
lean_object* v_fst_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_830_; 
v_fst_823_ = lean_ctor_get(v_a_819_, 0);
lean_inc(v_fst_823_);
lean_dec(v_a_819_);
v___x_824_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__7, &lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__7_once, _init_lp_vampireReplay_Vampire_Reconstruct_elimFunction___closed__7);
v___x_825_ = l_Lean_instInhabitedExpr;
v___x_826_ = lean_array_get_borrowed(v___x_825_, v_parts_794_, v___x_809_);
v___x_827_ = lean_array_get(v___x_825_, v_suffix_816_, v___x_807_);
lean_dec_ref(v_suffix_816_);
lean_inc(v___x_826_);
v___x_828_ = l_Lean_mkApp6(v___x_824_, v___x_826_, v___x_827_, v_snd_813_, v_h_796_, v_fst_812_, v_fst_823_);
if (v_isShared_822_ == 0)
{
lean_ctor_set(v___x_821_, 0, v___x_828_);
v___x_830_ = v___x_821_;
goto v_reusejp_829_;
}
else
{
lean_object* v_reuseFailAlloc_831_; 
v_reuseFailAlloc_831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_831_, 0, v___x_828_);
v___x_830_ = v_reuseFailAlloc_831_;
goto v_reusejp_829_;
}
v_reusejp_829_:
{
return v___x_830_;
}
}
}
else
{
lean_object* v_a_833_; lean_object* v___x_835_; uint8_t v_isShared_836_; uint8_t v_isSharedCheck_840_; 
lean_dec_ref(v_suffix_816_);
lean_dec(v_snd_813_);
lean_dec(v_fst_812_);
lean_dec_ref(v_h_796_);
v_a_833_ = lean_ctor_get(v___x_818_, 0);
v_isSharedCheck_840_ = !lean_is_exclusive(v___x_818_);
if (v_isSharedCheck_840_ == 0)
{
v___x_835_ = v___x_818_;
v_isShared_836_ = v_isSharedCheck_840_;
goto v_resetjp_834_;
}
else
{
lean_inc(v_a_833_);
lean_dec(v___x_818_);
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
lean_object* v_a_841_; lean_object* v___x_843_; uint8_t v_isShared_844_; uint8_t v_isSharedCheck_848_; 
lean_dec(v_offset_797_);
lean_dec_ref(v_h_796_);
lean_dec_ref(v_handler_795_);
v_a_841_ = lean_ctor_get(v___x_810_, 0);
v_isSharedCheck_848_ = !lean_is_exclusive(v___x_810_);
if (v_isSharedCheck_848_ == 0)
{
v___x_843_ = v___x_810_;
v_isShared_844_ = v_isSharedCheck_848_;
goto v_resetjp_842_;
}
else
{
lean_inc(v_a_841_);
lean_dec(v___x_810_);
v___x_843_ = lean_box(0);
v_isShared_844_ = v_isSharedCheck_848_;
goto v_resetjp_842_;
}
v_resetjp_842_:
{
lean_object* v___x_846_; 
if (v_isShared_844_ == 0)
{
v___x_846_ = v___x_843_;
goto v_reusejp_845_;
}
else
{
lean_object* v_reuseFailAlloc_847_; 
v_reuseFailAlloc_847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_847_, 0, v_a_841_);
v___x_846_ = v_reuseFailAlloc_847_;
goto v_reusejp_845_;
}
v_reusejp_845_:
{
return v___x_846_;
}
}
}
}
else
{
lean_object* v___x_849_; 
lean_dec(v_motive_x3f_798_);
lean_inc(v_a_804_);
lean_inc_ref(v_a_803_);
lean_inc(v_a_802_);
lean_inc_ref(v_a_801_);
lean_inc(v_a_800_);
lean_inc_ref(v_a_799_);
v___x_849_ = lean_apply_9(v_handler_795_, v_offset_797_, v_h_796_, v_a_799_, v_a_800_, v_a_801_, v_a_802_, v_a_803_, v_a_804_, lean_box(0));
return v___x_849_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_elimGiven___boxed(lean_object* v_parts_850_, lean_object* v_handler_851_, lean_object* v_h_852_, lean_object* v_offset_853_, lean_object* v_motive_x3f_854_, lean_object* v_a_855_, lean_object* v_a_856_, lean_object* v_a_857_, lean_object* v_a_858_, lean_object* v_a_859_, lean_object* v_a_860_, lean_object* v_a_861_){
_start:
{
lean_object* v_res_862_; 
v_res_862_ = lp_vampireReplay_Vampire_Reconstruct_elimGiven(v_parts_850_, v_handler_851_, v_h_852_, v_offset_853_, v_motive_x3f_854_, v_a_855_, v_a_856_, v_a_857_, v_a_858_, v_a_859_, v_a_860_);
lean_dec(v_a_860_);
lean_dec_ref(v_a_859_);
lean_dec(v_a_858_);
lean_dec_ref(v_a_857_);
lean_dec(v_a_856_);
lean_dec_ref(v_a_855_);
lean_dec_ref(v_parts_850_);
return v_res_862_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_projectGiven_spec__0___redArg(lean_object* v_parts_863_, lean_object* v_suffix_864_, lean_object* v_range_865_, lean_object* v_b_866_, lean_object* v_i_867_){
_start:
{
lean_object* v_stop_869_; lean_object* v_step_870_; uint8_t v___x_871_; 
v_stop_869_ = lean_ctor_get(v_range_865_, 1);
v_step_870_ = lean_ctor_get(v_range_865_, 2);
v___x_871_ = lean_nat_dec_lt(v_i_867_, v_stop_869_);
if (v___x_871_ == 0)
{
lean_object* v___x_872_; 
lean_dec(v_i_867_);
v___x_872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_872_, 0, v_b_866_);
return v___x_872_;
}
else
{
lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; 
v___x_873_ = lean_unsigned_to_nat(1u);
v___x_874_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__3, &lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__3);
v___x_875_ = l_Lean_instInhabitedExpr;
v___x_876_ = lean_array_get_borrowed(v___x_875_, v_parts_863_, v_i_867_);
v___x_877_ = lean_nat_add(v_i_867_, v___x_873_);
v___x_878_ = lean_array_get_borrowed(v___x_875_, v_suffix_864_, v___x_877_);
lean_dec(v___x_877_);
lean_inc(v___x_878_);
lean_inc(v___x_876_);
v___x_879_ = l_Lean_mkApp3(v___x_874_, v___x_876_, v___x_878_, v_b_866_);
v___x_880_ = lean_nat_add(v_i_867_, v_step_870_);
lean_dec(v_i_867_);
v_b_866_ = v___x_879_;
v_i_867_ = v___x_880_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_projectGiven_spec__0___redArg___boxed(lean_object* v_parts_882_, lean_object* v_suffix_883_, lean_object* v_range_884_, lean_object* v_b_885_, lean_object* v_i_886_, lean_object* v___y_887_){
_start:
{
lean_object* v_res_888_; 
v_res_888_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_projectGiven_spec__0___redArg(v_parts_882_, v_suffix_883_, v_range_884_, v_b_885_, v_i_886_);
lean_dec_ref(v_range_884_);
lean_dec_ref(v_suffix_883_);
lean_dec_ref(v_parts_882_);
return v_res_888_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_projectGiven(lean_object* v_parts_894_, lean_object* v_i_895_, lean_object* v_h_896_, lean_object* v_a_897_, lean_object* v_a_898_, lean_object* v_a_899_, lean_object* v_a_900_, lean_object* v_a_901_, lean_object* v_a_902_){
_start:
{
lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___y_907_; uint8_t v___x_930_; 
v___x_904_ = lean_array_get_size(v_parts_894_);
v___x_905_ = lean_unsigned_to_nat(1u);
v___x_930_ = lean_nat_dec_le(v___x_904_, v___x_905_);
if (v___x_930_ == 0)
{
lean_object* v___x_931_; uint8_t v___x_932_; 
v___x_931_ = lean_nat_sub(v___x_904_, v___x_905_);
v___x_932_ = lean_nat_dec_le(v_i_895_, v___x_931_);
if (v___x_932_ == 0)
{
lean_dec(v_i_895_);
v___y_907_ = v___x_931_;
goto v___jp_906_;
}
else
{
lean_dec(v___x_931_);
v___y_907_ = v_i_895_;
goto v___jp_906_;
}
}
else
{
lean_object* v___x_933_; 
lean_dec(v_i_895_);
v___x_933_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_933_, 0, v_h_896_);
return v___x_933_;
}
v___jp_906_:
{
lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v_suffix_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v_a_914_; lean_object* v___x_915_; uint8_t v___x_916_; 
v___x_908_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_projectGiven___closed__0));
v___x_909_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_projectGiven___closed__2));
v_suffix_910_ = lp_vampireReplay_Vampire_Reconstruct_suffixJunctions(v___x_908_, v___x_909_, v_parts_894_);
v___x_911_ = lean_unsigned_to_nat(0u);
lean_inc(v___y_907_);
v___x_912_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_912_, 0, v___x_911_);
lean_ctor_set(v___x_912_, 1, v___y_907_);
lean_ctor_set(v___x_912_, 2, v___x_905_);
v___x_913_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_projectGiven_spec__0___redArg(v_parts_894_, v_suffix_910_, v___x_912_, v_h_896_, v___x_911_);
lean_dec_ref_known(v___x_912_, 3);
v_a_914_ = lean_ctor_get(v___x_913_, 0);
lean_inc(v_a_914_);
v___x_915_ = lean_nat_add(v___y_907_, v___x_905_);
v___x_916_ = lean_nat_dec_eq(v___x_915_, v___x_904_);
if (v___x_916_ == 0)
{
lean_object* v___x_918_; uint8_t v_isShared_919_; uint8_t v_isSharedCheck_928_; 
v_isSharedCheck_928_ = !lean_is_exclusive(v___x_913_);
if (v_isSharedCheck_928_ == 0)
{
lean_object* v_unused_929_; 
v_unused_929_ = lean_ctor_get(v___x_913_, 0);
lean_dec(v_unused_929_);
v___x_918_ = v___x_913_;
v_isShared_919_ = v_isSharedCheck_928_;
goto v_resetjp_917_;
}
else
{
lean_dec(v___x_913_);
v___x_918_ = lean_box(0);
v_isShared_919_ = v_isSharedCheck_928_;
goto v_resetjp_917_;
}
v_resetjp_917_:
{
lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_926_; 
v___x_920_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__6, &lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__6_once, _init_lp_vampireReplay_Vampire_Reconstruct_projectPart___redArg___closed__6);
v___x_921_ = l_Lean_instInhabitedExpr;
v___x_922_ = lean_array_get_borrowed(v___x_921_, v_parts_894_, v___y_907_);
lean_dec(v___y_907_);
v___x_923_ = lean_array_get(v___x_921_, v_suffix_910_, v___x_915_);
lean_dec(v___x_915_);
lean_dec_ref(v_suffix_910_);
lean_inc(v___x_922_);
v___x_924_ = l_Lean_mkApp3(v___x_920_, v___x_922_, v___x_923_, v_a_914_);
if (v_isShared_919_ == 0)
{
lean_ctor_set(v___x_918_, 0, v___x_924_);
v___x_926_ = v___x_918_;
goto v_reusejp_925_;
}
else
{
lean_object* v_reuseFailAlloc_927_; 
v_reuseFailAlloc_927_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_927_, 0, v___x_924_);
v___x_926_ = v_reuseFailAlloc_927_;
goto v_reusejp_925_;
}
v_reusejp_925_:
{
return v___x_926_;
}
}
}
else
{
lean_dec(v___x_915_);
lean_dec(v_a_914_);
lean_dec_ref(v_suffix_910_);
lean_dec(v___y_907_);
return v___x_913_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_projectGiven___boxed(lean_object* v_parts_934_, lean_object* v_i_935_, lean_object* v_h_936_, lean_object* v_a_937_, lean_object* v_a_938_, lean_object* v_a_939_, lean_object* v_a_940_, lean_object* v_a_941_, lean_object* v_a_942_, lean_object* v_a_943_){
_start:
{
lean_object* v_res_944_; 
v_res_944_ = lp_vampireReplay_Vampire_Reconstruct_projectGiven(v_parts_934_, v_i_935_, v_h_936_, v_a_937_, v_a_938_, v_a_939_, v_a_940_, v_a_941_, v_a_942_);
lean_dec(v_a_942_);
lean_dec_ref(v_a_941_);
lean_dec(v_a_940_);
lean_dec_ref(v_a_939_);
lean_dec(v_a_938_);
lean_dec_ref(v_a_937_);
lean_dec_ref(v_parts_934_);
return v_res_944_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_projectGiven_spec__0(lean_object* v_parts_945_, lean_object* v_suffix_946_, lean_object* v_range_947_, lean_object* v_b_948_, lean_object* v_i_949_, lean_object* v_hs_950_, lean_object* v_hl_951_, lean_object* v___y_952_, lean_object* v___y_953_, lean_object* v___y_954_, lean_object* v___y_955_, lean_object* v___y_956_, lean_object* v___y_957_){
_start:
{
lean_object* v___x_959_; 
v___x_959_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_projectGiven_spec__0___redArg(v_parts_945_, v_suffix_946_, v_range_947_, v_b_948_, v_i_949_);
return v___x_959_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_projectGiven_spec__0___boxed(lean_object* v_parts_960_, lean_object* v_suffix_961_, lean_object* v_range_962_, lean_object* v_b_963_, lean_object* v_i_964_, lean_object* v_hs_965_, lean_object* v_hl_966_, lean_object* v___y_967_, lean_object* v___y_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_){
_start:
{
lean_object* v_res_974_; 
v_res_974_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_projectGiven_spec__0(v_parts_960_, v_suffix_961_, v_range_962_, v_b_963_, v_i_964_, v_hs_965_, v_hl_966_, v___y_967_, v___y_968_, v___y_969_, v___y_970_, v___y_971_, v___y_972_);
lean_dec(v___y_972_);
lean_dec_ref(v___y_971_);
lean_dec(v___y_970_);
lean_dec_ref(v___y_969_);
lean_dec(v___y_968_);
lean_dec_ref(v___y_967_);
lean_dec_ref(v_range_962_);
lean_dec_ref(v_suffix_961_);
lean_dec_ref(v_parts_960_);
return v_res_974_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_introGiven_spec__0___redArg(lean_object* v_offset_975_, lean_object* v_component_976_, lean_object* v_range_977_, lean_object* v_b_978_, lean_object* v_i_979_, lean_object* v___y_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_){
_start:
{
lean_object* v_stop_987_; lean_object* v_step_988_; uint8_t v___x_989_; 
v_stop_987_ = lean_ctor_get(v_range_977_, 1);
v_step_988_ = lean_ctor_get(v_range_977_, 2);
v___x_989_ = lean_nat_dec_lt(v_i_979_, v_stop_987_);
if (v___x_989_ == 0)
{
lean_object* v___x_990_; 
lean_dec(v_i_979_);
lean_dec_ref(v_component_976_);
v___x_990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_990_, 0, v_b_978_);
return v___x_990_;
}
else
{
lean_object* v___x_991_; lean_object* v___x_992_; 
v___x_991_ = lean_nat_add(v_offset_975_, v_i_979_);
lean_inc_ref(v_component_976_);
lean_inc(v___y_985_);
lean_inc_ref(v___y_984_);
lean_inc(v___y_983_);
lean_inc_ref(v___y_982_);
lean_inc(v___y_981_);
lean_inc_ref(v___y_980_);
v___x_992_ = lean_apply_8(v_component_976_, v___x_991_, v___y_980_, v___y_981_, v___y_982_, v___y_983_, v___y_984_, v___y_985_, lean_box(0));
if (lean_obj_tag(v___x_992_) == 0)
{
lean_object* v_a_993_; lean_object* v___x_994_; lean_object* v___x_995_; 
v_a_993_ = lean_ctor_get(v___x_992_, 0);
lean_inc(v_a_993_);
lean_dec_ref_known(v___x_992_, 1);
v___x_994_ = lean_array_push(v_b_978_, v_a_993_);
v___x_995_ = lean_nat_add(v_i_979_, v_step_988_);
lean_dec(v_i_979_);
v_b_978_ = v___x_994_;
v_i_979_ = v___x_995_;
goto _start;
}
else
{
lean_object* v_a_997_; lean_object* v___x_999_; uint8_t v_isShared_1000_; uint8_t v_isSharedCheck_1004_; 
lean_dec(v_i_979_);
lean_dec_ref(v_b_978_);
lean_dec_ref(v_component_976_);
v_a_997_ = lean_ctor_get(v___x_992_, 0);
v_isSharedCheck_1004_ = !lean_is_exclusive(v___x_992_);
if (v_isSharedCheck_1004_ == 0)
{
v___x_999_ = v___x_992_;
v_isShared_1000_ = v_isSharedCheck_1004_;
goto v_resetjp_998_;
}
else
{
lean_inc(v_a_997_);
lean_dec(v___x_992_);
v___x_999_ = lean_box(0);
v_isShared_1000_ = v_isSharedCheck_1004_;
goto v_resetjp_998_;
}
v_resetjp_998_:
{
lean_object* v___x_1002_; 
if (v_isShared_1000_ == 0)
{
v___x_1002_ = v___x_999_;
goto v_reusejp_1001_;
}
else
{
lean_object* v_reuseFailAlloc_1003_; 
v_reuseFailAlloc_1003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1003_, 0, v_a_997_);
v___x_1002_ = v_reuseFailAlloc_1003_;
goto v_reusejp_1001_;
}
v_reusejp_1001_:
{
return v___x_1002_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_introGiven_spec__0___redArg___boxed(lean_object* v_offset_1005_, lean_object* v_component_1006_, lean_object* v_range_1007_, lean_object* v_b_1008_, lean_object* v_i_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_){
_start:
{
lean_object* v_res_1017_; 
v_res_1017_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_introGiven_spec__0___redArg(v_offset_1005_, v_component_1006_, v_range_1007_, v_b_1008_, v_i_1009_, v___y_1010_, v___y_1011_, v___y_1012_, v___y_1013_, v___y_1014_, v___y_1015_);
lean_dec(v___y_1015_);
lean_dec_ref(v___y_1014_);
lean_dec(v___y_1013_);
lean_dec_ref(v___y_1012_);
lean_dec(v___y_1011_);
lean_dec_ref(v___y_1010_);
lean_dec_ref(v_range_1007_);
lean_dec(v_offset_1005_);
return v_res_1017_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_introGiven_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; 
v___x_1022_ = lean_box(0);
v___x_1023_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_introGiven_spec__1___redArg___closed__1));
v___x_1024_ = l_Lean_Expr_const___override(v___x_1023_, v___x_1022_);
return v___x_1024_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_introGiven_spec__1___redArg(lean_object* v___x_1025_, lean_object* v_parts_1026_, lean_object* v_suffix_1027_, lean_object* v_a_1028_, lean_object* v_range_1029_, lean_object* v_b_1030_, lean_object* v_i_1031_){
_start:
{
lean_object* v_stop_1033_; lean_object* v_step_1034_; uint8_t v___x_1035_; 
v_stop_1033_ = lean_ctor_get(v_range_1029_, 1);
v_step_1034_ = lean_ctor_get(v_range_1029_, 2);
v___x_1035_ = lean_nat_dec_lt(v_i_1031_, v_stop_1033_);
if (v___x_1035_ == 0)
{
lean_object* v___x_1036_; 
lean_dec(v_i_1031_);
v___x_1036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1036_, 0, v_b_1030_);
return v___x_1036_;
}
else
{
lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; 
v___x_1037_ = l_Lean_instInhabitedExpr;
v___x_1038_ = lean_unsigned_to_nat(1u);
v___x_1039_ = lean_unsigned_to_nat(2u);
v___x_1040_ = lean_nat_sub(v___x_1025_, v___x_1039_);
v___x_1041_ = lean_nat_sub(v___x_1040_, v_i_1031_);
lean_dec(v___x_1040_);
v___x_1042_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_introGiven_spec__1___redArg___closed__2, &lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_introGiven_spec__1___redArg___closed__2_once, _init_lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_introGiven_spec__1___redArg___closed__2);
v___x_1043_ = lean_array_get_borrowed(v___x_1037_, v_parts_1026_, v___x_1041_);
v___x_1044_ = lean_nat_add(v___x_1041_, v___x_1038_);
v___x_1045_ = lean_array_get_borrowed(v___x_1037_, v_suffix_1027_, v___x_1044_);
lean_dec(v___x_1044_);
v___x_1046_ = lean_array_get_borrowed(v___x_1037_, v_a_1028_, v___x_1041_);
lean_dec(v___x_1041_);
lean_inc(v___x_1046_);
lean_inc(v___x_1045_);
lean_inc(v___x_1043_);
v___x_1047_ = l_Lean_mkApp4(v___x_1042_, v___x_1043_, v___x_1045_, v___x_1046_, v_b_1030_);
v___x_1048_ = lean_nat_add(v_i_1031_, v_step_1034_);
lean_dec(v_i_1031_);
v_b_1030_ = v___x_1047_;
v_i_1031_ = v___x_1048_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_introGiven_spec__1___redArg___boxed(lean_object* v___x_1050_, lean_object* v_parts_1051_, lean_object* v_suffix_1052_, lean_object* v_a_1053_, lean_object* v_range_1054_, lean_object* v_b_1055_, lean_object* v_i_1056_, lean_object* v___y_1057_){
_start:
{
lean_object* v_res_1058_; 
v_res_1058_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_introGiven_spec__1___redArg(v___x_1050_, v_parts_1051_, v_suffix_1052_, v_a_1053_, v_range_1054_, v_b_1055_, v_i_1056_);
lean_dec_ref(v_range_1054_);
lean_dec_ref(v_a_1053_);
lean_dec_ref(v_suffix_1052_);
lean_dec_ref(v_parts_1051_);
lean_dec(v___x_1050_);
return v_res_1058_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_introGiven___closed__2(void){
_start:
{
lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; 
v___x_1064_ = lean_box(0);
v___x_1065_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_introGiven___closed__1));
v___x_1066_ = l_Lean_Expr_const___override(v___x_1065_, v___x_1064_);
return v___x_1066_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_introGiven(lean_object* v_parts_1067_, lean_object* v_component_1068_, lean_object* v_offset_1069_, lean_object* v_a_1070_, lean_object* v_a_1071_, lean_object* v_a_1072_, lean_object* v_a_1073_, lean_object* v_a_1074_, lean_object* v_a_1075_){
_start:
{
lean_object* v___x_1077_; lean_object* v___x_1078_; uint8_t v___x_1079_; 
v___x_1077_ = lean_array_get_size(v_parts_1067_);
v___x_1078_ = lean_unsigned_to_nat(0u);
v___x_1079_ = lean_nat_dec_eq(v___x_1077_, v___x_1078_);
if (v___x_1079_ == 0)
{
lean_object* v_proofs_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; 
v_proofs_1080_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_introGiven___closed__0));
v___x_1081_ = lean_unsigned_to_nat(1u);
v___x_1082_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1082_, 0, v___x_1078_);
lean_ctor_set(v___x_1082_, 1, v___x_1077_);
lean_ctor_set(v___x_1082_, 2, v___x_1081_);
v___x_1083_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_introGiven_spec__0___redArg(v_offset_1069_, v_component_1068_, v___x_1082_, v_proofs_1080_, v___x_1078_, v_a_1070_, v_a_1071_, v_a_1072_, v_a_1073_, v_a_1074_, v_a_1075_);
lean_dec_ref_known(v___x_1082_, 3);
if (lean_obj_tag(v___x_1083_) == 0)
{
lean_object* v_a_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v_suffix_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; 
v_a_1084_ = lean_ctor_get(v___x_1083_, 0);
lean_inc(v_a_1084_);
lean_dec_ref_known(v___x_1083_, 1);
v___x_1085_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_projectGiven___closed__0));
v___x_1086_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_projectGiven___closed__2));
v_suffix_1087_ = lp_vampireReplay_Vampire_Reconstruct_suffixJunctions(v___x_1085_, v___x_1086_, v_parts_1067_);
v___x_1088_ = l_Lean_instInhabitedExpr;
v___x_1089_ = lean_array_get_size(v_a_1084_);
v___x_1090_ = lean_nat_sub(v___x_1089_, v___x_1081_);
v___x_1091_ = lean_array_get(v___x_1088_, v_a_1084_, v___x_1090_);
lean_dec(v___x_1090_);
v___x_1092_ = lean_nat_sub(v___x_1077_, v___x_1081_);
v___x_1093_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1093_, 0, v___x_1078_);
lean_ctor_set(v___x_1093_, 1, v___x_1092_);
lean_ctor_set(v___x_1093_, 2, v___x_1081_);
v___x_1094_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_introGiven_spec__1___redArg(v___x_1077_, v_parts_1067_, v_suffix_1087_, v_a_1084_, v___x_1093_, v___x_1091_, v___x_1078_);
lean_dec_ref_known(v___x_1093_, 3);
lean_dec(v_a_1084_);
lean_dec_ref(v_suffix_1087_);
return v___x_1094_;
}
else
{
lean_object* v_a_1095_; lean_object* v___x_1097_; uint8_t v_isShared_1098_; uint8_t v_isSharedCheck_1102_; 
v_a_1095_ = lean_ctor_get(v___x_1083_, 0);
v_isSharedCheck_1102_ = !lean_is_exclusive(v___x_1083_);
if (v_isSharedCheck_1102_ == 0)
{
v___x_1097_ = v___x_1083_;
v_isShared_1098_ = v_isSharedCheck_1102_;
goto v_resetjp_1096_;
}
else
{
lean_inc(v_a_1095_);
lean_dec(v___x_1083_);
v___x_1097_ = lean_box(0);
v_isShared_1098_ = v_isSharedCheck_1102_;
goto v_resetjp_1096_;
}
v_resetjp_1096_:
{
lean_object* v___x_1100_; 
if (v_isShared_1098_ == 0)
{
v___x_1100_ = v___x_1097_;
goto v_reusejp_1099_;
}
else
{
lean_object* v_reuseFailAlloc_1101_; 
v_reuseFailAlloc_1101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1101_, 0, v_a_1095_);
v___x_1100_ = v_reuseFailAlloc_1101_;
goto v_reusejp_1099_;
}
v_reusejp_1099_:
{
return v___x_1100_;
}
}
}
}
else
{
lean_object* v___x_1103_; lean_object* v___x_1104_; 
lean_dec_ref(v_component_1068_);
v___x_1103_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_introGiven___closed__2, &lp_vampireReplay_Vampire_Reconstruct_introGiven___closed__2_once, _init_lp_vampireReplay_Vampire_Reconstruct_introGiven___closed__2);
v___x_1104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1104_, 0, v___x_1103_);
return v___x_1104_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_introGiven___boxed(lean_object* v_parts_1105_, lean_object* v_component_1106_, lean_object* v_offset_1107_, lean_object* v_a_1108_, lean_object* v_a_1109_, lean_object* v_a_1110_, lean_object* v_a_1111_, lean_object* v_a_1112_, lean_object* v_a_1113_, lean_object* v_a_1114_){
_start:
{
lean_object* v_res_1115_; 
v_res_1115_ = lp_vampireReplay_Vampire_Reconstruct_introGiven(v_parts_1105_, v_component_1106_, v_offset_1107_, v_a_1108_, v_a_1109_, v_a_1110_, v_a_1111_, v_a_1112_, v_a_1113_);
lean_dec(v_a_1113_);
lean_dec_ref(v_a_1112_);
lean_dec(v_a_1111_);
lean_dec_ref(v_a_1110_);
lean_dec(v_a_1109_);
lean_dec_ref(v_a_1108_);
lean_dec(v_offset_1107_);
lean_dec_ref(v_parts_1105_);
return v_res_1115_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_introGiven_spec__0(lean_object* v_offset_1116_, lean_object* v_component_1117_, lean_object* v_range_1118_, lean_object* v_b_1119_, lean_object* v_i_1120_, lean_object* v_hs_1121_, lean_object* v_hl_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_){
_start:
{
lean_object* v___x_1130_; 
v___x_1130_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_introGiven_spec__0___redArg(v_offset_1116_, v_component_1117_, v_range_1118_, v_b_1119_, v_i_1120_, v___y_1123_, v___y_1124_, v___y_1125_, v___y_1126_, v___y_1127_, v___y_1128_);
return v___x_1130_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_introGiven_spec__0___boxed(lean_object* v_offset_1131_, lean_object* v_component_1132_, lean_object* v_range_1133_, lean_object* v_b_1134_, lean_object* v_i_1135_, lean_object* v_hs_1136_, lean_object* v_hl_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_, lean_object* v___y_1143_, lean_object* v___y_1144_){
_start:
{
lean_object* v_res_1145_; 
v_res_1145_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_introGiven_spec__0(v_offset_1131_, v_component_1132_, v_range_1133_, v_b_1134_, v_i_1135_, v_hs_1136_, v_hl_1137_, v___y_1138_, v___y_1139_, v___y_1140_, v___y_1141_, v___y_1142_, v___y_1143_);
lean_dec(v___y_1143_);
lean_dec_ref(v___y_1142_);
lean_dec(v___y_1141_);
lean_dec_ref(v___y_1140_);
lean_dec(v___y_1139_);
lean_dec_ref(v___y_1138_);
lean_dec_ref(v_range_1133_);
lean_dec(v_offset_1131_);
return v_res_1145_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_introGiven_spec__1(lean_object* v___x_1146_, lean_object* v_parts_1147_, lean_object* v_suffix_1148_, lean_object* v_a_1149_, lean_object* v_range_1150_, lean_object* v_b_1151_, lean_object* v_i_1152_, lean_object* v_hs_1153_, lean_object* v_hl_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_){
_start:
{
lean_object* v___x_1162_; 
v___x_1162_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_introGiven_spec__1___redArg(v___x_1146_, v_parts_1147_, v_suffix_1148_, v_a_1149_, v_range_1150_, v_b_1151_, v_i_1152_);
return v___x_1162_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_introGiven_spec__1___boxed(lean_object* v___x_1163_, lean_object* v_parts_1164_, lean_object* v_suffix_1165_, lean_object* v_a_1166_, lean_object* v_range_1167_, lean_object* v_b_1168_, lean_object* v_i_1169_, lean_object* v_hs_1170_, lean_object* v_hl_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_){
_start:
{
lean_object* v_res_1179_; 
v_res_1179_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_introGiven_spec__1(v___x_1163_, v_parts_1164_, v_suffix_1165_, v_a_1166_, v_range_1167_, v_b_1168_, v_i_1169_, v_hs_1170_, v_hl_1171_, v___y_1172_, v___y_1173_, v___y_1174_, v___y_1175_, v___y_1176_, v___y_1177_);
lean_dec(v___y_1177_);
lean_dec_ref(v___y_1176_);
lean_dec(v___y_1175_);
lean_dec_ref(v___y_1174_);
lean_dec(v___y_1173_);
lean_dec_ref(v___y_1172_);
lean_dec_ref(v_range_1167_);
lean_dec_ref(v_a_1166_);
lean_dec_ref(v_suffix_1165_);
lean_dec_ref(v_parts_1164_);
lean_dec(v___x_1163_);
return v_res_1179_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_introParts(lean_object* v_chain_1180_, lean_object* v_offset_1181_, lean_object* v_component_1182_, lean_object* v_a_1183_, lean_object* v_a_1184_, lean_object* v_a_1185_, lean_object* v_a_1186_, lean_object* v_a_1187_, lean_object* v_a_1188_){
_start:
{
lean_object* v___x_1190_; lean_object* v___x_1191_; uint8_t v___x_1192_; 
v___x_1190_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_projectGiven___closed__0));
v___x_1191_ = lean_unsigned_to_nat(2u);
v___x_1192_ = l_Lean_Expr_isAppOfArity(v_chain_1180_, v___x_1190_, v___x_1191_);
if (v___x_1192_ == 0)
{
lean_object* v___x_1193_; 
lean_inc(v_a_1188_);
lean_inc_ref(v_a_1187_);
lean_inc(v_a_1186_);
lean_inc_ref(v_a_1185_);
lean_inc(v_a_1184_);
lean_inc_ref(v_a_1183_);
v___x_1193_ = lean_apply_8(v_component_1182_, v_offset_1181_, v_a_1183_, v_a_1184_, v_a_1185_, v_a_1186_, v_a_1187_, v_a_1188_, lean_box(0));
return v___x_1193_;
}
else
{
lean_object* v___x_1194_; lean_object* v_left_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; 
v___x_1194_ = l_Lean_Expr_appFn_x21(v_chain_1180_);
v_left_1195_ = l_Lean_Expr_appArg_x21(v___x_1194_);
lean_dec_ref(v___x_1194_);
lean_inc_ref(v_left_1195_);
v___x_1196_ = lp_vampireReplay_Vampire_Reconstruct_junctionParts(v___x_1190_, v_left_1195_);
lean_inc_ref(v_component_1182_);
lean_inc(v_offset_1181_);
v___x_1197_ = lp_vampireReplay_Vampire_Reconstruct_introParts(v_left_1195_, v_offset_1181_, v_component_1182_, v_a_1183_, v_a_1184_, v_a_1185_, v_a_1186_, v_a_1187_, v_a_1188_);
if (lean_obj_tag(v___x_1197_) == 0)
{
lean_object* v_a_1198_; lean_object* v_right_1199_; lean_object* v_n_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; 
v_a_1198_ = lean_ctor_get(v___x_1197_, 0);
lean_inc(v_a_1198_);
lean_dec_ref_known(v___x_1197_, 1);
v_right_1199_ = l_Lean_Expr_appArg_x21(v_chain_1180_);
v_n_1200_ = lean_array_get_size(v___x_1196_);
lean_dec_ref(v___x_1196_);
v___x_1201_ = lean_nat_add(v_offset_1181_, v_n_1200_);
lean_dec(v_offset_1181_);
v___x_1202_ = lp_vampireReplay_Vampire_Reconstruct_introParts(v_right_1199_, v___x_1201_, v_component_1182_, v_a_1183_, v_a_1184_, v_a_1185_, v_a_1186_, v_a_1187_, v_a_1188_);
if (lean_obj_tag(v___x_1202_) == 0)
{
lean_object* v_a_1203_; lean_object* v___x_1205_; uint8_t v_isShared_1206_; uint8_t v_isSharedCheck_1212_; 
v_a_1203_ = lean_ctor_get(v___x_1202_, 0);
v_isSharedCheck_1212_ = !lean_is_exclusive(v___x_1202_);
if (v_isSharedCheck_1212_ == 0)
{
v___x_1205_ = v___x_1202_;
v_isShared_1206_ = v_isSharedCheck_1212_;
goto v_resetjp_1204_;
}
else
{
lean_inc(v_a_1203_);
lean_dec(v___x_1202_);
v___x_1205_ = lean_box(0);
v_isShared_1206_ = v_isSharedCheck_1212_;
goto v_resetjp_1204_;
}
v_resetjp_1204_:
{
lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1210_; 
v___x_1207_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_introGiven_spec__1___redArg___closed__2, &lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_introGiven_spec__1___redArg___closed__2_once, _init_lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_introGiven_spec__1___redArg___closed__2);
v___x_1208_ = l_Lean_mkApp4(v___x_1207_, v_left_1195_, v_right_1199_, v_a_1198_, v_a_1203_);
if (v_isShared_1206_ == 0)
{
lean_ctor_set(v___x_1205_, 0, v___x_1208_);
v___x_1210_ = v___x_1205_;
goto v_reusejp_1209_;
}
else
{
lean_object* v_reuseFailAlloc_1211_; 
v_reuseFailAlloc_1211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1211_, 0, v___x_1208_);
v___x_1210_ = v_reuseFailAlloc_1211_;
goto v_reusejp_1209_;
}
v_reusejp_1209_:
{
return v___x_1210_;
}
}
}
else
{
lean_dec_ref(v_right_1199_);
lean_dec(v_a_1198_);
lean_dec_ref(v_left_1195_);
return v___x_1202_;
}
}
else
{
lean_dec_ref(v___x_1196_);
lean_dec_ref(v_left_1195_);
lean_dec_ref(v_component_1182_);
lean_dec(v_offset_1181_);
return v___x_1197_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_introParts___boxed(lean_object* v_chain_1213_, lean_object* v_offset_1214_, lean_object* v_component_1215_, lean_object* v_a_1216_, lean_object* v_a_1217_, lean_object* v_a_1218_, lean_object* v_a_1219_, lean_object* v_a_1220_, lean_object* v_a_1221_, lean_object* v_a_1222_){
_start:
{
lean_object* v_res_1223_; 
v_res_1223_ = lp_vampireReplay_Vampire_Reconstruct_introParts(v_chain_1213_, v_offset_1214_, v_component_1215_, v_a_1216_, v_a_1217_, v_a_1218_, v_a_1219_, v_a_1220_, v_a_1221_);
lean_dec(v_a_1221_);
lean_dec_ref(v_a_1220_);
lean_dec(v_a_1219_);
lean_dec_ref(v_a_1218_);
lean_dec(v_a_1217_);
lean_dec_ref(v_a_1216_);
lean_dec_ref(v_chain_1213_);
return v_res_1223_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_congrJunction___redArg(lean_object* v_congruence_1224_, lean_object* v_proofs_1225_, lean_object* v_i_1226_, lean_object* v_a_1227_, lean_object* v_a_1228_, lean_object* v_a_1229_, lean_object* v_a_1230_){
_start:
{
lean_object* v___x_1232_; uint8_t v___x_1233_; 
v___x_1232_ = lean_array_get_size(v_proofs_1225_);
v___x_1233_ = lean_nat_dec_lt(v_i_1226_, v___x_1232_);
if (v___x_1233_ == 0)
{
lean_object* v___x_1234_; lean_object* v___x_1235_; 
lean_dec(v_congruence_1224_);
v___x_1234_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_elimGivenFunction___closed__1, &lp_vampireReplay_Vampire_Reconstruct_elimGivenFunction___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_elimGivenFunction___closed__1);
v___x_1235_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1234_, v_a_1227_, v_a_1228_, v_a_1229_, v_a_1230_);
return v___x_1235_;
}
else
{
lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; uint8_t v___x_1239_; 
v___x_1236_ = lean_array_fget_borrowed(v_proofs_1225_, v_i_1226_);
v___x_1237_ = lean_unsigned_to_nat(1u);
v___x_1238_ = lean_nat_add(v_i_1226_, v___x_1237_);
v___x_1239_ = lean_nat_dec_eq(v___x_1238_, v___x_1232_);
if (v___x_1239_ == 0)
{
lean_object* v___x_1240_; 
lean_inc(v_congruence_1224_);
v___x_1240_ = lp_vampireReplay_Vampire_Reconstruct_congrJunction___redArg(v_congruence_1224_, v_proofs_1225_, v___x_1238_, v_a_1227_, v_a_1228_, v_a_1229_, v_a_1230_);
lean_dec(v___x_1238_);
if (lean_obj_tag(v___x_1240_) == 0)
{
lean_object* v_a_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; 
v_a_1241_ = lean_ctor_get(v___x_1240_, 0);
lean_inc(v_a_1241_);
lean_dec_ref_known(v___x_1240_, 1);
v___x_1242_ = lean_unsigned_to_nat(2u);
v___x_1243_ = lean_mk_empty_array_with_capacity(v___x_1242_);
lean_inc(v___x_1236_);
v___x_1244_ = lean_array_push(v___x_1243_, v___x_1236_);
v___x_1245_ = lean_array_push(v___x_1244_, v_a_1241_);
v___x_1246_ = l_Lean_Meta_mkAppM(v_congruence_1224_, v___x_1245_, v_a_1227_, v_a_1228_, v_a_1229_, v_a_1230_);
return v___x_1246_;
}
else
{
lean_dec(v_congruence_1224_);
return v___x_1240_;
}
}
else
{
lean_object* v___x_1247_; 
lean_dec(v___x_1238_);
lean_dec(v_congruence_1224_);
lean_inc(v___x_1236_);
v___x_1247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1247_, 0, v___x_1236_);
return v___x_1247_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_congrJunction___redArg___boxed(lean_object* v_congruence_1248_, lean_object* v_proofs_1249_, lean_object* v_i_1250_, lean_object* v_a_1251_, lean_object* v_a_1252_, lean_object* v_a_1253_, lean_object* v_a_1254_, lean_object* v_a_1255_){
_start:
{
lean_object* v_res_1256_; 
v_res_1256_ = lp_vampireReplay_Vampire_Reconstruct_congrJunction___redArg(v_congruence_1248_, v_proofs_1249_, v_i_1250_, v_a_1251_, v_a_1252_, v_a_1253_, v_a_1254_);
lean_dec(v_a_1254_);
lean_dec_ref(v_a_1253_);
lean_dec(v_a_1252_);
lean_dec_ref(v_a_1251_);
lean_dec(v_i_1250_);
lean_dec_ref(v_proofs_1249_);
return v_res_1256_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_congrJunction(lean_object* v_congruence_1257_, lean_object* v_proofs_1258_, lean_object* v_i_1259_, lean_object* v_a_1260_, lean_object* v_a_1261_, lean_object* v_a_1262_, lean_object* v_a_1263_, lean_object* v_a_1264_, lean_object* v_a_1265_){
_start:
{
lean_object* v___x_1267_; 
v___x_1267_ = lp_vampireReplay_Vampire_Reconstruct_congrJunction___redArg(v_congruence_1257_, v_proofs_1258_, v_i_1259_, v_a_1262_, v_a_1263_, v_a_1264_, v_a_1265_);
return v___x_1267_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_congrJunction___boxed(lean_object* v_congruence_1268_, lean_object* v_proofs_1269_, lean_object* v_i_1270_, lean_object* v_a_1271_, lean_object* v_a_1272_, lean_object* v_a_1273_, lean_object* v_a_1274_, lean_object* v_a_1275_, lean_object* v_a_1276_, lean_object* v_a_1277_){
_start:
{
lean_object* v_res_1278_; 
v_res_1278_ = lp_vampireReplay_Vampire_Reconstruct_congrJunction(v_congruence_1268_, v_proofs_1269_, v_i_1270_, v_a_1271_, v_a_1272_, v_a_1273_, v_a_1274_, v_a_1275_, v_a_1276_);
lean_dec(v_a_1276_);
lean_dec_ref(v_a_1275_);
lean_dec(v_a_1274_);
lean_dec_ref(v_a_1273_);
lean_dec(v_a_1272_);
lean_dec_ref(v_a_1271_);
lean_dec(v_i_1270_);
lean_dec_ref(v_proofs_1269_);
return v_res_1278_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_vampireReplay_VampireReplay_Reconstruct_Stated(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_vampireReplay_VampireReplay_Reconstruct_Junction(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_vampireReplay_VampireReplay_Reconstruct_Stated(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
