// Lean compiler output
// Module: VampireReplay.Reconstruct.Rules.Normalize
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
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lp_vampireReplay_Vampire_Formula_subformulas(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(lean_object*, uint32_t, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_junction(lean_object*, lean_object*, lean_object*);
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
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_parents(lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_formula_x3f(lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_varSorts(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_equiv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Classical"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__0_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "propDecidable"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__1 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__1_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(40, 236, 220, 79, 38, 141, 161, 150)}};
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__2_value_aux_0),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 239, 88, 215, 135, 192, 113, 64)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__2 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__2_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__3 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__3_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "imp_iff_not_or"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__4 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__4_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__5_value_aux_0),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(63, 19, 145, 232, 73, 180, 75, 152)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__5 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__5_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "missing argument"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__1;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Iff"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__2 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__2_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trans"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__3 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__3_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__4_value_aux_0),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(25, 192, 189, 143, 180, 129, 112, 178)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__4 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__4_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(40, 236, 220, 79, 38, 141, 161, 150)}};
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
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "not_false_expand"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__35 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__35_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Normalize"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__28 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__28_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Reconstruct"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__24 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__24_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Vampire"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__31 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__31_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Rules"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__26 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__26_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "VampireReplay"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__22 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__22_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__20 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__20_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__20_value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__21 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__21_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__21_value),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__22_value),LEAN_SCALAR_PTR_LITERAL(55, 108, 59, 247, 144, 93, 201, 62)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__23 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__23_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__23_value),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__24_value),LEAN_SCALAR_PTR_LITERAL(49, 4, 52, 107, 192, 232, 179, 71)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__25 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__25_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__25_value),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__26_value),LEAN_SCALAR_PTR_LITERAL(1, 97, 226, 57, 100, 38, 228, 13)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__27 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__27_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__27_value),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__28_value),LEAN_SCALAR_PTR_LITERAL(244, 163, 131, 209, 41, 2, 199, 11)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__29 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__29_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__29_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(117, 147, 200, 155, 201, 103, 54, 161)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__30 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__30_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__30_value),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__31_value),LEAN_SCALAR_PTR_LITERAL(42, 71, 201, 145, 64, 11, 66, 18)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__32 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__32_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__32_value),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__24_value),LEAN_SCALAR_PTR_LITERAL(240, 93, 211, 198, 54, 230, 220, 0)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__33 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__33_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__33_value),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__28_value),LEAN_SCALAR_PTR_LITERAL(249, 119, 145, 134, 26, 240, 164, 71)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__34 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__34_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__34_value),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__35_value),LEAN_SCALAR_PTR_LITERAL(212, 249, 44, 139, 166, 146, 94, 18)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__36 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__36_value;
static const lean_array_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__37 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__37_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__38;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "not_true_expand"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__39 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__39_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__34_value),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__39_value),LEAN_SCALAR_PTR_LITERAL(203, 249, 140, 27, 13, 32, 204, 148)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__40 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__40_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__41;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "nnf cannot state"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__42 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__42_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__43;
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
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(40, 236, 220, 79, 38, 141, 161, 150)}};
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
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "not_imp"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__44 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__44_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__45_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(40, 236, 220, 79, 38, 141, 161, 150)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__45_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__44_value),LEAN_SCALAR_PTR_LITERAL(42, 231, 136, 85, 20, 135, 254, 151)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__45 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__45_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__46;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__47;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "not_not"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__48 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__48_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__49_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(40, 236, 220, 79, 38, 141, 161, 150)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__49_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__48_value),LEAN_SCALAR_PTR_LITERAL(145, 137, 207, 135, 95, 147, 196, 34)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__49 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__49_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "not_iff_expand"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__50 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__50_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "iff_iff_implies_and_implies"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__51 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__51_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__51_value),LEAN_SCALAR_PTR_LITERAL(65, 98, 125, 184, 35, 143, 136, 103)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__52 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__52_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "iff_congr"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__53 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__53_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__53_value),LEAN_SCALAR_PTR_LITERAL(74, 35, 94, 165, 147, 2, 155, 38)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__54 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__54_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "refl"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__55 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__55_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__56_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__56_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__55_value),LEAN_SCALAR_PTR_LITERAL(196, 84, 201, 13, 92, 117, 118, 47)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__56 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__56_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "cannot normalise a formula with connective "};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__57 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__57_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__58_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__58;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize(uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Normalize_normalize_spec__0(uint8_t, lean_object*, lean_object*, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Normalize_normalize_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "normalisation should have one premise, got "};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__0 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__1;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "normalisation without a premise"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__2 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__3;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__4;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__5;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mp"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__6 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__6_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__7_value_aux_0),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__6_value),LEAN_SCALAR_PTR_LITERAL(147, 220, 216, 40, 239, 165, 44, 174)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__7 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__7_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "normalisation should be given a formula"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__8 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__8_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__9;
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_ennf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_ennf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_nnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_nnf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg(lean_object* v_a_11_, lean_object* v_b_12_, lean_object* v_a_13_, lean_object* v_a_14_, lean_object* v_a_15_, lean_object* v_a_16_){
_start:
{
lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_18_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__2));
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
v___x_28_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___closed__5));
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
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg___boxed(lean_object* v_a_40_, lean_object* v_b_41_, lean_object* v_a_42_, lean_object* v_a_43_, lean_object* v_a_44_, lean_object* v_a_45_, lean_object* v_a_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg(v_a_40_, v_b_41_, v_a_42_, v_a_43_, v_a_44_, v_a_45_);
lean_dec(v_a_45_);
lean_dec_ref(v_a_44_);
lean_dec(v_a_43_);
lean_dec_ref(v_a_42_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr(lean_object* v_a_48_, lean_object* v_b_49_, lean_object* v_a_50_, lean_object* v_a_51_, lean_object* v_a_52_, lean_object* v_a_53_, lean_object* v_a_54_, lean_object* v_a_55_){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg(v_a_48_, v_b_49_, v_a_52_, v_a_53_, v_a_54_, v_a_55_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___boxed(lean_object* v_a_58_, lean_object* v_b_59_, lean_object* v_a_60_, lean_object* v_a_61_, lean_object* v_a_62_, lean_object* v_a_63_, lean_object* v_a_64_, lean_object* v_a_65_, lean_object* v_a_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr(v_a_58_, v_b_59_, v_a_60_, v_a_61_, v_a_62_, v_a_63_, v_a_64_, v_a_65_);
lean_dec(v_a_65_);
lean_dec_ref(v_a_64_);
lean_dec(v_a_63_);
lean_dec_ref(v_a_62_);
lean_dec(v_a_61_);
lean_dec_ref(v_a_60_);
return v_res_67_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__1(void){
_start:
{
lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_69_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__0));
v___x_70_ = l_Lean_stringToMessageData(v___x_69_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg(lean_object* v_deMorgan_76_, lean_object* v_congruence_77_, lean_object* v_fn_78_, lean_object* v_unit_79_, lean_object* v_givens_80_, lean_object* v_parts_81_, lean_object* v_i_82_, lean_object* v_a_83_, lean_object* v_a_84_, lean_object* v_a_85_, lean_object* v_a_86_){
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
v___x_90_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__1, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__1_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__1);
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
v___x_100_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__1, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__1_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__1);
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
v___x_113_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg(v_deMorgan_76_, v_congruence_77_, v_fn_78_, v_unit_79_, v_givens_80_, v_parts_81_, v___x_96_, v_a_83_, v_a_84_, v_a_85_, v_a_86_);
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
v___x_119_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__4));
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
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___boxed(lean_object* v_deMorgan_124_, lean_object* v_congruence_125_, lean_object* v_fn_126_, lean_object* v_unit_127_, lean_object* v_givens_128_, lean_object* v_parts_129_, lean_object* v_i_130_, lean_object* v_a_131_, lean_object* v_a_132_, lean_object* v_a_133_, lean_object* v_a_134_, lean_object* v_a_135_){
_start:
{
lean_object* v_res_136_; 
v_res_136_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg(v_deMorgan_124_, v_congruence_125_, v_fn_126_, v_unit_127_, v_givens_128_, v_parts_129_, v_i_130_, v_a_131_, v_a_132_, v_a_133_, v_a_134_);
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
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed(lean_object* v_deMorgan_137_, lean_object* v_congruence_138_, lean_object* v_fn_139_, lean_object* v_unit_140_, lean_object* v_givens_141_, lean_object* v_parts_142_, lean_object* v_i_143_, lean_object* v_a_144_, lean_object* v_a_145_, lean_object* v_a_146_, lean_object* v_a_147_, lean_object* v_a_148_, lean_object* v_a_149_){
_start:
{
lean_object* v___x_151_; 
v___x_151_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg(v_deMorgan_137_, v_congruence_138_, v_fn_139_, v_unit_140_, v_givens_141_, v_parts_142_, v_i_143_, v_a_146_, v_a_147_, v_a_148_, v_a_149_);
return v___x_151_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___boxed(lean_object* v_deMorgan_152_, lean_object* v_congruence_153_, lean_object* v_fn_154_, lean_object* v_unit_155_, lean_object* v_givens_156_, lean_object* v_parts_157_, lean_object* v_i_158_, lean_object* v_a_159_, lean_object* v_a_160_, lean_object* v_a_161_, lean_object* v_a_162_, lean_object* v_a_163_, lean_object* v_a_164_, lean_object* v_a_165_){
_start:
{
lean_object* v_res_166_; 
v_res_166_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed(v_deMorgan_152_, v_congruence_153_, v_fn_154_, v_unit_155_, v_givens_156_, v_parts_157_, v_i_158_, v_a_159_, v_a_160_, v_a_161_, v_a_162_, v_a_163_, v_a_164_);
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
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__38(void){
_start:
{
lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; 
v___x_307_ = lean_box(0);
v___x_308_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__17));
v___x_309_ = l_Lean_Expr_const___override(v___x_308_, v___x_307_);
return v___x_309_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__41(void){
_start:
{
lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; 
v___x_314_ = lean_box(0);
v___x_315_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__9));
v___x_316_ = l_Lean_Expr_const___override(v___x_315_, v___x_314_);
return v___x_316_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__43(void){
_start:
{
lean_object* v___x_318_; lean_object* v___x_319_; 
v___x_318_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__42));
v___x_319_ = l_Lean_stringToMessageData(v___x_318_);
return v___x_319_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__3(void){
_start:
{
lean_object* v___x_321_; lean_object* v___x_322_; 
v___x_321_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__2));
v___x_322_ = l_Lean_stringToMessageData(v___x_321_);
return v___x_322_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__10(void){
_start:
{
lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_332_ = lean_box(0);
v___x_333_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__1));
v___x_334_ = l_Lean_Expr_const___override(v___x_333_, v___x_332_);
return v___x_334_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0(lean_object* v_vars_342_, uint32_t v_fst_343_, uint8_t v_expand_344_, lean_object* v_sorts_345_, lean_object* v_body_346_, uint8_t v_polarity_347_, uint8_t v_isForall_348_, lean_object* v_tail_349_, lean_object* v_a_350_, lean_object* v_x_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_){
_start:
{
lean_object* v___x_359_; lean_object* v___x_360_; 
lean_inc_ref(v_x_351_);
v___x_359_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(v_vars_342_, v_fst_343_, v_x_351_);
v___x_360_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified(v_expand_344_, v_sorts_345_, v_body_346_, v_polarity_347_, v_isForall_348_, v_tail_349_, v___x_359_, v___y_352_, v___y_353_, v___y_354_, v___y_355_, v___y_356_, v___y_357_);
if (lean_obj_tag(v___x_360_) == 0)
{
lean_object* v_a_361_; lean_object* v___x_363_; uint8_t v_isShared_364_; uint8_t v_isSharedCheck_698_; 
v_a_361_ = lean_ctor_get(v___x_360_, 0);
v_isSharedCheck_698_ = !lean_is_exclusive(v___x_360_);
if (v_isSharedCheck_698_ == 0)
{
v___x_363_ = v___x_360_;
v_isShared_364_ = v_isSharedCheck_698_;
goto v_resetjp_362_;
}
else
{
lean_inc(v_a_361_);
lean_dec(v___x_360_);
v___x_363_ = lean_box(0);
v_isShared_364_ = v_isSharedCheck_698_;
goto v_resetjp_362_;
}
v_resetjp_362_:
{
lean_object* v_snd_365_; lean_object* v_fst_366_; lean_object* v___x_368_; uint8_t v_isShared_369_; uint8_t v_isSharedCheck_697_; 
v_snd_365_ = lean_ctor_get(v_a_361_, 1);
v_fst_366_ = lean_ctor_get(v_a_361_, 0);
v_isSharedCheck_697_ = !lean_is_exclusive(v_a_361_);
if (v_isSharedCheck_697_ == 0)
{
v___x_368_ = v_a_361_;
v_isShared_369_ = v_isSharedCheck_697_;
goto v_resetjp_367_;
}
else
{
lean_inc(v_snd_365_);
lean_inc(v_fst_366_);
lean_dec(v_a_361_);
v___x_368_ = lean_box(0);
v_isShared_369_ = v_isSharedCheck_697_;
goto v_resetjp_367_;
}
v_resetjp_367_:
{
lean_object* v_fst_370_; lean_object* v_snd_371_; lean_object* v___x_373_; uint8_t v_isShared_374_; uint8_t v_isSharedCheck_696_; 
v_fst_370_ = lean_ctor_get(v_snd_365_, 0);
v_snd_371_ = lean_ctor_get(v_snd_365_, 1);
v_isSharedCheck_696_ = !lean_is_exclusive(v_snd_365_);
if (v_isSharedCheck_696_ == 0)
{
v___x_373_ = v_snd_365_;
v_isShared_374_ = v_isSharedCheck_696_;
goto v_resetjp_372_;
}
else
{
lean_inc(v_snd_371_);
lean_inc(v_fst_370_);
lean_dec(v_snd_365_);
v___x_373_ = lean_box(0);
v_isShared_374_ = v_isSharedCheck_696_;
goto v_resetjp_372_;
}
v_resetjp_372_:
{
lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; uint8_t v___x_378_; uint8_t v___x_379_; uint8_t v___x_380_; lean_object* v___x_381_; 
v___x_375_ = lean_unsigned_to_nat(1u);
v___x_376_ = lean_mk_empty_array_with_capacity(v___x_375_);
lean_inc_ref(v___x_376_);
v___x_377_ = lean_array_push(v___x_376_, v_x_351_);
v___x_378_ = 0;
v___x_379_ = 1;
v___x_380_ = 1;
v___x_381_ = l_Lean_Meta_mkLambdaFVars(v___x_377_, v_snd_371_, v___x_378_, v___x_379_, v___x_378_, v___x_379_, v___x_380_, v___y_354_, v___y_355_, v___y_356_, v___y_357_);
if (lean_obj_tag(v___x_381_) == 0)
{
if (v_polarity_347_ == 0)
{
lean_object* v_a_382_; lean_object* v___x_383_; uint8_t v___x_384_; 
v_a_382_ = lean_ctor_get(v___x_381_, 0);
lean_inc(v_a_382_);
lean_dec_ref_known(v___x_381_, 1);
v___x_383_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__1));
v___x_384_ = l_Lean_Expr_isAppOfArity(v_fst_366_, v___x_383_, v___x_375_);
if (v___x_384_ == 0)
{
lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; 
lean_dec(v_a_382_);
lean_dec_ref(v___x_377_);
lean_dec_ref(v___x_376_);
lean_del_object(v___x_373_);
lean_dec(v_fst_370_);
lean_del_object(v___x_368_);
lean_del_object(v___x_363_);
lean_dec_ref(v_a_350_);
v___x_385_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__3, &lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__3);
v___x_386_ = l_Lean_indentExpr(v_fst_366_);
v___x_387_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_387_, 0, v___x_385_);
lean_ctor_set(v___x_387_, 1, v___x_386_);
v___x_388_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_387_, v___y_354_, v___y_355_, v___y_356_, v___y_357_);
return v___x_388_;
}
else
{
lean_object* v___x_389_; lean_object* v___x_390_; 
v___x_389_ = l_Lean_Expr_appArg_x21(v_fst_366_);
lean_dec(v_fst_366_);
lean_inc_ref(v___x_389_);
v___x_390_ = l_Lean_Meta_mkLambdaFVars(v___x_377_, v___x_389_, v___x_378_, v___x_379_, v___x_378_, v___x_379_, v___x_380_, v___y_354_, v___y_355_, v___y_356_, v___y_357_);
if (lean_obj_tag(v___x_390_) == 0)
{
if (v_isForall_348_ == 0)
{
lean_object* v_a_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; 
lean_dec_ref(v___x_389_);
v_a_391_ = lean_ctor_get(v___x_390_, 0);
lean_inc_n(v_a_391_, 2);
lean_dec_ref_known(v___x_390_, 1);
v___x_392_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__5));
lean_inc_ref(v___x_376_);
v___x_393_ = lean_array_push(v___x_376_, v_a_391_);
v___x_394_ = l_Lean_Meta_mkAppM(v___x_392_, v___x_393_, v___y_354_, v___y_355_, v___y_356_, v___y_357_);
if (lean_obj_tag(v___x_394_) == 0)
{
lean_object* v_a_395_; lean_object* v___x_396_; 
v_a_395_ = lean_ctor_get(v___x_394_, 0);
lean_inc(v_a_395_);
lean_dec_ref_known(v___x_394_, 1);
v___x_396_ = l_Lean_Meta_mkForallFVars(v___x_377_, v_fst_370_, v___x_378_, v___x_379_, v___x_379_, v___x_380_, v___y_354_, v___y_355_, v___y_356_, v___y_357_);
lean_dec_ref(v___x_377_);
if (lean_obj_tag(v___x_396_) == 0)
{
lean_object* v_a_397_; lean_object* v___x_398_; lean_object* v___x_400_; 
v_a_397_ = lean_ctor_get(v___x_396_, 0);
lean_inc(v_a_397_);
lean_dec_ref_known(v___x_396_, 1);
v___x_398_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__7));
if (v_isShared_364_ == 0)
{
lean_ctor_set_tag(v___x_363_, 1);
lean_ctor_set(v___x_363_, 0, v_a_350_);
v___x_400_ = v___x_363_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_456_; 
v_reuseFailAlloc_456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_456_, 0, v_a_350_);
v___x_400_ = v_reuseFailAlloc_456_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_401_, 0, v_a_391_);
v___x_402_ = lean_unsigned_to_nat(2u);
v___x_403_ = lean_mk_empty_array_with_capacity(v___x_402_);
lean_inc_ref(v___x_403_);
v___x_404_ = lean_array_push(v___x_403_, v___x_400_);
v___x_405_ = lean_array_push(v___x_404_, v___x_401_);
v___x_406_ = l_Lean_Meta_mkAppOptM(v___x_398_, v___x_405_, v___y_354_, v___y_355_, v___y_356_, v___y_357_);
if (lean_obj_tag(v___x_406_) == 0)
{
lean_object* v_a_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; 
v_a_407_ = lean_ctor_get(v___x_406_, 0);
lean_inc(v_a_407_);
lean_dec_ref_known(v___x_406_, 1);
v___x_408_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__9));
v___x_409_ = lean_array_push(v___x_376_, v_a_382_);
v___x_410_ = l_Lean_Meta_mkAppM(v___x_408_, v___x_409_, v___y_354_, v___y_355_, v___y_356_, v___y_357_);
if (lean_obj_tag(v___x_410_) == 0)
{
lean_object* v_a_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; 
v_a_411_ = lean_ctor_get(v___x_410_, 0);
lean_inc(v_a_411_);
lean_dec_ref_known(v___x_410_, 1);
v___x_412_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__4));
v___x_413_ = lean_array_push(v___x_403_, v_a_407_);
v___x_414_ = lean_array_push(v___x_413_, v_a_411_);
v___x_415_ = l_Lean_Meta_mkAppM(v___x_412_, v___x_414_, v___y_354_, v___y_355_, v___y_356_, v___y_357_);
if (lean_obj_tag(v___x_415_) == 0)
{
lean_object* v_a_416_; lean_object* v___x_418_; uint8_t v_isShared_419_; uint8_t v_isSharedCheck_431_; 
v_a_416_ = lean_ctor_get(v___x_415_, 0);
v_isSharedCheck_431_ = !lean_is_exclusive(v___x_415_);
if (v_isSharedCheck_431_ == 0)
{
v___x_418_ = v___x_415_;
v_isShared_419_ = v_isSharedCheck_431_;
goto v_resetjp_417_;
}
else
{
lean_inc(v_a_416_);
lean_dec(v___x_415_);
v___x_418_ = lean_box(0);
v_isShared_419_ = v_isSharedCheck_431_;
goto v_resetjp_417_;
}
v_resetjp_417_:
{
lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_423_; 
v___x_420_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__10, &lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__10_once, _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__10);
v___x_421_ = l_Lean_Expr_app___override(v___x_420_, v_a_395_);
if (v_isShared_374_ == 0)
{
lean_ctor_set(v___x_373_, 1, v_a_416_);
lean_ctor_set(v___x_373_, 0, v_a_397_);
v___x_423_ = v___x_373_;
goto v_reusejp_422_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v_a_397_);
lean_ctor_set(v_reuseFailAlloc_430_, 1, v_a_416_);
v___x_423_ = v_reuseFailAlloc_430_;
goto v_reusejp_422_;
}
v_reusejp_422_:
{
lean_object* v___x_425_; 
if (v_isShared_369_ == 0)
{
lean_ctor_set(v___x_368_, 1, v___x_423_);
lean_ctor_set(v___x_368_, 0, v___x_421_);
v___x_425_ = v___x_368_;
goto v_reusejp_424_;
}
else
{
lean_object* v_reuseFailAlloc_429_; 
v_reuseFailAlloc_429_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_429_, 0, v___x_421_);
lean_ctor_set(v_reuseFailAlloc_429_, 1, v___x_423_);
v___x_425_ = v_reuseFailAlloc_429_;
goto v_reusejp_424_;
}
v_reusejp_424_:
{
lean_object* v___x_427_; 
if (v_isShared_419_ == 0)
{
lean_ctor_set(v___x_418_, 0, v___x_425_);
v___x_427_ = v___x_418_;
goto v_reusejp_426_;
}
else
{
lean_object* v_reuseFailAlloc_428_; 
v_reuseFailAlloc_428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_428_, 0, v___x_425_);
v___x_427_ = v_reuseFailAlloc_428_;
goto v_reusejp_426_;
}
v_reusejp_426_:
{
return v___x_427_;
}
}
}
}
}
else
{
lean_object* v_a_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_439_; 
lean_dec(v_a_397_);
lean_dec(v_a_395_);
lean_del_object(v___x_373_);
lean_del_object(v___x_368_);
v_a_432_ = lean_ctor_get(v___x_415_, 0);
v_isSharedCheck_439_ = !lean_is_exclusive(v___x_415_);
if (v_isSharedCheck_439_ == 0)
{
v___x_434_ = v___x_415_;
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_a_432_);
lean_dec(v___x_415_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
lean_object* v___x_437_; 
if (v_isShared_435_ == 0)
{
v___x_437_ = v___x_434_;
goto v_reusejp_436_;
}
else
{
lean_object* v_reuseFailAlloc_438_; 
v_reuseFailAlloc_438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_438_, 0, v_a_432_);
v___x_437_ = v_reuseFailAlloc_438_;
goto v_reusejp_436_;
}
v_reusejp_436_:
{
return v___x_437_;
}
}
}
}
else
{
lean_object* v_a_440_; lean_object* v___x_442_; uint8_t v_isShared_443_; uint8_t v_isSharedCheck_447_; 
lean_dec(v_a_407_);
lean_dec_ref(v___x_403_);
lean_dec(v_a_397_);
lean_dec(v_a_395_);
lean_del_object(v___x_373_);
lean_del_object(v___x_368_);
v_a_440_ = lean_ctor_get(v___x_410_, 0);
v_isSharedCheck_447_ = !lean_is_exclusive(v___x_410_);
if (v_isSharedCheck_447_ == 0)
{
v___x_442_ = v___x_410_;
v_isShared_443_ = v_isSharedCheck_447_;
goto v_resetjp_441_;
}
else
{
lean_inc(v_a_440_);
lean_dec(v___x_410_);
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
else
{
lean_object* v_a_448_; lean_object* v___x_450_; uint8_t v_isShared_451_; uint8_t v_isSharedCheck_455_; 
lean_dec_ref(v___x_403_);
lean_dec(v_a_397_);
lean_dec(v_a_395_);
lean_dec(v_a_382_);
lean_dec_ref(v___x_376_);
lean_del_object(v___x_373_);
lean_del_object(v___x_368_);
v_a_448_ = lean_ctor_get(v___x_406_, 0);
v_isSharedCheck_455_ = !lean_is_exclusive(v___x_406_);
if (v_isSharedCheck_455_ == 0)
{
v___x_450_ = v___x_406_;
v_isShared_451_ = v_isSharedCheck_455_;
goto v_resetjp_449_;
}
else
{
lean_inc(v_a_448_);
lean_dec(v___x_406_);
v___x_450_ = lean_box(0);
v_isShared_451_ = v_isSharedCheck_455_;
goto v_resetjp_449_;
}
v_resetjp_449_:
{
lean_object* v___x_453_; 
if (v_isShared_451_ == 0)
{
v___x_453_ = v___x_450_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v_a_448_);
v___x_453_ = v_reuseFailAlloc_454_;
goto v_reusejp_452_;
}
v_reusejp_452_:
{
return v___x_453_;
}
}
}
}
}
else
{
lean_object* v_a_457_; lean_object* v___x_459_; uint8_t v_isShared_460_; uint8_t v_isSharedCheck_464_; 
lean_dec(v_a_395_);
lean_dec(v_a_391_);
lean_dec(v_a_382_);
lean_dec_ref(v___x_376_);
lean_del_object(v___x_373_);
lean_del_object(v___x_368_);
lean_del_object(v___x_363_);
lean_dec_ref(v_a_350_);
v_a_457_ = lean_ctor_get(v___x_396_, 0);
v_isSharedCheck_464_ = !lean_is_exclusive(v___x_396_);
if (v_isSharedCheck_464_ == 0)
{
v___x_459_ = v___x_396_;
v_isShared_460_ = v_isSharedCheck_464_;
goto v_resetjp_458_;
}
else
{
lean_inc(v_a_457_);
lean_dec(v___x_396_);
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
lean_object* v_a_465_; lean_object* v___x_467_; uint8_t v_isShared_468_; uint8_t v_isSharedCheck_472_; 
lean_dec(v_a_391_);
lean_dec(v_a_382_);
lean_dec_ref(v___x_377_);
lean_dec_ref(v___x_376_);
lean_del_object(v___x_373_);
lean_dec(v_fst_370_);
lean_del_object(v___x_368_);
lean_del_object(v___x_363_);
lean_dec_ref(v_a_350_);
v_a_465_ = lean_ctor_get(v___x_394_, 0);
v_isSharedCheck_472_ = !lean_is_exclusive(v___x_394_);
if (v_isSharedCheck_472_ == 0)
{
v___x_467_ = v___x_394_;
v_isShared_468_ = v_isSharedCheck_472_;
goto v_resetjp_466_;
}
else
{
lean_inc(v_a_465_);
lean_dec(v___x_394_);
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
lean_object* v_a_473_; lean_object* v___x_474_; 
v_a_473_ = lean_ctor_get(v___x_390_, 0);
lean_inc(v_a_473_);
lean_dec_ref_known(v___x_390_, 1);
v___x_474_ = l_Lean_Meta_mkForallFVars(v___x_377_, v___x_389_, v___x_378_, v___x_379_, v___x_379_, v___x_380_, v___y_354_, v___y_355_, v___y_356_, v___y_357_);
if (lean_obj_tag(v___x_474_) == 0)
{
lean_object* v_a_475_; lean_object* v___x_476_; 
v_a_475_ = lean_ctor_get(v___x_474_, 0);
lean_inc(v_a_475_);
lean_dec_ref_known(v___x_474_, 1);
v___x_476_ = l_Lean_Meta_mkLambdaFVars(v___x_377_, v_fst_370_, v___x_378_, v___x_379_, v___x_378_, v___x_379_, v___x_380_, v___y_354_, v___y_355_, v___y_356_, v___y_357_);
lean_dec_ref(v___x_377_);
if (lean_obj_tag(v___x_476_) == 0)
{
lean_object* v_a_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; 
v_a_477_ = lean_ctor_get(v___x_476_, 0);
lean_inc(v_a_477_);
lean_dec_ref_known(v___x_476_, 1);
v___x_478_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__5));
lean_inc_ref(v___x_376_);
v___x_479_ = lean_array_push(v___x_376_, v_a_477_);
v___x_480_ = l_Lean_Meta_mkAppM(v___x_478_, v___x_479_, v___y_354_, v___y_355_, v___y_356_, v___y_357_);
if (lean_obj_tag(v___x_480_) == 0)
{
lean_object* v_a_481_; lean_object* v___x_482_; lean_object* v___x_484_; 
v_a_481_ = lean_ctor_get(v___x_480_, 0);
lean_inc(v_a_481_);
lean_dec_ref_known(v___x_480_, 1);
v___x_482_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__12));
if (v_isShared_364_ == 0)
{
lean_ctor_set_tag(v___x_363_, 1);
lean_ctor_set(v___x_363_, 0, v_a_350_);
v___x_484_ = v___x_363_;
goto v_reusejp_483_;
}
else
{
lean_object* v_reuseFailAlloc_540_; 
v_reuseFailAlloc_540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_540_, 0, v_a_350_);
v___x_484_ = v_reuseFailAlloc_540_;
goto v_reusejp_483_;
}
v_reusejp_483_:
{
lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; 
v___x_485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_485_, 0, v_a_473_);
v___x_486_ = lean_unsigned_to_nat(2u);
v___x_487_ = lean_mk_empty_array_with_capacity(v___x_486_);
lean_inc_ref(v___x_487_);
v___x_488_ = lean_array_push(v___x_487_, v___x_484_);
v___x_489_ = lean_array_push(v___x_488_, v___x_485_);
v___x_490_ = l_Lean_Meta_mkAppOptM(v___x_482_, v___x_489_, v___y_354_, v___y_355_, v___y_356_, v___y_357_);
if (lean_obj_tag(v___x_490_) == 0)
{
lean_object* v_a_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; 
v_a_491_ = lean_ctor_get(v___x_490_, 0);
lean_inc(v_a_491_);
lean_dec_ref_known(v___x_490_, 1);
v___x_492_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__14));
v___x_493_ = lean_array_push(v___x_376_, v_a_382_);
v___x_494_ = l_Lean_Meta_mkAppM(v___x_492_, v___x_493_, v___y_354_, v___y_355_, v___y_356_, v___y_357_);
if (lean_obj_tag(v___x_494_) == 0)
{
lean_object* v_a_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; 
v_a_495_ = lean_ctor_get(v___x_494_, 0);
lean_inc(v_a_495_);
lean_dec_ref_known(v___x_494_, 1);
v___x_496_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__4));
v___x_497_ = lean_array_push(v___x_487_, v_a_491_);
v___x_498_ = lean_array_push(v___x_497_, v_a_495_);
v___x_499_ = l_Lean_Meta_mkAppM(v___x_496_, v___x_498_, v___y_354_, v___y_355_, v___y_356_, v___y_357_);
if (lean_obj_tag(v___x_499_) == 0)
{
lean_object* v_a_500_; lean_object* v___x_502_; uint8_t v_isShared_503_; uint8_t v_isSharedCheck_515_; 
v_a_500_ = lean_ctor_get(v___x_499_, 0);
v_isSharedCheck_515_ = !lean_is_exclusive(v___x_499_);
if (v_isSharedCheck_515_ == 0)
{
v___x_502_ = v___x_499_;
v_isShared_503_ = v_isSharedCheck_515_;
goto v_resetjp_501_;
}
else
{
lean_inc(v_a_500_);
lean_dec(v___x_499_);
v___x_502_ = lean_box(0);
v_isShared_503_ = v_isSharedCheck_515_;
goto v_resetjp_501_;
}
v_resetjp_501_:
{
lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_507_; 
v___x_504_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__10, &lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__10_once, _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__10);
v___x_505_ = l_Lean_Expr_app___override(v___x_504_, v_a_475_);
if (v_isShared_374_ == 0)
{
lean_ctor_set(v___x_373_, 1, v_a_500_);
lean_ctor_set(v___x_373_, 0, v_a_481_);
v___x_507_ = v___x_373_;
goto v_reusejp_506_;
}
else
{
lean_object* v_reuseFailAlloc_514_; 
v_reuseFailAlloc_514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_514_, 0, v_a_481_);
lean_ctor_set(v_reuseFailAlloc_514_, 1, v_a_500_);
v___x_507_ = v_reuseFailAlloc_514_;
goto v_reusejp_506_;
}
v_reusejp_506_:
{
lean_object* v___x_509_; 
if (v_isShared_369_ == 0)
{
lean_ctor_set(v___x_368_, 1, v___x_507_);
lean_ctor_set(v___x_368_, 0, v___x_505_);
v___x_509_ = v___x_368_;
goto v_reusejp_508_;
}
else
{
lean_object* v_reuseFailAlloc_513_; 
v_reuseFailAlloc_513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_513_, 0, v___x_505_);
lean_ctor_set(v_reuseFailAlloc_513_, 1, v___x_507_);
v___x_509_ = v_reuseFailAlloc_513_;
goto v_reusejp_508_;
}
v_reusejp_508_:
{
lean_object* v___x_511_; 
if (v_isShared_503_ == 0)
{
lean_ctor_set(v___x_502_, 0, v___x_509_);
v___x_511_ = v___x_502_;
goto v_reusejp_510_;
}
else
{
lean_object* v_reuseFailAlloc_512_; 
v_reuseFailAlloc_512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_512_, 0, v___x_509_);
v___x_511_ = v_reuseFailAlloc_512_;
goto v_reusejp_510_;
}
v_reusejp_510_:
{
return v___x_511_;
}
}
}
}
}
else
{
lean_object* v_a_516_; lean_object* v___x_518_; uint8_t v_isShared_519_; uint8_t v_isSharedCheck_523_; 
lean_dec(v_a_481_);
lean_dec(v_a_475_);
lean_del_object(v___x_373_);
lean_del_object(v___x_368_);
v_a_516_ = lean_ctor_get(v___x_499_, 0);
v_isSharedCheck_523_ = !lean_is_exclusive(v___x_499_);
if (v_isSharedCheck_523_ == 0)
{
v___x_518_ = v___x_499_;
v_isShared_519_ = v_isSharedCheck_523_;
goto v_resetjp_517_;
}
else
{
lean_inc(v_a_516_);
lean_dec(v___x_499_);
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
else
{
lean_object* v_a_524_; lean_object* v___x_526_; uint8_t v_isShared_527_; uint8_t v_isSharedCheck_531_; 
lean_dec(v_a_491_);
lean_dec_ref(v___x_487_);
lean_dec(v_a_481_);
lean_dec(v_a_475_);
lean_del_object(v___x_373_);
lean_del_object(v___x_368_);
v_a_524_ = lean_ctor_get(v___x_494_, 0);
v_isSharedCheck_531_ = !lean_is_exclusive(v___x_494_);
if (v_isSharedCheck_531_ == 0)
{
v___x_526_ = v___x_494_;
v_isShared_527_ = v_isSharedCheck_531_;
goto v_resetjp_525_;
}
else
{
lean_inc(v_a_524_);
lean_dec(v___x_494_);
v___x_526_ = lean_box(0);
v_isShared_527_ = v_isSharedCheck_531_;
goto v_resetjp_525_;
}
v_resetjp_525_:
{
lean_object* v___x_529_; 
if (v_isShared_527_ == 0)
{
v___x_529_ = v___x_526_;
goto v_reusejp_528_;
}
else
{
lean_object* v_reuseFailAlloc_530_; 
v_reuseFailAlloc_530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_530_, 0, v_a_524_);
v___x_529_ = v_reuseFailAlloc_530_;
goto v_reusejp_528_;
}
v_reusejp_528_:
{
return v___x_529_;
}
}
}
}
else
{
lean_object* v_a_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_539_; 
lean_dec_ref(v___x_487_);
lean_dec(v_a_481_);
lean_dec(v_a_475_);
lean_dec(v_a_382_);
lean_dec_ref(v___x_376_);
lean_del_object(v___x_373_);
lean_del_object(v___x_368_);
v_a_532_ = lean_ctor_get(v___x_490_, 0);
v_isSharedCheck_539_ = !lean_is_exclusive(v___x_490_);
if (v_isSharedCheck_539_ == 0)
{
v___x_534_ = v___x_490_;
v_isShared_535_ = v_isSharedCheck_539_;
goto v_resetjp_533_;
}
else
{
lean_inc(v_a_532_);
lean_dec(v___x_490_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_539_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
lean_object* v___x_537_; 
if (v_isShared_535_ == 0)
{
v___x_537_ = v___x_534_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_538_; 
v_reuseFailAlloc_538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_538_, 0, v_a_532_);
v___x_537_ = v_reuseFailAlloc_538_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
return v___x_537_;
}
}
}
}
}
else
{
lean_object* v_a_541_; lean_object* v___x_543_; uint8_t v_isShared_544_; uint8_t v_isSharedCheck_548_; 
lean_dec(v_a_475_);
lean_dec(v_a_473_);
lean_dec(v_a_382_);
lean_dec_ref(v___x_376_);
lean_del_object(v___x_373_);
lean_del_object(v___x_368_);
lean_del_object(v___x_363_);
lean_dec_ref(v_a_350_);
v_a_541_ = lean_ctor_get(v___x_480_, 0);
v_isSharedCheck_548_ = !lean_is_exclusive(v___x_480_);
if (v_isSharedCheck_548_ == 0)
{
v___x_543_ = v___x_480_;
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
else
{
lean_inc(v_a_541_);
lean_dec(v___x_480_);
v___x_543_ = lean_box(0);
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
v_resetjp_542_:
{
lean_object* v___x_546_; 
if (v_isShared_544_ == 0)
{
v___x_546_ = v___x_543_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v_a_541_);
v___x_546_ = v_reuseFailAlloc_547_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
return v___x_546_;
}
}
}
}
else
{
lean_object* v_a_549_; lean_object* v___x_551_; uint8_t v_isShared_552_; uint8_t v_isSharedCheck_556_; 
lean_dec(v_a_475_);
lean_dec(v_a_473_);
lean_dec(v_a_382_);
lean_dec_ref(v___x_376_);
lean_del_object(v___x_373_);
lean_del_object(v___x_368_);
lean_del_object(v___x_363_);
lean_dec_ref(v_a_350_);
v_a_549_ = lean_ctor_get(v___x_476_, 0);
v_isSharedCheck_556_ = !lean_is_exclusive(v___x_476_);
if (v_isSharedCheck_556_ == 0)
{
v___x_551_ = v___x_476_;
v_isShared_552_ = v_isSharedCheck_556_;
goto v_resetjp_550_;
}
else
{
lean_inc(v_a_549_);
lean_dec(v___x_476_);
v___x_551_ = lean_box(0);
v_isShared_552_ = v_isSharedCheck_556_;
goto v_resetjp_550_;
}
v_resetjp_550_:
{
lean_object* v___x_554_; 
if (v_isShared_552_ == 0)
{
v___x_554_ = v___x_551_;
goto v_reusejp_553_;
}
else
{
lean_object* v_reuseFailAlloc_555_; 
v_reuseFailAlloc_555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_555_, 0, v_a_549_);
v___x_554_ = v_reuseFailAlloc_555_;
goto v_reusejp_553_;
}
v_reusejp_553_:
{
return v___x_554_;
}
}
}
}
else
{
lean_object* v_a_557_; lean_object* v___x_559_; uint8_t v_isShared_560_; uint8_t v_isSharedCheck_564_; 
lean_dec(v_a_473_);
lean_dec(v_a_382_);
lean_dec_ref(v___x_377_);
lean_dec_ref(v___x_376_);
lean_del_object(v___x_373_);
lean_dec(v_fst_370_);
lean_del_object(v___x_368_);
lean_del_object(v___x_363_);
lean_dec_ref(v_a_350_);
v_a_557_ = lean_ctor_get(v___x_474_, 0);
v_isSharedCheck_564_ = !lean_is_exclusive(v___x_474_);
if (v_isSharedCheck_564_ == 0)
{
v___x_559_ = v___x_474_;
v_isShared_560_ = v_isSharedCheck_564_;
goto v_resetjp_558_;
}
else
{
lean_inc(v_a_557_);
lean_dec(v___x_474_);
v___x_559_ = lean_box(0);
v_isShared_560_ = v_isSharedCheck_564_;
goto v_resetjp_558_;
}
v_resetjp_558_:
{
lean_object* v___x_562_; 
if (v_isShared_560_ == 0)
{
v___x_562_ = v___x_559_;
goto v_reusejp_561_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v_a_557_);
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
}
else
{
lean_object* v_a_565_; lean_object* v___x_567_; uint8_t v_isShared_568_; uint8_t v_isSharedCheck_572_; 
lean_dec_ref(v___x_389_);
lean_dec(v_a_382_);
lean_dec_ref(v___x_377_);
lean_dec_ref(v___x_376_);
lean_del_object(v___x_373_);
lean_dec(v_fst_370_);
lean_del_object(v___x_368_);
lean_del_object(v___x_363_);
lean_dec_ref(v_a_350_);
v_a_565_ = lean_ctor_get(v___x_390_, 0);
v_isSharedCheck_572_ = !lean_is_exclusive(v___x_390_);
if (v_isSharedCheck_572_ == 0)
{
v___x_567_ = v___x_390_;
v_isShared_568_ = v_isSharedCheck_572_;
goto v_resetjp_566_;
}
else
{
lean_inc(v_a_565_);
lean_dec(v___x_390_);
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
else
{
lean_del_object(v___x_363_);
lean_dec_ref(v_a_350_);
if (v_isForall_348_ == 0)
{
lean_object* v_a_573_; lean_object* v___x_574_; 
v_a_573_ = lean_ctor_get(v___x_381_, 0);
lean_inc(v_a_573_);
lean_dec_ref_known(v___x_381_, 1);
v___x_574_ = l_Lean_Meta_mkLambdaFVars(v___x_377_, v_fst_366_, v___x_378_, v___x_379_, v___x_378_, v___x_379_, v___x_380_, v___y_354_, v___y_355_, v___y_356_, v___y_357_);
if (lean_obj_tag(v___x_574_) == 0)
{
lean_object* v_a_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; 
v_a_575_ = lean_ctor_get(v___x_574_, 0);
lean_inc(v_a_575_);
lean_dec_ref_known(v___x_574_, 1);
v___x_576_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__5));
lean_inc_ref(v___x_376_);
v___x_577_ = lean_array_push(v___x_376_, v_a_575_);
v___x_578_ = l_Lean_Meta_mkAppM(v___x_576_, v___x_577_, v___y_354_, v___y_355_, v___y_356_, v___y_357_);
if (lean_obj_tag(v___x_578_) == 0)
{
lean_object* v_a_579_; lean_object* v___x_580_; 
v_a_579_ = lean_ctor_get(v___x_578_, 0);
lean_inc(v_a_579_);
lean_dec_ref_known(v___x_578_, 1);
v___x_580_ = l_Lean_Meta_mkLambdaFVars(v___x_377_, v_fst_370_, v___x_378_, v___x_379_, v___x_378_, v___x_379_, v___x_380_, v___y_354_, v___y_355_, v___y_356_, v___y_357_);
lean_dec_ref(v___x_377_);
if (lean_obj_tag(v___x_580_) == 0)
{
lean_object* v_a_581_; lean_object* v___x_582_; lean_object* v___x_583_; 
v_a_581_ = lean_ctor_get(v___x_580_, 0);
lean_inc(v_a_581_);
lean_dec_ref_known(v___x_580_, 1);
lean_inc_ref(v___x_376_);
v___x_582_ = lean_array_push(v___x_376_, v_a_581_);
v___x_583_ = l_Lean_Meta_mkAppM(v___x_576_, v___x_582_, v___y_354_, v___y_355_, v___y_356_, v___y_357_);
if (lean_obj_tag(v___x_583_) == 0)
{
lean_object* v_a_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; 
v_a_584_ = lean_ctor_get(v___x_583_, 0);
lean_inc(v_a_584_);
lean_dec_ref_known(v___x_583_, 1);
v___x_585_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__14));
v___x_586_ = lean_array_push(v___x_376_, v_a_573_);
v___x_587_ = l_Lean_Meta_mkAppM(v___x_585_, v___x_586_, v___y_354_, v___y_355_, v___y_356_, v___y_357_);
if (lean_obj_tag(v___x_587_) == 0)
{
lean_object* v_a_588_; lean_object* v___x_590_; uint8_t v_isShared_591_; uint8_t v_isSharedCheck_601_; 
v_a_588_ = lean_ctor_get(v___x_587_, 0);
v_isSharedCheck_601_ = !lean_is_exclusive(v___x_587_);
if (v_isSharedCheck_601_ == 0)
{
v___x_590_ = v___x_587_;
v_isShared_591_ = v_isSharedCheck_601_;
goto v_resetjp_589_;
}
else
{
lean_inc(v_a_588_);
lean_dec(v___x_587_);
v___x_590_ = lean_box(0);
v_isShared_591_ = v_isSharedCheck_601_;
goto v_resetjp_589_;
}
v_resetjp_589_:
{
lean_object* v___x_593_; 
if (v_isShared_374_ == 0)
{
lean_ctor_set(v___x_373_, 1, v_a_588_);
lean_ctor_set(v___x_373_, 0, v_a_584_);
v___x_593_ = v___x_373_;
goto v_reusejp_592_;
}
else
{
lean_object* v_reuseFailAlloc_600_; 
v_reuseFailAlloc_600_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_600_, 0, v_a_584_);
lean_ctor_set(v_reuseFailAlloc_600_, 1, v_a_588_);
v___x_593_ = v_reuseFailAlloc_600_;
goto v_reusejp_592_;
}
v_reusejp_592_:
{
lean_object* v___x_595_; 
if (v_isShared_369_ == 0)
{
lean_ctor_set(v___x_368_, 1, v___x_593_);
lean_ctor_set(v___x_368_, 0, v_a_579_);
v___x_595_ = v___x_368_;
goto v_reusejp_594_;
}
else
{
lean_object* v_reuseFailAlloc_599_; 
v_reuseFailAlloc_599_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_599_, 0, v_a_579_);
lean_ctor_set(v_reuseFailAlloc_599_, 1, v___x_593_);
v___x_595_ = v_reuseFailAlloc_599_;
goto v_reusejp_594_;
}
v_reusejp_594_:
{
lean_object* v___x_597_; 
if (v_isShared_591_ == 0)
{
lean_ctor_set(v___x_590_, 0, v___x_595_);
v___x_597_ = v___x_590_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v___x_595_);
v___x_597_ = v_reuseFailAlloc_598_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
return v___x_597_;
}
}
}
}
}
else
{
lean_object* v_a_602_; lean_object* v___x_604_; uint8_t v_isShared_605_; uint8_t v_isSharedCheck_609_; 
lean_dec(v_a_584_);
lean_dec(v_a_579_);
lean_del_object(v___x_373_);
lean_del_object(v___x_368_);
v_a_602_ = lean_ctor_get(v___x_587_, 0);
v_isSharedCheck_609_ = !lean_is_exclusive(v___x_587_);
if (v_isSharedCheck_609_ == 0)
{
v___x_604_ = v___x_587_;
v_isShared_605_ = v_isSharedCheck_609_;
goto v_resetjp_603_;
}
else
{
lean_inc(v_a_602_);
lean_dec(v___x_587_);
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
lean_dec(v_a_579_);
lean_dec(v_a_573_);
lean_dec_ref(v___x_376_);
lean_del_object(v___x_373_);
lean_del_object(v___x_368_);
v_a_610_ = lean_ctor_get(v___x_583_, 0);
v_isSharedCheck_617_ = !lean_is_exclusive(v___x_583_);
if (v_isSharedCheck_617_ == 0)
{
v___x_612_ = v___x_583_;
v_isShared_613_ = v_isSharedCheck_617_;
goto v_resetjp_611_;
}
else
{
lean_inc(v_a_610_);
lean_dec(v___x_583_);
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
lean_dec(v_a_579_);
lean_dec(v_a_573_);
lean_dec_ref(v___x_376_);
lean_del_object(v___x_373_);
lean_del_object(v___x_368_);
v_a_618_ = lean_ctor_get(v___x_580_, 0);
v_isSharedCheck_625_ = !lean_is_exclusive(v___x_580_);
if (v_isSharedCheck_625_ == 0)
{
v___x_620_ = v___x_580_;
v_isShared_621_ = v_isSharedCheck_625_;
goto v_resetjp_619_;
}
else
{
lean_inc(v_a_618_);
lean_dec(v___x_580_);
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
else
{
lean_object* v_a_626_; lean_object* v___x_628_; uint8_t v_isShared_629_; uint8_t v_isSharedCheck_633_; 
lean_dec(v_a_573_);
lean_dec_ref(v___x_377_);
lean_dec_ref(v___x_376_);
lean_del_object(v___x_373_);
lean_dec(v_fst_370_);
lean_del_object(v___x_368_);
v_a_626_ = lean_ctor_get(v___x_578_, 0);
v_isSharedCheck_633_ = !lean_is_exclusive(v___x_578_);
if (v_isSharedCheck_633_ == 0)
{
v___x_628_ = v___x_578_;
v_isShared_629_ = v_isSharedCheck_633_;
goto v_resetjp_627_;
}
else
{
lean_inc(v_a_626_);
lean_dec(v___x_578_);
v___x_628_ = lean_box(0);
v_isShared_629_ = v_isSharedCheck_633_;
goto v_resetjp_627_;
}
v_resetjp_627_:
{
lean_object* v___x_631_; 
if (v_isShared_629_ == 0)
{
v___x_631_ = v___x_628_;
goto v_reusejp_630_;
}
else
{
lean_object* v_reuseFailAlloc_632_; 
v_reuseFailAlloc_632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_632_, 0, v_a_626_);
v___x_631_ = v_reuseFailAlloc_632_;
goto v_reusejp_630_;
}
v_reusejp_630_:
{
return v___x_631_;
}
}
}
}
else
{
lean_object* v_a_634_; lean_object* v___x_636_; uint8_t v_isShared_637_; uint8_t v_isSharedCheck_641_; 
lean_dec(v_a_573_);
lean_dec_ref(v___x_377_);
lean_dec_ref(v___x_376_);
lean_del_object(v___x_373_);
lean_dec(v_fst_370_);
lean_del_object(v___x_368_);
v_a_634_ = lean_ctor_get(v___x_574_, 0);
v_isSharedCheck_641_ = !lean_is_exclusive(v___x_574_);
if (v_isSharedCheck_641_ == 0)
{
v___x_636_ = v___x_574_;
v_isShared_637_ = v_isSharedCheck_641_;
goto v_resetjp_635_;
}
else
{
lean_inc(v_a_634_);
lean_dec(v___x_574_);
v___x_636_ = lean_box(0);
v_isShared_637_ = v_isSharedCheck_641_;
goto v_resetjp_635_;
}
v_resetjp_635_:
{
lean_object* v___x_639_; 
if (v_isShared_637_ == 0)
{
v___x_639_ = v___x_636_;
goto v_reusejp_638_;
}
else
{
lean_object* v_reuseFailAlloc_640_; 
v_reuseFailAlloc_640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_640_, 0, v_a_634_);
v___x_639_ = v_reuseFailAlloc_640_;
goto v_reusejp_638_;
}
v_reusejp_638_:
{
return v___x_639_;
}
}
}
}
else
{
lean_object* v_a_642_; lean_object* v___x_643_; 
v_a_642_ = lean_ctor_get(v___x_381_, 0);
lean_inc(v_a_642_);
lean_dec_ref_known(v___x_381_, 1);
v___x_643_ = l_Lean_Meta_mkForallFVars(v___x_377_, v_fst_366_, v___x_378_, v___x_379_, v___x_379_, v___x_380_, v___y_354_, v___y_355_, v___y_356_, v___y_357_);
if (lean_obj_tag(v___x_643_) == 0)
{
lean_object* v_a_644_; lean_object* v___x_645_; 
v_a_644_ = lean_ctor_get(v___x_643_, 0);
lean_inc(v_a_644_);
lean_dec_ref_known(v___x_643_, 1);
v___x_645_ = l_Lean_Meta_mkForallFVars(v___x_377_, v_fst_370_, v___x_378_, v___x_379_, v___x_379_, v___x_380_, v___y_354_, v___y_355_, v___y_356_, v___y_357_);
lean_dec_ref(v___x_377_);
if (lean_obj_tag(v___x_645_) == 0)
{
lean_object* v_a_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; 
v_a_646_ = lean_ctor_get(v___x_645_, 0);
lean_inc(v_a_646_);
lean_dec_ref_known(v___x_645_, 1);
v___x_647_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__9));
v___x_648_ = lean_array_push(v___x_376_, v_a_642_);
v___x_649_ = l_Lean_Meta_mkAppM(v___x_647_, v___x_648_, v___y_354_, v___y_355_, v___y_356_, v___y_357_);
if (lean_obj_tag(v___x_649_) == 0)
{
lean_object* v_a_650_; lean_object* v___x_652_; uint8_t v_isShared_653_; uint8_t v_isSharedCheck_663_; 
v_a_650_ = lean_ctor_get(v___x_649_, 0);
v_isSharedCheck_663_ = !lean_is_exclusive(v___x_649_);
if (v_isSharedCheck_663_ == 0)
{
v___x_652_ = v___x_649_;
v_isShared_653_ = v_isSharedCheck_663_;
goto v_resetjp_651_;
}
else
{
lean_inc(v_a_650_);
lean_dec(v___x_649_);
v___x_652_ = lean_box(0);
v_isShared_653_ = v_isSharedCheck_663_;
goto v_resetjp_651_;
}
v_resetjp_651_:
{
lean_object* v___x_655_; 
if (v_isShared_374_ == 0)
{
lean_ctor_set(v___x_373_, 1, v_a_650_);
lean_ctor_set(v___x_373_, 0, v_a_646_);
v___x_655_ = v___x_373_;
goto v_reusejp_654_;
}
else
{
lean_object* v_reuseFailAlloc_662_; 
v_reuseFailAlloc_662_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_662_, 0, v_a_646_);
lean_ctor_set(v_reuseFailAlloc_662_, 1, v_a_650_);
v___x_655_ = v_reuseFailAlloc_662_;
goto v_reusejp_654_;
}
v_reusejp_654_:
{
lean_object* v___x_657_; 
if (v_isShared_369_ == 0)
{
lean_ctor_set(v___x_368_, 1, v___x_655_);
lean_ctor_set(v___x_368_, 0, v_a_644_);
v___x_657_ = v___x_368_;
goto v_reusejp_656_;
}
else
{
lean_object* v_reuseFailAlloc_661_; 
v_reuseFailAlloc_661_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_661_, 0, v_a_644_);
lean_ctor_set(v_reuseFailAlloc_661_, 1, v___x_655_);
v___x_657_ = v_reuseFailAlloc_661_;
goto v_reusejp_656_;
}
v_reusejp_656_:
{
lean_object* v___x_659_; 
if (v_isShared_653_ == 0)
{
lean_ctor_set(v___x_652_, 0, v___x_657_);
v___x_659_ = v___x_652_;
goto v_reusejp_658_;
}
else
{
lean_object* v_reuseFailAlloc_660_; 
v_reuseFailAlloc_660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_660_, 0, v___x_657_);
v___x_659_ = v_reuseFailAlloc_660_;
goto v_reusejp_658_;
}
v_reusejp_658_:
{
return v___x_659_;
}
}
}
}
}
else
{
lean_object* v_a_664_; lean_object* v___x_666_; uint8_t v_isShared_667_; uint8_t v_isSharedCheck_671_; 
lean_dec(v_a_646_);
lean_dec(v_a_644_);
lean_del_object(v___x_373_);
lean_del_object(v___x_368_);
v_a_664_ = lean_ctor_get(v___x_649_, 0);
v_isSharedCheck_671_ = !lean_is_exclusive(v___x_649_);
if (v_isSharedCheck_671_ == 0)
{
v___x_666_ = v___x_649_;
v_isShared_667_ = v_isSharedCheck_671_;
goto v_resetjp_665_;
}
else
{
lean_inc(v_a_664_);
lean_dec(v___x_649_);
v___x_666_ = lean_box(0);
v_isShared_667_ = v_isSharedCheck_671_;
goto v_resetjp_665_;
}
v_resetjp_665_:
{
lean_object* v___x_669_; 
if (v_isShared_667_ == 0)
{
v___x_669_ = v___x_666_;
goto v_reusejp_668_;
}
else
{
lean_object* v_reuseFailAlloc_670_; 
v_reuseFailAlloc_670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_670_, 0, v_a_664_);
v___x_669_ = v_reuseFailAlloc_670_;
goto v_reusejp_668_;
}
v_reusejp_668_:
{
return v___x_669_;
}
}
}
}
else
{
lean_object* v_a_672_; lean_object* v___x_674_; uint8_t v_isShared_675_; uint8_t v_isSharedCheck_679_; 
lean_dec(v_a_644_);
lean_dec(v_a_642_);
lean_dec_ref(v___x_376_);
lean_del_object(v___x_373_);
lean_del_object(v___x_368_);
v_a_672_ = lean_ctor_get(v___x_645_, 0);
v_isSharedCheck_679_ = !lean_is_exclusive(v___x_645_);
if (v_isSharedCheck_679_ == 0)
{
v___x_674_ = v___x_645_;
v_isShared_675_ = v_isSharedCheck_679_;
goto v_resetjp_673_;
}
else
{
lean_inc(v_a_672_);
lean_dec(v___x_645_);
v___x_674_ = lean_box(0);
v_isShared_675_ = v_isSharedCheck_679_;
goto v_resetjp_673_;
}
v_resetjp_673_:
{
lean_object* v___x_677_; 
if (v_isShared_675_ == 0)
{
v___x_677_ = v___x_674_;
goto v_reusejp_676_;
}
else
{
lean_object* v_reuseFailAlloc_678_; 
v_reuseFailAlloc_678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_678_, 0, v_a_672_);
v___x_677_ = v_reuseFailAlloc_678_;
goto v_reusejp_676_;
}
v_reusejp_676_:
{
return v___x_677_;
}
}
}
}
else
{
lean_object* v_a_680_; lean_object* v___x_682_; uint8_t v_isShared_683_; uint8_t v_isSharedCheck_687_; 
lean_dec(v_a_642_);
lean_dec_ref(v___x_377_);
lean_dec_ref(v___x_376_);
lean_del_object(v___x_373_);
lean_dec(v_fst_370_);
lean_del_object(v___x_368_);
v_a_680_ = lean_ctor_get(v___x_643_, 0);
v_isSharedCheck_687_ = !lean_is_exclusive(v___x_643_);
if (v_isSharedCheck_687_ == 0)
{
v___x_682_ = v___x_643_;
v_isShared_683_ = v_isSharedCheck_687_;
goto v_resetjp_681_;
}
else
{
lean_inc(v_a_680_);
lean_dec(v___x_643_);
v___x_682_ = lean_box(0);
v_isShared_683_ = v_isSharedCheck_687_;
goto v_resetjp_681_;
}
v_resetjp_681_:
{
lean_object* v___x_685_; 
if (v_isShared_683_ == 0)
{
v___x_685_ = v___x_682_;
goto v_reusejp_684_;
}
else
{
lean_object* v_reuseFailAlloc_686_; 
v_reuseFailAlloc_686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_686_, 0, v_a_680_);
v___x_685_ = v_reuseFailAlloc_686_;
goto v_reusejp_684_;
}
v_reusejp_684_:
{
return v___x_685_;
}
}
}
}
}
}
else
{
lean_object* v_a_688_; lean_object* v___x_690_; uint8_t v_isShared_691_; uint8_t v_isSharedCheck_695_; 
lean_dec_ref(v___x_377_);
lean_dec_ref(v___x_376_);
lean_del_object(v___x_373_);
lean_dec(v_fst_370_);
lean_del_object(v___x_368_);
lean_dec(v_fst_366_);
lean_del_object(v___x_363_);
lean_dec_ref(v_a_350_);
v_a_688_ = lean_ctor_get(v___x_381_, 0);
v_isSharedCheck_695_ = !lean_is_exclusive(v___x_381_);
if (v_isSharedCheck_695_ == 0)
{
v___x_690_ = v___x_381_;
v_isShared_691_ = v_isSharedCheck_695_;
goto v_resetjp_689_;
}
else
{
lean_inc(v_a_688_);
lean_dec(v___x_381_);
v___x_690_ = lean_box(0);
v_isShared_691_ = v_isSharedCheck_695_;
goto v_resetjp_689_;
}
v_resetjp_689_:
{
lean_object* v___x_693_; 
if (v_isShared_691_ == 0)
{
v___x_693_ = v___x_690_;
goto v_reusejp_692_;
}
else
{
lean_object* v_reuseFailAlloc_694_; 
v_reuseFailAlloc_694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_694_, 0, v_a_688_);
v___x_693_ = v_reuseFailAlloc_694_;
goto v_reusejp_692_;
}
v_reusejp_692_:
{
return v___x_693_;
}
}
}
}
}
}
}
else
{
lean_dec_ref(v_x_351_);
lean_dec_ref(v_a_350_);
return v___x_360_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___boxed(lean_object** _args){
lean_object* v_vars_699_ = _args[0];
lean_object* v_fst_700_ = _args[1];
lean_object* v_expand_701_ = _args[2];
lean_object* v_sorts_702_ = _args[3];
lean_object* v_body_703_ = _args[4];
lean_object* v_polarity_704_ = _args[5];
lean_object* v_isForall_705_ = _args[6];
lean_object* v_tail_706_ = _args[7];
lean_object* v_a_707_ = _args[8];
lean_object* v_x_708_ = _args[9];
lean_object* v___y_709_ = _args[10];
lean_object* v___y_710_ = _args[11];
lean_object* v___y_711_ = _args[12];
lean_object* v___y_712_ = _args[13];
lean_object* v___y_713_ = _args[14];
lean_object* v___y_714_ = _args[15];
lean_object* v___y_715_ = _args[16];
_start:
{
uint32_t v_fst_131205__boxed_716_; uint8_t v_expand_boxed_717_; uint8_t v_polarity_boxed_718_; uint8_t v_isForall_boxed_719_; lean_object* v_res_720_; 
v_fst_131205__boxed_716_ = lean_unbox_uint32(v_fst_700_);
lean_dec(v_fst_700_);
v_expand_boxed_717_ = lean_unbox(v_expand_701_);
v_polarity_boxed_718_ = lean_unbox(v_polarity_704_);
v_isForall_boxed_719_ = lean_unbox(v_isForall_705_);
v_res_720_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0(v_vars_699_, v_fst_131205__boxed_716_, v_expand_boxed_717_, v_sorts_702_, v_body_703_, v_polarity_boxed_718_, v_isForall_boxed_719_, v_tail_706_, v_a_707_, v_x_708_, v___y_709_, v___y_710_, v___y_711_, v___y_712_, v___y_713_, v___y_714_);
lean_dec(v___y_714_);
lean_dec_ref(v___y_713_);
lean_dec(v___y_712_);
lean_dec_ref(v___y_711_);
lean_dec(v___y_710_);
lean_dec_ref(v___y_709_);
return v_res_720_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified(uint8_t v_expand_722_, lean_object* v_sorts_723_, lean_object* v_body_724_, uint8_t v_polarity_725_, uint8_t v_isForall_726_, lean_object* v_rest_727_, lean_object* v_vars_728_, lean_object* v_a_729_, lean_object* v_a_730_, lean_object* v_a_731_, lean_object* v_a_732_, lean_object* v_a_733_, lean_object* v_a_734_){
_start:
{
if (lean_obj_tag(v_rest_727_) == 0)
{
lean_object* v___x_736_; 
v___x_736_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize(v_expand_722_, v_sorts_723_, v_vars_728_, v_body_724_, v_polarity_725_, v_a_729_, v_a_730_, v_a_731_, v_a_732_, v_a_733_, v_a_734_);
return v___x_736_;
}
else
{
lean_object* v_head_737_; lean_object* v_tail_738_; lean_object* v_fst_739_; lean_object* v_snd_740_; lean_object* v___x_741_; 
v_head_737_ = lean_ctor_get(v_rest_727_, 0);
lean_inc(v_head_737_);
v_tail_738_ = lean_ctor_get(v_rest_727_, 1);
lean_inc(v_tail_738_);
lean_dec_ref_known(v_rest_727_, 2);
v_fst_739_ = lean_ctor_get(v_head_737_, 0);
lean_inc(v_fst_739_);
v_snd_740_ = lean_ctor_get(v_head_737_, 1);
lean_inc(v_snd_740_);
lean_dec(v_head_737_);
v___x_741_ = lp_vampireReplay_Vampire_Reconstruct_sortType(v_snd_740_, v_a_729_, v_a_730_, v_a_731_, v_a_732_, v_a_733_, v_a_734_);
if (lean_obj_tag(v___x_741_) == 0)
{
lean_object* v_a_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___f_746_; lean_object* v___x_747_; uint32_t v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; 
v_a_742_ = lean_ctor_get(v___x_741_, 0);
lean_inc_n(v_a_742_, 2);
lean_dec_ref_known(v___x_741_, 1);
v___x_743_ = lean_box(v_expand_722_);
v___x_744_ = lean_box(v_polarity_725_);
v___x_745_ = lean_box(v_isForall_726_);
lean_inc(v_fst_739_);
v___f_746_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___boxed), 17, 9);
lean_closure_set(v___f_746_, 0, v_vars_728_);
lean_closure_set(v___f_746_, 1, v_fst_739_);
lean_closure_set(v___f_746_, 2, v___x_743_);
lean_closure_set(v___f_746_, 3, v_sorts_723_);
lean_closure_set(v___f_746_, 4, v_body_724_);
lean_closure_set(v___f_746_, 5, v___x_744_);
lean_closure_set(v___f_746_, 6, v___x_745_);
lean_closure_set(v___f_746_, 7, v_tail_738_);
lean_closure_set(v___f_746_, 8, v_a_742_);
v___x_747_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___closed__0));
v___x_748_ = lean_unbox_uint32(v_fst_739_);
lean_dec(v_fst_739_);
v___x_749_ = lean_uint32_to_nat(v___x_748_);
v___x_750_ = l_Nat_reprFast(v___x_749_);
v___x_751_ = lean_string_append(v___x_747_, v___x_750_);
lean_dec_ref(v___x_750_);
v___x_752_ = lean_box(0);
v___x_753_ = l_Lean_Name_str___override(v___x_752_, v___x_751_);
v___x_754_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_753_, v_a_742_, v___f_746_, v_a_729_, v_a_730_, v_a_731_, v_a_732_, v_a_733_, v_a_734_);
return v___x_754_;
}
else
{
lean_object* v_a_755_; lean_object* v___x_757_; uint8_t v_isShared_758_; uint8_t v_isSharedCheck_762_; 
lean_dec(v_fst_739_);
lean_dec(v_tail_738_);
lean_dec_ref(v_vars_728_);
lean_dec_ref(v_body_724_);
lean_dec_ref(v_sorts_723_);
v_a_755_ = lean_ctor_get(v___x_741_, 0);
v_isSharedCheck_762_ = !lean_is_exclusive(v___x_741_);
if (v_isSharedCheck_762_ == 0)
{
v___x_757_ = v___x_741_;
v_isShared_758_ = v_isSharedCheck_762_;
goto v_resetjp_756_;
}
else
{
lean_inc(v_a_755_);
lean_dec(v___x_741_);
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
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__46(void){
_start:
{
lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; 
v___x_767_ = lean_box(0);
v___x_768_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__15));
v___x_769_ = l_Lean_Expr_const___override(v___x_768_, v___x_767_);
return v___x_769_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__47(void){
_start:
{
lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; 
v___x_770_ = lean_box(0);
v___x_771_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__7));
v___x_772_ = l_Lean_Expr_const___override(v___x_771_, v___x_770_);
return v___x_772_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__58(void){
_start:
{
lean_object* v___x_789_; lean_object* v___x_790_; 
v___x_789_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__57));
v___x_790_ = l_Lean_stringToMessageData(v___x_789_);
return v___x_790_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize(uint8_t v_expand_791_, lean_object* v_sorts_792_, lean_object* v_vars_793_, lean_object* v_f_794_, uint8_t v_polarity_795_, lean_object* v_a_796_, lean_object* v_a_797_, lean_object* v_a_798_, lean_object* v_a_799_, lean_object* v_a_800_, lean_object* v_a_801_){
_start:
{
lean_object* v___y_804_; lean_object* v___y_805_; lean_object* v___y_806_; lean_object* v___y_811_; lean_object* v___y_812_; lean_object* v___y_813_; lean_object* v___y_814_; lean_object* v___y_815_; lean_object* v___y_816_; lean_object* v___y_817_; lean_object* v___y_818_; lean_object* v___y_819_; lean_object* v___y_846_; lean_object* v_____do__lift_847_; lean_object* v___y_852_; lean_object* v___y_853_; lean_object* v___y_854_; lean_object* v___y_855_; lean_object* v___y_856_; lean_object* v___y_857_; lean_object* v___y_858_; lean_object* v___y_859_; lean_object* v___y_860_; lean_object* v___y_861_; lean_object* v___y_862_; lean_object* v_fst_863_; lean_object* v_snd_864_; lean_object* v___y_885_; lean_object* v___y_886_; size_t v___y_887_; lean_object* v___y_888_; lean_object* v___y_889_; lean_object* v___y_890_; size_t v___y_891_; lean_object* v___y_892_; lean_object* v___y_893_; lean_object* v___y_894_; lean_object* v___y_895_; lean_object* v___y_917_; size_t v___y_918_; lean_object* v___y_919_; size_t v___y_920_; lean_object* v___y_921_; lean_object* v___y_922_; lean_object* v___y_923_; uint8_t v___y_924_; lean_object* v___y_925_; lean_object* v___y_926_; lean_object* v___y_927_; lean_object* v___y_928_; size_t v___y_929_; lean_object* v___y_930_; lean_object* v___y_931_; lean_object* v_fst_932_; lean_object* v_snd_933_; lean_object* v___y_957_; size_t v___y_958_; lean_object* v___y_959_; size_t v___y_960_; lean_object* v___y_961_; lean_object* v___y_962_; lean_object* v___y_963_; uint8_t v___y_964_; lean_object* v___y_965_; lean_object* v___y_966_; lean_object* v___y_967_; size_t v___y_968_; lean_object* v___y_969_; lean_object* v___y_970_; lean_object* v___y_971_; lean_object* v___y_975_; size_t v___y_976_; lean_object* v___y_977_; size_t v___y_978_; lean_object* v___y_979_; lean_object* v___y_980_; lean_object* v___y_981_; uint8_t v___y_982_; lean_object* v___y_983_; lean_object* v___y_984_; lean_object* v___y_985_; size_t v___y_986_; lean_object* v___y_987_; lean_object* v___y_988_; lean_object* v___y_989_; lean_object* v___y_993_; lean_object* v___y_994_; lean_object* v___y_995_; lean_object* v___y_996_; lean_object* v___y_997_; lean_object* v___y_998_; lean_object* v___y_999_; uint8_t v___y_1000_; lean_object* v___x_1043_; 
lean_inc_ref(v_f_794_);
lean_inc_ref(v_vars_793_);
lean_inc_ref(v_sorts_792_);
v___x_1043_ = lp_vampireReplay_Vampire_Reconstruct_formula(v_sorts_792_, v_vars_793_, v_f_794_, v_a_796_, v_a_797_, v_a_798_, v_a_799_, v_a_800_, v_a_801_);
if (lean_obj_tag(v___x_1043_) == 0)
{
lean_object* v_a_1044_; lean_object* v___y_1046_; lean_object* v___y_1047_; lean_object* v___y_1048_; lean_object* v___y_1049_; lean_object* v___y_1050_; lean_object* v___y_1051_; lean_object* v___y_1052_; lean_object* v___y_1114_; lean_object* v___y_1115_; lean_object* v___y_1116_; lean_object* v___y_1117_; lean_object* v___y_1118_; lean_object* v___y_1119_; uint8_t v___y_1120_; lean_object* v___y_1138_; lean_object* v___y_1139_; lean_object* v___y_1140_; lean_object* v___y_1141_; lean_object* v___y_1142_; lean_object* v___y_1143_; uint8_t v___y_1144_; lean_object* v___y_1306_; lean_object* v___y_1307_; lean_object* v___y_1308_; lean_object* v___y_1309_; lean_object* v___y_1310_; uint8_t v___y_1311_; uint8_t v___x_1395_; lean_object* v___y_1397_; lean_object* v___y_1398_; lean_object* v___y_1399_; lean_object* v___y_1400_; lean_object* v___y_1401_; lean_object* v___y_1402_; lean_object* v___y_1416_; lean_object* v___y_1417_; lean_object* v___y_1418_; lean_object* v___y_1419_; lean_object* v___y_1420_; lean_object* v___y_1421_; lean_object* v___y_1422_; lean_object* v___y_1436_; lean_object* v___y_1437_; lean_object* v___y_1438_; lean_object* v___y_1439_; lean_object* v___y_1440_; lean_object* v___y_1441_; lean_object* v___y_1442_; lean_object* v___y_1443_; lean_object* v___y_1444_; lean_object* v___y_1445_; lean_object* v___y_1446_; lean_object* v___y_1447_; uint8_t v___y_1448_; lean_object* v___y_1627_; lean_object* v___y_1628_; uint8_t v___y_1629_; lean_object* v___y_1630_; lean_object* v___y_1631_; lean_object* v___y_1632_; lean_object* v___y_1633_; lean_object* v___y_1634_; lean_object* v___y_1635_; lean_object* v___y_1636_; lean_object* v___y_1637_; lean_object* v___y_1638_; lean_object* v___y_1639_; lean_object* v___y_1902_; lean_object* v___y_1903_; lean_object* v___y_1904_; lean_object* v___y_1905_; lean_object* v___y_1906_; lean_object* v___y_1907_; lean_object* v___y_1908_; lean_object* v___y_1909_; uint8_t v___y_1910_; lean_object* v___y_2004_; lean_object* v___y_2005_; lean_object* v___y_2006_; lean_object* v___y_2007_; lean_object* v___y_2008_; lean_object* v___y_2009_; lean_object* v___y_2010_; lean_object* v___y_2011_; lean_object* v___y_2025_; 
v_a_1044_ = lean_ctor_get(v___x_1043_, 0);
lean_inc(v_a_1044_);
lean_dec_ref_known(v___x_1043_, 1);
v___x_1395_ = 1;
if (v_polarity_795_ == 0)
{
lean_object* v___x_2170_; lean_object* v___x_2171_; 
v___x_2170_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__10, &lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__10_once, _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__10);
lean_inc(v_a_1044_);
v___x_2171_ = l_Lean_Expr_app___override(v___x_2170_, v_a_1044_);
v___y_2025_ = v___x_2171_;
goto v___jp_2024_;
}
else
{
lean_inc(v_a_1044_);
v___y_2025_ = v_a_1044_;
goto v___jp_2024_;
}
v___jp_1045_:
{
if (v_polarity_795_ == 0)
{
lean_dec_ref(v___y_1048_);
lean_dec(v___y_1046_);
if (v_expand_791_ == 0)
{
lean_object* v___x_1053_; uint8_t v___x_1054_; 
v___x_1053_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__17));
v___x_1054_ = l_Lean_Expr_isConstOf(v_a_1044_, v___x_1053_);
lean_dec(v_a_1044_);
if (v___x_1054_ == 0)
{
lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; 
v___x_1055_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__36));
v___x_1056_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__37));
v___x_1057_ = l_Lean_Meta_mkAppOptM(v___x_1055_, v___x_1056_, v___y_1049_, v___y_1050_, v___y_1051_, v___y_1052_);
if (lean_obj_tag(v___x_1057_) == 0)
{
lean_object* v_a_1058_; lean_object* v___x_1060_; uint8_t v_isShared_1061_; uint8_t v_isSharedCheck_1068_; 
v_a_1058_ = lean_ctor_get(v___x_1057_, 0);
v_isSharedCheck_1068_ = !lean_is_exclusive(v___x_1057_);
if (v_isSharedCheck_1068_ == 0)
{
v___x_1060_ = v___x_1057_;
v_isShared_1061_ = v_isSharedCheck_1068_;
goto v_resetjp_1059_;
}
else
{
lean_inc(v_a_1058_);
lean_dec(v___x_1057_);
v___x_1060_ = lean_box(0);
v_isShared_1061_ = v_isSharedCheck_1068_;
goto v_resetjp_1059_;
}
v_resetjp_1059_:
{
lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1066_; 
v___x_1062_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__38, &lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__38_once, _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__38);
v___x_1063_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1063_, 0, v___x_1062_);
lean_ctor_set(v___x_1063_, 1, v_a_1058_);
v___x_1064_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1064_, 0, v___y_1047_);
lean_ctor_set(v___x_1064_, 1, v___x_1063_);
if (v_isShared_1061_ == 0)
{
lean_ctor_set(v___x_1060_, 0, v___x_1064_);
v___x_1066_ = v___x_1060_;
goto v_reusejp_1065_;
}
else
{
lean_object* v_reuseFailAlloc_1067_; 
v_reuseFailAlloc_1067_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1067_, 0, v___x_1064_);
v___x_1066_ = v_reuseFailAlloc_1067_;
goto v_reusejp_1065_;
}
v_reusejp_1065_:
{
return v___x_1066_;
}
}
}
else
{
lean_object* v_a_1069_; lean_object* v___x_1071_; uint8_t v_isShared_1072_; uint8_t v_isSharedCheck_1076_; 
lean_dec_ref(v___y_1047_);
v_a_1069_ = lean_ctor_get(v___x_1057_, 0);
v_isSharedCheck_1076_ = !lean_is_exclusive(v___x_1057_);
if (v_isSharedCheck_1076_ == 0)
{
v___x_1071_ = v___x_1057_;
v_isShared_1072_ = v_isSharedCheck_1076_;
goto v_resetjp_1070_;
}
else
{
lean_inc(v_a_1069_);
lean_dec(v___x_1057_);
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
}
else
{
lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; 
v___x_1077_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__40));
v___x_1078_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__37));
v___x_1079_ = l_Lean_Meta_mkAppOptM(v___x_1077_, v___x_1078_, v___y_1049_, v___y_1050_, v___y_1051_, v___y_1052_);
if (lean_obj_tag(v___x_1079_) == 0)
{
lean_object* v_a_1080_; lean_object* v___x_1082_; uint8_t v_isShared_1083_; uint8_t v_isSharedCheck_1090_; 
v_a_1080_ = lean_ctor_get(v___x_1079_, 0);
v_isSharedCheck_1090_ = !lean_is_exclusive(v___x_1079_);
if (v_isSharedCheck_1090_ == 0)
{
v___x_1082_ = v___x_1079_;
v_isShared_1083_ = v_isSharedCheck_1090_;
goto v_resetjp_1081_;
}
else
{
lean_inc(v_a_1080_);
lean_dec(v___x_1079_);
v___x_1082_ = lean_box(0);
v_isShared_1083_ = v_isSharedCheck_1090_;
goto v_resetjp_1081_;
}
v_resetjp_1081_:
{
lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1088_; 
v___x_1084_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__41, &lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__41_once, _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__41);
v___x_1085_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1085_, 0, v___x_1084_);
lean_ctor_set(v___x_1085_, 1, v_a_1080_);
v___x_1086_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1086_, 0, v___y_1047_);
lean_ctor_set(v___x_1086_, 1, v___x_1085_);
if (v_isShared_1083_ == 0)
{
lean_ctor_set(v___x_1082_, 0, v___x_1086_);
v___x_1088_ = v___x_1082_;
goto v_reusejp_1087_;
}
else
{
lean_object* v_reuseFailAlloc_1089_; 
v_reuseFailAlloc_1089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1089_, 0, v___x_1086_);
v___x_1088_ = v_reuseFailAlloc_1089_;
goto v_reusejp_1087_;
}
v_reusejp_1087_:
{
return v___x_1088_;
}
}
}
else
{
lean_object* v_a_1091_; lean_object* v___x_1093_; uint8_t v_isShared_1094_; uint8_t v_isSharedCheck_1098_; 
lean_dec_ref(v___y_1047_);
v_a_1091_ = lean_ctor_get(v___x_1079_, 0);
v_isSharedCheck_1098_ = !lean_is_exclusive(v___x_1079_);
if (v_isSharedCheck_1098_ == 0)
{
v___x_1093_ = v___x_1079_;
v_isShared_1094_ = v_isSharedCheck_1098_;
goto v_resetjp_1092_;
}
else
{
lean_inc(v_a_1091_);
lean_dec(v___x_1079_);
v___x_1093_ = lean_box(0);
v_isShared_1094_ = v_isSharedCheck_1098_;
goto v_resetjp_1092_;
}
v_resetjp_1092_:
{
lean_object* v___x_1096_; 
if (v_isShared_1094_ == 0)
{
v___x_1096_ = v___x_1093_;
goto v_reusejp_1095_;
}
else
{
lean_object* v_reuseFailAlloc_1097_; 
v_reuseFailAlloc_1097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1097_, 0, v_a_1091_);
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
else
{
lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; 
lean_dec(v_a_1044_);
v___x_1099_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__43, &lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__43_once, _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__43);
v___x_1100_ = l_Lean_indentExpr(v___y_1047_);
v___x_1101_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1101_, 0, v___x_1099_);
lean_ctor_set(v___x_1101_, 1, v___x_1100_);
v___x_1102_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1101_, v___y_1049_, v___y_1050_, v___y_1051_, v___y_1052_);
return v___x_1102_;
}
}
else
{
lean_object* v___x_1103_; 
lean_dec(v_a_1044_);
v___x_1103_ = l_Lean_Meta_mkAppOptM(v___y_1046_, v___y_1048_, v___y_1049_, v___y_1050_, v___y_1051_, v___y_1052_);
if (lean_obj_tag(v___x_1103_) == 0)
{
lean_object* v_a_1104_; 
v_a_1104_ = lean_ctor_get(v___x_1103_, 0);
lean_inc(v_a_1104_);
lean_dec_ref_known(v___x_1103_, 1);
v___y_846_ = v___y_1047_;
v_____do__lift_847_ = v_a_1104_;
goto v___jp_845_;
}
else
{
lean_object* v_a_1105_; lean_object* v___x_1107_; uint8_t v_isShared_1108_; uint8_t v_isSharedCheck_1112_; 
lean_dec_ref(v___y_1047_);
v_a_1105_ = lean_ctor_get(v___x_1103_, 0);
v_isSharedCheck_1112_ = !lean_is_exclusive(v___x_1103_);
if (v_isSharedCheck_1112_ == 0)
{
v___x_1107_ = v___x_1103_;
v_isShared_1108_ = v_isSharedCheck_1112_;
goto v_resetjp_1106_;
}
else
{
lean_inc(v_a_1105_);
lean_dec(v___x_1103_);
v___x_1107_ = lean_box(0);
v_isShared_1108_ = v_isSharedCheck_1112_;
goto v_resetjp_1106_;
}
v_resetjp_1106_:
{
lean_object* v___x_1110_; 
if (v_isShared_1108_ == 0)
{
v___x_1110_ = v___x_1107_;
goto v_reusejp_1109_;
}
else
{
lean_object* v_reuseFailAlloc_1111_; 
v_reuseFailAlloc_1111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1111_, 0, v_a_1105_);
v___x_1110_ = v_reuseFailAlloc_1111_;
goto v_reusejp_1109_;
}
v_reusejp_1109_:
{
return v___x_1110_;
}
}
}
}
}
v___jp_1113_:
{
lean_object* v___x_1121_; lean_object* v___x_1122_; 
v___x_1121_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_f_794_);
v___x_1122_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0(v_f_794_, v___x_1121_, v___y_1118_, v___y_1115_, v___y_1119_, v___y_1116_, v___y_1114_, v___y_1117_);
if (lean_obj_tag(v___x_1122_) == 0)
{
lean_object* v_a_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; 
v_a_1123_ = lean_ctor_get(v___x_1122_, 0);
lean_inc(v_a_1123_);
lean_dec_ref_known(v___x_1122_, 1);
v___x_1124_ = lp_vampireReplay_Vampire_Formula_boundVars(v_f_794_);
v___x_1125_ = lean_array_get_size(v___x_1124_);
v___x_1126_ = lp_vampireReplay_Array_filterMapM___at___00Vampire_Reconstruct_formula_spec__2(v_sorts_792_, v___x_1124_, v___x_1121_, v___x_1125_);
lean_dec_ref(v___x_1124_);
v___x_1127_ = lean_array_to_list(v___x_1126_);
v___x_1128_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified(v_expand_791_, v_sorts_792_, v_a_1123_, v_polarity_795_, v___y_1120_, v___x_1127_, v_vars_793_, v___y_1118_, v___y_1115_, v___y_1119_, v___y_1116_, v___y_1114_, v___y_1117_);
return v___x_1128_;
}
else
{
lean_object* v_a_1129_; lean_object* v___x_1131_; uint8_t v_isShared_1132_; uint8_t v_isSharedCheck_1136_; 
lean_dec_ref(v_f_794_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
v_a_1129_ = lean_ctor_get(v___x_1122_, 0);
v_isSharedCheck_1136_ = !lean_is_exclusive(v___x_1122_);
if (v_isSharedCheck_1136_ == 0)
{
v___x_1131_ = v___x_1122_;
v_isShared_1132_ = v_isSharedCheck_1136_;
goto v_resetjp_1130_;
}
else
{
lean_inc(v_a_1129_);
lean_dec(v___x_1122_);
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
v___jp_1137_:
{
lean_object* v___x_1145_; 
lean_inc_ref(v_vars_793_);
lean_inc_ref(v_sorts_792_);
v___x_1145_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize(v_expand_791_, v_sorts_792_, v_vars_793_, v___y_1141_, v___y_1144_, v_a_796_, v_a_797_, v_a_798_, v_a_799_, v_a_800_, v_a_801_);
if (lean_obj_tag(v___x_1145_) == 0)
{
lean_object* v_a_1146_; lean_object* v___x_1148_; uint8_t v_isShared_1149_; uint8_t v_isSharedCheck_1304_; 
v_a_1146_ = lean_ctor_get(v___x_1145_, 0);
v_isSharedCheck_1304_ = !lean_is_exclusive(v___x_1145_);
if (v_isSharedCheck_1304_ == 0)
{
v___x_1148_ = v___x_1145_;
v_isShared_1149_ = v_isSharedCheck_1304_;
goto v_resetjp_1147_;
}
else
{
lean_inc(v_a_1146_);
lean_dec(v___x_1145_);
v___x_1148_ = lean_box(0);
v_isShared_1149_ = v_isSharedCheck_1304_;
goto v_resetjp_1147_;
}
v_resetjp_1147_:
{
lean_object* v_snd_1150_; lean_object* v_fst_1151_; lean_object* v_snd_1152_; lean_object* v___x_1153_; 
v_snd_1150_ = lean_ctor_get(v_a_1146_, 1);
lean_inc(v_snd_1150_);
lean_dec(v_a_1146_);
v_fst_1151_ = lean_ctor_get(v_snd_1150_, 0);
lean_inc(v_fst_1151_);
v_snd_1152_ = lean_ctor_get(v_snd_1150_, 1);
lean_inc(v_snd_1152_);
lean_dec(v_snd_1150_);
v___x_1153_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0(v_f_794_, v___y_1138_, v_a_796_, v_a_797_, v_a_798_, v_a_799_, v_a_800_, v_a_801_);
lean_dec(v___y_1138_);
if (lean_obj_tag(v___x_1153_) == 0)
{
lean_object* v_a_1154_; lean_object* v___x_1155_; 
v_a_1154_ = lean_ctor_get(v___x_1153_, 0);
lean_inc(v_a_1154_);
lean_dec_ref_known(v___x_1153_, 1);
v___x_1155_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize(v_expand_791_, v_sorts_792_, v_vars_793_, v_a_1154_, v_polarity_795_, v_a_796_, v_a_797_, v_a_798_, v_a_799_, v_a_800_, v_a_801_);
if (lean_obj_tag(v___x_1155_) == 0)
{
lean_object* v_a_1156_; lean_object* v___x_1158_; uint8_t v_isShared_1159_; uint8_t v_isSharedCheck_1295_; 
v_a_1156_ = lean_ctor_get(v___x_1155_, 0);
v_isSharedCheck_1295_ = !lean_is_exclusive(v___x_1155_);
if (v_isSharedCheck_1295_ == 0)
{
v___x_1158_ = v___x_1155_;
v_isShared_1159_ = v_isSharedCheck_1295_;
goto v_resetjp_1157_;
}
else
{
lean_inc(v_a_1156_);
lean_dec(v___x_1155_);
v___x_1158_ = lean_box(0);
v_isShared_1159_ = v_isSharedCheck_1295_;
goto v_resetjp_1157_;
}
v_resetjp_1157_:
{
lean_object* v_snd_1160_; lean_object* v___x_1162_; uint8_t v_isShared_1163_; uint8_t v_isSharedCheck_1293_; 
v_snd_1160_ = lean_ctor_get(v_a_1156_, 1);
v_isSharedCheck_1293_ = !lean_is_exclusive(v_a_1156_);
if (v_isSharedCheck_1293_ == 0)
{
lean_object* v_unused_1294_; 
v_unused_1294_ = lean_ctor_get(v_a_1156_, 0);
lean_dec(v_unused_1294_);
v___x_1162_ = v_a_1156_;
v_isShared_1163_ = v_isSharedCheck_1293_;
goto v_resetjp_1161_;
}
else
{
lean_inc(v_snd_1160_);
lean_dec(v_a_1156_);
v___x_1162_ = lean_box(0);
v_isShared_1163_ = v_isSharedCheck_1293_;
goto v_resetjp_1161_;
}
v_resetjp_1161_:
{
if (v_polarity_795_ == 0)
{
lean_object* v_fst_1164_; lean_object* v_snd_1165_; lean_object* v___x_1167_; uint8_t v_isShared_1168_; uint8_t v_isSharedCheck_1232_; 
v_fst_1164_ = lean_ctor_get(v_snd_1160_, 0);
v_snd_1165_ = lean_ctor_get(v_snd_1160_, 1);
v_isSharedCheck_1232_ = !lean_is_exclusive(v_snd_1160_);
if (v_isSharedCheck_1232_ == 0)
{
v___x_1167_ = v_snd_1160_;
v_isShared_1168_ = v_isSharedCheck_1232_;
goto v_resetjp_1166_;
}
else
{
lean_inc(v_snd_1165_);
lean_inc(v_fst_1164_);
lean_dec(v_snd_1160_);
v___x_1167_ = lean_box(0);
v_isShared_1168_ = v_isSharedCheck_1232_;
goto v_resetjp_1166_;
}
v_resetjp_1166_:
{
lean_object* v___x_1169_; lean_object* v___x_1171_; 
v___x_1169_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__45));
if (v_isShared_1159_ == 0)
{
lean_ctor_set_tag(v___x_1158_, 1);
lean_ctor_set(v___x_1158_, 0, v___y_1143_);
v___x_1171_ = v___x_1158_;
goto v_reusejp_1170_;
}
else
{
lean_object* v_reuseFailAlloc_1231_; 
v_reuseFailAlloc_1231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1231_, 0, v___y_1143_);
v___x_1171_ = v_reuseFailAlloc_1231_;
goto v_reusejp_1170_;
}
v_reusejp_1170_:
{
lean_object* v___x_1173_; 
if (v_isShared_1149_ == 0)
{
lean_ctor_set_tag(v___x_1148_, 1);
lean_ctor_set(v___x_1148_, 0, v___y_1142_);
v___x_1173_ = v___x_1148_;
goto v_reusejp_1172_;
}
else
{
lean_object* v_reuseFailAlloc_1230_; 
v_reuseFailAlloc_1230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1230_, 0, v___y_1142_);
v___x_1173_ = v_reuseFailAlloc_1230_;
goto v_reusejp_1172_;
}
v_reusejp_1172_:
{
lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; 
v___x_1174_ = lean_unsigned_to_nat(2u);
v___x_1175_ = lean_mk_empty_array_with_capacity(v___x_1174_);
lean_inc_ref(v___x_1175_);
v___x_1176_ = lean_array_push(v___x_1175_, v___x_1171_);
v___x_1177_ = lean_array_push(v___x_1176_, v___x_1173_);
v___x_1178_ = l_Lean_Meta_mkAppOptM(v___x_1169_, v___x_1177_, v_a_798_, v_a_799_, v_a_800_, v_a_801_);
if (lean_obj_tag(v___x_1178_) == 0)
{
lean_object* v_a_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; 
v_a_1179_ = lean_ctor_get(v___x_1178_, 0);
lean_inc(v_a_1179_);
lean_dec_ref_known(v___x_1178_, 1);
v___x_1180_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__5));
lean_inc_ref(v___x_1175_);
v___x_1181_ = lean_array_push(v___x_1175_, v_snd_1152_);
v___x_1182_ = lean_array_push(v___x_1181_, v_snd_1165_);
v___x_1183_ = l_Lean_Meta_mkAppM(v___x_1180_, v___x_1182_, v_a_798_, v_a_799_, v_a_800_, v_a_801_);
if (lean_obj_tag(v___x_1183_) == 0)
{
lean_object* v_a_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; 
v_a_1184_ = lean_ctor_get(v___x_1183_, 0);
lean_inc(v_a_1184_);
lean_dec_ref_known(v___x_1183_, 1);
v___x_1185_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__3));
lean_inc_ref(v___y_1140_);
v___x_1186_ = l_Lean_Name_mkStr2(v___y_1140_, v___x_1185_);
v___x_1187_ = lean_array_push(v___x_1175_, v_a_1179_);
v___x_1188_ = lean_array_push(v___x_1187_, v_a_1184_);
v___x_1189_ = l_Lean_Meta_mkAppM(v___x_1186_, v___x_1188_, v_a_798_, v_a_799_, v_a_800_, v_a_801_);
if (lean_obj_tag(v___x_1189_) == 0)
{
lean_object* v_a_1190_; lean_object* v___x_1192_; uint8_t v_isShared_1193_; uint8_t v_isSharedCheck_1205_; 
v_a_1190_ = lean_ctor_get(v___x_1189_, 0);
v_isSharedCheck_1205_ = !lean_is_exclusive(v___x_1189_);
if (v_isSharedCheck_1205_ == 0)
{
v___x_1192_ = v___x_1189_;
v_isShared_1193_ = v_isSharedCheck_1205_;
goto v_resetjp_1191_;
}
else
{
lean_inc(v_a_1190_);
lean_dec(v___x_1189_);
v___x_1192_ = lean_box(0);
v_isShared_1193_ = v_isSharedCheck_1205_;
goto v_resetjp_1191_;
}
v_resetjp_1191_:
{
lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1197_; 
v___x_1194_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__46, &lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__46_once, _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__46);
v___x_1195_ = l_Lean_mkAppB(v___x_1194_, v_fst_1151_, v_fst_1164_);
if (v_isShared_1168_ == 0)
{
lean_ctor_set(v___x_1167_, 1, v_a_1190_);
lean_ctor_set(v___x_1167_, 0, v___x_1195_);
v___x_1197_ = v___x_1167_;
goto v_reusejp_1196_;
}
else
{
lean_object* v_reuseFailAlloc_1204_; 
v_reuseFailAlloc_1204_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1204_, 0, v___x_1195_);
lean_ctor_set(v_reuseFailAlloc_1204_, 1, v_a_1190_);
v___x_1197_ = v_reuseFailAlloc_1204_;
goto v_reusejp_1196_;
}
v_reusejp_1196_:
{
lean_object* v___x_1199_; 
if (v_isShared_1163_ == 0)
{
lean_ctor_set(v___x_1162_, 1, v___x_1197_);
lean_ctor_set(v___x_1162_, 0, v___y_1139_);
v___x_1199_ = v___x_1162_;
goto v_reusejp_1198_;
}
else
{
lean_object* v_reuseFailAlloc_1203_; 
v_reuseFailAlloc_1203_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1203_, 0, v___y_1139_);
lean_ctor_set(v_reuseFailAlloc_1203_, 1, v___x_1197_);
v___x_1199_ = v_reuseFailAlloc_1203_;
goto v_reusejp_1198_;
}
v_reusejp_1198_:
{
lean_object* v___x_1201_; 
if (v_isShared_1193_ == 0)
{
lean_ctor_set(v___x_1192_, 0, v___x_1199_);
v___x_1201_ = v___x_1192_;
goto v_reusejp_1200_;
}
else
{
lean_object* v_reuseFailAlloc_1202_; 
v_reuseFailAlloc_1202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1202_, 0, v___x_1199_);
v___x_1201_ = v_reuseFailAlloc_1202_;
goto v_reusejp_1200_;
}
v_reusejp_1200_:
{
return v___x_1201_;
}
}
}
}
}
else
{
lean_object* v_a_1206_; lean_object* v___x_1208_; uint8_t v_isShared_1209_; uint8_t v_isSharedCheck_1213_; 
lean_del_object(v___x_1167_);
lean_dec(v_fst_1164_);
lean_del_object(v___x_1162_);
lean_dec(v_fst_1151_);
lean_dec_ref(v___y_1139_);
v_a_1206_ = lean_ctor_get(v___x_1189_, 0);
v_isSharedCheck_1213_ = !lean_is_exclusive(v___x_1189_);
if (v_isSharedCheck_1213_ == 0)
{
v___x_1208_ = v___x_1189_;
v_isShared_1209_ = v_isSharedCheck_1213_;
goto v_resetjp_1207_;
}
else
{
lean_inc(v_a_1206_);
lean_dec(v___x_1189_);
v___x_1208_ = lean_box(0);
v_isShared_1209_ = v_isSharedCheck_1213_;
goto v_resetjp_1207_;
}
v_resetjp_1207_:
{
lean_object* v___x_1211_; 
if (v_isShared_1209_ == 0)
{
v___x_1211_ = v___x_1208_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1212_; 
v_reuseFailAlloc_1212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1212_, 0, v_a_1206_);
v___x_1211_ = v_reuseFailAlloc_1212_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
return v___x_1211_;
}
}
}
}
else
{
lean_object* v_a_1214_; lean_object* v___x_1216_; uint8_t v_isShared_1217_; uint8_t v_isSharedCheck_1221_; 
lean_dec(v_a_1179_);
lean_dec_ref(v___x_1175_);
lean_del_object(v___x_1167_);
lean_dec(v_fst_1164_);
lean_del_object(v___x_1162_);
lean_dec(v_fst_1151_);
lean_dec_ref(v___y_1139_);
v_a_1214_ = lean_ctor_get(v___x_1183_, 0);
v_isSharedCheck_1221_ = !lean_is_exclusive(v___x_1183_);
if (v_isSharedCheck_1221_ == 0)
{
v___x_1216_ = v___x_1183_;
v_isShared_1217_ = v_isSharedCheck_1221_;
goto v_resetjp_1215_;
}
else
{
lean_inc(v_a_1214_);
lean_dec(v___x_1183_);
v___x_1216_ = lean_box(0);
v_isShared_1217_ = v_isSharedCheck_1221_;
goto v_resetjp_1215_;
}
v_resetjp_1215_:
{
lean_object* v___x_1219_; 
if (v_isShared_1217_ == 0)
{
v___x_1219_ = v___x_1216_;
goto v_reusejp_1218_;
}
else
{
lean_object* v_reuseFailAlloc_1220_; 
v_reuseFailAlloc_1220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1220_, 0, v_a_1214_);
v___x_1219_ = v_reuseFailAlloc_1220_;
goto v_reusejp_1218_;
}
v_reusejp_1218_:
{
return v___x_1219_;
}
}
}
}
else
{
lean_object* v_a_1222_; lean_object* v___x_1224_; uint8_t v_isShared_1225_; uint8_t v_isSharedCheck_1229_; 
lean_dec_ref(v___x_1175_);
lean_del_object(v___x_1167_);
lean_dec(v_snd_1165_);
lean_dec(v_fst_1164_);
lean_del_object(v___x_1162_);
lean_dec(v_snd_1152_);
lean_dec(v_fst_1151_);
lean_dec_ref(v___y_1139_);
v_a_1222_ = lean_ctor_get(v___x_1178_, 0);
v_isSharedCheck_1229_ = !lean_is_exclusive(v___x_1178_);
if (v_isSharedCheck_1229_ == 0)
{
v___x_1224_ = v___x_1178_;
v_isShared_1225_ = v_isSharedCheck_1229_;
goto v_resetjp_1223_;
}
else
{
lean_inc(v_a_1222_);
lean_dec(v___x_1178_);
v___x_1224_ = lean_box(0);
v_isShared_1225_ = v_isSharedCheck_1229_;
goto v_resetjp_1223_;
}
v_resetjp_1223_:
{
lean_object* v___x_1227_; 
if (v_isShared_1225_ == 0)
{
v___x_1227_ = v___x_1224_;
goto v_reusejp_1226_;
}
else
{
lean_object* v_reuseFailAlloc_1228_; 
v_reuseFailAlloc_1228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1228_, 0, v_a_1222_);
v___x_1227_ = v_reuseFailAlloc_1228_;
goto v_reusejp_1226_;
}
v_reusejp_1226_:
{
return v___x_1227_;
}
}
}
}
}
}
}
else
{
lean_object* v_fst_1233_; lean_object* v_snd_1234_; lean_object* v___x_1236_; uint8_t v_isShared_1237_; uint8_t v_isSharedCheck_1292_; 
lean_del_object(v___x_1158_);
lean_del_object(v___x_1148_);
v_fst_1233_ = lean_ctor_get(v_snd_1160_, 0);
v_snd_1234_ = lean_ctor_get(v_snd_1160_, 1);
v_isSharedCheck_1292_ = !lean_is_exclusive(v_snd_1160_);
if (v_isSharedCheck_1292_ == 0)
{
v___x_1236_ = v_snd_1160_;
v_isShared_1237_ = v_isSharedCheck_1292_;
goto v_resetjp_1235_;
}
else
{
lean_inc(v_snd_1234_);
lean_inc(v_fst_1233_);
lean_dec(v_snd_1160_);
v___x_1236_ = lean_box(0);
v_isShared_1237_ = v_isSharedCheck_1292_;
goto v_resetjp_1235_;
}
v_resetjp_1235_:
{
lean_object* v___x_1238_; 
v___x_1238_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg(v___y_1143_, v___y_1142_, v_a_798_, v_a_799_, v_a_800_, v_a_801_);
if (lean_obj_tag(v___x_1238_) == 0)
{
lean_object* v_a_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; 
v_a_1239_ = lean_ctor_get(v___x_1238_, 0);
lean_inc(v_a_1239_);
lean_dec_ref_known(v___x_1238_, 1);
v___x_1240_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__13));
v___x_1241_ = lean_unsigned_to_nat(2u);
v___x_1242_ = lean_mk_empty_array_with_capacity(v___x_1241_);
lean_inc_ref(v___x_1242_);
v___x_1243_ = lean_array_push(v___x_1242_, v_snd_1152_);
v___x_1244_ = lean_array_push(v___x_1243_, v_snd_1234_);
v___x_1245_ = l_Lean_Meta_mkAppM(v___x_1240_, v___x_1244_, v_a_798_, v_a_799_, v_a_800_, v_a_801_);
if (lean_obj_tag(v___x_1245_) == 0)
{
lean_object* v_a_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; 
v_a_1246_ = lean_ctor_get(v___x_1245_, 0);
lean_inc(v_a_1246_);
lean_dec_ref_known(v___x_1245_, 1);
v___x_1247_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__3));
lean_inc_ref(v___y_1140_);
v___x_1248_ = l_Lean_Name_mkStr2(v___y_1140_, v___x_1247_);
v___x_1249_ = lean_array_push(v___x_1242_, v_a_1239_);
v___x_1250_ = lean_array_push(v___x_1249_, v_a_1246_);
v___x_1251_ = l_Lean_Meta_mkAppM(v___x_1248_, v___x_1250_, v_a_798_, v_a_799_, v_a_800_, v_a_801_);
if (lean_obj_tag(v___x_1251_) == 0)
{
lean_object* v_a_1252_; lean_object* v___x_1254_; uint8_t v_isShared_1255_; uint8_t v_isSharedCheck_1267_; 
v_a_1252_ = lean_ctor_get(v___x_1251_, 0);
v_isSharedCheck_1267_ = !lean_is_exclusive(v___x_1251_);
if (v_isSharedCheck_1267_ == 0)
{
v___x_1254_ = v___x_1251_;
v_isShared_1255_ = v_isSharedCheck_1267_;
goto v_resetjp_1253_;
}
else
{
lean_inc(v_a_1252_);
lean_dec(v___x_1251_);
v___x_1254_ = lean_box(0);
v_isShared_1255_ = v_isSharedCheck_1267_;
goto v_resetjp_1253_;
}
v_resetjp_1253_:
{
lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1259_; 
v___x_1256_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__47, &lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__47_once, _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__47);
v___x_1257_ = l_Lean_mkAppB(v___x_1256_, v_fst_1151_, v_fst_1233_);
if (v_isShared_1237_ == 0)
{
lean_ctor_set(v___x_1236_, 1, v_a_1252_);
lean_ctor_set(v___x_1236_, 0, v___x_1257_);
v___x_1259_ = v___x_1236_;
goto v_reusejp_1258_;
}
else
{
lean_object* v_reuseFailAlloc_1266_; 
v_reuseFailAlloc_1266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1266_, 0, v___x_1257_);
lean_ctor_set(v_reuseFailAlloc_1266_, 1, v_a_1252_);
v___x_1259_ = v_reuseFailAlloc_1266_;
goto v_reusejp_1258_;
}
v_reusejp_1258_:
{
lean_object* v___x_1261_; 
if (v_isShared_1163_ == 0)
{
lean_ctor_set(v___x_1162_, 1, v___x_1259_);
lean_ctor_set(v___x_1162_, 0, v___y_1139_);
v___x_1261_ = v___x_1162_;
goto v_reusejp_1260_;
}
else
{
lean_object* v_reuseFailAlloc_1265_; 
v_reuseFailAlloc_1265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1265_, 0, v___y_1139_);
lean_ctor_set(v_reuseFailAlloc_1265_, 1, v___x_1259_);
v___x_1261_ = v_reuseFailAlloc_1265_;
goto v_reusejp_1260_;
}
v_reusejp_1260_:
{
lean_object* v___x_1263_; 
if (v_isShared_1255_ == 0)
{
lean_ctor_set(v___x_1254_, 0, v___x_1261_);
v___x_1263_ = v___x_1254_;
goto v_reusejp_1262_;
}
else
{
lean_object* v_reuseFailAlloc_1264_; 
v_reuseFailAlloc_1264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1264_, 0, v___x_1261_);
v___x_1263_ = v_reuseFailAlloc_1264_;
goto v_reusejp_1262_;
}
v_reusejp_1262_:
{
return v___x_1263_;
}
}
}
}
}
else
{
lean_object* v_a_1268_; lean_object* v___x_1270_; uint8_t v_isShared_1271_; uint8_t v_isSharedCheck_1275_; 
lean_del_object(v___x_1236_);
lean_dec(v_fst_1233_);
lean_del_object(v___x_1162_);
lean_dec(v_fst_1151_);
lean_dec_ref(v___y_1139_);
v_a_1268_ = lean_ctor_get(v___x_1251_, 0);
v_isSharedCheck_1275_ = !lean_is_exclusive(v___x_1251_);
if (v_isSharedCheck_1275_ == 0)
{
v___x_1270_ = v___x_1251_;
v_isShared_1271_ = v_isSharedCheck_1275_;
goto v_resetjp_1269_;
}
else
{
lean_inc(v_a_1268_);
lean_dec(v___x_1251_);
v___x_1270_ = lean_box(0);
v_isShared_1271_ = v_isSharedCheck_1275_;
goto v_resetjp_1269_;
}
v_resetjp_1269_:
{
lean_object* v___x_1273_; 
if (v_isShared_1271_ == 0)
{
v___x_1273_ = v___x_1270_;
goto v_reusejp_1272_;
}
else
{
lean_object* v_reuseFailAlloc_1274_; 
v_reuseFailAlloc_1274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1274_, 0, v_a_1268_);
v___x_1273_ = v_reuseFailAlloc_1274_;
goto v_reusejp_1272_;
}
v_reusejp_1272_:
{
return v___x_1273_;
}
}
}
}
else
{
lean_object* v_a_1276_; lean_object* v___x_1278_; uint8_t v_isShared_1279_; uint8_t v_isSharedCheck_1283_; 
lean_dec_ref(v___x_1242_);
lean_dec(v_a_1239_);
lean_del_object(v___x_1236_);
lean_dec(v_fst_1233_);
lean_del_object(v___x_1162_);
lean_dec(v_fst_1151_);
lean_dec_ref(v___y_1139_);
v_a_1276_ = lean_ctor_get(v___x_1245_, 0);
v_isSharedCheck_1283_ = !lean_is_exclusive(v___x_1245_);
if (v_isSharedCheck_1283_ == 0)
{
v___x_1278_ = v___x_1245_;
v_isShared_1279_ = v_isSharedCheck_1283_;
goto v_resetjp_1277_;
}
else
{
lean_inc(v_a_1276_);
lean_dec(v___x_1245_);
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
lean_object* v_a_1284_; lean_object* v___x_1286_; uint8_t v_isShared_1287_; uint8_t v_isSharedCheck_1291_; 
lean_del_object(v___x_1236_);
lean_dec(v_snd_1234_);
lean_dec(v_fst_1233_);
lean_del_object(v___x_1162_);
lean_dec(v_snd_1152_);
lean_dec(v_fst_1151_);
lean_dec_ref(v___y_1139_);
v_a_1284_ = lean_ctor_get(v___x_1238_, 0);
v_isSharedCheck_1291_ = !lean_is_exclusive(v___x_1238_);
if (v_isSharedCheck_1291_ == 0)
{
v___x_1286_ = v___x_1238_;
v_isShared_1287_ = v_isSharedCheck_1291_;
goto v_resetjp_1285_;
}
else
{
lean_inc(v_a_1284_);
lean_dec(v___x_1238_);
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
}
}
}
else
{
lean_dec(v_snd_1152_);
lean_dec(v_fst_1151_);
lean_del_object(v___x_1148_);
lean_dec_ref(v___y_1143_);
lean_dec_ref(v___y_1142_);
lean_dec_ref(v___y_1139_);
return v___x_1155_;
}
}
else
{
lean_object* v_a_1296_; lean_object* v___x_1298_; uint8_t v_isShared_1299_; uint8_t v_isSharedCheck_1303_; 
lean_dec(v_snd_1152_);
lean_dec(v_fst_1151_);
lean_del_object(v___x_1148_);
lean_dec_ref(v___y_1143_);
lean_dec_ref(v___y_1142_);
lean_dec_ref(v___y_1139_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
v_a_1296_ = lean_ctor_get(v___x_1153_, 0);
v_isSharedCheck_1303_ = !lean_is_exclusive(v___x_1153_);
if (v_isSharedCheck_1303_ == 0)
{
v___x_1298_ = v___x_1153_;
v_isShared_1299_ = v_isSharedCheck_1303_;
goto v_resetjp_1297_;
}
else
{
lean_inc(v_a_1296_);
lean_dec(v___x_1153_);
v___x_1298_ = lean_box(0);
v_isShared_1299_ = v_isSharedCheck_1303_;
goto v_resetjp_1297_;
}
v_resetjp_1297_:
{
lean_object* v___x_1301_; 
if (v_isShared_1299_ == 0)
{
v___x_1301_ = v___x_1298_;
goto v_reusejp_1300_;
}
else
{
lean_object* v_reuseFailAlloc_1302_; 
v_reuseFailAlloc_1302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1302_, 0, v_a_1296_);
v___x_1301_ = v_reuseFailAlloc_1302_;
goto v_reusejp_1300_;
}
v_reusejp_1300_:
{
return v___x_1301_;
}
}
}
}
}
else
{
lean_dec_ref(v___y_1143_);
lean_dec_ref(v___y_1142_);
lean_dec_ref(v___y_1139_);
lean_dec(v___y_1138_);
lean_dec_ref(v_f_794_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
return v___x_1145_;
}
}
v___jp_1305_:
{
lean_object* v___x_1312_; 
lean_inc_ref(v_vars_793_);
lean_inc_ref(v_sorts_792_);
v___x_1312_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize(v_expand_791_, v_sorts_792_, v_vars_793_, v___y_1306_, v___y_1311_, v_a_796_, v_a_797_, v_a_798_, v_a_799_, v_a_800_, v_a_801_);
if (lean_obj_tag(v___x_1312_) == 0)
{
lean_object* v_a_1313_; lean_object* v_snd_1314_; lean_object* v___x_1316_; uint8_t v_isShared_1317_; uint8_t v_isSharedCheck_1393_; 
v_a_1313_ = lean_ctor_get(v___x_1312_, 0);
lean_inc(v_a_1313_);
v_snd_1314_ = lean_ctor_get(v_a_1313_, 1);
v_isSharedCheck_1393_ = !lean_is_exclusive(v_a_1313_);
if (v_isSharedCheck_1393_ == 0)
{
lean_object* v_unused_1394_; 
v_unused_1394_ = lean_ctor_get(v_a_1313_, 0);
lean_dec(v_unused_1394_);
v___x_1316_ = v_a_1313_;
v_isShared_1317_ = v_isSharedCheck_1393_;
goto v_resetjp_1315_;
}
else
{
lean_inc(v_snd_1314_);
lean_dec(v_a_1313_);
v___x_1316_ = lean_box(0);
v_isShared_1317_ = v_isSharedCheck_1393_;
goto v_resetjp_1315_;
}
v_resetjp_1315_:
{
if (v_polarity_795_ == 0)
{
lean_object* v___x_1319_; uint8_t v_isShared_1320_; uint8_t v_isSharedCheck_1391_; 
v_isSharedCheck_1391_ = !lean_is_exclusive(v___x_1312_);
if (v_isSharedCheck_1391_ == 0)
{
lean_object* v_unused_1392_; 
v_unused_1392_ = lean_ctor_get(v___x_1312_, 0);
lean_dec(v_unused_1392_);
v___x_1319_ = v___x_1312_;
v_isShared_1320_ = v_isSharedCheck_1391_;
goto v_resetjp_1318_;
}
else
{
lean_dec(v___x_1312_);
v___x_1319_ = lean_box(0);
v_isShared_1320_ = v_isSharedCheck_1391_;
goto v_resetjp_1318_;
}
v_resetjp_1318_:
{
lean_object* v_fst_1321_; lean_object* v_snd_1322_; lean_object* v___x_1324_; uint8_t v_isShared_1325_; uint8_t v_isSharedCheck_1390_; 
v_fst_1321_ = lean_ctor_get(v_snd_1314_, 0);
v_snd_1322_ = lean_ctor_get(v_snd_1314_, 1);
v_isSharedCheck_1390_ = !lean_is_exclusive(v_snd_1314_);
if (v_isSharedCheck_1390_ == 0)
{
v___x_1324_ = v_snd_1314_;
v_isShared_1325_ = v_isSharedCheck_1390_;
goto v_resetjp_1323_;
}
else
{
lean_inc(v_snd_1322_);
lean_inc(v_fst_1321_);
lean_dec(v_snd_1314_);
v___x_1324_ = lean_box(0);
v_isShared_1325_ = v_isSharedCheck_1390_;
goto v_resetjp_1323_;
}
v_resetjp_1323_:
{
lean_object* v___x_1326_; 
v___x_1326_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0(v_f_794_, v___y_1310_, v_a_796_, v_a_797_, v_a_798_, v_a_799_, v_a_800_, v_a_801_);
if (lean_obj_tag(v___x_1326_) == 0)
{
lean_object* v_a_1327_; lean_object* v___x_1328_; 
v_a_1327_ = lean_ctor_get(v___x_1326_, 0);
lean_inc(v_a_1327_);
lean_dec_ref_known(v___x_1326_, 1);
v___x_1328_ = lp_vampireReplay_Vampire_Reconstruct_formula(v_sorts_792_, v_vars_793_, v_a_1327_, v_a_796_, v_a_797_, v_a_798_, v_a_799_, v_a_800_, v_a_801_);
if (lean_obj_tag(v___x_1328_) == 0)
{
lean_object* v_a_1329_; lean_object* v___x_1330_; lean_object* v___x_1332_; 
v_a_1329_ = lean_ctor_get(v___x_1328_, 0);
lean_inc(v_a_1329_);
lean_dec_ref_known(v___x_1328_, 1);
v___x_1330_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__49));
if (v_isShared_1320_ == 0)
{
lean_ctor_set_tag(v___x_1319_, 1);
lean_ctor_set(v___x_1319_, 0, v_a_1329_);
v___x_1332_ = v___x_1319_;
goto v_reusejp_1331_;
}
else
{
lean_object* v_reuseFailAlloc_1373_; 
v_reuseFailAlloc_1373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1373_, 0, v_a_1329_);
v___x_1332_ = v_reuseFailAlloc_1373_;
goto v_reusejp_1331_;
}
v_reusejp_1331_:
{
lean_object* v___x_1333_; lean_object* v___x_1334_; 
v___x_1333_ = lean_array_push(v___y_1309_, v___x_1332_);
v___x_1334_ = l_Lean_Meta_mkAppOptM(v___x_1330_, v___x_1333_, v_a_798_, v_a_799_, v_a_800_, v_a_801_);
if (lean_obj_tag(v___x_1334_) == 0)
{
lean_object* v_a_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; 
v_a_1335_ = lean_ctor_get(v___x_1334_, 0);
lean_inc(v_a_1335_);
lean_dec_ref_known(v___x_1334_, 1);
v___x_1336_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__3));
lean_inc_ref(v___y_1308_);
v___x_1337_ = l_Lean_Name_mkStr2(v___y_1308_, v___x_1336_);
v___x_1338_ = lean_unsigned_to_nat(2u);
v___x_1339_ = lean_mk_empty_array_with_capacity(v___x_1338_);
v___x_1340_ = lean_array_push(v___x_1339_, v_a_1335_);
v___x_1341_ = lean_array_push(v___x_1340_, v_snd_1322_);
v___x_1342_ = l_Lean_Meta_mkAppM(v___x_1337_, v___x_1341_, v_a_798_, v_a_799_, v_a_800_, v_a_801_);
if (lean_obj_tag(v___x_1342_) == 0)
{
lean_object* v_a_1343_; lean_object* v___x_1345_; uint8_t v_isShared_1346_; uint8_t v_isSharedCheck_1356_; 
v_a_1343_ = lean_ctor_get(v___x_1342_, 0);
v_isSharedCheck_1356_ = !lean_is_exclusive(v___x_1342_);
if (v_isSharedCheck_1356_ == 0)
{
v___x_1345_ = v___x_1342_;
v_isShared_1346_ = v_isSharedCheck_1356_;
goto v_resetjp_1344_;
}
else
{
lean_inc(v_a_1343_);
lean_dec(v___x_1342_);
v___x_1345_ = lean_box(0);
v_isShared_1346_ = v_isSharedCheck_1356_;
goto v_resetjp_1344_;
}
v_resetjp_1344_:
{
lean_object* v___x_1348_; 
if (v_isShared_1325_ == 0)
{
lean_ctor_set(v___x_1324_, 1, v_a_1343_);
v___x_1348_ = v___x_1324_;
goto v_reusejp_1347_;
}
else
{
lean_object* v_reuseFailAlloc_1355_; 
v_reuseFailAlloc_1355_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1355_, 0, v_fst_1321_);
lean_ctor_set(v_reuseFailAlloc_1355_, 1, v_a_1343_);
v___x_1348_ = v_reuseFailAlloc_1355_;
goto v_reusejp_1347_;
}
v_reusejp_1347_:
{
lean_object* v___x_1350_; 
if (v_isShared_1317_ == 0)
{
lean_ctor_set(v___x_1316_, 1, v___x_1348_);
lean_ctor_set(v___x_1316_, 0, v___y_1307_);
v___x_1350_ = v___x_1316_;
goto v_reusejp_1349_;
}
else
{
lean_object* v_reuseFailAlloc_1354_; 
v_reuseFailAlloc_1354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1354_, 0, v___y_1307_);
lean_ctor_set(v_reuseFailAlloc_1354_, 1, v___x_1348_);
v___x_1350_ = v_reuseFailAlloc_1354_;
goto v_reusejp_1349_;
}
v_reusejp_1349_:
{
lean_object* v___x_1352_; 
if (v_isShared_1346_ == 0)
{
lean_ctor_set(v___x_1345_, 0, v___x_1350_);
v___x_1352_ = v___x_1345_;
goto v_reusejp_1351_;
}
else
{
lean_object* v_reuseFailAlloc_1353_; 
v_reuseFailAlloc_1353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1353_, 0, v___x_1350_);
v___x_1352_ = v_reuseFailAlloc_1353_;
goto v_reusejp_1351_;
}
v_reusejp_1351_:
{
return v___x_1352_;
}
}
}
}
}
else
{
lean_object* v_a_1357_; lean_object* v___x_1359_; uint8_t v_isShared_1360_; uint8_t v_isSharedCheck_1364_; 
lean_del_object(v___x_1324_);
lean_dec(v_fst_1321_);
lean_del_object(v___x_1316_);
lean_dec_ref(v___y_1307_);
v_a_1357_ = lean_ctor_get(v___x_1342_, 0);
v_isSharedCheck_1364_ = !lean_is_exclusive(v___x_1342_);
if (v_isSharedCheck_1364_ == 0)
{
v___x_1359_ = v___x_1342_;
v_isShared_1360_ = v_isSharedCheck_1364_;
goto v_resetjp_1358_;
}
else
{
lean_inc(v_a_1357_);
lean_dec(v___x_1342_);
v___x_1359_ = lean_box(0);
v_isShared_1360_ = v_isSharedCheck_1364_;
goto v_resetjp_1358_;
}
v_resetjp_1358_:
{
lean_object* v___x_1362_; 
if (v_isShared_1360_ == 0)
{
v___x_1362_ = v___x_1359_;
goto v_reusejp_1361_;
}
else
{
lean_object* v_reuseFailAlloc_1363_; 
v_reuseFailAlloc_1363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1363_, 0, v_a_1357_);
v___x_1362_ = v_reuseFailAlloc_1363_;
goto v_reusejp_1361_;
}
v_reusejp_1361_:
{
return v___x_1362_;
}
}
}
}
else
{
lean_object* v_a_1365_; lean_object* v___x_1367_; uint8_t v_isShared_1368_; uint8_t v_isSharedCheck_1372_; 
lean_del_object(v___x_1324_);
lean_dec(v_snd_1322_);
lean_dec(v_fst_1321_);
lean_del_object(v___x_1316_);
lean_dec_ref(v___y_1307_);
v_a_1365_ = lean_ctor_get(v___x_1334_, 0);
v_isSharedCheck_1372_ = !lean_is_exclusive(v___x_1334_);
if (v_isSharedCheck_1372_ == 0)
{
v___x_1367_ = v___x_1334_;
v_isShared_1368_ = v_isSharedCheck_1372_;
goto v_resetjp_1366_;
}
else
{
lean_inc(v_a_1365_);
lean_dec(v___x_1334_);
v___x_1367_ = lean_box(0);
v_isShared_1368_ = v_isSharedCheck_1372_;
goto v_resetjp_1366_;
}
v_resetjp_1366_:
{
lean_object* v___x_1370_; 
if (v_isShared_1368_ == 0)
{
v___x_1370_ = v___x_1367_;
goto v_reusejp_1369_;
}
else
{
lean_object* v_reuseFailAlloc_1371_; 
v_reuseFailAlloc_1371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1371_, 0, v_a_1365_);
v___x_1370_ = v_reuseFailAlloc_1371_;
goto v_reusejp_1369_;
}
v_reusejp_1369_:
{
return v___x_1370_;
}
}
}
}
}
else
{
lean_object* v_a_1374_; lean_object* v___x_1376_; uint8_t v_isShared_1377_; uint8_t v_isSharedCheck_1381_; 
lean_del_object(v___x_1324_);
lean_dec(v_snd_1322_);
lean_dec(v_fst_1321_);
lean_del_object(v___x_1319_);
lean_del_object(v___x_1316_);
lean_dec_ref(v___y_1309_);
lean_dec_ref(v___y_1307_);
v_a_1374_ = lean_ctor_get(v___x_1328_, 0);
v_isSharedCheck_1381_ = !lean_is_exclusive(v___x_1328_);
if (v_isSharedCheck_1381_ == 0)
{
v___x_1376_ = v___x_1328_;
v_isShared_1377_ = v_isSharedCheck_1381_;
goto v_resetjp_1375_;
}
else
{
lean_inc(v_a_1374_);
lean_dec(v___x_1328_);
v___x_1376_ = lean_box(0);
v_isShared_1377_ = v_isSharedCheck_1381_;
goto v_resetjp_1375_;
}
v_resetjp_1375_:
{
lean_object* v___x_1379_; 
if (v_isShared_1377_ == 0)
{
v___x_1379_ = v___x_1376_;
goto v_reusejp_1378_;
}
else
{
lean_object* v_reuseFailAlloc_1380_; 
v_reuseFailAlloc_1380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1380_, 0, v_a_1374_);
v___x_1379_ = v_reuseFailAlloc_1380_;
goto v_reusejp_1378_;
}
v_reusejp_1378_:
{
return v___x_1379_;
}
}
}
}
else
{
lean_object* v_a_1382_; lean_object* v___x_1384_; uint8_t v_isShared_1385_; uint8_t v_isSharedCheck_1389_; 
lean_del_object(v___x_1324_);
lean_dec(v_snd_1322_);
lean_dec(v_fst_1321_);
lean_del_object(v___x_1319_);
lean_del_object(v___x_1316_);
lean_dec_ref(v___y_1309_);
lean_dec_ref(v___y_1307_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
v_a_1382_ = lean_ctor_get(v___x_1326_, 0);
v_isSharedCheck_1389_ = !lean_is_exclusive(v___x_1326_);
if (v_isSharedCheck_1389_ == 0)
{
v___x_1384_ = v___x_1326_;
v_isShared_1385_ = v_isSharedCheck_1389_;
goto v_resetjp_1383_;
}
else
{
lean_inc(v_a_1382_);
lean_dec(v___x_1326_);
v___x_1384_ = lean_box(0);
v_isShared_1385_ = v_isSharedCheck_1389_;
goto v_resetjp_1383_;
}
v_resetjp_1383_:
{
lean_object* v___x_1387_; 
if (v_isShared_1385_ == 0)
{
v___x_1387_ = v___x_1384_;
goto v_reusejp_1386_;
}
else
{
lean_object* v_reuseFailAlloc_1388_; 
v_reuseFailAlloc_1388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1388_, 0, v_a_1382_);
v___x_1387_ = v_reuseFailAlloc_1388_;
goto v_reusejp_1386_;
}
v_reusejp_1386_:
{
return v___x_1387_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_1316_);
lean_dec(v_snd_1314_);
lean_dec_ref(v___y_1309_);
lean_dec_ref(v___y_1307_);
lean_dec_ref(v_f_794_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
return v___x_1312_;
}
}
}
else
{
lean_dec_ref(v___y_1309_);
lean_dec_ref(v___y_1307_);
lean_dec_ref(v_f_794_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
return v___x_1312_;
}
}
v___jp_1396_:
{
lean_object* v___x_1403_; 
v___x_1403_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v_f_794_, v___y_1399_, v___y_1400_, v___y_1401_, v___y_1402_);
if (lean_obj_tag(v___x_1403_) == 0)
{
lean_object* v_a_1404_; uint8_t v___x_1405_; 
v_a_1404_ = lean_ctor_get(v___x_1403_, 0);
lean_inc(v_a_1404_);
lean_dec_ref_known(v___x_1403_, 1);
v___x_1405_ = lean_unbox(v_a_1404_);
lean_dec(v_a_1404_);
if (v___x_1405_ == 7)
{
v___y_1114_ = v___y_1401_;
v___y_1115_ = v___y_1398_;
v___y_1116_ = v___y_1400_;
v___y_1117_ = v___y_1402_;
v___y_1118_ = v___y_1397_;
v___y_1119_ = v___y_1399_;
v___y_1120_ = v___x_1395_;
goto v___jp_1113_;
}
else
{
uint8_t v___x_1406_; 
v___x_1406_ = 0;
v___y_1114_ = v___y_1401_;
v___y_1115_ = v___y_1398_;
v___y_1116_ = v___y_1400_;
v___y_1117_ = v___y_1402_;
v___y_1118_ = v___y_1397_;
v___y_1119_ = v___y_1399_;
v___y_1120_ = v___x_1406_;
goto v___jp_1113_;
}
}
else
{
lean_object* v_a_1407_; lean_object* v___x_1409_; uint8_t v_isShared_1410_; uint8_t v_isSharedCheck_1414_; 
lean_dec_ref(v_f_794_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
v_a_1407_ = lean_ctor_get(v___x_1403_, 0);
v_isSharedCheck_1414_ = !lean_is_exclusive(v___x_1403_);
if (v_isSharedCheck_1414_ == 0)
{
v___x_1409_ = v___x_1403_;
v_isShared_1410_ = v_isSharedCheck_1414_;
goto v_resetjp_1408_;
}
else
{
lean_inc(v_a_1407_);
lean_dec(v___x_1403_);
v___x_1409_ = lean_box(0);
v_isShared_1410_ = v_isSharedCheck_1414_;
goto v_resetjp_1408_;
}
v_resetjp_1408_:
{
lean_object* v___x_1412_; 
if (v_isShared_1410_ == 0)
{
v___x_1412_ = v___x_1409_;
goto v_reusejp_1411_;
}
else
{
lean_object* v_reuseFailAlloc_1413_; 
v_reuseFailAlloc_1413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1413_, 0, v_a_1407_);
v___x_1412_ = v_reuseFailAlloc_1413_;
goto v_reusejp_1411_;
}
v_reusejp_1411_:
{
return v___x_1412_;
}
}
}
}
v___jp_1415_:
{
lean_object* v___x_1423_; 
v___x_1423_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v_f_794_, v___y_1419_, v___y_1420_, v___y_1421_, v___y_1422_);
if (lean_obj_tag(v___x_1423_) == 0)
{
lean_object* v_a_1424_; uint8_t v___x_1425_; 
v_a_1424_ = lean_ctor_get(v___x_1423_, 0);
lean_inc(v_a_1424_);
lean_dec_ref_known(v___x_1423_, 1);
v___x_1425_ = lean_unbox(v_a_1424_);
lean_dec(v_a_1424_);
if (v___x_1425_ == 1)
{
v___y_993_ = v___y_1419_;
v___y_994_ = v___y_1416_;
v___y_995_ = v___y_1422_;
v___y_996_ = v___y_1421_;
v___y_997_ = v___y_1417_;
v___y_998_ = v___y_1420_;
v___y_999_ = v___y_1418_;
v___y_1000_ = v___x_1395_;
goto v___jp_992_;
}
else
{
uint8_t v___x_1426_; 
v___x_1426_ = 0;
v___y_993_ = v___y_1419_;
v___y_994_ = v___y_1416_;
v___y_995_ = v___y_1422_;
v___y_996_ = v___y_1421_;
v___y_997_ = v___y_1417_;
v___y_998_ = v___y_1420_;
v___y_999_ = v___y_1418_;
v___y_1000_ = v___x_1426_;
goto v___jp_992_;
}
}
else
{
lean_object* v_a_1427_; lean_object* v___x_1429_; uint8_t v_isShared_1430_; uint8_t v_isSharedCheck_1434_; 
lean_dec_ref(v___y_1416_);
lean_dec_ref(v_f_794_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
v_a_1427_ = lean_ctor_get(v___x_1423_, 0);
v_isSharedCheck_1434_ = !lean_is_exclusive(v___x_1423_);
if (v_isSharedCheck_1434_ == 0)
{
v___x_1429_ = v___x_1423_;
v_isShared_1430_ = v_isSharedCheck_1434_;
goto v_resetjp_1428_;
}
else
{
lean_inc(v_a_1427_);
lean_dec(v___x_1423_);
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
v___jp_1435_:
{
lean_object* v___x_1449_; 
lean_inc_ref(v_f_794_);
v___x_1449_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0(v_f_794_, v___y_1442_, v___y_1445_, v___y_1438_, v___y_1441_, v___y_1436_, v___y_1443_, v___y_1446_);
if (lean_obj_tag(v___x_1449_) == 0)
{
lean_object* v_a_1450_; lean_object* v___x_1451_; 
v_a_1450_ = lean_ctor_get(v___x_1449_, 0);
lean_inc(v_a_1450_);
lean_dec_ref_known(v___x_1449_, 1);
lean_inc_ref(v_vars_793_);
lean_inc_ref(v_sorts_792_);
v___x_1451_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize(v_expand_791_, v_sorts_792_, v_vars_793_, v_a_1450_, v___x_1395_, v___y_1445_, v___y_1438_, v___y_1441_, v___y_1436_, v___y_1443_, v___y_1446_);
if (lean_obj_tag(v___x_1451_) == 0)
{
lean_object* v_a_1452_; lean_object* v_snd_1453_; lean_object* v_fst_1454_; lean_object* v_snd_1455_; lean_object* v___x_1456_; 
v_a_1452_ = lean_ctor_get(v___x_1451_, 0);
lean_inc(v_a_1452_);
lean_dec_ref_known(v___x_1451_, 1);
v_snd_1453_ = lean_ctor_get(v_a_1452_, 1);
lean_inc(v_snd_1453_);
lean_dec(v_a_1452_);
v_fst_1454_ = lean_ctor_get(v_snd_1453_, 0);
lean_inc(v_fst_1454_);
v_snd_1455_ = lean_ctor_get(v_snd_1453_, 1);
lean_inc(v_snd_1455_);
lean_dec(v_snd_1453_);
lean_inc_ref(v_f_794_);
v___x_1456_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0(v_f_794_, v___y_1440_, v___y_1445_, v___y_1438_, v___y_1441_, v___y_1436_, v___y_1443_, v___y_1446_);
if (lean_obj_tag(v___x_1456_) == 0)
{
lean_object* v_a_1457_; lean_object* v___x_1458_; 
v_a_1457_ = lean_ctor_get(v___x_1456_, 0);
lean_inc(v_a_1457_);
lean_dec_ref_known(v___x_1456_, 1);
lean_inc_ref(v_vars_793_);
lean_inc_ref(v_sorts_792_);
v___x_1458_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize(v_expand_791_, v_sorts_792_, v_vars_793_, v_a_1457_, v___x_1395_, v___y_1445_, v___y_1438_, v___y_1441_, v___y_1436_, v___y_1443_, v___y_1446_);
if (lean_obj_tag(v___x_1458_) == 0)
{
lean_object* v_a_1459_; lean_object* v_snd_1460_; lean_object* v_fst_1461_; lean_object* v_snd_1462_; lean_object* v___x_1463_; 
v_a_1459_ = lean_ctor_get(v___x_1458_, 0);
lean_inc(v_a_1459_);
lean_dec_ref_known(v___x_1458_, 1);
v_snd_1460_ = lean_ctor_get(v_a_1459_, 1);
lean_inc(v_snd_1460_);
lean_dec(v_a_1459_);
v_fst_1461_ = lean_ctor_get(v_snd_1460_, 0);
lean_inc(v_fst_1461_);
v_snd_1462_ = lean_ctor_get(v_snd_1460_, 1);
lean_inc(v_snd_1462_);
lean_dec(v_snd_1460_);
lean_inc_ref(v_f_794_);
v___x_1463_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0(v_f_794_, v___y_1442_, v___y_1445_, v___y_1438_, v___y_1441_, v___y_1436_, v___y_1443_, v___y_1446_);
if (lean_obj_tag(v___x_1463_) == 0)
{
lean_object* v_a_1464_; lean_object* v___x_1465_; 
v_a_1464_ = lean_ctor_get(v___x_1463_, 0);
lean_inc(v_a_1464_);
lean_dec_ref_known(v___x_1463_, 1);
lean_inc_ref(v_vars_793_);
lean_inc_ref(v_sorts_792_);
v___x_1465_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize(v_expand_791_, v_sorts_792_, v_vars_793_, v_a_1464_, v___y_1448_, v___y_1445_, v___y_1438_, v___y_1441_, v___y_1436_, v___y_1443_, v___y_1446_);
if (lean_obj_tag(v___x_1465_) == 0)
{
lean_object* v_a_1466_; lean_object* v___x_1468_; uint8_t v_isShared_1469_; uint8_t v_isSharedCheck_1601_; 
v_a_1466_ = lean_ctor_get(v___x_1465_, 0);
v_isSharedCheck_1601_ = !lean_is_exclusive(v___x_1465_);
if (v_isSharedCheck_1601_ == 0)
{
v___x_1468_ = v___x_1465_;
v_isShared_1469_ = v_isSharedCheck_1601_;
goto v_resetjp_1467_;
}
else
{
lean_inc(v_a_1466_);
lean_dec(v___x_1465_);
v___x_1468_ = lean_box(0);
v_isShared_1469_ = v_isSharedCheck_1601_;
goto v_resetjp_1467_;
}
v_resetjp_1467_:
{
lean_object* v_snd_1470_; lean_object* v_fst_1471_; lean_object* v_snd_1472_; lean_object* v___x_1473_; 
v_snd_1470_ = lean_ctor_get(v_a_1466_, 1);
lean_inc(v_snd_1470_);
lean_dec(v_a_1466_);
v_fst_1471_ = lean_ctor_get(v_snd_1470_, 0);
lean_inc(v_fst_1471_);
v_snd_1472_ = lean_ctor_get(v_snd_1470_, 1);
lean_inc(v_snd_1472_);
lean_dec(v_snd_1470_);
v___x_1473_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0(v_f_794_, v___y_1440_, v___y_1445_, v___y_1438_, v___y_1441_, v___y_1436_, v___y_1443_, v___y_1446_);
if (lean_obj_tag(v___x_1473_) == 0)
{
lean_object* v_a_1474_; lean_object* v___x_1475_; 
v_a_1474_ = lean_ctor_get(v___x_1473_, 0);
lean_inc(v_a_1474_);
lean_dec_ref_known(v___x_1473_, 1);
v___x_1475_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize(v_expand_791_, v_sorts_792_, v_vars_793_, v_a_1474_, v___y_1448_, v___y_1445_, v___y_1438_, v___y_1441_, v___y_1436_, v___y_1443_, v___y_1446_);
if (lean_obj_tag(v___x_1475_) == 0)
{
lean_object* v_a_1476_; lean_object* v___x_1478_; uint8_t v_isShared_1479_; uint8_t v_isSharedCheck_1592_; 
v_a_1476_ = lean_ctor_get(v___x_1475_, 0);
v_isSharedCheck_1592_ = !lean_is_exclusive(v___x_1475_);
if (v_isSharedCheck_1592_ == 0)
{
v___x_1478_ = v___x_1475_;
v_isShared_1479_ = v_isSharedCheck_1592_;
goto v_resetjp_1477_;
}
else
{
lean_inc(v_a_1476_);
lean_dec(v___x_1475_);
v___x_1478_ = lean_box(0);
v_isShared_1479_ = v_isSharedCheck_1592_;
goto v_resetjp_1477_;
}
v_resetjp_1477_:
{
lean_object* v_snd_1480_; lean_object* v___x_1482_; uint8_t v_isShared_1483_; uint8_t v_isSharedCheck_1590_; 
v_snd_1480_ = lean_ctor_get(v_a_1476_, 1);
v_isSharedCheck_1590_ = !lean_is_exclusive(v_a_1476_);
if (v_isSharedCheck_1590_ == 0)
{
lean_object* v_unused_1591_; 
v_unused_1591_ = lean_ctor_get(v_a_1476_, 0);
lean_dec(v_unused_1591_);
v___x_1482_ = v_a_1476_;
v_isShared_1483_ = v_isSharedCheck_1590_;
goto v_resetjp_1481_;
}
else
{
lean_inc(v_snd_1480_);
lean_dec(v_a_1476_);
v___x_1482_ = lean_box(0);
v_isShared_1483_ = v_isSharedCheck_1590_;
goto v_resetjp_1481_;
}
v_resetjp_1481_:
{
lean_object* v_fst_1484_; lean_object* v_snd_1485_; lean_object* v___x_1487_; uint8_t v_isShared_1488_; uint8_t v_isSharedCheck_1589_; 
v_fst_1484_ = lean_ctor_get(v_snd_1480_, 0);
v_snd_1485_ = lean_ctor_get(v_snd_1480_, 1);
v_isSharedCheck_1589_ = !lean_is_exclusive(v_snd_1480_);
if (v_isSharedCheck_1589_ == 0)
{
v___x_1487_ = v_snd_1480_;
v_isShared_1488_ = v_isSharedCheck_1589_;
goto v_resetjp_1486_;
}
else
{
lean_inc(v_snd_1485_);
lean_inc(v_fst_1484_);
lean_dec(v_snd_1480_);
v___x_1487_ = lean_box(0);
v_isShared_1488_ = v_isSharedCheck_1589_;
goto v_resetjp_1486_;
}
v_resetjp_1486_:
{
lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; 
v___x_1489_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__13));
v___x_1490_ = lean_unsigned_to_nat(2u);
v___x_1491_ = lean_mk_empty_array_with_capacity(v___x_1490_);
lean_inc_ref(v___x_1491_);
v___x_1492_ = lean_array_push(v___x_1491_, v_snd_1455_);
v___x_1493_ = lean_array_push(v___x_1492_, v_snd_1462_);
v___x_1494_ = l_Lean_Meta_mkAppM(v___x_1489_, v___x_1493_, v___y_1441_, v___y_1436_, v___y_1443_, v___y_1446_);
if (lean_obj_tag(v___x_1494_) == 0)
{
lean_object* v_a_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; 
v_a_1495_ = lean_ctor_get(v___x_1494_, 0);
lean_inc(v_a_1495_);
lean_dec_ref_known(v___x_1494_, 1);
lean_inc_ref(v___x_1491_);
v___x_1496_ = lean_array_push(v___x_1491_, v_snd_1472_);
v___x_1497_ = lean_array_push(v___x_1496_, v_snd_1485_);
v___x_1498_ = l_Lean_Meta_mkAppM(v___x_1489_, v___x_1497_, v___y_1441_, v___y_1436_, v___y_1443_, v___y_1446_);
if (lean_obj_tag(v___x_1498_) == 0)
{
lean_object* v_a_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; 
v_a_1499_ = lean_ctor_get(v___x_1498_, 0);
lean_inc(v_a_1499_);
lean_dec_ref_known(v___x_1498_, 1);
v___x_1500_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__5));
lean_inc_ref(v___x_1491_);
v___x_1501_ = lean_array_push(v___x_1491_, v_a_1495_);
v___x_1502_ = lean_array_push(v___x_1501_, v_a_1499_);
v___x_1503_ = l_Lean_Meta_mkAppM(v___x_1500_, v___x_1502_, v___y_1441_, v___y_1436_, v___y_1443_, v___y_1446_);
if (lean_obj_tag(v___x_1503_) == 0)
{
lean_object* v_a_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1516_; 
v_a_1504_ = lean_ctor_get(v___x_1503_, 0);
lean_inc(v_a_1504_);
lean_dec_ref_known(v___x_1503_, 1);
v___x_1505_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__24));
v___x_1506_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__28));
v___x_1507_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__29));
v___x_1508_ = l_Lean_Name_num___override(v___x_1507_, v___y_1442_);
v___x_1509_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__31));
v___x_1510_ = l_Lean_Name_str___override(v___x_1508_, v___x_1509_);
v___x_1511_ = l_Lean_Name_str___override(v___x_1510_, v___x_1505_);
v___x_1512_ = l_Lean_Name_str___override(v___x_1511_, v___x_1506_);
v___x_1513_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__50));
v___x_1514_ = l_Lean_Name_str___override(v___x_1512_, v___x_1513_);
if (v_isShared_1479_ == 0)
{
lean_ctor_set_tag(v___x_1478_, 1);
lean_ctor_set(v___x_1478_, 0, v___y_1447_);
v___x_1516_ = v___x_1478_;
goto v_reusejp_1515_;
}
else
{
lean_object* v_reuseFailAlloc_1564_; 
v_reuseFailAlloc_1564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1564_, 0, v___y_1447_);
v___x_1516_ = v_reuseFailAlloc_1564_;
goto v_reusejp_1515_;
}
v_reusejp_1515_:
{
lean_object* v___x_1518_; 
if (v_isShared_1469_ == 0)
{
lean_ctor_set_tag(v___x_1468_, 1);
lean_ctor_set(v___x_1468_, 0, v___y_1439_);
v___x_1518_ = v___x_1468_;
goto v_reusejp_1517_;
}
else
{
lean_object* v_reuseFailAlloc_1563_; 
v_reuseFailAlloc_1563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1563_, 0, v___y_1439_);
v___x_1518_ = v_reuseFailAlloc_1563_;
goto v_reusejp_1517_;
}
v_reusejp_1517_:
{
lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; 
lean_inc_ref(v___x_1491_);
v___x_1519_ = lean_array_push(v___x_1491_, v___x_1516_);
v___x_1520_ = lean_array_push(v___x_1519_, v___x_1518_);
v___x_1521_ = l_Lean_Meta_mkAppOptM(v___x_1514_, v___x_1520_, v___y_1441_, v___y_1436_, v___y_1443_, v___y_1446_);
if (lean_obj_tag(v___x_1521_) == 0)
{
lean_object* v_a_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; 
v_a_1522_ = lean_ctor_get(v___x_1521_, 0);
lean_inc(v_a_1522_);
lean_dec_ref_known(v___x_1521_, 1);
v___x_1523_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__3));
lean_inc_ref(v___y_1444_);
v___x_1524_ = l_Lean_Name_mkStr2(v___y_1444_, v___x_1523_);
v___x_1525_ = lean_array_push(v___x_1491_, v_a_1522_);
v___x_1526_ = lean_array_push(v___x_1525_, v_a_1504_);
v___x_1527_ = l_Lean_Meta_mkAppM(v___x_1524_, v___x_1526_, v___y_1441_, v___y_1436_, v___y_1443_, v___y_1446_);
if (lean_obj_tag(v___x_1527_) == 0)
{
lean_object* v_a_1528_; lean_object* v___x_1530_; uint8_t v_isShared_1531_; uint8_t v_isSharedCheck_1546_; 
v_a_1528_ = lean_ctor_get(v___x_1527_, 0);
v_isSharedCheck_1546_ = !lean_is_exclusive(v___x_1527_);
if (v_isSharedCheck_1546_ == 0)
{
v___x_1530_ = v___x_1527_;
v_isShared_1531_ = v_isSharedCheck_1546_;
goto v_resetjp_1529_;
}
else
{
lean_inc(v_a_1528_);
lean_dec(v___x_1527_);
v___x_1530_ = lean_box(0);
v_isShared_1531_ = v_isSharedCheck_1546_;
goto v_resetjp_1529_;
}
v_resetjp_1529_:
{
lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1538_; 
v___x_1532_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__46, &lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__46_once, _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__46);
v___x_1533_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__47, &lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__47_once, _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__47);
v___x_1534_ = l_Lean_mkAppB(v___x_1533_, v_fst_1454_, v_fst_1461_);
v___x_1535_ = l_Lean_mkAppB(v___x_1533_, v_fst_1471_, v_fst_1484_);
v___x_1536_ = l_Lean_mkAppB(v___x_1532_, v___x_1534_, v___x_1535_);
if (v_isShared_1488_ == 0)
{
lean_ctor_set(v___x_1487_, 1, v_a_1528_);
lean_ctor_set(v___x_1487_, 0, v___x_1536_);
v___x_1538_ = v___x_1487_;
goto v_reusejp_1537_;
}
else
{
lean_object* v_reuseFailAlloc_1545_; 
v_reuseFailAlloc_1545_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1545_, 0, v___x_1536_);
lean_ctor_set(v_reuseFailAlloc_1545_, 1, v_a_1528_);
v___x_1538_ = v_reuseFailAlloc_1545_;
goto v_reusejp_1537_;
}
v_reusejp_1537_:
{
lean_object* v___x_1540_; 
if (v_isShared_1483_ == 0)
{
lean_ctor_set(v___x_1482_, 1, v___x_1538_);
lean_ctor_set(v___x_1482_, 0, v___y_1437_);
v___x_1540_ = v___x_1482_;
goto v_reusejp_1539_;
}
else
{
lean_object* v_reuseFailAlloc_1544_; 
v_reuseFailAlloc_1544_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1544_, 0, v___y_1437_);
lean_ctor_set(v_reuseFailAlloc_1544_, 1, v___x_1538_);
v___x_1540_ = v_reuseFailAlloc_1544_;
goto v_reusejp_1539_;
}
v_reusejp_1539_:
{
lean_object* v___x_1542_; 
if (v_isShared_1531_ == 0)
{
lean_ctor_set(v___x_1530_, 0, v___x_1540_);
v___x_1542_ = v___x_1530_;
goto v_reusejp_1541_;
}
else
{
lean_object* v_reuseFailAlloc_1543_; 
v_reuseFailAlloc_1543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1543_, 0, v___x_1540_);
v___x_1542_ = v_reuseFailAlloc_1543_;
goto v_reusejp_1541_;
}
v_reusejp_1541_:
{
return v___x_1542_;
}
}
}
}
}
else
{
lean_object* v_a_1547_; lean_object* v___x_1549_; uint8_t v_isShared_1550_; uint8_t v_isSharedCheck_1554_; 
lean_del_object(v___x_1487_);
lean_dec(v_fst_1484_);
lean_del_object(v___x_1482_);
lean_dec(v_fst_1471_);
lean_dec(v_fst_1461_);
lean_dec(v_fst_1454_);
lean_dec_ref(v___y_1437_);
v_a_1547_ = lean_ctor_get(v___x_1527_, 0);
v_isSharedCheck_1554_ = !lean_is_exclusive(v___x_1527_);
if (v_isSharedCheck_1554_ == 0)
{
v___x_1549_ = v___x_1527_;
v_isShared_1550_ = v_isSharedCheck_1554_;
goto v_resetjp_1548_;
}
else
{
lean_inc(v_a_1547_);
lean_dec(v___x_1527_);
v___x_1549_ = lean_box(0);
v_isShared_1550_ = v_isSharedCheck_1554_;
goto v_resetjp_1548_;
}
v_resetjp_1548_:
{
lean_object* v___x_1552_; 
if (v_isShared_1550_ == 0)
{
v___x_1552_ = v___x_1549_;
goto v_reusejp_1551_;
}
else
{
lean_object* v_reuseFailAlloc_1553_; 
v_reuseFailAlloc_1553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1553_, 0, v_a_1547_);
v___x_1552_ = v_reuseFailAlloc_1553_;
goto v_reusejp_1551_;
}
v_reusejp_1551_:
{
return v___x_1552_;
}
}
}
}
else
{
lean_object* v_a_1555_; lean_object* v___x_1557_; uint8_t v_isShared_1558_; uint8_t v_isSharedCheck_1562_; 
lean_dec(v_a_1504_);
lean_dec_ref(v___x_1491_);
lean_del_object(v___x_1487_);
lean_dec(v_fst_1484_);
lean_del_object(v___x_1482_);
lean_dec(v_fst_1471_);
lean_dec(v_fst_1461_);
lean_dec(v_fst_1454_);
lean_dec_ref(v___y_1437_);
v_a_1555_ = lean_ctor_get(v___x_1521_, 0);
v_isSharedCheck_1562_ = !lean_is_exclusive(v___x_1521_);
if (v_isSharedCheck_1562_ == 0)
{
v___x_1557_ = v___x_1521_;
v_isShared_1558_ = v_isSharedCheck_1562_;
goto v_resetjp_1556_;
}
else
{
lean_inc(v_a_1555_);
lean_dec(v___x_1521_);
v___x_1557_ = lean_box(0);
v_isShared_1558_ = v_isSharedCheck_1562_;
goto v_resetjp_1556_;
}
v_resetjp_1556_:
{
lean_object* v___x_1560_; 
if (v_isShared_1558_ == 0)
{
v___x_1560_ = v___x_1557_;
goto v_reusejp_1559_;
}
else
{
lean_object* v_reuseFailAlloc_1561_; 
v_reuseFailAlloc_1561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1561_, 0, v_a_1555_);
v___x_1560_ = v_reuseFailAlloc_1561_;
goto v_reusejp_1559_;
}
v_reusejp_1559_:
{
return v___x_1560_;
}
}
}
}
}
}
else
{
lean_object* v_a_1565_; lean_object* v___x_1567_; uint8_t v_isShared_1568_; uint8_t v_isSharedCheck_1572_; 
lean_dec_ref(v___x_1491_);
lean_del_object(v___x_1487_);
lean_dec(v_fst_1484_);
lean_del_object(v___x_1482_);
lean_del_object(v___x_1478_);
lean_dec(v_fst_1471_);
lean_del_object(v___x_1468_);
lean_dec(v_fst_1461_);
lean_dec(v_fst_1454_);
lean_dec_ref(v___y_1447_);
lean_dec(v___y_1442_);
lean_dec_ref(v___y_1439_);
lean_dec_ref(v___y_1437_);
v_a_1565_ = lean_ctor_get(v___x_1503_, 0);
v_isSharedCheck_1572_ = !lean_is_exclusive(v___x_1503_);
if (v_isSharedCheck_1572_ == 0)
{
v___x_1567_ = v___x_1503_;
v_isShared_1568_ = v_isSharedCheck_1572_;
goto v_resetjp_1566_;
}
else
{
lean_inc(v_a_1565_);
lean_dec(v___x_1503_);
v___x_1567_ = lean_box(0);
v_isShared_1568_ = v_isSharedCheck_1572_;
goto v_resetjp_1566_;
}
v_resetjp_1566_:
{
lean_object* v___x_1570_; 
if (v_isShared_1568_ == 0)
{
v___x_1570_ = v___x_1567_;
goto v_reusejp_1569_;
}
else
{
lean_object* v_reuseFailAlloc_1571_; 
v_reuseFailAlloc_1571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1571_, 0, v_a_1565_);
v___x_1570_ = v_reuseFailAlloc_1571_;
goto v_reusejp_1569_;
}
v_reusejp_1569_:
{
return v___x_1570_;
}
}
}
}
else
{
lean_object* v_a_1573_; lean_object* v___x_1575_; uint8_t v_isShared_1576_; uint8_t v_isSharedCheck_1580_; 
lean_dec(v_a_1495_);
lean_dec_ref(v___x_1491_);
lean_del_object(v___x_1487_);
lean_dec(v_fst_1484_);
lean_del_object(v___x_1482_);
lean_del_object(v___x_1478_);
lean_dec(v_fst_1471_);
lean_del_object(v___x_1468_);
lean_dec(v_fst_1461_);
lean_dec(v_fst_1454_);
lean_dec_ref(v___y_1447_);
lean_dec(v___y_1442_);
lean_dec_ref(v___y_1439_);
lean_dec_ref(v___y_1437_);
v_a_1573_ = lean_ctor_get(v___x_1498_, 0);
v_isSharedCheck_1580_ = !lean_is_exclusive(v___x_1498_);
if (v_isSharedCheck_1580_ == 0)
{
v___x_1575_ = v___x_1498_;
v_isShared_1576_ = v_isSharedCheck_1580_;
goto v_resetjp_1574_;
}
else
{
lean_inc(v_a_1573_);
lean_dec(v___x_1498_);
v___x_1575_ = lean_box(0);
v_isShared_1576_ = v_isSharedCheck_1580_;
goto v_resetjp_1574_;
}
v_resetjp_1574_:
{
lean_object* v___x_1578_; 
if (v_isShared_1576_ == 0)
{
v___x_1578_ = v___x_1575_;
goto v_reusejp_1577_;
}
else
{
lean_object* v_reuseFailAlloc_1579_; 
v_reuseFailAlloc_1579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1579_, 0, v_a_1573_);
v___x_1578_ = v_reuseFailAlloc_1579_;
goto v_reusejp_1577_;
}
v_reusejp_1577_:
{
return v___x_1578_;
}
}
}
}
else
{
lean_object* v_a_1581_; lean_object* v___x_1583_; uint8_t v_isShared_1584_; uint8_t v_isSharedCheck_1588_; 
lean_dec_ref(v___x_1491_);
lean_del_object(v___x_1487_);
lean_dec(v_snd_1485_);
lean_dec(v_fst_1484_);
lean_del_object(v___x_1482_);
lean_del_object(v___x_1478_);
lean_dec(v_snd_1472_);
lean_dec(v_fst_1471_);
lean_del_object(v___x_1468_);
lean_dec(v_fst_1461_);
lean_dec(v_fst_1454_);
lean_dec_ref(v___y_1447_);
lean_dec(v___y_1442_);
lean_dec_ref(v___y_1439_);
lean_dec_ref(v___y_1437_);
v_a_1581_ = lean_ctor_get(v___x_1494_, 0);
v_isSharedCheck_1588_ = !lean_is_exclusive(v___x_1494_);
if (v_isSharedCheck_1588_ == 0)
{
v___x_1583_ = v___x_1494_;
v_isShared_1584_ = v_isSharedCheck_1588_;
goto v_resetjp_1582_;
}
else
{
lean_inc(v_a_1581_);
lean_dec(v___x_1494_);
v___x_1583_ = lean_box(0);
v_isShared_1584_ = v_isSharedCheck_1588_;
goto v_resetjp_1582_;
}
v_resetjp_1582_:
{
lean_object* v___x_1586_; 
if (v_isShared_1584_ == 0)
{
v___x_1586_ = v___x_1583_;
goto v_reusejp_1585_;
}
else
{
lean_object* v_reuseFailAlloc_1587_; 
v_reuseFailAlloc_1587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1587_, 0, v_a_1581_);
v___x_1586_ = v_reuseFailAlloc_1587_;
goto v_reusejp_1585_;
}
v_reusejp_1585_:
{
return v___x_1586_;
}
}
}
}
}
}
}
else
{
lean_dec(v_snd_1472_);
lean_dec(v_fst_1471_);
lean_del_object(v___x_1468_);
lean_dec(v_snd_1462_);
lean_dec(v_fst_1461_);
lean_dec(v_snd_1455_);
lean_dec(v_fst_1454_);
lean_dec_ref(v___y_1447_);
lean_dec(v___y_1442_);
lean_dec_ref(v___y_1439_);
lean_dec_ref(v___y_1437_);
return v___x_1475_;
}
}
else
{
lean_object* v_a_1593_; lean_object* v___x_1595_; uint8_t v_isShared_1596_; uint8_t v_isSharedCheck_1600_; 
lean_dec(v_snd_1472_);
lean_dec(v_fst_1471_);
lean_del_object(v___x_1468_);
lean_dec(v_snd_1462_);
lean_dec(v_fst_1461_);
lean_dec(v_snd_1455_);
lean_dec(v_fst_1454_);
lean_dec_ref(v___y_1447_);
lean_dec(v___y_1442_);
lean_dec_ref(v___y_1439_);
lean_dec_ref(v___y_1437_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
v_a_1593_ = lean_ctor_get(v___x_1473_, 0);
v_isSharedCheck_1600_ = !lean_is_exclusive(v___x_1473_);
if (v_isSharedCheck_1600_ == 0)
{
v___x_1595_ = v___x_1473_;
v_isShared_1596_ = v_isSharedCheck_1600_;
goto v_resetjp_1594_;
}
else
{
lean_inc(v_a_1593_);
lean_dec(v___x_1473_);
v___x_1595_ = lean_box(0);
v_isShared_1596_ = v_isSharedCheck_1600_;
goto v_resetjp_1594_;
}
v_resetjp_1594_:
{
lean_object* v___x_1598_; 
if (v_isShared_1596_ == 0)
{
v___x_1598_ = v___x_1595_;
goto v_reusejp_1597_;
}
else
{
lean_object* v_reuseFailAlloc_1599_; 
v_reuseFailAlloc_1599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1599_, 0, v_a_1593_);
v___x_1598_ = v_reuseFailAlloc_1599_;
goto v_reusejp_1597_;
}
v_reusejp_1597_:
{
return v___x_1598_;
}
}
}
}
}
else
{
lean_dec(v_snd_1462_);
lean_dec(v_fst_1461_);
lean_dec(v_snd_1455_);
lean_dec(v_fst_1454_);
lean_dec_ref(v___y_1447_);
lean_dec(v___y_1442_);
lean_dec_ref(v___y_1439_);
lean_dec_ref(v___y_1437_);
lean_dec_ref(v_f_794_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
return v___x_1465_;
}
}
else
{
lean_object* v_a_1602_; lean_object* v___x_1604_; uint8_t v_isShared_1605_; uint8_t v_isSharedCheck_1609_; 
lean_dec(v_snd_1462_);
lean_dec(v_fst_1461_);
lean_dec(v_snd_1455_);
lean_dec(v_fst_1454_);
lean_dec_ref(v___y_1447_);
lean_dec(v___y_1442_);
lean_dec_ref(v___y_1439_);
lean_dec_ref(v___y_1437_);
lean_dec_ref(v_f_794_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
v_a_1602_ = lean_ctor_get(v___x_1463_, 0);
v_isSharedCheck_1609_ = !lean_is_exclusive(v___x_1463_);
if (v_isSharedCheck_1609_ == 0)
{
v___x_1604_ = v___x_1463_;
v_isShared_1605_ = v_isSharedCheck_1609_;
goto v_resetjp_1603_;
}
else
{
lean_inc(v_a_1602_);
lean_dec(v___x_1463_);
v___x_1604_ = lean_box(0);
v_isShared_1605_ = v_isSharedCheck_1609_;
goto v_resetjp_1603_;
}
v_resetjp_1603_:
{
lean_object* v___x_1607_; 
if (v_isShared_1605_ == 0)
{
v___x_1607_ = v___x_1604_;
goto v_reusejp_1606_;
}
else
{
lean_object* v_reuseFailAlloc_1608_; 
v_reuseFailAlloc_1608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1608_, 0, v_a_1602_);
v___x_1607_ = v_reuseFailAlloc_1608_;
goto v_reusejp_1606_;
}
v_reusejp_1606_:
{
return v___x_1607_;
}
}
}
}
else
{
lean_dec(v_snd_1455_);
lean_dec(v_fst_1454_);
lean_dec_ref(v___y_1447_);
lean_dec(v___y_1442_);
lean_dec_ref(v___y_1439_);
lean_dec_ref(v___y_1437_);
lean_dec_ref(v_f_794_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
return v___x_1458_;
}
}
else
{
lean_object* v_a_1610_; lean_object* v___x_1612_; uint8_t v_isShared_1613_; uint8_t v_isSharedCheck_1617_; 
lean_dec(v_snd_1455_);
lean_dec(v_fst_1454_);
lean_dec_ref(v___y_1447_);
lean_dec(v___y_1442_);
lean_dec_ref(v___y_1439_);
lean_dec_ref(v___y_1437_);
lean_dec_ref(v_f_794_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
v_a_1610_ = lean_ctor_get(v___x_1456_, 0);
v_isSharedCheck_1617_ = !lean_is_exclusive(v___x_1456_);
if (v_isSharedCheck_1617_ == 0)
{
v___x_1612_ = v___x_1456_;
v_isShared_1613_ = v_isSharedCheck_1617_;
goto v_resetjp_1611_;
}
else
{
lean_inc(v_a_1610_);
lean_dec(v___x_1456_);
v___x_1612_ = lean_box(0);
v_isShared_1613_ = v_isSharedCheck_1617_;
goto v_resetjp_1611_;
}
v_resetjp_1611_:
{
lean_object* v___x_1615_; 
if (v_isShared_1613_ == 0)
{
v___x_1615_ = v___x_1612_;
goto v_reusejp_1614_;
}
else
{
lean_object* v_reuseFailAlloc_1616_; 
v_reuseFailAlloc_1616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1616_, 0, v_a_1610_);
v___x_1615_ = v_reuseFailAlloc_1616_;
goto v_reusejp_1614_;
}
v_reusejp_1614_:
{
return v___x_1615_;
}
}
}
}
else
{
lean_dec_ref(v___y_1447_);
lean_dec(v___y_1442_);
lean_dec_ref(v___y_1439_);
lean_dec_ref(v___y_1437_);
lean_dec_ref(v_f_794_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
return v___x_1451_;
}
}
else
{
lean_object* v_a_1618_; lean_object* v___x_1620_; uint8_t v_isShared_1621_; uint8_t v_isSharedCheck_1625_; 
lean_dec_ref(v___y_1447_);
lean_dec(v___y_1442_);
lean_dec_ref(v___y_1439_);
lean_dec_ref(v___y_1437_);
lean_dec_ref(v_f_794_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
v_a_1618_ = lean_ctor_get(v___x_1449_, 0);
v_isSharedCheck_1625_ = !lean_is_exclusive(v___x_1449_);
if (v_isSharedCheck_1625_ == 0)
{
v___x_1620_ = v___x_1449_;
v_isShared_1621_ = v_isSharedCheck_1625_;
goto v_resetjp_1619_;
}
else
{
lean_inc(v_a_1618_);
lean_dec(v___x_1449_);
v___x_1620_ = lean_box(0);
v_isShared_1621_ = v_isSharedCheck_1625_;
goto v_resetjp_1619_;
}
v_resetjp_1619_:
{
lean_object* v___x_1623_; 
if (v_isShared_1621_ == 0)
{
v___x_1623_ = v___x_1620_;
goto v_reusejp_1622_;
}
else
{
lean_object* v_reuseFailAlloc_1624_; 
v_reuseFailAlloc_1624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1624_, 0, v_a_1618_);
v___x_1623_ = v_reuseFailAlloc_1624_;
goto v_reusejp_1622_;
}
v_reusejp_1622_:
{
return v___x_1623_;
}
}
}
}
v___jp_1626_:
{
lean_object* v___x_1640_; 
lean_inc_ref(v_f_794_);
v___x_1640_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0(v_f_794_, v___y_1634_, v___y_1637_, v___y_1630_, v___y_1633_, v___y_1627_, v___y_1635_, v___y_1638_);
if (lean_obj_tag(v___x_1640_) == 0)
{
lean_object* v_a_1641_; lean_object* v___x_1642_; 
v_a_1641_ = lean_ctor_get(v___x_1640_, 0);
lean_inc(v_a_1641_);
lean_dec_ref_known(v___x_1640_, 1);
lean_inc_ref(v_vars_793_);
lean_inc_ref(v_sorts_792_);
v___x_1642_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize(v_expand_791_, v_sorts_792_, v_vars_793_, v_a_1641_, v___y_1629_, v___y_1637_, v___y_1630_, v___y_1633_, v___y_1627_, v___y_1635_, v___y_1638_);
if (lean_obj_tag(v___x_1642_) == 0)
{
lean_object* v_a_1643_; lean_object* v_snd_1644_; lean_object* v_fst_1645_; lean_object* v_snd_1646_; lean_object* v___x_1647_; 
v_a_1643_ = lean_ctor_get(v___x_1642_, 0);
lean_inc(v_a_1643_);
lean_dec_ref_known(v___x_1642_, 1);
v_snd_1644_ = lean_ctor_get(v_a_1643_, 1);
lean_inc(v_snd_1644_);
lean_dec(v_a_1643_);
v_fst_1645_ = lean_ctor_get(v_snd_1644_, 0);
lean_inc(v_fst_1645_);
v_snd_1646_ = lean_ctor_get(v_snd_1644_, 1);
lean_inc(v_snd_1646_);
lean_dec(v_snd_1644_);
lean_inc_ref(v_f_794_);
v___x_1647_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0(v_f_794_, v___y_1632_, v___y_1637_, v___y_1630_, v___y_1633_, v___y_1627_, v___y_1635_, v___y_1638_);
if (lean_obj_tag(v___x_1647_) == 0)
{
lean_object* v_a_1648_; lean_object* v___x_1649_; 
v_a_1648_ = lean_ctor_get(v___x_1647_, 0);
lean_inc(v_a_1648_);
lean_dec_ref_known(v___x_1647_, 1);
lean_inc_ref(v_vars_793_);
lean_inc_ref(v_sorts_792_);
v___x_1649_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize(v_expand_791_, v_sorts_792_, v_vars_793_, v_a_1648_, v___x_1395_, v___y_1637_, v___y_1630_, v___y_1633_, v___y_1627_, v___y_1635_, v___y_1638_);
if (lean_obj_tag(v___x_1649_) == 0)
{
lean_object* v_a_1650_; lean_object* v___x_1652_; uint8_t v_isShared_1653_; uint8_t v_isSharedCheck_1884_; 
v_a_1650_ = lean_ctor_get(v___x_1649_, 0);
v_isSharedCheck_1884_ = !lean_is_exclusive(v___x_1649_);
if (v_isSharedCheck_1884_ == 0)
{
v___x_1652_ = v___x_1649_;
v_isShared_1653_ = v_isSharedCheck_1884_;
goto v_resetjp_1651_;
}
else
{
lean_inc(v_a_1650_);
lean_dec(v___x_1649_);
v___x_1652_ = lean_box(0);
v_isShared_1653_ = v_isSharedCheck_1884_;
goto v_resetjp_1651_;
}
v_resetjp_1651_:
{
lean_object* v_snd_1654_; lean_object* v_fst_1655_; lean_object* v_snd_1656_; lean_object* v___x_1657_; 
v_snd_1654_ = lean_ctor_get(v_a_1650_, 1);
lean_inc(v_snd_1654_);
lean_dec(v_a_1650_);
v_fst_1655_ = lean_ctor_get(v_snd_1654_, 0);
lean_inc(v_fst_1655_);
v_snd_1656_ = lean_ctor_get(v_snd_1654_, 1);
lean_inc(v_snd_1656_);
lean_dec(v_snd_1654_);
lean_inc_ref(v_f_794_);
v___x_1657_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0(v_f_794_, v___y_1632_, v___y_1637_, v___y_1630_, v___y_1633_, v___y_1627_, v___y_1635_, v___y_1638_);
if (lean_obj_tag(v___x_1657_) == 0)
{
lean_object* v_a_1658_; lean_object* v___x_1659_; 
v_a_1658_ = lean_ctor_get(v___x_1657_, 0);
lean_inc(v_a_1658_);
lean_dec_ref_known(v___x_1657_, 1);
lean_inc_ref(v_vars_793_);
lean_inc_ref(v_sorts_792_);
v___x_1659_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize(v_expand_791_, v_sorts_792_, v_vars_793_, v_a_1658_, v___y_1629_, v___y_1637_, v___y_1630_, v___y_1633_, v___y_1627_, v___y_1635_, v___y_1638_);
if (lean_obj_tag(v___x_1659_) == 0)
{
lean_object* v_a_1660_; lean_object* v___x_1662_; uint8_t v_isShared_1663_; uint8_t v_isSharedCheck_1875_; 
v_a_1660_ = lean_ctor_get(v___x_1659_, 0);
v_isSharedCheck_1875_ = !lean_is_exclusive(v___x_1659_);
if (v_isSharedCheck_1875_ == 0)
{
v___x_1662_ = v___x_1659_;
v_isShared_1663_ = v_isSharedCheck_1875_;
goto v_resetjp_1661_;
}
else
{
lean_inc(v_a_1660_);
lean_dec(v___x_1659_);
v___x_1662_ = lean_box(0);
v_isShared_1663_ = v_isSharedCheck_1875_;
goto v_resetjp_1661_;
}
v_resetjp_1661_:
{
lean_object* v_snd_1664_; lean_object* v_fst_1665_; lean_object* v_snd_1666_; lean_object* v___x_1667_; 
v_snd_1664_ = lean_ctor_get(v_a_1660_, 1);
lean_inc(v_snd_1664_);
lean_dec(v_a_1660_);
v_fst_1665_ = lean_ctor_get(v_snd_1664_, 0);
lean_inc(v_fst_1665_);
v_snd_1666_ = lean_ctor_get(v_snd_1664_, 1);
lean_inc(v_snd_1666_);
lean_dec(v_snd_1664_);
v___x_1667_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0(v_f_794_, v___y_1634_, v___y_1637_, v___y_1630_, v___y_1633_, v___y_1627_, v___y_1635_, v___y_1638_);
lean_dec(v___y_1634_);
if (lean_obj_tag(v___x_1667_) == 0)
{
lean_object* v_a_1668_; lean_object* v___x_1669_; 
v_a_1668_ = lean_ctor_get(v___x_1667_, 0);
lean_inc(v_a_1668_);
lean_dec_ref_known(v___x_1667_, 1);
v___x_1669_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize(v_expand_791_, v_sorts_792_, v_vars_793_, v_a_1668_, v___x_1395_, v___y_1637_, v___y_1630_, v___y_1633_, v___y_1627_, v___y_1635_, v___y_1638_);
if (lean_obj_tag(v___x_1669_) == 0)
{
lean_object* v_a_1670_; lean_object* v___x_1672_; uint8_t v_isShared_1673_; uint8_t v_isSharedCheck_1866_; 
v_a_1670_ = lean_ctor_get(v___x_1669_, 0);
v_isSharedCheck_1866_ = !lean_is_exclusive(v___x_1669_);
if (v_isSharedCheck_1866_ == 0)
{
v___x_1672_ = v___x_1669_;
v_isShared_1673_ = v_isSharedCheck_1866_;
goto v_resetjp_1671_;
}
else
{
lean_inc(v_a_1670_);
lean_dec(v___x_1669_);
v___x_1672_ = lean_box(0);
v_isShared_1673_ = v_isSharedCheck_1866_;
goto v_resetjp_1671_;
}
v_resetjp_1671_:
{
lean_object* v_snd_1674_; lean_object* v___x_1676_; uint8_t v_isShared_1677_; uint8_t v_isSharedCheck_1864_; 
v_snd_1674_ = lean_ctor_get(v_a_1670_, 1);
v_isSharedCheck_1864_ = !lean_is_exclusive(v_a_1670_);
if (v_isSharedCheck_1864_ == 0)
{
lean_object* v_unused_1865_; 
v_unused_1865_ = lean_ctor_get(v_a_1670_, 0);
lean_dec(v_unused_1865_);
v___x_1676_ = v_a_1670_;
v_isShared_1677_ = v_isSharedCheck_1864_;
goto v_resetjp_1675_;
}
else
{
lean_inc(v_snd_1674_);
lean_dec(v_a_1670_);
v___x_1676_ = lean_box(0);
v_isShared_1677_ = v_isSharedCheck_1864_;
goto v_resetjp_1675_;
}
v_resetjp_1675_:
{
lean_object* v_fst_1678_; lean_object* v_snd_1679_; lean_object* v___x_1681_; uint8_t v_isShared_1682_; uint8_t v_isSharedCheck_1863_; 
v_fst_1678_ = lean_ctor_get(v_snd_1674_, 0);
v_snd_1679_ = lean_ctor_get(v_snd_1674_, 1);
v_isSharedCheck_1863_ = !lean_is_exclusive(v_snd_1674_);
if (v_isSharedCheck_1863_ == 0)
{
v___x_1681_ = v_snd_1674_;
v_isShared_1682_ = v_isSharedCheck_1863_;
goto v_resetjp_1680_;
}
else
{
lean_inc(v_snd_1679_);
lean_inc(v_fst_1678_);
lean_dec(v_snd_1674_);
v___x_1681_ = lean_box(0);
v_isShared_1682_ = v_isSharedCheck_1863_;
goto v_resetjp_1680_;
}
v_resetjp_1680_:
{
lean_object* v___x_1683_; lean_object* v___x_1685_; 
v___x_1683_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__52));
lean_inc_ref(v___y_1639_);
if (v_isShared_1673_ == 0)
{
lean_ctor_set_tag(v___x_1672_, 1);
lean_ctor_set(v___x_1672_, 0, v___y_1639_);
v___x_1685_ = v___x_1672_;
goto v_reusejp_1684_;
}
else
{
lean_object* v_reuseFailAlloc_1862_; 
v_reuseFailAlloc_1862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1862_, 0, v___y_1639_);
v___x_1685_ = v_reuseFailAlloc_1862_;
goto v_reusejp_1684_;
}
v_reusejp_1684_:
{
lean_object* v___x_1687_; 
lean_inc_ref(v___y_1631_);
if (v_isShared_1663_ == 0)
{
lean_ctor_set_tag(v___x_1662_, 1);
lean_ctor_set(v___x_1662_, 0, v___y_1631_);
v___x_1687_ = v___x_1662_;
goto v_reusejp_1686_;
}
else
{
lean_object* v_reuseFailAlloc_1861_; 
v_reuseFailAlloc_1861_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1861_, 0, v___y_1631_);
v___x_1687_ = v_reuseFailAlloc_1861_;
goto v_reusejp_1686_;
}
v_reusejp_1686_:
{
lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; 
v___x_1688_ = lean_unsigned_to_nat(2u);
v___x_1689_ = lean_mk_empty_array_with_capacity(v___x_1688_);
lean_inc_ref(v___x_1689_);
v___x_1690_ = lean_array_push(v___x_1689_, v___x_1685_);
v___x_1691_ = lean_array_push(v___x_1690_, v___x_1687_);
v___x_1692_ = l_Lean_Meta_mkAppOptM(v___x_1683_, v___x_1691_, v___y_1633_, v___y_1627_, v___y_1635_, v___y_1638_);
if (lean_obj_tag(v___x_1692_) == 0)
{
lean_object* v_a_1693_; lean_object* v___x_1694_; 
v_a_1693_ = lean_ctor_get(v___x_1692_, 0);
lean_inc(v_a_1693_);
lean_dec_ref_known(v___x_1692_, 1);
lean_inc_ref(v___y_1631_);
lean_inc_ref(v___y_1639_);
v___x_1694_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg(v___y_1639_, v___y_1631_, v___y_1633_, v___y_1627_, v___y_1635_, v___y_1638_);
if (lean_obj_tag(v___x_1694_) == 0)
{
lean_object* v_a_1695_; lean_object* v___x_1696_; 
v_a_1695_ = lean_ctor_get(v___x_1694_, 0);
lean_inc(v_a_1695_);
lean_dec_ref_known(v___x_1694_, 1);
lean_inc_ref(v___y_1639_);
lean_inc_ref(v___y_1631_);
v___x_1696_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_impIffNotOr___redArg(v___y_1631_, v___y_1639_, v___y_1633_, v___y_1627_, v___y_1635_, v___y_1638_);
if (lean_obj_tag(v___x_1696_) == 0)
{
lean_object* v_a_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; 
v_a_1697_ = lean_ctor_get(v___x_1696_, 0);
lean_inc(v_a_1697_);
lean_dec_ref_known(v___x_1696_, 1);
v___x_1698_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__5));
lean_inc_ref(v___x_1689_);
v___x_1699_ = lean_array_push(v___x_1689_, v_a_1695_);
v___x_1700_ = lean_array_push(v___x_1699_, v_a_1697_);
v___x_1701_ = l_Lean_Meta_mkAppM(v___x_1698_, v___x_1700_, v___y_1633_, v___y_1627_, v___y_1635_, v___y_1638_);
if (lean_obj_tag(v___x_1701_) == 0)
{
lean_object* v_a_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; 
v_a_1702_ = lean_ctor_get(v___x_1701_, 0);
lean_inc(v_a_1702_);
lean_dec_ref_known(v___x_1701_, 1);
v___x_1703_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__3));
lean_inc_ref(v___y_1636_);
v___x_1704_ = l_Lean_Name_mkStr2(v___y_1636_, v___x_1703_);
lean_inc_ref(v___x_1689_);
v___x_1705_ = lean_array_push(v___x_1689_, v_a_1693_);
v___x_1706_ = lean_array_push(v___x_1705_, v_a_1702_);
lean_inc(v___x_1704_);
v___x_1707_ = l_Lean_Meta_mkAppM(v___x_1704_, v___x_1706_, v___y_1633_, v___y_1627_, v___y_1635_, v___y_1638_);
if (lean_obj_tag(v___x_1707_) == 0)
{
lean_object* v_a_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; 
v_a_1708_ = lean_ctor_get(v___x_1707_, 0);
lean_inc(v_a_1708_);
lean_dec_ref_known(v___x_1707_, 1);
v___x_1709_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__13));
lean_inc_ref(v___x_1689_);
v___x_1710_ = lean_array_push(v___x_1689_, v_snd_1646_);
v___x_1711_ = lean_array_push(v___x_1710_, v_snd_1656_);
v___x_1712_ = l_Lean_Meta_mkAppM(v___x_1709_, v___x_1711_, v___y_1633_, v___y_1627_, v___y_1635_, v___y_1638_);
if (lean_obj_tag(v___x_1712_) == 0)
{
lean_object* v_a_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; 
v_a_1713_ = lean_ctor_get(v___x_1712_, 0);
lean_inc(v_a_1713_);
lean_dec_ref_known(v___x_1712_, 1);
lean_inc_ref(v___x_1689_);
v___x_1714_ = lean_array_push(v___x_1689_, v_snd_1666_);
v___x_1715_ = lean_array_push(v___x_1714_, v_snd_1679_);
v___x_1716_ = l_Lean_Meta_mkAppM(v___x_1709_, v___x_1715_, v___y_1633_, v___y_1627_, v___y_1635_, v___y_1638_);
if (lean_obj_tag(v___x_1716_) == 0)
{
lean_object* v_a_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; 
v_a_1717_ = lean_ctor_get(v___x_1716_, 0);
lean_inc(v_a_1717_);
lean_dec_ref_known(v___x_1716_, 1);
lean_inc_ref(v___x_1689_);
v___x_1718_ = lean_array_push(v___x_1689_, v_a_1713_);
v___x_1719_ = lean_array_push(v___x_1718_, v_a_1717_);
v___x_1720_ = l_Lean_Meta_mkAppM(v___x_1698_, v___x_1719_, v___y_1633_, v___y_1627_, v___y_1635_, v___y_1638_);
if (lean_obj_tag(v___x_1720_) == 0)
{
lean_object* v_a_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; 
v_a_1721_ = lean_ctor_get(v___x_1720_, 0);
lean_inc(v_a_1721_);
lean_dec_ref_known(v___x_1720_, 1);
lean_inc_ref(v___x_1689_);
v___x_1722_ = lean_array_push(v___x_1689_, v_a_1708_);
v___x_1723_ = lean_array_push(v___x_1722_, v_a_1721_);
lean_inc(v___x_1704_);
v___x_1724_ = l_Lean_Meta_mkAppM(v___x_1704_, v___x_1723_, v___y_1633_, v___y_1627_, v___y_1635_, v___y_1638_);
if (lean_obj_tag(v___x_1724_) == 0)
{
lean_object* v_a_1725_; lean_object* v___x_1727_; uint8_t v_isShared_1728_; uint8_t v_isSharedCheck_1788_; 
v_a_1725_ = lean_ctor_get(v___x_1724_, 0);
v_isSharedCheck_1788_ = !lean_is_exclusive(v___x_1724_);
if (v_isSharedCheck_1788_ == 0)
{
v___x_1727_ = v___x_1724_;
v_isShared_1728_ = v_isSharedCheck_1788_;
goto v_resetjp_1726_;
}
else
{
lean_inc(v_a_1725_);
lean_dec(v___x_1724_);
v___x_1727_ = lean_box(0);
v_isShared_1728_ = v_isSharedCheck_1788_;
goto v_resetjp_1726_;
}
v_resetjp_1726_:
{
lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; 
v___x_1729_ = lean_box(0);
v___x_1730_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__46, &lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__46_once, _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__46);
v___x_1731_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__47, &lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__47_once, _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__47);
v___x_1732_ = l_Lean_mkAppB(v___x_1731_, v_fst_1645_, v_fst_1655_);
v___x_1733_ = l_Lean_mkAppB(v___x_1731_, v_fst_1665_, v_fst_1678_);
v___x_1734_ = l_Lean_mkAppB(v___x_1730_, v___x_1732_, v___x_1733_);
if (v_polarity_795_ == 0)
{
lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1740_; 
lean_del_object(v___x_1727_);
v___x_1735_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__49));
lean_inc_ref(v___y_1636_);
v___x_1736_ = l_Lean_Name_mkStr1(v___y_1636_);
v___x_1737_ = l_Lean_Expr_const___override(v___x_1736_, v___x_1729_);
v___x_1738_ = l_Lean_mkAppB(v___x_1737_, v___y_1639_, v___y_1631_);
if (v_isShared_1653_ == 0)
{
lean_ctor_set_tag(v___x_1652_, 1);
lean_ctor_set(v___x_1652_, 0, v___x_1738_);
v___x_1740_ = v___x_1652_;
goto v_reusejp_1739_;
}
else
{
lean_object* v_reuseFailAlloc_1778_; 
v_reuseFailAlloc_1778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1778_, 0, v___x_1738_);
v___x_1740_ = v_reuseFailAlloc_1778_;
goto v_reusejp_1739_;
}
v_reusejp_1739_:
{
lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; 
v___x_1741_ = lean_mk_empty_array_with_capacity(v___y_1632_);
v___x_1742_ = lean_array_push(v___x_1741_, v___x_1740_);
v___x_1743_ = l_Lean_Meta_mkAppOptM(v___x_1735_, v___x_1742_, v___y_1633_, v___y_1627_, v___y_1635_, v___y_1638_);
if (lean_obj_tag(v___x_1743_) == 0)
{
lean_object* v_a_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; 
v_a_1744_ = lean_ctor_get(v___x_1743_, 0);
lean_inc(v_a_1744_);
lean_dec_ref_known(v___x_1743_, 1);
v___x_1745_ = lean_array_push(v___x_1689_, v_a_1744_);
v___x_1746_ = lean_array_push(v___x_1745_, v_a_1725_);
v___x_1747_ = l_Lean_Meta_mkAppM(v___x_1704_, v___x_1746_, v___y_1633_, v___y_1627_, v___y_1635_, v___y_1638_);
if (lean_obj_tag(v___x_1747_) == 0)
{
lean_object* v_a_1748_; lean_object* v___x_1750_; uint8_t v_isShared_1751_; uint8_t v_isSharedCheck_1761_; 
v_a_1748_ = lean_ctor_get(v___x_1747_, 0);
v_isSharedCheck_1761_ = !lean_is_exclusive(v___x_1747_);
if (v_isSharedCheck_1761_ == 0)
{
v___x_1750_ = v___x_1747_;
v_isShared_1751_ = v_isSharedCheck_1761_;
goto v_resetjp_1749_;
}
else
{
lean_inc(v_a_1748_);
lean_dec(v___x_1747_);
v___x_1750_ = lean_box(0);
v_isShared_1751_ = v_isSharedCheck_1761_;
goto v_resetjp_1749_;
}
v_resetjp_1749_:
{
lean_object* v___x_1753_; 
if (v_isShared_1682_ == 0)
{
lean_ctor_set(v___x_1681_, 1, v_a_1748_);
lean_ctor_set(v___x_1681_, 0, v___x_1734_);
v___x_1753_ = v___x_1681_;
goto v_reusejp_1752_;
}
else
{
lean_object* v_reuseFailAlloc_1760_; 
v_reuseFailAlloc_1760_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1760_, 0, v___x_1734_);
lean_ctor_set(v_reuseFailAlloc_1760_, 1, v_a_1748_);
v___x_1753_ = v_reuseFailAlloc_1760_;
goto v_reusejp_1752_;
}
v_reusejp_1752_:
{
lean_object* v___x_1755_; 
if (v_isShared_1677_ == 0)
{
lean_ctor_set(v___x_1676_, 1, v___x_1753_);
lean_ctor_set(v___x_1676_, 0, v___y_1628_);
v___x_1755_ = v___x_1676_;
goto v_reusejp_1754_;
}
else
{
lean_object* v_reuseFailAlloc_1759_; 
v_reuseFailAlloc_1759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1759_, 0, v___y_1628_);
lean_ctor_set(v_reuseFailAlloc_1759_, 1, v___x_1753_);
v___x_1755_ = v_reuseFailAlloc_1759_;
goto v_reusejp_1754_;
}
v_reusejp_1754_:
{
lean_object* v___x_1757_; 
if (v_isShared_1751_ == 0)
{
lean_ctor_set(v___x_1750_, 0, v___x_1755_);
v___x_1757_ = v___x_1750_;
goto v_reusejp_1756_;
}
else
{
lean_object* v_reuseFailAlloc_1758_; 
v_reuseFailAlloc_1758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1758_, 0, v___x_1755_);
v___x_1757_ = v_reuseFailAlloc_1758_;
goto v_reusejp_1756_;
}
v_reusejp_1756_:
{
return v___x_1757_;
}
}
}
}
}
else
{
lean_object* v_a_1762_; lean_object* v___x_1764_; uint8_t v_isShared_1765_; uint8_t v_isSharedCheck_1769_; 
lean_dec_ref(v___x_1734_);
lean_del_object(v___x_1681_);
lean_del_object(v___x_1676_);
lean_dec_ref(v___y_1628_);
v_a_1762_ = lean_ctor_get(v___x_1747_, 0);
v_isSharedCheck_1769_ = !lean_is_exclusive(v___x_1747_);
if (v_isSharedCheck_1769_ == 0)
{
v___x_1764_ = v___x_1747_;
v_isShared_1765_ = v_isSharedCheck_1769_;
goto v_resetjp_1763_;
}
else
{
lean_inc(v_a_1762_);
lean_dec(v___x_1747_);
v___x_1764_ = lean_box(0);
v_isShared_1765_ = v_isSharedCheck_1769_;
goto v_resetjp_1763_;
}
v_resetjp_1763_:
{
lean_object* v___x_1767_; 
if (v_isShared_1765_ == 0)
{
v___x_1767_ = v___x_1764_;
goto v_reusejp_1766_;
}
else
{
lean_object* v_reuseFailAlloc_1768_; 
v_reuseFailAlloc_1768_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1768_, 0, v_a_1762_);
v___x_1767_ = v_reuseFailAlloc_1768_;
goto v_reusejp_1766_;
}
v_reusejp_1766_:
{
return v___x_1767_;
}
}
}
}
else
{
lean_object* v_a_1770_; lean_object* v___x_1772_; uint8_t v_isShared_1773_; uint8_t v_isSharedCheck_1777_; 
lean_dec_ref(v___x_1734_);
lean_dec(v_a_1725_);
lean_dec(v___x_1704_);
lean_dec_ref(v___x_1689_);
lean_del_object(v___x_1681_);
lean_del_object(v___x_1676_);
lean_dec_ref(v___y_1628_);
v_a_1770_ = lean_ctor_get(v___x_1743_, 0);
v_isSharedCheck_1777_ = !lean_is_exclusive(v___x_1743_);
if (v_isSharedCheck_1777_ == 0)
{
v___x_1772_ = v___x_1743_;
v_isShared_1773_ = v_isSharedCheck_1777_;
goto v_resetjp_1771_;
}
else
{
lean_inc(v_a_1770_);
lean_dec(v___x_1743_);
v___x_1772_ = lean_box(0);
v_isShared_1773_ = v_isSharedCheck_1777_;
goto v_resetjp_1771_;
}
v_resetjp_1771_:
{
lean_object* v___x_1775_; 
if (v_isShared_1773_ == 0)
{
v___x_1775_ = v___x_1772_;
goto v_reusejp_1774_;
}
else
{
lean_object* v_reuseFailAlloc_1776_; 
v_reuseFailAlloc_1776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1776_, 0, v_a_1770_);
v___x_1775_ = v_reuseFailAlloc_1776_;
goto v_reusejp_1774_;
}
v_reusejp_1774_:
{
return v___x_1775_;
}
}
}
}
}
else
{
lean_object* v___x_1780_; 
lean_dec(v___x_1704_);
lean_dec_ref(v___x_1689_);
lean_del_object(v___x_1652_);
lean_dec_ref(v___y_1639_);
lean_dec_ref(v___y_1631_);
if (v_isShared_1682_ == 0)
{
lean_ctor_set(v___x_1681_, 1, v_a_1725_);
lean_ctor_set(v___x_1681_, 0, v___x_1734_);
v___x_1780_ = v___x_1681_;
goto v_reusejp_1779_;
}
else
{
lean_object* v_reuseFailAlloc_1787_; 
v_reuseFailAlloc_1787_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1787_, 0, v___x_1734_);
lean_ctor_set(v_reuseFailAlloc_1787_, 1, v_a_1725_);
v___x_1780_ = v_reuseFailAlloc_1787_;
goto v_reusejp_1779_;
}
v_reusejp_1779_:
{
lean_object* v___x_1782_; 
if (v_isShared_1677_ == 0)
{
lean_ctor_set(v___x_1676_, 1, v___x_1780_);
lean_ctor_set(v___x_1676_, 0, v___y_1628_);
v___x_1782_ = v___x_1676_;
goto v_reusejp_1781_;
}
else
{
lean_object* v_reuseFailAlloc_1786_; 
v_reuseFailAlloc_1786_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1786_, 0, v___y_1628_);
lean_ctor_set(v_reuseFailAlloc_1786_, 1, v___x_1780_);
v___x_1782_ = v_reuseFailAlloc_1786_;
goto v_reusejp_1781_;
}
v_reusejp_1781_:
{
lean_object* v___x_1784_; 
if (v_isShared_1728_ == 0)
{
lean_ctor_set(v___x_1727_, 0, v___x_1782_);
v___x_1784_ = v___x_1727_;
goto v_reusejp_1783_;
}
else
{
lean_object* v_reuseFailAlloc_1785_; 
v_reuseFailAlloc_1785_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1785_, 0, v___x_1782_);
v___x_1784_ = v_reuseFailAlloc_1785_;
goto v_reusejp_1783_;
}
v_reusejp_1783_:
{
return v___x_1784_;
}
}
}
}
}
}
else
{
lean_object* v_a_1789_; lean_object* v___x_1791_; uint8_t v_isShared_1792_; uint8_t v_isSharedCheck_1796_; 
lean_dec(v___x_1704_);
lean_dec_ref(v___x_1689_);
lean_del_object(v___x_1681_);
lean_dec(v_fst_1678_);
lean_del_object(v___x_1676_);
lean_dec(v_fst_1665_);
lean_dec(v_fst_1655_);
lean_del_object(v___x_1652_);
lean_dec(v_fst_1645_);
lean_dec_ref(v___y_1639_);
lean_dec_ref(v___y_1631_);
lean_dec_ref(v___y_1628_);
v_a_1789_ = lean_ctor_get(v___x_1724_, 0);
v_isSharedCheck_1796_ = !lean_is_exclusive(v___x_1724_);
if (v_isSharedCheck_1796_ == 0)
{
v___x_1791_ = v___x_1724_;
v_isShared_1792_ = v_isSharedCheck_1796_;
goto v_resetjp_1790_;
}
else
{
lean_inc(v_a_1789_);
lean_dec(v___x_1724_);
v___x_1791_ = lean_box(0);
v_isShared_1792_ = v_isSharedCheck_1796_;
goto v_resetjp_1790_;
}
v_resetjp_1790_:
{
lean_object* v___x_1794_; 
if (v_isShared_1792_ == 0)
{
v___x_1794_ = v___x_1791_;
goto v_reusejp_1793_;
}
else
{
lean_object* v_reuseFailAlloc_1795_; 
v_reuseFailAlloc_1795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1795_, 0, v_a_1789_);
v___x_1794_ = v_reuseFailAlloc_1795_;
goto v_reusejp_1793_;
}
v_reusejp_1793_:
{
return v___x_1794_;
}
}
}
}
else
{
lean_object* v_a_1797_; lean_object* v___x_1799_; uint8_t v_isShared_1800_; uint8_t v_isSharedCheck_1804_; 
lean_dec(v_a_1708_);
lean_dec(v___x_1704_);
lean_dec_ref(v___x_1689_);
lean_del_object(v___x_1681_);
lean_dec(v_fst_1678_);
lean_del_object(v___x_1676_);
lean_dec(v_fst_1665_);
lean_dec(v_fst_1655_);
lean_del_object(v___x_1652_);
lean_dec(v_fst_1645_);
lean_dec_ref(v___y_1639_);
lean_dec_ref(v___y_1631_);
lean_dec_ref(v___y_1628_);
v_a_1797_ = lean_ctor_get(v___x_1720_, 0);
v_isSharedCheck_1804_ = !lean_is_exclusive(v___x_1720_);
if (v_isSharedCheck_1804_ == 0)
{
v___x_1799_ = v___x_1720_;
v_isShared_1800_ = v_isSharedCheck_1804_;
goto v_resetjp_1798_;
}
else
{
lean_inc(v_a_1797_);
lean_dec(v___x_1720_);
v___x_1799_ = lean_box(0);
v_isShared_1800_ = v_isSharedCheck_1804_;
goto v_resetjp_1798_;
}
v_resetjp_1798_:
{
lean_object* v___x_1802_; 
if (v_isShared_1800_ == 0)
{
v___x_1802_ = v___x_1799_;
goto v_reusejp_1801_;
}
else
{
lean_object* v_reuseFailAlloc_1803_; 
v_reuseFailAlloc_1803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1803_, 0, v_a_1797_);
v___x_1802_ = v_reuseFailAlloc_1803_;
goto v_reusejp_1801_;
}
v_reusejp_1801_:
{
return v___x_1802_;
}
}
}
}
else
{
lean_object* v_a_1805_; lean_object* v___x_1807_; uint8_t v_isShared_1808_; uint8_t v_isSharedCheck_1812_; 
lean_dec(v_a_1713_);
lean_dec(v_a_1708_);
lean_dec(v___x_1704_);
lean_dec_ref(v___x_1689_);
lean_del_object(v___x_1681_);
lean_dec(v_fst_1678_);
lean_del_object(v___x_1676_);
lean_dec(v_fst_1665_);
lean_dec(v_fst_1655_);
lean_del_object(v___x_1652_);
lean_dec(v_fst_1645_);
lean_dec_ref(v___y_1639_);
lean_dec_ref(v___y_1631_);
lean_dec_ref(v___y_1628_);
v_a_1805_ = lean_ctor_get(v___x_1716_, 0);
v_isSharedCheck_1812_ = !lean_is_exclusive(v___x_1716_);
if (v_isSharedCheck_1812_ == 0)
{
v___x_1807_ = v___x_1716_;
v_isShared_1808_ = v_isSharedCheck_1812_;
goto v_resetjp_1806_;
}
else
{
lean_inc(v_a_1805_);
lean_dec(v___x_1716_);
v___x_1807_ = lean_box(0);
v_isShared_1808_ = v_isSharedCheck_1812_;
goto v_resetjp_1806_;
}
v_resetjp_1806_:
{
lean_object* v___x_1810_; 
if (v_isShared_1808_ == 0)
{
v___x_1810_ = v___x_1807_;
goto v_reusejp_1809_;
}
else
{
lean_object* v_reuseFailAlloc_1811_; 
v_reuseFailAlloc_1811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1811_, 0, v_a_1805_);
v___x_1810_ = v_reuseFailAlloc_1811_;
goto v_reusejp_1809_;
}
v_reusejp_1809_:
{
return v___x_1810_;
}
}
}
}
else
{
lean_object* v_a_1813_; lean_object* v___x_1815_; uint8_t v_isShared_1816_; uint8_t v_isSharedCheck_1820_; 
lean_dec(v_a_1708_);
lean_dec(v___x_1704_);
lean_dec_ref(v___x_1689_);
lean_del_object(v___x_1681_);
lean_dec(v_snd_1679_);
lean_dec(v_fst_1678_);
lean_del_object(v___x_1676_);
lean_dec(v_snd_1666_);
lean_dec(v_fst_1665_);
lean_dec(v_fst_1655_);
lean_del_object(v___x_1652_);
lean_dec(v_fst_1645_);
lean_dec_ref(v___y_1639_);
lean_dec_ref(v___y_1631_);
lean_dec_ref(v___y_1628_);
v_a_1813_ = lean_ctor_get(v___x_1712_, 0);
v_isSharedCheck_1820_ = !lean_is_exclusive(v___x_1712_);
if (v_isSharedCheck_1820_ == 0)
{
v___x_1815_ = v___x_1712_;
v_isShared_1816_ = v_isSharedCheck_1820_;
goto v_resetjp_1814_;
}
else
{
lean_inc(v_a_1813_);
lean_dec(v___x_1712_);
v___x_1815_ = lean_box(0);
v_isShared_1816_ = v_isSharedCheck_1820_;
goto v_resetjp_1814_;
}
v_resetjp_1814_:
{
lean_object* v___x_1818_; 
if (v_isShared_1816_ == 0)
{
v___x_1818_ = v___x_1815_;
goto v_reusejp_1817_;
}
else
{
lean_object* v_reuseFailAlloc_1819_; 
v_reuseFailAlloc_1819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1819_, 0, v_a_1813_);
v___x_1818_ = v_reuseFailAlloc_1819_;
goto v_reusejp_1817_;
}
v_reusejp_1817_:
{
return v___x_1818_;
}
}
}
}
else
{
lean_object* v_a_1821_; lean_object* v___x_1823_; uint8_t v_isShared_1824_; uint8_t v_isSharedCheck_1828_; 
lean_dec(v___x_1704_);
lean_dec_ref(v___x_1689_);
lean_del_object(v___x_1681_);
lean_dec(v_snd_1679_);
lean_dec(v_fst_1678_);
lean_del_object(v___x_1676_);
lean_dec(v_snd_1666_);
lean_dec(v_fst_1665_);
lean_dec(v_snd_1656_);
lean_dec(v_fst_1655_);
lean_del_object(v___x_1652_);
lean_dec(v_snd_1646_);
lean_dec(v_fst_1645_);
lean_dec_ref(v___y_1639_);
lean_dec_ref(v___y_1631_);
lean_dec_ref(v___y_1628_);
v_a_1821_ = lean_ctor_get(v___x_1707_, 0);
v_isSharedCheck_1828_ = !lean_is_exclusive(v___x_1707_);
if (v_isSharedCheck_1828_ == 0)
{
v___x_1823_ = v___x_1707_;
v_isShared_1824_ = v_isSharedCheck_1828_;
goto v_resetjp_1822_;
}
else
{
lean_inc(v_a_1821_);
lean_dec(v___x_1707_);
v___x_1823_ = lean_box(0);
v_isShared_1824_ = v_isSharedCheck_1828_;
goto v_resetjp_1822_;
}
v_resetjp_1822_:
{
lean_object* v___x_1826_; 
if (v_isShared_1824_ == 0)
{
v___x_1826_ = v___x_1823_;
goto v_reusejp_1825_;
}
else
{
lean_object* v_reuseFailAlloc_1827_; 
v_reuseFailAlloc_1827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1827_, 0, v_a_1821_);
v___x_1826_ = v_reuseFailAlloc_1827_;
goto v_reusejp_1825_;
}
v_reusejp_1825_:
{
return v___x_1826_;
}
}
}
}
else
{
lean_object* v_a_1829_; lean_object* v___x_1831_; uint8_t v_isShared_1832_; uint8_t v_isSharedCheck_1836_; 
lean_dec(v_a_1693_);
lean_dec_ref(v___x_1689_);
lean_del_object(v___x_1681_);
lean_dec(v_snd_1679_);
lean_dec(v_fst_1678_);
lean_del_object(v___x_1676_);
lean_dec(v_snd_1666_);
lean_dec(v_fst_1665_);
lean_dec(v_snd_1656_);
lean_dec(v_fst_1655_);
lean_del_object(v___x_1652_);
lean_dec(v_snd_1646_);
lean_dec(v_fst_1645_);
lean_dec_ref(v___y_1639_);
lean_dec_ref(v___y_1631_);
lean_dec_ref(v___y_1628_);
v_a_1829_ = lean_ctor_get(v___x_1701_, 0);
v_isSharedCheck_1836_ = !lean_is_exclusive(v___x_1701_);
if (v_isSharedCheck_1836_ == 0)
{
v___x_1831_ = v___x_1701_;
v_isShared_1832_ = v_isSharedCheck_1836_;
goto v_resetjp_1830_;
}
else
{
lean_inc(v_a_1829_);
lean_dec(v___x_1701_);
v___x_1831_ = lean_box(0);
v_isShared_1832_ = v_isSharedCheck_1836_;
goto v_resetjp_1830_;
}
v_resetjp_1830_:
{
lean_object* v___x_1834_; 
if (v_isShared_1832_ == 0)
{
v___x_1834_ = v___x_1831_;
goto v_reusejp_1833_;
}
else
{
lean_object* v_reuseFailAlloc_1835_; 
v_reuseFailAlloc_1835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1835_, 0, v_a_1829_);
v___x_1834_ = v_reuseFailAlloc_1835_;
goto v_reusejp_1833_;
}
v_reusejp_1833_:
{
return v___x_1834_;
}
}
}
}
else
{
lean_object* v_a_1837_; lean_object* v___x_1839_; uint8_t v_isShared_1840_; uint8_t v_isSharedCheck_1844_; 
lean_dec(v_a_1695_);
lean_dec(v_a_1693_);
lean_dec_ref(v___x_1689_);
lean_del_object(v___x_1681_);
lean_dec(v_snd_1679_);
lean_dec(v_fst_1678_);
lean_del_object(v___x_1676_);
lean_dec(v_snd_1666_);
lean_dec(v_fst_1665_);
lean_dec(v_snd_1656_);
lean_dec(v_fst_1655_);
lean_del_object(v___x_1652_);
lean_dec(v_snd_1646_);
lean_dec(v_fst_1645_);
lean_dec_ref(v___y_1639_);
lean_dec_ref(v___y_1631_);
lean_dec_ref(v___y_1628_);
v_a_1837_ = lean_ctor_get(v___x_1696_, 0);
v_isSharedCheck_1844_ = !lean_is_exclusive(v___x_1696_);
if (v_isSharedCheck_1844_ == 0)
{
v___x_1839_ = v___x_1696_;
v_isShared_1840_ = v_isSharedCheck_1844_;
goto v_resetjp_1838_;
}
else
{
lean_inc(v_a_1837_);
lean_dec(v___x_1696_);
v___x_1839_ = lean_box(0);
v_isShared_1840_ = v_isSharedCheck_1844_;
goto v_resetjp_1838_;
}
v_resetjp_1838_:
{
lean_object* v___x_1842_; 
if (v_isShared_1840_ == 0)
{
v___x_1842_ = v___x_1839_;
goto v_reusejp_1841_;
}
else
{
lean_object* v_reuseFailAlloc_1843_; 
v_reuseFailAlloc_1843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1843_, 0, v_a_1837_);
v___x_1842_ = v_reuseFailAlloc_1843_;
goto v_reusejp_1841_;
}
v_reusejp_1841_:
{
return v___x_1842_;
}
}
}
}
else
{
lean_object* v_a_1845_; lean_object* v___x_1847_; uint8_t v_isShared_1848_; uint8_t v_isSharedCheck_1852_; 
lean_dec(v_a_1693_);
lean_dec_ref(v___x_1689_);
lean_del_object(v___x_1681_);
lean_dec(v_snd_1679_);
lean_dec(v_fst_1678_);
lean_del_object(v___x_1676_);
lean_dec(v_snd_1666_);
lean_dec(v_fst_1665_);
lean_dec(v_snd_1656_);
lean_dec(v_fst_1655_);
lean_del_object(v___x_1652_);
lean_dec(v_snd_1646_);
lean_dec(v_fst_1645_);
lean_dec_ref(v___y_1639_);
lean_dec_ref(v___y_1631_);
lean_dec_ref(v___y_1628_);
v_a_1845_ = lean_ctor_get(v___x_1694_, 0);
v_isSharedCheck_1852_ = !lean_is_exclusive(v___x_1694_);
if (v_isSharedCheck_1852_ == 0)
{
v___x_1847_ = v___x_1694_;
v_isShared_1848_ = v_isSharedCheck_1852_;
goto v_resetjp_1846_;
}
else
{
lean_inc(v_a_1845_);
lean_dec(v___x_1694_);
v___x_1847_ = lean_box(0);
v_isShared_1848_ = v_isSharedCheck_1852_;
goto v_resetjp_1846_;
}
v_resetjp_1846_:
{
lean_object* v___x_1850_; 
if (v_isShared_1848_ == 0)
{
v___x_1850_ = v___x_1847_;
goto v_reusejp_1849_;
}
else
{
lean_object* v_reuseFailAlloc_1851_; 
v_reuseFailAlloc_1851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1851_, 0, v_a_1845_);
v___x_1850_ = v_reuseFailAlloc_1851_;
goto v_reusejp_1849_;
}
v_reusejp_1849_:
{
return v___x_1850_;
}
}
}
}
else
{
lean_object* v_a_1853_; lean_object* v___x_1855_; uint8_t v_isShared_1856_; uint8_t v_isSharedCheck_1860_; 
lean_dec_ref(v___x_1689_);
lean_del_object(v___x_1681_);
lean_dec(v_snd_1679_);
lean_dec(v_fst_1678_);
lean_del_object(v___x_1676_);
lean_dec(v_snd_1666_);
lean_dec(v_fst_1665_);
lean_dec(v_snd_1656_);
lean_dec(v_fst_1655_);
lean_del_object(v___x_1652_);
lean_dec(v_snd_1646_);
lean_dec(v_fst_1645_);
lean_dec_ref(v___y_1639_);
lean_dec_ref(v___y_1631_);
lean_dec_ref(v___y_1628_);
v_a_1853_ = lean_ctor_get(v___x_1692_, 0);
v_isSharedCheck_1860_ = !lean_is_exclusive(v___x_1692_);
if (v_isSharedCheck_1860_ == 0)
{
v___x_1855_ = v___x_1692_;
v_isShared_1856_ = v_isSharedCheck_1860_;
goto v_resetjp_1854_;
}
else
{
lean_inc(v_a_1853_);
lean_dec(v___x_1692_);
v___x_1855_ = lean_box(0);
v_isShared_1856_ = v_isSharedCheck_1860_;
goto v_resetjp_1854_;
}
v_resetjp_1854_:
{
lean_object* v___x_1858_; 
if (v_isShared_1856_ == 0)
{
v___x_1858_ = v___x_1855_;
goto v_reusejp_1857_;
}
else
{
lean_object* v_reuseFailAlloc_1859_; 
v_reuseFailAlloc_1859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1859_, 0, v_a_1853_);
v___x_1858_ = v_reuseFailAlloc_1859_;
goto v_reusejp_1857_;
}
v_reusejp_1857_:
{
return v___x_1858_;
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
lean_dec(v_snd_1666_);
lean_dec(v_fst_1665_);
lean_del_object(v___x_1662_);
lean_dec(v_snd_1656_);
lean_dec(v_fst_1655_);
lean_del_object(v___x_1652_);
lean_dec(v_snd_1646_);
lean_dec(v_fst_1645_);
lean_dec_ref(v___y_1639_);
lean_dec_ref(v___y_1631_);
lean_dec_ref(v___y_1628_);
return v___x_1669_;
}
}
else
{
lean_object* v_a_1867_; lean_object* v___x_1869_; uint8_t v_isShared_1870_; uint8_t v_isSharedCheck_1874_; 
lean_dec(v_snd_1666_);
lean_dec(v_fst_1665_);
lean_del_object(v___x_1662_);
lean_dec(v_snd_1656_);
lean_dec(v_fst_1655_);
lean_del_object(v___x_1652_);
lean_dec(v_snd_1646_);
lean_dec(v_fst_1645_);
lean_dec_ref(v___y_1639_);
lean_dec_ref(v___y_1631_);
lean_dec_ref(v___y_1628_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
v_a_1867_ = lean_ctor_get(v___x_1667_, 0);
v_isSharedCheck_1874_ = !lean_is_exclusive(v___x_1667_);
if (v_isSharedCheck_1874_ == 0)
{
v___x_1869_ = v___x_1667_;
v_isShared_1870_ = v_isSharedCheck_1874_;
goto v_resetjp_1868_;
}
else
{
lean_inc(v_a_1867_);
lean_dec(v___x_1667_);
v___x_1869_ = lean_box(0);
v_isShared_1870_ = v_isSharedCheck_1874_;
goto v_resetjp_1868_;
}
v_resetjp_1868_:
{
lean_object* v___x_1872_; 
if (v_isShared_1870_ == 0)
{
v___x_1872_ = v___x_1869_;
goto v_reusejp_1871_;
}
else
{
lean_object* v_reuseFailAlloc_1873_; 
v_reuseFailAlloc_1873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1873_, 0, v_a_1867_);
v___x_1872_ = v_reuseFailAlloc_1873_;
goto v_reusejp_1871_;
}
v_reusejp_1871_:
{
return v___x_1872_;
}
}
}
}
}
else
{
lean_dec(v_snd_1656_);
lean_dec(v_fst_1655_);
lean_del_object(v___x_1652_);
lean_dec(v_snd_1646_);
lean_dec(v_fst_1645_);
lean_dec_ref(v___y_1639_);
lean_dec(v___y_1634_);
lean_dec_ref(v___y_1631_);
lean_dec_ref(v___y_1628_);
lean_dec_ref(v_f_794_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
return v___x_1659_;
}
}
else
{
lean_object* v_a_1876_; lean_object* v___x_1878_; uint8_t v_isShared_1879_; uint8_t v_isSharedCheck_1883_; 
lean_dec(v_snd_1656_);
lean_dec(v_fst_1655_);
lean_del_object(v___x_1652_);
lean_dec(v_snd_1646_);
lean_dec(v_fst_1645_);
lean_dec_ref(v___y_1639_);
lean_dec(v___y_1634_);
lean_dec_ref(v___y_1631_);
lean_dec_ref(v___y_1628_);
lean_dec_ref(v_f_794_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
v_a_1876_ = lean_ctor_get(v___x_1657_, 0);
v_isSharedCheck_1883_ = !lean_is_exclusive(v___x_1657_);
if (v_isSharedCheck_1883_ == 0)
{
v___x_1878_ = v___x_1657_;
v_isShared_1879_ = v_isSharedCheck_1883_;
goto v_resetjp_1877_;
}
else
{
lean_inc(v_a_1876_);
lean_dec(v___x_1657_);
v___x_1878_ = lean_box(0);
v_isShared_1879_ = v_isSharedCheck_1883_;
goto v_resetjp_1877_;
}
v_resetjp_1877_:
{
lean_object* v___x_1881_; 
if (v_isShared_1879_ == 0)
{
v___x_1881_ = v___x_1878_;
goto v_reusejp_1880_;
}
else
{
lean_object* v_reuseFailAlloc_1882_; 
v_reuseFailAlloc_1882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1882_, 0, v_a_1876_);
v___x_1881_ = v_reuseFailAlloc_1882_;
goto v_reusejp_1880_;
}
v_reusejp_1880_:
{
return v___x_1881_;
}
}
}
}
}
else
{
lean_dec(v_snd_1646_);
lean_dec(v_fst_1645_);
lean_dec_ref(v___y_1639_);
lean_dec(v___y_1634_);
lean_dec_ref(v___y_1631_);
lean_dec_ref(v___y_1628_);
lean_dec_ref(v_f_794_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
return v___x_1649_;
}
}
else
{
lean_object* v_a_1885_; lean_object* v___x_1887_; uint8_t v_isShared_1888_; uint8_t v_isSharedCheck_1892_; 
lean_dec(v_snd_1646_);
lean_dec(v_fst_1645_);
lean_dec_ref(v___y_1639_);
lean_dec(v___y_1634_);
lean_dec_ref(v___y_1631_);
lean_dec_ref(v___y_1628_);
lean_dec_ref(v_f_794_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
v_a_1885_ = lean_ctor_get(v___x_1647_, 0);
v_isSharedCheck_1892_ = !lean_is_exclusive(v___x_1647_);
if (v_isSharedCheck_1892_ == 0)
{
v___x_1887_ = v___x_1647_;
v_isShared_1888_ = v_isSharedCheck_1892_;
goto v_resetjp_1886_;
}
else
{
lean_inc(v_a_1885_);
lean_dec(v___x_1647_);
v___x_1887_ = lean_box(0);
v_isShared_1888_ = v_isSharedCheck_1892_;
goto v_resetjp_1886_;
}
v_resetjp_1886_:
{
lean_object* v___x_1890_; 
if (v_isShared_1888_ == 0)
{
v___x_1890_ = v___x_1887_;
goto v_reusejp_1889_;
}
else
{
lean_object* v_reuseFailAlloc_1891_; 
v_reuseFailAlloc_1891_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1891_, 0, v_a_1885_);
v___x_1890_ = v_reuseFailAlloc_1891_;
goto v_reusejp_1889_;
}
v_reusejp_1889_:
{
return v___x_1890_;
}
}
}
}
else
{
lean_dec_ref(v___y_1639_);
lean_dec(v___y_1634_);
lean_dec_ref(v___y_1631_);
lean_dec_ref(v___y_1628_);
lean_dec_ref(v_f_794_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
return v___x_1642_;
}
}
else
{
lean_object* v_a_1893_; lean_object* v___x_1895_; uint8_t v_isShared_1896_; uint8_t v_isSharedCheck_1900_; 
lean_dec_ref(v___y_1639_);
lean_dec(v___y_1634_);
lean_dec_ref(v___y_1631_);
lean_dec_ref(v___y_1628_);
lean_dec_ref(v_f_794_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
v_a_1893_ = lean_ctor_get(v___x_1640_, 0);
v_isSharedCheck_1900_ = !lean_is_exclusive(v___x_1640_);
if (v_isSharedCheck_1900_ == 0)
{
v___x_1895_ = v___x_1640_;
v_isShared_1896_ = v_isSharedCheck_1900_;
goto v_resetjp_1894_;
}
else
{
lean_inc(v_a_1893_);
lean_dec(v___x_1640_);
v___x_1895_ = lean_box(0);
v_isShared_1896_ = v_isSharedCheck_1900_;
goto v_resetjp_1894_;
}
v_resetjp_1894_:
{
lean_object* v___x_1898_; 
if (v_isShared_1896_ == 0)
{
v___x_1898_ = v___x_1895_;
goto v_reusejp_1897_;
}
else
{
lean_object* v_reuseFailAlloc_1899_; 
v_reuseFailAlloc_1899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1899_, 0, v_a_1893_);
v___x_1898_ = v_reuseFailAlloc_1899_;
goto v_reusejp_1897_;
}
v_reusejp_1897_:
{
return v___x_1898_;
}
}
}
}
v___jp_1901_:
{
lean_object* v___x_1911_; lean_object* v___x_1912_; 
v___x_1911_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_f_794_);
v___x_1912_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0(v_f_794_, v___x_1911_, v___y_1909_, v___y_1907_, v___y_1904_, v___y_1902_, v___y_1906_, v___y_1908_);
if (lean_obj_tag(v___x_1912_) == 0)
{
lean_object* v_a_1913_; lean_object* v___x_1914_; 
v_a_1913_ = lean_ctor_get(v___x_1912_, 0);
lean_inc(v_a_1913_);
lean_dec_ref_known(v___x_1912_, 1);
lean_inc_ref(v_vars_793_);
lean_inc_ref(v_sorts_792_);
v___x_1914_ = lp_vampireReplay_Vampire_Reconstruct_formula(v_sorts_792_, v_vars_793_, v_a_1913_, v___y_1909_, v___y_1907_, v___y_1904_, v___y_1902_, v___y_1906_, v___y_1908_);
if (lean_obj_tag(v___x_1914_) == 0)
{
lean_object* v_a_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; 
v_a_1915_ = lean_ctor_get(v___x_1914_, 0);
lean_inc(v_a_1915_);
lean_dec_ref_known(v___x_1914_, 1);
v___x_1916_ = lean_unsigned_to_nat(1u);
lean_inc_ref(v_f_794_);
v___x_1917_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0(v_f_794_, v___x_1916_, v___y_1909_, v___y_1907_, v___y_1904_, v___y_1902_, v___y_1906_, v___y_1908_);
if (lean_obj_tag(v___x_1917_) == 0)
{
lean_object* v_a_1918_; lean_object* v___x_1919_; 
v_a_1918_ = lean_ctor_get(v___x_1917_, 0);
lean_inc(v_a_1918_);
lean_dec_ref_known(v___x_1917_, 1);
lean_inc_ref(v_vars_793_);
lean_inc_ref(v_sorts_792_);
v___x_1919_ = lp_vampireReplay_Vampire_Reconstruct_formula(v_sorts_792_, v_vars_793_, v_a_1918_, v___y_1909_, v___y_1907_, v___y_1904_, v___y_1902_, v___y_1906_, v___y_1908_);
if (lean_obj_tag(v___x_1919_) == 0)
{
if (v_expand_791_ == 0)
{
lean_object* v___x_1920_; 
lean_dec_ref_known(v___x_1919_, 1);
lean_dec(v_a_1915_);
lean_inc_ref(v_f_794_);
v___x_1920_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0(v_f_794_, v___x_1911_, v___y_1909_, v___y_1907_, v___y_1904_, v___y_1902_, v___y_1906_, v___y_1908_);
if (lean_obj_tag(v___x_1920_) == 0)
{
lean_object* v_a_1921_; lean_object* v___x_1922_; 
v_a_1921_ = lean_ctor_get(v___x_1920_, 0);
lean_inc(v_a_1921_);
lean_dec_ref_known(v___x_1920_, 1);
lean_inc_ref(v_vars_793_);
lean_inc_ref(v_sorts_792_);
v___x_1922_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize(v_expand_791_, v_sorts_792_, v_vars_793_, v_a_1921_, v___x_1395_, v___y_1909_, v___y_1907_, v___y_1904_, v___y_1902_, v___y_1906_, v___y_1908_);
if (lean_obj_tag(v___x_1922_) == 0)
{
lean_object* v_a_1923_; lean_object* v_snd_1924_; lean_object* v_fst_1925_; lean_object* v_snd_1926_; lean_object* v___x_1927_; 
v_a_1923_ = lean_ctor_get(v___x_1922_, 0);
lean_inc(v_a_1923_);
lean_dec_ref_known(v___x_1922_, 1);
v_snd_1924_ = lean_ctor_get(v_a_1923_, 1);
lean_inc(v_snd_1924_);
lean_dec(v_a_1923_);
v_fst_1925_ = lean_ctor_get(v_snd_1924_, 0);
lean_inc(v_fst_1925_);
v_snd_1926_ = lean_ctor_get(v_snd_1924_, 1);
lean_inc(v_snd_1926_);
lean_dec(v_snd_1924_);
v___x_1927_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0(v_f_794_, v___x_1916_, v___y_1909_, v___y_1907_, v___y_1904_, v___y_1902_, v___y_1906_, v___y_1908_);
if (lean_obj_tag(v___x_1927_) == 0)
{
lean_object* v_a_1928_; lean_object* v___x_1929_; 
v_a_1928_ = lean_ctor_get(v___x_1927_, 0);
lean_inc(v_a_1928_);
lean_dec_ref_known(v___x_1927_, 1);
v___x_1929_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize(v_expand_791_, v_sorts_792_, v_vars_793_, v_a_1928_, v___x_1395_, v___y_1909_, v___y_1907_, v___y_1904_, v___y_1902_, v___y_1906_, v___y_1908_);
if (lean_obj_tag(v___x_1929_) == 0)
{
lean_object* v_a_1930_; lean_object* v_snd_1931_; lean_object* v_fst_1932_; lean_object* v_snd_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; 
v_a_1930_ = lean_ctor_get(v___x_1929_, 0);
lean_inc(v_a_1930_);
lean_dec_ref_known(v___x_1929_, 1);
v_snd_1931_ = lean_ctor_get(v_a_1930_, 1);
lean_inc(v_snd_1931_);
lean_dec(v_a_1930_);
v_fst_1932_ = lean_ctor_get(v_snd_1931_, 0);
lean_inc(v_fst_1932_);
v_snd_1933_ = lean_ctor_get(v_snd_1931_, 1);
lean_inc(v_snd_1933_);
lean_dec(v_snd_1931_);
v___x_1934_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__54));
v___x_1935_ = lean_unsigned_to_nat(2u);
v___x_1936_ = lean_mk_empty_array_with_capacity(v___x_1935_);
v___x_1937_ = lean_array_push(v___x_1936_, v_snd_1926_);
v___x_1938_ = lean_array_push(v___x_1937_, v_snd_1933_);
v___x_1939_ = l_Lean_Meta_mkAppM(v___x_1934_, v___x_1938_, v___y_1904_, v___y_1902_, v___y_1906_, v___y_1908_);
if (lean_obj_tag(v___x_1939_) == 0)
{
lean_object* v_a_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; 
v_a_1940_ = lean_ctor_get(v___x_1939_, 0);
lean_inc(v_a_1940_);
lean_dec_ref_known(v___x_1939_, 1);
lean_inc_ref(v___y_1905_);
v___x_1941_ = l_Lean_Name_mkStr1(v___y_1905_);
v___x_1942_ = lean_box(0);
v___x_1943_ = l_Lean_Expr_const___override(v___x_1941_, v___x_1942_);
v___x_1944_ = l_Lean_mkAppB(v___x_1943_, v_fst_1925_, v_fst_1932_);
if (v___y_1910_ == 0)
{
if (v_polarity_795_ == 0)
{
v___y_804_ = v___y_1903_;
v___y_805_ = v___x_1944_;
v___y_806_ = v_a_1940_;
goto v___jp_803_;
}
else
{
v___y_811_ = v___x_1916_;
v___y_812_ = v___y_1902_;
v___y_813_ = v___y_1903_;
v___y_814_ = v___x_1944_;
v___y_815_ = v___y_1904_;
v___y_816_ = v___x_1942_;
v___y_817_ = v___y_1906_;
v___y_818_ = v_a_1940_;
v___y_819_ = v___y_1908_;
goto v___jp_810_;
}
}
else
{
if (v_polarity_795_ == 0)
{
v___y_811_ = v___x_1916_;
v___y_812_ = v___y_1902_;
v___y_813_ = v___y_1903_;
v___y_814_ = v___x_1944_;
v___y_815_ = v___y_1904_;
v___y_816_ = v___x_1942_;
v___y_817_ = v___y_1906_;
v___y_818_ = v_a_1940_;
v___y_819_ = v___y_1908_;
goto v___jp_810_;
}
else
{
v___y_804_ = v___y_1903_;
v___y_805_ = v___x_1944_;
v___y_806_ = v_a_1940_;
goto v___jp_803_;
}
}
}
else
{
lean_object* v_a_1945_; lean_object* v___x_1947_; uint8_t v_isShared_1948_; uint8_t v_isSharedCheck_1952_; 
lean_dec(v_fst_1932_);
lean_dec(v_fst_1925_);
lean_dec_ref(v___y_1903_);
v_a_1945_ = lean_ctor_get(v___x_1939_, 0);
v_isSharedCheck_1952_ = !lean_is_exclusive(v___x_1939_);
if (v_isSharedCheck_1952_ == 0)
{
v___x_1947_ = v___x_1939_;
v_isShared_1948_ = v_isSharedCheck_1952_;
goto v_resetjp_1946_;
}
else
{
lean_inc(v_a_1945_);
lean_dec(v___x_1939_);
v___x_1947_ = lean_box(0);
v_isShared_1948_ = v_isSharedCheck_1952_;
goto v_resetjp_1946_;
}
v_resetjp_1946_:
{
lean_object* v___x_1950_; 
if (v_isShared_1948_ == 0)
{
v___x_1950_ = v___x_1947_;
goto v_reusejp_1949_;
}
else
{
lean_object* v_reuseFailAlloc_1951_; 
v_reuseFailAlloc_1951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1951_, 0, v_a_1945_);
v___x_1950_ = v_reuseFailAlloc_1951_;
goto v_reusejp_1949_;
}
v_reusejp_1949_:
{
return v___x_1950_;
}
}
}
}
else
{
lean_dec(v_snd_1926_);
lean_dec(v_fst_1925_);
lean_dec_ref(v___y_1903_);
return v___x_1929_;
}
}
else
{
lean_object* v_a_1953_; lean_object* v___x_1955_; uint8_t v_isShared_1956_; uint8_t v_isSharedCheck_1960_; 
lean_dec(v_snd_1926_);
lean_dec(v_fst_1925_);
lean_dec_ref(v___y_1903_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
v_a_1953_ = lean_ctor_get(v___x_1927_, 0);
v_isSharedCheck_1960_ = !lean_is_exclusive(v___x_1927_);
if (v_isSharedCheck_1960_ == 0)
{
v___x_1955_ = v___x_1927_;
v_isShared_1956_ = v_isSharedCheck_1960_;
goto v_resetjp_1954_;
}
else
{
lean_inc(v_a_1953_);
lean_dec(v___x_1927_);
v___x_1955_ = lean_box(0);
v_isShared_1956_ = v_isSharedCheck_1960_;
goto v_resetjp_1954_;
}
v_resetjp_1954_:
{
lean_object* v___x_1958_; 
if (v_isShared_1956_ == 0)
{
v___x_1958_ = v___x_1955_;
goto v_reusejp_1957_;
}
else
{
lean_object* v_reuseFailAlloc_1959_; 
v_reuseFailAlloc_1959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1959_, 0, v_a_1953_);
v___x_1958_ = v_reuseFailAlloc_1959_;
goto v_reusejp_1957_;
}
v_reusejp_1957_:
{
return v___x_1958_;
}
}
}
}
else
{
lean_dec_ref(v___y_1903_);
lean_dec_ref(v_f_794_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
return v___x_1922_;
}
}
else
{
lean_object* v_a_1961_; lean_object* v___x_1963_; uint8_t v_isShared_1964_; uint8_t v_isSharedCheck_1968_; 
lean_dec_ref(v___y_1903_);
lean_dec_ref(v_f_794_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
v_a_1961_ = lean_ctor_get(v___x_1920_, 0);
v_isSharedCheck_1968_ = !lean_is_exclusive(v___x_1920_);
if (v_isSharedCheck_1968_ == 0)
{
v___x_1963_ = v___x_1920_;
v_isShared_1964_ = v_isSharedCheck_1968_;
goto v_resetjp_1962_;
}
else
{
lean_inc(v_a_1961_);
lean_dec(v___x_1920_);
v___x_1963_ = lean_box(0);
v_isShared_1964_ = v_isSharedCheck_1968_;
goto v_resetjp_1962_;
}
v_resetjp_1962_:
{
lean_object* v___x_1966_; 
if (v_isShared_1964_ == 0)
{
v___x_1966_ = v___x_1963_;
goto v_reusejp_1965_;
}
else
{
lean_object* v_reuseFailAlloc_1967_; 
v_reuseFailAlloc_1967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1967_, 0, v_a_1961_);
v___x_1966_ = v_reuseFailAlloc_1967_;
goto v_reusejp_1965_;
}
v_reusejp_1965_:
{
return v___x_1966_;
}
}
}
}
else
{
lean_object* v_a_1969_; uint8_t v___x_1970_; 
v_a_1969_ = lean_ctor_get(v___x_1919_, 0);
lean_inc(v_a_1969_);
lean_dec_ref_known(v___x_1919_, 1);
v___x_1970_ = 0;
if (v___y_1910_ == 0)
{
if (v_polarity_795_ == 0)
{
v___y_1627_ = v___y_1902_;
v___y_1628_ = v___y_1903_;
v___y_1629_ = v___x_1970_;
v___y_1630_ = v___y_1907_;
v___y_1631_ = v_a_1969_;
v___y_1632_ = v___x_1916_;
v___y_1633_ = v___y_1904_;
v___y_1634_ = v___x_1911_;
v___y_1635_ = v___y_1906_;
v___y_1636_ = v___y_1905_;
v___y_1637_ = v___y_1909_;
v___y_1638_ = v___y_1908_;
v___y_1639_ = v_a_1915_;
goto v___jp_1626_;
}
else
{
v___y_1436_ = v___y_1902_;
v___y_1437_ = v___y_1903_;
v___y_1438_ = v___y_1907_;
v___y_1439_ = v_a_1969_;
v___y_1440_ = v___x_1916_;
v___y_1441_ = v___y_1904_;
v___y_1442_ = v___x_1911_;
v___y_1443_ = v___y_1906_;
v___y_1444_ = v___y_1905_;
v___y_1445_ = v___y_1909_;
v___y_1446_ = v___y_1908_;
v___y_1447_ = v_a_1915_;
v___y_1448_ = v___y_1910_;
goto v___jp_1435_;
}
}
else
{
if (v_polarity_795_ == 0)
{
v___y_1436_ = v___y_1902_;
v___y_1437_ = v___y_1903_;
v___y_1438_ = v___y_1907_;
v___y_1439_ = v_a_1969_;
v___y_1440_ = v___x_1916_;
v___y_1441_ = v___y_1904_;
v___y_1442_ = v___x_1911_;
v___y_1443_ = v___y_1906_;
v___y_1444_ = v___y_1905_;
v___y_1445_ = v___y_1909_;
v___y_1446_ = v___y_1908_;
v___y_1447_ = v_a_1915_;
v___y_1448_ = v_polarity_795_;
goto v___jp_1435_;
}
else
{
v___y_1627_ = v___y_1902_;
v___y_1628_ = v___y_1903_;
v___y_1629_ = v___x_1970_;
v___y_1630_ = v___y_1907_;
v___y_1631_ = v_a_1969_;
v___y_1632_ = v___x_1916_;
v___y_1633_ = v___y_1904_;
v___y_1634_ = v___x_1911_;
v___y_1635_ = v___y_1906_;
v___y_1636_ = v___y_1905_;
v___y_1637_ = v___y_1909_;
v___y_1638_ = v___y_1908_;
v___y_1639_ = v_a_1915_;
goto v___jp_1626_;
}
}
}
}
else
{
lean_object* v_a_1971_; lean_object* v___x_1973_; uint8_t v_isShared_1974_; uint8_t v_isSharedCheck_1978_; 
lean_dec(v_a_1915_);
lean_dec_ref(v___y_1903_);
lean_dec_ref(v_f_794_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
v_a_1971_ = lean_ctor_get(v___x_1919_, 0);
v_isSharedCheck_1978_ = !lean_is_exclusive(v___x_1919_);
if (v_isSharedCheck_1978_ == 0)
{
v___x_1973_ = v___x_1919_;
v_isShared_1974_ = v_isSharedCheck_1978_;
goto v_resetjp_1972_;
}
else
{
lean_inc(v_a_1971_);
lean_dec(v___x_1919_);
v___x_1973_ = lean_box(0);
v_isShared_1974_ = v_isSharedCheck_1978_;
goto v_resetjp_1972_;
}
v_resetjp_1972_:
{
lean_object* v___x_1976_; 
if (v_isShared_1974_ == 0)
{
v___x_1976_ = v___x_1973_;
goto v_reusejp_1975_;
}
else
{
lean_object* v_reuseFailAlloc_1977_; 
v_reuseFailAlloc_1977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1977_, 0, v_a_1971_);
v___x_1976_ = v_reuseFailAlloc_1977_;
goto v_reusejp_1975_;
}
v_reusejp_1975_:
{
return v___x_1976_;
}
}
}
}
else
{
lean_object* v_a_1979_; lean_object* v___x_1981_; uint8_t v_isShared_1982_; uint8_t v_isSharedCheck_1986_; 
lean_dec(v_a_1915_);
lean_dec_ref(v___y_1903_);
lean_dec_ref(v_f_794_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
v_a_1979_ = lean_ctor_get(v___x_1917_, 0);
v_isSharedCheck_1986_ = !lean_is_exclusive(v___x_1917_);
if (v_isSharedCheck_1986_ == 0)
{
v___x_1981_ = v___x_1917_;
v_isShared_1982_ = v_isSharedCheck_1986_;
goto v_resetjp_1980_;
}
else
{
lean_inc(v_a_1979_);
lean_dec(v___x_1917_);
v___x_1981_ = lean_box(0);
v_isShared_1982_ = v_isSharedCheck_1986_;
goto v_resetjp_1980_;
}
v_resetjp_1980_:
{
lean_object* v___x_1984_; 
if (v_isShared_1982_ == 0)
{
v___x_1984_ = v___x_1981_;
goto v_reusejp_1983_;
}
else
{
lean_object* v_reuseFailAlloc_1985_; 
v_reuseFailAlloc_1985_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1985_, 0, v_a_1979_);
v___x_1984_ = v_reuseFailAlloc_1985_;
goto v_reusejp_1983_;
}
v_reusejp_1983_:
{
return v___x_1984_;
}
}
}
}
else
{
lean_object* v_a_1987_; lean_object* v___x_1989_; uint8_t v_isShared_1990_; uint8_t v_isSharedCheck_1994_; 
lean_dec_ref(v___y_1903_);
lean_dec_ref(v_f_794_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
v_a_1987_ = lean_ctor_get(v___x_1914_, 0);
v_isSharedCheck_1994_ = !lean_is_exclusive(v___x_1914_);
if (v_isSharedCheck_1994_ == 0)
{
v___x_1989_ = v___x_1914_;
v_isShared_1990_ = v_isSharedCheck_1994_;
goto v_resetjp_1988_;
}
else
{
lean_inc(v_a_1987_);
lean_dec(v___x_1914_);
v___x_1989_ = lean_box(0);
v_isShared_1990_ = v_isSharedCheck_1994_;
goto v_resetjp_1988_;
}
v_resetjp_1988_:
{
lean_object* v___x_1992_; 
if (v_isShared_1990_ == 0)
{
v___x_1992_ = v___x_1989_;
goto v_reusejp_1991_;
}
else
{
lean_object* v_reuseFailAlloc_1993_; 
v_reuseFailAlloc_1993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1993_, 0, v_a_1987_);
v___x_1992_ = v_reuseFailAlloc_1993_;
goto v_reusejp_1991_;
}
v_reusejp_1991_:
{
return v___x_1992_;
}
}
}
}
else
{
lean_object* v_a_1995_; lean_object* v___x_1997_; uint8_t v_isShared_1998_; uint8_t v_isSharedCheck_2002_; 
lean_dec_ref(v___y_1903_);
lean_dec_ref(v_f_794_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
v_a_1995_ = lean_ctor_get(v___x_1912_, 0);
v_isSharedCheck_2002_ = !lean_is_exclusive(v___x_1912_);
if (v_isSharedCheck_2002_ == 0)
{
v___x_1997_ = v___x_1912_;
v_isShared_1998_ = v_isSharedCheck_2002_;
goto v_resetjp_1996_;
}
else
{
lean_inc(v_a_1995_);
lean_dec(v___x_1912_);
v___x_1997_ = lean_box(0);
v_isShared_1998_ = v_isSharedCheck_2002_;
goto v_resetjp_1996_;
}
v_resetjp_1996_:
{
lean_object* v___x_2000_; 
if (v_isShared_1998_ == 0)
{
v___x_2000_ = v___x_1997_;
goto v_reusejp_1999_;
}
else
{
lean_object* v_reuseFailAlloc_2001_; 
v_reuseFailAlloc_2001_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2001_, 0, v_a_1995_);
v___x_2000_ = v_reuseFailAlloc_2001_;
goto v_reusejp_1999_;
}
v_reusejp_1999_:
{
return v___x_2000_;
}
}
}
}
v___jp_2003_:
{
lean_object* v___x_2012_; 
v___x_2012_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v_f_794_, v___y_2008_, v___y_2009_, v___y_2010_, v___y_2011_);
if (lean_obj_tag(v___x_2012_) == 0)
{
lean_object* v_a_2013_; uint8_t v___x_2014_; 
v_a_2013_ = lean_ctor_get(v___x_2012_, 0);
lean_inc(v_a_2013_);
lean_dec_ref_known(v___x_2012_, 1);
v___x_2014_ = lean_unbox(v_a_2013_);
lean_dec(v_a_2013_);
if (v___x_2014_ == 4)
{
v___y_1902_ = v___y_2009_;
v___y_1903_ = v___y_2004_;
v___y_1904_ = v___y_2008_;
v___y_1905_ = v___y_2005_;
v___y_1906_ = v___y_2010_;
v___y_1907_ = v___y_2007_;
v___y_1908_ = v___y_2011_;
v___y_1909_ = v___y_2006_;
v___y_1910_ = v___x_1395_;
goto v___jp_1901_;
}
else
{
uint8_t v___x_2015_; 
v___x_2015_ = 0;
v___y_1902_ = v___y_2009_;
v___y_1903_ = v___y_2004_;
v___y_1904_ = v___y_2008_;
v___y_1905_ = v___y_2005_;
v___y_1906_ = v___y_2010_;
v___y_1907_ = v___y_2007_;
v___y_1908_ = v___y_2011_;
v___y_1909_ = v___y_2006_;
v___y_1910_ = v___x_2015_;
goto v___jp_1901_;
}
}
else
{
lean_object* v_a_2016_; lean_object* v___x_2018_; uint8_t v_isShared_2019_; uint8_t v_isSharedCheck_2023_; 
lean_dec_ref(v___y_2004_);
lean_dec_ref(v_f_794_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
v_a_2016_ = lean_ctor_get(v___x_2012_, 0);
v_isSharedCheck_2023_ = !lean_is_exclusive(v___x_2012_);
if (v_isSharedCheck_2023_ == 0)
{
v___x_2018_ = v___x_2012_;
v_isShared_2019_ = v_isSharedCheck_2023_;
goto v_resetjp_2017_;
}
else
{
lean_inc(v_a_2016_);
lean_dec(v___x_2012_);
v___x_2018_ = lean_box(0);
v_isShared_2019_ = v_isSharedCheck_2023_;
goto v_resetjp_2017_;
}
v_resetjp_2017_:
{
lean_object* v___x_2021_; 
if (v_isShared_2019_ == 0)
{
v___x_2021_ = v___x_2018_;
goto v_reusejp_2020_;
}
else
{
lean_object* v_reuseFailAlloc_2022_; 
v_reuseFailAlloc_2022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2022_, 0, v_a_2016_);
v___x_2021_ = v_reuseFailAlloc_2022_;
goto v_reusejp_2020_;
}
v_reusejp_2020_:
{
return v___x_2021_;
}
}
}
}
v___jp_2024_:
{
lean_object* v___x_2026_; 
v___x_2026_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v_f_794_, v_a_798_, v_a_799_, v_a_800_, v_a_801_);
if (lean_obj_tag(v___x_2026_) == 0)
{
lean_object* v_a_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; uint8_t v___x_2034_; 
v_a_2027_ = lean_ctor_get(v___x_2026_, 0);
lean_inc(v_a_2027_);
lean_dec_ref_known(v___x_2026_, 1);
v___x_2028_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg___closed__2));
v___x_2029_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__56));
lean_inc_ref(v___y_2025_);
v___x_2030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2030_, 0, v___y_2025_);
v___x_2031_ = lean_unsigned_to_nat(1u);
v___x_2032_ = lean_mk_empty_array_with_capacity(v___x_2031_);
lean_inc_ref(v___x_2032_);
v___x_2033_ = lean_array_push(v___x_2032_, v___x_2030_);
v___x_2034_ = lean_unbox(v_a_2027_);
switch(v___x_2034_)
{
case 0:
{
lean_dec(v_a_2027_);
lean_dec_ref(v_f_794_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
if (v_polarity_795_ == 0)
{
lean_object* v___x_2035_; uint8_t v___x_2036_; 
v___x_2035_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__1));
v___x_2036_ = l_Lean_Expr_isAppOfArity(v_a_1044_, v___x_2035_, v___x_2031_);
if (v___x_2036_ == 0)
{
lean_object* v___x_2037_; 
lean_dec_ref(v___x_2032_);
lean_dec(v_a_1044_);
v___x_2037_ = l_Lean_Meta_mkAppOptM(v___x_2029_, v___x_2033_, v_a_798_, v_a_799_, v_a_800_, v_a_801_);
if (lean_obj_tag(v___x_2037_) == 0)
{
lean_object* v_a_2038_; lean_object* v___x_2040_; uint8_t v_isShared_2041_; uint8_t v_isSharedCheck_2047_; 
v_a_2038_ = lean_ctor_get(v___x_2037_, 0);
v_isSharedCheck_2047_ = !lean_is_exclusive(v___x_2037_);
if (v_isSharedCheck_2047_ == 0)
{
v___x_2040_ = v___x_2037_;
v_isShared_2041_ = v_isSharedCheck_2047_;
goto v_resetjp_2039_;
}
else
{
lean_inc(v_a_2038_);
lean_dec(v___x_2037_);
v___x_2040_ = lean_box(0);
v_isShared_2041_ = v_isSharedCheck_2047_;
goto v_resetjp_2039_;
}
v_resetjp_2039_:
{
lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2045_; 
lean_inc_ref(v___y_2025_);
v___x_2042_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2042_, 0, v___y_2025_);
lean_ctor_set(v___x_2042_, 1, v_a_2038_);
v___x_2043_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2043_, 0, v___y_2025_);
lean_ctor_set(v___x_2043_, 1, v___x_2042_);
if (v_isShared_2041_ == 0)
{
lean_ctor_set(v___x_2040_, 0, v___x_2043_);
v___x_2045_ = v___x_2040_;
goto v_reusejp_2044_;
}
else
{
lean_object* v_reuseFailAlloc_2046_; 
v_reuseFailAlloc_2046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2046_, 0, v___x_2043_);
v___x_2045_ = v_reuseFailAlloc_2046_;
goto v_reusejp_2044_;
}
v_reusejp_2044_:
{
return v___x_2045_;
}
}
}
else
{
lean_object* v_a_2048_; lean_object* v___x_2050_; uint8_t v_isShared_2051_; uint8_t v_isSharedCheck_2055_; 
lean_dec_ref(v___y_2025_);
v_a_2048_ = lean_ctor_get(v___x_2037_, 0);
v_isSharedCheck_2055_ = !lean_is_exclusive(v___x_2037_);
if (v_isSharedCheck_2055_ == 0)
{
v___x_2050_ = v___x_2037_;
v_isShared_2051_ = v_isSharedCheck_2055_;
goto v_resetjp_2049_;
}
else
{
lean_inc(v_a_2048_);
lean_dec(v___x_2037_);
v___x_2050_ = lean_box(0);
v_isShared_2051_ = v_isSharedCheck_2055_;
goto v_resetjp_2049_;
}
v_resetjp_2049_:
{
lean_object* v___x_2053_; 
if (v_isShared_2051_ == 0)
{
v___x_2053_ = v___x_2050_;
goto v_reusejp_2052_;
}
else
{
lean_object* v_reuseFailAlloc_2054_; 
v_reuseFailAlloc_2054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2054_, 0, v_a_2048_);
v___x_2053_ = v_reuseFailAlloc_2054_;
goto v_reusejp_2052_;
}
v_reusejp_2052_:
{
return v___x_2053_;
}
}
}
}
else
{
lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; 
lean_dec_ref(v___x_2033_);
v___x_2056_ = l_Lean_Expr_appArg_x21(v_a_1044_);
lean_dec(v_a_1044_);
lean_inc_ref(v___x_2056_);
v___x_2057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2057_, 0, v___x_2056_);
v___x_2058_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__49));
v___x_2059_ = lean_array_push(v___x_2032_, v___x_2057_);
v___x_2060_ = l_Lean_Meta_mkAppOptM(v___x_2058_, v___x_2059_, v_a_798_, v_a_799_, v_a_800_, v_a_801_);
if (lean_obj_tag(v___x_2060_) == 0)
{
lean_object* v_a_2061_; lean_object* v___x_2063_; uint8_t v_isShared_2064_; uint8_t v_isSharedCheck_2070_; 
v_a_2061_ = lean_ctor_get(v___x_2060_, 0);
v_isSharedCheck_2070_ = !lean_is_exclusive(v___x_2060_);
if (v_isSharedCheck_2070_ == 0)
{
v___x_2063_ = v___x_2060_;
v_isShared_2064_ = v_isSharedCheck_2070_;
goto v_resetjp_2062_;
}
else
{
lean_inc(v_a_2061_);
lean_dec(v___x_2060_);
v___x_2063_ = lean_box(0);
v_isShared_2064_ = v_isSharedCheck_2070_;
goto v_resetjp_2062_;
}
v_resetjp_2062_:
{
lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2068_; 
v___x_2065_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2065_, 0, v___x_2056_);
lean_ctor_set(v___x_2065_, 1, v_a_2061_);
v___x_2066_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2066_, 0, v___y_2025_);
lean_ctor_set(v___x_2066_, 1, v___x_2065_);
if (v_isShared_2064_ == 0)
{
lean_ctor_set(v___x_2063_, 0, v___x_2066_);
v___x_2068_ = v___x_2063_;
goto v_reusejp_2067_;
}
else
{
lean_object* v_reuseFailAlloc_2069_; 
v_reuseFailAlloc_2069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2069_, 0, v___x_2066_);
v___x_2068_ = v_reuseFailAlloc_2069_;
goto v_reusejp_2067_;
}
v_reusejp_2067_:
{
return v___x_2068_;
}
}
}
else
{
lean_object* v_a_2071_; lean_object* v___x_2073_; uint8_t v_isShared_2074_; uint8_t v_isSharedCheck_2078_; 
lean_dec_ref(v___x_2056_);
lean_dec_ref(v___y_2025_);
v_a_2071_ = lean_ctor_get(v___x_2060_, 0);
v_isSharedCheck_2078_ = !lean_is_exclusive(v___x_2060_);
if (v_isSharedCheck_2078_ == 0)
{
v___x_2073_ = v___x_2060_;
v_isShared_2074_ = v_isSharedCheck_2078_;
goto v_resetjp_2072_;
}
else
{
lean_inc(v_a_2071_);
lean_dec(v___x_2060_);
v___x_2073_ = lean_box(0);
v_isShared_2074_ = v_isSharedCheck_2078_;
goto v_resetjp_2072_;
}
v_resetjp_2072_:
{
lean_object* v___x_2076_; 
if (v_isShared_2074_ == 0)
{
v___x_2076_ = v___x_2073_;
goto v_reusejp_2075_;
}
else
{
lean_object* v_reuseFailAlloc_2077_; 
v_reuseFailAlloc_2077_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2077_, 0, v_a_2071_);
v___x_2076_ = v_reuseFailAlloc_2077_;
goto v_reusejp_2075_;
}
v_reusejp_2075_:
{
return v___x_2076_;
}
}
}
}
}
else
{
lean_object* v___x_2079_; 
lean_dec_ref(v___x_2032_);
lean_dec(v_a_1044_);
v___x_2079_ = l_Lean_Meta_mkAppOptM(v___x_2029_, v___x_2033_, v_a_798_, v_a_799_, v_a_800_, v_a_801_);
if (lean_obj_tag(v___x_2079_) == 0)
{
lean_object* v_a_2080_; 
v_a_2080_ = lean_ctor_get(v___x_2079_, 0);
lean_inc(v_a_2080_);
lean_dec_ref_known(v___x_2079_, 1);
v___y_846_ = v___y_2025_;
v_____do__lift_847_ = v_a_2080_;
goto v___jp_845_;
}
else
{
lean_object* v_a_2081_; lean_object* v___x_2083_; uint8_t v_isShared_2084_; uint8_t v_isSharedCheck_2088_; 
lean_dec_ref(v___y_2025_);
v_a_2081_ = lean_ctor_get(v___x_2079_, 0);
v_isSharedCheck_2088_ = !lean_is_exclusive(v___x_2079_);
if (v_isSharedCheck_2088_ == 0)
{
v___x_2083_ = v___x_2079_;
v_isShared_2084_ = v_isSharedCheck_2088_;
goto v_resetjp_2082_;
}
else
{
lean_inc(v_a_2081_);
lean_dec(v___x_2079_);
v___x_2083_ = lean_box(0);
v_isShared_2084_ = v_isSharedCheck_2088_;
goto v_resetjp_2082_;
}
v_resetjp_2082_:
{
lean_object* v___x_2086_; 
if (v_isShared_2084_ == 0)
{
v___x_2086_ = v___x_2083_;
goto v_reusejp_2085_;
}
else
{
lean_object* v_reuseFailAlloc_2087_; 
v_reuseFailAlloc_2087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2087_, 0, v_a_2081_);
v___x_2086_ = v_reuseFailAlloc_2087_;
goto v_reusejp_2085_;
}
v_reusejp_2085_:
{
return v___x_2086_;
}
}
}
}
}
case 11:
{
lean_dec_ref(v___x_2032_);
lean_dec(v_a_2027_);
lean_dec_ref(v_f_794_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
v___y_1046_ = v___x_2029_;
v___y_1047_ = v___y_2025_;
v___y_1048_ = v___x_2033_;
v___y_1049_ = v_a_798_;
v___y_1050_ = v_a_799_;
v___y_1051_ = v_a_800_;
v___y_1052_ = v_a_801_;
goto v___jp_1045_;
}
case 10:
{
lean_dec_ref(v___x_2032_);
lean_dec(v_a_2027_);
lean_dec_ref(v_f_794_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
v___y_1046_ = v___x_2029_;
v___y_1047_ = v___y_2025_;
v___y_1048_ = v___x_2033_;
v___y_1049_ = v_a_798_;
v___y_1050_ = v_a_799_;
v___y_1051_ = v_a_800_;
v___y_1052_ = v_a_801_;
goto v___jp_1045_;
}
case 1:
{
lean_dec_ref(v___x_2033_);
lean_dec_ref(v___x_2032_);
lean_dec(v_a_2027_);
lean_dec(v_a_1044_);
v___y_1416_ = v___y_2025_;
v___y_1417_ = v_a_796_;
v___y_1418_ = v_a_797_;
v___y_1419_ = v_a_798_;
v___y_1420_ = v_a_799_;
v___y_1421_ = v_a_800_;
v___y_1422_ = v_a_801_;
goto v___jp_1415_;
}
case 2:
{
lean_dec_ref(v___x_2033_);
lean_dec_ref(v___x_2032_);
lean_dec(v_a_2027_);
lean_dec(v_a_1044_);
v___y_1416_ = v___y_2025_;
v___y_1417_ = v_a_796_;
v___y_1418_ = v_a_797_;
v___y_1419_ = v_a_798_;
v___y_1420_ = v_a_799_;
v___y_1421_ = v_a_800_;
v___y_1422_ = v_a_801_;
goto v___jp_1415_;
}
case 3:
{
lean_object* v___x_2089_; lean_object* v___x_2090_; 
lean_dec_ref(v___x_2033_);
lean_dec_ref(v___x_2032_);
lean_dec(v_a_2027_);
lean_dec(v_a_1044_);
v___x_2089_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_f_794_);
v___x_2090_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0(v_f_794_, v___x_2089_, v_a_796_, v_a_797_, v_a_798_, v_a_799_, v_a_800_, v_a_801_);
if (lean_obj_tag(v___x_2090_) == 0)
{
lean_object* v_a_2091_; lean_object* v___x_2092_; 
v_a_2091_ = lean_ctor_get(v___x_2090_, 0);
lean_inc(v_a_2091_);
lean_dec_ref_known(v___x_2090_, 1);
lean_inc_ref(v_vars_793_);
lean_inc_ref(v_sorts_792_);
v___x_2092_ = lp_vampireReplay_Vampire_Reconstruct_formula(v_sorts_792_, v_vars_793_, v_a_2091_, v_a_796_, v_a_797_, v_a_798_, v_a_799_, v_a_800_, v_a_801_);
if (lean_obj_tag(v___x_2092_) == 0)
{
lean_object* v_a_2093_; lean_object* v___x_2094_; 
v_a_2093_ = lean_ctor_get(v___x_2092_, 0);
lean_inc(v_a_2093_);
lean_dec_ref_known(v___x_2092_, 1);
lean_inc_ref(v_f_794_);
v___x_2094_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0(v_f_794_, v___x_2031_, v_a_796_, v_a_797_, v_a_798_, v_a_799_, v_a_800_, v_a_801_);
if (lean_obj_tag(v___x_2094_) == 0)
{
lean_object* v_a_2095_; lean_object* v___x_2096_; 
v_a_2095_ = lean_ctor_get(v___x_2094_, 0);
lean_inc(v_a_2095_);
lean_dec_ref_known(v___x_2094_, 1);
lean_inc_ref(v_vars_793_);
lean_inc_ref(v_sorts_792_);
v___x_2096_ = lp_vampireReplay_Vampire_Reconstruct_formula(v_sorts_792_, v_vars_793_, v_a_2095_, v_a_796_, v_a_797_, v_a_798_, v_a_799_, v_a_800_, v_a_801_);
if (lean_obj_tag(v___x_2096_) == 0)
{
lean_object* v_a_2097_; lean_object* v___x_2098_; 
v_a_2097_ = lean_ctor_get(v___x_2096_, 0);
lean_inc(v_a_2097_);
lean_dec_ref_known(v___x_2096_, 1);
lean_inc_ref(v_f_794_);
v___x_2098_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0(v_f_794_, v___x_2089_, v_a_796_, v_a_797_, v_a_798_, v_a_799_, v_a_800_, v_a_801_);
if (lean_obj_tag(v___x_2098_) == 0)
{
if (v_polarity_795_ == 0)
{
lean_object* v_a_2099_; 
v_a_2099_ = lean_ctor_get(v___x_2098_, 0);
lean_inc(v_a_2099_);
lean_dec_ref_known(v___x_2098_, 1);
v___y_1138_ = v___x_2031_;
v___y_1139_ = v___y_2025_;
v___y_1140_ = v___x_2028_;
v___y_1141_ = v_a_2099_;
v___y_1142_ = v_a_2097_;
v___y_1143_ = v_a_2093_;
v___y_1144_ = v___x_1395_;
goto v___jp_1137_;
}
else
{
lean_object* v_a_2100_; uint8_t v___x_2101_; 
v_a_2100_ = lean_ctor_get(v___x_2098_, 0);
lean_inc(v_a_2100_);
lean_dec_ref_known(v___x_2098_, 1);
v___x_2101_ = 0;
v___y_1138_ = v___x_2031_;
v___y_1139_ = v___y_2025_;
v___y_1140_ = v___x_2028_;
v___y_1141_ = v_a_2100_;
v___y_1142_ = v_a_2097_;
v___y_1143_ = v_a_2093_;
v___y_1144_ = v___x_2101_;
goto v___jp_1137_;
}
}
else
{
lean_object* v_a_2102_; lean_object* v___x_2104_; uint8_t v_isShared_2105_; uint8_t v_isSharedCheck_2109_; 
lean_dec(v_a_2097_);
lean_dec(v_a_2093_);
lean_dec_ref(v___y_2025_);
lean_dec_ref(v_f_794_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
v_a_2102_ = lean_ctor_get(v___x_2098_, 0);
v_isSharedCheck_2109_ = !lean_is_exclusive(v___x_2098_);
if (v_isSharedCheck_2109_ == 0)
{
v___x_2104_ = v___x_2098_;
v_isShared_2105_ = v_isSharedCheck_2109_;
goto v_resetjp_2103_;
}
else
{
lean_inc(v_a_2102_);
lean_dec(v___x_2098_);
v___x_2104_ = lean_box(0);
v_isShared_2105_ = v_isSharedCheck_2109_;
goto v_resetjp_2103_;
}
v_resetjp_2103_:
{
lean_object* v___x_2107_; 
if (v_isShared_2105_ == 0)
{
v___x_2107_ = v___x_2104_;
goto v_reusejp_2106_;
}
else
{
lean_object* v_reuseFailAlloc_2108_; 
v_reuseFailAlloc_2108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2108_, 0, v_a_2102_);
v___x_2107_ = v_reuseFailAlloc_2108_;
goto v_reusejp_2106_;
}
v_reusejp_2106_:
{
return v___x_2107_;
}
}
}
}
else
{
lean_object* v_a_2110_; lean_object* v___x_2112_; uint8_t v_isShared_2113_; uint8_t v_isSharedCheck_2117_; 
lean_dec(v_a_2093_);
lean_dec_ref(v___y_2025_);
lean_dec_ref(v_f_794_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
v_a_2110_ = lean_ctor_get(v___x_2096_, 0);
v_isSharedCheck_2117_ = !lean_is_exclusive(v___x_2096_);
if (v_isSharedCheck_2117_ == 0)
{
v___x_2112_ = v___x_2096_;
v_isShared_2113_ = v_isSharedCheck_2117_;
goto v_resetjp_2111_;
}
else
{
lean_inc(v_a_2110_);
lean_dec(v___x_2096_);
v___x_2112_ = lean_box(0);
v_isShared_2113_ = v_isSharedCheck_2117_;
goto v_resetjp_2111_;
}
v_resetjp_2111_:
{
lean_object* v___x_2115_; 
if (v_isShared_2113_ == 0)
{
v___x_2115_ = v___x_2112_;
goto v_reusejp_2114_;
}
else
{
lean_object* v_reuseFailAlloc_2116_; 
v_reuseFailAlloc_2116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2116_, 0, v_a_2110_);
v___x_2115_ = v_reuseFailAlloc_2116_;
goto v_reusejp_2114_;
}
v_reusejp_2114_:
{
return v___x_2115_;
}
}
}
}
else
{
lean_object* v_a_2118_; lean_object* v___x_2120_; uint8_t v_isShared_2121_; uint8_t v_isSharedCheck_2125_; 
lean_dec(v_a_2093_);
lean_dec_ref(v___y_2025_);
lean_dec_ref(v_f_794_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
v_a_2118_ = lean_ctor_get(v___x_2094_, 0);
v_isSharedCheck_2125_ = !lean_is_exclusive(v___x_2094_);
if (v_isSharedCheck_2125_ == 0)
{
v___x_2120_ = v___x_2094_;
v_isShared_2121_ = v_isSharedCheck_2125_;
goto v_resetjp_2119_;
}
else
{
lean_inc(v_a_2118_);
lean_dec(v___x_2094_);
v___x_2120_ = lean_box(0);
v_isShared_2121_ = v_isSharedCheck_2125_;
goto v_resetjp_2119_;
}
v_resetjp_2119_:
{
lean_object* v___x_2123_; 
if (v_isShared_2121_ == 0)
{
v___x_2123_ = v___x_2120_;
goto v_reusejp_2122_;
}
else
{
lean_object* v_reuseFailAlloc_2124_; 
v_reuseFailAlloc_2124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2124_, 0, v_a_2118_);
v___x_2123_ = v_reuseFailAlloc_2124_;
goto v_reusejp_2122_;
}
v_reusejp_2122_:
{
return v___x_2123_;
}
}
}
}
else
{
lean_object* v_a_2126_; lean_object* v___x_2128_; uint8_t v_isShared_2129_; uint8_t v_isSharedCheck_2133_; 
lean_dec_ref(v___y_2025_);
lean_dec_ref(v_f_794_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
v_a_2126_ = lean_ctor_get(v___x_2092_, 0);
v_isSharedCheck_2133_ = !lean_is_exclusive(v___x_2092_);
if (v_isSharedCheck_2133_ == 0)
{
v___x_2128_ = v___x_2092_;
v_isShared_2129_ = v_isSharedCheck_2133_;
goto v_resetjp_2127_;
}
else
{
lean_inc(v_a_2126_);
lean_dec(v___x_2092_);
v___x_2128_ = lean_box(0);
v_isShared_2129_ = v_isSharedCheck_2133_;
goto v_resetjp_2127_;
}
v_resetjp_2127_:
{
lean_object* v___x_2131_; 
if (v_isShared_2129_ == 0)
{
v___x_2131_ = v___x_2128_;
goto v_reusejp_2130_;
}
else
{
lean_object* v_reuseFailAlloc_2132_; 
v_reuseFailAlloc_2132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2132_, 0, v_a_2126_);
v___x_2131_ = v_reuseFailAlloc_2132_;
goto v_reusejp_2130_;
}
v_reusejp_2130_:
{
return v___x_2131_;
}
}
}
}
else
{
lean_object* v_a_2134_; lean_object* v___x_2136_; uint8_t v_isShared_2137_; uint8_t v_isSharedCheck_2141_; 
lean_dec_ref(v___y_2025_);
lean_dec_ref(v_f_794_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
v_a_2134_ = lean_ctor_get(v___x_2090_, 0);
v_isSharedCheck_2141_ = !lean_is_exclusive(v___x_2090_);
if (v_isSharedCheck_2141_ == 0)
{
v___x_2136_ = v___x_2090_;
v_isShared_2137_ = v_isSharedCheck_2141_;
goto v_resetjp_2135_;
}
else
{
lean_inc(v_a_2134_);
lean_dec(v___x_2090_);
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
case 4:
{
lean_dec_ref(v___x_2033_);
lean_dec_ref(v___x_2032_);
lean_dec(v_a_2027_);
lean_dec(v_a_1044_);
v___y_2004_ = v___y_2025_;
v___y_2005_ = v___x_2028_;
v___y_2006_ = v_a_796_;
v___y_2007_ = v_a_797_;
v___y_2008_ = v_a_798_;
v___y_2009_ = v_a_799_;
v___y_2010_ = v_a_800_;
v___y_2011_ = v_a_801_;
goto v___jp_2003_;
}
case 5:
{
lean_dec_ref(v___x_2033_);
lean_dec_ref(v___x_2032_);
lean_dec(v_a_2027_);
lean_dec(v_a_1044_);
v___y_2004_ = v___y_2025_;
v___y_2005_ = v___x_2028_;
v___y_2006_ = v_a_796_;
v___y_2007_ = v_a_797_;
v___y_2008_ = v_a_798_;
v___y_2009_ = v_a_799_;
v___y_2010_ = v_a_800_;
v___y_2011_ = v_a_801_;
goto v___jp_2003_;
}
case 6:
{
lean_object* v___x_2142_; lean_object* v___x_2143_; 
lean_dec_ref(v___x_2033_);
lean_dec(v_a_2027_);
lean_dec(v_a_1044_);
v___x_2142_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_f_794_);
v___x_2143_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___lam__0(v_f_794_, v___x_2142_, v_a_796_, v_a_797_, v_a_798_, v_a_799_, v_a_800_, v_a_801_);
if (lean_obj_tag(v___x_2143_) == 0)
{
if (v_polarity_795_ == 0)
{
lean_object* v_a_2144_; 
v_a_2144_ = lean_ctor_get(v___x_2143_, 0);
lean_inc(v_a_2144_);
lean_dec_ref_known(v___x_2143_, 1);
v___y_1306_ = v_a_2144_;
v___y_1307_ = v___y_2025_;
v___y_1308_ = v___x_2028_;
v___y_1309_ = v___x_2032_;
v___y_1310_ = v___x_2142_;
v___y_1311_ = v___x_1395_;
goto v___jp_1305_;
}
else
{
lean_object* v_a_2145_; uint8_t v___x_2146_; 
v_a_2145_ = lean_ctor_get(v___x_2143_, 0);
lean_inc(v_a_2145_);
lean_dec_ref_known(v___x_2143_, 1);
v___x_2146_ = 0;
v___y_1306_ = v_a_2145_;
v___y_1307_ = v___y_2025_;
v___y_1308_ = v___x_2028_;
v___y_1309_ = v___x_2032_;
v___y_1310_ = v___x_2142_;
v___y_1311_ = v___x_2146_;
goto v___jp_1305_;
}
}
else
{
lean_object* v_a_2147_; lean_object* v___x_2149_; uint8_t v_isShared_2150_; uint8_t v_isSharedCheck_2154_; 
lean_dec_ref(v___x_2032_);
lean_dec_ref(v___y_2025_);
lean_dec_ref(v_f_794_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
v_a_2147_ = lean_ctor_get(v___x_2143_, 0);
v_isSharedCheck_2154_ = !lean_is_exclusive(v___x_2143_);
if (v_isSharedCheck_2154_ == 0)
{
v___x_2149_ = v___x_2143_;
v_isShared_2150_ = v_isSharedCheck_2154_;
goto v_resetjp_2148_;
}
else
{
lean_inc(v_a_2147_);
lean_dec(v___x_2143_);
v___x_2149_ = lean_box(0);
v_isShared_2150_ = v_isSharedCheck_2154_;
goto v_resetjp_2148_;
}
v_resetjp_2148_:
{
lean_object* v___x_2152_; 
if (v_isShared_2150_ == 0)
{
v___x_2152_ = v___x_2149_;
goto v_reusejp_2151_;
}
else
{
lean_object* v_reuseFailAlloc_2153_; 
v_reuseFailAlloc_2153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2153_, 0, v_a_2147_);
v___x_2152_ = v_reuseFailAlloc_2153_;
goto v_reusejp_2151_;
}
v_reusejp_2151_:
{
return v___x_2152_;
}
}
}
}
case 7:
{
lean_dec_ref(v___x_2033_);
lean_dec_ref(v___x_2032_);
lean_dec(v_a_2027_);
lean_dec_ref(v___y_2025_);
lean_dec(v_a_1044_);
v___y_1397_ = v_a_796_;
v___y_1398_ = v_a_797_;
v___y_1399_ = v_a_798_;
v___y_1400_ = v_a_799_;
v___y_1401_ = v_a_800_;
v___y_1402_ = v_a_801_;
goto v___jp_1396_;
}
case 8:
{
lean_dec_ref(v___x_2033_);
lean_dec_ref(v___x_2032_);
lean_dec(v_a_2027_);
lean_dec_ref(v___y_2025_);
lean_dec(v_a_1044_);
v___y_1397_ = v_a_796_;
v___y_1398_ = v_a_797_;
v___y_1399_ = v_a_798_;
v___y_1400_ = v_a_799_;
v___y_1401_ = v_a_800_;
v___y_1402_ = v_a_801_;
goto v___jp_1396_;
}
default: 
{
lean_object* v___x_2155_; lean_object* v___x_2156_; uint8_t v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; 
lean_dec_ref(v___x_2033_);
lean_dec_ref(v___x_2032_);
lean_dec_ref(v___y_2025_);
lean_dec(v_a_1044_);
lean_dec_ref(v_f_794_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
v___x_2155_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__58, &lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__58_once, _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__58);
v___x_2156_ = lean_unsigned_to_nat(0u);
v___x_2157_ = lean_unbox(v_a_2027_);
lean_dec(v_a_2027_);
v___x_2158_ = lp_vampireReplay_Vampire_instReprConnective_repr(v___x_2157_, v___x_2156_);
v___x_2159_ = l_Lean_MessageData_ofFormat(v___x_2158_);
v___x_2160_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2160_, 0, v___x_2155_);
lean_ctor_set(v___x_2160_, 1, v___x_2159_);
v___x_2161_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2160_, v_a_798_, v_a_799_, v_a_800_, v_a_801_);
return v___x_2161_;
}
}
}
else
{
lean_object* v_a_2162_; lean_object* v___x_2164_; uint8_t v_isShared_2165_; uint8_t v_isSharedCheck_2169_; 
lean_dec_ref(v___y_2025_);
lean_dec(v_a_1044_);
lean_dec_ref(v_f_794_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
v_a_2162_ = lean_ctor_get(v___x_2026_, 0);
v_isSharedCheck_2169_ = !lean_is_exclusive(v___x_2026_);
if (v_isSharedCheck_2169_ == 0)
{
v___x_2164_ = v___x_2026_;
v_isShared_2165_ = v_isSharedCheck_2169_;
goto v_resetjp_2163_;
}
else
{
lean_inc(v_a_2162_);
lean_dec(v___x_2026_);
v___x_2164_ = lean_box(0);
v_isShared_2165_ = v_isSharedCheck_2169_;
goto v_resetjp_2163_;
}
v_resetjp_2163_:
{
lean_object* v___x_2167_; 
if (v_isShared_2165_ == 0)
{
v___x_2167_ = v___x_2164_;
goto v_reusejp_2166_;
}
else
{
lean_object* v_reuseFailAlloc_2168_; 
v_reuseFailAlloc_2168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2168_, 0, v_a_2162_);
v___x_2167_ = v_reuseFailAlloc_2168_;
goto v_reusejp_2166_;
}
v_reusejp_2166_:
{
return v___x_2167_;
}
}
}
}
}
else
{
lean_object* v_a_2172_; lean_object* v___x_2174_; uint8_t v_isShared_2175_; uint8_t v_isSharedCheck_2179_; 
lean_dec_ref(v_f_794_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
v_a_2172_ = lean_ctor_get(v___x_1043_, 0);
v_isSharedCheck_2179_ = !lean_is_exclusive(v___x_1043_);
if (v_isSharedCheck_2179_ == 0)
{
v___x_2174_ = v___x_1043_;
v_isShared_2175_ = v_isSharedCheck_2179_;
goto v_resetjp_2173_;
}
else
{
lean_inc(v_a_2172_);
lean_dec(v___x_1043_);
v___x_2174_ = lean_box(0);
v_isShared_2175_ = v_isSharedCheck_2179_;
goto v_resetjp_2173_;
}
v_resetjp_2173_:
{
lean_object* v___x_2177_; 
if (v_isShared_2175_ == 0)
{
v___x_2177_ = v___x_2174_;
goto v_reusejp_2176_;
}
else
{
lean_object* v_reuseFailAlloc_2178_; 
v_reuseFailAlloc_2178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2178_, 0, v_a_2172_);
v___x_2177_ = v_reuseFailAlloc_2178_;
goto v_reusejp_2176_;
}
v_reusejp_2176_:
{
return v___x_2177_;
}
}
}
v___jp_803_:
{
lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; 
v___x_807_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_807_, 0, v___y_805_);
lean_ctor_set(v___x_807_, 1, v___y_806_);
v___x_808_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_808_, 0, v___y_804_);
lean_ctor_set(v___x_808_, 1, v___x_807_);
v___x_809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_809_, 0, v___x_808_);
return v___x_809_;
}
v___jp_810_:
{
lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; 
v___x_820_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__1));
v___x_821_ = lean_mk_empty_array_with_capacity(v___y_811_);
v___x_822_ = lean_array_push(v___x_821_, v___y_818_);
v___x_823_ = l_Lean_Meta_mkAppM(v___x_820_, v___x_822_, v___y_815_, v___y_812_, v___y_817_, v___y_819_);
if (lean_obj_tag(v___x_823_) == 0)
{
lean_object* v_a_824_; lean_object* v___x_826_; uint8_t v_isShared_827_; uint8_t v_isSharedCheck_836_; 
v_a_824_ = lean_ctor_get(v___x_823_, 0);
v_isSharedCheck_836_ = !lean_is_exclusive(v___x_823_);
if (v_isSharedCheck_836_ == 0)
{
v___x_826_ = v___x_823_;
v_isShared_827_ = v_isSharedCheck_836_;
goto v_resetjp_825_;
}
else
{
lean_inc(v_a_824_);
lean_dec(v___x_823_);
v___x_826_ = lean_box(0);
v_isShared_827_ = v_isSharedCheck_836_;
goto v_resetjp_825_;
}
v_resetjp_825_:
{
lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_834_; 
v___x_828_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___lam__0___closed__1));
v___x_829_ = l_Lean_Expr_const___override(v___x_828_, v___y_816_);
v___x_830_ = l_Lean_Expr_app___override(v___x_829_, v___y_814_);
v___x_831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_831_, 0, v___x_830_);
lean_ctor_set(v___x_831_, 1, v_a_824_);
v___x_832_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_832_, 0, v___y_813_);
lean_ctor_set(v___x_832_, 1, v___x_831_);
if (v_isShared_827_ == 0)
{
lean_ctor_set(v___x_826_, 0, v___x_832_);
v___x_834_ = v___x_826_;
goto v_reusejp_833_;
}
else
{
lean_object* v_reuseFailAlloc_835_; 
v_reuseFailAlloc_835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_835_, 0, v___x_832_);
v___x_834_ = v_reuseFailAlloc_835_;
goto v_reusejp_833_;
}
v_reusejp_833_:
{
return v___x_834_;
}
}
}
else
{
lean_object* v_a_837_; lean_object* v___x_839_; uint8_t v_isShared_840_; uint8_t v_isSharedCheck_844_; 
lean_dec(v___y_816_);
lean_dec_ref(v___y_814_);
lean_dec_ref(v___y_813_);
v_a_837_ = lean_ctor_get(v___x_823_, 0);
v_isSharedCheck_844_ = !lean_is_exclusive(v___x_823_);
if (v_isSharedCheck_844_ == 0)
{
v___x_839_ = v___x_823_;
v_isShared_840_ = v_isSharedCheck_844_;
goto v_resetjp_838_;
}
else
{
lean_inc(v_a_837_);
lean_dec(v___x_823_);
v___x_839_ = lean_box(0);
v_isShared_840_ = v_isSharedCheck_844_;
goto v_resetjp_838_;
}
v_resetjp_838_:
{
lean_object* v___x_842_; 
if (v_isShared_840_ == 0)
{
v___x_842_ = v___x_839_;
goto v_reusejp_841_;
}
else
{
lean_object* v_reuseFailAlloc_843_; 
v_reuseFailAlloc_843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_843_, 0, v_a_837_);
v___x_842_ = v_reuseFailAlloc_843_;
goto v_reusejp_841_;
}
v_reusejp_841_:
{
return v___x_842_;
}
}
}
}
v___jp_845_:
{
lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; 
lean_inc_ref(v___y_846_);
v___x_848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_848_, 0, v___y_846_);
lean_ctor_set(v___x_848_, 1, v_____do__lift_847_);
v___x_849_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_849_, 0, v___y_846_);
lean_ctor_set(v___x_849_, 1, v___x_848_);
v___x_850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_850_, 0, v___x_849_);
return v___x_850_;
}
v___jp_851_:
{
lean_object* v___x_865_; 
lean_inc(v_snd_864_);
lean_inc(v_fst_863_);
lean_inc(v___y_860_);
lean_inc(v___y_855_);
v___x_865_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_distributed___redArg(v___y_855_, v___y_860_, v_fst_863_, v_snd_864_, v___y_858_, v___y_862_, v___y_857_, v___y_852_, v___y_861_, v___y_856_, v___y_854_);
lean_dec_ref(v___y_862_);
lean_dec_ref(v___y_858_);
if (lean_obj_tag(v___x_865_) == 0)
{
lean_object* v_a_866_; lean_object* v___x_868_; uint8_t v_isShared_869_; uint8_t v_isSharedCheck_875_; 
v_a_866_ = lean_ctor_get(v___x_865_, 0);
v_isSharedCheck_875_ = !lean_is_exclusive(v___x_865_);
if (v_isSharedCheck_875_ == 0)
{
v___x_868_ = v___x_865_;
v_isShared_869_ = v_isSharedCheck_875_;
goto v_resetjp_867_;
}
else
{
lean_inc(v_a_866_);
lean_dec(v___x_865_);
v___x_868_ = lean_box(0);
v_isShared_869_ = v_isSharedCheck_875_;
goto v_resetjp_867_;
}
v_resetjp_867_:
{
lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_873_; 
v___x_870_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_870_, 0, v___y_859_);
lean_ctor_set(v___x_870_, 1, v_a_866_);
v___x_871_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_871_, 0, v___y_853_);
lean_ctor_set(v___x_871_, 1, v___x_870_);
if (v_isShared_869_ == 0)
{
lean_ctor_set(v___x_868_, 0, v___x_871_);
v___x_873_ = v___x_868_;
goto v_reusejp_872_;
}
else
{
lean_object* v_reuseFailAlloc_874_; 
v_reuseFailAlloc_874_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_874_, 0, v___x_871_);
v___x_873_ = v_reuseFailAlloc_874_;
goto v_reusejp_872_;
}
v_reusejp_872_:
{
return v___x_873_;
}
}
}
else
{
lean_object* v_a_876_; lean_object* v___x_878_; uint8_t v_isShared_879_; uint8_t v_isSharedCheck_883_; 
lean_dec_ref(v___y_859_);
lean_dec_ref(v___y_853_);
v_a_876_ = lean_ctor_get(v___x_865_, 0);
v_isSharedCheck_883_ = !lean_is_exclusive(v___x_865_);
if (v_isSharedCheck_883_ == 0)
{
v___x_878_ = v___x_865_;
v_isShared_879_ = v_isSharedCheck_883_;
goto v_resetjp_877_;
}
else
{
lean_inc(v_a_876_);
lean_dec(v___x_865_);
v___x_878_ = lean_box(0);
v_isShared_879_ = v_isSharedCheck_883_;
goto v_resetjp_877_;
}
v_resetjp_877_:
{
lean_object* v___x_881_; 
if (v_isShared_879_ == 0)
{
v___x_881_ = v___x_878_;
goto v_reusejp_880_;
}
else
{
lean_object* v_reuseFailAlloc_882_; 
v_reuseFailAlloc_882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_882_, 0, v_a_876_);
v___x_881_ = v_reuseFailAlloc_882_;
goto v_reusejp_880_;
}
v_reusejp_880_:
{
return v___x_881_;
}
}
}
}
v___jp_884_:
{
lean_object* v___x_896_; lean_object* v___x_897_; 
v___x_896_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Normalize_normalize_spec__2(v___y_891_, v___y_887_, v___y_894_);
lean_inc(v___y_895_);
v___x_897_ = lp_vampireReplay_Vampire_Reconstruct_congrJunction___redArg(v___y_895_, v___x_896_, v___y_890_, v___y_885_, v___y_893_, v___y_889_, v___y_888_);
lean_dec_ref(v___x_896_);
if (lean_obj_tag(v___x_897_) == 0)
{
lean_object* v_a_898_; lean_object* v___x_900_; uint8_t v_isShared_901_; uint8_t v_isSharedCheck_907_; 
v_a_898_ = lean_ctor_get(v___x_897_, 0);
v_isSharedCheck_907_ = !lean_is_exclusive(v___x_897_);
if (v_isSharedCheck_907_ == 0)
{
v___x_900_ = v___x_897_;
v_isShared_901_ = v_isSharedCheck_907_;
goto v_resetjp_899_;
}
else
{
lean_inc(v_a_898_);
lean_dec(v___x_897_);
v___x_900_ = lean_box(0);
v_isShared_901_ = v_isSharedCheck_907_;
goto v_resetjp_899_;
}
v_resetjp_899_:
{
lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_905_; 
v___x_902_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_902_, 0, v___y_892_);
lean_ctor_set(v___x_902_, 1, v_a_898_);
v___x_903_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_903_, 0, v___y_886_);
lean_ctor_set(v___x_903_, 1, v___x_902_);
if (v_isShared_901_ == 0)
{
lean_ctor_set(v___x_900_, 0, v___x_903_);
v___x_905_ = v___x_900_;
goto v_reusejp_904_;
}
else
{
lean_object* v_reuseFailAlloc_906_; 
v_reuseFailAlloc_906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_906_, 0, v___x_903_);
v___x_905_ = v_reuseFailAlloc_906_;
goto v_reusejp_904_;
}
v_reusejp_904_:
{
return v___x_905_;
}
}
}
else
{
lean_object* v_a_908_; lean_object* v___x_910_; uint8_t v_isShared_911_; uint8_t v_isSharedCheck_915_; 
lean_dec_ref(v___y_892_);
lean_dec_ref(v___y_886_);
v_a_908_ = lean_ctor_get(v___x_897_, 0);
v_isSharedCheck_915_ = !lean_is_exclusive(v___x_897_);
if (v_isSharedCheck_915_ == 0)
{
v___x_910_ = v___x_897_;
v_isShared_911_ = v_isSharedCheck_915_;
goto v_resetjp_909_;
}
else
{
lean_inc(v_a_908_);
lean_dec(v___x_897_);
v___x_910_ = lean_box(0);
v_isShared_911_ = v_isSharedCheck_915_;
goto v_resetjp_909_;
}
v_resetjp_909_:
{
lean_object* v___x_913_; 
if (v_isShared_911_ == 0)
{
v___x_913_ = v___x_910_;
goto v_reusejp_912_;
}
else
{
lean_object* v_reuseFailAlloc_914_; 
v_reuseFailAlloc_914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_914_, 0, v_a_908_);
v___x_913_ = v_reuseFailAlloc_914_;
goto v_reusejp_912_;
}
v_reusejp_912_:
{
return v___x_913_;
}
}
}
}
v___jp_916_:
{
lean_object* v___x_934_; 
lean_inc(v_snd_933_);
lean_inc(v_fst_932_);
v___x_934_ = lp_vampireReplay_Vampire_Reconstruct_junction(v_fst_932_, v_snd_933_, v___y_928_);
if (v_polarity_795_ == 0)
{
lean_object* v___x_935_; 
v___x_935_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_formula_spec__3(v_sorts_792_, v_vars_793_, v___y_929_, v___y_918_, v___y_926_, v___y_927_, v___y_930_, v___y_922_, v___y_921_, v___y_925_, v___y_923_);
if (lean_obj_tag(v___x_935_) == 0)
{
if (v___y_924_ == 0)
{
lean_object* v_a_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; 
v_a_936_ = lean_ctor_get(v___x_935_, 0);
lean_inc(v_a_936_);
lean_dec_ref_known(v___x_935_, 1);
v___x_937_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__3));
v___x_938_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__5));
v___x_939_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__7));
v___x_940_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__9));
v___y_852_ = v___y_922_;
v___y_853_ = v___y_917_;
v___y_854_ = v___y_923_;
v___y_855_ = v___x_937_;
v___y_856_ = v___y_925_;
v___y_857_ = v___y_919_;
v___y_858_ = v_a_936_;
v___y_859_ = v___x_934_;
v___y_860_ = v___x_938_;
v___y_861_ = v___y_921_;
v___y_862_ = v___y_931_;
v_fst_863_ = v___x_939_;
v_snd_864_ = v___x_940_;
goto v___jp_851_;
}
else
{
lean_object* v_a_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; 
v_a_941_ = lean_ctor_get(v___x_935_, 0);
lean_inc(v_a_941_);
lean_dec_ref_known(v___x_935_, 1);
v___x_942_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__11));
v___x_943_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__13));
v___x_944_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__15));
v___x_945_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__17));
v___y_852_ = v___y_922_;
v___y_853_ = v___y_917_;
v___y_854_ = v___y_923_;
v___y_855_ = v___x_942_;
v___y_856_ = v___y_925_;
v___y_857_ = v___y_919_;
v___y_858_ = v_a_941_;
v___y_859_ = v___x_934_;
v___y_860_ = v___x_943_;
v___y_861_ = v___y_921_;
v___y_862_ = v___y_931_;
v_fst_863_ = v___x_944_;
v_snd_864_ = v___x_945_;
goto v___jp_851_;
}
}
else
{
lean_object* v_a_946_; lean_object* v___x_948_; uint8_t v_isShared_949_; uint8_t v_isSharedCheck_953_; 
lean_dec_ref(v___x_934_);
lean_dec_ref(v___y_931_);
lean_dec_ref(v___y_917_);
v_a_946_ = lean_ctor_get(v___x_935_, 0);
v_isSharedCheck_953_ = !lean_is_exclusive(v___x_935_);
if (v_isSharedCheck_953_ == 0)
{
v___x_948_ = v___x_935_;
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
else
{
lean_inc(v_a_946_);
lean_dec(v___x_935_);
v___x_948_ = lean_box(0);
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
v_resetjp_947_:
{
lean_object* v___x_951_; 
if (v_isShared_949_ == 0)
{
v___x_951_ = v___x_948_;
goto v_reusejp_950_;
}
else
{
lean_object* v_reuseFailAlloc_952_; 
v_reuseFailAlloc_952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_952_, 0, v_a_946_);
v___x_951_ = v_reuseFailAlloc_952_;
goto v_reusejp_950_;
}
v_reusejp_950_:
{
return v___x_951_;
}
}
}
}
else
{
lean_dec_ref(v___y_926_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
if (v___y_924_ == 0)
{
lean_object* v___x_954_; 
v___x_954_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__13));
v___y_885_ = v___y_922_;
v___y_886_ = v___y_917_;
v___y_887_ = v___y_918_;
v___y_888_ = v___y_923_;
v___y_889_ = v___y_925_;
v___y_890_ = v___y_919_;
v___y_891_ = v___y_920_;
v___y_892_ = v___x_934_;
v___y_893_ = v___y_921_;
v___y_894_ = v___y_931_;
v___y_895_ = v___x_954_;
goto v___jp_884_;
}
else
{
lean_object* v___x_955_; 
v___x_955_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__5));
v___y_885_ = v___y_922_;
v___y_886_ = v___y_917_;
v___y_887_ = v___y_918_;
v___y_888_ = v___y_923_;
v___y_889_ = v___y_925_;
v___y_890_ = v___y_919_;
v___y_891_ = v___y_920_;
v___y_892_ = v___x_934_;
v___y_893_ = v___y_921_;
v___y_894_ = v___y_931_;
v___y_895_ = v___x_955_;
goto v___jp_884_;
}
}
}
v___jp_956_:
{
lean_object* v___x_972_; lean_object* v___x_973_; 
v___x_972_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__15));
v___x_973_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__17));
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
v___y_928_ = v___y_969_;
v___y_929_ = v___y_968_;
v___y_930_ = v___y_971_;
v___y_931_ = v___y_970_;
v_fst_932_ = v___x_972_;
v_snd_933_ = v___x_973_;
goto v___jp_916_;
}
v___jp_974_:
{
lean_object* v___x_990_; lean_object* v___x_991_; 
v___x_990_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__7));
v___x_991_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__9));
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
v___y_928_ = v___y_987_;
v___y_929_ = v___y_986_;
v___y_930_ = v___y_989_;
v___y_931_ = v___y_988_;
v_fst_932_ = v___x_990_;
v_snd_933_ = v___x_991_;
goto v___jp_916_;
}
v___jp_992_:
{
lean_object* v___x_1001_; size_t v_sz_1002_; size_t v___x_1003_; lean_object* v___x_1004_; 
v___x_1001_ = lp_vampireReplay_Vampire_Formula_subformulas(v_f_794_);
v_sz_1002_ = lean_array_size(v___x_1001_);
v___x_1003_ = ((size_t)0ULL);
lean_inc_ref(v___x_1001_);
lean_inc_ref(v_vars_793_);
lean_inc_ref(v_sorts_792_);
v___x_1004_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Normalize_normalize_spec__0(v_expand_791_, v_sorts_792_, v_vars_793_, v_polarity_795_, v_sz_1002_, v___x_1003_, v___x_1001_, v___y_997_, v___y_999_, v___y_993_, v___y_998_, v___y_996_, v___y_995_);
if (lean_obj_tag(v___x_1004_) == 0)
{
lean_object* v_a_1005_; lean_object* v___x_1007_; uint8_t v_isShared_1008_; uint8_t v_isSharedCheck_1034_; 
v_a_1005_ = lean_ctor_get(v___x_1004_, 0);
v_isSharedCheck_1034_ = !lean_is_exclusive(v___x_1004_);
if (v_isSharedCheck_1034_ == 0)
{
v___x_1007_ = v___x_1004_;
v_isShared_1008_ = v_isSharedCheck_1034_;
goto v_resetjp_1006_;
}
else
{
lean_inc(v_a_1005_);
lean_dec(v___x_1004_);
v___x_1007_ = lean_box(0);
v_isShared_1008_ = v_isSharedCheck_1034_;
goto v_resetjp_1006_;
}
v_resetjp_1006_:
{
lean_object* v___x_1009_; lean_object* v___x_1010_; uint8_t v___x_1011_; 
v___x_1009_ = lean_array_get_size(v_a_1005_);
v___x_1010_ = lean_unsigned_to_nat(0u);
v___x_1011_ = lean_nat_dec_eq(v___x_1009_, v___x_1010_);
if (v___x_1011_ == 0)
{
lean_object* v___x_1012_; uint8_t v___x_1013_; 
v___x_1012_ = lean_unsigned_to_nat(1u);
v___x_1013_ = lean_nat_dec_eq(v___x_1009_, v___x_1012_);
if (v___x_1013_ == 0)
{
size_t v_sz_1014_; lean_object* v___x_1015_; 
lean_del_object(v___x_1007_);
v_sz_1014_ = lean_array_size(v_a_1005_);
lean_inc(v_a_1005_);
v___x_1015_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Normalize_normalize_spec__1(v_sz_1014_, v___x_1003_, v_a_1005_);
if (v___y_1000_ == 0)
{
if (v_polarity_795_ == 0)
{
v___y_957_ = v___y_994_;
v___y_958_ = v___x_1003_;
v___y_959_ = v___x_1010_;
v___y_960_ = v_sz_1014_;
v___y_961_ = v___y_998_;
v___y_962_ = v___y_993_;
v___y_963_ = v___y_995_;
v___y_964_ = v___y_1000_;
v___y_965_ = v___y_996_;
v___y_966_ = v___x_1001_;
v___y_967_ = v___y_997_;
v___y_968_ = v_sz_1002_;
v___y_969_ = v___x_1015_;
v___y_970_ = v_a_1005_;
v___y_971_ = v___y_999_;
goto v___jp_956_;
}
else
{
v___y_975_ = v___y_994_;
v___y_976_ = v___x_1003_;
v___y_977_ = v___x_1010_;
v___y_978_ = v_sz_1014_;
v___y_979_ = v___y_998_;
v___y_980_ = v___y_993_;
v___y_981_ = v___y_995_;
v___y_982_ = v___y_1000_;
v___y_983_ = v___y_996_;
v___y_984_ = v___x_1001_;
v___y_985_ = v___y_997_;
v___y_986_ = v_sz_1002_;
v___y_987_ = v___x_1015_;
v___y_988_ = v_a_1005_;
v___y_989_ = v___y_999_;
goto v___jp_974_;
}
}
else
{
if (v_polarity_795_ == 0)
{
v___y_975_ = v___y_994_;
v___y_976_ = v___x_1003_;
v___y_977_ = v___x_1010_;
v___y_978_ = v_sz_1014_;
v___y_979_ = v___y_998_;
v___y_980_ = v___y_993_;
v___y_981_ = v___y_995_;
v___y_982_ = v___y_1000_;
v___y_983_ = v___y_996_;
v___y_984_ = v___x_1001_;
v___y_985_ = v___y_997_;
v___y_986_ = v_sz_1002_;
v___y_987_ = v___x_1015_;
v___y_988_ = v_a_1005_;
v___y_989_ = v___y_999_;
goto v___jp_974_;
}
else
{
v___y_957_ = v___y_994_;
v___y_958_ = v___x_1003_;
v___y_959_ = v___x_1010_;
v___y_960_ = v_sz_1014_;
v___y_961_ = v___y_998_;
v___y_962_ = v___y_993_;
v___y_963_ = v___y_995_;
v___y_964_ = v___y_1000_;
v___y_965_ = v___y_996_;
v___y_966_ = v___x_1001_;
v___y_967_ = v___y_997_;
v___y_968_ = v_sz_1002_;
v___y_969_ = v___x_1015_;
v___y_970_ = v_a_1005_;
v___y_971_ = v___y_999_;
goto v___jp_956_;
}
}
}
else
{
uint8_t v___x_1016_; 
lean_dec_ref(v___x_1001_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
v___x_1016_ = lean_nat_dec_lt(v___x_1010_, v___x_1009_);
if (v___x_1016_ == 0)
{
lean_object* v___x_1017_; lean_object* v___x_1018_; 
lean_del_object(v___x_1007_);
lean_dec(v_a_1005_);
lean_dec_ref(v___y_994_);
v___x_1017_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__19, &lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__19_once, _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__19);
v___x_1018_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1017_, v___y_993_, v___y_998_, v___y_996_, v___y_995_);
return v___x_1018_;
}
else
{
lean_object* v___x_1019_; lean_object* v_snd_1020_; lean_object* v___x_1022_; uint8_t v_isShared_1023_; uint8_t v_isSharedCheck_1030_; 
v___x_1019_ = lean_array_fget(v_a_1005_, v___x_1010_);
lean_dec(v_a_1005_);
v_snd_1020_ = lean_ctor_get(v___x_1019_, 1);
v_isSharedCheck_1030_ = !lean_is_exclusive(v___x_1019_);
if (v_isSharedCheck_1030_ == 0)
{
lean_object* v_unused_1031_; 
v_unused_1031_ = lean_ctor_get(v___x_1019_, 0);
lean_dec(v_unused_1031_);
v___x_1022_ = v___x_1019_;
v_isShared_1023_ = v_isSharedCheck_1030_;
goto v_resetjp_1021_;
}
else
{
lean_inc(v_snd_1020_);
lean_dec(v___x_1019_);
v___x_1022_ = lean_box(0);
v_isShared_1023_ = v_isSharedCheck_1030_;
goto v_resetjp_1021_;
}
v_resetjp_1021_:
{
lean_object* v___x_1025_; 
if (v_isShared_1023_ == 0)
{
lean_ctor_set(v___x_1022_, 0, v___y_994_);
v___x_1025_ = v___x_1022_;
goto v_reusejp_1024_;
}
else
{
lean_object* v_reuseFailAlloc_1029_; 
v_reuseFailAlloc_1029_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1029_, 0, v___y_994_);
lean_ctor_set(v_reuseFailAlloc_1029_, 1, v_snd_1020_);
v___x_1025_ = v_reuseFailAlloc_1029_;
goto v_reusejp_1024_;
}
v_reusejp_1024_:
{
lean_object* v___x_1027_; 
if (v_isShared_1008_ == 0)
{
lean_ctor_set(v___x_1007_, 0, v___x_1025_);
v___x_1027_ = v___x_1007_;
goto v_reusejp_1026_;
}
else
{
lean_object* v_reuseFailAlloc_1028_; 
v_reuseFailAlloc_1028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1028_, 0, v___x_1025_);
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
}
}
else
{
lean_object* v___x_1032_; lean_object* v___x_1033_; 
lean_del_object(v___x_1007_);
lean_dec(v_a_1005_);
lean_dec_ref(v___x_1001_);
lean_dec_ref(v___y_994_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
v___x_1032_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__19, &lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__19_once, _init_lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___closed__19);
v___x_1033_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1032_, v___y_993_, v___y_998_, v___y_996_, v___y_995_);
return v___x_1033_;
}
}
}
else
{
lean_object* v_a_1035_; lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1042_; 
lean_dec_ref(v___x_1001_);
lean_dec_ref(v___y_994_);
lean_dec_ref(v_vars_793_);
lean_dec_ref(v_sorts_792_);
v_a_1035_ = lean_ctor_get(v___x_1004_, 0);
v_isSharedCheck_1042_ = !lean_is_exclusive(v___x_1004_);
if (v_isSharedCheck_1042_ == 0)
{
v___x_1037_ = v___x_1004_;
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
else
{
lean_inc(v_a_1035_);
lean_dec(v___x_1004_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
lean_object* v___x_1040_; 
if (v_isShared_1038_ == 0)
{
v___x_1040_ = v___x_1037_;
goto v_reusejp_1039_;
}
else
{
lean_object* v_reuseFailAlloc_1041_; 
v_reuseFailAlloc_1041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1041_, 0, v_a_1035_);
v___x_1040_ = v_reuseFailAlloc_1041_;
goto v_reusejp_1039_;
}
v_reusejp_1039_:
{
return v___x_1040_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Normalize_normalize_spec__0(uint8_t v_expand_2180_, lean_object* v_sorts_2181_, lean_object* v_vars_2182_, uint8_t v_polarity_2183_, size_t v_sz_2184_, size_t v_i_2185_, lean_object* v_bs_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_, lean_object* v___y_2191_, lean_object* v___y_2192_){
_start:
{
uint8_t v___x_2194_; 
v___x_2194_ = lean_usize_dec_lt(v_i_2185_, v_sz_2184_);
if (v___x_2194_ == 0)
{
lean_object* v___x_2195_; 
lean_dec_ref(v_vars_2182_);
lean_dec_ref(v_sorts_2181_);
v___x_2195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2195_, 0, v_bs_2186_);
return v___x_2195_;
}
else
{
lean_object* v_v_2196_; lean_object* v___x_2197_; 
v_v_2196_ = lean_array_uget_borrowed(v_bs_2186_, v_i_2185_);
lean_inc(v_v_2196_);
lean_inc_ref(v_vars_2182_);
lean_inc_ref(v_sorts_2181_);
v___x_2197_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize(v_expand_2180_, v_sorts_2181_, v_vars_2182_, v_v_2196_, v_polarity_2183_, v___y_2187_, v___y_2188_, v___y_2189_, v___y_2190_, v___y_2191_, v___y_2192_);
if (lean_obj_tag(v___x_2197_) == 0)
{
lean_object* v_a_2198_; lean_object* v___x_2199_; lean_object* v_bs_x27_2200_; size_t v___x_2201_; size_t v___x_2202_; lean_object* v___x_2203_; 
v_a_2198_ = lean_ctor_get(v___x_2197_, 0);
lean_inc(v_a_2198_);
lean_dec_ref_known(v___x_2197_, 1);
v___x_2199_ = lean_unsigned_to_nat(0u);
v_bs_x27_2200_ = lean_array_uset(v_bs_2186_, v_i_2185_, v___x_2199_);
v___x_2201_ = ((size_t)1ULL);
v___x_2202_ = lean_usize_add(v_i_2185_, v___x_2201_);
v___x_2203_ = lean_array_uset(v_bs_x27_2200_, v_i_2185_, v_a_2198_);
v_i_2185_ = v___x_2202_;
v_bs_2186_ = v___x_2203_;
goto _start;
}
else
{
lean_object* v_a_2205_; lean_object* v___x_2207_; uint8_t v_isShared_2208_; uint8_t v_isSharedCheck_2212_; 
lean_dec_ref(v_bs_2186_);
lean_dec_ref(v_vars_2182_);
lean_dec_ref(v_sorts_2181_);
v_a_2205_ = lean_ctor_get(v___x_2197_, 0);
v_isSharedCheck_2212_ = !lean_is_exclusive(v___x_2197_);
if (v_isSharedCheck_2212_ == 0)
{
v___x_2207_ = v___x_2197_;
v_isShared_2208_ = v_isSharedCheck_2212_;
goto v_resetjp_2206_;
}
else
{
lean_inc(v_a_2205_);
lean_dec(v___x_2197_);
v___x_2207_ = lean_box(0);
v_isShared_2208_ = v_isSharedCheck_2212_;
goto v_resetjp_2206_;
}
v_resetjp_2206_:
{
lean_object* v___x_2210_; 
if (v_isShared_2208_ == 0)
{
v___x_2210_ = v___x_2207_;
goto v_reusejp_2209_;
}
else
{
lean_object* v_reuseFailAlloc_2211_; 
v_reuseFailAlloc_2211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2211_, 0, v_a_2205_);
v___x_2210_ = v_reuseFailAlloc_2211_;
goto v_reusejp_2209_;
}
v_reusejp_2209_:
{
return v___x_2210_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Normalize_normalize_spec__0___boxed(lean_object* v_expand_2213_, lean_object* v_sorts_2214_, lean_object* v_vars_2215_, lean_object* v_polarity_2216_, lean_object* v_sz_2217_, lean_object* v_i_2218_, lean_object* v_bs_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_, lean_object* v___y_2224_, lean_object* v___y_2225_, lean_object* v___y_2226_){
_start:
{
uint8_t v_expand_boxed_2227_; uint8_t v_polarity_boxed_2228_; size_t v_sz_boxed_2229_; size_t v_i_boxed_2230_; lean_object* v_res_2231_; 
v_expand_boxed_2227_ = lean_unbox(v_expand_2213_);
v_polarity_boxed_2228_ = lean_unbox(v_polarity_2216_);
v_sz_boxed_2229_ = lean_unbox_usize(v_sz_2217_);
lean_dec(v_sz_2217_);
v_i_boxed_2230_ = lean_unbox_usize(v_i_2218_);
lean_dec(v_i_2218_);
v_res_2231_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Normalize_normalize_spec__0(v_expand_boxed_2227_, v_sorts_2214_, v_vars_2215_, v_polarity_boxed_2228_, v_sz_boxed_2229_, v_i_boxed_2230_, v_bs_2219_, v___y_2220_, v___y_2221_, v___y_2222_, v___y_2223_, v___y_2224_, v___y_2225_);
lean_dec(v___y_2225_);
lean_dec_ref(v___y_2224_);
lean_dec(v___y_2223_);
lean_dec_ref(v___y_2222_);
lean_dec(v___y_2221_);
lean_dec_ref(v___y_2220_);
return v_res_2231_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified___boxed(lean_object* v_expand_2232_, lean_object* v_sorts_2233_, lean_object* v_body_2234_, lean_object* v_polarity_2235_, lean_object* v_isForall_2236_, lean_object* v_rest_2237_, lean_object* v_vars_2238_, lean_object* v_a_2239_, lean_object* v_a_2240_, lean_object* v_a_2241_, lean_object* v_a_2242_, lean_object* v_a_2243_, lean_object* v_a_2244_, lean_object* v_a_2245_){
_start:
{
uint8_t v_expand_boxed_2246_; uint8_t v_polarity_boxed_2247_; uint8_t v_isForall_boxed_2248_; lean_object* v_res_2249_; 
v_expand_boxed_2246_ = lean_unbox(v_expand_2232_);
v_polarity_boxed_2247_ = lean_unbox(v_polarity_2235_);
v_isForall_boxed_2248_ = lean_unbox(v_isForall_2236_);
v_res_2249_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_quantified(v_expand_boxed_2246_, v_sorts_2233_, v_body_2234_, v_polarity_boxed_2247_, v_isForall_boxed_2248_, v_rest_2237_, v_vars_2238_, v_a_2239_, v_a_2240_, v_a_2241_, v_a_2242_, v_a_2243_, v_a_2244_);
lean_dec(v_a_2244_);
lean_dec_ref(v_a_2243_);
lean_dec(v_a_2242_);
lean_dec_ref(v_a_2241_);
lean_dec(v_a_2240_);
lean_dec_ref(v_a_2239_);
return v_res_2249_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize___boxed(lean_object* v_expand_2250_, lean_object* v_sorts_2251_, lean_object* v_vars_2252_, lean_object* v_f_2253_, lean_object* v_polarity_2254_, lean_object* v_a_2255_, lean_object* v_a_2256_, lean_object* v_a_2257_, lean_object* v_a_2258_, lean_object* v_a_2259_, lean_object* v_a_2260_, lean_object* v_a_2261_){
_start:
{
uint8_t v_expand_boxed_2262_; uint8_t v_polarity_boxed_2263_; lean_object* v_res_2264_; 
v_expand_boxed_2262_ = lean_unbox(v_expand_2250_);
v_polarity_boxed_2263_ = lean_unbox(v_polarity_2254_);
v_res_2264_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize(v_expand_boxed_2262_, v_sorts_2251_, v_vars_2252_, v_f_2253_, v_polarity_boxed_2263_, v_a_2255_, v_a_2256_, v_a_2257_, v_a_2258_, v_a_2259_, v_a_2260_);
lean_dec(v_a_2260_);
lean_dec_ref(v_a_2259_);
lean_dec(v_a_2258_);
lean_dec_ref(v_a_2257_);
lean_dec(v_a_2256_);
lean_dec_ref(v_a_2255_);
return v_res_2264_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__1(void){
_start:
{
lean_object* v___x_2266_; lean_object* v___x_2267_; 
v___x_2266_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__0));
v___x_2267_ = l_Lean_stringToMessageData(v___x_2266_);
return v___x_2267_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__3(void){
_start:
{
lean_object* v___x_2269_; lean_object* v___x_2270_; 
v___x_2269_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__2));
v___x_2270_ = l_Lean_stringToMessageData(v___x_2269_);
return v___x_2270_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__4(void){
_start:
{
lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; 
v___x_2271_ = lean_box(0);
v___x_2272_ = lean_unsigned_to_nat(16u);
v___x_2273_ = lean_mk_array(v___x_2272_, v___x_2271_);
return v___x_2273_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__5(void){
_start:
{
lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; 
v___x_2274_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__4, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__4_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__4);
v___x_2275_ = lean_unsigned_to_nat(0u);
v___x_2276_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2276_, 0, v___x_2275_);
lean_ctor_set(v___x_2276_, 1, v___x_2274_);
return v___x_2276_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__9(void){
_start:
{
lean_object* v___x_2282_; lean_object* v___x_2283_; 
v___x_2282_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__8));
v___x_2283_ = l_Lean_stringToMessageData(v___x_2282_);
return v___x_2283_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep(uint8_t v_expand_2284_, lean_object* v_step_2285_, lean_object* v_a_2286_, lean_object* v_a_2287_, lean_object* v_a_2288_, lean_object* v_a_2289_, lean_object* v_a_2290_, lean_object* v_a_2291_){
_start:
{
lean_object* v_unit_2293_; lean_object* v_premises_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; uint8_t v___x_2297_; 
v_unit_2293_ = lean_ctor_get(v_step_2285_, 0);
v_premises_2294_ = lean_ctor_get(v_step_2285_, 1);
v___x_2295_ = lean_array_get_size(v_premises_2294_);
v___x_2296_ = lean_unsigned_to_nat(1u);
v___x_2297_ = lean_nat_dec_eq(v___x_2295_, v___x_2296_);
if (v___x_2297_ == 0)
{
lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; 
lean_dec_ref(v_step_2285_);
v___x_2298_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__1, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__1_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__1);
v___x_2299_ = l_Nat_reprFast(v___x_2295_);
v___x_2300_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2300_, 0, v___x_2299_);
v___x_2301_ = l_Lean_MessageData_ofFormat(v___x_2300_);
v___x_2302_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2302_, 0, v___x_2298_);
lean_ctor_set(v___x_2302_, 1, v___x_2301_);
v___x_2303_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2302_, v_a_2288_, v_a_2289_, v_a_2290_, v_a_2291_);
return v___x_2303_;
}
else
{
lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v_fst_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; uint8_t v___x_2309_; 
v___x_2304_ = lean_unsigned_to_nat(0u);
v___x_2305_ = lean_array_fget_borrowed(v_premises_2294_, v___x_2304_);
v_fst_2306_ = lean_ctor_get(v___x_2305_, 0);
lean_inc_ref(v_unit_2293_);
v___x_2307_ = lp_vampireReplay_Vampire_Unit_parents(v_unit_2293_);
v___x_2308_ = lean_array_get_size(v___x_2307_);
v___x_2309_ = lean_nat_dec_lt(v___x_2304_, v___x_2308_);
if (v___x_2309_ == 0)
{
lean_object* v___x_2310_; lean_object* v___x_2311_; 
lean_dec_ref(v___x_2307_);
lean_dec_ref(v_step_2285_);
v___x_2310_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__3, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__3_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__3);
v___x_2311_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2310_, v_a_2288_, v_a_2289_, v_a_2290_, v_a_2291_);
return v___x_2311_;
}
else
{
lean_object* v___x_2312_; lean_object* v___x_2313_; 
v___x_2312_ = lean_array_fget(v___x_2307_, v___x_2304_);
lean_dec_ref(v___x_2307_);
lean_inc(v___x_2312_);
v___x_2313_ = lp_vampireReplay_Vampire_Unit_formula_x3f(v___x_2312_);
if (lean_obj_tag(v___x_2313_) == 1)
{
lean_object* v_val_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v_sorts_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; 
v_val_2314_ = lean_ctor_get(v___x_2313_, 0);
lean_inc(v_val_2314_);
lean_dec_ref_known(v___x_2313_, 1);
v___x_2315_ = lp_vampireReplay_Vampire_Unit_varSorts(v___x_2312_);
lean_inc_ref(v_unit_2293_);
v___x_2316_ = lp_vampireReplay_Vampire_Unit_varSorts(v_unit_2293_);
v_sorts_2317_ = l_Array_append___redArg(v___x_2315_, v___x_2316_);
lean_dec_ref(v___x_2316_);
v___x_2318_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__5, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__5_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__5);
v___x_2319_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_normalize(v_expand_2284_, v_sorts_2317_, v___x_2318_, v_val_2314_, v___x_2309_, v_a_2286_, v_a_2287_, v_a_2288_, v_a_2289_, v_a_2290_, v_a_2291_);
if (lean_obj_tag(v___x_2319_) == 0)
{
lean_object* v_a_2320_; lean_object* v_snd_2321_; lean_object* v_snd_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; 
v_a_2320_ = lean_ctor_get(v___x_2319_, 0);
lean_inc(v_a_2320_);
lean_dec_ref_known(v___x_2319_, 1);
v_snd_2321_ = lean_ctor_get(v_a_2320_, 1);
lean_inc(v_snd_2321_);
lean_dec(v_a_2320_);
v_snd_2322_ = lean_ctor_get(v_snd_2321_, 1);
lean_inc(v_snd_2322_);
lean_dec(v_snd_2321_);
v___x_2323_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__7));
v___x_2324_ = lean_unsigned_to_nat(2u);
v___x_2325_ = lean_mk_empty_array_with_capacity(v___x_2324_);
lean_inc_ref(v___x_2325_);
v___x_2326_ = lean_array_push(v___x_2325_, v_snd_2322_);
lean_inc(v_fst_2306_);
v___x_2327_ = lean_array_push(v___x_2326_, v_fst_2306_);
v___x_2328_ = l_Lean_Meta_mkAppM(v___x_2323_, v___x_2327_, v_a_2288_, v_a_2289_, v_a_2290_, v_a_2291_);
if (lean_obj_tag(v___x_2328_) == 0)
{
lean_object* v_a_2329_; lean_object* v___x_2330_; 
v_a_2329_ = lean_ctor_get(v___x_2328_, 0);
lean_inc(v_a_2329_);
lean_dec_ref_known(v___x_2328_, 1);
v___x_2330_ = lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(v_step_2285_, v_a_2286_, v_a_2287_, v_a_2288_, v_a_2289_, v_a_2290_, v_a_2291_);
if (lean_obj_tag(v___x_2330_) == 0)
{
lean_object* v_a_2331_; lean_object* v___x_2332_; 
v_a_2331_ = lean_ctor_get(v___x_2330_, 0);
lean_inc(v_a_2331_);
lean_dec_ref_known(v___x_2330_, 1);
lean_inc(v_a_2291_);
lean_inc_ref(v_a_2290_);
lean_inc(v_a_2289_);
lean_inc_ref(v_a_2288_);
lean_inc(v_a_2329_);
v___x_2332_ = lean_infer_type(v_a_2329_, v_a_2288_, v_a_2289_, v_a_2290_, v_a_2291_);
if (lean_obj_tag(v___x_2332_) == 0)
{
lean_object* v_a_2333_; lean_object* v___x_2334_; 
v_a_2333_ = lean_ctor_get(v___x_2332_, 0);
lean_inc_n(v_a_2333_, 2);
lean_dec_ref_known(v___x_2332_, 1);
lean_inc(v_a_2331_);
v___x_2334_ = l_Lean_Meta_isExprDefEq(v_a_2333_, v_a_2331_, v_a_2288_, v_a_2289_, v_a_2290_, v_a_2291_);
if (lean_obj_tag(v___x_2334_) == 0)
{
lean_object* v_a_2335_; lean_object* v___x_2337_; uint8_t v_isShared_2338_; uint8_t v_isSharedCheck_2348_; 
v_a_2335_ = lean_ctor_get(v___x_2334_, 0);
v_isSharedCheck_2348_ = !lean_is_exclusive(v___x_2334_);
if (v_isSharedCheck_2348_ == 0)
{
v___x_2337_ = v___x_2334_;
v_isShared_2338_ = v_isSharedCheck_2348_;
goto v_resetjp_2336_;
}
else
{
lean_inc(v_a_2335_);
lean_dec(v___x_2334_);
v___x_2337_ = lean_box(0);
v_isShared_2338_ = v_isSharedCheck_2348_;
goto v_resetjp_2336_;
}
v_resetjp_2336_:
{
uint8_t v___x_2339_; 
v___x_2339_ = lean_unbox(v_a_2335_);
lean_dec(v_a_2335_);
if (v___x_2339_ == 0)
{
lean_object* v___x_2340_; 
lean_del_object(v___x_2337_);
v___x_2340_ = lp_vampireReplay_Vampire_Reconstruct_equiv(v_a_2333_, v_a_2331_, v_a_2286_, v_a_2287_, v_a_2288_, v_a_2289_, v_a_2290_, v_a_2291_);
if (lean_obj_tag(v___x_2340_) == 0)
{
lean_object* v_a_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; 
v_a_2341_ = lean_ctor_get(v___x_2340_, 0);
lean_inc(v_a_2341_);
lean_dec_ref_known(v___x_2340_, 1);
v___x_2342_ = lean_array_push(v___x_2325_, v_a_2341_);
v___x_2343_ = lean_array_push(v___x_2342_, v_a_2329_);
v___x_2344_ = l_Lean_Meta_mkAppM(v___x_2323_, v___x_2343_, v_a_2288_, v_a_2289_, v_a_2290_, v_a_2291_);
return v___x_2344_;
}
else
{
lean_dec(v_a_2329_);
lean_dec_ref(v___x_2325_);
return v___x_2340_;
}
}
else
{
lean_object* v___x_2346_; 
lean_dec(v_a_2333_);
lean_dec(v_a_2331_);
lean_dec_ref(v___x_2325_);
if (v_isShared_2338_ == 0)
{
lean_ctor_set(v___x_2337_, 0, v_a_2329_);
v___x_2346_ = v___x_2337_;
goto v_reusejp_2345_;
}
else
{
lean_object* v_reuseFailAlloc_2347_; 
v_reuseFailAlloc_2347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2347_, 0, v_a_2329_);
v___x_2346_ = v_reuseFailAlloc_2347_;
goto v_reusejp_2345_;
}
v_reusejp_2345_:
{
return v___x_2346_;
}
}
}
}
else
{
lean_object* v_a_2349_; lean_object* v___x_2351_; uint8_t v_isShared_2352_; uint8_t v_isSharedCheck_2356_; 
lean_dec(v_a_2333_);
lean_dec(v_a_2331_);
lean_dec(v_a_2329_);
lean_dec_ref(v___x_2325_);
v_a_2349_ = lean_ctor_get(v___x_2334_, 0);
v_isSharedCheck_2356_ = !lean_is_exclusive(v___x_2334_);
if (v_isSharedCheck_2356_ == 0)
{
v___x_2351_ = v___x_2334_;
v_isShared_2352_ = v_isSharedCheck_2356_;
goto v_resetjp_2350_;
}
else
{
lean_inc(v_a_2349_);
lean_dec(v___x_2334_);
v___x_2351_ = lean_box(0);
v_isShared_2352_ = v_isSharedCheck_2356_;
goto v_resetjp_2350_;
}
v_resetjp_2350_:
{
lean_object* v___x_2354_; 
if (v_isShared_2352_ == 0)
{
v___x_2354_ = v___x_2351_;
goto v_reusejp_2353_;
}
else
{
lean_object* v_reuseFailAlloc_2355_; 
v_reuseFailAlloc_2355_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2355_, 0, v_a_2349_);
v___x_2354_ = v_reuseFailAlloc_2355_;
goto v_reusejp_2353_;
}
v_reusejp_2353_:
{
return v___x_2354_;
}
}
}
}
else
{
lean_dec(v_a_2331_);
lean_dec(v_a_2329_);
lean_dec_ref(v___x_2325_);
return v___x_2332_;
}
}
else
{
lean_dec(v_a_2329_);
lean_dec_ref(v___x_2325_);
return v___x_2330_;
}
}
else
{
lean_dec_ref(v___x_2325_);
lean_dec_ref(v_step_2285_);
return v___x_2328_;
}
}
else
{
lean_object* v_a_2357_; lean_object* v___x_2359_; uint8_t v_isShared_2360_; uint8_t v_isSharedCheck_2364_; 
lean_dec_ref(v_step_2285_);
v_a_2357_ = lean_ctor_get(v___x_2319_, 0);
v_isSharedCheck_2364_ = !lean_is_exclusive(v___x_2319_);
if (v_isSharedCheck_2364_ == 0)
{
v___x_2359_ = v___x_2319_;
v_isShared_2360_ = v_isSharedCheck_2364_;
goto v_resetjp_2358_;
}
else
{
lean_inc(v_a_2357_);
lean_dec(v___x_2319_);
v___x_2359_ = lean_box(0);
v_isShared_2360_ = v_isSharedCheck_2364_;
goto v_resetjp_2358_;
}
v_resetjp_2358_:
{
lean_object* v___x_2362_; 
if (v_isShared_2360_ == 0)
{
v___x_2362_ = v___x_2359_;
goto v_reusejp_2361_;
}
else
{
lean_object* v_reuseFailAlloc_2363_; 
v_reuseFailAlloc_2363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2363_, 0, v_a_2357_);
v___x_2362_ = v_reuseFailAlloc_2363_;
goto v_reusejp_2361_;
}
v_reusejp_2361_:
{
return v___x_2362_;
}
}
}
}
else
{
lean_object* v___x_2365_; lean_object* v___x_2366_; 
lean_dec(v___x_2313_);
lean_dec(v___x_2312_);
lean_dec_ref(v_step_2285_);
v___x_2365_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__9, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__9_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___closed__9);
v___x_2366_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2365_, v_a_2288_, v_a_2289_, v_a_2290_, v_a_2291_);
return v___x_2366_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep___boxed(lean_object* v_expand_2367_, lean_object* v_step_2368_, lean_object* v_a_2369_, lean_object* v_a_2370_, lean_object* v_a_2371_, lean_object* v_a_2372_, lean_object* v_a_2373_, lean_object* v_a_2374_, lean_object* v_a_2375_){
_start:
{
uint8_t v_expand_boxed_2376_; lean_object* v_res_2377_; 
v_expand_boxed_2376_ = lean_unbox(v_expand_2367_);
v_res_2377_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep(v_expand_boxed_2376_, v_step_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_, v_a_2374_);
lean_dec(v_a_2374_);
lean_dec_ref(v_a_2373_);
lean_dec(v_a_2372_);
lean_dec_ref(v_a_2371_);
lean_dec(v_a_2370_);
lean_dec_ref(v_a_2369_);
return v_res_2377_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_ennf(lean_object* v_step_2378_, lean_object* v_a_2379_, lean_object* v_a_2380_, lean_object* v_a_2381_, lean_object* v_a_2382_, lean_object* v_a_2383_, lean_object* v_a_2384_){
_start:
{
uint8_t v___x_2386_; lean_object* v___x_2387_; 
v___x_2386_ = 0;
v___x_2387_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep(v___x_2386_, v_step_2378_, v_a_2379_, v_a_2380_, v_a_2381_, v_a_2382_, v_a_2383_, v_a_2384_);
return v___x_2387_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_ennf___boxed(lean_object* v_step_2388_, lean_object* v_a_2389_, lean_object* v_a_2390_, lean_object* v_a_2391_, lean_object* v_a_2392_, lean_object* v_a_2393_, lean_object* v_a_2394_, lean_object* v_a_2395_){
_start:
{
lean_object* v_res_2396_; 
v_res_2396_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_ennf(v_step_2388_, v_a_2389_, v_a_2390_, v_a_2391_, v_a_2392_, v_a_2393_, v_a_2394_);
lean_dec(v_a_2394_);
lean_dec_ref(v_a_2393_);
lean_dec(v_a_2392_);
lean_dec_ref(v_a_2391_);
lean_dec(v_a_2390_);
lean_dec_ref(v_a_2389_);
return v_res_2396_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_nnf(lean_object* v_step_2397_, lean_object* v_a_2398_, lean_object* v_a_2399_, lean_object* v_a_2400_, lean_object* v_a_2401_, lean_object* v_a_2402_, lean_object* v_a_2403_){
_start:
{
uint8_t v___x_2405_; lean_object* v___x_2406_; 
v___x_2405_ = 1;
v___x_2406_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Normalize_0__Vampire_Reconstruct_Normalize_normalizeStep(v___x_2405_, v_step_2397_, v_a_2398_, v_a_2399_, v_a_2400_, v_a_2401_, v_a_2402_, v_a_2403_);
return v___x_2406_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_nnf___boxed(lean_object* v_step_2407_, lean_object* v_a_2408_, lean_object* v_a_2409_, lean_object* v_a_2410_, lean_object* v_a_2411_, lean_object* v_a_2412_, lean_object* v_a_2413_, lean_object* v_a_2414_){
_start:
{
lean_object* v_res_2415_; 
v_res_2415_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_nnf(v_step_2407_, v_a_2408_, v_a_2409_, v_a_2410_, v_a_2411_, v_a_2412_, v_a_2413_);
lean_dec(v_a_2413_);
lean_dec_ref(v_a_2412_);
lean_dec(v_a_2411_);
lean_dec_ref(v_a_2410_);
lean_dec(v_a_2409_);
lean_dec_ref(v_a_2408_);
return v_res_2415_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_vampireReplay_VampireReplay_Reconstruct_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_vampireReplay_VampireReplay_Reconstruct_Rules_Normalize(uint8_t builtin) {
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
