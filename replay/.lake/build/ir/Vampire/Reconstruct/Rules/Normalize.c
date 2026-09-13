// Lean compiler output
// Module: Vampire.Reconstruct.Rules.Normalize
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
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lp_vampireReplay_Vampire_Formula_subformulas(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(lean_object*, uint32_t, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_junction(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lp_vampireReplay_Vampire_Reconstruct_congrJunction___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_formula_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_formula(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* lp_vampireReplay_Vampire_Formula_boundVars(lean_object*);
lean_object* lp_vampireReplay_Array_filterMapM___at___00Vampire_Reconstruct_formula_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* lp_vampireReplay_Vampire_instReprConnective_repr(uint8_t, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_sortType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_parents(lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_formula_x3f(lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_varSorts(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_equiv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Classical"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__0_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "propDecidable"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__1 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__1_value;
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(40, 236, 220, 79, 38, 141, 161, 150)}};
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__2_value_aux_0),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 239, 88, 215, 135, 192, 113, 64)}};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__2 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__2_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__3 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__3_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "imp_iff_not_or"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__4 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__4_value;
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__5_value_aux_0),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(63, 19, 145, 232, 73, 180, 75, 152)}};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__5 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__5_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "missing argument"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__1;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Iff"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__2 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__2_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trans"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__3 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__3_value;
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__4_value_aux_0),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(25, 192, 189, 143, 180, 129, 112, 178)}};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__4 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__4_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "formula is missing a subformula"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0___closed__1;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Normalize_normalize_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Normalize_normalize_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Normalize_normalize_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Normalize_normalize_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "not_congr"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__0_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__0_value),LEAN_SCALAR_PTR_LITERAL(21, 52, 231, 191, 117, 147, 16, 240)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__1_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Not"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__0_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(185, 11, 203, 55, 27, 192, 137, 230)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__1_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "not_or"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__2_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__2_value),LEAN_SCALAR_PTR_LITERAL(112, 214, 26, 199, 216, 200, 97, 117)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__3 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__3_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "and_congr"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__4_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__4_value),LEAN_SCALAR_PTR_LITERAL(188, 238, 216, 229, 220, 92, 101, 241)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__5 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__5_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Or"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__6 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__6_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__6_value),LEAN_SCALAR_PTR_LITERAL(34, 237, 162, 225, 217, 98, 205, 196)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__7 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__7_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__8 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__8_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__8_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__9 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__9_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "not_and_iff_not_or_not"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__10 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__10_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(40, 236, 220, 79, 38, 141, 161, 150)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__11_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__10_value),LEAN_SCALAR_PTR_LITERAL(210, 62, 29, 195, 181, 75, 51, 216)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__11 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__11_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "or_congr"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__12 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__12_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__12_value),LEAN_SCALAR_PTR_LITERAL(97, 254, 90, 169, 212, 147, 67, 5)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__13 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__13_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "And"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__14 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__14_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__14_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__15 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__15_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__16 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__16_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__16_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__17 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__17_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "a junction with no arguments"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__18 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__18_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__19;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "not_false_expand"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__34 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__34_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Normalize"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__28 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__28_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Reconstruct"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__24 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__24_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Vampire"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__22 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__22_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Rules"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__26 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__26_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__20 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__20_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__20_value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__21 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__21_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__21_value),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__22_value),LEAN_SCALAR_PTR_LITERAL(80, 142, 215, 100, 183, 128, 219, 42)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__23 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__23_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__23_value),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__24_value),LEAN_SCALAR_PTR_LITERAL(18, 68, 184, 68, 235, 156, 26, 113)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__25 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__25_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__25_value),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__26_value),LEAN_SCALAR_PTR_LITERAL(246, 87, 176, 209, 233, 52, 114, 146)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__27 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__27_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__27_value),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__28_value),LEAN_SCALAR_PTR_LITERAL(207, 34, 8, 50, 26, 125, 247, 113)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__29 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__29_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__29_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(98, 69, 82, 216, 23, 148, 228, 5)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__30 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__30_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__30_value),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__22_value),LEAN_SCALAR_PTR_LITERAL(57, 131, 28, 52, 237, 89, 61, 177)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__31 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__31_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__31_value),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__24_value),LEAN_SCALAR_PTR_LITERAL(95, 21, 154, 218, 201, 96, 80, 121)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__32 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__32_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__32_value),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__28_value),LEAN_SCALAR_PTR_LITERAL(2, 216, 93, 176, 182, 154, 224, 147)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__33 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__33_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__33_value),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__34_value),LEAN_SCALAR_PTR_LITERAL(235, 50, 207, 33, 155, 216, 31, 182)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__35 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__35_value;
static const lean_array_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__36 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__36_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__37;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "not_true_expand"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__38 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__38_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__33_value),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__38_value),LEAN_SCALAR_PTR_LITERAL(244, 210, 1, 162, 176, 26, 153, 234)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__39 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__39_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__40;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "nnf cannot state"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__41 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__41_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__42;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 64, .m_data = "the body of a quantifier at negative polarity is not a negation:"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__2_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__3;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Exists"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__4_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(65, 29, 48, 135, 199, 176, 149, 70)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__5 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__5_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "not_exists"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__6 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__6_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(161, 183, 12, 64, 200, 252, 1, 72)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__7 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__7_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "forall_congr'"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__8 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__8_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__8_value),LEAN_SCALAR_PTR_LITERAL(63, 255, 57, 163, 42, 11, 214, 176)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__9 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__9_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__10;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "not_forall"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__11 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__11_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(40, 236, 220, 79, 38, 141, 161, 150)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__12_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__11_value),LEAN_SCALAR_PTR_LITERAL(113, 55, 178, 26, 122, 226, 82, 222)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__12 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__12_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "exists_congr"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__13 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__13_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__13_value),LEAN_SCALAR_PTR_LITERAL(233, 95, 142, 123, 147, 63, 142, 134)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__14 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__14_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0(lean_object*, uint32_t, uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___boxed(lean_object**);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "X"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified(uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "not_imp"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__43 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__43_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__44_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(40, 236, 220, 79, 38, 141, 161, 150)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__44_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__43_value),LEAN_SCALAR_PTR_LITERAL(42, 231, 136, 85, 20, 135, 254, 151)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__44 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__44_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__45;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__46;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "not_not"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__47 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__47_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__48_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(40, 236, 220, 79, 38, 141, 161, 150)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__48_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__47_value),LEAN_SCALAR_PTR_LITERAL(145, 137, 207, 135, 95, 147, 196, 34)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__48 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__48_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "not_iff_expand"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__49 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__49_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "iff_iff_implies_and_implies"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__50 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__50_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__50_value),LEAN_SCALAR_PTR_LITERAL(65, 98, 125, 184, 35, 143, 136, 103)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__51 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__51_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "iff_congr"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__52 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__52_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__52_value),LEAN_SCALAR_PTR_LITERAL(74, 35, 94, 165, 147, 2, 155, 38)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__53 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__53_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "refl"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__54 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__54_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__55_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__55_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__54_value),LEAN_SCALAR_PTR_LITERAL(196, 84, 201, 13, 92, 117, 118, 47)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__55 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__55_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "cannot normalise a formula with connective "};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__56 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__56_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__57_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__57;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize(uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Normalize_normalize_spec__0(uint8_t, lean_object*, lean_object*, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Normalize_normalize_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "normalisation should have one premise, got "};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__0 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__1;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "normalisation without a premise"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__2 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__3;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__4;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__5;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mp"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__6 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__6_value;
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__7_value_aux_0),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__6_value),LEAN_SCALAR_PTR_LITERAL(147, 220, 216, 40, 239, 165, 44, 174)}};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__7 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__7_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "normalisation should be given a formula"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__8 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__8_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__9;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_ennf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_ennf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_nnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_nnf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg(lean_object* v_a_11_, lean_object* v_b_12_, lean_object* v_a_13_, lean_object* v_a_14_, lean_object* v_a_15_, lean_object* v_a_16_){
_start:
{
lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_18_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__2));
v___x_19_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_19_, 0, v_a_11_);
v___x_20_ = lean_unsigned_to_nat(1u);
v___x_21_ = lean_mk_empty_array_with_capacity(v___x_20_);
lean_inc_ref(v___x_19_);
v___x_22_ = lean_array_push(v___x_21_, v___x_19_);
v___x_23_ = l_Lean_Meta_mkAppOptM(v___x_18_, v___x_22_, v_a_13_, v_a_14_, v_a_15_, v_a_16_);
if (lean_obj_tag(v___x_23_) == 0)
{
lean_object* v_a_24_; lean_object* v___x_26_; uint8_t v_isShared_27_; uint8_t v_isSharedCheck_39_; 
v_a_24_ = lean_ctor_get(v___x_23_, 0);
v_isSharedCheck_39_ = !lean_is_exclusive(v___x_23_);
if (v_isSharedCheck_39_ == 0)
{
v___x_26_ = v___x_23_;
v_isShared_27_ = v_isSharedCheck_39_;
goto v_resetjp_25_;
}
else
{
lean_inc(v_a_24_);
lean_dec(v___x_23_);
v___x_26_ = lean_box(0);
v_isShared_27_ = v_isSharedCheck_39_;
goto v_resetjp_25_;
}
v_resetjp_25_:
{
lean_object* v___x_28_; lean_object* v___x_30_; 
v___x_28_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__5));
if (v_isShared_27_ == 0)
{
lean_ctor_set_tag(v___x_26_, 1);
lean_ctor_set(v___x_26_, 0, v_b_12_);
v___x_30_ = v___x_26_;
goto v_reusejp_29_;
}
else
{
lean_object* v_reuseFailAlloc_38_; 
v_reuseFailAlloc_38_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_38_, 0, v_b_12_);
v___x_30_ = v_reuseFailAlloc_38_;
goto v_reusejp_29_;
}
v_reusejp_29_:
{
lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_31_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_31_, 0, v_a_24_);
v___x_32_ = lean_unsigned_to_nat(3u);
v___x_33_ = lean_mk_empty_array_with_capacity(v___x_32_);
v___x_34_ = lean_array_push(v___x_33_, v___x_19_);
v___x_35_ = lean_array_push(v___x_34_, v___x_30_);
v___x_36_ = lean_array_push(v___x_35_, v___x_31_);
v___x_37_ = l_Lean_Meta_mkAppOptM(v___x_28_, v___x_36_, v_a_13_, v_a_14_, v_a_15_, v_a_16_);
return v___x_37_;
}
}
}
else
{
lean_dec_ref_known(v___x_19_, 1);
lean_dec_ref(v_b_12_);
return v___x_23_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___boxed(lean_object* v_a_40_, lean_object* v_b_41_, lean_object* v_a_42_, lean_object* v_a_43_, lean_object* v_a_44_, lean_object* v_a_45_, lean_object* v_a_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg(v_a_40_, v_b_41_, v_a_42_, v_a_43_, v_a_44_, v_a_45_);
lean_dec(v_a_45_);
lean_dec_ref(v_a_44_);
lean_dec(v_a_43_);
lean_dec_ref(v_a_42_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr(lean_object* v_a_48_, lean_object* v_b_49_, lean_object* v_a_50_, lean_object* v_a_51_, lean_object* v_a_52_, lean_object* v_a_53_, lean_object* v_a_54_, lean_object* v_a_55_){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg(v_a_48_, v_b_49_, v_a_52_, v_a_53_, v_a_54_, v_a_55_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___boxed(lean_object* v_a_58_, lean_object* v_b_59_, lean_object* v_a_60_, lean_object* v_a_61_, lean_object* v_a_62_, lean_object* v_a_63_, lean_object* v_a_64_, lean_object* v_a_65_, lean_object* v_a_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr(v_a_58_, v_b_59_, v_a_60_, v_a_61_, v_a_62_, v_a_63_, v_a_64_, v_a_65_);
lean_dec(v_a_65_);
lean_dec_ref(v_a_64_);
lean_dec(v_a_63_);
lean_dec_ref(v_a_62_);
lean_dec(v_a_61_);
lean_dec_ref(v_a_60_);
return v_res_67_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__1(void){
_start:
{
lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_69_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__0));
v___x_70_ = l_Lean_stringToMessageData(v___x_69_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg(lean_object* v_deMorgan_76_, lean_object* v_congruence_77_, lean_object* v_fn_78_, lean_object* v_unit_79_, lean_object* v_givens_80_, lean_object* v_parts_81_, lean_object* v_i_82_, lean_object* v_a_83_, lean_object* v_a_84_, lean_object* v_a_85_, lean_object* v_a_86_){
_start:
{
lean_object* v___x_88_; uint8_t v___x_89_; 
v___x_88_ = lean_array_get_size(v_parts_81_);
v___x_89_ = lean_nat_dec_lt(v_i_82_, v___x_88_);
if (v___x_89_ == 0)
{
lean_object* v___x_90_; lean_object* v___x_91_; 
lean_dec(v_unit_79_);
lean_dec(v_fn_78_);
lean_dec(v_congruence_77_);
lean_dec(v_deMorgan_76_);
v___x_90_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__1, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__1_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__1);
v___x_91_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_90_, v_a_83_, v_a_84_, v_a_85_, v_a_86_);
return v___x_91_;
}
else
{
lean_object* v___x_92_; lean_object* v_snd_93_; lean_object* v_snd_94_; lean_object* v___x_95_; lean_object* v___x_96_; uint8_t v___x_97_; 
v___x_92_ = lean_array_fget_borrowed(v_parts_81_, v_i_82_);
v_snd_93_ = lean_ctor_get(v___x_92_, 1);
v_snd_94_ = lean_ctor_get(v_snd_93_, 1);
v___x_95_ = lean_unsigned_to_nat(1u);
v___x_96_ = lean_nat_add(v_i_82_, v___x_95_);
v___x_97_ = lean_nat_dec_eq(v___x_96_, v___x_88_);
if (v___x_97_ == 0)
{
lean_object* v___x_98_; uint8_t v___x_99_; 
v___x_98_ = lean_array_get_size(v_givens_80_);
v___x_99_ = lean_nat_dec_lt(v_i_82_, v___x_98_);
if (v___x_99_ == 0)
{
lean_object* v___x_100_; lean_object* v___x_101_; 
lean_dec(v___x_96_);
lean_dec(v_unit_79_);
lean_dec(v_fn_78_);
lean_dec(v_congruence_77_);
lean_dec(v_deMorgan_76_);
v___x_100_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__1, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__1_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__1);
v___x_101_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_100_, v_a_83_, v_a_84_, v_a_85_, v_a_86_);
return v___x_101_;
}
else
{
lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v_tail_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; 
v___x_102_ = lean_array_fget_borrowed(v_givens_80_, v_i_82_);
lean_inc(v___x_96_);
v___x_103_ = l_Array_extract___redArg(v_givens_80_, v___x_96_, v___x_98_);
lean_inc(v_unit_79_);
lean_inc(v_fn_78_);
v_tail_104_ = lp_vampireReplay_Vampire_Reconstruct_junction(v_fn_78_, v_unit_79_, v___x_103_);
lean_inc(v___x_102_);
v___x_105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_105_, 0, v___x_102_);
v___x_106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_106_, 0, v_tail_104_);
v___x_107_ = lean_unsigned_to_nat(2u);
v___x_108_ = lean_mk_empty_array_with_capacity(v___x_107_);
lean_inc_ref(v___x_108_);
v___x_109_ = lean_array_push(v___x_108_, v___x_105_);
v___x_110_ = lean_array_push(v___x_109_, v___x_106_);
lean_inc(v_deMorgan_76_);
v___x_111_ = l_Lean_Meta_mkAppOptM(v_deMorgan_76_, v___x_110_, v_a_83_, v_a_84_, v_a_85_, v_a_86_);
if (lean_obj_tag(v___x_111_) == 0)
{
lean_object* v_a_112_; lean_object* v___x_113_; 
v_a_112_ = lean_ctor_get(v___x_111_, 0);
lean_inc(v_a_112_);
lean_dec_ref_known(v___x_111_, 1);
lean_inc(v_congruence_77_);
v___x_113_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg(v_deMorgan_76_, v_congruence_77_, v_fn_78_, v_unit_79_, v_givens_80_, v_parts_81_, v___x_96_, v_a_83_, v_a_84_, v_a_85_, v_a_86_);
lean_dec(v___x_96_);
if (lean_obj_tag(v___x_113_) == 0)
{
lean_object* v_a_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v_a_114_ = lean_ctor_get(v___x_113_, 0);
lean_inc(v_a_114_);
lean_dec_ref_known(v___x_113_, 1);
lean_inc(v_snd_94_);
lean_inc_ref(v___x_108_);
v___x_115_ = lean_array_push(v___x_108_, v_snd_94_);
v___x_116_ = lean_array_push(v___x_115_, v_a_114_);
v___x_117_ = l_Lean_Meta_mkAppM(v_congruence_77_, v___x_116_, v_a_83_, v_a_84_, v_a_85_, v_a_86_);
if (lean_obj_tag(v___x_117_) == 0)
{
lean_object* v_a_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; 
v_a_118_ = lean_ctor_get(v___x_117_, 0);
lean_inc(v_a_118_);
lean_dec_ref_known(v___x_117_, 1);
v___x_119_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__4));
v___x_120_ = lean_array_push(v___x_108_, v_a_112_);
v___x_121_ = lean_array_push(v___x_120_, v_a_118_);
v___x_122_ = l_Lean_Meta_mkAppM(v___x_119_, v___x_121_, v_a_83_, v_a_84_, v_a_85_, v_a_86_);
return v___x_122_;
}
else
{
lean_dec(v_a_112_);
lean_dec_ref(v___x_108_);
return v___x_117_;
}
}
else
{
lean_dec(v_a_112_);
lean_dec_ref(v___x_108_);
lean_dec(v_congruence_77_);
return v___x_113_;
}
}
else
{
lean_dec_ref(v___x_108_);
lean_dec(v___x_96_);
lean_dec(v_unit_79_);
lean_dec(v_fn_78_);
lean_dec(v_congruence_77_);
lean_dec(v_deMorgan_76_);
return v___x_111_;
}
}
}
else
{
lean_object* v___x_123_; 
lean_dec(v___x_96_);
lean_dec(v_unit_79_);
lean_dec(v_fn_78_);
lean_dec(v_congruence_77_);
lean_dec(v_deMorgan_76_);
lean_inc(v_snd_94_);
v___x_123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_123_, 0, v_snd_94_);
return v___x_123_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___boxed(lean_object* v_deMorgan_124_, lean_object* v_congruence_125_, lean_object* v_fn_126_, lean_object* v_unit_127_, lean_object* v_givens_128_, lean_object* v_parts_129_, lean_object* v_i_130_, lean_object* v_a_131_, lean_object* v_a_132_, lean_object* v_a_133_, lean_object* v_a_134_, lean_object* v_a_135_){
_start:
{
lean_object* v_res_136_; 
v_res_136_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg(v_deMorgan_124_, v_congruence_125_, v_fn_126_, v_unit_127_, v_givens_128_, v_parts_129_, v_i_130_, v_a_131_, v_a_132_, v_a_133_, v_a_134_);
lean_dec(v_a_134_);
lean_dec_ref(v_a_133_);
lean_dec(v_a_132_);
lean_dec_ref(v_a_131_);
lean_dec(v_i_130_);
lean_dec_ref(v_parts_129_);
lean_dec_ref(v_givens_128_);
return v_res_136_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed(lean_object* v_deMorgan_137_, lean_object* v_congruence_138_, lean_object* v_fn_139_, lean_object* v_unit_140_, lean_object* v_givens_141_, lean_object* v_parts_142_, lean_object* v_i_143_, lean_object* v_a_144_, lean_object* v_a_145_, lean_object* v_a_146_, lean_object* v_a_147_, lean_object* v_a_148_, lean_object* v_a_149_){
_start:
{
lean_object* v___x_151_; 
v___x_151_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg(v_deMorgan_137_, v_congruence_138_, v_fn_139_, v_unit_140_, v_givens_141_, v_parts_142_, v_i_143_, v_a_146_, v_a_147_, v_a_148_, v_a_149_);
return v___x_151_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___boxed(lean_object* v_deMorgan_152_, lean_object* v_congruence_153_, lean_object* v_fn_154_, lean_object* v_unit_155_, lean_object* v_givens_156_, lean_object* v_parts_157_, lean_object* v_i_158_, lean_object* v_a_159_, lean_object* v_a_160_, lean_object* v_a_161_, lean_object* v_a_162_, lean_object* v_a_163_, lean_object* v_a_164_, lean_object* v_a_165_){
_start:
{
lean_object* v_res_166_; 
v_res_166_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed(v_deMorgan_152_, v_congruence_153_, v_fn_154_, v_unit_155_, v_givens_156_, v_parts_157_, v_i_158_, v_a_159_, v_a_160_, v_a_161_, v_a_162_, v_a_163_, v_a_164_);
lean_dec(v_a_164_);
lean_dec_ref(v_a_163_);
lean_dec(v_a_162_);
lean_dec_ref(v_a_161_);
lean_dec(v_a_160_);
lean_dec_ref(v_a_159_);
lean_dec(v_i_158_);
lean_dec_ref(v_parts_157_);
lean_dec_ref(v_givens_156_);
return v_res_166_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0___closed__1(void){
_start:
{
lean_object* v___x_168_; lean_object* v___x_169_; 
v___x_168_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0___closed__0));
v___x_169_ = l_Lean_stringToMessageData(v___x_168_);
return v___x_169_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0(lean_object* v_f_170_, lean_object* v_i_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_){
_start:
{
lean_object* v___x_179_; lean_object* v___x_180_; uint8_t v___x_181_; 
v___x_179_ = lp_vampireReplay_Vampire_Formula_subformulas(v_f_170_);
v___x_180_ = lean_array_get_size(v___x_179_);
v___x_181_ = lean_nat_dec_lt(v_i_171_, v___x_180_);
if (v___x_181_ == 0)
{
lean_object* v___x_182_; lean_object* v___x_183_; 
lean_dec_ref(v___x_179_);
v___x_182_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0___closed__1);
v___x_183_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_182_, v___y_174_, v___y_175_, v___y_176_, v___y_177_);
return v___x_183_;
}
else
{
lean_object* v___x_184_; lean_object* v___x_185_; 
v___x_184_ = lean_array_fget(v___x_179_, v_i_171_);
lean_dec_ref(v___x_179_);
v___x_185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_185_, 0, v___x_184_);
return v___x_185_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0___boxed(lean_object* v_f_186_, lean_object* v_i_187_, lean_object* v___y_188_, lean_object* v___y_189_, lean_object* v___y_190_, lean_object* v___y_191_, lean_object* v___y_192_, lean_object* v___y_193_, lean_object* v___y_194_){
_start:
{
lean_object* v_res_195_; 
v_res_195_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0(v_f_186_, v_i_187_, v___y_188_, v___y_189_, v___y_190_, v___y_191_, v___y_192_, v___y_193_);
lean_dec(v___y_193_);
lean_dec_ref(v___y_192_);
lean_dec(v___y_191_);
lean_dec_ref(v___y_190_);
lean_dec(v___y_189_);
lean_dec_ref(v___y_188_);
lean_dec(v_i_187_);
return v_res_195_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Normalize_normalize_spec__2(size_t v_sz_196_, size_t v_i_197_, lean_object* v_bs_198_){
_start:
{
uint8_t v___x_199_; 
v___x_199_ = lean_usize_dec_lt(v_i_197_, v_sz_196_);
if (v___x_199_ == 0)
{
return v_bs_198_;
}
else
{
lean_object* v_v_200_; lean_object* v_snd_201_; lean_object* v_snd_202_; lean_object* v___x_203_; lean_object* v_bs_x27_204_; size_t v___x_205_; size_t v___x_206_; lean_object* v___x_207_; 
v_v_200_ = lean_array_uget_borrowed(v_bs_198_, v_i_197_);
v_snd_201_ = lean_ctor_get(v_v_200_, 1);
v_snd_202_ = lean_ctor_get(v_snd_201_, 1);
lean_inc(v_snd_202_);
v___x_203_ = lean_unsigned_to_nat(0u);
v_bs_x27_204_ = lean_array_uset(v_bs_198_, v_i_197_, v___x_203_);
v___x_205_ = ((size_t)1ULL);
v___x_206_ = lean_usize_add(v_i_197_, v___x_205_);
v___x_207_ = lean_array_uset(v_bs_x27_204_, v_i_197_, v_snd_202_);
v_i_197_ = v___x_206_;
v_bs_198_ = v___x_207_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Normalize_normalize_spec__2___boxed(lean_object* v_sz_209_, lean_object* v_i_210_, lean_object* v_bs_211_){
_start:
{
size_t v_sz_boxed_212_; size_t v_i_boxed_213_; lean_object* v_res_214_; 
v_sz_boxed_212_ = lean_unbox_usize(v_sz_209_);
lean_dec(v_sz_209_);
v_i_boxed_213_ = lean_unbox_usize(v_i_210_);
lean_dec(v_i_210_);
v_res_214_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Normalize_normalize_spec__2(v_sz_boxed_212_, v_i_boxed_213_, v_bs_211_);
return v_res_214_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Normalize_normalize_spec__1(size_t v_sz_215_, size_t v_i_216_, lean_object* v_bs_217_){
_start:
{
uint8_t v___x_218_; 
v___x_218_ = lean_usize_dec_lt(v_i_216_, v_sz_215_);
if (v___x_218_ == 0)
{
return v_bs_217_;
}
else
{
lean_object* v_v_219_; lean_object* v_snd_220_; lean_object* v_fst_221_; lean_object* v___x_222_; lean_object* v_bs_x27_223_; size_t v___x_224_; size_t v___x_225_; lean_object* v___x_226_; 
v_v_219_ = lean_array_uget_borrowed(v_bs_217_, v_i_216_);
v_snd_220_ = lean_ctor_get(v_v_219_, 1);
v_fst_221_ = lean_ctor_get(v_snd_220_, 0);
lean_inc(v_fst_221_);
v___x_222_ = lean_unsigned_to_nat(0u);
v_bs_x27_223_ = lean_array_uset(v_bs_217_, v_i_216_, v___x_222_);
v___x_224_ = ((size_t)1ULL);
v___x_225_ = lean_usize_add(v_i_216_, v___x_224_);
v___x_226_ = lean_array_uset(v_bs_x27_223_, v_i_216_, v_fst_221_);
v_i_216_ = v___x_225_;
v_bs_217_ = v___x_226_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Normalize_normalize_spec__1___boxed(lean_object* v_sz_228_, lean_object* v_i_229_, lean_object* v_bs_230_){
_start:
{
size_t v_sz_boxed_231_; size_t v_i_boxed_232_; lean_object* v_res_233_; 
v_sz_boxed_231_ = lean_unbox_usize(v_sz_228_);
lean_dec(v_sz_228_);
v_i_boxed_232_ = lean_unbox_usize(v_i_229_);
lean_dec(v_i_229_);
v_res_233_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Normalize_normalize_spec__1(v_sz_boxed_231_, v_i_boxed_232_, v_bs_230_);
return v_res_233_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__19(void){
_start:
{
lean_object* v___x_266_; lean_object* v___x_267_; 
v___x_266_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__18));
v___x_267_ = l_Lean_stringToMessageData(v___x_266_);
return v___x_267_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__37(void){
_start:
{
lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_306_ = lean_box(0);
v___x_307_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__17));
v___x_308_ = l_Lean_Expr_const___override(v___x_307_, v___x_306_);
return v___x_308_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__40(void){
_start:
{
lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_313_ = lean_box(0);
v___x_314_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__9));
v___x_315_ = l_Lean_Expr_const___override(v___x_314_, v___x_313_);
return v___x_315_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__42(void){
_start:
{
lean_object* v___x_317_; lean_object* v___x_318_; 
v___x_317_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__41));
v___x_318_ = l_Lean_stringToMessageData(v___x_317_);
return v___x_318_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__3(void){
_start:
{
lean_object* v___x_320_; lean_object* v___x_321_; 
v___x_320_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__2));
v___x_321_ = l_Lean_stringToMessageData(v___x_320_);
return v___x_321_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__10(void){
_start:
{
lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; 
v___x_331_ = lean_box(0);
v___x_332_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__1));
v___x_333_ = l_Lean_Expr_const___override(v___x_332_, v___x_331_);
return v___x_333_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0(lean_object* v_vars_341_, uint32_t v_fst_342_, uint8_t v_expand_343_, lean_object* v_sorts_344_, lean_object* v_body_345_, uint8_t v_polarity_346_, uint8_t v_isForall_347_, lean_object* v_tail_348_, lean_object* v_a_349_, lean_object* v_x_350_, lean_object* v___y_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_){
_start:
{
lean_object* v___x_358_; lean_object* v___x_359_; 
lean_inc_ref(v_x_350_);
v___x_358_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(v_vars_341_, v_fst_342_, v_x_350_);
v___x_359_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified(v_expand_343_, v_sorts_344_, v_body_345_, v_polarity_346_, v_isForall_347_, v_tail_348_, v___x_358_, v___y_351_, v___y_352_, v___y_353_, v___y_354_, v___y_355_, v___y_356_);
if (lean_obj_tag(v___x_359_) == 0)
{
lean_object* v_a_360_; lean_object* v___x_362_; uint8_t v_isShared_363_; uint8_t v_isSharedCheck_697_; 
v_a_360_ = lean_ctor_get(v___x_359_, 0);
v_isSharedCheck_697_ = !lean_is_exclusive(v___x_359_);
if (v_isSharedCheck_697_ == 0)
{
v___x_362_ = v___x_359_;
v_isShared_363_ = v_isSharedCheck_697_;
goto v_resetjp_361_;
}
else
{
lean_inc(v_a_360_);
lean_dec(v___x_359_);
v___x_362_ = lean_box(0);
v_isShared_363_ = v_isSharedCheck_697_;
goto v_resetjp_361_;
}
v_resetjp_361_:
{
lean_object* v_snd_364_; lean_object* v_fst_365_; lean_object* v___x_367_; uint8_t v_isShared_368_; uint8_t v_isSharedCheck_696_; 
v_snd_364_ = lean_ctor_get(v_a_360_, 1);
v_fst_365_ = lean_ctor_get(v_a_360_, 0);
v_isSharedCheck_696_ = !lean_is_exclusive(v_a_360_);
if (v_isSharedCheck_696_ == 0)
{
v___x_367_ = v_a_360_;
v_isShared_368_ = v_isSharedCheck_696_;
goto v_resetjp_366_;
}
else
{
lean_inc(v_snd_364_);
lean_inc(v_fst_365_);
lean_dec(v_a_360_);
v___x_367_ = lean_box(0);
v_isShared_368_ = v_isSharedCheck_696_;
goto v_resetjp_366_;
}
v_resetjp_366_:
{
lean_object* v_fst_369_; lean_object* v_snd_370_; lean_object* v___x_372_; uint8_t v_isShared_373_; uint8_t v_isSharedCheck_695_; 
v_fst_369_ = lean_ctor_get(v_snd_364_, 0);
v_snd_370_ = lean_ctor_get(v_snd_364_, 1);
v_isSharedCheck_695_ = !lean_is_exclusive(v_snd_364_);
if (v_isSharedCheck_695_ == 0)
{
v___x_372_ = v_snd_364_;
v_isShared_373_ = v_isSharedCheck_695_;
goto v_resetjp_371_;
}
else
{
lean_inc(v_snd_370_);
lean_inc(v_fst_369_);
lean_dec(v_snd_364_);
v___x_372_ = lean_box(0);
v_isShared_373_ = v_isSharedCheck_695_;
goto v_resetjp_371_;
}
v_resetjp_371_:
{
lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; uint8_t v___x_377_; uint8_t v___x_378_; uint8_t v___x_379_; lean_object* v___x_380_; 
v___x_374_ = lean_unsigned_to_nat(1u);
v___x_375_ = lean_mk_empty_array_with_capacity(v___x_374_);
lean_inc_ref(v___x_375_);
v___x_376_ = lean_array_push(v___x_375_, v_x_350_);
v___x_377_ = 0;
v___x_378_ = 1;
v___x_379_ = 1;
v___x_380_ = l_Lean_Meta_mkLambdaFVars(v___x_376_, v_snd_370_, v___x_377_, v___x_378_, v___x_377_, v___x_378_, v___x_379_, v___y_353_, v___y_354_, v___y_355_, v___y_356_);
if (lean_obj_tag(v___x_380_) == 0)
{
if (v_polarity_346_ == 0)
{
lean_object* v_a_381_; lean_object* v___x_382_; uint8_t v___x_383_; 
v_a_381_ = lean_ctor_get(v___x_380_, 0);
lean_inc(v_a_381_);
lean_dec_ref_known(v___x_380_, 1);
v___x_382_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__1));
v___x_383_ = l_Lean_Expr_isAppOfArity(v_fst_365_, v___x_382_, v___x_374_);
if (v___x_383_ == 0)
{
lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; 
lean_dec(v_a_381_);
lean_dec_ref(v___x_376_);
lean_dec_ref(v___x_375_);
lean_del_object(v___x_372_);
lean_dec(v_fst_369_);
lean_del_object(v___x_367_);
lean_del_object(v___x_362_);
lean_dec_ref(v_a_349_);
v___x_384_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__3, &lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__3);
v___x_385_ = l_Lean_indentExpr(v_fst_365_);
v___x_386_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_386_, 0, v___x_384_);
lean_ctor_set(v___x_386_, 1, v___x_385_);
v___x_387_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_386_, v___y_353_, v___y_354_, v___y_355_, v___y_356_);
return v___x_387_;
}
else
{
lean_object* v___x_388_; lean_object* v___x_389_; 
v___x_388_ = l_Lean_Expr_appArg_x21(v_fst_365_);
lean_dec(v_fst_365_);
lean_inc_ref(v___x_388_);
v___x_389_ = l_Lean_Meta_mkLambdaFVars(v___x_376_, v___x_388_, v___x_377_, v___x_378_, v___x_377_, v___x_378_, v___x_379_, v___y_353_, v___y_354_, v___y_355_, v___y_356_);
if (lean_obj_tag(v___x_389_) == 0)
{
if (v_isForall_347_ == 0)
{
lean_object* v_a_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; 
lean_dec_ref(v___x_388_);
v_a_390_ = lean_ctor_get(v___x_389_, 0);
lean_inc_n(v_a_390_, 2);
lean_dec_ref_known(v___x_389_, 1);
v___x_391_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__5));
lean_inc_ref(v___x_375_);
v___x_392_ = lean_array_push(v___x_375_, v_a_390_);
v___x_393_ = l_Lean_Meta_mkAppM(v___x_391_, v___x_392_, v___y_353_, v___y_354_, v___y_355_, v___y_356_);
if (lean_obj_tag(v___x_393_) == 0)
{
lean_object* v_a_394_; lean_object* v___x_395_; 
v_a_394_ = lean_ctor_get(v___x_393_, 0);
lean_inc(v_a_394_);
lean_dec_ref_known(v___x_393_, 1);
v___x_395_ = l_Lean_Meta_mkForallFVars(v___x_376_, v_fst_369_, v___x_377_, v___x_378_, v___x_378_, v___x_379_, v___y_353_, v___y_354_, v___y_355_, v___y_356_);
lean_dec_ref(v___x_376_);
if (lean_obj_tag(v___x_395_) == 0)
{
lean_object* v_a_396_; lean_object* v___x_397_; lean_object* v___x_399_; 
v_a_396_ = lean_ctor_get(v___x_395_, 0);
lean_inc(v_a_396_);
lean_dec_ref_known(v___x_395_, 1);
v___x_397_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__7));
if (v_isShared_363_ == 0)
{
lean_ctor_set_tag(v___x_362_, 1);
lean_ctor_set(v___x_362_, 0, v_a_349_);
v___x_399_ = v___x_362_;
goto v_reusejp_398_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v_a_349_);
v___x_399_ = v_reuseFailAlloc_455_;
goto v_reusejp_398_;
}
v_reusejp_398_:
{
lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; 
v___x_400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_400_, 0, v_a_390_);
v___x_401_ = lean_unsigned_to_nat(2u);
v___x_402_ = lean_mk_empty_array_with_capacity(v___x_401_);
lean_inc_ref(v___x_402_);
v___x_403_ = lean_array_push(v___x_402_, v___x_399_);
v___x_404_ = lean_array_push(v___x_403_, v___x_400_);
v___x_405_ = l_Lean_Meta_mkAppOptM(v___x_397_, v___x_404_, v___y_353_, v___y_354_, v___y_355_, v___y_356_);
if (lean_obj_tag(v___x_405_) == 0)
{
lean_object* v_a_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; 
v_a_406_ = lean_ctor_get(v___x_405_, 0);
lean_inc(v_a_406_);
lean_dec_ref_known(v___x_405_, 1);
v___x_407_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__9));
v___x_408_ = lean_array_push(v___x_375_, v_a_381_);
v___x_409_ = l_Lean_Meta_mkAppM(v___x_407_, v___x_408_, v___y_353_, v___y_354_, v___y_355_, v___y_356_);
if (lean_obj_tag(v___x_409_) == 0)
{
lean_object* v_a_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; 
v_a_410_ = lean_ctor_get(v___x_409_, 0);
lean_inc(v_a_410_);
lean_dec_ref_known(v___x_409_, 1);
v___x_411_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__4));
v___x_412_ = lean_array_push(v___x_402_, v_a_406_);
v___x_413_ = lean_array_push(v___x_412_, v_a_410_);
v___x_414_ = l_Lean_Meta_mkAppM(v___x_411_, v___x_413_, v___y_353_, v___y_354_, v___y_355_, v___y_356_);
if (lean_obj_tag(v___x_414_) == 0)
{
lean_object* v_a_415_; lean_object* v___x_417_; uint8_t v_isShared_418_; uint8_t v_isSharedCheck_430_; 
v_a_415_ = lean_ctor_get(v___x_414_, 0);
v_isSharedCheck_430_ = !lean_is_exclusive(v___x_414_);
if (v_isSharedCheck_430_ == 0)
{
v___x_417_ = v___x_414_;
v_isShared_418_ = v_isSharedCheck_430_;
goto v_resetjp_416_;
}
else
{
lean_inc(v_a_415_);
lean_dec(v___x_414_);
v___x_417_ = lean_box(0);
v_isShared_418_ = v_isSharedCheck_430_;
goto v_resetjp_416_;
}
v_resetjp_416_:
{
lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_422_; 
v___x_419_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__10, &lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__10_once, _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__10);
v___x_420_ = l_Lean_Expr_app___override(v___x_419_, v_a_394_);
if (v_isShared_373_ == 0)
{
lean_ctor_set(v___x_372_, 1, v_a_415_);
lean_ctor_set(v___x_372_, 0, v_a_396_);
v___x_422_ = v___x_372_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_429_; 
v_reuseFailAlloc_429_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_429_, 0, v_a_396_);
lean_ctor_set(v_reuseFailAlloc_429_, 1, v_a_415_);
v___x_422_ = v_reuseFailAlloc_429_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
lean_object* v___x_424_; 
if (v_isShared_368_ == 0)
{
lean_ctor_set(v___x_367_, 1, v___x_422_);
lean_ctor_set(v___x_367_, 0, v___x_420_);
v___x_424_ = v___x_367_;
goto v_reusejp_423_;
}
else
{
lean_object* v_reuseFailAlloc_428_; 
v_reuseFailAlloc_428_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_428_, 0, v___x_420_);
lean_ctor_set(v_reuseFailAlloc_428_, 1, v___x_422_);
v___x_424_ = v_reuseFailAlloc_428_;
goto v_reusejp_423_;
}
v_reusejp_423_:
{
lean_object* v___x_426_; 
if (v_isShared_418_ == 0)
{
lean_ctor_set(v___x_417_, 0, v___x_424_);
v___x_426_ = v___x_417_;
goto v_reusejp_425_;
}
else
{
lean_object* v_reuseFailAlloc_427_; 
v_reuseFailAlloc_427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_427_, 0, v___x_424_);
v___x_426_ = v_reuseFailAlloc_427_;
goto v_reusejp_425_;
}
v_reusejp_425_:
{
return v___x_426_;
}
}
}
}
}
else
{
lean_object* v_a_431_; lean_object* v___x_433_; uint8_t v_isShared_434_; uint8_t v_isSharedCheck_438_; 
lean_dec(v_a_396_);
lean_dec(v_a_394_);
lean_del_object(v___x_372_);
lean_del_object(v___x_367_);
v_a_431_ = lean_ctor_get(v___x_414_, 0);
v_isSharedCheck_438_ = !lean_is_exclusive(v___x_414_);
if (v_isSharedCheck_438_ == 0)
{
v___x_433_ = v___x_414_;
v_isShared_434_ = v_isSharedCheck_438_;
goto v_resetjp_432_;
}
else
{
lean_inc(v_a_431_);
lean_dec(v___x_414_);
v___x_433_ = lean_box(0);
v_isShared_434_ = v_isSharedCheck_438_;
goto v_resetjp_432_;
}
v_resetjp_432_:
{
lean_object* v___x_436_; 
if (v_isShared_434_ == 0)
{
v___x_436_ = v___x_433_;
goto v_reusejp_435_;
}
else
{
lean_object* v_reuseFailAlloc_437_; 
v_reuseFailAlloc_437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_437_, 0, v_a_431_);
v___x_436_ = v_reuseFailAlloc_437_;
goto v_reusejp_435_;
}
v_reusejp_435_:
{
return v___x_436_;
}
}
}
}
else
{
lean_object* v_a_439_; lean_object* v___x_441_; uint8_t v_isShared_442_; uint8_t v_isSharedCheck_446_; 
lean_dec(v_a_406_);
lean_dec_ref(v___x_402_);
lean_dec(v_a_396_);
lean_dec(v_a_394_);
lean_del_object(v___x_372_);
lean_del_object(v___x_367_);
v_a_439_ = lean_ctor_get(v___x_409_, 0);
v_isSharedCheck_446_ = !lean_is_exclusive(v___x_409_);
if (v_isSharedCheck_446_ == 0)
{
v___x_441_ = v___x_409_;
v_isShared_442_ = v_isSharedCheck_446_;
goto v_resetjp_440_;
}
else
{
lean_inc(v_a_439_);
lean_dec(v___x_409_);
v___x_441_ = lean_box(0);
v_isShared_442_ = v_isSharedCheck_446_;
goto v_resetjp_440_;
}
v_resetjp_440_:
{
lean_object* v___x_444_; 
if (v_isShared_442_ == 0)
{
v___x_444_ = v___x_441_;
goto v_reusejp_443_;
}
else
{
lean_object* v_reuseFailAlloc_445_; 
v_reuseFailAlloc_445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_445_, 0, v_a_439_);
v___x_444_ = v_reuseFailAlloc_445_;
goto v_reusejp_443_;
}
v_reusejp_443_:
{
return v___x_444_;
}
}
}
}
else
{
lean_object* v_a_447_; lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_454_; 
lean_dec_ref(v___x_402_);
lean_dec(v_a_396_);
lean_dec(v_a_394_);
lean_dec(v_a_381_);
lean_dec_ref(v___x_375_);
lean_del_object(v___x_372_);
lean_del_object(v___x_367_);
v_a_447_ = lean_ctor_get(v___x_405_, 0);
v_isSharedCheck_454_ = !lean_is_exclusive(v___x_405_);
if (v_isSharedCheck_454_ == 0)
{
v___x_449_ = v___x_405_;
v_isShared_450_ = v_isSharedCheck_454_;
goto v_resetjp_448_;
}
else
{
lean_inc(v_a_447_);
lean_dec(v___x_405_);
v___x_449_ = lean_box(0);
v_isShared_450_ = v_isSharedCheck_454_;
goto v_resetjp_448_;
}
v_resetjp_448_:
{
lean_object* v___x_452_; 
if (v_isShared_450_ == 0)
{
v___x_452_ = v___x_449_;
goto v_reusejp_451_;
}
else
{
lean_object* v_reuseFailAlloc_453_; 
v_reuseFailAlloc_453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_453_, 0, v_a_447_);
v___x_452_ = v_reuseFailAlloc_453_;
goto v_reusejp_451_;
}
v_reusejp_451_:
{
return v___x_452_;
}
}
}
}
}
else
{
lean_object* v_a_456_; lean_object* v___x_458_; uint8_t v_isShared_459_; uint8_t v_isSharedCheck_463_; 
lean_dec(v_a_394_);
lean_dec(v_a_390_);
lean_dec(v_a_381_);
lean_dec_ref(v___x_375_);
lean_del_object(v___x_372_);
lean_del_object(v___x_367_);
lean_del_object(v___x_362_);
lean_dec_ref(v_a_349_);
v_a_456_ = lean_ctor_get(v___x_395_, 0);
v_isSharedCheck_463_ = !lean_is_exclusive(v___x_395_);
if (v_isSharedCheck_463_ == 0)
{
v___x_458_ = v___x_395_;
v_isShared_459_ = v_isSharedCheck_463_;
goto v_resetjp_457_;
}
else
{
lean_inc(v_a_456_);
lean_dec(v___x_395_);
v___x_458_ = lean_box(0);
v_isShared_459_ = v_isSharedCheck_463_;
goto v_resetjp_457_;
}
v_resetjp_457_:
{
lean_object* v___x_461_; 
if (v_isShared_459_ == 0)
{
v___x_461_ = v___x_458_;
goto v_reusejp_460_;
}
else
{
lean_object* v_reuseFailAlloc_462_; 
v_reuseFailAlloc_462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_462_, 0, v_a_456_);
v___x_461_ = v_reuseFailAlloc_462_;
goto v_reusejp_460_;
}
v_reusejp_460_:
{
return v___x_461_;
}
}
}
}
else
{
lean_object* v_a_464_; lean_object* v___x_466_; uint8_t v_isShared_467_; uint8_t v_isSharedCheck_471_; 
lean_dec(v_a_390_);
lean_dec(v_a_381_);
lean_dec_ref(v___x_376_);
lean_dec_ref(v___x_375_);
lean_del_object(v___x_372_);
lean_dec(v_fst_369_);
lean_del_object(v___x_367_);
lean_del_object(v___x_362_);
lean_dec_ref(v_a_349_);
v_a_464_ = lean_ctor_get(v___x_393_, 0);
v_isSharedCheck_471_ = !lean_is_exclusive(v___x_393_);
if (v_isSharedCheck_471_ == 0)
{
v___x_466_ = v___x_393_;
v_isShared_467_ = v_isSharedCheck_471_;
goto v_resetjp_465_;
}
else
{
lean_inc(v_a_464_);
lean_dec(v___x_393_);
v___x_466_ = lean_box(0);
v_isShared_467_ = v_isSharedCheck_471_;
goto v_resetjp_465_;
}
v_resetjp_465_:
{
lean_object* v___x_469_; 
if (v_isShared_467_ == 0)
{
v___x_469_ = v___x_466_;
goto v_reusejp_468_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v_a_464_);
v___x_469_ = v_reuseFailAlloc_470_;
goto v_reusejp_468_;
}
v_reusejp_468_:
{
return v___x_469_;
}
}
}
}
else
{
lean_object* v_a_472_; lean_object* v___x_473_; 
v_a_472_ = lean_ctor_get(v___x_389_, 0);
lean_inc(v_a_472_);
lean_dec_ref_known(v___x_389_, 1);
v___x_473_ = l_Lean_Meta_mkForallFVars(v___x_376_, v___x_388_, v___x_377_, v___x_378_, v___x_378_, v___x_379_, v___y_353_, v___y_354_, v___y_355_, v___y_356_);
if (lean_obj_tag(v___x_473_) == 0)
{
lean_object* v_a_474_; lean_object* v___x_475_; 
v_a_474_ = lean_ctor_get(v___x_473_, 0);
lean_inc(v_a_474_);
lean_dec_ref_known(v___x_473_, 1);
v___x_475_ = l_Lean_Meta_mkLambdaFVars(v___x_376_, v_fst_369_, v___x_377_, v___x_378_, v___x_377_, v___x_378_, v___x_379_, v___y_353_, v___y_354_, v___y_355_, v___y_356_);
lean_dec_ref(v___x_376_);
if (lean_obj_tag(v___x_475_) == 0)
{
lean_object* v_a_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; 
v_a_476_ = lean_ctor_get(v___x_475_, 0);
lean_inc(v_a_476_);
lean_dec_ref_known(v___x_475_, 1);
v___x_477_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__5));
lean_inc_ref(v___x_375_);
v___x_478_ = lean_array_push(v___x_375_, v_a_476_);
v___x_479_ = l_Lean_Meta_mkAppM(v___x_477_, v___x_478_, v___y_353_, v___y_354_, v___y_355_, v___y_356_);
if (lean_obj_tag(v___x_479_) == 0)
{
lean_object* v_a_480_; lean_object* v___x_481_; lean_object* v___x_483_; 
v_a_480_ = lean_ctor_get(v___x_479_, 0);
lean_inc(v_a_480_);
lean_dec_ref_known(v___x_479_, 1);
v___x_481_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__12));
if (v_isShared_363_ == 0)
{
lean_ctor_set_tag(v___x_362_, 1);
lean_ctor_set(v___x_362_, 0, v_a_349_);
v___x_483_ = v___x_362_;
goto v_reusejp_482_;
}
else
{
lean_object* v_reuseFailAlloc_539_; 
v_reuseFailAlloc_539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_539_, 0, v_a_349_);
v___x_483_ = v_reuseFailAlloc_539_;
goto v_reusejp_482_;
}
v_reusejp_482_:
{
lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; 
v___x_484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_484_, 0, v_a_472_);
v___x_485_ = lean_unsigned_to_nat(2u);
v___x_486_ = lean_mk_empty_array_with_capacity(v___x_485_);
lean_inc_ref(v___x_486_);
v___x_487_ = lean_array_push(v___x_486_, v___x_483_);
v___x_488_ = lean_array_push(v___x_487_, v___x_484_);
v___x_489_ = l_Lean_Meta_mkAppOptM(v___x_481_, v___x_488_, v___y_353_, v___y_354_, v___y_355_, v___y_356_);
if (lean_obj_tag(v___x_489_) == 0)
{
lean_object* v_a_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; 
v_a_490_ = lean_ctor_get(v___x_489_, 0);
lean_inc(v_a_490_);
lean_dec_ref_known(v___x_489_, 1);
v___x_491_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__14));
v___x_492_ = lean_array_push(v___x_375_, v_a_381_);
v___x_493_ = l_Lean_Meta_mkAppM(v___x_491_, v___x_492_, v___y_353_, v___y_354_, v___y_355_, v___y_356_);
if (lean_obj_tag(v___x_493_) == 0)
{
lean_object* v_a_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; 
v_a_494_ = lean_ctor_get(v___x_493_, 0);
lean_inc(v_a_494_);
lean_dec_ref_known(v___x_493_, 1);
v___x_495_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__4));
v___x_496_ = lean_array_push(v___x_486_, v_a_490_);
v___x_497_ = lean_array_push(v___x_496_, v_a_494_);
v___x_498_ = l_Lean_Meta_mkAppM(v___x_495_, v___x_497_, v___y_353_, v___y_354_, v___y_355_, v___y_356_);
if (lean_obj_tag(v___x_498_) == 0)
{
lean_object* v_a_499_; lean_object* v___x_501_; uint8_t v_isShared_502_; uint8_t v_isSharedCheck_514_; 
v_a_499_ = lean_ctor_get(v___x_498_, 0);
v_isSharedCheck_514_ = !lean_is_exclusive(v___x_498_);
if (v_isSharedCheck_514_ == 0)
{
v___x_501_ = v___x_498_;
v_isShared_502_ = v_isSharedCheck_514_;
goto v_resetjp_500_;
}
else
{
lean_inc(v_a_499_);
lean_dec(v___x_498_);
v___x_501_ = lean_box(0);
v_isShared_502_ = v_isSharedCheck_514_;
goto v_resetjp_500_;
}
v_resetjp_500_:
{
lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_506_; 
v___x_503_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__10, &lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__10_once, _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__10);
v___x_504_ = l_Lean_Expr_app___override(v___x_503_, v_a_474_);
if (v_isShared_373_ == 0)
{
lean_ctor_set(v___x_372_, 1, v_a_499_);
lean_ctor_set(v___x_372_, 0, v_a_480_);
v___x_506_ = v___x_372_;
goto v_reusejp_505_;
}
else
{
lean_object* v_reuseFailAlloc_513_; 
v_reuseFailAlloc_513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_513_, 0, v_a_480_);
lean_ctor_set(v_reuseFailAlloc_513_, 1, v_a_499_);
v___x_506_ = v_reuseFailAlloc_513_;
goto v_reusejp_505_;
}
v_reusejp_505_:
{
lean_object* v___x_508_; 
if (v_isShared_368_ == 0)
{
lean_ctor_set(v___x_367_, 1, v___x_506_);
lean_ctor_set(v___x_367_, 0, v___x_504_);
v___x_508_ = v___x_367_;
goto v_reusejp_507_;
}
else
{
lean_object* v_reuseFailAlloc_512_; 
v_reuseFailAlloc_512_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_512_, 0, v___x_504_);
lean_ctor_set(v_reuseFailAlloc_512_, 1, v___x_506_);
v___x_508_ = v_reuseFailAlloc_512_;
goto v_reusejp_507_;
}
v_reusejp_507_:
{
lean_object* v___x_510_; 
if (v_isShared_502_ == 0)
{
lean_ctor_set(v___x_501_, 0, v___x_508_);
v___x_510_ = v___x_501_;
goto v_reusejp_509_;
}
else
{
lean_object* v_reuseFailAlloc_511_; 
v_reuseFailAlloc_511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_511_, 0, v___x_508_);
v___x_510_ = v_reuseFailAlloc_511_;
goto v_reusejp_509_;
}
v_reusejp_509_:
{
return v___x_510_;
}
}
}
}
}
else
{
lean_object* v_a_515_; lean_object* v___x_517_; uint8_t v_isShared_518_; uint8_t v_isSharedCheck_522_; 
lean_dec(v_a_480_);
lean_dec(v_a_474_);
lean_del_object(v___x_372_);
lean_del_object(v___x_367_);
v_a_515_ = lean_ctor_get(v___x_498_, 0);
v_isSharedCheck_522_ = !lean_is_exclusive(v___x_498_);
if (v_isSharedCheck_522_ == 0)
{
v___x_517_ = v___x_498_;
v_isShared_518_ = v_isSharedCheck_522_;
goto v_resetjp_516_;
}
else
{
lean_inc(v_a_515_);
lean_dec(v___x_498_);
v___x_517_ = lean_box(0);
v_isShared_518_ = v_isSharedCheck_522_;
goto v_resetjp_516_;
}
v_resetjp_516_:
{
lean_object* v___x_520_; 
if (v_isShared_518_ == 0)
{
v___x_520_ = v___x_517_;
goto v_reusejp_519_;
}
else
{
lean_object* v_reuseFailAlloc_521_; 
v_reuseFailAlloc_521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_521_, 0, v_a_515_);
v___x_520_ = v_reuseFailAlloc_521_;
goto v_reusejp_519_;
}
v_reusejp_519_:
{
return v___x_520_;
}
}
}
}
else
{
lean_object* v_a_523_; lean_object* v___x_525_; uint8_t v_isShared_526_; uint8_t v_isSharedCheck_530_; 
lean_dec(v_a_490_);
lean_dec_ref(v___x_486_);
lean_dec(v_a_480_);
lean_dec(v_a_474_);
lean_del_object(v___x_372_);
lean_del_object(v___x_367_);
v_a_523_ = lean_ctor_get(v___x_493_, 0);
v_isSharedCheck_530_ = !lean_is_exclusive(v___x_493_);
if (v_isSharedCheck_530_ == 0)
{
v___x_525_ = v___x_493_;
v_isShared_526_ = v_isSharedCheck_530_;
goto v_resetjp_524_;
}
else
{
lean_inc(v_a_523_);
lean_dec(v___x_493_);
v___x_525_ = lean_box(0);
v_isShared_526_ = v_isSharedCheck_530_;
goto v_resetjp_524_;
}
v_resetjp_524_:
{
lean_object* v___x_528_; 
if (v_isShared_526_ == 0)
{
v___x_528_ = v___x_525_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_529_; 
v_reuseFailAlloc_529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_529_, 0, v_a_523_);
v___x_528_ = v_reuseFailAlloc_529_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
return v___x_528_;
}
}
}
}
else
{
lean_object* v_a_531_; lean_object* v___x_533_; uint8_t v_isShared_534_; uint8_t v_isSharedCheck_538_; 
lean_dec_ref(v___x_486_);
lean_dec(v_a_480_);
lean_dec(v_a_474_);
lean_dec(v_a_381_);
lean_dec_ref(v___x_375_);
lean_del_object(v___x_372_);
lean_del_object(v___x_367_);
v_a_531_ = lean_ctor_get(v___x_489_, 0);
v_isSharedCheck_538_ = !lean_is_exclusive(v___x_489_);
if (v_isSharedCheck_538_ == 0)
{
v___x_533_ = v___x_489_;
v_isShared_534_ = v_isSharedCheck_538_;
goto v_resetjp_532_;
}
else
{
lean_inc(v_a_531_);
lean_dec(v___x_489_);
v___x_533_ = lean_box(0);
v_isShared_534_ = v_isSharedCheck_538_;
goto v_resetjp_532_;
}
v_resetjp_532_:
{
lean_object* v___x_536_; 
if (v_isShared_534_ == 0)
{
v___x_536_ = v___x_533_;
goto v_reusejp_535_;
}
else
{
lean_object* v_reuseFailAlloc_537_; 
v_reuseFailAlloc_537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_537_, 0, v_a_531_);
v___x_536_ = v_reuseFailAlloc_537_;
goto v_reusejp_535_;
}
v_reusejp_535_:
{
return v___x_536_;
}
}
}
}
}
else
{
lean_object* v_a_540_; lean_object* v___x_542_; uint8_t v_isShared_543_; uint8_t v_isSharedCheck_547_; 
lean_dec(v_a_474_);
lean_dec(v_a_472_);
lean_dec(v_a_381_);
lean_dec_ref(v___x_375_);
lean_del_object(v___x_372_);
lean_del_object(v___x_367_);
lean_del_object(v___x_362_);
lean_dec_ref(v_a_349_);
v_a_540_ = lean_ctor_get(v___x_479_, 0);
v_isSharedCheck_547_ = !lean_is_exclusive(v___x_479_);
if (v_isSharedCheck_547_ == 0)
{
v___x_542_ = v___x_479_;
v_isShared_543_ = v_isSharedCheck_547_;
goto v_resetjp_541_;
}
else
{
lean_inc(v_a_540_);
lean_dec(v___x_479_);
v___x_542_ = lean_box(0);
v_isShared_543_ = v_isSharedCheck_547_;
goto v_resetjp_541_;
}
v_resetjp_541_:
{
lean_object* v___x_545_; 
if (v_isShared_543_ == 0)
{
v___x_545_ = v___x_542_;
goto v_reusejp_544_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v_a_540_);
v___x_545_ = v_reuseFailAlloc_546_;
goto v_reusejp_544_;
}
v_reusejp_544_:
{
return v___x_545_;
}
}
}
}
else
{
lean_object* v_a_548_; lean_object* v___x_550_; uint8_t v_isShared_551_; uint8_t v_isSharedCheck_555_; 
lean_dec(v_a_474_);
lean_dec(v_a_472_);
lean_dec(v_a_381_);
lean_dec_ref(v___x_375_);
lean_del_object(v___x_372_);
lean_del_object(v___x_367_);
lean_del_object(v___x_362_);
lean_dec_ref(v_a_349_);
v_a_548_ = lean_ctor_get(v___x_475_, 0);
v_isSharedCheck_555_ = !lean_is_exclusive(v___x_475_);
if (v_isSharedCheck_555_ == 0)
{
v___x_550_ = v___x_475_;
v_isShared_551_ = v_isSharedCheck_555_;
goto v_resetjp_549_;
}
else
{
lean_inc(v_a_548_);
lean_dec(v___x_475_);
v___x_550_ = lean_box(0);
v_isShared_551_ = v_isSharedCheck_555_;
goto v_resetjp_549_;
}
v_resetjp_549_:
{
lean_object* v___x_553_; 
if (v_isShared_551_ == 0)
{
v___x_553_ = v___x_550_;
goto v_reusejp_552_;
}
else
{
lean_object* v_reuseFailAlloc_554_; 
v_reuseFailAlloc_554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_554_, 0, v_a_548_);
v___x_553_ = v_reuseFailAlloc_554_;
goto v_reusejp_552_;
}
v_reusejp_552_:
{
return v___x_553_;
}
}
}
}
else
{
lean_object* v_a_556_; lean_object* v___x_558_; uint8_t v_isShared_559_; uint8_t v_isSharedCheck_563_; 
lean_dec(v_a_472_);
lean_dec(v_a_381_);
lean_dec_ref(v___x_376_);
lean_dec_ref(v___x_375_);
lean_del_object(v___x_372_);
lean_dec(v_fst_369_);
lean_del_object(v___x_367_);
lean_del_object(v___x_362_);
lean_dec_ref(v_a_349_);
v_a_556_ = lean_ctor_get(v___x_473_, 0);
v_isSharedCheck_563_ = !lean_is_exclusive(v___x_473_);
if (v_isSharedCheck_563_ == 0)
{
v___x_558_ = v___x_473_;
v_isShared_559_ = v_isSharedCheck_563_;
goto v_resetjp_557_;
}
else
{
lean_inc(v_a_556_);
lean_dec(v___x_473_);
v___x_558_ = lean_box(0);
v_isShared_559_ = v_isSharedCheck_563_;
goto v_resetjp_557_;
}
v_resetjp_557_:
{
lean_object* v___x_561_; 
if (v_isShared_559_ == 0)
{
v___x_561_ = v___x_558_;
goto v_reusejp_560_;
}
else
{
lean_object* v_reuseFailAlloc_562_; 
v_reuseFailAlloc_562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_562_, 0, v_a_556_);
v___x_561_ = v_reuseFailAlloc_562_;
goto v_reusejp_560_;
}
v_reusejp_560_:
{
return v___x_561_;
}
}
}
}
}
else
{
lean_object* v_a_564_; lean_object* v___x_566_; uint8_t v_isShared_567_; uint8_t v_isSharedCheck_571_; 
lean_dec_ref(v___x_388_);
lean_dec(v_a_381_);
lean_dec_ref(v___x_376_);
lean_dec_ref(v___x_375_);
lean_del_object(v___x_372_);
lean_dec(v_fst_369_);
lean_del_object(v___x_367_);
lean_del_object(v___x_362_);
lean_dec_ref(v_a_349_);
v_a_564_ = lean_ctor_get(v___x_389_, 0);
v_isSharedCheck_571_ = !lean_is_exclusive(v___x_389_);
if (v_isSharedCheck_571_ == 0)
{
v___x_566_ = v___x_389_;
v_isShared_567_ = v_isSharedCheck_571_;
goto v_resetjp_565_;
}
else
{
lean_inc(v_a_564_);
lean_dec(v___x_389_);
v___x_566_ = lean_box(0);
v_isShared_567_ = v_isSharedCheck_571_;
goto v_resetjp_565_;
}
v_resetjp_565_:
{
lean_object* v___x_569_; 
if (v_isShared_567_ == 0)
{
v___x_569_ = v___x_566_;
goto v_reusejp_568_;
}
else
{
lean_object* v_reuseFailAlloc_570_; 
v_reuseFailAlloc_570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_570_, 0, v_a_564_);
v___x_569_ = v_reuseFailAlloc_570_;
goto v_reusejp_568_;
}
v_reusejp_568_:
{
return v___x_569_;
}
}
}
}
}
else
{
lean_del_object(v___x_362_);
lean_dec_ref(v_a_349_);
if (v_isForall_347_ == 0)
{
lean_object* v_a_572_; lean_object* v___x_573_; 
v_a_572_ = lean_ctor_get(v___x_380_, 0);
lean_inc(v_a_572_);
lean_dec_ref_known(v___x_380_, 1);
v___x_573_ = l_Lean_Meta_mkLambdaFVars(v___x_376_, v_fst_365_, v___x_377_, v___x_378_, v___x_377_, v___x_378_, v___x_379_, v___y_353_, v___y_354_, v___y_355_, v___y_356_);
if (lean_obj_tag(v___x_573_) == 0)
{
lean_object* v_a_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; 
v_a_574_ = lean_ctor_get(v___x_573_, 0);
lean_inc(v_a_574_);
lean_dec_ref_known(v___x_573_, 1);
v___x_575_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__5));
lean_inc_ref(v___x_375_);
v___x_576_ = lean_array_push(v___x_375_, v_a_574_);
v___x_577_ = l_Lean_Meta_mkAppM(v___x_575_, v___x_576_, v___y_353_, v___y_354_, v___y_355_, v___y_356_);
if (lean_obj_tag(v___x_577_) == 0)
{
lean_object* v_a_578_; lean_object* v___x_579_; 
v_a_578_ = lean_ctor_get(v___x_577_, 0);
lean_inc(v_a_578_);
lean_dec_ref_known(v___x_577_, 1);
v___x_579_ = l_Lean_Meta_mkLambdaFVars(v___x_376_, v_fst_369_, v___x_377_, v___x_378_, v___x_377_, v___x_378_, v___x_379_, v___y_353_, v___y_354_, v___y_355_, v___y_356_);
lean_dec_ref(v___x_376_);
if (lean_obj_tag(v___x_579_) == 0)
{
lean_object* v_a_580_; lean_object* v___x_581_; lean_object* v___x_582_; 
v_a_580_ = lean_ctor_get(v___x_579_, 0);
lean_inc(v_a_580_);
lean_dec_ref_known(v___x_579_, 1);
lean_inc_ref(v___x_375_);
v___x_581_ = lean_array_push(v___x_375_, v_a_580_);
v___x_582_ = l_Lean_Meta_mkAppM(v___x_575_, v___x_581_, v___y_353_, v___y_354_, v___y_355_, v___y_356_);
if (lean_obj_tag(v___x_582_) == 0)
{
lean_object* v_a_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; 
v_a_583_ = lean_ctor_get(v___x_582_, 0);
lean_inc(v_a_583_);
lean_dec_ref_known(v___x_582_, 1);
v___x_584_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__14));
v___x_585_ = lean_array_push(v___x_375_, v_a_572_);
v___x_586_ = l_Lean_Meta_mkAppM(v___x_584_, v___x_585_, v___y_353_, v___y_354_, v___y_355_, v___y_356_);
if (lean_obj_tag(v___x_586_) == 0)
{
lean_object* v_a_587_; lean_object* v___x_589_; uint8_t v_isShared_590_; uint8_t v_isSharedCheck_600_; 
v_a_587_ = lean_ctor_get(v___x_586_, 0);
v_isSharedCheck_600_ = !lean_is_exclusive(v___x_586_);
if (v_isSharedCheck_600_ == 0)
{
v___x_589_ = v___x_586_;
v_isShared_590_ = v_isSharedCheck_600_;
goto v_resetjp_588_;
}
else
{
lean_inc(v_a_587_);
lean_dec(v___x_586_);
v___x_589_ = lean_box(0);
v_isShared_590_ = v_isSharedCheck_600_;
goto v_resetjp_588_;
}
v_resetjp_588_:
{
lean_object* v___x_592_; 
if (v_isShared_373_ == 0)
{
lean_ctor_set(v___x_372_, 1, v_a_587_);
lean_ctor_set(v___x_372_, 0, v_a_583_);
v___x_592_ = v___x_372_;
goto v_reusejp_591_;
}
else
{
lean_object* v_reuseFailAlloc_599_; 
v_reuseFailAlloc_599_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_599_, 0, v_a_583_);
lean_ctor_set(v_reuseFailAlloc_599_, 1, v_a_587_);
v___x_592_ = v_reuseFailAlloc_599_;
goto v_reusejp_591_;
}
v_reusejp_591_:
{
lean_object* v___x_594_; 
if (v_isShared_368_ == 0)
{
lean_ctor_set(v___x_367_, 1, v___x_592_);
lean_ctor_set(v___x_367_, 0, v_a_578_);
v___x_594_ = v___x_367_;
goto v_reusejp_593_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v_a_578_);
lean_ctor_set(v_reuseFailAlloc_598_, 1, v___x_592_);
v___x_594_ = v_reuseFailAlloc_598_;
goto v_reusejp_593_;
}
v_reusejp_593_:
{
lean_object* v___x_596_; 
if (v_isShared_590_ == 0)
{
lean_ctor_set(v___x_589_, 0, v___x_594_);
v___x_596_ = v___x_589_;
goto v_reusejp_595_;
}
else
{
lean_object* v_reuseFailAlloc_597_; 
v_reuseFailAlloc_597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_597_, 0, v___x_594_);
v___x_596_ = v_reuseFailAlloc_597_;
goto v_reusejp_595_;
}
v_reusejp_595_:
{
return v___x_596_;
}
}
}
}
}
else
{
lean_object* v_a_601_; lean_object* v___x_603_; uint8_t v_isShared_604_; uint8_t v_isSharedCheck_608_; 
lean_dec(v_a_583_);
lean_dec(v_a_578_);
lean_del_object(v___x_372_);
lean_del_object(v___x_367_);
v_a_601_ = lean_ctor_get(v___x_586_, 0);
v_isSharedCheck_608_ = !lean_is_exclusive(v___x_586_);
if (v_isSharedCheck_608_ == 0)
{
v___x_603_ = v___x_586_;
v_isShared_604_ = v_isSharedCheck_608_;
goto v_resetjp_602_;
}
else
{
lean_inc(v_a_601_);
lean_dec(v___x_586_);
v___x_603_ = lean_box(0);
v_isShared_604_ = v_isSharedCheck_608_;
goto v_resetjp_602_;
}
v_resetjp_602_:
{
lean_object* v___x_606_; 
if (v_isShared_604_ == 0)
{
v___x_606_ = v___x_603_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v_a_601_);
v___x_606_ = v_reuseFailAlloc_607_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
return v___x_606_;
}
}
}
}
else
{
lean_object* v_a_609_; lean_object* v___x_611_; uint8_t v_isShared_612_; uint8_t v_isSharedCheck_616_; 
lean_dec(v_a_578_);
lean_dec(v_a_572_);
lean_dec_ref(v___x_375_);
lean_del_object(v___x_372_);
lean_del_object(v___x_367_);
v_a_609_ = lean_ctor_get(v___x_582_, 0);
v_isSharedCheck_616_ = !lean_is_exclusive(v___x_582_);
if (v_isSharedCheck_616_ == 0)
{
v___x_611_ = v___x_582_;
v_isShared_612_ = v_isSharedCheck_616_;
goto v_resetjp_610_;
}
else
{
lean_inc(v_a_609_);
lean_dec(v___x_582_);
v___x_611_ = lean_box(0);
v_isShared_612_ = v_isSharedCheck_616_;
goto v_resetjp_610_;
}
v_resetjp_610_:
{
lean_object* v___x_614_; 
if (v_isShared_612_ == 0)
{
v___x_614_ = v___x_611_;
goto v_reusejp_613_;
}
else
{
lean_object* v_reuseFailAlloc_615_; 
v_reuseFailAlloc_615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_615_, 0, v_a_609_);
v___x_614_ = v_reuseFailAlloc_615_;
goto v_reusejp_613_;
}
v_reusejp_613_:
{
return v___x_614_;
}
}
}
}
else
{
lean_object* v_a_617_; lean_object* v___x_619_; uint8_t v_isShared_620_; uint8_t v_isSharedCheck_624_; 
lean_dec(v_a_578_);
lean_dec(v_a_572_);
lean_dec_ref(v___x_375_);
lean_del_object(v___x_372_);
lean_del_object(v___x_367_);
v_a_617_ = lean_ctor_get(v___x_579_, 0);
v_isSharedCheck_624_ = !lean_is_exclusive(v___x_579_);
if (v_isSharedCheck_624_ == 0)
{
v___x_619_ = v___x_579_;
v_isShared_620_ = v_isSharedCheck_624_;
goto v_resetjp_618_;
}
else
{
lean_inc(v_a_617_);
lean_dec(v___x_579_);
v___x_619_ = lean_box(0);
v_isShared_620_ = v_isSharedCheck_624_;
goto v_resetjp_618_;
}
v_resetjp_618_:
{
lean_object* v___x_622_; 
if (v_isShared_620_ == 0)
{
v___x_622_ = v___x_619_;
goto v_reusejp_621_;
}
else
{
lean_object* v_reuseFailAlloc_623_; 
v_reuseFailAlloc_623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_623_, 0, v_a_617_);
v___x_622_ = v_reuseFailAlloc_623_;
goto v_reusejp_621_;
}
v_reusejp_621_:
{
return v___x_622_;
}
}
}
}
else
{
lean_object* v_a_625_; lean_object* v___x_627_; uint8_t v_isShared_628_; uint8_t v_isSharedCheck_632_; 
lean_dec(v_a_572_);
lean_dec_ref(v___x_376_);
lean_dec_ref(v___x_375_);
lean_del_object(v___x_372_);
lean_dec(v_fst_369_);
lean_del_object(v___x_367_);
v_a_625_ = lean_ctor_get(v___x_577_, 0);
v_isSharedCheck_632_ = !lean_is_exclusive(v___x_577_);
if (v_isSharedCheck_632_ == 0)
{
v___x_627_ = v___x_577_;
v_isShared_628_ = v_isSharedCheck_632_;
goto v_resetjp_626_;
}
else
{
lean_inc(v_a_625_);
lean_dec(v___x_577_);
v___x_627_ = lean_box(0);
v_isShared_628_ = v_isSharedCheck_632_;
goto v_resetjp_626_;
}
v_resetjp_626_:
{
lean_object* v___x_630_; 
if (v_isShared_628_ == 0)
{
v___x_630_ = v___x_627_;
goto v_reusejp_629_;
}
else
{
lean_object* v_reuseFailAlloc_631_; 
v_reuseFailAlloc_631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_631_, 0, v_a_625_);
v___x_630_ = v_reuseFailAlloc_631_;
goto v_reusejp_629_;
}
v_reusejp_629_:
{
return v___x_630_;
}
}
}
}
else
{
lean_object* v_a_633_; lean_object* v___x_635_; uint8_t v_isShared_636_; uint8_t v_isSharedCheck_640_; 
lean_dec(v_a_572_);
lean_dec_ref(v___x_376_);
lean_dec_ref(v___x_375_);
lean_del_object(v___x_372_);
lean_dec(v_fst_369_);
lean_del_object(v___x_367_);
v_a_633_ = lean_ctor_get(v___x_573_, 0);
v_isSharedCheck_640_ = !lean_is_exclusive(v___x_573_);
if (v_isSharedCheck_640_ == 0)
{
v___x_635_ = v___x_573_;
v_isShared_636_ = v_isSharedCheck_640_;
goto v_resetjp_634_;
}
else
{
lean_inc(v_a_633_);
lean_dec(v___x_573_);
v___x_635_ = lean_box(0);
v_isShared_636_ = v_isSharedCheck_640_;
goto v_resetjp_634_;
}
v_resetjp_634_:
{
lean_object* v___x_638_; 
if (v_isShared_636_ == 0)
{
v___x_638_ = v___x_635_;
goto v_reusejp_637_;
}
else
{
lean_object* v_reuseFailAlloc_639_; 
v_reuseFailAlloc_639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_639_, 0, v_a_633_);
v___x_638_ = v_reuseFailAlloc_639_;
goto v_reusejp_637_;
}
v_reusejp_637_:
{
return v___x_638_;
}
}
}
}
else
{
lean_object* v_a_641_; lean_object* v___x_642_; 
v_a_641_ = lean_ctor_get(v___x_380_, 0);
lean_inc(v_a_641_);
lean_dec_ref_known(v___x_380_, 1);
v___x_642_ = l_Lean_Meta_mkForallFVars(v___x_376_, v_fst_365_, v___x_377_, v___x_378_, v___x_378_, v___x_379_, v___y_353_, v___y_354_, v___y_355_, v___y_356_);
if (lean_obj_tag(v___x_642_) == 0)
{
lean_object* v_a_643_; lean_object* v___x_644_; 
v_a_643_ = lean_ctor_get(v___x_642_, 0);
lean_inc(v_a_643_);
lean_dec_ref_known(v___x_642_, 1);
v___x_644_ = l_Lean_Meta_mkForallFVars(v___x_376_, v_fst_369_, v___x_377_, v___x_378_, v___x_378_, v___x_379_, v___y_353_, v___y_354_, v___y_355_, v___y_356_);
lean_dec_ref(v___x_376_);
if (lean_obj_tag(v___x_644_) == 0)
{
lean_object* v_a_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; 
v_a_645_ = lean_ctor_get(v___x_644_, 0);
lean_inc(v_a_645_);
lean_dec_ref_known(v___x_644_, 1);
v___x_646_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__9));
v___x_647_ = lean_array_push(v___x_375_, v_a_641_);
v___x_648_ = l_Lean_Meta_mkAppM(v___x_646_, v___x_647_, v___y_353_, v___y_354_, v___y_355_, v___y_356_);
if (lean_obj_tag(v___x_648_) == 0)
{
lean_object* v_a_649_; lean_object* v___x_651_; uint8_t v_isShared_652_; uint8_t v_isSharedCheck_662_; 
v_a_649_ = lean_ctor_get(v___x_648_, 0);
v_isSharedCheck_662_ = !lean_is_exclusive(v___x_648_);
if (v_isSharedCheck_662_ == 0)
{
v___x_651_ = v___x_648_;
v_isShared_652_ = v_isSharedCheck_662_;
goto v_resetjp_650_;
}
else
{
lean_inc(v_a_649_);
lean_dec(v___x_648_);
v___x_651_ = lean_box(0);
v_isShared_652_ = v_isSharedCheck_662_;
goto v_resetjp_650_;
}
v_resetjp_650_:
{
lean_object* v___x_654_; 
if (v_isShared_373_ == 0)
{
lean_ctor_set(v___x_372_, 1, v_a_649_);
lean_ctor_set(v___x_372_, 0, v_a_645_);
v___x_654_ = v___x_372_;
goto v_reusejp_653_;
}
else
{
lean_object* v_reuseFailAlloc_661_; 
v_reuseFailAlloc_661_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_661_, 0, v_a_645_);
lean_ctor_set(v_reuseFailAlloc_661_, 1, v_a_649_);
v___x_654_ = v_reuseFailAlloc_661_;
goto v_reusejp_653_;
}
v_reusejp_653_:
{
lean_object* v___x_656_; 
if (v_isShared_368_ == 0)
{
lean_ctor_set(v___x_367_, 1, v___x_654_);
lean_ctor_set(v___x_367_, 0, v_a_643_);
v___x_656_ = v___x_367_;
goto v_reusejp_655_;
}
else
{
lean_object* v_reuseFailAlloc_660_; 
v_reuseFailAlloc_660_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_660_, 0, v_a_643_);
lean_ctor_set(v_reuseFailAlloc_660_, 1, v___x_654_);
v___x_656_ = v_reuseFailAlloc_660_;
goto v_reusejp_655_;
}
v_reusejp_655_:
{
lean_object* v___x_658_; 
if (v_isShared_652_ == 0)
{
lean_ctor_set(v___x_651_, 0, v___x_656_);
v___x_658_ = v___x_651_;
goto v_reusejp_657_;
}
else
{
lean_object* v_reuseFailAlloc_659_; 
v_reuseFailAlloc_659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_659_, 0, v___x_656_);
v___x_658_ = v_reuseFailAlloc_659_;
goto v_reusejp_657_;
}
v_reusejp_657_:
{
return v___x_658_;
}
}
}
}
}
else
{
lean_object* v_a_663_; lean_object* v___x_665_; uint8_t v_isShared_666_; uint8_t v_isSharedCheck_670_; 
lean_dec(v_a_645_);
lean_dec(v_a_643_);
lean_del_object(v___x_372_);
lean_del_object(v___x_367_);
v_a_663_ = lean_ctor_get(v___x_648_, 0);
v_isSharedCheck_670_ = !lean_is_exclusive(v___x_648_);
if (v_isSharedCheck_670_ == 0)
{
v___x_665_ = v___x_648_;
v_isShared_666_ = v_isSharedCheck_670_;
goto v_resetjp_664_;
}
else
{
lean_inc(v_a_663_);
lean_dec(v___x_648_);
v___x_665_ = lean_box(0);
v_isShared_666_ = v_isSharedCheck_670_;
goto v_resetjp_664_;
}
v_resetjp_664_:
{
lean_object* v___x_668_; 
if (v_isShared_666_ == 0)
{
v___x_668_ = v___x_665_;
goto v_reusejp_667_;
}
else
{
lean_object* v_reuseFailAlloc_669_; 
v_reuseFailAlloc_669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_669_, 0, v_a_663_);
v___x_668_ = v_reuseFailAlloc_669_;
goto v_reusejp_667_;
}
v_reusejp_667_:
{
return v___x_668_;
}
}
}
}
else
{
lean_object* v_a_671_; lean_object* v___x_673_; uint8_t v_isShared_674_; uint8_t v_isSharedCheck_678_; 
lean_dec(v_a_643_);
lean_dec(v_a_641_);
lean_dec_ref(v___x_375_);
lean_del_object(v___x_372_);
lean_del_object(v___x_367_);
v_a_671_ = lean_ctor_get(v___x_644_, 0);
v_isSharedCheck_678_ = !lean_is_exclusive(v___x_644_);
if (v_isSharedCheck_678_ == 0)
{
v___x_673_ = v___x_644_;
v_isShared_674_ = v_isSharedCheck_678_;
goto v_resetjp_672_;
}
else
{
lean_inc(v_a_671_);
lean_dec(v___x_644_);
v___x_673_ = lean_box(0);
v_isShared_674_ = v_isSharedCheck_678_;
goto v_resetjp_672_;
}
v_resetjp_672_:
{
lean_object* v___x_676_; 
if (v_isShared_674_ == 0)
{
v___x_676_ = v___x_673_;
goto v_reusejp_675_;
}
else
{
lean_object* v_reuseFailAlloc_677_; 
v_reuseFailAlloc_677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_677_, 0, v_a_671_);
v___x_676_ = v_reuseFailAlloc_677_;
goto v_reusejp_675_;
}
v_reusejp_675_:
{
return v___x_676_;
}
}
}
}
else
{
lean_object* v_a_679_; lean_object* v___x_681_; uint8_t v_isShared_682_; uint8_t v_isSharedCheck_686_; 
lean_dec(v_a_641_);
lean_dec_ref(v___x_376_);
lean_dec_ref(v___x_375_);
lean_del_object(v___x_372_);
lean_dec(v_fst_369_);
lean_del_object(v___x_367_);
v_a_679_ = lean_ctor_get(v___x_642_, 0);
v_isSharedCheck_686_ = !lean_is_exclusive(v___x_642_);
if (v_isSharedCheck_686_ == 0)
{
v___x_681_ = v___x_642_;
v_isShared_682_ = v_isSharedCheck_686_;
goto v_resetjp_680_;
}
else
{
lean_inc(v_a_679_);
lean_dec(v___x_642_);
v___x_681_ = lean_box(0);
v_isShared_682_ = v_isSharedCheck_686_;
goto v_resetjp_680_;
}
v_resetjp_680_:
{
lean_object* v___x_684_; 
if (v_isShared_682_ == 0)
{
v___x_684_ = v___x_681_;
goto v_reusejp_683_;
}
else
{
lean_object* v_reuseFailAlloc_685_; 
v_reuseFailAlloc_685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_685_, 0, v_a_679_);
v___x_684_ = v_reuseFailAlloc_685_;
goto v_reusejp_683_;
}
v_reusejp_683_:
{
return v___x_684_;
}
}
}
}
}
}
else
{
lean_object* v_a_687_; lean_object* v___x_689_; uint8_t v_isShared_690_; uint8_t v_isSharedCheck_694_; 
lean_dec_ref(v___x_376_);
lean_dec_ref(v___x_375_);
lean_del_object(v___x_372_);
lean_dec(v_fst_369_);
lean_del_object(v___x_367_);
lean_dec(v_fst_365_);
lean_del_object(v___x_362_);
lean_dec_ref(v_a_349_);
v_a_687_ = lean_ctor_get(v___x_380_, 0);
v_isSharedCheck_694_ = !lean_is_exclusive(v___x_380_);
if (v_isSharedCheck_694_ == 0)
{
v___x_689_ = v___x_380_;
v_isShared_690_ = v_isSharedCheck_694_;
goto v_resetjp_688_;
}
else
{
lean_inc(v_a_687_);
lean_dec(v___x_380_);
v___x_689_ = lean_box(0);
v_isShared_690_ = v_isSharedCheck_694_;
goto v_resetjp_688_;
}
v_resetjp_688_:
{
lean_object* v___x_692_; 
if (v_isShared_690_ == 0)
{
v___x_692_ = v___x_689_;
goto v_reusejp_691_;
}
else
{
lean_object* v_reuseFailAlloc_693_; 
v_reuseFailAlloc_693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_693_, 0, v_a_687_);
v___x_692_ = v_reuseFailAlloc_693_;
goto v_reusejp_691_;
}
v_reusejp_691_:
{
return v___x_692_;
}
}
}
}
}
}
}
else
{
lean_dec_ref(v_x_350_);
lean_dec_ref(v_a_349_);
return v___x_359_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___boxed(lean_object** _args){
lean_object* v_vars_698_ = _args[0];
lean_object* v_fst_699_ = _args[1];
lean_object* v_expand_700_ = _args[2];
lean_object* v_sorts_701_ = _args[3];
lean_object* v_body_702_ = _args[4];
lean_object* v_polarity_703_ = _args[5];
lean_object* v_isForall_704_ = _args[6];
lean_object* v_tail_705_ = _args[7];
lean_object* v_a_706_ = _args[8];
lean_object* v_x_707_ = _args[9];
lean_object* v___y_708_ = _args[10];
lean_object* v___y_709_ = _args[11];
lean_object* v___y_710_ = _args[12];
lean_object* v___y_711_ = _args[13];
lean_object* v___y_712_ = _args[14];
lean_object* v___y_713_ = _args[15];
lean_object* v___y_714_ = _args[16];
_start:
{
uint32_t v_fst_130992__boxed_715_; uint8_t v_expand_boxed_716_; uint8_t v_polarity_boxed_717_; uint8_t v_isForall_boxed_718_; lean_object* v_res_719_; 
v_fst_130992__boxed_715_ = lean_unbox_uint32(v_fst_699_);
lean_dec(v_fst_699_);
v_expand_boxed_716_ = lean_unbox(v_expand_700_);
v_polarity_boxed_717_ = lean_unbox(v_polarity_703_);
v_isForall_boxed_718_ = lean_unbox(v_isForall_704_);
v_res_719_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0(v_vars_698_, v_fst_130992__boxed_715_, v_expand_boxed_716_, v_sorts_701_, v_body_702_, v_polarity_boxed_717_, v_isForall_boxed_718_, v_tail_705_, v_a_706_, v_x_707_, v___y_708_, v___y_709_, v___y_710_, v___y_711_, v___y_712_, v___y_713_);
lean_dec(v___y_713_);
lean_dec_ref(v___y_712_);
lean_dec(v___y_711_);
lean_dec_ref(v___y_710_);
lean_dec(v___y_709_);
lean_dec_ref(v___y_708_);
return v_res_719_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified(uint8_t v_expand_721_, lean_object* v_sorts_722_, lean_object* v_body_723_, uint8_t v_polarity_724_, uint8_t v_isForall_725_, lean_object* v_rest_726_, lean_object* v_vars_727_, lean_object* v_a_728_, lean_object* v_a_729_, lean_object* v_a_730_, lean_object* v_a_731_, lean_object* v_a_732_, lean_object* v_a_733_){
_start:
{
if (lean_obj_tag(v_rest_726_) == 0)
{
lean_object* v___x_735_; 
v___x_735_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize(v_expand_721_, v_sorts_722_, v_vars_727_, v_body_723_, v_polarity_724_, v_a_728_, v_a_729_, v_a_730_, v_a_731_, v_a_732_, v_a_733_);
return v___x_735_;
}
else
{
lean_object* v_head_736_; lean_object* v_tail_737_; lean_object* v_fst_738_; lean_object* v_snd_739_; lean_object* v___x_740_; 
v_head_736_ = lean_ctor_get(v_rest_726_, 0);
lean_inc(v_head_736_);
v_tail_737_ = lean_ctor_get(v_rest_726_, 1);
lean_inc(v_tail_737_);
lean_dec_ref_known(v_rest_726_, 2);
v_fst_738_ = lean_ctor_get(v_head_736_, 0);
lean_inc(v_fst_738_);
v_snd_739_ = lean_ctor_get(v_head_736_, 1);
lean_inc(v_snd_739_);
lean_dec(v_head_736_);
v___x_740_ = lp_vampireReplay_Vampire_Reconstruct_sortType(v_snd_739_, v_a_728_, v_a_729_, v_a_730_, v_a_731_, v_a_732_, v_a_733_);
if (lean_obj_tag(v___x_740_) == 0)
{
lean_object* v_a_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___f_745_; lean_object* v___x_746_; uint32_t v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; 
v_a_741_ = lean_ctor_get(v___x_740_, 0);
lean_inc_n(v_a_741_, 2);
lean_dec_ref_known(v___x_740_, 1);
v___x_742_ = lean_box(v_expand_721_);
v___x_743_ = lean_box(v_polarity_724_);
v___x_744_ = lean_box(v_isForall_725_);
lean_inc(v_fst_738_);
v___f_745_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___boxed), 17, 9);
lean_closure_set(v___f_745_, 0, v_vars_727_);
lean_closure_set(v___f_745_, 1, v_fst_738_);
lean_closure_set(v___f_745_, 2, v___x_742_);
lean_closure_set(v___f_745_, 3, v_sorts_722_);
lean_closure_set(v___f_745_, 4, v_body_723_);
lean_closure_set(v___f_745_, 5, v___x_743_);
lean_closure_set(v___f_745_, 6, v___x_744_);
lean_closure_set(v___f_745_, 7, v_tail_737_);
lean_closure_set(v___f_745_, 8, v_a_741_);
v___x_746_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___closed__0));
v___x_747_ = lean_unbox_uint32(v_fst_738_);
lean_dec(v_fst_738_);
v___x_748_ = lean_uint32_to_nat(v___x_747_);
v___x_749_ = l_Nat_reprFast(v___x_748_);
v___x_750_ = lean_string_append(v___x_746_, v___x_749_);
lean_dec_ref(v___x_749_);
v___x_751_ = lean_box(0);
v___x_752_ = l_Lean_Name_str___override(v___x_751_, v___x_750_);
v___x_753_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_752_, v_a_741_, v___f_745_, v_a_728_, v_a_729_, v_a_730_, v_a_731_, v_a_732_, v_a_733_);
return v___x_753_;
}
else
{
lean_object* v_a_754_; lean_object* v___x_756_; uint8_t v_isShared_757_; uint8_t v_isSharedCheck_761_; 
lean_dec(v_fst_738_);
lean_dec(v_tail_737_);
lean_dec_ref(v_vars_727_);
lean_dec_ref(v_body_723_);
lean_dec_ref(v_sorts_722_);
v_a_754_ = lean_ctor_get(v___x_740_, 0);
v_isSharedCheck_761_ = !lean_is_exclusive(v___x_740_);
if (v_isSharedCheck_761_ == 0)
{
v___x_756_ = v___x_740_;
v_isShared_757_ = v_isSharedCheck_761_;
goto v_resetjp_755_;
}
else
{
lean_inc(v_a_754_);
lean_dec(v___x_740_);
v___x_756_ = lean_box(0);
v_isShared_757_ = v_isSharedCheck_761_;
goto v_resetjp_755_;
}
v_resetjp_755_:
{
lean_object* v___x_759_; 
if (v_isShared_757_ == 0)
{
v___x_759_ = v___x_756_;
goto v_reusejp_758_;
}
else
{
lean_object* v_reuseFailAlloc_760_; 
v_reuseFailAlloc_760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_760_, 0, v_a_754_);
v___x_759_ = v_reuseFailAlloc_760_;
goto v_reusejp_758_;
}
v_reusejp_758_:
{
return v___x_759_;
}
}
}
}
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__45(void){
_start:
{
lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; 
v___x_766_ = lean_box(0);
v___x_767_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__15));
v___x_768_ = l_Lean_Expr_const___override(v___x_767_, v___x_766_);
return v___x_768_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__46(void){
_start:
{
lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; 
v___x_769_ = lean_box(0);
v___x_770_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__7));
v___x_771_ = l_Lean_Expr_const___override(v___x_770_, v___x_769_);
return v___x_771_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__57(void){
_start:
{
lean_object* v___x_788_; lean_object* v___x_789_; 
v___x_788_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__56));
v___x_789_ = l_Lean_stringToMessageData(v___x_788_);
return v___x_789_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize(uint8_t v_expand_790_, lean_object* v_sorts_791_, lean_object* v_vars_792_, lean_object* v_f_793_, uint8_t v_polarity_794_, lean_object* v_a_795_, lean_object* v_a_796_, lean_object* v_a_797_, lean_object* v_a_798_, lean_object* v_a_799_, lean_object* v_a_800_){
_start:
{
lean_object* v___y_803_; lean_object* v___y_804_; lean_object* v___y_805_; lean_object* v___y_810_; lean_object* v___y_811_; lean_object* v___y_812_; lean_object* v___y_813_; lean_object* v___y_814_; lean_object* v___y_815_; lean_object* v___y_816_; lean_object* v___y_817_; lean_object* v___y_818_; lean_object* v___y_845_; lean_object* v_____do__lift_846_; lean_object* v___y_851_; lean_object* v___y_852_; lean_object* v___y_853_; lean_object* v___y_854_; lean_object* v___y_855_; lean_object* v___y_856_; lean_object* v___y_857_; lean_object* v___y_858_; lean_object* v___y_859_; lean_object* v___y_860_; lean_object* v___y_861_; lean_object* v_fst_862_; lean_object* v_snd_863_; lean_object* v___y_884_; size_t v___y_885_; lean_object* v___y_886_; lean_object* v___y_887_; size_t v___y_888_; lean_object* v___y_889_; lean_object* v___y_890_; lean_object* v___y_891_; lean_object* v___y_892_; lean_object* v___y_893_; lean_object* v___y_894_; lean_object* v___y_916_; size_t v___y_917_; lean_object* v___y_918_; size_t v___y_919_; lean_object* v___y_920_; size_t v___y_921_; lean_object* v___y_922_; lean_object* v___y_923_; lean_object* v___y_924_; lean_object* v___y_925_; lean_object* v___y_926_; uint8_t v___y_927_; lean_object* v___y_928_; lean_object* v___y_929_; lean_object* v___y_930_; lean_object* v_fst_931_; lean_object* v_snd_932_; lean_object* v___y_956_; size_t v___y_957_; lean_object* v___y_958_; size_t v___y_959_; lean_object* v___y_960_; size_t v___y_961_; lean_object* v___y_962_; lean_object* v___y_963_; lean_object* v___y_964_; lean_object* v___y_965_; lean_object* v___y_966_; uint8_t v___y_967_; lean_object* v___y_968_; lean_object* v___y_969_; lean_object* v___y_970_; lean_object* v___y_974_; size_t v___y_975_; lean_object* v___y_976_; size_t v___y_977_; lean_object* v___y_978_; size_t v___y_979_; lean_object* v___y_980_; lean_object* v___y_981_; lean_object* v___y_982_; lean_object* v___y_983_; lean_object* v___y_984_; uint8_t v___y_985_; lean_object* v___y_986_; lean_object* v___y_987_; lean_object* v___y_988_; lean_object* v___y_992_; lean_object* v___y_993_; lean_object* v___y_994_; lean_object* v___y_995_; lean_object* v___y_996_; lean_object* v___y_997_; lean_object* v___y_998_; uint8_t v___y_999_; lean_object* v___x_1042_; 
lean_inc_ref(v_f_793_);
lean_inc_ref(v_vars_792_);
lean_inc_ref(v_sorts_791_);
v___x_1042_ = lp_vampireReplay_Vampire_Reconstruct_formula(v_sorts_791_, v_vars_792_, v_f_793_, v_a_795_, v_a_796_, v_a_797_, v_a_798_, v_a_799_, v_a_800_);
if (lean_obj_tag(v___x_1042_) == 0)
{
lean_object* v_a_1043_; lean_object* v___y_1045_; lean_object* v___y_1046_; lean_object* v___y_1047_; lean_object* v___y_1048_; lean_object* v___y_1049_; lean_object* v___y_1050_; lean_object* v___y_1051_; lean_object* v___y_1113_; lean_object* v___y_1114_; lean_object* v___y_1115_; lean_object* v___y_1116_; lean_object* v___y_1117_; lean_object* v___y_1118_; uint8_t v___y_1119_; lean_object* v___y_1137_; lean_object* v___y_1138_; lean_object* v___y_1139_; lean_object* v___y_1140_; lean_object* v___y_1141_; lean_object* v___y_1142_; uint8_t v___y_1143_; lean_object* v___y_1305_; lean_object* v___y_1306_; lean_object* v___y_1307_; lean_object* v___y_1308_; lean_object* v___y_1309_; uint8_t v___y_1310_; uint8_t v___x_1394_; lean_object* v___y_1396_; lean_object* v___y_1397_; lean_object* v___y_1398_; lean_object* v___y_1399_; lean_object* v___y_1400_; lean_object* v___y_1401_; lean_object* v___y_1415_; lean_object* v___y_1416_; lean_object* v___y_1417_; lean_object* v___y_1418_; lean_object* v___y_1419_; lean_object* v___y_1420_; lean_object* v___y_1421_; lean_object* v___y_1435_; lean_object* v___y_1436_; lean_object* v___y_1437_; lean_object* v___y_1438_; lean_object* v___y_1439_; lean_object* v___y_1440_; lean_object* v___y_1441_; lean_object* v___y_1442_; lean_object* v___y_1443_; lean_object* v___y_1444_; lean_object* v___y_1445_; lean_object* v___y_1446_; uint8_t v___y_1447_; lean_object* v___y_1626_; lean_object* v___y_1627_; lean_object* v___y_1628_; lean_object* v___y_1629_; lean_object* v___y_1630_; lean_object* v___y_1631_; lean_object* v___y_1632_; lean_object* v___y_1633_; lean_object* v___y_1634_; lean_object* v___y_1635_; lean_object* v___y_1636_; lean_object* v___y_1637_; uint8_t v___y_1638_; lean_object* v___y_1901_; lean_object* v___y_1902_; lean_object* v___y_1903_; lean_object* v___y_1904_; lean_object* v___y_1905_; lean_object* v___y_1906_; lean_object* v___y_1907_; lean_object* v___y_1908_; uint8_t v___y_1909_; lean_object* v___y_2003_; lean_object* v___y_2004_; lean_object* v___y_2005_; lean_object* v___y_2006_; lean_object* v___y_2007_; lean_object* v___y_2008_; lean_object* v___y_2009_; lean_object* v___y_2010_; lean_object* v___y_2024_; 
v_a_1043_ = lean_ctor_get(v___x_1042_, 0);
lean_inc(v_a_1043_);
lean_dec_ref_known(v___x_1042_, 1);
v___x_1394_ = 1;
if (v_polarity_794_ == 0)
{
lean_object* v___x_2169_; lean_object* v___x_2170_; 
v___x_2169_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__10, &lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__10_once, _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__10);
lean_inc(v_a_1043_);
v___x_2170_ = l_Lean_Expr_app___override(v___x_2169_, v_a_1043_);
v___y_2024_ = v___x_2170_;
goto v___jp_2023_;
}
else
{
lean_inc(v_a_1043_);
v___y_2024_ = v_a_1043_;
goto v___jp_2023_;
}
v___jp_1044_:
{
if (v_polarity_794_ == 0)
{
lean_dec_ref(v___y_1047_);
lean_dec(v___y_1045_);
if (v_expand_790_ == 0)
{
lean_object* v___x_1052_; uint8_t v___x_1053_; 
v___x_1052_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__17));
v___x_1053_ = l_Lean_Expr_isConstOf(v_a_1043_, v___x_1052_);
lean_dec(v_a_1043_);
if (v___x_1053_ == 0)
{
lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; 
v___x_1054_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__35));
v___x_1055_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__36));
v___x_1056_ = l_Lean_Meta_mkAppOptM(v___x_1054_, v___x_1055_, v___y_1048_, v___y_1049_, v___y_1050_, v___y_1051_);
if (lean_obj_tag(v___x_1056_) == 0)
{
lean_object* v_a_1057_; lean_object* v___x_1059_; uint8_t v_isShared_1060_; uint8_t v_isSharedCheck_1067_; 
v_a_1057_ = lean_ctor_get(v___x_1056_, 0);
v_isSharedCheck_1067_ = !lean_is_exclusive(v___x_1056_);
if (v_isSharedCheck_1067_ == 0)
{
v___x_1059_ = v___x_1056_;
v_isShared_1060_ = v_isSharedCheck_1067_;
goto v_resetjp_1058_;
}
else
{
lean_inc(v_a_1057_);
lean_dec(v___x_1056_);
v___x_1059_ = lean_box(0);
v_isShared_1060_ = v_isSharedCheck_1067_;
goto v_resetjp_1058_;
}
v_resetjp_1058_:
{
lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1065_; 
v___x_1061_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__37, &lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__37_once, _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__37);
v___x_1062_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1062_, 0, v___x_1061_);
lean_ctor_set(v___x_1062_, 1, v_a_1057_);
v___x_1063_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1063_, 0, v___y_1046_);
lean_ctor_set(v___x_1063_, 1, v___x_1062_);
if (v_isShared_1060_ == 0)
{
lean_ctor_set(v___x_1059_, 0, v___x_1063_);
v___x_1065_ = v___x_1059_;
goto v_reusejp_1064_;
}
else
{
lean_object* v_reuseFailAlloc_1066_; 
v_reuseFailAlloc_1066_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1066_, 0, v___x_1063_);
v___x_1065_ = v_reuseFailAlloc_1066_;
goto v_reusejp_1064_;
}
v_reusejp_1064_:
{
return v___x_1065_;
}
}
}
else
{
lean_object* v_a_1068_; lean_object* v___x_1070_; uint8_t v_isShared_1071_; uint8_t v_isSharedCheck_1075_; 
lean_dec_ref(v___y_1046_);
v_a_1068_ = lean_ctor_get(v___x_1056_, 0);
v_isSharedCheck_1075_ = !lean_is_exclusive(v___x_1056_);
if (v_isSharedCheck_1075_ == 0)
{
v___x_1070_ = v___x_1056_;
v_isShared_1071_ = v_isSharedCheck_1075_;
goto v_resetjp_1069_;
}
else
{
lean_inc(v_a_1068_);
lean_dec(v___x_1056_);
v___x_1070_ = lean_box(0);
v_isShared_1071_ = v_isSharedCheck_1075_;
goto v_resetjp_1069_;
}
v_resetjp_1069_:
{
lean_object* v___x_1073_; 
if (v_isShared_1071_ == 0)
{
v___x_1073_ = v___x_1070_;
goto v_reusejp_1072_;
}
else
{
lean_object* v_reuseFailAlloc_1074_; 
v_reuseFailAlloc_1074_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1074_, 0, v_a_1068_);
v___x_1073_ = v_reuseFailAlloc_1074_;
goto v_reusejp_1072_;
}
v_reusejp_1072_:
{
return v___x_1073_;
}
}
}
}
else
{
lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; 
v___x_1076_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__39));
v___x_1077_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__36));
v___x_1078_ = l_Lean_Meta_mkAppOptM(v___x_1076_, v___x_1077_, v___y_1048_, v___y_1049_, v___y_1050_, v___y_1051_);
if (lean_obj_tag(v___x_1078_) == 0)
{
lean_object* v_a_1079_; lean_object* v___x_1081_; uint8_t v_isShared_1082_; uint8_t v_isSharedCheck_1089_; 
v_a_1079_ = lean_ctor_get(v___x_1078_, 0);
v_isSharedCheck_1089_ = !lean_is_exclusive(v___x_1078_);
if (v_isSharedCheck_1089_ == 0)
{
v___x_1081_ = v___x_1078_;
v_isShared_1082_ = v_isSharedCheck_1089_;
goto v_resetjp_1080_;
}
else
{
lean_inc(v_a_1079_);
lean_dec(v___x_1078_);
v___x_1081_ = lean_box(0);
v_isShared_1082_ = v_isSharedCheck_1089_;
goto v_resetjp_1080_;
}
v_resetjp_1080_:
{
lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1087_; 
v___x_1083_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__40, &lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__40_once, _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__40);
v___x_1084_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1084_, 0, v___x_1083_);
lean_ctor_set(v___x_1084_, 1, v_a_1079_);
v___x_1085_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1085_, 0, v___y_1046_);
lean_ctor_set(v___x_1085_, 1, v___x_1084_);
if (v_isShared_1082_ == 0)
{
lean_ctor_set(v___x_1081_, 0, v___x_1085_);
v___x_1087_ = v___x_1081_;
goto v_reusejp_1086_;
}
else
{
lean_object* v_reuseFailAlloc_1088_; 
v_reuseFailAlloc_1088_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1088_, 0, v___x_1085_);
v___x_1087_ = v_reuseFailAlloc_1088_;
goto v_reusejp_1086_;
}
v_reusejp_1086_:
{
return v___x_1087_;
}
}
}
else
{
lean_object* v_a_1090_; lean_object* v___x_1092_; uint8_t v_isShared_1093_; uint8_t v_isSharedCheck_1097_; 
lean_dec_ref(v___y_1046_);
v_a_1090_ = lean_ctor_get(v___x_1078_, 0);
v_isSharedCheck_1097_ = !lean_is_exclusive(v___x_1078_);
if (v_isSharedCheck_1097_ == 0)
{
v___x_1092_ = v___x_1078_;
v_isShared_1093_ = v_isSharedCheck_1097_;
goto v_resetjp_1091_;
}
else
{
lean_inc(v_a_1090_);
lean_dec(v___x_1078_);
v___x_1092_ = lean_box(0);
v_isShared_1093_ = v_isSharedCheck_1097_;
goto v_resetjp_1091_;
}
v_resetjp_1091_:
{
lean_object* v___x_1095_; 
if (v_isShared_1093_ == 0)
{
v___x_1095_ = v___x_1092_;
goto v_reusejp_1094_;
}
else
{
lean_object* v_reuseFailAlloc_1096_; 
v_reuseFailAlloc_1096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1096_, 0, v_a_1090_);
v___x_1095_ = v_reuseFailAlloc_1096_;
goto v_reusejp_1094_;
}
v_reusejp_1094_:
{
return v___x_1095_;
}
}
}
}
}
else
{
lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; 
lean_dec(v_a_1043_);
v___x_1098_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__42, &lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__42_once, _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__42);
v___x_1099_ = l_Lean_indentExpr(v___y_1046_);
v___x_1100_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1100_, 0, v___x_1098_);
lean_ctor_set(v___x_1100_, 1, v___x_1099_);
v___x_1101_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1100_, v___y_1048_, v___y_1049_, v___y_1050_, v___y_1051_);
return v___x_1101_;
}
}
else
{
lean_object* v___x_1102_; 
lean_dec(v_a_1043_);
v___x_1102_ = l_Lean_Meta_mkAppOptM(v___y_1045_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_, v___y_1051_);
if (lean_obj_tag(v___x_1102_) == 0)
{
lean_object* v_a_1103_; 
v_a_1103_ = lean_ctor_get(v___x_1102_, 0);
lean_inc(v_a_1103_);
lean_dec_ref_known(v___x_1102_, 1);
v___y_845_ = v___y_1046_;
v_____do__lift_846_ = v_a_1103_;
goto v___jp_844_;
}
else
{
lean_object* v_a_1104_; lean_object* v___x_1106_; uint8_t v_isShared_1107_; uint8_t v_isSharedCheck_1111_; 
lean_dec_ref(v___y_1046_);
v_a_1104_ = lean_ctor_get(v___x_1102_, 0);
v_isSharedCheck_1111_ = !lean_is_exclusive(v___x_1102_);
if (v_isSharedCheck_1111_ == 0)
{
v___x_1106_ = v___x_1102_;
v_isShared_1107_ = v_isSharedCheck_1111_;
goto v_resetjp_1105_;
}
else
{
lean_inc(v_a_1104_);
lean_dec(v___x_1102_);
v___x_1106_ = lean_box(0);
v_isShared_1107_ = v_isSharedCheck_1111_;
goto v_resetjp_1105_;
}
v_resetjp_1105_:
{
lean_object* v___x_1109_; 
if (v_isShared_1107_ == 0)
{
v___x_1109_ = v___x_1106_;
goto v_reusejp_1108_;
}
else
{
lean_object* v_reuseFailAlloc_1110_; 
v_reuseFailAlloc_1110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1110_, 0, v_a_1104_);
v___x_1109_ = v_reuseFailAlloc_1110_;
goto v_reusejp_1108_;
}
v_reusejp_1108_:
{
return v___x_1109_;
}
}
}
}
}
v___jp_1112_:
{
lean_object* v___x_1120_; lean_object* v___x_1121_; 
v___x_1120_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_f_793_);
v___x_1121_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0(v_f_793_, v___x_1120_, v___y_1115_, v___y_1118_, v___y_1117_, v___y_1116_, v___y_1114_, v___y_1113_);
if (lean_obj_tag(v___x_1121_) == 0)
{
lean_object* v_a_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; 
v_a_1122_ = lean_ctor_get(v___x_1121_, 0);
lean_inc(v_a_1122_);
lean_dec_ref_known(v___x_1121_, 1);
v___x_1123_ = lp_vampireReplay_Vampire_Formula_boundVars(v_f_793_);
v___x_1124_ = lean_array_get_size(v___x_1123_);
v___x_1125_ = lp_vampireReplay_Array_filterMapM___at___00Vampire_Reconstruct_formula_spec__2(v_sorts_791_, v___x_1123_, v___x_1120_, v___x_1124_);
lean_dec_ref(v___x_1123_);
v___x_1126_ = lean_array_to_list(v___x_1125_);
v___x_1127_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified(v_expand_790_, v_sorts_791_, v_a_1122_, v_polarity_794_, v___y_1119_, v___x_1126_, v_vars_792_, v___y_1115_, v___y_1118_, v___y_1117_, v___y_1116_, v___y_1114_, v___y_1113_);
return v___x_1127_;
}
else
{
lean_object* v_a_1128_; lean_object* v___x_1130_; uint8_t v_isShared_1131_; uint8_t v_isSharedCheck_1135_; 
lean_dec_ref(v_f_793_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
v_a_1128_ = lean_ctor_get(v___x_1121_, 0);
v_isSharedCheck_1135_ = !lean_is_exclusive(v___x_1121_);
if (v_isSharedCheck_1135_ == 0)
{
v___x_1130_ = v___x_1121_;
v_isShared_1131_ = v_isSharedCheck_1135_;
goto v_resetjp_1129_;
}
else
{
lean_inc(v_a_1128_);
lean_dec(v___x_1121_);
v___x_1130_ = lean_box(0);
v_isShared_1131_ = v_isSharedCheck_1135_;
goto v_resetjp_1129_;
}
v_resetjp_1129_:
{
lean_object* v___x_1133_; 
if (v_isShared_1131_ == 0)
{
v___x_1133_ = v___x_1130_;
goto v_reusejp_1132_;
}
else
{
lean_object* v_reuseFailAlloc_1134_; 
v_reuseFailAlloc_1134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1134_, 0, v_a_1128_);
v___x_1133_ = v_reuseFailAlloc_1134_;
goto v_reusejp_1132_;
}
v_reusejp_1132_:
{
return v___x_1133_;
}
}
}
}
v___jp_1136_:
{
lean_object* v___x_1144_; 
lean_inc_ref(v_vars_792_);
lean_inc_ref(v_sorts_791_);
v___x_1144_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize(v_expand_790_, v_sorts_791_, v_vars_792_, v___y_1140_, v___y_1143_, v_a_795_, v_a_796_, v_a_797_, v_a_798_, v_a_799_, v_a_800_);
if (lean_obj_tag(v___x_1144_) == 0)
{
lean_object* v_a_1145_; lean_object* v___x_1147_; uint8_t v_isShared_1148_; uint8_t v_isSharedCheck_1303_; 
v_a_1145_ = lean_ctor_get(v___x_1144_, 0);
v_isSharedCheck_1303_ = !lean_is_exclusive(v___x_1144_);
if (v_isSharedCheck_1303_ == 0)
{
v___x_1147_ = v___x_1144_;
v_isShared_1148_ = v_isSharedCheck_1303_;
goto v_resetjp_1146_;
}
else
{
lean_inc(v_a_1145_);
lean_dec(v___x_1144_);
v___x_1147_ = lean_box(0);
v_isShared_1148_ = v_isSharedCheck_1303_;
goto v_resetjp_1146_;
}
v_resetjp_1146_:
{
lean_object* v_snd_1149_; lean_object* v_fst_1150_; lean_object* v_snd_1151_; lean_object* v___x_1152_; 
v_snd_1149_ = lean_ctor_get(v_a_1145_, 1);
lean_inc(v_snd_1149_);
lean_dec(v_a_1145_);
v_fst_1150_ = lean_ctor_get(v_snd_1149_, 0);
lean_inc(v_fst_1150_);
v_snd_1151_ = lean_ctor_get(v_snd_1149_, 1);
lean_inc(v_snd_1151_);
lean_dec(v_snd_1149_);
v___x_1152_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0(v_f_793_, v___y_1142_, v_a_795_, v_a_796_, v_a_797_, v_a_798_, v_a_799_, v_a_800_);
lean_dec(v___y_1142_);
if (lean_obj_tag(v___x_1152_) == 0)
{
lean_object* v_a_1153_; lean_object* v___x_1154_; 
v_a_1153_ = lean_ctor_get(v___x_1152_, 0);
lean_inc(v_a_1153_);
lean_dec_ref_known(v___x_1152_, 1);
v___x_1154_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize(v_expand_790_, v_sorts_791_, v_vars_792_, v_a_1153_, v_polarity_794_, v_a_795_, v_a_796_, v_a_797_, v_a_798_, v_a_799_, v_a_800_);
if (lean_obj_tag(v___x_1154_) == 0)
{
lean_object* v_a_1155_; lean_object* v___x_1157_; uint8_t v_isShared_1158_; uint8_t v_isSharedCheck_1294_; 
v_a_1155_ = lean_ctor_get(v___x_1154_, 0);
v_isSharedCheck_1294_ = !lean_is_exclusive(v___x_1154_);
if (v_isSharedCheck_1294_ == 0)
{
v___x_1157_ = v___x_1154_;
v_isShared_1158_ = v_isSharedCheck_1294_;
goto v_resetjp_1156_;
}
else
{
lean_inc(v_a_1155_);
lean_dec(v___x_1154_);
v___x_1157_ = lean_box(0);
v_isShared_1158_ = v_isSharedCheck_1294_;
goto v_resetjp_1156_;
}
v_resetjp_1156_:
{
lean_object* v_snd_1159_; lean_object* v___x_1161_; uint8_t v_isShared_1162_; uint8_t v_isSharedCheck_1292_; 
v_snd_1159_ = lean_ctor_get(v_a_1155_, 1);
v_isSharedCheck_1292_ = !lean_is_exclusive(v_a_1155_);
if (v_isSharedCheck_1292_ == 0)
{
lean_object* v_unused_1293_; 
v_unused_1293_ = lean_ctor_get(v_a_1155_, 0);
lean_dec(v_unused_1293_);
v___x_1161_ = v_a_1155_;
v_isShared_1162_ = v_isSharedCheck_1292_;
goto v_resetjp_1160_;
}
else
{
lean_inc(v_snd_1159_);
lean_dec(v_a_1155_);
v___x_1161_ = lean_box(0);
v_isShared_1162_ = v_isSharedCheck_1292_;
goto v_resetjp_1160_;
}
v_resetjp_1160_:
{
if (v_polarity_794_ == 0)
{
lean_object* v_fst_1163_; lean_object* v_snd_1164_; lean_object* v___x_1166_; uint8_t v_isShared_1167_; uint8_t v_isSharedCheck_1231_; 
v_fst_1163_ = lean_ctor_get(v_snd_1159_, 0);
v_snd_1164_ = lean_ctor_get(v_snd_1159_, 1);
v_isSharedCheck_1231_ = !lean_is_exclusive(v_snd_1159_);
if (v_isSharedCheck_1231_ == 0)
{
v___x_1166_ = v_snd_1159_;
v_isShared_1167_ = v_isSharedCheck_1231_;
goto v_resetjp_1165_;
}
else
{
lean_inc(v_snd_1164_);
lean_inc(v_fst_1163_);
lean_dec(v_snd_1159_);
v___x_1166_ = lean_box(0);
v_isShared_1167_ = v_isSharedCheck_1231_;
goto v_resetjp_1165_;
}
v_resetjp_1165_:
{
lean_object* v___x_1168_; lean_object* v___x_1170_; 
v___x_1168_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__44));
if (v_isShared_1158_ == 0)
{
lean_ctor_set_tag(v___x_1157_, 1);
lean_ctor_set(v___x_1157_, 0, v___y_1137_);
v___x_1170_ = v___x_1157_;
goto v_reusejp_1169_;
}
else
{
lean_object* v_reuseFailAlloc_1230_; 
v_reuseFailAlloc_1230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1230_, 0, v___y_1137_);
v___x_1170_ = v_reuseFailAlloc_1230_;
goto v_reusejp_1169_;
}
v_reusejp_1169_:
{
lean_object* v___x_1172_; 
if (v_isShared_1148_ == 0)
{
lean_ctor_set_tag(v___x_1147_, 1);
lean_ctor_set(v___x_1147_, 0, v___y_1139_);
v___x_1172_ = v___x_1147_;
goto v_reusejp_1171_;
}
else
{
lean_object* v_reuseFailAlloc_1229_; 
v_reuseFailAlloc_1229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1229_, 0, v___y_1139_);
v___x_1172_ = v_reuseFailAlloc_1229_;
goto v_reusejp_1171_;
}
v_reusejp_1171_:
{
lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; 
v___x_1173_ = lean_unsigned_to_nat(2u);
v___x_1174_ = lean_mk_empty_array_with_capacity(v___x_1173_);
lean_inc_ref(v___x_1174_);
v___x_1175_ = lean_array_push(v___x_1174_, v___x_1170_);
v___x_1176_ = lean_array_push(v___x_1175_, v___x_1172_);
v___x_1177_ = l_Lean_Meta_mkAppOptM(v___x_1168_, v___x_1176_, v_a_797_, v_a_798_, v_a_799_, v_a_800_);
if (lean_obj_tag(v___x_1177_) == 0)
{
lean_object* v_a_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; 
v_a_1178_ = lean_ctor_get(v___x_1177_, 0);
lean_inc(v_a_1178_);
lean_dec_ref_known(v___x_1177_, 1);
v___x_1179_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__5));
lean_inc_ref(v___x_1174_);
v___x_1180_ = lean_array_push(v___x_1174_, v_snd_1151_);
v___x_1181_ = lean_array_push(v___x_1180_, v_snd_1164_);
v___x_1182_ = l_Lean_Meta_mkAppM(v___x_1179_, v___x_1181_, v_a_797_, v_a_798_, v_a_799_, v_a_800_);
if (lean_obj_tag(v___x_1182_) == 0)
{
lean_object* v_a_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; 
v_a_1183_ = lean_ctor_get(v___x_1182_, 0);
lean_inc(v_a_1183_);
lean_dec_ref_known(v___x_1182_, 1);
v___x_1184_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__3));
lean_inc_ref(v___y_1138_);
v___x_1185_ = l_Lean_Name_mkStr2(v___y_1138_, v___x_1184_);
v___x_1186_ = lean_array_push(v___x_1174_, v_a_1178_);
v___x_1187_ = lean_array_push(v___x_1186_, v_a_1183_);
v___x_1188_ = l_Lean_Meta_mkAppM(v___x_1185_, v___x_1187_, v_a_797_, v_a_798_, v_a_799_, v_a_800_);
if (lean_obj_tag(v___x_1188_) == 0)
{
lean_object* v_a_1189_; lean_object* v___x_1191_; uint8_t v_isShared_1192_; uint8_t v_isSharedCheck_1204_; 
v_a_1189_ = lean_ctor_get(v___x_1188_, 0);
v_isSharedCheck_1204_ = !lean_is_exclusive(v___x_1188_);
if (v_isSharedCheck_1204_ == 0)
{
v___x_1191_ = v___x_1188_;
v_isShared_1192_ = v_isSharedCheck_1204_;
goto v_resetjp_1190_;
}
else
{
lean_inc(v_a_1189_);
lean_dec(v___x_1188_);
v___x_1191_ = lean_box(0);
v_isShared_1192_ = v_isSharedCheck_1204_;
goto v_resetjp_1190_;
}
v_resetjp_1190_:
{
lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1196_; 
v___x_1193_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__45, &lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__45_once, _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__45);
v___x_1194_ = l_Lean_mkAppB(v___x_1193_, v_fst_1150_, v_fst_1163_);
if (v_isShared_1167_ == 0)
{
lean_ctor_set(v___x_1166_, 1, v_a_1189_);
lean_ctor_set(v___x_1166_, 0, v___x_1194_);
v___x_1196_ = v___x_1166_;
goto v_reusejp_1195_;
}
else
{
lean_object* v_reuseFailAlloc_1203_; 
v_reuseFailAlloc_1203_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1203_, 0, v___x_1194_);
lean_ctor_set(v_reuseFailAlloc_1203_, 1, v_a_1189_);
v___x_1196_ = v_reuseFailAlloc_1203_;
goto v_reusejp_1195_;
}
v_reusejp_1195_:
{
lean_object* v___x_1198_; 
if (v_isShared_1162_ == 0)
{
lean_ctor_set(v___x_1161_, 1, v___x_1196_);
lean_ctor_set(v___x_1161_, 0, v___y_1141_);
v___x_1198_ = v___x_1161_;
goto v_reusejp_1197_;
}
else
{
lean_object* v_reuseFailAlloc_1202_; 
v_reuseFailAlloc_1202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1202_, 0, v___y_1141_);
lean_ctor_set(v_reuseFailAlloc_1202_, 1, v___x_1196_);
v___x_1198_ = v_reuseFailAlloc_1202_;
goto v_reusejp_1197_;
}
v_reusejp_1197_:
{
lean_object* v___x_1200_; 
if (v_isShared_1192_ == 0)
{
lean_ctor_set(v___x_1191_, 0, v___x_1198_);
v___x_1200_ = v___x_1191_;
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
lean_object* v_a_1205_; lean_object* v___x_1207_; uint8_t v_isShared_1208_; uint8_t v_isSharedCheck_1212_; 
lean_del_object(v___x_1166_);
lean_dec(v_fst_1163_);
lean_del_object(v___x_1161_);
lean_dec(v_fst_1150_);
lean_dec_ref(v___y_1141_);
v_a_1205_ = lean_ctor_get(v___x_1188_, 0);
v_isSharedCheck_1212_ = !lean_is_exclusive(v___x_1188_);
if (v_isSharedCheck_1212_ == 0)
{
v___x_1207_ = v___x_1188_;
v_isShared_1208_ = v_isSharedCheck_1212_;
goto v_resetjp_1206_;
}
else
{
lean_inc(v_a_1205_);
lean_dec(v___x_1188_);
v___x_1207_ = lean_box(0);
v_isShared_1208_ = v_isSharedCheck_1212_;
goto v_resetjp_1206_;
}
v_resetjp_1206_:
{
lean_object* v___x_1210_; 
if (v_isShared_1208_ == 0)
{
v___x_1210_ = v___x_1207_;
goto v_reusejp_1209_;
}
else
{
lean_object* v_reuseFailAlloc_1211_; 
v_reuseFailAlloc_1211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1211_, 0, v_a_1205_);
v___x_1210_ = v_reuseFailAlloc_1211_;
goto v_reusejp_1209_;
}
v_reusejp_1209_:
{
return v___x_1210_;
}
}
}
}
else
{
lean_object* v_a_1213_; lean_object* v___x_1215_; uint8_t v_isShared_1216_; uint8_t v_isSharedCheck_1220_; 
lean_dec(v_a_1178_);
lean_dec_ref(v___x_1174_);
lean_del_object(v___x_1166_);
lean_dec(v_fst_1163_);
lean_del_object(v___x_1161_);
lean_dec(v_fst_1150_);
lean_dec_ref(v___y_1141_);
v_a_1213_ = lean_ctor_get(v___x_1182_, 0);
v_isSharedCheck_1220_ = !lean_is_exclusive(v___x_1182_);
if (v_isSharedCheck_1220_ == 0)
{
v___x_1215_ = v___x_1182_;
v_isShared_1216_ = v_isSharedCheck_1220_;
goto v_resetjp_1214_;
}
else
{
lean_inc(v_a_1213_);
lean_dec(v___x_1182_);
v___x_1215_ = lean_box(0);
v_isShared_1216_ = v_isSharedCheck_1220_;
goto v_resetjp_1214_;
}
v_resetjp_1214_:
{
lean_object* v___x_1218_; 
if (v_isShared_1216_ == 0)
{
v___x_1218_ = v___x_1215_;
goto v_reusejp_1217_;
}
else
{
lean_object* v_reuseFailAlloc_1219_; 
v_reuseFailAlloc_1219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1219_, 0, v_a_1213_);
v___x_1218_ = v_reuseFailAlloc_1219_;
goto v_reusejp_1217_;
}
v_reusejp_1217_:
{
return v___x_1218_;
}
}
}
}
else
{
lean_object* v_a_1221_; lean_object* v___x_1223_; uint8_t v_isShared_1224_; uint8_t v_isSharedCheck_1228_; 
lean_dec_ref(v___x_1174_);
lean_del_object(v___x_1166_);
lean_dec(v_snd_1164_);
lean_dec(v_fst_1163_);
lean_del_object(v___x_1161_);
lean_dec(v_snd_1151_);
lean_dec(v_fst_1150_);
lean_dec_ref(v___y_1141_);
v_a_1221_ = lean_ctor_get(v___x_1177_, 0);
v_isSharedCheck_1228_ = !lean_is_exclusive(v___x_1177_);
if (v_isSharedCheck_1228_ == 0)
{
v___x_1223_ = v___x_1177_;
v_isShared_1224_ = v_isSharedCheck_1228_;
goto v_resetjp_1222_;
}
else
{
lean_inc(v_a_1221_);
lean_dec(v___x_1177_);
v___x_1223_ = lean_box(0);
v_isShared_1224_ = v_isSharedCheck_1228_;
goto v_resetjp_1222_;
}
v_resetjp_1222_:
{
lean_object* v___x_1226_; 
if (v_isShared_1224_ == 0)
{
v___x_1226_ = v___x_1223_;
goto v_reusejp_1225_;
}
else
{
lean_object* v_reuseFailAlloc_1227_; 
v_reuseFailAlloc_1227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1227_, 0, v_a_1221_);
v___x_1226_ = v_reuseFailAlloc_1227_;
goto v_reusejp_1225_;
}
v_reusejp_1225_:
{
return v___x_1226_;
}
}
}
}
}
}
}
else
{
lean_object* v_fst_1232_; lean_object* v_snd_1233_; lean_object* v___x_1235_; uint8_t v_isShared_1236_; uint8_t v_isSharedCheck_1291_; 
lean_del_object(v___x_1157_);
lean_del_object(v___x_1147_);
v_fst_1232_ = lean_ctor_get(v_snd_1159_, 0);
v_snd_1233_ = lean_ctor_get(v_snd_1159_, 1);
v_isSharedCheck_1291_ = !lean_is_exclusive(v_snd_1159_);
if (v_isSharedCheck_1291_ == 0)
{
v___x_1235_ = v_snd_1159_;
v_isShared_1236_ = v_isSharedCheck_1291_;
goto v_resetjp_1234_;
}
else
{
lean_inc(v_snd_1233_);
lean_inc(v_fst_1232_);
lean_dec(v_snd_1159_);
v___x_1235_ = lean_box(0);
v_isShared_1236_ = v_isSharedCheck_1291_;
goto v_resetjp_1234_;
}
v_resetjp_1234_:
{
lean_object* v___x_1237_; 
v___x_1237_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg(v___y_1137_, v___y_1139_, v_a_797_, v_a_798_, v_a_799_, v_a_800_);
if (lean_obj_tag(v___x_1237_) == 0)
{
lean_object* v_a_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; 
v_a_1238_ = lean_ctor_get(v___x_1237_, 0);
lean_inc(v_a_1238_);
lean_dec_ref_known(v___x_1237_, 1);
v___x_1239_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__13));
v___x_1240_ = lean_unsigned_to_nat(2u);
v___x_1241_ = lean_mk_empty_array_with_capacity(v___x_1240_);
lean_inc_ref(v___x_1241_);
v___x_1242_ = lean_array_push(v___x_1241_, v_snd_1151_);
v___x_1243_ = lean_array_push(v___x_1242_, v_snd_1233_);
v___x_1244_ = l_Lean_Meta_mkAppM(v___x_1239_, v___x_1243_, v_a_797_, v_a_798_, v_a_799_, v_a_800_);
if (lean_obj_tag(v___x_1244_) == 0)
{
lean_object* v_a_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; 
v_a_1245_ = lean_ctor_get(v___x_1244_, 0);
lean_inc(v_a_1245_);
lean_dec_ref_known(v___x_1244_, 1);
v___x_1246_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__3));
lean_inc_ref(v___y_1138_);
v___x_1247_ = l_Lean_Name_mkStr2(v___y_1138_, v___x_1246_);
v___x_1248_ = lean_array_push(v___x_1241_, v_a_1238_);
v___x_1249_ = lean_array_push(v___x_1248_, v_a_1245_);
v___x_1250_ = l_Lean_Meta_mkAppM(v___x_1247_, v___x_1249_, v_a_797_, v_a_798_, v_a_799_, v_a_800_);
if (lean_obj_tag(v___x_1250_) == 0)
{
lean_object* v_a_1251_; lean_object* v___x_1253_; uint8_t v_isShared_1254_; uint8_t v_isSharedCheck_1266_; 
v_a_1251_ = lean_ctor_get(v___x_1250_, 0);
v_isSharedCheck_1266_ = !lean_is_exclusive(v___x_1250_);
if (v_isSharedCheck_1266_ == 0)
{
v___x_1253_ = v___x_1250_;
v_isShared_1254_ = v_isSharedCheck_1266_;
goto v_resetjp_1252_;
}
else
{
lean_inc(v_a_1251_);
lean_dec(v___x_1250_);
v___x_1253_ = lean_box(0);
v_isShared_1254_ = v_isSharedCheck_1266_;
goto v_resetjp_1252_;
}
v_resetjp_1252_:
{
lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1258_; 
v___x_1255_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__46, &lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__46_once, _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__46);
v___x_1256_ = l_Lean_mkAppB(v___x_1255_, v_fst_1150_, v_fst_1232_);
if (v_isShared_1236_ == 0)
{
lean_ctor_set(v___x_1235_, 1, v_a_1251_);
lean_ctor_set(v___x_1235_, 0, v___x_1256_);
v___x_1258_ = v___x_1235_;
goto v_reusejp_1257_;
}
else
{
lean_object* v_reuseFailAlloc_1265_; 
v_reuseFailAlloc_1265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1265_, 0, v___x_1256_);
lean_ctor_set(v_reuseFailAlloc_1265_, 1, v_a_1251_);
v___x_1258_ = v_reuseFailAlloc_1265_;
goto v_reusejp_1257_;
}
v_reusejp_1257_:
{
lean_object* v___x_1260_; 
if (v_isShared_1162_ == 0)
{
lean_ctor_set(v___x_1161_, 1, v___x_1258_);
lean_ctor_set(v___x_1161_, 0, v___y_1141_);
v___x_1260_ = v___x_1161_;
goto v_reusejp_1259_;
}
else
{
lean_object* v_reuseFailAlloc_1264_; 
v_reuseFailAlloc_1264_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1264_, 0, v___y_1141_);
lean_ctor_set(v_reuseFailAlloc_1264_, 1, v___x_1258_);
v___x_1260_ = v_reuseFailAlloc_1264_;
goto v_reusejp_1259_;
}
v_reusejp_1259_:
{
lean_object* v___x_1262_; 
if (v_isShared_1254_ == 0)
{
lean_ctor_set(v___x_1253_, 0, v___x_1260_);
v___x_1262_ = v___x_1253_;
goto v_reusejp_1261_;
}
else
{
lean_object* v_reuseFailAlloc_1263_; 
v_reuseFailAlloc_1263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1263_, 0, v___x_1260_);
v___x_1262_ = v_reuseFailAlloc_1263_;
goto v_reusejp_1261_;
}
v_reusejp_1261_:
{
return v___x_1262_;
}
}
}
}
}
else
{
lean_object* v_a_1267_; lean_object* v___x_1269_; uint8_t v_isShared_1270_; uint8_t v_isSharedCheck_1274_; 
lean_del_object(v___x_1235_);
lean_dec(v_fst_1232_);
lean_del_object(v___x_1161_);
lean_dec(v_fst_1150_);
lean_dec_ref(v___y_1141_);
v_a_1267_ = lean_ctor_get(v___x_1250_, 0);
v_isSharedCheck_1274_ = !lean_is_exclusive(v___x_1250_);
if (v_isSharedCheck_1274_ == 0)
{
v___x_1269_ = v___x_1250_;
v_isShared_1270_ = v_isSharedCheck_1274_;
goto v_resetjp_1268_;
}
else
{
lean_inc(v_a_1267_);
lean_dec(v___x_1250_);
v___x_1269_ = lean_box(0);
v_isShared_1270_ = v_isSharedCheck_1274_;
goto v_resetjp_1268_;
}
v_resetjp_1268_:
{
lean_object* v___x_1272_; 
if (v_isShared_1270_ == 0)
{
v___x_1272_ = v___x_1269_;
goto v_reusejp_1271_;
}
else
{
lean_object* v_reuseFailAlloc_1273_; 
v_reuseFailAlloc_1273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1273_, 0, v_a_1267_);
v___x_1272_ = v_reuseFailAlloc_1273_;
goto v_reusejp_1271_;
}
v_reusejp_1271_:
{
return v___x_1272_;
}
}
}
}
else
{
lean_object* v_a_1275_; lean_object* v___x_1277_; uint8_t v_isShared_1278_; uint8_t v_isSharedCheck_1282_; 
lean_dec_ref(v___x_1241_);
lean_dec(v_a_1238_);
lean_del_object(v___x_1235_);
lean_dec(v_fst_1232_);
lean_del_object(v___x_1161_);
lean_dec(v_fst_1150_);
lean_dec_ref(v___y_1141_);
v_a_1275_ = lean_ctor_get(v___x_1244_, 0);
v_isSharedCheck_1282_ = !lean_is_exclusive(v___x_1244_);
if (v_isSharedCheck_1282_ == 0)
{
v___x_1277_ = v___x_1244_;
v_isShared_1278_ = v_isSharedCheck_1282_;
goto v_resetjp_1276_;
}
else
{
lean_inc(v_a_1275_);
lean_dec(v___x_1244_);
v___x_1277_ = lean_box(0);
v_isShared_1278_ = v_isSharedCheck_1282_;
goto v_resetjp_1276_;
}
v_resetjp_1276_:
{
lean_object* v___x_1280_; 
if (v_isShared_1278_ == 0)
{
v___x_1280_ = v___x_1277_;
goto v_reusejp_1279_;
}
else
{
lean_object* v_reuseFailAlloc_1281_; 
v_reuseFailAlloc_1281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1281_, 0, v_a_1275_);
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
lean_object* v_a_1283_; lean_object* v___x_1285_; uint8_t v_isShared_1286_; uint8_t v_isSharedCheck_1290_; 
lean_del_object(v___x_1235_);
lean_dec(v_snd_1233_);
lean_dec(v_fst_1232_);
lean_del_object(v___x_1161_);
lean_dec(v_snd_1151_);
lean_dec(v_fst_1150_);
lean_dec_ref(v___y_1141_);
v_a_1283_ = lean_ctor_get(v___x_1237_, 0);
v_isSharedCheck_1290_ = !lean_is_exclusive(v___x_1237_);
if (v_isSharedCheck_1290_ == 0)
{
v___x_1285_ = v___x_1237_;
v_isShared_1286_ = v_isSharedCheck_1290_;
goto v_resetjp_1284_;
}
else
{
lean_inc(v_a_1283_);
lean_dec(v___x_1237_);
v___x_1285_ = lean_box(0);
v_isShared_1286_ = v_isSharedCheck_1290_;
goto v_resetjp_1284_;
}
v_resetjp_1284_:
{
lean_object* v___x_1288_; 
if (v_isShared_1286_ == 0)
{
v___x_1288_ = v___x_1285_;
goto v_reusejp_1287_;
}
else
{
lean_object* v_reuseFailAlloc_1289_; 
v_reuseFailAlloc_1289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1289_, 0, v_a_1283_);
v___x_1288_ = v_reuseFailAlloc_1289_;
goto v_reusejp_1287_;
}
v_reusejp_1287_:
{
return v___x_1288_;
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
lean_dec(v_snd_1151_);
lean_dec(v_fst_1150_);
lean_del_object(v___x_1147_);
lean_dec_ref(v___y_1141_);
lean_dec_ref(v___y_1139_);
lean_dec_ref(v___y_1137_);
return v___x_1154_;
}
}
else
{
lean_object* v_a_1295_; lean_object* v___x_1297_; uint8_t v_isShared_1298_; uint8_t v_isSharedCheck_1302_; 
lean_dec(v_snd_1151_);
lean_dec(v_fst_1150_);
lean_del_object(v___x_1147_);
lean_dec_ref(v___y_1141_);
lean_dec_ref(v___y_1139_);
lean_dec_ref(v___y_1137_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
v_a_1295_ = lean_ctor_get(v___x_1152_, 0);
v_isSharedCheck_1302_ = !lean_is_exclusive(v___x_1152_);
if (v_isSharedCheck_1302_ == 0)
{
v___x_1297_ = v___x_1152_;
v_isShared_1298_ = v_isSharedCheck_1302_;
goto v_resetjp_1296_;
}
else
{
lean_inc(v_a_1295_);
lean_dec(v___x_1152_);
v___x_1297_ = lean_box(0);
v_isShared_1298_ = v_isSharedCheck_1302_;
goto v_resetjp_1296_;
}
v_resetjp_1296_:
{
lean_object* v___x_1300_; 
if (v_isShared_1298_ == 0)
{
v___x_1300_ = v___x_1297_;
goto v_reusejp_1299_;
}
else
{
lean_object* v_reuseFailAlloc_1301_; 
v_reuseFailAlloc_1301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1301_, 0, v_a_1295_);
v___x_1300_ = v_reuseFailAlloc_1301_;
goto v_reusejp_1299_;
}
v_reusejp_1299_:
{
return v___x_1300_;
}
}
}
}
}
else
{
lean_dec(v___y_1142_);
lean_dec_ref(v___y_1141_);
lean_dec_ref(v___y_1139_);
lean_dec_ref(v___y_1137_);
lean_dec_ref(v_f_793_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
return v___x_1144_;
}
}
v___jp_1304_:
{
lean_object* v___x_1311_; 
lean_inc_ref(v_vars_792_);
lean_inc_ref(v_sorts_791_);
v___x_1311_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize(v_expand_790_, v_sorts_791_, v_vars_792_, v___y_1309_, v___y_1310_, v_a_795_, v_a_796_, v_a_797_, v_a_798_, v_a_799_, v_a_800_);
if (lean_obj_tag(v___x_1311_) == 0)
{
lean_object* v_a_1312_; lean_object* v_snd_1313_; lean_object* v___x_1315_; uint8_t v_isShared_1316_; uint8_t v_isSharedCheck_1392_; 
v_a_1312_ = lean_ctor_get(v___x_1311_, 0);
lean_inc(v_a_1312_);
v_snd_1313_ = lean_ctor_get(v_a_1312_, 1);
v_isSharedCheck_1392_ = !lean_is_exclusive(v_a_1312_);
if (v_isSharedCheck_1392_ == 0)
{
lean_object* v_unused_1393_; 
v_unused_1393_ = lean_ctor_get(v_a_1312_, 0);
lean_dec(v_unused_1393_);
v___x_1315_ = v_a_1312_;
v_isShared_1316_ = v_isSharedCheck_1392_;
goto v_resetjp_1314_;
}
else
{
lean_inc(v_snd_1313_);
lean_dec(v_a_1312_);
v___x_1315_ = lean_box(0);
v_isShared_1316_ = v_isSharedCheck_1392_;
goto v_resetjp_1314_;
}
v_resetjp_1314_:
{
if (v_polarity_794_ == 0)
{
lean_object* v___x_1318_; uint8_t v_isShared_1319_; uint8_t v_isSharedCheck_1390_; 
v_isSharedCheck_1390_ = !lean_is_exclusive(v___x_1311_);
if (v_isSharedCheck_1390_ == 0)
{
lean_object* v_unused_1391_; 
v_unused_1391_ = lean_ctor_get(v___x_1311_, 0);
lean_dec(v_unused_1391_);
v___x_1318_ = v___x_1311_;
v_isShared_1319_ = v_isSharedCheck_1390_;
goto v_resetjp_1317_;
}
else
{
lean_dec(v___x_1311_);
v___x_1318_ = lean_box(0);
v_isShared_1319_ = v_isSharedCheck_1390_;
goto v_resetjp_1317_;
}
v_resetjp_1317_:
{
lean_object* v_fst_1320_; lean_object* v_snd_1321_; lean_object* v___x_1323_; uint8_t v_isShared_1324_; uint8_t v_isSharedCheck_1389_; 
v_fst_1320_ = lean_ctor_get(v_snd_1313_, 0);
v_snd_1321_ = lean_ctor_get(v_snd_1313_, 1);
v_isSharedCheck_1389_ = !lean_is_exclusive(v_snd_1313_);
if (v_isSharedCheck_1389_ == 0)
{
v___x_1323_ = v_snd_1313_;
v_isShared_1324_ = v_isSharedCheck_1389_;
goto v_resetjp_1322_;
}
else
{
lean_inc(v_snd_1321_);
lean_inc(v_fst_1320_);
lean_dec(v_snd_1313_);
v___x_1323_ = lean_box(0);
v_isShared_1324_ = v_isSharedCheck_1389_;
goto v_resetjp_1322_;
}
v_resetjp_1322_:
{
lean_object* v___x_1325_; 
v___x_1325_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0(v_f_793_, v___y_1305_, v_a_795_, v_a_796_, v_a_797_, v_a_798_, v_a_799_, v_a_800_);
if (lean_obj_tag(v___x_1325_) == 0)
{
lean_object* v_a_1326_; lean_object* v___x_1327_; 
v_a_1326_ = lean_ctor_get(v___x_1325_, 0);
lean_inc(v_a_1326_);
lean_dec_ref_known(v___x_1325_, 1);
v___x_1327_ = lp_vampireReplay_Vampire_Reconstruct_formula(v_sorts_791_, v_vars_792_, v_a_1326_, v_a_795_, v_a_796_, v_a_797_, v_a_798_, v_a_799_, v_a_800_);
if (lean_obj_tag(v___x_1327_) == 0)
{
lean_object* v_a_1328_; lean_object* v___x_1329_; lean_object* v___x_1331_; 
v_a_1328_ = lean_ctor_get(v___x_1327_, 0);
lean_inc(v_a_1328_);
lean_dec_ref_known(v___x_1327_, 1);
v___x_1329_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__48));
if (v_isShared_1319_ == 0)
{
lean_ctor_set_tag(v___x_1318_, 1);
lean_ctor_set(v___x_1318_, 0, v_a_1328_);
v___x_1331_ = v___x_1318_;
goto v_reusejp_1330_;
}
else
{
lean_object* v_reuseFailAlloc_1372_; 
v_reuseFailAlloc_1372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1372_, 0, v_a_1328_);
v___x_1331_ = v_reuseFailAlloc_1372_;
goto v_reusejp_1330_;
}
v_reusejp_1330_:
{
lean_object* v___x_1332_; lean_object* v___x_1333_; 
v___x_1332_ = lean_array_push(v___y_1307_, v___x_1331_);
v___x_1333_ = l_Lean_Meta_mkAppOptM(v___x_1329_, v___x_1332_, v_a_797_, v_a_798_, v_a_799_, v_a_800_);
if (lean_obj_tag(v___x_1333_) == 0)
{
lean_object* v_a_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; 
v_a_1334_ = lean_ctor_get(v___x_1333_, 0);
lean_inc(v_a_1334_);
lean_dec_ref_known(v___x_1333_, 1);
v___x_1335_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__3));
lean_inc_ref(v___y_1306_);
v___x_1336_ = l_Lean_Name_mkStr2(v___y_1306_, v___x_1335_);
v___x_1337_ = lean_unsigned_to_nat(2u);
v___x_1338_ = lean_mk_empty_array_with_capacity(v___x_1337_);
v___x_1339_ = lean_array_push(v___x_1338_, v_a_1334_);
v___x_1340_ = lean_array_push(v___x_1339_, v_snd_1321_);
v___x_1341_ = l_Lean_Meta_mkAppM(v___x_1336_, v___x_1340_, v_a_797_, v_a_798_, v_a_799_, v_a_800_);
if (lean_obj_tag(v___x_1341_) == 0)
{
lean_object* v_a_1342_; lean_object* v___x_1344_; uint8_t v_isShared_1345_; uint8_t v_isSharedCheck_1355_; 
v_a_1342_ = lean_ctor_get(v___x_1341_, 0);
v_isSharedCheck_1355_ = !lean_is_exclusive(v___x_1341_);
if (v_isSharedCheck_1355_ == 0)
{
v___x_1344_ = v___x_1341_;
v_isShared_1345_ = v_isSharedCheck_1355_;
goto v_resetjp_1343_;
}
else
{
lean_inc(v_a_1342_);
lean_dec(v___x_1341_);
v___x_1344_ = lean_box(0);
v_isShared_1345_ = v_isSharedCheck_1355_;
goto v_resetjp_1343_;
}
v_resetjp_1343_:
{
lean_object* v___x_1347_; 
if (v_isShared_1324_ == 0)
{
lean_ctor_set(v___x_1323_, 1, v_a_1342_);
v___x_1347_ = v___x_1323_;
goto v_reusejp_1346_;
}
else
{
lean_object* v_reuseFailAlloc_1354_; 
v_reuseFailAlloc_1354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1354_, 0, v_fst_1320_);
lean_ctor_set(v_reuseFailAlloc_1354_, 1, v_a_1342_);
v___x_1347_ = v_reuseFailAlloc_1354_;
goto v_reusejp_1346_;
}
v_reusejp_1346_:
{
lean_object* v___x_1349_; 
if (v_isShared_1316_ == 0)
{
lean_ctor_set(v___x_1315_, 1, v___x_1347_);
lean_ctor_set(v___x_1315_, 0, v___y_1308_);
v___x_1349_ = v___x_1315_;
goto v_reusejp_1348_;
}
else
{
lean_object* v_reuseFailAlloc_1353_; 
v_reuseFailAlloc_1353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1353_, 0, v___y_1308_);
lean_ctor_set(v_reuseFailAlloc_1353_, 1, v___x_1347_);
v___x_1349_ = v_reuseFailAlloc_1353_;
goto v_reusejp_1348_;
}
v_reusejp_1348_:
{
lean_object* v___x_1351_; 
if (v_isShared_1345_ == 0)
{
lean_ctor_set(v___x_1344_, 0, v___x_1349_);
v___x_1351_ = v___x_1344_;
goto v_reusejp_1350_;
}
else
{
lean_object* v_reuseFailAlloc_1352_; 
v_reuseFailAlloc_1352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1352_, 0, v___x_1349_);
v___x_1351_ = v_reuseFailAlloc_1352_;
goto v_reusejp_1350_;
}
v_reusejp_1350_:
{
return v___x_1351_;
}
}
}
}
}
else
{
lean_object* v_a_1356_; lean_object* v___x_1358_; uint8_t v_isShared_1359_; uint8_t v_isSharedCheck_1363_; 
lean_del_object(v___x_1323_);
lean_dec(v_fst_1320_);
lean_del_object(v___x_1315_);
lean_dec_ref(v___y_1308_);
v_a_1356_ = lean_ctor_get(v___x_1341_, 0);
v_isSharedCheck_1363_ = !lean_is_exclusive(v___x_1341_);
if (v_isSharedCheck_1363_ == 0)
{
v___x_1358_ = v___x_1341_;
v_isShared_1359_ = v_isSharedCheck_1363_;
goto v_resetjp_1357_;
}
else
{
lean_inc(v_a_1356_);
lean_dec(v___x_1341_);
v___x_1358_ = lean_box(0);
v_isShared_1359_ = v_isSharedCheck_1363_;
goto v_resetjp_1357_;
}
v_resetjp_1357_:
{
lean_object* v___x_1361_; 
if (v_isShared_1359_ == 0)
{
v___x_1361_ = v___x_1358_;
goto v_reusejp_1360_;
}
else
{
lean_object* v_reuseFailAlloc_1362_; 
v_reuseFailAlloc_1362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1362_, 0, v_a_1356_);
v___x_1361_ = v_reuseFailAlloc_1362_;
goto v_reusejp_1360_;
}
v_reusejp_1360_:
{
return v___x_1361_;
}
}
}
}
else
{
lean_object* v_a_1364_; lean_object* v___x_1366_; uint8_t v_isShared_1367_; uint8_t v_isSharedCheck_1371_; 
lean_del_object(v___x_1323_);
lean_dec(v_snd_1321_);
lean_dec(v_fst_1320_);
lean_del_object(v___x_1315_);
lean_dec_ref(v___y_1308_);
v_a_1364_ = lean_ctor_get(v___x_1333_, 0);
v_isSharedCheck_1371_ = !lean_is_exclusive(v___x_1333_);
if (v_isSharedCheck_1371_ == 0)
{
v___x_1366_ = v___x_1333_;
v_isShared_1367_ = v_isSharedCheck_1371_;
goto v_resetjp_1365_;
}
else
{
lean_inc(v_a_1364_);
lean_dec(v___x_1333_);
v___x_1366_ = lean_box(0);
v_isShared_1367_ = v_isSharedCheck_1371_;
goto v_resetjp_1365_;
}
v_resetjp_1365_:
{
lean_object* v___x_1369_; 
if (v_isShared_1367_ == 0)
{
v___x_1369_ = v___x_1366_;
goto v_reusejp_1368_;
}
else
{
lean_object* v_reuseFailAlloc_1370_; 
v_reuseFailAlloc_1370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1370_, 0, v_a_1364_);
v___x_1369_ = v_reuseFailAlloc_1370_;
goto v_reusejp_1368_;
}
v_reusejp_1368_:
{
return v___x_1369_;
}
}
}
}
}
else
{
lean_object* v_a_1373_; lean_object* v___x_1375_; uint8_t v_isShared_1376_; uint8_t v_isSharedCheck_1380_; 
lean_del_object(v___x_1323_);
lean_dec(v_snd_1321_);
lean_dec(v_fst_1320_);
lean_del_object(v___x_1318_);
lean_del_object(v___x_1315_);
lean_dec_ref(v___y_1308_);
lean_dec_ref(v___y_1307_);
v_a_1373_ = lean_ctor_get(v___x_1327_, 0);
v_isSharedCheck_1380_ = !lean_is_exclusive(v___x_1327_);
if (v_isSharedCheck_1380_ == 0)
{
v___x_1375_ = v___x_1327_;
v_isShared_1376_ = v_isSharedCheck_1380_;
goto v_resetjp_1374_;
}
else
{
lean_inc(v_a_1373_);
lean_dec(v___x_1327_);
v___x_1375_ = lean_box(0);
v_isShared_1376_ = v_isSharedCheck_1380_;
goto v_resetjp_1374_;
}
v_resetjp_1374_:
{
lean_object* v___x_1378_; 
if (v_isShared_1376_ == 0)
{
v___x_1378_ = v___x_1375_;
goto v_reusejp_1377_;
}
else
{
lean_object* v_reuseFailAlloc_1379_; 
v_reuseFailAlloc_1379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1379_, 0, v_a_1373_);
v___x_1378_ = v_reuseFailAlloc_1379_;
goto v_reusejp_1377_;
}
v_reusejp_1377_:
{
return v___x_1378_;
}
}
}
}
else
{
lean_object* v_a_1381_; lean_object* v___x_1383_; uint8_t v_isShared_1384_; uint8_t v_isSharedCheck_1388_; 
lean_del_object(v___x_1323_);
lean_dec(v_snd_1321_);
lean_dec(v_fst_1320_);
lean_del_object(v___x_1318_);
lean_del_object(v___x_1315_);
lean_dec_ref(v___y_1308_);
lean_dec_ref(v___y_1307_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
v_a_1381_ = lean_ctor_get(v___x_1325_, 0);
v_isSharedCheck_1388_ = !lean_is_exclusive(v___x_1325_);
if (v_isSharedCheck_1388_ == 0)
{
v___x_1383_ = v___x_1325_;
v_isShared_1384_ = v_isSharedCheck_1388_;
goto v_resetjp_1382_;
}
else
{
lean_inc(v_a_1381_);
lean_dec(v___x_1325_);
v___x_1383_ = lean_box(0);
v_isShared_1384_ = v_isSharedCheck_1388_;
goto v_resetjp_1382_;
}
v_resetjp_1382_:
{
lean_object* v___x_1386_; 
if (v_isShared_1384_ == 0)
{
v___x_1386_ = v___x_1383_;
goto v_reusejp_1385_;
}
else
{
lean_object* v_reuseFailAlloc_1387_; 
v_reuseFailAlloc_1387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1387_, 0, v_a_1381_);
v___x_1386_ = v_reuseFailAlloc_1387_;
goto v_reusejp_1385_;
}
v_reusejp_1385_:
{
return v___x_1386_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_1315_);
lean_dec(v_snd_1313_);
lean_dec_ref(v___y_1308_);
lean_dec_ref(v___y_1307_);
lean_dec_ref(v_f_793_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
return v___x_1311_;
}
}
}
else
{
lean_dec_ref(v___y_1308_);
lean_dec_ref(v___y_1307_);
lean_dec_ref(v_f_793_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
return v___x_1311_;
}
}
v___jp_1395_:
{
lean_object* v___x_1402_; 
v___x_1402_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v_f_793_, v___y_1398_, v___y_1399_, v___y_1400_, v___y_1401_);
if (lean_obj_tag(v___x_1402_) == 0)
{
lean_object* v_a_1403_; uint8_t v___x_1404_; 
v_a_1403_ = lean_ctor_get(v___x_1402_, 0);
lean_inc(v_a_1403_);
lean_dec_ref_known(v___x_1402_, 1);
v___x_1404_ = lean_unbox(v_a_1403_);
lean_dec(v_a_1403_);
if (v___x_1404_ == 7)
{
v___y_1113_ = v___y_1401_;
v___y_1114_ = v___y_1400_;
v___y_1115_ = v___y_1396_;
v___y_1116_ = v___y_1399_;
v___y_1117_ = v___y_1398_;
v___y_1118_ = v___y_1397_;
v___y_1119_ = v___x_1394_;
goto v___jp_1112_;
}
else
{
uint8_t v___x_1405_; 
v___x_1405_ = 0;
v___y_1113_ = v___y_1401_;
v___y_1114_ = v___y_1400_;
v___y_1115_ = v___y_1396_;
v___y_1116_ = v___y_1399_;
v___y_1117_ = v___y_1398_;
v___y_1118_ = v___y_1397_;
v___y_1119_ = v___x_1405_;
goto v___jp_1112_;
}
}
else
{
lean_object* v_a_1406_; lean_object* v___x_1408_; uint8_t v_isShared_1409_; uint8_t v_isSharedCheck_1413_; 
lean_dec_ref(v_f_793_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
v_a_1406_ = lean_ctor_get(v___x_1402_, 0);
v_isSharedCheck_1413_ = !lean_is_exclusive(v___x_1402_);
if (v_isSharedCheck_1413_ == 0)
{
v___x_1408_ = v___x_1402_;
v_isShared_1409_ = v_isSharedCheck_1413_;
goto v_resetjp_1407_;
}
else
{
lean_inc(v_a_1406_);
lean_dec(v___x_1402_);
v___x_1408_ = lean_box(0);
v_isShared_1409_ = v_isSharedCheck_1413_;
goto v_resetjp_1407_;
}
v_resetjp_1407_:
{
lean_object* v___x_1411_; 
if (v_isShared_1409_ == 0)
{
v___x_1411_ = v___x_1408_;
goto v_reusejp_1410_;
}
else
{
lean_object* v_reuseFailAlloc_1412_; 
v_reuseFailAlloc_1412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1412_, 0, v_a_1406_);
v___x_1411_ = v_reuseFailAlloc_1412_;
goto v_reusejp_1410_;
}
v_reusejp_1410_:
{
return v___x_1411_;
}
}
}
}
v___jp_1414_:
{
lean_object* v___x_1422_; 
v___x_1422_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v_f_793_, v___y_1418_, v___y_1419_, v___y_1420_, v___y_1421_);
if (lean_obj_tag(v___x_1422_) == 0)
{
lean_object* v_a_1423_; uint8_t v___x_1424_; 
v_a_1423_ = lean_ctor_get(v___x_1422_, 0);
lean_inc(v_a_1423_);
lean_dec_ref_known(v___x_1422_, 1);
v___x_1424_ = lean_unbox(v_a_1423_);
lean_dec(v_a_1423_);
if (v___x_1424_ == 1)
{
v___y_992_ = v___y_1418_;
v___y_993_ = v___y_1416_;
v___y_994_ = v___y_1415_;
v___y_995_ = v___y_1420_;
v___y_996_ = v___y_1421_;
v___y_997_ = v___y_1419_;
v___y_998_ = v___y_1417_;
v___y_999_ = v___x_1394_;
goto v___jp_991_;
}
else
{
uint8_t v___x_1425_; 
v___x_1425_ = 0;
v___y_992_ = v___y_1418_;
v___y_993_ = v___y_1416_;
v___y_994_ = v___y_1415_;
v___y_995_ = v___y_1420_;
v___y_996_ = v___y_1421_;
v___y_997_ = v___y_1419_;
v___y_998_ = v___y_1417_;
v___y_999_ = v___x_1425_;
goto v___jp_991_;
}
}
else
{
lean_object* v_a_1426_; lean_object* v___x_1428_; uint8_t v_isShared_1429_; uint8_t v_isSharedCheck_1433_; 
lean_dec_ref(v___y_1415_);
lean_dec_ref(v_f_793_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
v_a_1426_ = lean_ctor_get(v___x_1422_, 0);
v_isSharedCheck_1433_ = !lean_is_exclusive(v___x_1422_);
if (v_isSharedCheck_1433_ == 0)
{
v___x_1428_ = v___x_1422_;
v_isShared_1429_ = v_isSharedCheck_1433_;
goto v_resetjp_1427_;
}
else
{
lean_inc(v_a_1426_);
lean_dec(v___x_1422_);
v___x_1428_ = lean_box(0);
v_isShared_1429_ = v_isSharedCheck_1433_;
goto v_resetjp_1427_;
}
v_resetjp_1427_:
{
lean_object* v___x_1431_; 
if (v_isShared_1429_ == 0)
{
v___x_1431_ = v___x_1428_;
goto v_reusejp_1430_;
}
else
{
lean_object* v_reuseFailAlloc_1432_; 
v_reuseFailAlloc_1432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1432_, 0, v_a_1426_);
v___x_1431_ = v_reuseFailAlloc_1432_;
goto v_reusejp_1430_;
}
v_reusejp_1430_:
{
return v___x_1431_;
}
}
}
}
v___jp_1434_:
{
lean_object* v___x_1448_; 
lean_inc_ref(v_f_793_);
v___x_1448_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0(v_f_793_, v___y_1441_, v___y_1439_, v___y_1435_, v___y_1446_, v___y_1445_, v___y_1436_, v___y_1437_);
if (lean_obj_tag(v___x_1448_) == 0)
{
lean_object* v_a_1449_; lean_object* v___x_1450_; 
v_a_1449_ = lean_ctor_get(v___x_1448_, 0);
lean_inc(v_a_1449_);
lean_dec_ref_known(v___x_1448_, 1);
lean_inc_ref(v_vars_792_);
lean_inc_ref(v_sorts_791_);
v___x_1450_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize(v_expand_790_, v_sorts_791_, v_vars_792_, v_a_1449_, v___x_1394_, v___y_1439_, v___y_1435_, v___y_1446_, v___y_1445_, v___y_1436_, v___y_1437_);
if (lean_obj_tag(v___x_1450_) == 0)
{
lean_object* v_a_1451_; lean_object* v_snd_1452_; lean_object* v_fst_1453_; lean_object* v_snd_1454_; lean_object* v___x_1455_; 
v_a_1451_ = lean_ctor_get(v___x_1450_, 0);
lean_inc(v_a_1451_);
lean_dec_ref_known(v___x_1450_, 1);
v_snd_1452_ = lean_ctor_get(v_a_1451_, 1);
lean_inc(v_snd_1452_);
lean_dec(v_a_1451_);
v_fst_1453_ = lean_ctor_get(v_snd_1452_, 0);
lean_inc(v_fst_1453_);
v_snd_1454_ = lean_ctor_get(v_snd_1452_, 1);
lean_inc(v_snd_1454_);
lean_dec(v_snd_1452_);
lean_inc_ref(v_f_793_);
v___x_1455_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0(v_f_793_, v___y_1442_, v___y_1439_, v___y_1435_, v___y_1446_, v___y_1445_, v___y_1436_, v___y_1437_);
if (lean_obj_tag(v___x_1455_) == 0)
{
lean_object* v_a_1456_; lean_object* v___x_1457_; 
v_a_1456_ = lean_ctor_get(v___x_1455_, 0);
lean_inc(v_a_1456_);
lean_dec_ref_known(v___x_1455_, 1);
lean_inc_ref(v_vars_792_);
lean_inc_ref(v_sorts_791_);
v___x_1457_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize(v_expand_790_, v_sorts_791_, v_vars_792_, v_a_1456_, v___x_1394_, v___y_1439_, v___y_1435_, v___y_1446_, v___y_1445_, v___y_1436_, v___y_1437_);
if (lean_obj_tag(v___x_1457_) == 0)
{
lean_object* v_a_1458_; lean_object* v_snd_1459_; lean_object* v_fst_1460_; lean_object* v_snd_1461_; lean_object* v___x_1462_; 
v_a_1458_ = lean_ctor_get(v___x_1457_, 0);
lean_inc(v_a_1458_);
lean_dec_ref_known(v___x_1457_, 1);
v_snd_1459_ = lean_ctor_get(v_a_1458_, 1);
lean_inc(v_snd_1459_);
lean_dec(v_a_1458_);
v_fst_1460_ = lean_ctor_get(v_snd_1459_, 0);
lean_inc(v_fst_1460_);
v_snd_1461_ = lean_ctor_get(v_snd_1459_, 1);
lean_inc(v_snd_1461_);
lean_dec(v_snd_1459_);
lean_inc_ref(v_f_793_);
v___x_1462_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0(v_f_793_, v___y_1441_, v___y_1439_, v___y_1435_, v___y_1446_, v___y_1445_, v___y_1436_, v___y_1437_);
if (lean_obj_tag(v___x_1462_) == 0)
{
lean_object* v_a_1463_; lean_object* v___x_1464_; 
v_a_1463_ = lean_ctor_get(v___x_1462_, 0);
lean_inc(v_a_1463_);
lean_dec_ref_known(v___x_1462_, 1);
lean_inc_ref(v_vars_792_);
lean_inc_ref(v_sorts_791_);
v___x_1464_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize(v_expand_790_, v_sorts_791_, v_vars_792_, v_a_1463_, v___y_1447_, v___y_1439_, v___y_1435_, v___y_1446_, v___y_1445_, v___y_1436_, v___y_1437_);
if (lean_obj_tag(v___x_1464_) == 0)
{
lean_object* v_a_1465_; lean_object* v___x_1467_; uint8_t v_isShared_1468_; uint8_t v_isSharedCheck_1600_; 
v_a_1465_ = lean_ctor_get(v___x_1464_, 0);
v_isSharedCheck_1600_ = !lean_is_exclusive(v___x_1464_);
if (v_isSharedCheck_1600_ == 0)
{
v___x_1467_ = v___x_1464_;
v_isShared_1468_ = v_isSharedCheck_1600_;
goto v_resetjp_1466_;
}
else
{
lean_inc(v_a_1465_);
lean_dec(v___x_1464_);
v___x_1467_ = lean_box(0);
v_isShared_1468_ = v_isSharedCheck_1600_;
goto v_resetjp_1466_;
}
v_resetjp_1466_:
{
lean_object* v_snd_1469_; lean_object* v_fst_1470_; lean_object* v_snd_1471_; lean_object* v___x_1472_; 
v_snd_1469_ = lean_ctor_get(v_a_1465_, 1);
lean_inc(v_snd_1469_);
lean_dec(v_a_1465_);
v_fst_1470_ = lean_ctor_get(v_snd_1469_, 0);
lean_inc(v_fst_1470_);
v_snd_1471_ = lean_ctor_get(v_snd_1469_, 1);
lean_inc(v_snd_1471_);
lean_dec(v_snd_1469_);
v___x_1472_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0(v_f_793_, v___y_1442_, v___y_1439_, v___y_1435_, v___y_1446_, v___y_1445_, v___y_1436_, v___y_1437_);
if (lean_obj_tag(v___x_1472_) == 0)
{
lean_object* v_a_1473_; lean_object* v___x_1474_; 
v_a_1473_ = lean_ctor_get(v___x_1472_, 0);
lean_inc(v_a_1473_);
lean_dec_ref_known(v___x_1472_, 1);
v___x_1474_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize(v_expand_790_, v_sorts_791_, v_vars_792_, v_a_1473_, v___y_1447_, v___y_1439_, v___y_1435_, v___y_1446_, v___y_1445_, v___y_1436_, v___y_1437_);
if (lean_obj_tag(v___x_1474_) == 0)
{
lean_object* v_a_1475_; lean_object* v___x_1477_; uint8_t v_isShared_1478_; uint8_t v_isSharedCheck_1591_; 
v_a_1475_ = lean_ctor_get(v___x_1474_, 0);
v_isSharedCheck_1591_ = !lean_is_exclusive(v___x_1474_);
if (v_isSharedCheck_1591_ == 0)
{
v___x_1477_ = v___x_1474_;
v_isShared_1478_ = v_isSharedCheck_1591_;
goto v_resetjp_1476_;
}
else
{
lean_inc(v_a_1475_);
lean_dec(v___x_1474_);
v___x_1477_ = lean_box(0);
v_isShared_1478_ = v_isSharedCheck_1591_;
goto v_resetjp_1476_;
}
v_resetjp_1476_:
{
lean_object* v_snd_1479_; lean_object* v___x_1481_; uint8_t v_isShared_1482_; uint8_t v_isSharedCheck_1589_; 
v_snd_1479_ = lean_ctor_get(v_a_1475_, 1);
v_isSharedCheck_1589_ = !lean_is_exclusive(v_a_1475_);
if (v_isSharedCheck_1589_ == 0)
{
lean_object* v_unused_1590_; 
v_unused_1590_ = lean_ctor_get(v_a_1475_, 0);
lean_dec(v_unused_1590_);
v___x_1481_ = v_a_1475_;
v_isShared_1482_ = v_isSharedCheck_1589_;
goto v_resetjp_1480_;
}
else
{
lean_inc(v_snd_1479_);
lean_dec(v_a_1475_);
v___x_1481_ = lean_box(0);
v_isShared_1482_ = v_isSharedCheck_1589_;
goto v_resetjp_1480_;
}
v_resetjp_1480_:
{
lean_object* v_fst_1483_; lean_object* v_snd_1484_; lean_object* v___x_1486_; uint8_t v_isShared_1487_; uint8_t v_isSharedCheck_1588_; 
v_fst_1483_ = lean_ctor_get(v_snd_1479_, 0);
v_snd_1484_ = lean_ctor_get(v_snd_1479_, 1);
v_isSharedCheck_1588_ = !lean_is_exclusive(v_snd_1479_);
if (v_isSharedCheck_1588_ == 0)
{
v___x_1486_ = v_snd_1479_;
v_isShared_1487_ = v_isSharedCheck_1588_;
goto v_resetjp_1485_;
}
else
{
lean_inc(v_snd_1484_);
lean_inc(v_fst_1483_);
lean_dec(v_snd_1479_);
v___x_1486_ = lean_box(0);
v_isShared_1487_ = v_isSharedCheck_1588_;
goto v_resetjp_1485_;
}
v_resetjp_1485_:
{
lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; 
v___x_1488_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__13));
v___x_1489_ = lean_unsigned_to_nat(2u);
v___x_1490_ = lean_mk_empty_array_with_capacity(v___x_1489_);
lean_inc_ref(v___x_1490_);
v___x_1491_ = lean_array_push(v___x_1490_, v_snd_1454_);
v___x_1492_ = lean_array_push(v___x_1491_, v_snd_1461_);
v___x_1493_ = l_Lean_Meta_mkAppM(v___x_1488_, v___x_1492_, v___y_1446_, v___y_1445_, v___y_1436_, v___y_1437_);
if (lean_obj_tag(v___x_1493_) == 0)
{
lean_object* v_a_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; 
v_a_1494_ = lean_ctor_get(v___x_1493_, 0);
lean_inc(v_a_1494_);
lean_dec_ref_known(v___x_1493_, 1);
lean_inc_ref(v___x_1490_);
v___x_1495_ = lean_array_push(v___x_1490_, v_snd_1471_);
v___x_1496_ = lean_array_push(v___x_1495_, v_snd_1484_);
v___x_1497_ = l_Lean_Meta_mkAppM(v___x_1488_, v___x_1496_, v___y_1446_, v___y_1445_, v___y_1436_, v___y_1437_);
if (lean_obj_tag(v___x_1497_) == 0)
{
lean_object* v_a_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; 
v_a_1498_ = lean_ctor_get(v___x_1497_, 0);
lean_inc(v_a_1498_);
lean_dec_ref_known(v___x_1497_, 1);
v___x_1499_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__5));
lean_inc_ref(v___x_1490_);
v___x_1500_ = lean_array_push(v___x_1490_, v_a_1494_);
v___x_1501_ = lean_array_push(v___x_1500_, v_a_1498_);
v___x_1502_ = l_Lean_Meta_mkAppM(v___x_1499_, v___x_1501_, v___y_1446_, v___y_1445_, v___y_1436_, v___y_1437_);
if (lean_obj_tag(v___x_1502_) == 0)
{
lean_object* v_a_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1515_; 
v_a_1503_ = lean_ctor_get(v___x_1502_, 0);
lean_inc(v_a_1503_);
lean_dec_ref_known(v___x_1502_, 1);
v___x_1504_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__22));
v___x_1505_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__24));
v___x_1506_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__28));
v___x_1507_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__29));
v___x_1508_ = l_Lean_Name_num___override(v___x_1507_, v___y_1441_);
v___x_1509_ = l_Lean_Name_str___override(v___x_1508_, v___x_1504_);
v___x_1510_ = l_Lean_Name_str___override(v___x_1509_, v___x_1505_);
v___x_1511_ = l_Lean_Name_str___override(v___x_1510_, v___x_1506_);
v___x_1512_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__49));
v___x_1513_ = l_Lean_Name_str___override(v___x_1511_, v___x_1512_);
if (v_isShared_1478_ == 0)
{
lean_ctor_set_tag(v___x_1477_, 1);
lean_ctor_set(v___x_1477_, 0, v___y_1444_);
v___x_1515_ = v___x_1477_;
goto v_reusejp_1514_;
}
else
{
lean_object* v_reuseFailAlloc_1563_; 
v_reuseFailAlloc_1563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1563_, 0, v___y_1444_);
v___x_1515_ = v_reuseFailAlloc_1563_;
goto v_reusejp_1514_;
}
v_reusejp_1514_:
{
lean_object* v___x_1517_; 
if (v_isShared_1468_ == 0)
{
lean_ctor_set_tag(v___x_1467_, 1);
lean_ctor_set(v___x_1467_, 0, v___y_1443_);
v___x_1517_ = v___x_1467_;
goto v_reusejp_1516_;
}
else
{
lean_object* v_reuseFailAlloc_1562_; 
v_reuseFailAlloc_1562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1562_, 0, v___y_1443_);
v___x_1517_ = v_reuseFailAlloc_1562_;
goto v_reusejp_1516_;
}
v_reusejp_1516_:
{
lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; 
lean_inc_ref(v___x_1490_);
v___x_1518_ = lean_array_push(v___x_1490_, v___x_1515_);
v___x_1519_ = lean_array_push(v___x_1518_, v___x_1517_);
v___x_1520_ = l_Lean_Meta_mkAppOptM(v___x_1513_, v___x_1519_, v___y_1446_, v___y_1445_, v___y_1436_, v___y_1437_);
if (lean_obj_tag(v___x_1520_) == 0)
{
lean_object* v_a_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; 
v_a_1521_ = lean_ctor_get(v___x_1520_, 0);
lean_inc(v_a_1521_);
lean_dec_ref_known(v___x_1520_, 1);
v___x_1522_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__3));
lean_inc_ref(v___y_1438_);
v___x_1523_ = l_Lean_Name_mkStr2(v___y_1438_, v___x_1522_);
v___x_1524_ = lean_array_push(v___x_1490_, v_a_1521_);
v___x_1525_ = lean_array_push(v___x_1524_, v_a_1503_);
v___x_1526_ = l_Lean_Meta_mkAppM(v___x_1523_, v___x_1525_, v___y_1446_, v___y_1445_, v___y_1436_, v___y_1437_);
if (lean_obj_tag(v___x_1526_) == 0)
{
lean_object* v_a_1527_; lean_object* v___x_1529_; uint8_t v_isShared_1530_; uint8_t v_isSharedCheck_1545_; 
v_a_1527_ = lean_ctor_get(v___x_1526_, 0);
v_isSharedCheck_1545_ = !lean_is_exclusive(v___x_1526_);
if (v_isSharedCheck_1545_ == 0)
{
v___x_1529_ = v___x_1526_;
v_isShared_1530_ = v_isSharedCheck_1545_;
goto v_resetjp_1528_;
}
else
{
lean_inc(v_a_1527_);
lean_dec(v___x_1526_);
v___x_1529_ = lean_box(0);
v_isShared_1530_ = v_isSharedCheck_1545_;
goto v_resetjp_1528_;
}
v_resetjp_1528_:
{
lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1537_; 
v___x_1531_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__45, &lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__45_once, _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__45);
v___x_1532_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__46, &lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__46_once, _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__46);
v___x_1533_ = l_Lean_mkAppB(v___x_1532_, v_fst_1453_, v_fst_1460_);
v___x_1534_ = l_Lean_mkAppB(v___x_1532_, v_fst_1470_, v_fst_1483_);
v___x_1535_ = l_Lean_mkAppB(v___x_1531_, v___x_1533_, v___x_1534_);
if (v_isShared_1487_ == 0)
{
lean_ctor_set(v___x_1486_, 1, v_a_1527_);
lean_ctor_set(v___x_1486_, 0, v___x_1535_);
v___x_1537_ = v___x_1486_;
goto v_reusejp_1536_;
}
else
{
lean_object* v_reuseFailAlloc_1544_; 
v_reuseFailAlloc_1544_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1544_, 0, v___x_1535_);
lean_ctor_set(v_reuseFailAlloc_1544_, 1, v_a_1527_);
v___x_1537_ = v_reuseFailAlloc_1544_;
goto v_reusejp_1536_;
}
v_reusejp_1536_:
{
lean_object* v___x_1539_; 
if (v_isShared_1482_ == 0)
{
lean_ctor_set(v___x_1481_, 1, v___x_1537_);
lean_ctor_set(v___x_1481_, 0, v___y_1440_);
v___x_1539_ = v___x_1481_;
goto v_reusejp_1538_;
}
else
{
lean_object* v_reuseFailAlloc_1543_; 
v_reuseFailAlloc_1543_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1543_, 0, v___y_1440_);
lean_ctor_set(v_reuseFailAlloc_1543_, 1, v___x_1537_);
v___x_1539_ = v_reuseFailAlloc_1543_;
goto v_reusejp_1538_;
}
v_reusejp_1538_:
{
lean_object* v___x_1541_; 
if (v_isShared_1530_ == 0)
{
lean_ctor_set(v___x_1529_, 0, v___x_1539_);
v___x_1541_ = v___x_1529_;
goto v_reusejp_1540_;
}
else
{
lean_object* v_reuseFailAlloc_1542_; 
v_reuseFailAlloc_1542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1542_, 0, v___x_1539_);
v___x_1541_ = v_reuseFailAlloc_1542_;
goto v_reusejp_1540_;
}
v_reusejp_1540_:
{
return v___x_1541_;
}
}
}
}
}
else
{
lean_object* v_a_1546_; lean_object* v___x_1548_; uint8_t v_isShared_1549_; uint8_t v_isSharedCheck_1553_; 
lean_del_object(v___x_1486_);
lean_dec(v_fst_1483_);
lean_del_object(v___x_1481_);
lean_dec(v_fst_1470_);
lean_dec(v_fst_1460_);
lean_dec(v_fst_1453_);
lean_dec_ref(v___y_1440_);
v_a_1546_ = lean_ctor_get(v___x_1526_, 0);
v_isSharedCheck_1553_ = !lean_is_exclusive(v___x_1526_);
if (v_isSharedCheck_1553_ == 0)
{
v___x_1548_ = v___x_1526_;
v_isShared_1549_ = v_isSharedCheck_1553_;
goto v_resetjp_1547_;
}
else
{
lean_inc(v_a_1546_);
lean_dec(v___x_1526_);
v___x_1548_ = lean_box(0);
v_isShared_1549_ = v_isSharedCheck_1553_;
goto v_resetjp_1547_;
}
v_resetjp_1547_:
{
lean_object* v___x_1551_; 
if (v_isShared_1549_ == 0)
{
v___x_1551_ = v___x_1548_;
goto v_reusejp_1550_;
}
else
{
lean_object* v_reuseFailAlloc_1552_; 
v_reuseFailAlloc_1552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1552_, 0, v_a_1546_);
v___x_1551_ = v_reuseFailAlloc_1552_;
goto v_reusejp_1550_;
}
v_reusejp_1550_:
{
return v___x_1551_;
}
}
}
}
else
{
lean_object* v_a_1554_; lean_object* v___x_1556_; uint8_t v_isShared_1557_; uint8_t v_isSharedCheck_1561_; 
lean_dec(v_a_1503_);
lean_dec_ref(v___x_1490_);
lean_del_object(v___x_1486_);
lean_dec(v_fst_1483_);
lean_del_object(v___x_1481_);
lean_dec(v_fst_1470_);
lean_dec(v_fst_1460_);
lean_dec(v_fst_1453_);
lean_dec_ref(v___y_1440_);
v_a_1554_ = lean_ctor_get(v___x_1520_, 0);
v_isSharedCheck_1561_ = !lean_is_exclusive(v___x_1520_);
if (v_isSharedCheck_1561_ == 0)
{
v___x_1556_ = v___x_1520_;
v_isShared_1557_ = v_isSharedCheck_1561_;
goto v_resetjp_1555_;
}
else
{
lean_inc(v_a_1554_);
lean_dec(v___x_1520_);
v___x_1556_ = lean_box(0);
v_isShared_1557_ = v_isSharedCheck_1561_;
goto v_resetjp_1555_;
}
v_resetjp_1555_:
{
lean_object* v___x_1559_; 
if (v_isShared_1557_ == 0)
{
v___x_1559_ = v___x_1556_;
goto v_reusejp_1558_;
}
else
{
lean_object* v_reuseFailAlloc_1560_; 
v_reuseFailAlloc_1560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1560_, 0, v_a_1554_);
v___x_1559_ = v_reuseFailAlloc_1560_;
goto v_reusejp_1558_;
}
v_reusejp_1558_:
{
return v___x_1559_;
}
}
}
}
}
}
else
{
lean_object* v_a_1564_; lean_object* v___x_1566_; uint8_t v_isShared_1567_; uint8_t v_isSharedCheck_1571_; 
lean_dec_ref(v___x_1490_);
lean_del_object(v___x_1486_);
lean_dec(v_fst_1483_);
lean_del_object(v___x_1481_);
lean_del_object(v___x_1477_);
lean_dec(v_fst_1470_);
lean_del_object(v___x_1467_);
lean_dec(v_fst_1460_);
lean_dec(v_fst_1453_);
lean_dec_ref(v___y_1444_);
lean_dec_ref(v___y_1443_);
lean_dec(v___y_1441_);
lean_dec_ref(v___y_1440_);
v_a_1564_ = lean_ctor_get(v___x_1502_, 0);
v_isSharedCheck_1571_ = !lean_is_exclusive(v___x_1502_);
if (v_isSharedCheck_1571_ == 0)
{
v___x_1566_ = v___x_1502_;
v_isShared_1567_ = v_isSharedCheck_1571_;
goto v_resetjp_1565_;
}
else
{
lean_inc(v_a_1564_);
lean_dec(v___x_1502_);
v___x_1566_ = lean_box(0);
v_isShared_1567_ = v_isSharedCheck_1571_;
goto v_resetjp_1565_;
}
v_resetjp_1565_:
{
lean_object* v___x_1569_; 
if (v_isShared_1567_ == 0)
{
v___x_1569_ = v___x_1566_;
goto v_reusejp_1568_;
}
else
{
lean_object* v_reuseFailAlloc_1570_; 
v_reuseFailAlloc_1570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1570_, 0, v_a_1564_);
v___x_1569_ = v_reuseFailAlloc_1570_;
goto v_reusejp_1568_;
}
v_reusejp_1568_:
{
return v___x_1569_;
}
}
}
}
else
{
lean_object* v_a_1572_; lean_object* v___x_1574_; uint8_t v_isShared_1575_; uint8_t v_isSharedCheck_1579_; 
lean_dec(v_a_1494_);
lean_dec_ref(v___x_1490_);
lean_del_object(v___x_1486_);
lean_dec(v_fst_1483_);
lean_del_object(v___x_1481_);
lean_del_object(v___x_1477_);
lean_dec(v_fst_1470_);
lean_del_object(v___x_1467_);
lean_dec(v_fst_1460_);
lean_dec(v_fst_1453_);
lean_dec_ref(v___y_1444_);
lean_dec_ref(v___y_1443_);
lean_dec(v___y_1441_);
lean_dec_ref(v___y_1440_);
v_a_1572_ = lean_ctor_get(v___x_1497_, 0);
v_isSharedCheck_1579_ = !lean_is_exclusive(v___x_1497_);
if (v_isSharedCheck_1579_ == 0)
{
v___x_1574_ = v___x_1497_;
v_isShared_1575_ = v_isSharedCheck_1579_;
goto v_resetjp_1573_;
}
else
{
lean_inc(v_a_1572_);
lean_dec(v___x_1497_);
v___x_1574_ = lean_box(0);
v_isShared_1575_ = v_isSharedCheck_1579_;
goto v_resetjp_1573_;
}
v_resetjp_1573_:
{
lean_object* v___x_1577_; 
if (v_isShared_1575_ == 0)
{
v___x_1577_ = v___x_1574_;
goto v_reusejp_1576_;
}
else
{
lean_object* v_reuseFailAlloc_1578_; 
v_reuseFailAlloc_1578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1578_, 0, v_a_1572_);
v___x_1577_ = v_reuseFailAlloc_1578_;
goto v_reusejp_1576_;
}
v_reusejp_1576_:
{
return v___x_1577_;
}
}
}
}
else
{
lean_object* v_a_1580_; lean_object* v___x_1582_; uint8_t v_isShared_1583_; uint8_t v_isSharedCheck_1587_; 
lean_dec_ref(v___x_1490_);
lean_del_object(v___x_1486_);
lean_dec(v_snd_1484_);
lean_dec(v_fst_1483_);
lean_del_object(v___x_1481_);
lean_del_object(v___x_1477_);
lean_dec(v_snd_1471_);
lean_dec(v_fst_1470_);
lean_del_object(v___x_1467_);
lean_dec(v_fst_1460_);
lean_dec(v_fst_1453_);
lean_dec_ref(v___y_1444_);
lean_dec_ref(v___y_1443_);
lean_dec(v___y_1441_);
lean_dec_ref(v___y_1440_);
v_a_1580_ = lean_ctor_get(v___x_1493_, 0);
v_isSharedCheck_1587_ = !lean_is_exclusive(v___x_1493_);
if (v_isSharedCheck_1587_ == 0)
{
v___x_1582_ = v___x_1493_;
v_isShared_1583_ = v_isSharedCheck_1587_;
goto v_resetjp_1581_;
}
else
{
lean_inc(v_a_1580_);
lean_dec(v___x_1493_);
v___x_1582_ = lean_box(0);
v_isShared_1583_ = v_isSharedCheck_1587_;
goto v_resetjp_1581_;
}
v_resetjp_1581_:
{
lean_object* v___x_1585_; 
if (v_isShared_1583_ == 0)
{
v___x_1585_ = v___x_1582_;
goto v_reusejp_1584_;
}
else
{
lean_object* v_reuseFailAlloc_1586_; 
v_reuseFailAlloc_1586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1586_, 0, v_a_1580_);
v___x_1585_ = v_reuseFailAlloc_1586_;
goto v_reusejp_1584_;
}
v_reusejp_1584_:
{
return v___x_1585_;
}
}
}
}
}
}
}
else
{
lean_dec(v_snd_1471_);
lean_dec(v_fst_1470_);
lean_del_object(v___x_1467_);
lean_dec(v_snd_1461_);
lean_dec(v_fst_1460_);
lean_dec(v_snd_1454_);
lean_dec(v_fst_1453_);
lean_dec_ref(v___y_1444_);
lean_dec_ref(v___y_1443_);
lean_dec(v___y_1441_);
lean_dec_ref(v___y_1440_);
return v___x_1474_;
}
}
else
{
lean_object* v_a_1592_; lean_object* v___x_1594_; uint8_t v_isShared_1595_; uint8_t v_isSharedCheck_1599_; 
lean_dec(v_snd_1471_);
lean_dec(v_fst_1470_);
lean_del_object(v___x_1467_);
lean_dec(v_snd_1461_);
lean_dec(v_fst_1460_);
lean_dec(v_snd_1454_);
lean_dec(v_fst_1453_);
lean_dec_ref(v___y_1444_);
lean_dec_ref(v___y_1443_);
lean_dec(v___y_1441_);
lean_dec_ref(v___y_1440_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
v_a_1592_ = lean_ctor_get(v___x_1472_, 0);
v_isSharedCheck_1599_ = !lean_is_exclusive(v___x_1472_);
if (v_isSharedCheck_1599_ == 0)
{
v___x_1594_ = v___x_1472_;
v_isShared_1595_ = v_isSharedCheck_1599_;
goto v_resetjp_1593_;
}
else
{
lean_inc(v_a_1592_);
lean_dec(v___x_1472_);
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
else
{
lean_dec(v_snd_1461_);
lean_dec(v_fst_1460_);
lean_dec(v_snd_1454_);
lean_dec(v_fst_1453_);
lean_dec_ref(v___y_1444_);
lean_dec_ref(v___y_1443_);
lean_dec(v___y_1441_);
lean_dec_ref(v___y_1440_);
lean_dec_ref(v_f_793_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
return v___x_1464_;
}
}
else
{
lean_object* v_a_1601_; lean_object* v___x_1603_; uint8_t v_isShared_1604_; uint8_t v_isSharedCheck_1608_; 
lean_dec(v_snd_1461_);
lean_dec(v_fst_1460_);
lean_dec(v_snd_1454_);
lean_dec(v_fst_1453_);
lean_dec_ref(v___y_1444_);
lean_dec_ref(v___y_1443_);
lean_dec(v___y_1441_);
lean_dec_ref(v___y_1440_);
lean_dec_ref(v_f_793_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
v_a_1601_ = lean_ctor_get(v___x_1462_, 0);
v_isSharedCheck_1608_ = !lean_is_exclusive(v___x_1462_);
if (v_isSharedCheck_1608_ == 0)
{
v___x_1603_ = v___x_1462_;
v_isShared_1604_ = v_isSharedCheck_1608_;
goto v_resetjp_1602_;
}
else
{
lean_inc(v_a_1601_);
lean_dec(v___x_1462_);
v___x_1603_ = lean_box(0);
v_isShared_1604_ = v_isSharedCheck_1608_;
goto v_resetjp_1602_;
}
v_resetjp_1602_:
{
lean_object* v___x_1606_; 
if (v_isShared_1604_ == 0)
{
v___x_1606_ = v___x_1603_;
goto v_reusejp_1605_;
}
else
{
lean_object* v_reuseFailAlloc_1607_; 
v_reuseFailAlloc_1607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1607_, 0, v_a_1601_);
v___x_1606_ = v_reuseFailAlloc_1607_;
goto v_reusejp_1605_;
}
v_reusejp_1605_:
{
return v___x_1606_;
}
}
}
}
else
{
lean_dec(v_snd_1454_);
lean_dec(v_fst_1453_);
lean_dec_ref(v___y_1444_);
lean_dec_ref(v___y_1443_);
lean_dec(v___y_1441_);
lean_dec_ref(v___y_1440_);
lean_dec_ref(v_f_793_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
return v___x_1457_;
}
}
else
{
lean_object* v_a_1609_; lean_object* v___x_1611_; uint8_t v_isShared_1612_; uint8_t v_isSharedCheck_1616_; 
lean_dec(v_snd_1454_);
lean_dec(v_fst_1453_);
lean_dec_ref(v___y_1444_);
lean_dec_ref(v___y_1443_);
lean_dec(v___y_1441_);
lean_dec_ref(v___y_1440_);
lean_dec_ref(v_f_793_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
v_a_1609_ = lean_ctor_get(v___x_1455_, 0);
v_isSharedCheck_1616_ = !lean_is_exclusive(v___x_1455_);
if (v_isSharedCheck_1616_ == 0)
{
v___x_1611_ = v___x_1455_;
v_isShared_1612_ = v_isSharedCheck_1616_;
goto v_resetjp_1610_;
}
else
{
lean_inc(v_a_1609_);
lean_dec(v___x_1455_);
v___x_1611_ = lean_box(0);
v_isShared_1612_ = v_isSharedCheck_1616_;
goto v_resetjp_1610_;
}
v_resetjp_1610_:
{
lean_object* v___x_1614_; 
if (v_isShared_1612_ == 0)
{
v___x_1614_ = v___x_1611_;
goto v_reusejp_1613_;
}
else
{
lean_object* v_reuseFailAlloc_1615_; 
v_reuseFailAlloc_1615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1615_, 0, v_a_1609_);
v___x_1614_ = v_reuseFailAlloc_1615_;
goto v_reusejp_1613_;
}
v_reusejp_1613_:
{
return v___x_1614_;
}
}
}
}
else
{
lean_dec_ref(v___y_1444_);
lean_dec_ref(v___y_1443_);
lean_dec(v___y_1441_);
lean_dec_ref(v___y_1440_);
lean_dec_ref(v_f_793_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
return v___x_1450_;
}
}
else
{
lean_object* v_a_1617_; lean_object* v___x_1619_; uint8_t v_isShared_1620_; uint8_t v_isSharedCheck_1624_; 
lean_dec_ref(v___y_1444_);
lean_dec_ref(v___y_1443_);
lean_dec(v___y_1441_);
lean_dec_ref(v___y_1440_);
lean_dec_ref(v_f_793_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
v_a_1617_ = lean_ctor_get(v___x_1448_, 0);
v_isSharedCheck_1624_ = !lean_is_exclusive(v___x_1448_);
if (v_isSharedCheck_1624_ == 0)
{
v___x_1619_ = v___x_1448_;
v_isShared_1620_ = v_isSharedCheck_1624_;
goto v_resetjp_1618_;
}
else
{
lean_inc(v_a_1617_);
lean_dec(v___x_1448_);
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
v___jp_1625_:
{
lean_object* v___x_1639_; 
lean_inc_ref(v_f_793_);
v___x_1639_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0(v_f_793_, v___y_1632_, v___y_1630_, v___y_1626_, v___y_1637_, v___y_1636_, v___y_1627_, v___y_1628_);
if (lean_obj_tag(v___x_1639_) == 0)
{
lean_object* v_a_1640_; lean_object* v___x_1641_; 
v_a_1640_ = lean_ctor_get(v___x_1639_, 0);
lean_inc(v_a_1640_);
lean_dec_ref_known(v___x_1639_, 1);
lean_inc_ref(v_vars_792_);
lean_inc_ref(v_sorts_791_);
v___x_1641_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize(v_expand_790_, v_sorts_791_, v_vars_792_, v_a_1640_, v___y_1638_, v___y_1630_, v___y_1626_, v___y_1637_, v___y_1636_, v___y_1627_, v___y_1628_);
if (lean_obj_tag(v___x_1641_) == 0)
{
lean_object* v_a_1642_; lean_object* v_snd_1643_; lean_object* v_fst_1644_; lean_object* v_snd_1645_; lean_object* v___x_1646_; 
v_a_1642_ = lean_ctor_get(v___x_1641_, 0);
lean_inc(v_a_1642_);
lean_dec_ref_known(v___x_1641_, 1);
v_snd_1643_ = lean_ctor_get(v_a_1642_, 1);
lean_inc(v_snd_1643_);
lean_dec(v_a_1642_);
v_fst_1644_ = lean_ctor_get(v_snd_1643_, 0);
lean_inc(v_fst_1644_);
v_snd_1645_ = lean_ctor_get(v_snd_1643_, 1);
lean_inc(v_snd_1645_);
lean_dec(v_snd_1643_);
lean_inc_ref(v_f_793_);
v___x_1646_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0(v_f_793_, v___y_1633_, v___y_1630_, v___y_1626_, v___y_1637_, v___y_1636_, v___y_1627_, v___y_1628_);
if (lean_obj_tag(v___x_1646_) == 0)
{
lean_object* v_a_1647_; lean_object* v___x_1648_; 
v_a_1647_ = lean_ctor_get(v___x_1646_, 0);
lean_inc(v_a_1647_);
lean_dec_ref_known(v___x_1646_, 1);
lean_inc_ref(v_vars_792_);
lean_inc_ref(v_sorts_791_);
v___x_1648_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize(v_expand_790_, v_sorts_791_, v_vars_792_, v_a_1647_, v___x_1394_, v___y_1630_, v___y_1626_, v___y_1637_, v___y_1636_, v___y_1627_, v___y_1628_);
if (lean_obj_tag(v___x_1648_) == 0)
{
lean_object* v_a_1649_; lean_object* v___x_1651_; uint8_t v_isShared_1652_; uint8_t v_isSharedCheck_1883_; 
v_a_1649_ = lean_ctor_get(v___x_1648_, 0);
v_isSharedCheck_1883_ = !lean_is_exclusive(v___x_1648_);
if (v_isSharedCheck_1883_ == 0)
{
v___x_1651_ = v___x_1648_;
v_isShared_1652_ = v_isSharedCheck_1883_;
goto v_resetjp_1650_;
}
else
{
lean_inc(v_a_1649_);
lean_dec(v___x_1648_);
v___x_1651_ = lean_box(0);
v_isShared_1652_ = v_isSharedCheck_1883_;
goto v_resetjp_1650_;
}
v_resetjp_1650_:
{
lean_object* v_snd_1653_; lean_object* v_fst_1654_; lean_object* v_snd_1655_; lean_object* v___x_1656_; 
v_snd_1653_ = lean_ctor_get(v_a_1649_, 1);
lean_inc(v_snd_1653_);
lean_dec(v_a_1649_);
v_fst_1654_ = lean_ctor_get(v_snd_1653_, 0);
lean_inc(v_fst_1654_);
v_snd_1655_ = lean_ctor_get(v_snd_1653_, 1);
lean_inc(v_snd_1655_);
lean_dec(v_snd_1653_);
lean_inc_ref(v_f_793_);
v___x_1656_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0(v_f_793_, v___y_1633_, v___y_1630_, v___y_1626_, v___y_1637_, v___y_1636_, v___y_1627_, v___y_1628_);
if (lean_obj_tag(v___x_1656_) == 0)
{
lean_object* v_a_1657_; lean_object* v___x_1658_; 
v_a_1657_ = lean_ctor_get(v___x_1656_, 0);
lean_inc(v_a_1657_);
lean_dec_ref_known(v___x_1656_, 1);
lean_inc_ref(v_vars_792_);
lean_inc_ref(v_sorts_791_);
v___x_1658_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize(v_expand_790_, v_sorts_791_, v_vars_792_, v_a_1657_, v___y_1638_, v___y_1630_, v___y_1626_, v___y_1637_, v___y_1636_, v___y_1627_, v___y_1628_);
if (lean_obj_tag(v___x_1658_) == 0)
{
lean_object* v_a_1659_; lean_object* v___x_1661_; uint8_t v_isShared_1662_; uint8_t v_isSharedCheck_1874_; 
v_a_1659_ = lean_ctor_get(v___x_1658_, 0);
v_isSharedCheck_1874_ = !lean_is_exclusive(v___x_1658_);
if (v_isSharedCheck_1874_ == 0)
{
v___x_1661_ = v___x_1658_;
v_isShared_1662_ = v_isSharedCheck_1874_;
goto v_resetjp_1660_;
}
else
{
lean_inc(v_a_1659_);
lean_dec(v___x_1658_);
v___x_1661_ = lean_box(0);
v_isShared_1662_ = v_isSharedCheck_1874_;
goto v_resetjp_1660_;
}
v_resetjp_1660_:
{
lean_object* v_snd_1663_; lean_object* v_fst_1664_; lean_object* v_snd_1665_; lean_object* v___x_1666_; 
v_snd_1663_ = lean_ctor_get(v_a_1659_, 1);
lean_inc(v_snd_1663_);
lean_dec(v_a_1659_);
v_fst_1664_ = lean_ctor_get(v_snd_1663_, 0);
lean_inc(v_fst_1664_);
v_snd_1665_ = lean_ctor_get(v_snd_1663_, 1);
lean_inc(v_snd_1665_);
lean_dec(v_snd_1663_);
v___x_1666_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0(v_f_793_, v___y_1632_, v___y_1630_, v___y_1626_, v___y_1637_, v___y_1636_, v___y_1627_, v___y_1628_);
lean_dec(v___y_1632_);
if (lean_obj_tag(v___x_1666_) == 0)
{
lean_object* v_a_1667_; lean_object* v___x_1668_; 
v_a_1667_ = lean_ctor_get(v___x_1666_, 0);
lean_inc(v_a_1667_);
lean_dec_ref_known(v___x_1666_, 1);
v___x_1668_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize(v_expand_790_, v_sorts_791_, v_vars_792_, v_a_1667_, v___x_1394_, v___y_1630_, v___y_1626_, v___y_1637_, v___y_1636_, v___y_1627_, v___y_1628_);
if (lean_obj_tag(v___x_1668_) == 0)
{
lean_object* v_a_1669_; lean_object* v___x_1671_; uint8_t v_isShared_1672_; uint8_t v_isSharedCheck_1865_; 
v_a_1669_ = lean_ctor_get(v___x_1668_, 0);
v_isSharedCheck_1865_ = !lean_is_exclusive(v___x_1668_);
if (v_isSharedCheck_1865_ == 0)
{
v___x_1671_ = v___x_1668_;
v_isShared_1672_ = v_isSharedCheck_1865_;
goto v_resetjp_1670_;
}
else
{
lean_inc(v_a_1669_);
lean_dec(v___x_1668_);
v___x_1671_ = lean_box(0);
v_isShared_1672_ = v_isSharedCheck_1865_;
goto v_resetjp_1670_;
}
v_resetjp_1670_:
{
lean_object* v_snd_1673_; lean_object* v___x_1675_; uint8_t v_isShared_1676_; uint8_t v_isSharedCheck_1863_; 
v_snd_1673_ = lean_ctor_get(v_a_1669_, 1);
v_isSharedCheck_1863_ = !lean_is_exclusive(v_a_1669_);
if (v_isSharedCheck_1863_ == 0)
{
lean_object* v_unused_1864_; 
v_unused_1864_ = lean_ctor_get(v_a_1669_, 0);
lean_dec(v_unused_1864_);
v___x_1675_ = v_a_1669_;
v_isShared_1676_ = v_isSharedCheck_1863_;
goto v_resetjp_1674_;
}
else
{
lean_inc(v_snd_1673_);
lean_dec(v_a_1669_);
v___x_1675_ = lean_box(0);
v_isShared_1676_ = v_isSharedCheck_1863_;
goto v_resetjp_1674_;
}
v_resetjp_1674_:
{
lean_object* v_fst_1677_; lean_object* v_snd_1678_; lean_object* v___x_1680_; uint8_t v_isShared_1681_; uint8_t v_isSharedCheck_1862_; 
v_fst_1677_ = lean_ctor_get(v_snd_1673_, 0);
v_snd_1678_ = lean_ctor_get(v_snd_1673_, 1);
v_isSharedCheck_1862_ = !lean_is_exclusive(v_snd_1673_);
if (v_isSharedCheck_1862_ == 0)
{
v___x_1680_ = v_snd_1673_;
v_isShared_1681_ = v_isSharedCheck_1862_;
goto v_resetjp_1679_;
}
else
{
lean_inc(v_snd_1678_);
lean_inc(v_fst_1677_);
lean_dec(v_snd_1673_);
v___x_1680_ = lean_box(0);
v_isShared_1681_ = v_isSharedCheck_1862_;
goto v_resetjp_1679_;
}
v_resetjp_1679_:
{
lean_object* v___x_1682_; lean_object* v___x_1684_; 
v___x_1682_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__51));
lean_inc_ref(v___y_1635_);
if (v_isShared_1672_ == 0)
{
lean_ctor_set_tag(v___x_1671_, 1);
lean_ctor_set(v___x_1671_, 0, v___y_1635_);
v___x_1684_ = v___x_1671_;
goto v_reusejp_1683_;
}
else
{
lean_object* v_reuseFailAlloc_1861_; 
v_reuseFailAlloc_1861_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1861_, 0, v___y_1635_);
v___x_1684_ = v_reuseFailAlloc_1861_;
goto v_reusejp_1683_;
}
v_reusejp_1683_:
{
lean_object* v___x_1686_; 
lean_inc_ref(v___y_1634_);
if (v_isShared_1662_ == 0)
{
lean_ctor_set_tag(v___x_1661_, 1);
lean_ctor_set(v___x_1661_, 0, v___y_1634_);
v___x_1686_ = v___x_1661_;
goto v_reusejp_1685_;
}
else
{
lean_object* v_reuseFailAlloc_1860_; 
v_reuseFailAlloc_1860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1860_, 0, v___y_1634_);
v___x_1686_ = v_reuseFailAlloc_1860_;
goto v_reusejp_1685_;
}
v_reusejp_1685_:
{
lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; 
v___x_1687_ = lean_unsigned_to_nat(2u);
v___x_1688_ = lean_mk_empty_array_with_capacity(v___x_1687_);
lean_inc_ref(v___x_1688_);
v___x_1689_ = lean_array_push(v___x_1688_, v___x_1684_);
v___x_1690_ = lean_array_push(v___x_1689_, v___x_1686_);
v___x_1691_ = l_Lean_Meta_mkAppOptM(v___x_1682_, v___x_1690_, v___y_1637_, v___y_1636_, v___y_1627_, v___y_1628_);
if (lean_obj_tag(v___x_1691_) == 0)
{
lean_object* v_a_1692_; lean_object* v___x_1693_; 
v_a_1692_ = lean_ctor_get(v___x_1691_, 0);
lean_inc(v_a_1692_);
lean_dec_ref_known(v___x_1691_, 1);
lean_inc_ref(v___y_1634_);
lean_inc_ref(v___y_1635_);
v___x_1693_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg(v___y_1635_, v___y_1634_, v___y_1637_, v___y_1636_, v___y_1627_, v___y_1628_);
if (lean_obj_tag(v___x_1693_) == 0)
{
lean_object* v_a_1694_; lean_object* v___x_1695_; 
v_a_1694_ = lean_ctor_get(v___x_1693_, 0);
lean_inc(v_a_1694_);
lean_dec_ref_known(v___x_1693_, 1);
lean_inc_ref(v___y_1635_);
lean_inc_ref(v___y_1634_);
v___x_1695_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg(v___y_1634_, v___y_1635_, v___y_1637_, v___y_1636_, v___y_1627_, v___y_1628_);
if (lean_obj_tag(v___x_1695_) == 0)
{
lean_object* v_a_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; 
v_a_1696_ = lean_ctor_get(v___x_1695_, 0);
lean_inc(v_a_1696_);
lean_dec_ref_known(v___x_1695_, 1);
v___x_1697_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__5));
lean_inc_ref(v___x_1688_);
v___x_1698_ = lean_array_push(v___x_1688_, v_a_1694_);
v___x_1699_ = lean_array_push(v___x_1698_, v_a_1696_);
v___x_1700_ = l_Lean_Meta_mkAppM(v___x_1697_, v___x_1699_, v___y_1637_, v___y_1636_, v___y_1627_, v___y_1628_);
if (lean_obj_tag(v___x_1700_) == 0)
{
lean_object* v_a_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; 
v_a_1701_ = lean_ctor_get(v___x_1700_, 0);
lean_inc(v_a_1701_);
lean_dec_ref_known(v___x_1700_, 1);
v___x_1702_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__3));
lean_inc_ref(v___y_1629_);
v___x_1703_ = l_Lean_Name_mkStr2(v___y_1629_, v___x_1702_);
lean_inc_ref(v___x_1688_);
v___x_1704_ = lean_array_push(v___x_1688_, v_a_1692_);
v___x_1705_ = lean_array_push(v___x_1704_, v_a_1701_);
lean_inc(v___x_1703_);
v___x_1706_ = l_Lean_Meta_mkAppM(v___x_1703_, v___x_1705_, v___y_1637_, v___y_1636_, v___y_1627_, v___y_1628_);
if (lean_obj_tag(v___x_1706_) == 0)
{
lean_object* v_a_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; 
v_a_1707_ = lean_ctor_get(v___x_1706_, 0);
lean_inc(v_a_1707_);
lean_dec_ref_known(v___x_1706_, 1);
v___x_1708_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__13));
lean_inc_ref(v___x_1688_);
v___x_1709_ = lean_array_push(v___x_1688_, v_snd_1645_);
v___x_1710_ = lean_array_push(v___x_1709_, v_snd_1655_);
v___x_1711_ = l_Lean_Meta_mkAppM(v___x_1708_, v___x_1710_, v___y_1637_, v___y_1636_, v___y_1627_, v___y_1628_);
if (lean_obj_tag(v___x_1711_) == 0)
{
lean_object* v_a_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; 
v_a_1712_ = lean_ctor_get(v___x_1711_, 0);
lean_inc(v_a_1712_);
lean_dec_ref_known(v___x_1711_, 1);
lean_inc_ref(v___x_1688_);
v___x_1713_ = lean_array_push(v___x_1688_, v_snd_1665_);
v___x_1714_ = lean_array_push(v___x_1713_, v_snd_1678_);
v___x_1715_ = l_Lean_Meta_mkAppM(v___x_1708_, v___x_1714_, v___y_1637_, v___y_1636_, v___y_1627_, v___y_1628_);
if (lean_obj_tag(v___x_1715_) == 0)
{
lean_object* v_a_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; 
v_a_1716_ = lean_ctor_get(v___x_1715_, 0);
lean_inc(v_a_1716_);
lean_dec_ref_known(v___x_1715_, 1);
lean_inc_ref(v___x_1688_);
v___x_1717_ = lean_array_push(v___x_1688_, v_a_1712_);
v___x_1718_ = lean_array_push(v___x_1717_, v_a_1716_);
v___x_1719_ = l_Lean_Meta_mkAppM(v___x_1697_, v___x_1718_, v___y_1637_, v___y_1636_, v___y_1627_, v___y_1628_);
if (lean_obj_tag(v___x_1719_) == 0)
{
lean_object* v_a_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; 
v_a_1720_ = lean_ctor_get(v___x_1719_, 0);
lean_inc(v_a_1720_);
lean_dec_ref_known(v___x_1719_, 1);
lean_inc_ref(v___x_1688_);
v___x_1721_ = lean_array_push(v___x_1688_, v_a_1707_);
v___x_1722_ = lean_array_push(v___x_1721_, v_a_1720_);
lean_inc(v___x_1703_);
v___x_1723_ = l_Lean_Meta_mkAppM(v___x_1703_, v___x_1722_, v___y_1637_, v___y_1636_, v___y_1627_, v___y_1628_);
if (lean_obj_tag(v___x_1723_) == 0)
{
lean_object* v_a_1724_; lean_object* v___x_1726_; uint8_t v_isShared_1727_; uint8_t v_isSharedCheck_1787_; 
v_a_1724_ = lean_ctor_get(v___x_1723_, 0);
v_isSharedCheck_1787_ = !lean_is_exclusive(v___x_1723_);
if (v_isSharedCheck_1787_ == 0)
{
v___x_1726_ = v___x_1723_;
v_isShared_1727_ = v_isSharedCheck_1787_;
goto v_resetjp_1725_;
}
else
{
lean_inc(v_a_1724_);
lean_dec(v___x_1723_);
v___x_1726_ = lean_box(0);
v_isShared_1727_ = v_isSharedCheck_1787_;
goto v_resetjp_1725_;
}
v_resetjp_1725_:
{
lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; 
v___x_1728_ = lean_box(0);
v___x_1729_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__45, &lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__45_once, _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__45);
v___x_1730_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__46, &lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__46_once, _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__46);
v___x_1731_ = l_Lean_mkAppB(v___x_1730_, v_fst_1644_, v_fst_1654_);
v___x_1732_ = l_Lean_mkAppB(v___x_1730_, v_fst_1664_, v_fst_1677_);
v___x_1733_ = l_Lean_mkAppB(v___x_1729_, v___x_1731_, v___x_1732_);
if (v_polarity_794_ == 0)
{
lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1739_; 
lean_del_object(v___x_1726_);
v___x_1734_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__48));
lean_inc_ref(v___y_1629_);
v___x_1735_ = l_Lean_Name_mkStr1(v___y_1629_);
v___x_1736_ = l_Lean_Expr_const___override(v___x_1735_, v___x_1728_);
v___x_1737_ = l_Lean_mkAppB(v___x_1736_, v___y_1635_, v___y_1634_);
if (v_isShared_1652_ == 0)
{
lean_ctor_set_tag(v___x_1651_, 1);
lean_ctor_set(v___x_1651_, 0, v___x_1737_);
v___x_1739_ = v___x_1651_;
goto v_reusejp_1738_;
}
else
{
lean_object* v_reuseFailAlloc_1777_; 
v_reuseFailAlloc_1777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1777_, 0, v___x_1737_);
v___x_1739_ = v_reuseFailAlloc_1777_;
goto v_reusejp_1738_;
}
v_reusejp_1738_:
{
lean_object* v___x_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; 
v___x_1740_ = lean_mk_empty_array_with_capacity(v___y_1633_);
v___x_1741_ = lean_array_push(v___x_1740_, v___x_1739_);
v___x_1742_ = l_Lean_Meta_mkAppOptM(v___x_1734_, v___x_1741_, v___y_1637_, v___y_1636_, v___y_1627_, v___y_1628_);
if (lean_obj_tag(v___x_1742_) == 0)
{
lean_object* v_a_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; 
v_a_1743_ = lean_ctor_get(v___x_1742_, 0);
lean_inc(v_a_1743_);
lean_dec_ref_known(v___x_1742_, 1);
v___x_1744_ = lean_array_push(v___x_1688_, v_a_1743_);
v___x_1745_ = lean_array_push(v___x_1744_, v_a_1724_);
v___x_1746_ = l_Lean_Meta_mkAppM(v___x_1703_, v___x_1745_, v___y_1637_, v___y_1636_, v___y_1627_, v___y_1628_);
if (lean_obj_tag(v___x_1746_) == 0)
{
lean_object* v_a_1747_; lean_object* v___x_1749_; uint8_t v_isShared_1750_; uint8_t v_isSharedCheck_1760_; 
v_a_1747_ = lean_ctor_get(v___x_1746_, 0);
v_isSharedCheck_1760_ = !lean_is_exclusive(v___x_1746_);
if (v_isSharedCheck_1760_ == 0)
{
v___x_1749_ = v___x_1746_;
v_isShared_1750_ = v_isSharedCheck_1760_;
goto v_resetjp_1748_;
}
else
{
lean_inc(v_a_1747_);
lean_dec(v___x_1746_);
v___x_1749_ = lean_box(0);
v_isShared_1750_ = v_isSharedCheck_1760_;
goto v_resetjp_1748_;
}
v_resetjp_1748_:
{
lean_object* v___x_1752_; 
if (v_isShared_1681_ == 0)
{
lean_ctor_set(v___x_1680_, 1, v_a_1747_);
lean_ctor_set(v___x_1680_, 0, v___x_1733_);
v___x_1752_ = v___x_1680_;
goto v_reusejp_1751_;
}
else
{
lean_object* v_reuseFailAlloc_1759_; 
v_reuseFailAlloc_1759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1759_, 0, v___x_1733_);
lean_ctor_set(v_reuseFailAlloc_1759_, 1, v_a_1747_);
v___x_1752_ = v_reuseFailAlloc_1759_;
goto v_reusejp_1751_;
}
v_reusejp_1751_:
{
lean_object* v___x_1754_; 
if (v_isShared_1676_ == 0)
{
lean_ctor_set(v___x_1675_, 1, v___x_1752_);
lean_ctor_set(v___x_1675_, 0, v___y_1631_);
v___x_1754_ = v___x_1675_;
goto v_reusejp_1753_;
}
else
{
lean_object* v_reuseFailAlloc_1758_; 
v_reuseFailAlloc_1758_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1758_, 0, v___y_1631_);
lean_ctor_set(v_reuseFailAlloc_1758_, 1, v___x_1752_);
v___x_1754_ = v_reuseFailAlloc_1758_;
goto v_reusejp_1753_;
}
v_reusejp_1753_:
{
lean_object* v___x_1756_; 
if (v_isShared_1750_ == 0)
{
lean_ctor_set(v___x_1749_, 0, v___x_1754_);
v___x_1756_ = v___x_1749_;
goto v_reusejp_1755_;
}
else
{
lean_object* v_reuseFailAlloc_1757_; 
v_reuseFailAlloc_1757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1757_, 0, v___x_1754_);
v___x_1756_ = v_reuseFailAlloc_1757_;
goto v_reusejp_1755_;
}
v_reusejp_1755_:
{
return v___x_1756_;
}
}
}
}
}
else
{
lean_object* v_a_1761_; lean_object* v___x_1763_; uint8_t v_isShared_1764_; uint8_t v_isSharedCheck_1768_; 
lean_dec_ref(v___x_1733_);
lean_del_object(v___x_1680_);
lean_del_object(v___x_1675_);
lean_dec_ref(v___y_1631_);
v_a_1761_ = lean_ctor_get(v___x_1746_, 0);
v_isSharedCheck_1768_ = !lean_is_exclusive(v___x_1746_);
if (v_isSharedCheck_1768_ == 0)
{
v___x_1763_ = v___x_1746_;
v_isShared_1764_ = v_isSharedCheck_1768_;
goto v_resetjp_1762_;
}
else
{
lean_inc(v_a_1761_);
lean_dec(v___x_1746_);
v___x_1763_ = lean_box(0);
v_isShared_1764_ = v_isSharedCheck_1768_;
goto v_resetjp_1762_;
}
v_resetjp_1762_:
{
lean_object* v___x_1766_; 
if (v_isShared_1764_ == 0)
{
v___x_1766_ = v___x_1763_;
goto v_reusejp_1765_;
}
else
{
lean_object* v_reuseFailAlloc_1767_; 
v_reuseFailAlloc_1767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1767_, 0, v_a_1761_);
v___x_1766_ = v_reuseFailAlloc_1767_;
goto v_reusejp_1765_;
}
v_reusejp_1765_:
{
return v___x_1766_;
}
}
}
}
else
{
lean_object* v_a_1769_; lean_object* v___x_1771_; uint8_t v_isShared_1772_; uint8_t v_isSharedCheck_1776_; 
lean_dec_ref(v___x_1733_);
lean_dec(v_a_1724_);
lean_dec(v___x_1703_);
lean_dec_ref(v___x_1688_);
lean_del_object(v___x_1680_);
lean_del_object(v___x_1675_);
lean_dec_ref(v___y_1631_);
v_a_1769_ = lean_ctor_get(v___x_1742_, 0);
v_isSharedCheck_1776_ = !lean_is_exclusive(v___x_1742_);
if (v_isSharedCheck_1776_ == 0)
{
v___x_1771_ = v___x_1742_;
v_isShared_1772_ = v_isSharedCheck_1776_;
goto v_resetjp_1770_;
}
else
{
lean_inc(v_a_1769_);
lean_dec(v___x_1742_);
v___x_1771_ = lean_box(0);
v_isShared_1772_ = v_isSharedCheck_1776_;
goto v_resetjp_1770_;
}
v_resetjp_1770_:
{
lean_object* v___x_1774_; 
if (v_isShared_1772_ == 0)
{
v___x_1774_ = v___x_1771_;
goto v_reusejp_1773_;
}
else
{
lean_object* v_reuseFailAlloc_1775_; 
v_reuseFailAlloc_1775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1775_, 0, v_a_1769_);
v___x_1774_ = v_reuseFailAlloc_1775_;
goto v_reusejp_1773_;
}
v_reusejp_1773_:
{
return v___x_1774_;
}
}
}
}
}
else
{
lean_object* v___x_1779_; 
lean_dec(v___x_1703_);
lean_dec_ref(v___x_1688_);
lean_del_object(v___x_1651_);
lean_dec_ref(v___y_1635_);
lean_dec_ref(v___y_1634_);
if (v_isShared_1681_ == 0)
{
lean_ctor_set(v___x_1680_, 1, v_a_1724_);
lean_ctor_set(v___x_1680_, 0, v___x_1733_);
v___x_1779_ = v___x_1680_;
goto v_reusejp_1778_;
}
else
{
lean_object* v_reuseFailAlloc_1786_; 
v_reuseFailAlloc_1786_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1786_, 0, v___x_1733_);
lean_ctor_set(v_reuseFailAlloc_1786_, 1, v_a_1724_);
v___x_1779_ = v_reuseFailAlloc_1786_;
goto v_reusejp_1778_;
}
v_reusejp_1778_:
{
lean_object* v___x_1781_; 
if (v_isShared_1676_ == 0)
{
lean_ctor_set(v___x_1675_, 1, v___x_1779_);
lean_ctor_set(v___x_1675_, 0, v___y_1631_);
v___x_1781_ = v___x_1675_;
goto v_reusejp_1780_;
}
else
{
lean_object* v_reuseFailAlloc_1785_; 
v_reuseFailAlloc_1785_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1785_, 0, v___y_1631_);
lean_ctor_set(v_reuseFailAlloc_1785_, 1, v___x_1779_);
v___x_1781_ = v_reuseFailAlloc_1785_;
goto v_reusejp_1780_;
}
v_reusejp_1780_:
{
lean_object* v___x_1783_; 
if (v_isShared_1727_ == 0)
{
lean_ctor_set(v___x_1726_, 0, v___x_1781_);
v___x_1783_ = v___x_1726_;
goto v_reusejp_1782_;
}
else
{
lean_object* v_reuseFailAlloc_1784_; 
v_reuseFailAlloc_1784_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1784_, 0, v___x_1781_);
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
}
}
else
{
lean_object* v_a_1788_; lean_object* v___x_1790_; uint8_t v_isShared_1791_; uint8_t v_isSharedCheck_1795_; 
lean_dec(v___x_1703_);
lean_dec_ref(v___x_1688_);
lean_del_object(v___x_1680_);
lean_dec(v_fst_1677_);
lean_del_object(v___x_1675_);
lean_dec(v_fst_1664_);
lean_dec(v_fst_1654_);
lean_del_object(v___x_1651_);
lean_dec(v_fst_1644_);
lean_dec_ref(v___y_1635_);
lean_dec_ref(v___y_1634_);
lean_dec_ref(v___y_1631_);
v_a_1788_ = lean_ctor_get(v___x_1723_, 0);
v_isSharedCheck_1795_ = !lean_is_exclusive(v___x_1723_);
if (v_isSharedCheck_1795_ == 0)
{
v___x_1790_ = v___x_1723_;
v_isShared_1791_ = v_isSharedCheck_1795_;
goto v_resetjp_1789_;
}
else
{
lean_inc(v_a_1788_);
lean_dec(v___x_1723_);
v___x_1790_ = lean_box(0);
v_isShared_1791_ = v_isSharedCheck_1795_;
goto v_resetjp_1789_;
}
v_resetjp_1789_:
{
lean_object* v___x_1793_; 
if (v_isShared_1791_ == 0)
{
v___x_1793_ = v___x_1790_;
goto v_reusejp_1792_;
}
else
{
lean_object* v_reuseFailAlloc_1794_; 
v_reuseFailAlloc_1794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1794_, 0, v_a_1788_);
v___x_1793_ = v_reuseFailAlloc_1794_;
goto v_reusejp_1792_;
}
v_reusejp_1792_:
{
return v___x_1793_;
}
}
}
}
else
{
lean_object* v_a_1796_; lean_object* v___x_1798_; uint8_t v_isShared_1799_; uint8_t v_isSharedCheck_1803_; 
lean_dec(v_a_1707_);
lean_dec(v___x_1703_);
lean_dec_ref(v___x_1688_);
lean_del_object(v___x_1680_);
lean_dec(v_fst_1677_);
lean_del_object(v___x_1675_);
lean_dec(v_fst_1664_);
lean_dec(v_fst_1654_);
lean_del_object(v___x_1651_);
lean_dec(v_fst_1644_);
lean_dec_ref(v___y_1635_);
lean_dec_ref(v___y_1634_);
lean_dec_ref(v___y_1631_);
v_a_1796_ = lean_ctor_get(v___x_1719_, 0);
v_isSharedCheck_1803_ = !lean_is_exclusive(v___x_1719_);
if (v_isSharedCheck_1803_ == 0)
{
v___x_1798_ = v___x_1719_;
v_isShared_1799_ = v_isSharedCheck_1803_;
goto v_resetjp_1797_;
}
else
{
lean_inc(v_a_1796_);
lean_dec(v___x_1719_);
v___x_1798_ = lean_box(0);
v_isShared_1799_ = v_isSharedCheck_1803_;
goto v_resetjp_1797_;
}
v_resetjp_1797_:
{
lean_object* v___x_1801_; 
if (v_isShared_1799_ == 0)
{
v___x_1801_ = v___x_1798_;
goto v_reusejp_1800_;
}
else
{
lean_object* v_reuseFailAlloc_1802_; 
v_reuseFailAlloc_1802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1802_, 0, v_a_1796_);
v___x_1801_ = v_reuseFailAlloc_1802_;
goto v_reusejp_1800_;
}
v_reusejp_1800_:
{
return v___x_1801_;
}
}
}
}
else
{
lean_object* v_a_1804_; lean_object* v___x_1806_; uint8_t v_isShared_1807_; uint8_t v_isSharedCheck_1811_; 
lean_dec(v_a_1712_);
lean_dec(v_a_1707_);
lean_dec(v___x_1703_);
lean_dec_ref(v___x_1688_);
lean_del_object(v___x_1680_);
lean_dec(v_fst_1677_);
lean_del_object(v___x_1675_);
lean_dec(v_fst_1664_);
lean_dec(v_fst_1654_);
lean_del_object(v___x_1651_);
lean_dec(v_fst_1644_);
lean_dec_ref(v___y_1635_);
lean_dec_ref(v___y_1634_);
lean_dec_ref(v___y_1631_);
v_a_1804_ = lean_ctor_get(v___x_1715_, 0);
v_isSharedCheck_1811_ = !lean_is_exclusive(v___x_1715_);
if (v_isSharedCheck_1811_ == 0)
{
v___x_1806_ = v___x_1715_;
v_isShared_1807_ = v_isSharedCheck_1811_;
goto v_resetjp_1805_;
}
else
{
lean_inc(v_a_1804_);
lean_dec(v___x_1715_);
v___x_1806_ = lean_box(0);
v_isShared_1807_ = v_isSharedCheck_1811_;
goto v_resetjp_1805_;
}
v_resetjp_1805_:
{
lean_object* v___x_1809_; 
if (v_isShared_1807_ == 0)
{
v___x_1809_ = v___x_1806_;
goto v_reusejp_1808_;
}
else
{
lean_object* v_reuseFailAlloc_1810_; 
v_reuseFailAlloc_1810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1810_, 0, v_a_1804_);
v___x_1809_ = v_reuseFailAlloc_1810_;
goto v_reusejp_1808_;
}
v_reusejp_1808_:
{
return v___x_1809_;
}
}
}
}
else
{
lean_object* v_a_1812_; lean_object* v___x_1814_; uint8_t v_isShared_1815_; uint8_t v_isSharedCheck_1819_; 
lean_dec(v_a_1707_);
lean_dec(v___x_1703_);
lean_dec_ref(v___x_1688_);
lean_del_object(v___x_1680_);
lean_dec(v_snd_1678_);
lean_dec(v_fst_1677_);
lean_del_object(v___x_1675_);
lean_dec(v_snd_1665_);
lean_dec(v_fst_1664_);
lean_dec(v_fst_1654_);
lean_del_object(v___x_1651_);
lean_dec(v_fst_1644_);
lean_dec_ref(v___y_1635_);
lean_dec_ref(v___y_1634_);
lean_dec_ref(v___y_1631_);
v_a_1812_ = lean_ctor_get(v___x_1711_, 0);
v_isSharedCheck_1819_ = !lean_is_exclusive(v___x_1711_);
if (v_isSharedCheck_1819_ == 0)
{
v___x_1814_ = v___x_1711_;
v_isShared_1815_ = v_isSharedCheck_1819_;
goto v_resetjp_1813_;
}
else
{
lean_inc(v_a_1812_);
lean_dec(v___x_1711_);
v___x_1814_ = lean_box(0);
v_isShared_1815_ = v_isSharedCheck_1819_;
goto v_resetjp_1813_;
}
v_resetjp_1813_:
{
lean_object* v___x_1817_; 
if (v_isShared_1815_ == 0)
{
v___x_1817_ = v___x_1814_;
goto v_reusejp_1816_;
}
else
{
lean_object* v_reuseFailAlloc_1818_; 
v_reuseFailAlloc_1818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1818_, 0, v_a_1812_);
v___x_1817_ = v_reuseFailAlloc_1818_;
goto v_reusejp_1816_;
}
v_reusejp_1816_:
{
return v___x_1817_;
}
}
}
}
else
{
lean_object* v_a_1820_; lean_object* v___x_1822_; uint8_t v_isShared_1823_; uint8_t v_isSharedCheck_1827_; 
lean_dec(v___x_1703_);
lean_dec_ref(v___x_1688_);
lean_del_object(v___x_1680_);
lean_dec(v_snd_1678_);
lean_dec(v_fst_1677_);
lean_del_object(v___x_1675_);
lean_dec(v_snd_1665_);
lean_dec(v_fst_1664_);
lean_dec(v_snd_1655_);
lean_dec(v_fst_1654_);
lean_del_object(v___x_1651_);
lean_dec(v_snd_1645_);
lean_dec(v_fst_1644_);
lean_dec_ref(v___y_1635_);
lean_dec_ref(v___y_1634_);
lean_dec_ref(v___y_1631_);
v_a_1820_ = lean_ctor_get(v___x_1706_, 0);
v_isSharedCheck_1827_ = !lean_is_exclusive(v___x_1706_);
if (v_isSharedCheck_1827_ == 0)
{
v___x_1822_ = v___x_1706_;
v_isShared_1823_ = v_isSharedCheck_1827_;
goto v_resetjp_1821_;
}
else
{
lean_inc(v_a_1820_);
lean_dec(v___x_1706_);
v___x_1822_ = lean_box(0);
v_isShared_1823_ = v_isSharedCheck_1827_;
goto v_resetjp_1821_;
}
v_resetjp_1821_:
{
lean_object* v___x_1825_; 
if (v_isShared_1823_ == 0)
{
v___x_1825_ = v___x_1822_;
goto v_reusejp_1824_;
}
else
{
lean_object* v_reuseFailAlloc_1826_; 
v_reuseFailAlloc_1826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1826_, 0, v_a_1820_);
v___x_1825_ = v_reuseFailAlloc_1826_;
goto v_reusejp_1824_;
}
v_reusejp_1824_:
{
return v___x_1825_;
}
}
}
}
else
{
lean_object* v_a_1828_; lean_object* v___x_1830_; uint8_t v_isShared_1831_; uint8_t v_isSharedCheck_1835_; 
lean_dec(v_a_1692_);
lean_dec_ref(v___x_1688_);
lean_del_object(v___x_1680_);
lean_dec(v_snd_1678_);
lean_dec(v_fst_1677_);
lean_del_object(v___x_1675_);
lean_dec(v_snd_1665_);
lean_dec(v_fst_1664_);
lean_dec(v_snd_1655_);
lean_dec(v_fst_1654_);
lean_del_object(v___x_1651_);
lean_dec(v_snd_1645_);
lean_dec(v_fst_1644_);
lean_dec_ref(v___y_1635_);
lean_dec_ref(v___y_1634_);
lean_dec_ref(v___y_1631_);
v_a_1828_ = lean_ctor_get(v___x_1700_, 0);
v_isSharedCheck_1835_ = !lean_is_exclusive(v___x_1700_);
if (v_isSharedCheck_1835_ == 0)
{
v___x_1830_ = v___x_1700_;
v_isShared_1831_ = v_isSharedCheck_1835_;
goto v_resetjp_1829_;
}
else
{
lean_inc(v_a_1828_);
lean_dec(v___x_1700_);
v___x_1830_ = lean_box(0);
v_isShared_1831_ = v_isSharedCheck_1835_;
goto v_resetjp_1829_;
}
v_resetjp_1829_:
{
lean_object* v___x_1833_; 
if (v_isShared_1831_ == 0)
{
v___x_1833_ = v___x_1830_;
goto v_reusejp_1832_;
}
else
{
lean_object* v_reuseFailAlloc_1834_; 
v_reuseFailAlloc_1834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1834_, 0, v_a_1828_);
v___x_1833_ = v_reuseFailAlloc_1834_;
goto v_reusejp_1832_;
}
v_reusejp_1832_:
{
return v___x_1833_;
}
}
}
}
else
{
lean_object* v_a_1836_; lean_object* v___x_1838_; uint8_t v_isShared_1839_; uint8_t v_isSharedCheck_1843_; 
lean_dec(v_a_1694_);
lean_dec(v_a_1692_);
lean_dec_ref(v___x_1688_);
lean_del_object(v___x_1680_);
lean_dec(v_snd_1678_);
lean_dec(v_fst_1677_);
lean_del_object(v___x_1675_);
lean_dec(v_snd_1665_);
lean_dec(v_fst_1664_);
lean_dec(v_snd_1655_);
lean_dec(v_fst_1654_);
lean_del_object(v___x_1651_);
lean_dec(v_snd_1645_);
lean_dec(v_fst_1644_);
lean_dec_ref(v___y_1635_);
lean_dec_ref(v___y_1634_);
lean_dec_ref(v___y_1631_);
v_a_1836_ = lean_ctor_get(v___x_1695_, 0);
v_isSharedCheck_1843_ = !lean_is_exclusive(v___x_1695_);
if (v_isSharedCheck_1843_ == 0)
{
v___x_1838_ = v___x_1695_;
v_isShared_1839_ = v_isSharedCheck_1843_;
goto v_resetjp_1837_;
}
else
{
lean_inc(v_a_1836_);
lean_dec(v___x_1695_);
v___x_1838_ = lean_box(0);
v_isShared_1839_ = v_isSharedCheck_1843_;
goto v_resetjp_1837_;
}
v_resetjp_1837_:
{
lean_object* v___x_1841_; 
if (v_isShared_1839_ == 0)
{
v___x_1841_ = v___x_1838_;
goto v_reusejp_1840_;
}
else
{
lean_object* v_reuseFailAlloc_1842_; 
v_reuseFailAlloc_1842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1842_, 0, v_a_1836_);
v___x_1841_ = v_reuseFailAlloc_1842_;
goto v_reusejp_1840_;
}
v_reusejp_1840_:
{
return v___x_1841_;
}
}
}
}
else
{
lean_object* v_a_1844_; lean_object* v___x_1846_; uint8_t v_isShared_1847_; uint8_t v_isSharedCheck_1851_; 
lean_dec(v_a_1692_);
lean_dec_ref(v___x_1688_);
lean_del_object(v___x_1680_);
lean_dec(v_snd_1678_);
lean_dec(v_fst_1677_);
lean_del_object(v___x_1675_);
lean_dec(v_snd_1665_);
lean_dec(v_fst_1664_);
lean_dec(v_snd_1655_);
lean_dec(v_fst_1654_);
lean_del_object(v___x_1651_);
lean_dec(v_snd_1645_);
lean_dec(v_fst_1644_);
lean_dec_ref(v___y_1635_);
lean_dec_ref(v___y_1634_);
lean_dec_ref(v___y_1631_);
v_a_1844_ = lean_ctor_get(v___x_1693_, 0);
v_isSharedCheck_1851_ = !lean_is_exclusive(v___x_1693_);
if (v_isSharedCheck_1851_ == 0)
{
v___x_1846_ = v___x_1693_;
v_isShared_1847_ = v_isSharedCheck_1851_;
goto v_resetjp_1845_;
}
else
{
lean_inc(v_a_1844_);
lean_dec(v___x_1693_);
v___x_1846_ = lean_box(0);
v_isShared_1847_ = v_isSharedCheck_1851_;
goto v_resetjp_1845_;
}
v_resetjp_1845_:
{
lean_object* v___x_1849_; 
if (v_isShared_1847_ == 0)
{
v___x_1849_ = v___x_1846_;
goto v_reusejp_1848_;
}
else
{
lean_object* v_reuseFailAlloc_1850_; 
v_reuseFailAlloc_1850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1850_, 0, v_a_1844_);
v___x_1849_ = v_reuseFailAlloc_1850_;
goto v_reusejp_1848_;
}
v_reusejp_1848_:
{
return v___x_1849_;
}
}
}
}
else
{
lean_object* v_a_1852_; lean_object* v___x_1854_; uint8_t v_isShared_1855_; uint8_t v_isSharedCheck_1859_; 
lean_dec_ref(v___x_1688_);
lean_del_object(v___x_1680_);
lean_dec(v_snd_1678_);
lean_dec(v_fst_1677_);
lean_del_object(v___x_1675_);
lean_dec(v_snd_1665_);
lean_dec(v_fst_1664_);
lean_dec(v_snd_1655_);
lean_dec(v_fst_1654_);
lean_del_object(v___x_1651_);
lean_dec(v_snd_1645_);
lean_dec(v_fst_1644_);
lean_dec_ref(v___y_1635_);
lean_dec_ref(v___y_1634_);
lean_dec_ref(v___y_1631_);
v_a_1852_ = lean_ctor_get(v___x_1691_, 0);
v_isSharedCheck_1859_ = !lean_is_exclusive(v___x_1691_);
if (v_isSharedCheck_1859_ == 0)
{
v___x_1854_ = v___x_1691_;
v_isShared_1855_ = v_isSharedCheck_1859_;
goto v_resetjp_1853_;
}
else
{
lean_inc(v_a_1852_);
lean_dec(v___x_1691_);
v___x_1854_ = lean_box(0);
v_isShared_1855_ = v_isSharedCheck_1859_;
goto v_resetjp_1853_;
}
v_resetjp_1853_:
{
lean_object* v___x_1857_; 
if (v_isShared_1855_ == 0)
{
v___x_1857_ = v___x_1854_;
goto v_reusejp_1856_;
}
else
{
lean_object* v_reuseFailAlloc_1858_; 
v_reuseFailAlloc_1858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1858_, 0, v_a_1852_);
v___x_1857_ = v_reuseFailAlloc_1858_;
goto v_reusejp_1856_;
}
v_reusejp_1856_:
{
return v___x_1857_;
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
lean_dec(v_snd_1665_);
lean_dec(v_fst_1664_);
lean_del_object(v___x_1661_);
lean_dec(v_snd_1655_);
lean_dec(v_fst_1654_);
lean_del_object(v___x_1651_);
lean_dec(v_snd_1645_);
lean_dec(v_fst_1644_);
lean_dec_ref(v___y_1635_);
lean_dec_ref(v___y_1634_);
lean_dec_ref(v___y_1631_);
return v___x_1668_;
}
}
else
{
lean_object* v_a_1866_; lean_object* v___x_1868_; uint8_t v_isShared_1869_; uint8_t v_isSharedCheck_1873_; 
lean_dec(v_snd_1665_);
lean_dec(v_fst_1664_);
lean_del_object(v___x_1661_);
lean_dec(v_snd_1655_);
lean_dec(v_fst_1654_);
lean_del_object(v___x_1651_);
lean_dec(v_snd_1645_);
lean_dec(v_fst_1644_);
lean_dec_ref(v___y_1635_);
lean_dec_ref(v___y_1634_);
lean_dec_ref(v___y_1631_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
v_a_1866_ = lean_ctor_get(v___x_1666_, 0);
v_isSharedCheck_1873_ = !lean_is_exclusive(v___x_1666_);
if (v_isSharedCheck_1873_ == 0)
{
v___x_1868_ = v___x_1666_;
v_isShared_1869_ = v_isSharedCheck_1873_;
goto v_resetjp_1867_;
}
else
{
lean_inc(v_a_1866_);
lean_dec(v___x_1666_);
v___x_1868_ = lean_box(0);
v_isShared_1869_ = v_isSharedCheck_1873_;
goto v_resetjp_1867_;
}
v_resetjp_1867_:
{
lean_object* v___x_1871_; 
if (v_isShared_1869_ == 0)
{
v___x_1871_ = v___x_1868_;
goto v_reusejp_1870_;
}
else
{
lean_object* v_reuseFailAlloc_1872_; 
v_reuseFailAlloc_1872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1872_, 0, v_a_1866_);
v___x_1871_ = v_reuseFailAlloc_1872_;
goto v_reusejp_1870_;
}
v_reusejp_1870_:
{
return v___x_1871_;
}
}
}
}
}
else
{
lean_dec(v_snd_1655_);
lean_dec(v_fst_1654_);
lean_del_object(v___x_1651_);
lean_dec(v_snd_1645_);
lean_dec(v_fst_1644_);
lean_dec_ref(v___y_1635_);
lean_dec_ref(v___y_1634_);
lean_dec(v___y_1632_);
lean_dec_ref(v___y_1631_);
lean_dec_ref(v_f_793_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
return v___x_1658_;
}
}
else
{
lean_object* v_a_1875_; lean_object* v___x_1877_; uint8_t v_isShared_1878_; uint8_t v_isSharedCheck_1882_; 
lean_dec(v_snd_1655_);
lean_dec(v_fst_1654_);
lean_del_object(v___x_1651_);
lean_dec(v_snd_1645_);
lean_dec(v_fst_1644_);
lean_dec_ref(v___y_1635_);
lean_dec_ref(v___y_1634_);
lean_dec(v___y_1632_);
lean_dec_ref(v___y_1631_);
lean_dec_ref(v_f_793_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
v_a_1875_ = lean_ctor_get(v___x_1656_, 0);
v_isSharedCheck_1882_ = !lean_is_exclusive(v___x_1656_);
if (v_isSharedCheck_1882_ == 0)
{
v___x_1877_ = v___x_1656_;
v_isShared_1878_ = v_isSharedCheck_1882_;
goto v_resetjp_1876_;
}
else
{
lean_inc(v_a_1875_);
lean_dec(v___x_1656_);
v___x_1877_ = lean_box(0);
v_isShared_1878_ = v_isSharedCheck_1882_;
goto v_resetjp_1876_;
}
v_resetjp_1876_:
{
lean_object* v___x_1880_; 
if (v_isShared_1878_ == 0)
{
v___x_1880_ = v___x_1877_;
goto v_reusejp_1879_;
}
else
{
lean_object* v_reuseFailAlloc_1881_; 
v_reuseFailAlloc_1881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1881_, 0, v_a_1875_);
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
}
else
{
lean_dec(v_snd_1645_);
lean_dec(v_fst_1644_);
lean_dec_ref(v___y_1635_);
lean_dec_ref(v___y_1634_);
lean_dec(v___y_1632_);
lean_dec_ref(v___y_1631_);
lean_dec_ref(v_f_793_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
return v___x_1648_;
}
}
else
{
lean_object* v_a_1884_; lean_object* v___x_1886_; uint8_t v_isShared_1887_; uint8_t v_isSharedCheck_1891_; 
lean_dec(v_snd_1645_);
lean_dec(v_fst_1644_);
lean_dec_ref(v___y_1635_);
lean_dec_ref(v___y_1634_);
lean_dec(v___y_1632_);
lean_dec_ref(v___y_1631_);
lean_dec_ref(v_f_793_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
v_a_1884_ = lean_ctor_get(v___x_1646_, 0);
v_isSharedCheck_1891_ = !lean_is_exclusive(v___x_1646_);
if (v_isSharedCheck_1891_ == 0)
{
v___x_1886_ = v___x_1646_;
v_isShared_1887_ = v_isSharedCheck_1891_;
goto v_resetjp_1885_;
}
else
{
lean_inc(v_a_1884_);
lean_dec(v___x_1646_);
v___x_1886_ = lean_box(0);
v_isShared_1887_ = v_isSharedCheck_1891_;
goto v_resetjp_1885_;
}
v_resetjp_1885_:
{
lean_object* v___x_1889_; 
if (v_isShared_1887_ == 0)
{
v___x_1889_ = v___x_1886_;
goto v_reusejp_1888_;
}
else
{
lean_object* v_reuseFailAlloc_1890_; 
v_reuseFailAlloc_1890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1890_, 0, v_a_1884_);
v___x_1889_ = v_reuseFailAlloc_1890_;
goto v_reusejp_1888_;
}
v_reusejp_1888_:
{
return v___x_1889_;
}
}
}
}
else
{
lean_dec_ref(v___y_1635_);
lean_dec_ref(v___y_1634_);
lean_dec(v___y_1632_);
lean_dec_ref(v___y_1631_);
lean_dec_ref(v_f_793_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
return v___x_1641_;
}
}
else
{
lean_object* v_a_1892_; lean_object* v___x_1894_; uint8_t v_isShared_1895_; uint8_t v_isSharedCheck_1899_; 
lean_dec_ref(v___y_1635_);
lean_dec_ref(v___y_1634_);
lean_dec(v___y_1632_);
lean_dec_ref(v___y_1631_);
lean_dec_ref(v_f_793_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
v_a_1892_ = lean_ctor_get(v___x_1639_, 0);
v_isSharedCheck_1899_ = !lean_is_exclusive(v___x_1639_);
if (v_isSharedCheck_1899_ == 0)
{
v___x_1894_ = v___x_1639_;
v_isShared_1895_ = v_isSharedCheck_1899_;
goto v_resetjp_1893_;
}
else
{
lean_inc(v_a_1892_);
lean_dec(v___x_1639_);
v___x_1894_ = lean_box(0);
v_isShared_1895_ = v_isSharedCheck_1899_;
goto v_resetjp_1893_;
}
v_resetjp_1893_:
{
lean_object* v___x_1897_; 
if (v_isShared_1895_ == 0)
{
v___x_1897_ = v___x_1894_;
goto v_reusejp_1896_;
}
else
{
lean_object* v_reuseFailAlloc_1898_; 
v_reuseFailAlloc_1898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1898_, 0, v_a_1892_);
v___x_1897_ = v_reuseFailAlloc_1898_;
goto v_reusejp_1896_;
}
v_reusejp_1896_:
{
return v___x_1897_;
}
}
}
}
v___jp_1900_:
{
lean_object* v___x_1910_; lean_object* v___x_1911_; 
v___x_1910_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_f_793_);
v___x_1911_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0(v_f_793_, v___x_1910_, v___y_1905_, v___y_1901_, v___y_1908_, v___y_1907_, v___y_1903_, v___y_1902_);
if (lean_obj_tag(v___x_1911_) == 0)
{
lean_object* v_a_1912_; lean_object* v___x_1913_; 
v_a_1912_ = lean_ctor_get(v___x_1911_, 0);
lean_inc(v_a_1912_);
lean_dec_ref_known(v___x_1911_, 1);
lean_inc_ref(v_vars_792_);
lean_inc_ref(v_sorts_791_);
v___x_1913_ = lp_vampireReplay_Vampire_Reconstruct_formula(v_sorts_791_, v_vars_792_, v_a_1912_, v___y_1905_, v___y_1901_, v___y_1908_, v___y_1907_, v___y_1903_, v___y_1902_);
if (lean_obj_tag(v___x_1913_) == 0)
{
lean_object* v_a_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; 
v_a_1914_ = lean_ctor_get(v___x_1913_, 0);
lean_inc(v_a_1914_);
lean_dec_ref_known(v___x_1913_, 1);
v___x_1915_ = lean_unsigned_to_nat(1u);
lean_inc_ref(v_f_793_);
v___x_1916_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0(v_f_793_, v___x_1915_, v___y_1905_, v___y_1901_, v___y_1908_, v___y_1907_, v___y_1903_, v___y_1902_);
if (lean_obj_tag(v___x_1916_) == 0)
{
lean_object* v_a_1917_; lean_object* v___x_1918_; 
v_a_1917_ = lean_ctor_get(v___x_1916_, 0);
lean_inc(v_a_1917_);
lean_dec_ref_known(v___x_1916_, 1);
lean_inc_ref(v_vars_792_);
lean_inc_ref(v_sorts_791_);
v___x_1918_ = lp_vampireReplay_Vampire_Reconstruct_formula(v_sorts_791_, v_vars_792_, v_a_1917_, v___y_1905_, v___y_1901_, v___y_1908_, v___y_1907_, v___y_1903_, v___y_1902_);
if (lean_obj_tag(v___x_1918_) == 0)
{
if (v_expand_790_ == 0)
{
lean_object* v___x_1919_; 
lean_dec_ref_known(v___x_1918_, 1);
lean_dec(v_a_1914_);
lean_inc_ref(v_f_793_);
v___x_1919_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0(v_f_793_, v___x_1910_, v___y_1905_, v___y_1901_, v___y_1908_, v___y_1907_, v___y_1903_, v___y_1902_);
if (lean_obj_tag(v___x_1919_) == 0)
{
lean_object* v_a_1920_; lean_object* v___x_1921_; 
v_a_1920_ = lean_ctor_get(v___x_1919_, 0);
lean_inc(v_a_1920_);
lean_dec_ref_known(v___x_1919_, 1);
lean_inc_ref(v_vars_792_);
lean_inc_ref(v_sorts_791_);
v___x_1921_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize(v_expand_790_, v_sorts_791_, v_vars_792_, v_a_1920_, v___x_1394_, v___y_1905_, v___y_1901_, v___y_1908_, v___y_1907_, v___y_1903_, v___y_1902_);
if (lean_obj_tag(v___x_1921_) == 0)
{
lean_object* v_a_1922_; lean_object* v_snd_1923_; lean_object* v_fst_1924_; lean_object* v_snd_1925_; lean_object* v___x_1926_; 
v_a_1922_ = lean_ctor_get(v___x_1921_, 0);
lean_inc(v_a_1922_);
lean_dec_ref_known(v___x_1921_, 1);
v_snd_1923_ = lean_ctor_get(v_a_1922_, 1);
lean_inc(v_snd_1923_);
lean_dec(v_a_1922_);
v_fst_1924_ = lean_ctor_get(v_snd_1923_, 0);
lean_inc(v_fst_1924_);
v_snd_1925_ = lean_ctor_get(v_snd_1923_, 1);
lean_inc(v_snd_1925_);
lean_dec(v_snd_1923_);
v___x_1926_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0(v_f_793_, v___x_1915_, v___y_1905_, v___y_1901_, v___y_1908_, v___y_1907_, v___y_1903_, v___y_1902_);
if (lean_obj_tag(v___x_1926_) == 0)
{
lean_object* v_a_1927_; lean_object* v___x_1928_; 
v_a_1927_ = lean_ctor_get(v___x_1926_, 0);
lean_inc(v_a_1927_);
lean_dec_ref_known(v___x_1926_, 1);
v___x_1928_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize(v_expand_790_, v_sorts_791_, v_vars_792_, v_a_1927_, v___x_1394_, v___y_1905_, v___y_1901_, v___y_1908_, v___y_1907_, v___y_1903_, v___y_1902_);
if (lean_obj_tag(v___x_1928_) == 0)
{
lean_object* v_a_1929_; lean_object* v_snd_1930_; lean_object* v_fst_1931_; lean_object* v_snd_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; 
v_a_1929_ = lean_ctor_get(v___x_1928_, 0);
lean_inc(v_a_1929_);
lean_dec_ref_known(v___x_1928_, 1);
v_snd_1930_ = lean_ctor_get(v_a_1929_, 1);
lean_inc(v_snd_1930_);
lean_dec(v_a_1929_);
v_fst_1931_ = lean_ctor_get(v_snd_1930_, 0);
lean_inc(v_fst_1931_);
v_snd_1932_ = lean_ctor_get(v_snd_1930_, 1);
lean_inc(v_snd_1932_);
lean_dec(v_snd_1930_);
v___x_1933_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__53));
v___x_1934_ = lean_unsigned_to_nat(2u);
v___x_1935_ = lean_mk_empty_array_with_capacity(v___x_1934_);
v___x_1936_ = lean_array_push(v___x_1935_, v_snd_1925_);
v___x_1937_ = lean_array_push(v___x_1936_, v_snd_1932_);
v___x_1938_ = l_Lean_Meta_mkAppM(v___x_1933_, v___x_1937_, v___y_1908_, v___y_1907_, v___y_1903_, v___y_1902_);
if (lean_obj_tag(v___x_1938_) == 0)
{
lean_object* v_a_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; 
v_a_1939_ = lean_ctor_get(v___x_1938_, 0);
lean_inc(v_a_1939_);
lean_dec_ref_known(v___x_1938_, 1);
lean_inc_ref(v___y_1904_);
v___x_1940_ = l_Lean_Name_mkStr1(v___y_1904_);
v___x_1941_ = lean_box(0);
v___x_1942_ = l_Lean_Expr_const___override(v___x_1940_, v___x_1941_);
v___x_1943_ = l_Lean_mkAppB(v___x_1942_, v_fst_1924_, v_fst_1931_);
if (v___y_1909_ == 0)
{
if (v_polarity_794_ == 0)
{
v___y_803_ = v_a_1939_;
v___y_804_ = v___y_1906_;
v___y_805_ = v___x_1943_;
goto v___jp_802_;
}
else
{
v___y_810_ = v___x_1941_;
v___y_811_ = v_a_1939_;
v___y_812_ = v___y_1902_;
v___y_813_ = v___y_1903_;
v___y_814_ = v___x_1915_;
v___y_815_ = v___y_1906_;
v___y_816_ = v___y_1907_;
v___y_817_ = v___x_1943_;
v___y_818_ = v___y_1908_;
goto v___jp_809_;
}
}
else
{
if (v_polarity_794_ == 0)
{
v___y_810_ = v___x_1941_;
v___y_811_ = v_a_1939_;
v___y_812_ = v___y_1902_;
v___y_813_ = v___y_1903_;
v___y_814_ = v___x_1915_;
v___y_815_ = v___y_1906_;
v___y_816_ = v___y_1907_;
v___y_817_ = v___x_1943_;
v___y_818_ = v___y_1908_;
goto v___jp_809_;
}
else
{
v___y_803_ = v_a_1939_;
v___y_804_ = v___y_1906_;
v___y_805_ = v___x_1943_;
goto v___jp_802_;
}
}
}
else
{
lean_object* v_a_1944_; lean_object* v___x_1946_; uint8_t v_isShared_1947_; uint8_t v_isSharedCheck_1951_; 
lean_dec(v_fst_1931_);
lean_dec(v_fst_1924_);
lean_dec_ref(v___y_1906_);
v_a_1944_ = lean_ctor_get(v___x_1938_, 0);
v_isSharedCheck_1951_ = !lean_is_exclusive(v___x_1938_);
if (v_isSharedCheck_1951_ == 0)
{
v___x_1946_ = v___x_1938_;
v_isShared_1947_ = v_isSharedCheck_1951_;
goto v_resetjp_1945_;
}
else
{
lean_inc(v_a_1944_);
lean_dec(v___x_1938_);
v___x_1946_ = lean_box(0);
v_isShared_1947_ = v_isSharedCheck_1951_;
goto v_resetjp_1945_;
}
v_resetjp_1945_:
{
lean_object* v___x_1949_; 
if (v_isShared_1947_ == 0)
{
v___x_1949_ = v___x_1946_;
goto v_reusejp_1948_;
}
else
{
lean_object* v_reuseFailAlloc_1950_; 
v_reuseFailAlloc_1950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1950_, 0, v_a_1944_);
v___x_1949_ = v_reuseFailAlloc_1950_;
goto v_reusejp_1948_;
}
v_reusejp_1948_:
{
return v___x_1949_;
}
}
}
}
else
{
lean_dec(v_snd_1925_);
lean_dec(v_fst_1924_);
lean_dec_ref(v___y_1906_);
return v___x_1928_;
}
}
else
{
lean_object* v_a_1952_; lean_object* v___x_1954_; uint8_t v_isShared_1955_; uint8_t v_isSharedCheck_1959_; 
lean_dec(v_snd_1925_);
lean_dec(v_fst_1924_);
lean_dec_ref(v___y_1906_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
v_a_1952_ = lean_ctor_get(v___x_1926_, 0);
v_isSharedCheck_1959_ = !lean_is_exclusive(v___x_1926_);
if (v_isSharedCheck_1959_ == 0)
{
v___x_1954_ = v___x_1926_;
v_isShared_1955_ = v_isSharedCheck_1959_;
goto v_resetjp_1953_;
}
else
{
lean_inc(v_a_1952_);
lean_dec(v___x_1926_);
v___x_1954_ = lean_box(0);
v_isShared_1955_ = v_isSharedCheck_1959_;
goto v_resetjp_1953_;
}
v_resetjp_1953_:
{
lean_object* v___x_1957_; 
if (v_isShared_1955_ == 0)
{
v___x_1957_ = v___x_1954_;
goto v_reusejp_1956_;
}
else
{
lean_object* v_reuseFailAlloc_1958_; 
v_reuseFailAlloc_1958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1958_, 0, v_a_1952_);
v___x_1957_ = v_reuseFailAlloc_1958_;
goto v_reusejp_1956_;
}
v_reusejp_1956_:
{
return v___x_1957_;
}
}
}
}
else
{
lean_dec_ref(v___y_1906_);
lean_dec_ref(v_f_793_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
return v___x_1921_;
}
}
else
{
lean_object* v_a_1960_; lean_object* v___x_1962_; uint8_t v_isShared_1963_; uint8_t v_isSharedCheck_1967_; 
lean_dec_ref(v___y_1906_);
lean_dec_ref(v_f_793_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
v_a_1960_ = lean_ctor_get(v___x_1919_, 0);
v_isSharedCheck_1967_ = !lean_is_exclusive(v___x_1919_);
if (v_isSharedCheck_1967_ == 0)
{
v___x_1962_ = v___x_1919_;
v_isShared_1963_ = v_isSharedCheck_1967_;
goto v_resetjp_1961_;
}
else
{
lean_inc(v_a_1960_);
lean_dec(v___x_1919_);
v___x_1962_ = lean_box(0);
v_isShared_1963_ = v_isSharedCheck_1967_;
goto v_resetjp_1961_;
}
v_resetjp_1961_:
{
lean_object* v___x_1965_; 
if (v_isShared_1963_ == 0)
{
v___x_1965_ = v___x_1962_;
goto v_reusejp_1964_;
}
else
{
lean_object* v_reuseFailAlloc_1966_; 
v_reuseFailAlloc_1966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1966_, 0, v_a_1960_);
v___x_1965_ = v_reuseFailAlloc_1966_;
goto v_reusejp_1964_;
}
v_reusejp_1964_:
{
return v___x_1965_;
}
}
}
}
else
{
lean_object* v_a_1968_; uint8_t v___x_1969_; 
v_a_1968_ = lean_ctor_get(v___x_1918_, 0);
lean_inc(v_a_1968_);
lean_dec_ref_known(v___x_1918_, 1);
v___x_1969_ = 0;
if (v___y_1909_ == 0)
{
if (v_polarity_794_ == 0)
{
v___y_1626_ = v___y_1901_;
v___y_1627_ = v___y_1903_;
v___y_1628_ = v___y_1902_;
v___y_1629_ = v___y_1904_;
v___y_1630_ = v___y_1905_;
v___y_1631_ = v___y_1906_;
v___y_1632_ = v___x_1910_;
v___y_1633_ = v___x_1915_;
v___y_1634_ = v_a_1968_;
v___y_1635_ = v_a_1914_;
v___y_1636_ = v___y_1907_;
v___y_1637_ = v___y_1908_;
v___y_1638_ = v___x_1969_;
goto v___jp_1625_;
}
else
{
v___y_1435_ = v___y_1901_;
v___y_1436_ = v___y_1903_;
v___y_1437_ = v___y_1902_;
v___y_1438_ = v___y_1904_;
v___y_1439_ = v___y_1905_;
v___y_1440_ = v___y_1906_;
v___y_1441_ = v___x_1910_;
v___y_1442_ = v___x_1915_;
v___y_1443_ = v_a_1968_;
v___y_1444_ = v_a_1914_;
v___y_1445_ = v___y_1907_;
v___y_1446_ = v___y_1908_;
v___y_1447_ = v___y_1909_;
goto v___jp_1434_;
}
}
else
{
if (v_polarity_794_ == 0)
{
v___y_1435_ = v___y_1901_;
v___y_1436_ = v___y_1903_;
v___y_1437_ = v___y_1902_;
v___y_1438_ = v___y_1904_;
v___y_1439_ = v___y_1905_;
v___y_1440_ = v___y_1906_;
v___y_1441_ = v___x_1910_;
v___y_1442_ = v___x_1915_;
v___y_1443_ = v_a_1968_;
v___y_1444_ = v_a_1914_;
v___y_1445_ = v___y_1907_;
v___y_1446_ = v___y_1908_;
v___y_1447_ = v_polarity_794_;
goto v___jp_1434_;
}
else
{
v___y_1626_ = v___y_1901_;
v___y_1627_ = v___y_1903_;
v___y_1628_ = v___y_1902_;
v___y_1629_ = v___y_1904_;
v___y_1630_ = v___y_1905_;
v___y_1631_ = v___y_1906_;
v___y_1632_ = v___x_1910_;
v___y_1633_ = v___x_1915_;
v___y_1634_ = v_a_1968_;
v___y_1635_ = v_a_1914_;
v___y_1636_ = v___y_1907_;
v___y_1637_ = v___y_1908_;
v___y_1638_ = v___x_1969_;
goto v___jp_1625_;
}
}
}
}
else
{
lean_object* v_a_1970_; lean_object* v___x_1972_; uint8_t v_isShared_1973_; uint8_t v_isSharedCheck_1977_; 
lean_dec(v_a_1914_);
lean_dec_ref(v___y_1906_);
lean_dec_ref(v_f_793_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
v_a_1970_ = lean_ctor_get(v___x_1918_, 0);
v_isSharedCheck_1977_ = !lean_is_exclusive(v___x_1918_);
if (v_isSharedCheck_1977_ == 0)
{
v___x_1972_ = v___x_1918_;
v_isShared_1973_ = v_isSharedCheck_1977_;
goto v_resetjp_1971_;
}
else
{
lean_inc(v_a_1970_);
lean_dec(v___x_1918_);
v___x_1972_ = lean_box(0);
v_isShared_1973_ = v_isSharedCheck_1977_;
goto v_resetjp_1971_;
}
v_resetjp_1971_:
{
lean_object* v___x_1975_; 
if (v_isShared_1973_ == 0)
{
v___x_1975_ = v___x_1972_;
goto v_reusejp_1974_;
}
else
{
lean_object* v_reuseFailAlloc_1976_; 
v_reuseFailAlloc_1976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1976_, 0, v_a_1970_);
v___x_1975_ = v_reuseFailAlloc_1976_;
goto v_reusejp_1974_;
}
v_reusejp_1974_:
{
return v___x_1975_;
}
}
}
}
else
{
lean_object* v_a_1978_; lean_object* v___x_1980_; uint8_t v_isShared_1981_; uint8_t v_isSharedCheck_1985_; 
lean_dec(v_a_1914_);
lean_dec_ref(v___y_1906_);
lean_dec_ref(v_f_793_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
v_a_1978_ = lean_ctor_get(v___x_1916_, 0);
v_isSharedCheck_1985_ = !lean_is_exclusive(v___x_1916_);
if (v_isSharedCheck_1985_ == 0)
{
v___x_1980_ = v___x_1916_;
v_isShared_1981_ = v_isSharedCheck_1985_;
goto v_resetjp_1979_;
}
else
{
lean_inc(v_a_1978_);
lean_dec(v___x_1916_);
v___x_1980_ = lean_box(0);
v_isShared_1981_ = v_isSharedCheck_1985_;
goto v_resetjp_1979_;
}
v_resetjp_1979_:
{
lean_object* v___x_1983_; 
if (v_isShared_1981_ == 0)
{
v___x_1983_ = v___x_1980_;
goto v_reusejp_1982_;
}
else
{
lean_object* v_reuseFailAlloc_1984_; 
v_reuseFailAlloc_1984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1984_, 0, v_a_1978_);
v___x_1983_ = v_reuseFailAlloc_1984_;
goto v_reusejp_1982_;
}
v_reusejp_1982_:
{
return v___x_1983_;
}
}
}
}
else
{
lean_object* v_a_1986_; lean_object* v___x_1988_; uint8_t v_isShared_1989_; uint8_t v_isSharedCheck_1993_; 
lean_dec_ref(v___y_1906_);
lean_dec_ref(v_f_793_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
v_a_1986_ = lean_ctor_get(v___x_1913_, 0);
v_isSharedCheck_1993_ = !lean_is_exclusive(v___x_1913_);
if (v_isSharedCheck_1993_ == 0)
{
v___x_1988_ = v___x_1913_;
v_isShared_1989_ = v_isSharedCheck_1993_;
goto v_resetjp_1987_;
}
else
{
lean_inc(v_a_1986_);
lean_dec(v___x_1913_);
v___x_1988_ = lean_box(0);
v_isShared_1989_ = v_isSharedCheck_1993_;
goto v_resetjp_1987_;
}
v_resetjp_1987_:
{
lean_object* v___x_1991_; 
if (v_isShared_1989_ == 0)
{
v___x_1991_ = v___x_1988_;
goto v_reusejp_1990_;
}
else
{
lean_object* v_reuseFailAlloc_1992_; 
v_reuseFailAlloc_1992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1992_, 0, v_a_1986_);
v___x_1991_ = v_reuseFailAlloc_1992_;
goto v_reusejp_1990_;
}
v_reusejp_1990_:
{
return v___x_1991_;
}
}
}
}
else
{
lean_object* v_a_1994_; lean_object* v___x_1996_; uint8_t v_isShared_1997_; uint8_t v_isSharedCheck_2001_; 
lean_dec_ref(v___y_1906_);
lean_dec_ref(v_f_793_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
v_a_1994_ = lean_ctor_get(v___x_1911_, 0);
v_isSharedCheck_2001_ = !lean_is_exclusive(v___x_1911_);
if (v_isSharedCheck_2001_ == 0)
{
v___x_1996_ = v___x_1911_;
v_isShared_1997_ = v_isSharedCheck_2001_;
goto v_resetjp_1995_;
}
else
{
lean_inc(v_a_1994_);
lean_dec(v___x_1911_);
v___x_1996_ = lean_box(0);
v_isShared_1997_ = v_isSharedCheck_2001_;
goto v_resetjp_1995_;
}
v_resetjp_1995_:
{
lean_object* v___x_1999_; 
if (v_isShared_1997_ == 0)
{
v___x_1999_ = v___x_1996_;
goto v_reusejp_1998_;
}
else
{
lean_object* v_reuseFailAlloc_2000_; 
v_reuseFailAlloc_2000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2000_, 0, v_a_1994_);
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
v___jp_2002_:
{
lean_object* v___x_2011_; 
v___x_2011_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v_f_793_, v___y_2007_, v___y_2008_, v___y_2009_, v___y_2010_);
if (lean_obj_tag(v___x_2011_) == 0)
{
lean_object* v_a_2012_; uint8_t v___x_2013_; 
v_a_2012_ = lean_ctor_get(v___x_2011_, 0);
lean_inc(v_a_2012_);
lean_dec_ref_known(v___x_2011_, 1);
v___x_2013_ = lean_unbox(v_a_2012_);
lean_dec(v_a_2012_);
if (v___x_2013_ == 4)
{
v___y_1901_ = v___y_2006_;
v___y_1902_ = v___y_2010_;
v___y_1903_ = v___y_2009_;
v___y_1904_ = v___y_2003_;
v___y_1905_ = v___y_2005_;
v___y_1906_ = v___y_2004_;
v___y_1907_ = v___y_2008_;
v___y_1908_ = v___y_2007_;
v___y_1909_ = v___x_1394_;
goto v___jp_1900_;
}
else
{
uint8_t v___x_2014_; 
v___x_2014_ = 0;
v___y_1901_ = v___y_2006_;
v___y_1902_ = v___y_2010_;
v___y_1903_ = v___y_2009_;
v___y_1904_ = v___y_2003_;
v___y_1905_ = v___y_2005_;
v___y_1906_ = v___y_2004_;
v___y_1907_ = v___y_2008_;
v___y_1908_ = v___y_2007_;
v___y_1909_ = v___x_2014_;
goto v___jp_1900_;
}
}
else
{
lean_object* v_a_2015_; lean_object* v___x_2017_; uint8_t v_isShared_2018_; uint8_t v_isSharedCheck_2022_; 
lean_dec_ref(v___y_2004_);
lean_dec_ref(v_f_793_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
v_a_2015_ = lean_ctor_get(v___x_2011_, 0);
v_isSharedCheck_2022_ = !lean_is_exclusive(v___x_2011_);
if (v_isSharedCheck_2022_ == 0)
{
v___x_2017_ = v___x_2011_;
v_isShared_2018_ = v_isSharedCheck_2022_;
goto v_resetjp_2016_;
}
else
{
lean_inc(v_a_2015_);
lean_dec(v___x_2011_);
v___x_2017_ = lean_box(0);
v_isShared_2018_ = v_isSharedCheck_2022_;
goto v_resetjp_2016_;
}
v_resetjp_2016_:
{
lean_object* v___x_2020_; 
if (v_isShared_2018_ == 0)
{
v___x_2020_ = v___x_2017_;
goto v_reusejp_2019_;
}
else
{
lean_object* v_reuseFailAlloc_2021_; 
v_reuseFailAlloc_2021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2021_, 0, v_a_2015_);
v___x_2020_ = v_reuseFailAlloc_2021_;
goto v_reusejp_2019_;
}
v_reusejp_2019_:
{
return v___x_2020_;
}
}
}
}
v___jp_2023_:
{
lean_object* v___x_2025_; 
v___x_2025_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v_f_793_, v_a_797_, v_a_798_, v_a_799_, v_a_800_);
if (lean_obj_tag(v___x_2025_) == 0)
{
lean_object* v_a_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; uint8_t v___x_2033_; 
v_a_2026_ = lean_ctor_get(v___x_2025_, 0);
lean_inc(v_a_2026_);
lean_dec_ref_known(v___x_2025_, 1);
v___x_2027_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__2));
v___x_2028_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__55));
lean_inc_ref(v___y_2024_);
v___x_2029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2029_, 0, v___y_2024_);
v___x_2030_ = lean_unsigned_to_nat(1u);
v___x_2031_ = lean_mk_empty_array_with_capacity(v___x_2030_);
lean_inc_ref(v___x_2031_);
v___x_2032_ = lean_array_push(v___x_2031_, v___x_2029_);
v___x_2033_ = lean_unbox(v_a_2026_);
switch(v___x_2033_)
{
case 0:
{
lean_dec(v_a_2026_);
lean_dec_ref(v_f_793_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
if (v_polarity_794_ == 0)
{
lean_object* v___x_2034_; uint8_t v___x_2035_; 
v___x_2034_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__1));
v___x_2035_ = l_Lean_Expr_isAppOfArity(v_a_1043_, v___x_2034_, v___x_2030_);
if (v___x_2035_ == 0)
{
lean_object* v___x_2036_; 
lean_dec_ref(v___x_2031_);
lean_dec(v_a_1043_);
v___x_2036_ = l_Lean_Meta_mkAppOptM(v___x_2028_, v___x_2032_, v_a_797_, v_a_798_, v_a_799_, v_a_800_);
if (lean_obj_tag(v___x_2036_) == 0)
{
lean_object* v_a_2037_; lean_object* v___x_2039_; uint8_t v_isShared_2040_; uint8_t v_isSharedCheck_2046_; 
v_a_2037_ = lean_ctor_get(v___x_2036_, 0);
v_isSharedCheck_2046_ = !lean_is_exclusive(v___x_2036_);
if (v_isSharedCheck_2046_ == 0)
{
v___x_2039_ = v___x_2036_;
v_isShared_2040_ = v_isSharedCheck_2046_;
goto v_resetjp_2038_;
}
else
{
lean_inc(v_a_2037_);
lean_dec(v___x_2036_);
v___x_2039_ = lean_box(0);
v_isShared_2040_ = v_isSharedCheck_2046_;
goto v_resetjp_2038_;
}
v_resetjp_2038_:
{
lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2044_; 
lean_inc_ref(v___y_2024_);
v___x_2041_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2041_, 0, v___y_2024_);
lean_ctor_set(v___x_2041_, 1, v_a_2037_);
v___x_2042_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2042_, 0, v___y_2024_);
lean_ctor_set(v___x_2042_, 1, v___x_2041_);
if (v_isShared_2040_ == 0)
{
lean_ctor_set(v___x_2039_, 0, v___x_2042_);
v___x_2044_ = v___x_2039_;
goto v_reusejp_2043_;
}
else
{
lean_object* v_reuseFailAlloc_2045_; 
v_reuseFailAlloc_2045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2045_, 0, v___x_2042_);
v___x_2044_ = v_reuseFailAlloc_2045_;
goto v_reusejp_2043_;
}
v_reusejp_2043_:
{
return v___x_2044_;
}
}
}
else
{
lean_object* v_a_2047_; lean_object* v___x_2049_; uint8_t v_isShared_2050_; uint8_t v_isSharedCheck_2054_; 
lean_dec_ref(v___y_2024_);
v_a_2047_ = lean_ctor_get(v___x_2036_, 0);
v_isSharedCheck_2054_ = !lean_is_exclusive(v___x_2036_);
if (v_isSharedCheck_2054_ == 0)
{
v___x_2049_ = v___x_2036_;
v_isShared_2050_ = v_isSharedCheck_2054_;
goto v_resetjp_2048_;
}
else
{
lean_inc(v_a_2047_);
lean_dec(v___x_2036_);
v___x_2049_ = lean_box(0);
v_isShared_2050_ = v_isSharedCheck_2054_;
goto v_resetjp_2048_;
}
v_resetjp_2048_:
{
lean_object* v___x_2052_; 
if (v_isShared_2050_ == 0)
{
v___x_2052_ = v___x_2049_;
goto v_reusejp_2051_;
}
else
{
lean_object* v_reuseFailAlloc_2053_; 
v_reuseFailAlloc_2053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2053_, 0, v_a_2047_);
v___x_2052_ = v_reuseFailAlloc_2053_;
goto v_reusejp_2051_;
}
v_reusejp_2051_:
{
return v___x_2052_;
}
}
}
}
else
{
lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; 
lean_dec_ref(v___x_2032_);
v___x_2055_ = l_Lean_Expr_appArg_x21(v_a_1043_);
lean_dec(v_a_1043_);
lean_inc_ref(v___x_2055_);
v___x_2056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2056_, 0, v___x_2055_);
v___x_2057_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__48));
v___x_2058_ = lean_array_push(v___x_2031_, v___x_2056_);
v___x_2059_ = l_Lean_Meta_mkAppOptM(v___x_2057_, v___x_2058_, v_a_797_, v_a_798_, v_a_799_, v_a_800_);
if (lean_obj_tag(v___x_2059_) == 0)
{
lean_object* v_a_2060_; lean_object* v___x_2062_; uint8_t v_isShared_2063_; uint8_t v_isSharedCheck_2069_; 
v_a_2060_ = lean_ctor_get(v___x_2059_, 0);
v_isSharedCheck_2069_ = !lean_is_exclusive(v___x_2059_);
if (v_isSharedCheck_2069_ == 0)
{
v___x_2062_ = v___x_2059_;
v_isShared_2063_ = v_isSharedCheck_2069_;
goto v_resetjp_2061_;
}
else
{
lean_inc(v_a_2060_);
lean_dec(v___x_2059_);
v___x_2062_ = lean_box(0);
v_isShared_2063_ = v_isSharedCheck_2069_;
goto v_resetjp_2061_;
}
v_resetjp_2061_:
{
lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2067_; 
v___x_2064_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2064_, 0, v___x_2055_);
lean_ctor_set(v___x_2064_, 1, v_a_2060_);
v___x_2065_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2065_, 0, v___y_2024_);
lean_ctor_set(v___x_2065_, 1, v___x_2064_);
if (v_isShared_2063_ == 0)
{
lean_ctor_set(v___x_2062_, 0, v___x_2065_);
v___x_2067_ = v___x_2062_;
goto v_reusejp_2066_;
}
else
{
lean_object* v_reuseFailAlloc_2068_; 
v_reuseFailAlloc_2068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2068_, 0, v___x_2065_);
v___x_2067_ = v_reuseFailAlloc_2068_;
goto v_reusejp_2066_;
}
v_reusejp_2066_:
{
return v___x_2067_;
}
}
}
else
{
lean_object* v_a_2070_; lean_object* v___x_2072_; uint8_t v_isShared_2073_; uint8_t v_isSharedCheck_2077_; 
lean_dec_ref(v___x_2055_);
lean_dec_ref(v___y_2024_);
v_a_2070_ = lean_ctor_get(v___x_2059_, 0);
v_isSharedCheck_2077_ = !lean_is_exclusive(v___x_2059_);
if (v_isSharedCheck_2077_ == 0)
{
v___x_2072_ = v___x_2059_;
v_isShared_2073_ = v_isSharedCheck_2077_;
goto v_resetjp_2071_;
}
else
{
lean_inc(v_a_2070_);
lean_dec(v___x_2059_);
v___x_2072_ = lean_box(0);
v_isShared_2073_ = v_isSharedCheck_2077_;
goto v_resetjp_2071_;
}
v_resetjp_2071_:
{
lean_object* v___x_2075_; 
if (v_isShared_2073_ == 0)
{
v___x_2075_ = v___x_2072_;
goto v_reusejp_2074_;
}
else
{
lean_object* v_reuseFailAlloc_2076_; 
v_reuseFailAlloc_2076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2076_, 0, v_a_2070_);
v___x_2075_ = v_reuseFailAlloc_2076_;
goto v_reusejp_2074_;
}
v_reusejp_2074_:
{
return v___x_2075_;
}
}
}
}
}
else
{
lean_object* v___x_2078_; 
lean_dec_ref(v___x_2031_);
lean_dec(v_a_1043_);
v___x_2078_ = l_Lean_Meta_mkAppOptM(v___x_2028_, v___x_2032_, v_a_797_, v_a_798_, v_a_799_, v_a_800_);
if (lean_obj_tag(v___x_2078_) == 0)
{
lean_object* v_a_2079_; 
v_a_2079_ = lean_ctor_get(v___x_2078_, 0);
lean_inc(v_a_2079_);
lean_dec_ref_known(v___x_2078_, 1);
v___y_845_ = v___y_2024_;
v_____do__lift_846_ = v_a_2079_;
goto v___jp_844_;
}
else
{
lean_object* v_a_2080_; lean_object* v___x_2082_; uint8_t v_isShared_2083_; uint8_t v_isSharedCheck_2087_; 
lean_dec_ref(v___y_2024_);
v_a_2080_ = lean_ctor_get(v___x_2078_, 0);
v_isSharedCheck_2087_ = !lean_is_exclusive(v___x_2078_);
if (v_isSharedCheck_2087_ == 0)
{
v___x_2082_ = v___x_2078_;
v_isShared_2083_ = v_isSharedCheck_2087_;
goto v_resetjp_2081_;
}
else
{
lean_inc(v_a_2080_);
lean_dec(v___x_2078_);
v___x_2082_ = lean_box(0);
v_isShared_2083_ = v_isSharedCheck_2087_;
goto v_resetjp_2081_;
}
v_resetjp_2081_:
{
lean_object* v___x_2085_; 
if (v_isShared_2083_ == 0)
{
v___x_2085_ = v___x_2082_;
goto v_reusejp_2084_;
}
else
{
lean_object* v_reuseFailAlloc_2086_; 
v_reuseFailAlloc_2086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2086_, 0, v_a_2080_);
v___x_2085_ = v_reuseFailAlloc_2086_;
goto v_reusejp_2084_;
}
v_reusejp_2084_:
{
return v___x_2085_;
}
}
}
}
}
case 11:
{
lean_dec_ref(v___x_2031_);
lean_dec(v_a_2026_);
lean_dec_ref(v_f_793_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
v___y_1045_ = v___x_2028_;
v___y_1046_ = v___y_2024_;
v___y_1047_ = v___x_2032_;
v___y_1048_ = v_a_797_;
v___y_1049_ = v_a_798_;
v___y_1050_ = v_a_799_;
v___y_1051_ = v_a_800_;
goto v___jp_1044_;
}
case 10:
{
lean_dec_ref(v___x_2031_);
lean_dec(v_a_2026_);
lean_dec_ref(v_f_793_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
v___y_1045_ = v___x_2028_;
v___y_1046_ = v___y_2024_;
v___y_1047_ = v___x_2032_;
v___y_1048_ = v_a_797_;
v___y_1049_ = v_a_798_;
v___y_1050_ = v_a_799_;
v___y_1051_ = v_a_800_;
goto v___jp_1044_;
}
case 1:
{
lean_dec_ref(v___x_2032_);
lean_dec_ref(v___x_2031_);
lean_dec(v_a_2026_);
lean_dec(v_a_1043_);
v___y_1415_ = v___y_2024_;
v___y_1416_ = v_a_795_;
v___y_1417_ = v_a_796_;
v___y_1418_ = v_a_797_;
v___y_1419_ = v_a_798_;
v___y_1420_ = v_a_799_;
v___y_1421_ = v_a_800_;
goto v___jp_1414_;
}
case 2:
{
lean_dec_ref(v___x_2032_);
lean_dec_ref(v___x_2031_);
lean_dec(v_a_2026_);
lean_dec(v_a_1043_);
v___y_1415_ = v___y_2024_;
v___y_1416_ = v_a_795_;
v___y_1417_ = v_a_796_;
v___y_1418_ = v_a_797_;
v___y_1419_ = v_a_798_;
v___y_1420_ = v_a_799_;
v___y_1421_ = v_a_800_;
goto v___jp_1414_;
}
case 3:
{
lean_object* v___x_2088_; lean_object* v___x_2089_; 
lean_dec_ref(v___x_2032_);
lean_dec_ref(v___x_2031_);
lean_dec(v_a_2026_);
lean_dec(v_a_1043_);
v___x_2088_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_f_793_);
v___x_2089_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0(v_f_793_, v___x_2088_, v_a_795_, v_a_796_, v_a_797_, v_a_798_, v_a_799_, v_a_800_);
if (lean_obj_tag(v___x_2089_) == 0)
{
lean_object* v_a_2090_; lean_object* v___x_2091_; 
v_a_2090_ = lean_ctor_get(v___x_2089_, 0);
lean_inc(v_a_2090_);
lean_dec_ref_known(v___x_2089_, 1);
lean_inc_ref(v_vars_792_);
lean_inc_ref(v_sorts_791_);
v___x_2091_ = lp_vampireReplay_Vampire_Reconstruct_formula(v_sorts_791_, v_vars_792_, v_a_2090_, v_a_795_, v_a_796_, v_a_797_, v_a_798_, v_a_799_, v_a_800_);
if (lean_obj_tag(v___x_2091_) == 0)
{
lean_object* v_a_2092_; lean_object* v___x_2093_; 
v_a_2092_ = lean_ctor_get(v___x_2091_, 0);
lean_inc(v_a_2092_);
lean_dec_ref_known(v___x_2091_, 1);
lean_inc_ref(v_f_793_);
v___x_2093_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0(v_f_793_, v___x_2030_, v_a_795_, v_a_796_, v_a_797_, v_a_798_, v_a_799_, v_a_800_);
if (lean_obj_tag(v___x_2093_) == 0)
{
lean_object* v_a_2094_; lean_object* v___x_2095_; 
v_a_2094_ = lean_ctor_get(v___x_2093_, 0);
lean_inc(v_a_2094_);
lean_dec_ref_known(v___x_2093_, 1);
lean_inc_ref(v_vars_792_);
lean_inc_ref(v_sorts_791_);
v___x_2095_ = lp_vampireReplay_Vampire_Reconstruct_formula(v_sorts_791_, v_vars_792_, v_a_2094_, v_a_795_, v_a_796_, v_a_797_, v_a_798_, v_a_799_, v_a_800_);
if (lean_obj_tag(v___x_2095_) == 0)
{
lean_object* v_a_2096_; lean_object* v___x_2097_; 
v_a_2096_ = lean_ctor_get(v___x_2095_, 0);
lean_inc(v_a_2096_);
lean_dec_ref_known(v___x_2095_, 1);
lean_inc_ref(v_f_793_);
v___x_2097_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0(v_f_793_, v___x_2088_, v_a_795_, v_a_796_, v_a_797_, v_a_798_, v_a_799_, v_a_800_);
if (lean_obj_tag(v___x_2097_) == 0)
{
if (v_polarity_794_ == 0)
{
lean_object* v_a_2098_; 
v_a_2098_ = lean_ctor_get(v___x_2097_, 0);
lean_inc(v_a_2098_);
lean_dec_ref_known(v___x_2097_, 1);
v___y_1137_ = v_a_2092_;
v___y_1138_ = v___x_2027_;
v___y_1139_ = v_a_2096_;
v___y_1140_ = v_a_2098_;
v___y_1141_ = v___y_2024_;
v___y_1142_ = v___x_2030_;
v___y_1143_ = v___x_1394_;
goto v___jp_1136_;
}
else
{
lean_object* v_a_2099_; uint8_t v___x_2100_; 
v_a_2099_ = lean_ctor_get(v___x_2097_, 0);
lean_inc(v_a_2099_);
lean_dec_ref_known(v___x_2097_, 1);
v___x_2100_ = 0;
v___y_1137_ = v_a_2092_;
v___y_1138_ = v___x_2027_;
v___y_1139_ = v_a_2096_;
v___y_1140_ = v_a_2099_;
v___y_1141_ = v___y_2024_;
v___y_1142_ = v___x_2030_;
v___y_1143_ = v___x_2100_;
goto v___jp_1136_;
}
}
else
{
lean_object* v_a_2101_; lean_object* v___x_2103_; uint8_t v_isShared_2104_; uint8_t v_isSharedCheck_2108_; 
lean_dec(v_a_2096_);
lean_dec(v_a_2092_);
lean_dec_ref(v___y_2024_);
lean_dec_ref(v_f_793_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
v_a_2101_ = lean_ctor_get(v___x_2097_, 0);
v_isSharedCheck_2108_ = !lean_is_exclusive(v___x_2097_);
if (v_isSharedCheck_2108_ == 0)
{
v___x_2103_ = v___x_2097_;
v_isShared_2104_ = v_isSharedCheck_2108_;
goto v_resetjp_2102_;
}
else
{
lean_inc(v_a_2101_);
lean_dec(v___x_2097_);
v___x_2103_ = lean_box(0);
v_isShared_2104_ = v_isSharedCheck_2108_;
goto v_resetjp_2102_;
}
v_resetjp_2102_:
{
lean_object* v___x_2106_; 
if (v_isShared_2104_ == 0)
{
v___x_2106_ = v___x_2103_;
goto v_reusejp_2105_;
}
else
{
lean_object* v_reuseFailAlloc_2107_; 
v_reuseFailAlloc_2107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2107_, 0, v_a_2101_);
v___x_2106_ = v_reuseFailAlloc_2107_;
goto v_reusejp_2105_;
}
v_reusejp_2105_:
{
return v___x_2106_;
}
}
}
}
else
{
lean_object* v_a_2109_; lean_object* v___x_2111_; uint8_t v_isShared_2112_; uint8_t v_isSharedCheck_2116_; 
lean_dec(v_a_2092_);
lean_dec_ref(v___y_2024_);
lean_dec_ref(v_f_793_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
v_a_2109_ = lean_ctor_get(v___x_2095_, 0);
v_isSharedCheck_2116_ = !lean_is_exclusive(v___x_2095_);
if (v_isSharedCheck_2116_ == 0)
{
v___x_2111_ = v___x_2095_;
v_isShared_2112_ = v_isSharedCheck_2116_;
goto v_resetjp_2110_;
}
else
{
lean_inc(v_a_2109_);
lean_dec(v___x_2095_);
v___x_2111_ = lean_box(0);
v_isShared_2112_ = v_isSharedCheck_2116_;
goto v_resetjp_2110_;
}
v_resetjp_2110_:
{
lean_object* v___x_2114_; 
if (v_isShared_2112_ == 0)
{
v___x_2114_ = v___x_2111_;
goto v_reusejp_2113_;
}
else
{
lean_object* v_reuseFailAlloc_2115_; 
v_reuseFailAlloc_2115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2115_, 0, v_a_2109_);
v___x_2114_ = v_reuseFailAlloc_2115_;
goto v_reusejp_2113_;
}
v_reusejp_2113_:
{
return v___x_2114_;
}
}
}
}
else
{
lean_object* v_a_2117_; lean_object* v___x_2119_; uint8_t v_isShared_2120_; uint8_t v_isSharedCheck_2124_; 
lean_dec(v_a_2092_);
lean_dec_ref(v___y_2024_);
lean_dec_ref(v_f_793_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
v_a_2117_ = lean_ctor_get(v___x_2093_, 0);
v_isSharedCheck_2124_ = !lean_is_exclusive(v___x_2093_);
if (v_isSharedCheck_2124_ == 0)
{
v___x_2119_ = v___x_2093_;
v_isShared_2120_ = v_isSharedCheck_2124_;
goto v_resetjp_2118_;
}
else
{
lean_inc(v_a_2117_);
lean_dec(v___x_2093_);
v___x_2119_ = lean_box(0);
v_isShared_2120_ = v_isSharedCheck_2124_;
goto v_resetjp_2118_;
}
v_resetjp_2118_:
{
lean_object* v___x_2122_; 
if (v_isShared_2120_ == 0)
{
v___x_2122_ = v___x_2119_;
goto v_reusejp_2121_;
}
else
{
lean_object* v_reuseFailAlloc_2123_; 
v_reuseFailAlloc_2123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2123_, 0, v_a_2117_);
v___x_2122_ = v_reuseFailAlloc_2123_;
goto v_reusejp_2121_;
}
v_reusejp_2121_:
{
return v___x_2122_;
}
}
}
}
else
{
lean_object* v_a_2125_; lean_object* v___x_2127_; uint8_t v_isShared_2128_; uint8_t v_isSharedCheck_2132_; 
lean_dec_ref(v___y_2024_);
lean_dec_ref(v_f_793_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
v_a_2125_ = lean_ctor_get(v___x_2091_, 0);
v_isSharedCheck_2132_ = !lean_is_exclusive(v___x_2091_);
if (v_isSharedCheck_2132_ == 0)
{
v___x_2127_ = v___x_2091_;
v_isShared_2128_ = v_isSharedCheck_2132_;
goto v_resetjp_2126_;
}
else
{
lean_inc(v_a_2125_);
lean_dec(v___x_2091_);
v___x_2127_ = lean_box(0);
v_isShared_2128_ = v_isSharedCheck_2132_;
goto v_resetjp_2126_;
}
v_resetjp_2126_:
{
lean_object* v___x_2130_; 
if (v_isShared_2128_ == 0)
{
v___x_2130_ = v___x_2127_;
goto v_reusejp_2129_;
}
else
{
lean_object* v_reuseFailAlloc_2131_; 
v_reuseFailAlloc_2131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2131_, 0, v_a_2125_);
v___x_2130_ = v_reuseFailAlloc_2131_;
goto v_reusejp_2129_;
}
v_reusejp_2129_:
{
return v___x_2130_;
}
}
}
}
else
{
lean_object* v_a_2133_; lean_object* v___x_2135_; uint8_t v_isShared_2136_; uint8_t v_isSharedCheck_2140_; 
lean_dec_ref(v___y_2024_);
lean_dec_ref(v_f_793_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
v_a_2133_ = lean_ctor_get(v___x_2089_, 0);
v_isSharedCheck_2140_ = !lean_is_exclusive(v___x_2089_);
if (v_isSharedCheck_2140_ == 0)
{
v___x_2135_ = v___x_2089_;
v_isShared_2136_ = v_isSharedCheck_2140_;
goto v_resetjp_2134_;
}
else
{
lean_inc(v_a_2133_);
lean_dec(v___x_2089_);
v___x_2135_ = lean_box(0);
v_isShared_2136_ = v_isSharedCheck_2140_;
goto v_resetjp_2134_;
}
v_resetjp_2134_:
{
lean_object* v___x_2138_; 
if (v_isShared_2136_ == 0)
{
v___x_2138_ = v___x_2135_;
goto v_reusejp_2137_;
}
else
{
lean_object* v_reuseFailAlloc_2139_; 
v_reuseFailAlloc_2139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2139_, 0, v_a_2133_);
v___x_2138_ = v_reuseFailAlloc_2139_;
goto v_reusejp_2137_;
}
v_reusejp_2137_:
{
return v___x_2138_;
}
}
}
}
case 4:
{
lean_dec_ref(v___x_2032_);
lean_dec_ref(v___x_2031_);
lean_dec(v_a_2026_);
lean_dec(v_a_1043_);
v___y_2003_ = v___x_2027_;
v___y_2004_ = v___y_2024_;
v___y_2005_ = v_a_795_;
v___y_2006_ = v_a_796_;
v___y_2007_ = v_a_797_;
v___y_2008_ = v_a_798_;
v___y_2009_ = v_a_799_;
v___y_2010_ = v_a_800_;
goto v___jp_2002_;
}
case 5:
{
lean_dec_ref(v___x_2032_);
lean_dec_ref(v___x_2031_);
lean_dec(v_a_2026_);
lean_dec(v_a_1043_);
v___y_2003_ = v___x_2027_;
v___y_2004_ = v___y_2024_;
v___y_2005_ = v_a_795_;
v___y_2006_ = v_a_796_;
v___y_2007_ = v_a_797_;
v___y_2008_ = v_a_798_;
v___y_2009_ = v_a_799_;
v___y_2010_ = v_a_800_;
goto v___jp_2002_;
}
case 6:
{
lean_object* v___x_2141_; lean_object* v___x_2142_; 
lean_dec_ref(v___x_2032_);
lean_dec(v_a_2026_);
lean_dec(v_a_1043_);
v___x_2141_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_f_793_);
v___x_2142_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0(v_f_793_, v___x_2141_, v_a_795_, v_a_796_, v_a_797_, v_a_798_, v_a_799_, v_a_800_);
if (lean_obj_tag(v___x_2142_) == 0)
{
if (v_polarity_794_ == 0)
{
lean_object* v_a_2143_; 
v_a_2143_ = lean_ctor_get(v___x_2142_, 0);
lean_inc(v_a_2143_);
lean_dec_ref_known(v___x_2142_, 1);
v___y_1305_ = v___x_2141_;
v___y_1306_ = v___x_2027_;
v___y_1307_ = v___x_2031_;
v___y_1308_ = v___y_2024_;
v___y_1309_ = v_a_2143_;
v___y_1310_ = v___x_1394_;
goto v___jp_1304_;
}
else
{
lean_object* v_a_2144_; uint8_t v___x_2145_; 
v_a_2144_ = lean_ctor_get(v___x_2142_, 0);
lean_inc(v_a_2144_);
lean_dec_ref_known(v___x_2142_, 1);
v___x_2145_ = 0;
v___y_1305_ = v___x_2141_;
v___y_1306_ = v___x_2027_;
v___y_1307_ = v___x_2031_;
v___y_1308_ = v___y_2024_;
v___y_1309_ = v_a_2144_;
v___y_1310_ = v___x_2145_;
goto v___jp_1304_;
}
}
else
{
lean_object* v_a_2146_; lean_object* v___x_2148_; uint8_t v_isShared_2149_; uint8_t v_isSharedCheck_2153_; 
lean_dec_ref(v___x_2031_);
lean_dec_ref(v___y_2024_);
lean_dec_ref(v_f_793_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
v_a_2146_ = lean_ctor_get(v___x_2142_, 0);
v_isSharedCheck_2153_ = !lean_is_exclusive(v___x_2142_);
if (v_isSharedCheck_2153_ == 0)
{
v___x_2148_ = v___x_2142_;
v_isShared_2149_ = v_isSharedCheck_2153_;
goto v_resetjp_2147_;
}
else
{
lean_inc(v_a_2146_);
lean_dec(v___x_2142_);
v___x_2148_ = lean_box(0);
v_isShared_2149_ = v_isSharedCheck_2153_;
goto v_resetjp_2147_;
}
v_resetjp_2147_:
{
lean_object* v___x_2151_; 
if (v_isShared_2149_ == 0)
{
v___x_2151_ = v___x_2148_;
goto v_reusejp_2150_;
}
else
{
lean_object* v_reuseFailAlloc_2152_; 
v_reuseFailAlloc_2152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2152_, 0, v_a_2146_);
v___x_2151_ = v_reuseFailAlloc_2152_;
goto v_reusejp_2150_;
}
v_reusejp_2150_:
{
return v___x_2151_;
}
}
}
}
case 7:
{
lean_dec_ref(v___x_2032_);
lean_dec_ref(v___x_2031_);
lean_dec(v_a_2026_);
lean_dec_ref(v___y_2024_);
lean_dec(v_a_1043_);
v___y_1396_ = v_a_795_;
v___y_1397_ = v_a_796_;
v___y_1398_ = v_a_797_;
v___y_1399_ = v_a_798_;
v___y_1400_ = v_a_799_;
v___y_1401_ = v_a_800_;
goto v___jp_1395_;
}
case 8:
{
lean_dec_ref(v___x_2032_);
lean_dec_ref(v___x_2031_);
lean_dec(v_a_2026_);
lean_dec_ref(v___y_2024_);
lean_dec(v_a_1043_);
v___y_1396_ = v_a_795_;
v___y_1397_ = v_a_796_;
v___y_1398_ = v_a_797_;
v___y_1399_ = v_a_798_;
v___y_1400_ = v_a_799_;
v___y_1401_ = v_a_800_;
goto v___jp_1395_;
}
default: 
{
lean_object* v___x_2154_; lean_object* v___x_2155_; uint8_t v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; 
lean_dec_ref(v___x_2032_);
lean_dec_ref(v___x_2031_);
lean_dec_ref(v___y_2024_);
lean_dec(v_a_1043_);
lean_dec_ref(v_f_793_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
v___x_2154_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__57, &lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__57_once, _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__57);
v___x_2155_ = lean_unsigned_to_nat(0u);
v___x_2156_ = lean_unbox(v_a_2026_);
lean_dec(v_a_2026_);
v___x_2157_ = lp_vampireReplay_Vampire_instReprConnective_repr(v___x_2156_, v___x_2155_);
v___x_2158_ = l_Lean_MessageData_ofFormat(v___x_2157_);
v___x_2159_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2159_, 0, v___x_2154_);
lean_ctor_set(v___x_2159_, 1, v___x_2158_);
v___x_2160_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2159_, v_a_797_, v_a_798_, v_a_799_, v_a_800_);
return v___x_2160_;
}
}
}
else
{
lean_object* v_a_2161_; lean_object* v___x_2163_; uint8_t v_isShared_2164_; uint8_t v_isSharedCheck_2168_; 
lean_dec_ref(v___y_2024_);
lean_dec(v_a_1043_);
lean_dec_ref(v_f_793_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
v_a_2161_ = lean_ctor_get(v___x_2025_, 0);
v_isSharedCheck_2168_ = !lean_is_exclusive(v___x_2025_);
if (v_isSharedCheck_2168_ == 0)
{
v___x_2163_ = v___x_2025_;
v_isShared_2164_ = v_isSharedCheck_2168_;
goto v_resetjp_2162_;
}
else
{
lean_inc(v_a_2161_);
lean_dec(v___x_2025_);
v___x_2163_ = lean_box(0);
v_isShared_2164_ = v_isSharedCheck_2168_;
goto v_resetjp_2162_;
}
v_resetjp_2162_:
{
lean_object* v___x_2166_; 
if (v_isShared_2164_ == 0)
{
v___x_2166_ = v___x_2163_;
goto v_reusejp_2165_;
}
else
{
lean_object* v_reuseFailAlloc_2167_; 
v_reuseFailAlloc_2167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2167_, 0, v_a_2161_);
v___x_2166_ = v_reuseFailAlloc_2167_;
goto v_reusejp_2165_;
}
v_reusejp_2165_:
{
return v___x_2166_;
}
}
}
}
}
else
{
lean_object* v_a_2171_; lean_object* v___x_2173_; uint8_t v_isShared_2174_; uint8_t v_isSharedCheck_2178_; 
lean_dec_ref(v_f_793_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
v_a_2171_ = lean_ctor_get(v___x_1042_, 0);
v_isSharedCheck_2178_ = !lean_is_exclusive(v___x_1042_);
if (v_isSharedCheck_2178_ == 0)
{
v___x_2173_ = v___x_1042_;
v_isShared_2174_ = v_isSharedCheck_2178_;
goto v_resetjp_2172_;
}
else
{
lean_inc(v_a_2171_);
lean_dec(v___x_1042_);
v___x_2173_ = lean_box(0);
v_isShared_2174_ = v_isSharedCheck_2178_;
goto v_resetjp_2172_;
}
v_resetjp_2172_:
{
lean_object* v___x_2176_; 
if (v_isShared_2174_ == 0)
{
v___x_2176_ = v___x_2173_;
goto v_reusejp_2175_;
}
else
{
lean_object* v_reuseFailAlloc_2177_; 
v_reuseFailAlloc_2177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2177_, 0, v_a_2171_);
v___x_2176_ = v_reuseFailAlloc_2177_;
goto v_reusejp_2175_;
}
v_reusejp_2175_:
{
return v___x_2176_;
}
}
}
v___jp_802_:
{
lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; 
v___x_806_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_806_, 0, v___y_805_);
lean_ctor_set(v___x_806_, 1, v___y_803_);
v___x_807_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_807_, 0, v___y_804_);
lean_ctor_set(v___x_807_, 1, v___x_806_);
v___x_808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_808_, 0, v___x_807_);
return v___x_808_;
}
v___jp_809_:
{
lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; 
v___x_819_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__1));
v___x_820_ = lean_mk_empty_array_with_capacity(v___y_814_);
v___x_821_ = lean_array_push(v___x_820_, v___y_811_);
v___x_822_ = l_Lean_Meta_mkAppM(v___x_819_, v___x_821_, v___y_818_, v___y_816_, v___y_813_, v___y_812_);
if (lean_obj_tag(v___x_822_) == 0)
{
lean_object* v_a_823_; lean_object* v___x_825_; uint8_t v_isShared_826_; uint8_t v_isSharedCheck_835_; 
v_a_823_ = lean_ctor_get(v___x_822_, 0);
v_isSharedCheck_835_ = !lean_is_exclusive(v___x_822_);
if (v_isSharedCheck_835_ == 0)
{
v___x_825_ = v___x_822_;
v_isShared_826_ = v_isSharedCheck_835_;
goto v_resetjp_824_;
}
else
{
lean_inc(v_a_823_);
lean_dec(v___x_822_);
v___x_825_ = lean_box(0);
v_isShared_826_ = v_isSharedCheck_835_;
goto v_resetjp_824_;
}
v_resetjp_824_:
{
lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_833_; 
v___x_827_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__1));
v___x_828_ = l_Lean_Expr_const___override(v___x_827_, v___y_810_);
v___x_829_ = l_Lean_Expr_app___override(v___x_828_, v___y_817_);
v___x_830_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_830_, 0, v___x_829_);
lean_ctor_set(v___x_830_, 1, v_a_823_);
v___x_831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_831_, 0, v___y_815_);
lean_ctor_set(v___x_831_, 1, v___x_830_);
if (v_isShared_826_ == 0)
{
lean_ctor_set(v___x_825_, 0, v___x_831_);
v___x_833_ = v___x_825_;
goto v_reusejp_832_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v___x_831_);
v___x_833_ = v_reuseFailAlloc_834_;
goto v_reusejp_832_;
}
v_reusejp_832_:
{
return v___x_833_;
}
}
}
else
{
lean_object* v_a_836_; lean_object* v___x_838_; uint8_t v_isShared_839_; uint8_t v_isSharedCheck_843_; 
lean_dec_ref(v___y_817_);
lean_dec_ref(v___y_815_);
lean_dec(v___y_810_);
v_a_836_ = lean_ctor_get(v___x_822_, 0);
v_isSharedCheck_843_ = !lean_is_exclusive(v___x_822_);
if (v_isSharedCheck_843_ == 0)
{
v___x_838_ = v___x_822_;
v_isShared_839_ = v_isSharedCheck_843_;
goto v_resetjp_837_;
}
else
{
lean_inc(v_a_836_);
lean_dec(v___x_822_);
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
v___jp_844_:
{
lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; 
lean_inc_ref(v___y_845_);
v___x_847_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_847_, 0, v___y_845_);
lean_ctor_set(v___x_847_, 1, v_____do__lift_846_);
v___x_848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_848_, 0, v___y_845_);
lean_ctor_set(v___x_848_, 1, v___x_847_);
v___x_849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_849_, 0, v___x_848_);
return v___x_849_;
}
v___jp_850_:
{
lean_object* v___x_864_; 
lean_inc(v_snd_863_);
lean_inc(v_fst_862_);
lean_inc(v___y_855_);
lean_inc(v___y_852_);
v___x_864_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg(v___y_852_, v___y_855_, v_fst_862_, v_snd_863_, v___y_854_, v___y_859_, v___y_853_, v___y_851_, v___y_861_, v___y_858_, v___y_860_);
lean_dec_ref(v___y_859_);
lean_dec_ref(v___y_854_);
if (lean_obj_tag(v___x_864_) == 0)
{
lean_object* v_a_865_; lean_object* v___x_867_; uint8_t v_isShared_868_; uint8_t v_isSharedCheck_874_; 
v_a_865_ = lean_ctor_get(v___x_864_, 0);
v_isSharedCheck_874_ = !lean_is_exclusive(v___x_864_);
if (v_isSharedCheck_874_ == 0)
{
v___x_867_ = v___x_864_;
v_isShared_868_ = v_isSharedCheck_874_;
goto v_resetjp_866_;
}
else
{
lean_inc(v_a_865_);
lean_dec(v___x_864_);
v___x_867_ = lean_box(0);
v_isShared_868_ = v_isSharedCheck_874_;
goto v_resetjp_866_;
}
v_resetjp_866_:
{
lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_872_; 
v___x_869_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_869_, 0, v___y_856_);
lean_ctor_set(v___x_869_, 1, v_a_865_);
v___x_870_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_870_, 0, v___y_857_);
lean_ctor_set(v___x_870_, 1, v___x_869_);
if (v_isShared_868_ == 0)
{
lean_ctor_set(v___x_867_, 0, v___x_870_);
v___x_872_ = v___x_867_;
goto v_reusejp_871_;
}
else
{
lean_object* v_reuseFailAlloc_873_; 
v_reuseFailAlloc_873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_873_, 0, v___x_870_);
v___x_872_ = v_reuseFailAlloc_873_;
goto v_reusejp_871_;
}
v_reusejp_871_:
{
return v___x_872_;
}
}
}
else
{
lean_object* v_a_875_; lean_object* v___x_877_; uint8_t v_isShared_878_; uint8_t v_isSharedCheck_882_; 
lean_dec_ref(v___y_857_);
lean_dec_ref(v___y_856_);
v_a_875_ = lean_ctor_get(v___x_864_, 0);
v_isSharedCheck_882_ = !lean_is_exclusive(v___x_864_);
if (v_isSharedCheck_882_ == 0)
{
v___x_877_ = v___x_864_;
v_isShared_878_ = v_isSharedCheck_882_;
goto v_resetjp_876_;
}
else
{
lean_inc(v_a_875_);
lean_dec(v___x_864_);
v___x_877_ = lean_box(0);
v_isShared_878_ = v_isSharedCheck_882_;
goto v_resetjp_876_;
}
v_resetjp_876_:
{
lean_object* v___x_880_; 
if (v_isShared_878_ == 0)
{
v___x_880_ = v___x_877_;
goto v_reusejp_879_;
}
else
{
lean_object* v_reuseFailAlloc_881_; 
v_reuseFailAlloc_881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_881_, 0, v_a_875_);
v___x_880_ = v_reuseFailAlloc_881_;
goto v_reusejp_879_;
}
v_reusejp_879_:
{
return v___x_880_;
}
}
}
}
v___jp_883_:
{
lean_object* v___x_895_; lean_object* v___x_896_; 
v___x_895_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Normalize_normalize_spec__2(v___y_888_, v___y_885_, v___y_891_);
lean_inc(v___y_894_);
v___x_896_ = lp_vampireReplay_Vampire_Reconstruct_congrJunction___redArg(v___y_894_, v___x_895_, v___y_886_, v___y_884_, v___y_893_, v___y_890_, v___y_892_);
lean_dec_ref(v___x_895_);
if (lean_obj_tag(v___x_896_) == 0)
{
lean_object* v_a_897_; lean_object* v___x_899_; uint8_t v_isShared_900_; uint8_t v_isSharedCheck_906_; 
v_a_897_ = lean_ctor_get(v___x_896_, 0);
v_isSharedCheck_906_ = !lean_is_exclusive(v___x_896_);
if (v_isSharedCheck_906_ == 0)
{
v___x_899_ = v___x_896_;
v_isShared_900_ = v_isSharedCheck_906_;
goto v_resetjp_898_;
}
else
{
lean_inc(v_a_897_);
lean_dec(v___x_896_);
v___x_899_ = lean_box(0);
v_isShared_900_ = v_isSharedCheck_906_;
goto v_resetjp_898_;
}
v_resetjp_898_:
{
lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_904_; 
v___x_901_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_901_, 0, v___y_887_);
lean_ctor_set(v___x_901_, 1, v_a_897_);
v___x_902_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_902_, 0, v___y_889_);
lean_ctor_set(v___x_902_, 1, v___x_901_);
if (v_isShared_900_ == 0)
{
lean_ctor_set(v___x_899_, 0, v___x_902_);
v___x_904_ = v___x_899_;
goto v_reusejp_903_;
}
else
{
lean_object* v_reuseFailAlloc_905_; 
v_reuseFailAlloc_905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_905_, 0, v___x_902_);
v___x_904_ = v_reuseFailAlloc_905_;
goto v_reusejp_903_;
}
v_reusejp_903_:
{
return v___x_904_;
}
}
}
else
{
lean_object* v_a_907_; lean_object* v___x_909_; uint8_t v_isShared_910_; uint8_t v_isSharedCheck_914_; 
lean_dec_ref(v___y_889_);
lean_dec_ref(v___y_887_);
v_a_907_ = lean_ctor_get(v___x_896_, 0);
v_isSharedCheck_914_ = !lean_is_exclusive(v___x_896_);
if (v_isSharedCheck_914_ == 0)
{
v___x_909_ = v___x_896_;
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
else
{
lean_inc(v_a_907_);
lean_dec(v___x_896_);
v___x_909_ = lean_box(0);
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
v_resetjp_908_:
{
lean_object* v___x_912_; 
if (v_isShared_910_ == 0)
{
v___x_912_ = v___x_909_;
goto v_reusejp_911_;
}
else
{
lean_object* v_reuseFailAlloc_913_; 
v_reuseFailAlloc_913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_913_, 0, v_a_907_);
v___x_912_ = v_reuseFailAlloc_913_;
goto v_reusejp_911_;
}
v_reusejp_911_:
{
return v___x_912_;
}
}
}
}
v___jp_915_:
{
lean_object* v___x_933_; 
lean_inc(v_snd_932_);
lean_inc(v_fst_931_);
v___x_933_ = lp_vampireReplay_Vampire_Reconstruct_junction(v_fst_931_, v_snd_932_, v___y_929_);
if (v_polarity_794_ == 0)
{
lean_object* v___x_934_; 
v___x_934_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_formula_spec__3(v_sorts_791_, v_vars_792_, v___y_921_, v___y_917_, v___y_926_, v___y_918_, v___y_930_, v___y_916_, v___y_925_, v___y_922_, v___y_924_);
if (lean_obj_tag(v___x_934_) == 0)
{
if (v___y_927_ == 0)
{
lean_object* v_a_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; 
v_a_935_ = lean_ctor_get(v___x_934_, 0);
lean_inc(v_a_935_);
lean_dec_ref_known(v___x_934_, 1);
v___x_936_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__3));
v___x_937_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__5));
v___x_938_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__7));
v___x_939_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__9));
v___y_851_ = v___y_916_;
v___y_852_ = v___x_936_;
v___y_853_ = v___y_928_;
v___y_854_ = v_a_935_;
v___y_855_ = v___x_937_;
v___y_856_ = v___x_933_;
v___y_857_ = v___y_920_;
v___y_858_ = v___y_922_;
v___y_859_ = v___y_923_;
v___y_860_ = v___y_924_;
v___y_861_ = v___y_925_;
v_fst_862_ = v___x_938_;
v_snd_863_ = v___x_939_;
goto v___jp_850_;
}
else
{
lean_object* v_a_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; 
v_a_940_ = lean_ctor_get(v___x_934_, 0);
lean_inc(v_a_940_);
lean_dec_ref_known(v___x_934_, 1);
v___x_941_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__11));
v___x_942_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__13));
v___x_943_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__15));
v___x_944_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__17));
v___y_851_ = v___y_916_;
v___y_852_ = v___x_941_;
v___y_853_ = v___y_928_;
v___y_854_ = v_a_940_;
v___y_855_ = v___x_942_;
v___y_856_ = v___x_933_;
v___y_857_ = v___y_920_;
v___y_858_ = v___y_922_;
v___y_859_ = v___y_923_;
v___y_860_ = v___y_924_;
v___y_861_ = v___y_925_;
v_fst_862_ = v___x_943_;
v_snd_863_ = v___x_944_;
goto v___jp_850_;
}
}
else
{
lean_object* v_a_945_; lean_object* v___x_947_; uint8_t v_isShared_948_; uint8_t v_isSharedCheck_952_; 
lean_dec_ref(v___x_933_);
lean_dec_ref(v___y_923_);
lean_dec_ref(v___y_920_);
v_a_945_ = lean_ctor_get(v___x_934_, 0);
v_isSharedCheck_952_ = !lean_is_exclusive(v___x_934_);
if (v_isSharedCheck_952_ == 0)
{
v___x_947_ = v___x_934_;
v_isShared_948_ = v_isSharedCheck_952_;
goto v_resetjp_946_;
}
else
{
lean_inc(v_a_945_);
lean_dec(v___x_934_);
v___x_947_ = lean_box(0);
v_isShared_948_ = v_isSharedCheck_952_;
goto v_resetjp_946_;
}
v_resetjp_946_:
{
lean_object* v___x_950_; 
if (v_isShared_948_ == 0)
{
v___x_950_ = v___x_947_;
goto v_reusejp_949_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v_a_945_);
v___x_950_ = v_reuseFailAlloc_951_;
goto v_reusejp_949_;
}
v_reusejp_949_:
{
return v___x_950_;
}
}
}
}
else
{
lean_dec_ref(v___y_926_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
if (v___y_927_ == 0)
{
lean_object* v___x_953_; 
v___x_953_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__13));
v___y_884_ = v___y_916_;
v___y_885_ = v___y_917_;
v___y_886_ = v___y_928_;
v___y_887_ = v___x_933_;
v___y_888_ = v___y_919_;
v___y_889_ = v___y_920_;
v___y_890_ = v___y_922_;
v___y_891_ = v___y_923_;
v___y_892_ = v___y_924_;
v___y_893_ = v___y_925_;
v___y_894_ = v___x_953_;
goto v___jp_883_;
}
else
{
lean_object* v___x_954_; 
v___x_954_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__5));
v___y_884_ = v___y_916_;
v___y_885_ = v___y_917_;
v___y_886_ = v___y_928_;
v___y_887_ = v___x_933_;
v___y_888_ = v___y_919_;
v___y_889_ = v___y_920_;
v___y_890_ = v___y_922_;
v___y_891_ = v___y_923_;
v___y_892_ = v___y_924_;
v___y_893_ = v___y_925_;
v___y_894_ = v___x_954_;
goto v___jp_883_;
}
}
}
v___jp_955_:
{
lean_object* v___x_971_; lean_object* v___x_972_; 
v___x_971_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__15));
v___x_972_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__17));
v___y_916_ = v___y_956_;
v___y_917_ = v___y_957_;
v___y_918_ = v___y_958_;
v___y_919_ = v___y_959_;
v___y_920_ = v___y_960_;
v___y_921_ = v___y_961_;
v___y_922_ = v___y_962_;
v___y_923_ = v___y_963_;
v___y_924_ = v___y_964_;
v___y_925_ = v___y_965_;
v___y_926_ = v___y_966_;
v___y_927_ = v___y_967_;
v___y_928_ = v___y_968_;
v___y_929_ = v___y_969_;
v___y_930_ = v___y_970_;
v_fst_931_ = v___x_971_;
v_snd_932_ = v___x_972_;
goto v___jp_915_;
}
v___jp_973_:
{
lean_object* v___x_989_; lean_object* v___x_990_; 
v___x_989_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__7));
v___x_990_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__9));
v___y_916_ = v___y_974_;
v___y_917_ = v___y_975_;
v___y_918_ = v___y_976_;
v___y_919_ = v___y_977_;
v___y_920_ = v___y_978_;
v___y_921_ = v___y_979_;
v___y_922_ = v___y_980_;
v___y_923_ = v___y_981_;
v___y_924_ = v___y_982_;
v___y_925_ = v___y_983_;
v___y_926_ = v___y_984_;
v___y_927_ = v___y_985_;
v___y_928_ = v___y_986_;
v___y_929_ = v___y_987_;
v___y_930_ = v___y_988_;
v_fst_931_ = v___x_989_;
v_snd_932_ = v___x_990_;
goto v___jp_915_;
}
v___jp_991_:
{
lean_object* v___x_1000_; size_t v_sz_1001_; size_t v___x_1002_; lean_object* v___x_1003_; 
v___x_1000_ = lp_vampireReplay_Vampire_Formula_subformulas(v_f_793_);
v_sz_1001_ = lean_array_size(v___x_1000_);
v___x_1002_ = ((size_t)0ULL);
lean_inc_ref(v___x_1000_);
lean_inc_ref(v_vars_792_);
lean_inc_ref(v_sorts_791_);
v___x_1003_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Normalize_normalize_spec__0(v_expand_790_, v_sorts_791_, v_vars_792_, v_polarity_794_, v_sz_1001_, v___x_1002_, v___x_1000_, v___y_993_, v___y_998_, v___y_992_, v___y_997_, v___y_995_, v___y_996_);
if (lean_obj_tag(v___x_1003_) == 0)
{
lean_object* v_a_1004_; lean_object* v___x_1006_; uint8_t v_isShared_1007_; uint8_t v_isSharedCheck_1033_; 
v_a_1004_ = lean_ctor_get(v___x_1003_, 0);
v_isSharedCheck_1033_ = !lean_is_exclusive(v___x_1003_);
if (v_isSharedCheck_1033_ == 0)
{
v___x_1006_ = v___x_1003_;
v_isShared_1007_ = v_isSharedCheck_1033_;
goto v_resetjp_1005_;
}
else
{
lean_inc(v_a_1004_);
lean_dec(v___x_1003_);
v___x_1006_ = lean_box(0);
v_isShared_1007_ = v_isSharedCheck_1033_;
goto v_resetjp_1005_;
}
v_resetjp_1005_:
{
lean_object* v___x_1008_; lean_object* v___x_1009_; uint8_t v___x_1010_; 
v___x_1008_ = lean_array_get_size(v_a_1004_);
v___x_1009_ = lean_unsigned_to_nat(0u);
v___x_1010_ = lean_nat_dec_eq(v___x_1008_, v___x_1009_);
if (v___x_1010_ == 0)
{
lean_object* v___x_1011_; uint8_t v___x_1012_; 
v___x_1011_ = lean_unsigned_to_nat(1u);
v___x_1012_ = lean_nat_dec_eq(v___x_1008_, v___x_1011_);
if (v___x_1012_ == 0)
{
size_t v_sz_1013_; lean_object* v___x_1014_; 
lean_del_object(v___x_1006_);
v_sz_1013_ = lean_array_size(v_a_1004_);
lean_inc(v_a_1004_);
v___x_1014_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Normalize_normalize_spec__1(v_sz_1013_, v___x_1002_, v_a_1004_);
if (v___y_999_ == 0)
{
if (v_polarity_794_ == 0)
{
v___y_956_ = v___y_992_;
v___y_957_ = v___x_1002_;
v___y_958_ = v___y_993_;
v___y_959_ = v_sz_1013_;
v___y_960_ = v___y_994_;
v___y_961_ = v_sz_1001_;
v___y_962_ = v___y_995_;
v___y_963_ = v_a_1004_;
v___y_964_ = v___y_996_;
v___y_965_ = v___y_997_;
v___y_966_ = v___x_1000_;
v___y_967_ = v___y_999_;
v___y_968_ = v___x_1009_;
v___y_969_ = v___x_1014_;
v___y_970_ = v___y_998_;
goto v___jp_955_;
}
else
{
v___y_974_ = v___y_992_;
v___y_975_ = v___x_1002_;
v___y_976_ = v___y_993_;
v___y_977_ = v_sz_1013_;
v___y_978_ = v___y_994_;
v___y_979_ = v_sz_1001_;
v___y_980_ = v___y_995_;
v___y_981_ = v_a_1004_;
v___y_982_ = v___y_996_;
v___y_983_ = v___y_997_;
v___y_984_ = v___x_1000_;
v___y_985_ = v___y_999_;
v___y_986_ = v___x_1009_;
v___y_987_ = v___x_1014_;
v___y_988_ = v___y_998_;
goto v___jp_973_;
}
}
else
{
if (v_polarity_794_ == 0)
{
v___y_974_ = v___y_992_;
v___y_975_ = v___x_1002_;
v___y_976_ = v___y_993_;
v___y_977_ = v_sz_1013_;
v___y_978_ = v___y_994_;
v___y_979_ = v_sz_1001_;
v___y_980_ = v___y_995_;
v___y_981_ = v_a_1004_;
v___y_982_ = v___y_996_;
v___y_983_ = v___y_997_;
v___y_984_ = v___x_1000_;
v___y_985_ = v___y_999_;
v___y_986_ = v___x_1009_;
v___y_987_ = v___x_1014_;
v___y_988_ = v___y_998_;
goto v___jp_973_;
}
else
{
v___y_956_ = v___y_992_;
v___y_957_ = v___x_1002_;
v___y_958_ = v___y_993_;
v___y_959_ = v_sz_1013_;
v___y_960_ = v___y_994_;
v___y_961_ = v_sz_1001_;
v___y_962_ = v___y_995_;
v___y_963_ = v_a_1004_;
v___y_964_ = v___y_996_;
v___y_965_ = v___y_997_;
v___y_966_ = v___x_1000_;
v___y_967_ = v___y_999_;
v___y_968_ = v___x_1009_;
v___y_969_ = v___x_1014_;
v___y_970_ = v___y_998_;
goto v___jp_955_;
}
}
}
else
{
uint8_t v___x_1015_; 
lean_dec_ref(v___x_1000_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
v___x_1015_ = lean_nat_dec_lt(v___x_1009_, v___x_1008_);
if (v___x_1015_ == 0)
{
lean_object* v___x_1016_; lean_object* v___x_1017_; 
lean_del_object(v___x_1006_);
lean_dec(v_a_1004_);
lean_dec_ref(v___y_994_);
v___x_1016_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__19, &lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__19_once, _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__19);
v___x_1017_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1016_, v___y_992_, v___y_997_, v___y_995_, v___y_996_);
return v___x_1017_;
}
else
{
lean_object* v___x_1018_; lean_object* v_snd_1019_; lean_object* v___x_1021_; uint8_t v_isShared_1022_; uint8_t v_isSharedCheck_1029_; 
v___x_1018_ = lean_array_fget(v_a_1004_, v___x_1009_);
lean_dec(v_a_1004_);
v_snd_1019_ = lean_ctor_get(v___x_1018_, 1);
v_isSharedCheck_1029_ = !lean_is_exclusive(v___x_1018_);
if (v_isSharedCheck_1029_ == 0)
{
lean_object* v_unused_1030_; 
v_unused_1030_ = lean_ctor_get(v___x_1018_, 0);
lean_dec(v_unused_1030_);
v___x_1021_ = v___x_1018_;
v_isShared_1022_ = v_isSharedCheck_1029_;
goto v_resetjp_1020_;
}
else
{
lean_inc(v_snd_1019_);
lean_dec(v___x_1018_);
v___x_1021_ = lean_box(0);
v_isShared_1022_ = v_isSharedCheck_1029_;
goto v_resetjp_1020_;
}
v_resetjp_1020_:
{
lean_object* v___x_1024_; 
if (v_isShared_1022_ == 0)
{
lean_ctor_set(v___x_1021_, 0, v___y_994_);
v___x_1024_ = v___x_1021_;
goto v_reusejp_1023_;
}
else
{
lean_object* v_reuseFailAlloc_1028_; 
v_reuseFailAlloc_1028_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1028_, 0, v___y_994_);
lean_ctor_set(v_reuseFailAlloc_1028_, 1, v_snd_1019_);
v___x_1024_ = v_reuseFailAlloc_1028_;
goto v_reusejp_1023_;
}
v_reusejp_1023_:
{
lean_object* v___x_1026_; 
if (v_isShared_1007_ == 0)
{
lean_ctor_set(v___x_1006_, 0, v___x_1024_);
v___x_1026_ = v___x_1006_;
goto v_reusejp_1025_;
}
else
{
lean_object* v_reuseFailAlloc_1027_; 
v_reuseFailAlloc_1027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1027_, 0, v___x_1024_);
v___x_1026_ = v_reuseFailAlloc_1027_;
goto v_reusejp_1025_;
}
v_reusejp_1025_:
{
return v___x_1026_;
}
}
}
}
}
}
else
{
lean_object* v___x_1031_; lean_object* v___x_1032_; 
lean_del_object(v___x_1006_);
lean_dec(v_a_1004_);
lean_dec_ref(v___x_1000_);
lean_dec_ref(v___y_994_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
v___x_1031_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__19, &lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__19_once, _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__19);
v___x_1032_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1031_, v___y_992_, v___y_997_, v___y_995_, v___y_996_);
return v___x_1032_;
}
}
}
else
{
lean_object* v_a_1034_; lean_object* v___x_1036_; uint8_t v_isShared_1037_; uint8_t v_isSharedCheck_1041_; 
lean_dec_ref(v___x_1000_);
lean_dec_ref(v___y_994_);
lean_dec_ref(v_vars_792_);
lean_dec_ref(v_sorts_791_);
v_a_1034_ = lean_ctor_get(v___x_1003_, 0);
v_isSharedCheck_1041_ = !lean_is_exclusive(v___x_1003_);
if (v_isSharedCheck_1041_ == 0)
{
v___x_1036_ = v___x_1003_;
v_isShared_1037_ = v_isSharedCheck_1041_;
goto v_resetjp_1035_;
}
else
{
lean_inc(v_a_1034_);
lean_dec(v___x_1003_);
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
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Normalize_normalize_spec__0(uint8_t v_expand_2179_, lean_object* v_sorts_2180_, lean_object* v_vars_2181_, uint8_t v_polarity_2182_, size_t v_sz_2183_, size_t v_i_2184_, lean_object* v_bs_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_, lean_object* v___y_2191_){
_start:
{
uint8_t v___x_2193_; 
v___x_2193_ = lean_usize_dec_lt(v_i_2184_, v_sz_2183_);
if (v___x_2193_ == 0)
{
lean_object* v___x_2194_; 
lean_dec_ref(v_vars_2181_);
lean_dec_ref(v_sorts_2180_);
v___x_2194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2194_, 0, v_bs_2185_);
return v___x_2194_;
}
else
{
lean_object* v_v_2195_; lean_object* v___x_2196_; 
v_v_2195_ = lean_array_uget_borrowed(v_bs_2185_, v_i_2184_);
lean_inc(v_v_2195_);
lean_inc_ref(v_vars_2181_);
lean_inc_ref(v_sorts_2180_);
v___x_2196_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize(v_expand_2179_, v_sorts_2180_, v_vars_2181_, v_v_2195_, v_polarity_2182_, v___y_2186_, v___y_2187_, v___y_2188_, v___y_2189_, v___y_2190_, v___y_2191_);
if (lean_obj_tag(v___x_2196_) == 0)
{
lean_object* v_a_2197_; lean_object* v___x_2198_; lean_object* v_bs_x27_2199_; size_t v___x_2200_; size_t v___x_2201_; lean_object* v___x_2202_; 
v_a_2197_ = lean_ctor_get(v___x_2196_, 0);
lean_inc(v_a_2197_);
lean_dec_ref_known(v___x_2196_, 1);
v___x_2198_ = lean_unsigned_to_nat(0u);
v_bs_x27_2199_ = lean_array_uset(v_bs_2185_, v_i_2184_, v___x_2198_);
v___x_2200_ = ((size_t)1ULL);
v___x_2201_ = lean_usize_add(v_i_2184_, v___x_2200_);
v___x_2202_ = lean_array_uset(v_bs_x27_2199_, v_i_2184_, v_a_2197_);
v_i_2184_ = v___x_2201_;
v_bs_2185_ = v___x_2202_;
goto _start;
}
else
{
lean_object* v_a_2204_; lean_object* v___x_2206_; uint8_t v_isShared_2207_; uint8_t v_isSharedCheck_2211_; 
lean_dec_ref(v_bs_2185_);
lean_dec_ref(v_vars_2181_);
lean_dec_ref(v_sorts_2180_);
v_a_2204_ = lean_ctor_get(v___x_2196_, 0);
v_isSharedCheck_2211_ = !lean_is_exclusive(v___x_2196_);
if (v_isSharedCheck_2211_ == 0)
{
v___x_2206_ = v___x_2196_;
v_isShared_2207_ = v_isSharedCheck_2211_;
goto v_resetjp_2205_;
}
else
{
lean_inc(v_a_2204_);
lean_dec(v___x_2196_);
v___x_2206_ = lean_box(0);
v_isShared_2207_ = v_isSharedCheck_2211_;
goto v_resetjp_2205_;
}
v_resetjp_2205_:
{
lean_object* v___x_2209_; 
if (v_isShared_2207_ == 0)
{
v___x_2209_ = v___x_2206_;
goto v_reusejp_2208_;
}
else
{
lean_object* v_reuseFailAlloc_2210_; 
v_reuseFailAlloc_2210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2210_, 0, v_a_2204_);
v___x_2209_ = v_reuseFailAlloc_2210_;
goto v_reusejp_2208_;
}
v_reusejp_2208_:
{
return v___x_2209_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Normalize_normalize_spec__0___boxed(lean_object* v_expand_2212_, lean_object* v_sorts_2213_, lean_object* v_vars_2214_, lean_object* v_polarity_2215_, lean_object* v_sz_2216_, lean_object* v_i_2217_, lean_object* v_bs_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_, lean_object* v___y_2224_, lean_object* v___y_2225_){
_start:
{
uint8_t v_expand_boxed_2226_; uint8_t v_polarity_boxed_2227_; size_t v_sz_boxed_2228_; size_t v_i_boxed_2229_; lean_object* v_res_2230_; 
v_expand_boxed_2226_ = lean_unbox(v_expand_2212_);
v_polarity_boxed_2227_ = lean_unbox(v_polarity_2215_);
v_sz_boxed_2228_ = lean_unbox_usize(v_sz_2216_);
lean_dec(v_sz_2216_);
v_i_boxed_2229_ = lean_unbox_usize(v_i_2217_);
lean_dec(v_i_2217_);
v_res_2230_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Normalize_normalize_spec__0(v_expand_boxed_2226_, v_sorts_2213_, v_vars_2214_, v_polarity_boxed_2227_, v_sz_boxed_2228_, v_i_boxed_2229_, v_bs_2218_, v___y_2219_, v___y_2220_, v___y_2221_, v___y_2222_, v___y_2223_, v___y_2224_);
lean_dec(v___y_2224_);
lean_dec_ref(v___y_2223_);
lean_dec(v___y_2222_);
lean_dec_ref(v___y_2221_);
lean_dec(v___y_2220_);
lean_dec_ref(v___y_2219_);
return v_res_2230_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___boxed(lean_object* v_expand_2231_, lean_object* v_sorts_2232_, lean_object* v_body_2233_, lean_object* v_polarity_2234_, lean_object* v_isForall_2235_, lean_object* v_rest_2236_, lean_object* v_vars_2237_, lean_object* v_a_2238_, lean_object* v_a_2239_, lean_object* v_a_2240_, lean_object* v_a_2241_, lean_object* v_a_2242_, lean_object* v_a_2243_, lean_object* v_a_2244_){
_start:
{
uint8_t v_expand_boxed_2245_; uint8_t v_polarity_boxed_2246_; uint8_t v_isForall_boxed_2247_; lean_object* v_res_2248_; 
v_expand_boxed_2245_ = lean_unbox(v_expand_2231_);
v_polarity_boxed_2246_ = lean_unbox(v_polarity_2234_);
v_isForall_boxed_2247_ = lean_unbox(v_isForall_2235_);
v_res_2248_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified(v_expand_boxed_2245_, v_sorts_2232_, v_body_2233_, v_polarity_boxed_2246_, v_isForall_boxed_2247_, v_rest_2236_, v_vars_2237_, v_a_2238_, v_a_2239_, v_a_2240_, v_a_2241_, v_a_2242_, v_a_2243_);
lean_dec(v_a_2243_);
lean_dec_ref(v_a_2242_);
lean_dec(v_a_2241_);
lean_dec_ref(v_a_2240_);
lean_dec(v_a_2239_);
lean_dec_ref(v_a_2238_);
return v_res_2248_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___boxed(lean_object* v_expand_2249_, lean_object* v_sorts_2250_, lean_object* v_vars_2251_, lean_object* v_f_2252_, lean_object* v_polarity_2253_, lean_object* v_a_2254_, lean_object* v_a_2255_, lean_object* v_a_2256_, lean_object* v_a_2257_, lean_object* v_a_2258_, lean_object* v_a_2259_, lean_object* v_a_2260_){
_start:
{
uint8_t v_expand_boxed_2261_; uint8_t v_polarity_boxed_2262_; lean_object* v_res_2263_; 
v_expand_boxed_2261_ = lean_unbox(v_expand_2249_);
v_polarity_boxed_2262_ = lean_unbox(v_polarity_2253_);
v_res_2263_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize(v_expand_boxed_2261_, v_sorts_2250_, v_vars_2251_, v_f_2252_, v_polarity_boxed_2262_, v_a_2254_, v_a_2255_, v_a_2256_, v_a_2257_, v_a_2258_, v_a_2259_);
lean_dec(v_a_2259_);
lean_dec_ref(v_a_2258_);
lean_dec(v_a_2257_);
lean_dec_ref(v_a_2256_);
lean_dec(v_a_2255_);
lean_dec_ref(v_a_2254_);
return v_res_2263_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__1(void){
_start:
{
lean_object* v___x_2265_; lean_object* v___x_2266_; 
v___x_2265_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__0));
v___x_2266_ = l_Lean_stringToMessageData(v___x_2265_);
return v___x_2266_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__3(void){
_start:
{
lean_object* v___x_2268_; lean_object* v___x_2269_; 
v___x_2268_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__2));
v___x_2269_ = l_Lean_stringToMessageData(v___x_2268_);
return v___x_2269_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__4(void){
_start:
{
lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; 
v___x_2270_ = lean_box(0);
v___x_2271_ = lean_unsigned_to_nat(16u);
v___x_2272_ = lean_mk_array(v___x_2271_, v___x_2270_);
return v___x_2272_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__5(void){
_start:
{
lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; 
v___x_2273_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__4, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__4_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__4);
v___x_2274_ = lean_unsigned_to_nat(0u);
v___x_2275_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2275_, 0, v___x_2274_);
lean_ctor_set(v___x_2275_, 1, v___x_2273_);
return v___x_2275_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__9(void){
_start:
{
lean_object* v___x_2281_; lean_object* v___x_2282_; 
v___x_2281_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__8));
v___x_2282_ = l_Lean_stringToMessageData(v___x_2281_);
return v___x_2282_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep(uint8_t v_expand_2283_, lean_object* v_step_2284_, lean_object* v_a_2285_, lean_object* v_a_2286_, lean_object* v_a_2287_, lean_object* v_a_2288_, lean_object* v_a_2289_, lean_object* v_a_2290_){
_start:
{
lean_object* v_unit_2292_; lean_object* v_premises_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; uint8_t v___x_2296_; 
v_unit_2292_ = lean_ctor_get(v_step_2284_, 0);
v_premises_2293_ = lean_ctor_get(v_step_2284_, 1);
v___x_2294_ = lean_array_get_size(v_premises_2293_);
v___x_2295_ = lean_unsigned_to_nat(1u);
v___x_2296_ = lean_nat_dec_eq(v___x_2294_, v___x_2295_);
if (v___x_2296_ == 0)
{
lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; 
lean_dec_ref(v_step_2284_);
v___x_2297_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__1, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__1_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__1);
v___x_2298_ = l_Nat_reprFast(v___x_2294_);
v___x_2299_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2299_, 0, v___x_2298_);
v___x_2300_ = l_Lean_MessageData_ofFormat(v___x_2299_);
v___x_2301_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2301_, 0, v___x_2297_);
lean_ctor_set(v___x_2301_, 1, v___x_2300_);
v___x_2302_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2301_, v_a_2287_, v_a_2288_, v_a_2289_, v_a_2290_);
return v___x_2302_;
}
else
{
lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v_fst_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; uint8_t v___x_2308_; 
v___x_2303_ = lean_unsigned_to_nat(0u);
v___x_2304_ = lean_array_fget_borrowed(v_premises_2293_, v___x_2303_);
v_fst_2305_ = lean_ctor_get(v___x_2304_, 0);
lean_inc_ref(v_unit_2292_);
v___x_2306_ = lp_vampireReplay_Vampire_Unit_parents(v_unit_2292_);
v___x_2307_ = lean_array_get_size(v___x_2306_);
v___x_2308_ = lean_nat_dec_lt(v___x_2303_, v___x_2307_);
if (v___x_2308_ == 0)
{
lean_object* v___x_2309_; lean_object* v___x_2310_; 
lean_dec_ref(v___x_2306_);
lean_dec_ref(v_step_2284_);
v___x_2309_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__3, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__3_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__3);
v___x_2310_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2309_, v_a_2287_, v_a_2288_, v_a_2289_, v_a_2290_);
return v___x_2310_;
}
else
{
lean_object* v___x_2311_; lean_object* v___x_2312_; 
v___x_2311_ = lean_array_fget(v___x_2306_, v___x_2303_);
lean_dec_ref(v___x_2306_);
lean_inc(v___x_2311_);
v___x_2312_ = lp_vampireReplay_Vampire_Unit_formula_x3f(v___x_2311_);
if (lean_obj_tag(v___x_2312_) == 1)
{
lean_object* v_val_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v_sorts_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; 
v_val_2313_ = lean_ctor_get(v___x_2312_, 0);
lean_inc(v_val_2313_);
lean_dec_ref_known(v___x_2312_, 1);
v___x_2314_ = lp_vampireReplay_Vampire_Unit_varSorts(v___x_2311_);
lean_inc_ref(v_unit_2292_);
v___x_2315_ = lp_vampireReplay_Vampire_Unit_varSorts(v_unit_2292_);
v_sorts_2316_ = l_Array_append___redArg(v___x_2314_, v___x_2315_);
lean_dec_ref(v___x_2315_);
v___x_2317_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__5, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__5_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__5);
v___x_2318_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize(v_expand_2283_, v_sorts_2316_, v___x_2317_, v_val_2313_, v___x_2308_, v_a_2285_, v_a_2286_, v_a_2287_, v_a_2288_, v_a_2289_, v_a_2290_);
if (lean_obj_tag(v___x_2318_) == 0)
{
lean_object* v_a_2319_; lean_object* v_snd_2320_; lean_object* v_snd_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; 
v_a_2319_ = lean_ctor_get(v___x_2318_, 0);
lean_inc(v_a_2319_);
lean_dec_ref_known(v___x_2318_, 1);
v_snd_2320_ = lean_ctor_get(v_a_2319_, 1);
lean_inc(v_snd_2320_);
lean_dec(v_a_2319_);
v_snd_2321_ = lean_ctor_get(v_snd_2320_, 1);
lean_inc(v_snd_2321_);
lean_dec(v_snd_2320_);
v___x_2322_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__7));
v___x_2323_ = lean_unsigned_to_nat(2u);
v___x_2324_ = lean_mk_empty_array_with_capacity(v___x_2323_);
lean_inc_ref(v___x_2324_);
v___x_2325_ = lean_array_push(v___x_2324_, v_snd_2321_);
lean_inc(v_fst_2305_);
v___x_2326_ = lean_array_push(v___x_2325_, v_fst_2305_);
v___x_2327_ = l_Lean_Meta_mkAppM(v___x_2322_, v___x_2326_, v_a_2287_, v_a_2288_, v_a_2289_, v_a_2290_);
if (lean_obj_tag(v___x_2327_) == 0)
{
lean_object* v_a_2328_; lean_object* v___x_2329_; 
v_a_2328_ = lean_ctor_get(v___x_2327_, 0);
lean_inc(v_a_2328_);
lean_dec_ref_known(v___x_2327_, 1);
v___x_2329_ = lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(v_step_2284_, v_a_2285_, v_a_2286_, v_a_2287_, v_a_2288_, v_a_2289_, v_a_2290_);
if (lean_obj_tag(v___x_2329_) == 0)
{
lean_object* v_a_2330_; lean_object* v___x_2331_; 
v_a_2330_ = lean_ctor_get(v___x_2329_, 0);
lean_inc(v_a_2330_);
lean_dec_ref_known(v___x_2329_, 1);
lean_inc(v_a_2290_);
lean_inc_ref(v_a_2289_);
lean_inc(v_a_2288_);
lean_inc_ref(v_a_2287_);
lean_inc(v_a_2328_);
v___x_2331_ = lean_infer_type(v_a_2328_, v_a_2287_, v_a_2288_, v_a_2289_, v_a_2290_);
if (lean_obj_tag(v___x_2331_) == 0)
{
lean_object* v_a_2332_; lean_object* v___x_2333_; 
v_a_2332_ = lean_ctor_get(v___x_2331_, 0);
lean_inc_n(v_a_2332_, 2);
lean_dec_ref_known(v___x_2331_, 1);
lean_inc(v_a_2330_);
v___x_2333_ = l_Lean_Meta_isExprDefEq(v_a_2332_, v_a_2330_, v_a_2287_, v_a_2288_, v_a_2289_, v_a_2290_);
if (lean_obj_tag(v___x_2333_) == 0)
{
lean_object* v_a_2334_; lean_object* v___x_2336_; uint8_t v_isShared_2337_; uint8_t v_isSharedCheck_2347_; 
v_a_2334_ = lean_ctor_get(v___x_2333_, 0);
v_isSharedCheck_2347_ = !lean_is_exclusive(v___x_2333_);
if (v_isSharedCheck_2347_ == 0)
{
v___x_2336_ = v___x_2333_;
v_isShared_2337_ = v_isSharedCheck_2347_;
goto v_resetjp_2335_;
}
else
{
lean_inc(v_a_2334_);
lean_dec(v___x_2333_);
v___x_2336_ = lean_box(0);
v_isShared_2337_ = v_isSharedCheck_2347_;
goto v_resetjp_2335_;
}
v_resetjp_2335_:
{
uint8_t v___x_2338_; 
v___x_2338_ = lean_unbox(v_a_2334_);
lean_dec(v_a_2334_);
if (v___x_2338_ == 0)
{
lean_object* v___x_2339_; 
lean_del_object(v___x_2336_);
v___x_2339_ = lp_vampireReplay_Vampire_Reconstruct_equiv(v_a_2332_, v_a_2330_, v_a_2285_, v_a_2286_, v_a_2287_, v_a_2288_, v_a_2289_, v_a_2290_);
if (lean_obj_tag(v___x_2339_) == 0)
{
lean_object* v_a_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; 
v_a_2340_ = lean_ctor_get(v___x_2339_, 0);
lean_inc(v_a_2340_);
lean_dec_ref_known(v___x_2339_, 1);
v___x_2341_ = lean_array_push(v___x_2324_, v_a_2340_);
v___x_2342_ = lean_array_push(v___x_2341_, v_a_2328_);
v___x_2343_ = l_Lean_Meta_mkAppM(v___x_2322_, v___x_2342_, v_a_2287_, v_a_2288_, v_a_2289_, v_a_2290_);
return v___x_2343_;
}
else
{
lean_dec(v_a_2328_);
lean_dec_ref(v___x_2324_);
return v___x_2339_;
}
}
else
{
lean_object* v___x_2345_; 
lean_dec(v_a_2332_);
lean_dec(v_a_2330_);
lean_dec_ref(v___x_2324_);
if (v_isShared_2337_ == 0)
{
lean_ctor_set(v___x_2336_, 0, v_a_2328_);
v___x_2345_ = v___x_2336_;
goto v_reusejp_2344_;
}
else
{
lean_object* v_reuseFailAlloc_2346_; 
v_reuseFailAlloc_2346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2346_, 0, v_a_2328_);
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
lean_dec(v_a_2332_);
lean_dec(v_a_2330_);
lean_dec(v_a_2328_);
lean_dec_ref(v___x_2324_);
v_a_2348_ = lean_ctor_get(v___x_2333_, 0);
v_isSharedCheck_2355_ = !lean_is_exclusive(v___x_2333_);
if (v_isSharedCheck_2355_ == 0)
{
v___x_2350_ = v___x_2333_;
v_isShared_2351_ = v_isSharedCheck_2355_;
goto v_resetjp_2349_;
}
else
{
lean_inc(v_a_2348_);
lean_dec(v___x_2333_);
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
lean_dec(v_a_2330_);
lean_dec(v_a_2328_);
lean_dec_ref(v___x_2324_);
return v___x_2331_;
}
}
else
{
lean_dec(v_a_2328_);
lean_dec_ref(v___x_2324_);
return v___x_2329_;
}
}
else
{
lean_dec_ref(v___x_2324_);
lean_dec_ref(v_step_2284_);
return v___x_2327_;
}
}
else
{
lean_object* v_a_2356_; lean_object* v___x_2358_; uint8_t v_isShared_2359_; uint8_t v_isSharedCheck_2363_; 
lean_dec_ref(v_step_2284_);
v_a_2356_ = lean_ctor_get(v___x_2318_, 0);
v_isSharedCheck_2363_ = !lean_is_exclusive(v___x_2318_);
if (v_isSharedCheck_2363_ == 0)
{
v___x_2358_ = v___x_2318_;
v_isShared_2359_ = v_isSharedCheck_2363_;
goto v_resetjp_2357_;
}
else
{
lean_inc(v_a_2356_);
lean_dec(v___x_2318_);
v___x_2358_ = lean_box(0);
v_isShared_2359_ = v_isSharedCheck_2363_;
goto v_resetjp_2357_;
}
v_resetjp_2357_:
{
lean_object* v___x_2361_; 
if (v_isShared_2359_ == 0)
{
v___x_2361_ = v___x_2358_;
goto v_reusejp_2360_;
}
else
{
lean_object* v_reuseFailAlloc_2362_; 
v_reuseFailAlloc_2362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2362_, 0, v_a_2356_);
v___x_2361_ = v_reuseFailAlloc_2362_;
goto v_reusejp_2360_;
}
v_reusejp_2360_:
{
return v___x_2361_;
}
}
}
}
else
{
lean_object* v___x_2364_; lean_object* v___x_2365_; 
lean_dec(v___x_2312_);
lean_dec(v___x_2311_);
lean_dec_ref(v_step_2284_);
v___x_2364_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__9, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__9_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__9);
v___x_2365_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2364_, v_a_2287_, v_a_2288_, v_a_2289_, v_a_2290_);
return v___x_2365_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___boxed(lean_object* v_expand_2366_, lean_object* v_step_2367_, lean_object* v_a_2368_, lean_object* v_a_2369_, lean_object* v_a_2370_, lean_object* v_a_2371_, lean_object* v_a_2372_, lean_object* v_a_2373_, lean_object* v_a_2374_){
_start:
{
uint8_t v_expand_boxed_2375_; lean_object* v_res_2376_; 
v_expand_boxed_2375_ = lean_unbox(v_expand_2366_);
v_res_2376_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep(v_expand_boxed_2375_, v_step_2367_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
lean_dec(v_a_2373_);
lean_dec_ref(v_a_2372_);
lean_dec(v_a_2371_);
lean_dec_ref(v_a_2370_);
lean_dec(v_a_2369_);
lean_dec_ref(v_a_2368_);
return v_res_2376_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_ennf(lean_object* v_step_2377_, lean_object* v_a_2378_, lean_object* v_a_2379_, lean_object* v_a_2380_, lean_object* v_a_2381_, lean_object* v_a_2382_, lean_object* v_a_2383_){
_start:
{
uint8_t v___x_2385_; lean_object* v___x_2386_; 
v___x_2385_ = 0;
v___x_2386_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep(v___x_2385_, v_step_2377_, v_a_2378_, v_a_2379_, v_a_2380_, v_a_2381_, v_a_2382_, v_a_2383_);
return v___x_2386_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_ennf___boxed(lean_object* v_step_2387_, lean_object* v_a_2388_, lean_object* v_a_2389_, lean_object* v_a_2390_, lean_object* v_a_2391_, lean_object* v_a_2392_, lean_object* v_a_2393_, lean_object* v_a_2394_){
_start:
{
lean_object* v_res_2395_; 
v_res_2395_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_ennf(v_step_2387_, v_a_2388_, v_a_2389_, v_a_2390_, v_a_2391_, v_a_2392_, v_a_2393_);
lean_dec(v_a_2393_);
lean_dec_ref(v_a_2392_);
lean_dec(v_a_2391_);
lean_dec_ref(v_a_2390_);
lean_dec(v_a_2389_);
lean_dec_ref(v_a_2388_);
return v_res_2395_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_nnf(lean_object* v_step_2396_, lean_object* v_a_2397_, lean_object* v_a_2398_, lean_object* v_a_2399_, lean_object* v_a_2400_, lean_object* v_a_2401_, lean_object* v_a_2402_){
_start:
{
uint8_t v___x_2404_; lean_object* v___x_2405_; 
v___x_2404_ = 1;
v___x_2405_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep(v___x_2404_, v_step_2396_, v_a_2397_, v_a_2398_, v_a_2399_, v_a_2400_, v_a_2401_, v_a_2402_);
return v___x_2405_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_nnf___boxed(lean_object* v_step_2406_, lean_object* v_a_2407_, lean_object* v_a_2408_, lean_object* v_a_2409_, lean_object* v_a_2410_, lean_object* v_a_2411_, lean_object* v_a_2412_, lean_object* v_a_2413_){
_start:
{
lean_object* v_res_2414_; 
v_res_2414_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_nnf(v_step_2406_, v_a_2407_, v_a_2408_, v_a_2409_, v_a_2410_, v_a_2411_, v_a_2412_);
lean_dec(v_a_2412_);
lean_dec_ref(v_a_2411_);
lean_dec(v_a_2410_);
lean_dec_ref(v_a_2409_);
lean_dec(v_a_2408_);
lean_dec_ref(v_a_2407_);
return v_res_2414_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_vampireReplay_Vampire_Reconstruct_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_vampireReplay_Vampire_Reconstruct_Rules_Normalize(uint8_t builtin) {
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
