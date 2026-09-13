// Lean compiler output
// Module: Vampire.Reconstruct.Stated
// Imports: public import Init public meta import Init public import Vampire.Reconstruct.Monad
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
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint32_to_uint64(uint32_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_sortType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Formula_subformulas(lean_object*);
lean_object* lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Formula_connective(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lp_vampireReplay_Vampire_Formula_literal_x3f(lean_object*);
lean_object* lp_vampireReplay_Vampire_Literal_args(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lp_vampireReplay_Vampire_Term_symbol_x3f(lean_object*);
lean_object* lp_vampireReplay_Vampire_Term_args(lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l_Lean_mkRawNatLit(lean_object*);
lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_String_splitOnAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_Pos_skipWhile___at___00Std_Http_Header_ContentLength_parse_spec__0(lean_object*, lean_object*);
lean_object* l_String_Slice_toNat_x3f(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_nextn(lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_prevn(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_shared___redArg(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_symbolExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
uint32_t lp_vampireReplay_Vampire_Term_functor(lean_object*);
uint8_t lp_vampireReplay_Vampire_Term_isVar(lean_object*);
uint32_t lp_vampireReplay_Vampire_Term_var(lean_object*);
uint8_t lp_vampireReplay_Vampire_Literal_polarity(lean_object*);
lean_object* lp_vampireReplay_Vampire_Literal_symbol_x3f(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
uint8_t lp_vampireReplay_Vampire_Literal_isEquality(lean_object*);
uint32_t lp_vampireReplay_Vampire_Literal_predicate(lean_object*);
lean_object* lp_vampireReplay_Vampire_Literal_sort_x3f(lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Formula_boundVars(lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Formula_name_x3f(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_namedFormula(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_instReprConnective_repr(uint8_t, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Clause_literals(lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_connectiveOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_connectiveOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_String_Slice_Pos_skipWhile___at___00__private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_inside_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_String_Slice_Pos_skipWhile___at___00__private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_inside_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_inside(lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___lam__1(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___lam__1___boxed(lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___closed__0 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___closed__0_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___closed__1 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___closed__1_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "$int"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___closed__2 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___closed__2_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "$real"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___closed__3 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___closed__3_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "$rat"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___closed__4 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___closed__4_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___closed__5 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___closed__5_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___closed__6;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort(lean_object*);
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg___closed__0;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "OfNat"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg___closed__1_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg___closed__2_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(135, 241, 166, 108, 243, 216, 193, 244)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg___closed__3_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(2, 108, 58, 34, 100, 49, 50, 216)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg___closed__3 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg___closed__3_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Neg"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg___closed__4_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "neg"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg___closed__5 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg___closed__5_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(94, 4, 109, 108, 64, 81, 153, 133)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg___closed__6_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(105, 26, 70, 221, 245, 238, 127, 238)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg___closed__6 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg___closed__6_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_wholeNumeral(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__0_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__1_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Rat"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__2_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(231, 55, 105, 214, 206, 30, 120, 51)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__3 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__3_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__4_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__5 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__5_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cast"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__6 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__6_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__7_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(19, 237, 167, 212, 100, 179, 19, 112)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__7 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__7_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(231, 55, 105, 214, 206, 30, 120, 51)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__8_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(151, 226, 138, 206, 139, 44, 193, 88)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__8 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__8_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__9_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(181, 4, 252, 84, 28, 16, 24, 6)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__9 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__9_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_castTo___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_castTo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_castTo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_interpreted_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_interpreted_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HDiv"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__0_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hDiv"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__1_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__0_value),LEAN_SCALAR_PTR_LITERAL(74, 223, 78, 88, 255, 236, 144, 164)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__2_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__1_value),LEAN_SCALAR_PTR_LITERAL(26, 183, 188, 240, 156, 118, 170, 84)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__2_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Real"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__3 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__3_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 97, 13, 185, 175, 95, 64, 15)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__4_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMul"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__5 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__5_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMul"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__6 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__6_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__5_value),LEAN_SCALAR_PTR_LITERAL(254, 113, 255, 140, 142, 9, 169, 40)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__7_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__6_value),LEAN_SCALAR_PTR_LITERAL(248, 227, 200, 215, 229, 255, 92, 22)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__7 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__7_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "$to_int("};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__8 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__8_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__9;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__1_value)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__10 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__10_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "$to_rat("};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__11 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__11_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__12;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__3_value)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__13 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__13_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "$sum"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__14 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__14_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "$difference"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__15 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__15_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "$product"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__16 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__16_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "$quotient"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__17 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__17_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "$quotient_e"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__18 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__18_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "$remainder_e"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__19 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__19_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "$less"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__20 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__20_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "$lesseq"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__21 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__21_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "$greater"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__22 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__22_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "$greatereq"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__23 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__23_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "$uminus"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__24 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__24_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "$to_real"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__25 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__25_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "$to_rat"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__26 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__26_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "$to_int"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__27 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__27_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "$to_real("};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__28 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__28_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__29;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__4_value)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__30 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__30_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "floor"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__31 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__31_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__32_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__32_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__31_value),LEAN_SCALAR_PTR_LITERAL(205, 237, 33, 212, 243, 240, 72, 29)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__32 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__32_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__33;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__34;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "LE"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__35 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__35_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "le"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__36 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__36_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__37_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__35_value),LEAN_SCALAR_PTR_LITERAL(216, 149, 183, 186, 191, 145, 216, 115)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__37_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__36_value),LEAN_SCALAR_PTR_LITERAL(109, 14, 90, 172, 72, 170, 136, 101)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__37 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__37_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "LT"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__38 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__38_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "lt"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__39 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__39_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__40_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__38_value),LEAN_SCALAR_PTR_LITERAL(71, 235, 154, 184, 62, 135, 30, 248)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__40_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__39_value),LEAN_SCALAR_PTR_LITERAL(54, 235, 251, 9, 4, 74, 57, 164)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__40 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__40_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMod"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__41 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__41_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMod"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__42 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__42_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__43_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__41_value),LEAN_SCALAR_PTR_LITERAL(93, 4, 3, 35, 188, 254, 191, 190)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__43_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__42_value),LEAN_SCALAR_PTR_LITERAL(120, 199, 142, 238, 9, 44, 94, 134)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__43 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__43_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HSub"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__44 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__44_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hSub"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__45 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__45_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__46_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__44_value),LEAN_SCALAR_PTR_LITERAL(121, 130, 45, 212, 110, 237, 236, 233)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__46_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__45_value),LEAN_SCALAR_PTR_LITERAL(231, 253, 204, 163, 168, 77, 27, 58)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__46 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__46_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HAdd"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__47 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__47_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hAdd"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__48 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__48_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__49_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__47_value),LEAN_SCALAR_PTR_LITERAL(221, 239, 47, 196, 170, 166, 59, 144)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__49_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__48_value),LEAN_SCALAR_PTR_LITERAL(134, 172, 115, 219, 189, 252, 56, 148)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__49 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__49_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_interpreted_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_interpreted_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1_spec__1___redArg(uint32_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1___redArg(lean_object*, uint32_t);
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_term___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "term has unknown functor "};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_term___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_term___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_term___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_term___closed__1;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_term___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "variable X"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_term___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_term___closed__2_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_term___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_term___closed__3;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_term___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = " has no recorded sort"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_term___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_term___closed__4_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_term___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_term___closed__5;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_term(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_term_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_term_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_term___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1(lean_object*, lean_object*, uint32_t);
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1_spec__1(lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_literalPolarity___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_literalPolarity___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_literalPolarity(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_literalPolarity___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_literal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Not"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_literal___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_literal___closed__0_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_literal___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_literal___closed__0_value),LEAN_SCALAR_PTR_LITERAL(185, 11, 203, 55, 27, 192, 137, 230)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_literal___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_literal___closed__1_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_literal___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_literal___closed__2;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_literal___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "literal has unknown predicate "};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_literal___closed__3 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_literal___closed__3_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_literal___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_literal___closed__4;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_literal___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "equality literal with "};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_literal___closed__5 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_literal___closed__5_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_literal___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_literal___closed__6;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_literal___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " arguments"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_literal___closed__7 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_literal___closed__7_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_literal___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_literal___closed__8;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_literal___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_literal___closed__9 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_literal___closed__9_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_literal___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_literal___closed__9_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_literal___closed__10 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_literal___closed__10_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_literal___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "equality literal without a recorded argument sort"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_literal___closed__11 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_literal___closed__11_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_literal___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_literal___closed__12;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_literal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_literal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Vampire_Reconstruct_junction_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Vampire_Reconstruct_junction_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_junction(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_sharedClause___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Or"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_sharedClause___redArg___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_sharedClause___redArg___closed__0_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_sharedClause___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_sharedClause___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(34, 237, 162, 225, 217, 98, 205, 196)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_sharedClause___redArg___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_sharedClause___redArg___closed__1_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_sharedClause___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_sharedClause___redArg___closed__2;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_sharedClause___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_sharedClause___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_sharedClause(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_sharedClause___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_clause_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_clause_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_clause___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_clause___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_clause___closed__0_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_clause___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_clause___closed__0_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_clause___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_clause___closed__1_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_clause(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_clause___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1_spec__4___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__2___redArg(uint32_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__1_spec__2_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t lp_vampireReplay_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__0___redArg(uint32_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_withVars_go___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_withVars_go___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "X"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_withVars_go___redArg___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_withVars_go___redArg___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_withVars_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_withVars_go___redArg___lam__0(lean_object*, lean_object*, uint32_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_withVars_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_withVars_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_withVars_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0(lean_object*, lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1_spec__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_vampireReplay_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__0(lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__2(lean_object*, uint32_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__1_spec__2_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_withVars_go_match__1_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_withVars_go_match__1_splitter(lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_vampireReplay_Vampire_Reconstruct_withVars___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_withVars___redArg___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_withVars___redArg___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_withVars___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_withVars___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_withVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_withVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Vampire_Reconstruct_formula_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Exists"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Vampire_Reconstruct_formula_spec__1___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Vampire_Reconstruct_formula_spec__1___redArg___closed__0_value;
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Vampire_Reconstruct_formula_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Vampire_Reconstruct_formula_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(65, 29, 48, 135, 199, 176, 149, 70)}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Vampire_Reconstruct_formula_spec__1___redArg___closed__1 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Vampire_Reconstruct_formula_spec__1___redArg___closed__1_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Vampire_Reconstruct_formula_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Vampire_Reconstruct_formula_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_formula_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_formula_spec__0___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_formula_spec__0___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_formula_spec__0(uint32_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_formula_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Vampire_Reconstruct_formula_spec__2_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Vampire_Reconstruct_formula_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_vampireReplay_Array_filterMapM___at___00Vampire_Reconstruct_formula_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_vampireReplay_Array_filterMapM___at___00Vampire_Reconstruct_formula_spec__2___closed__0 = (const lean_object*)&lp_vampireReplay_Array_filterMapM___at___00Vampire_Reconstruct_formula_spec__2___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Array_filterMapM___at___00Vampire_Reconstruct_formula_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Array_filterMapM___at___00Vampire_Reconstruct_formula_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_formula___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "formula is missing a subformula"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___lam__0___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_formula___lam__0___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_formula___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___lam__0___closed__1;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_formula___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "atom without a literal"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_formula___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_formula___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___closed__1;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_formula___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_formula___closed__2_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_formula___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_formula___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___closed__3 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_formula___closed__3_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_formula___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___closed__4;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_formula___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___closed__5;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_formula_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_formula___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "And"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___closed__6 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_formula___closed__6_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_formula___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_formula___closed__6_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___closed__7 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_formula___closed__7_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_formula___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Iff"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___closed__8 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_formula___closed__8_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_formula___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_formula___closed__8_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___closed__9 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_formula___closed__9_value;
static const lean_closure_object lp_vampireReplay_Vampire_Reconstruct_formula___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_vampireReplay_Vampire_Reconstruct_formula___lam__4___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___closed__10 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_formula___closed__10_value;
static const lean_closure_object lp_vampireReplay_Vampire_Reconstruct_formula___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_vampireReplay_Vampire_Reconstruct_formula___lam__5___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___closed__11 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_formula___closed__11_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_formula___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "named formula without a name"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___closed__12 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_formula___closed__12_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_formula___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___closed__13;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_formula___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "cannot rebuild a formula with connective "};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___closed__14 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_formula___closed__14_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_formula___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___closed__15;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_formula(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_formula___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "quantifier without a body"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___lam__2___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_formula___lam__2___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_formula___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___lam__2___closed__1;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_formula_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Vampire_Reconstruct_formula_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Vampire_Reconstruct_formula_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_junctionParts(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_junctionParts___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(lean_object* v_f_1_, lean_object* v_a_2_, lean_object* v_a_3_, lean_object* v_a_4_, lean_object* v_a_5_){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = lp_vampireReplay_Vampire_Formula_connective(v_f_1_);
if (lean_obj_tag(v___x_7_) == 0)
{
lean_object* v_a_8_; lean_object* v___x_10_; uint8_t v_isShared_11_; uint8_t v_isSharedCheck_17_; 
v_a_8_ = lean_ctor_get(v___x_7_, 0);
v_isSharedCheck_17_ = !lean_is_exclusive(v___x_7_);
if (v_isSharedCheck_17_ == 0)
{
v___x_10_ = v___x_7_;
v_isShared_11_ = v_isSharedCheck_17_;
goto v_resetjp_9_;
}
else
{
lean_inc(v_a_8_);
lean_dec(v___x_7_);
v___x_10_ = lean_box(0);
v_isShared_11_ = v_isSharedCheck_17_;
goto v_resetjp_9_;
}
v_resetjp_9_:
{
lean_object* v___x_13_; 
if (v_isShared_11_ == 0)
{
lean_ctor_set_tag(v___x_10_, 3);
v___x_13_ = v___x_10_;
goto v_reusejp_12_;
}
else
{
lean_object* v_reuseFailAlloc_16_; 
v_reuseFailAlloc_16_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_16_, 0, v_a_8_);
v___x_13_ = v_reuseFailAlloc_16_;
goto v_reusejp_12_;
}
v_reusejp_12_:
{
lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_14_ = l_Lean_MessageData_ofFormat(v___x_13_);
v___x_15_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_14_, v_a_2_, v_a_3_, v_a_4_, v_a_5_);
return v___x_15_;
}
}
}
else
{
lean_object* v_a_18_; lean_object* v___x_20_; uint8_t v_isShared_21_; uint8_t v_isSharedCheck_25_; 
v_a_18_ = lean_ctor_get(v___x_7_, 0);
v_isSharedCheck_25_ = !lean_is_exclusive(v___x_7_);
if (v_isSharedCheck_25_ == 0)
{
v___x_20_ = v___x_7_;
v_isShared_21_ = v_isSharedCheck_25_;
goto v_resetjp_19_;
}
else
{
lean_inc(v_a_18_);
lean_dec(v___x_7_);
v___x_20_ = lean_box(0);
v_isShared_21_ = v_isSharedCheck_25_;
goto v_resetjp_19_;
}
v_resetjp_19_:
{
lean_object* v___x_23_; 
if (v_isShared_21_ == 0)
{
lean_ctor_set_tag(v___x_20_, 0);
v___x_23_ = v___x_20_;
goto v_reusejp_22_;
}
else
{
lean_object* v_reuseFailAlloc_24_; 
v_reuseFailAlloc_24_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_24_, 0, v_a_18_);
v___x_23_ = v_reuseFailAlloc_24_;
goto v_reusejp_22_;
}
v_reusejp_22_:
{
return v___x_23_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg___boxed(lean_object* v_f_26_, lean_object* v_a_27_, lean_object* v_a_28_, lean_object* v_a_29_, lean_object* v_a_30_, lean_object* v_a_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v_f_26_, v_a_27_, v_a_28_, v_a_29_, v_a_30_);
lean_dec(v_a_30_);
lean_dec_ref(v_a_29_);
lean_dec(v_a_28_);
lean_dec_ref(v_a_27_);
lean_dec_ref(v_f_26_);
return v_res_32_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_connectiveOf(lean_object* v_f_33_, lean_object* v_a_34_, lean_object* v_a_35_, lean_object* v_a_36_, lean_object* v_a_37_, lean_object* v_a_38_, lean_object* v_a_39_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v_f_33_, v_a_36_, v_a_37_, v_a_38_, v_a_39_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_connectiveOf___boxed(lean_object* v_f_42_, lean_object* v_a_43_, lean_object* v_a_44_, lean_object* v_a_45_, lean_object* v_a_46_, lean_object* v_a_47_, lean_object* v_a_48_, lean_object* v_a_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf(v_f_42_, v_a_43_, v_a_44_, v_a_45_, v_a_46_, v_a_47_, v_a_48_);
lean_dec(v_a_48_);
lean_dec_ref(v_a_47_);
lean_dec(v_a_46_);
lean_dec_ref(v_a_45_);
lean_dec(v_a_44_);
lean_dec_ref(v_a_43_);
lean_dec_ref(v_f_42_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_String_Slice_Pos_skipWhile___at___00__private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_inside_spec__0(lean_object* v_s_51_, lean_object* v_pos_52_){
_start:
{
lean_object* v_str_53_; lean_object* v_startInclusive_54_; lean_object* v_endExclusive_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; uint8_t v___x_59_; 
v_str_53_ = lean_ctor_get(v_s_51_, 0);
v_startInclusive_54_ = lean_ctor_get(v_s_51_, 1);
v_endExclusive_55_ = lean_ctor_get(v_s_51_, 2);
v___x_56_ = lean_nat_add(v_startInclusive_54_, v_pos_52_);
v___x_57_ = lean_unsigned_to_nat(0u);
v___x_58_ = lean_nat_sub(v_endExclusive_55_, v___x_56_);
v___x_59_ = lean_nat_dec_eq(v___x_57_, v___x_58_);
lean_dec(v___x_58_);
if (v___x_59_ == 0)
{
uint32_t v___x_60_; uint32_t v___x_61_; uint8_t v___x_62_; 
v___x_60_ = lean_string_utf8_get_fast(v_str_53_, v___x_56_);
v___x_61_ = 40;
v___x_62_ = lean_uint32_dec_eq(v___x_60_, v___x_61_);
if (v___x_62_ == 0)
{
lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; uint8_t v___x_66_; 
v___x_63_ = lean_string_utf8_next_fast(v_str_53_, v___x_56_);
v___x_64_ = lean_nat_sub(v___x_63_, v___x_56_);
lean_dec(v___x_56_);
v___x_65_ = lean_nat_add(v_pos_52_, v___x_64_);
lean_dec(v___x_64_);
v___x_66_ = lean_nat_dec_lt(v_pos_52_, v___x_65_);
if (v___x_66_ == 0)
{
lean_dec(v___x_65_);
return v_pos_52_;
}
else
{
lean_dec(v_pos_52_);
v_pos_52_ = v___x_65_;
goto _start;
}
}
else
{
lean_dec(v___x_56_);
return v_pos_52_;
}
}
else
{
lean_dec(v___x_56_);
return v_pos_52_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_String_Slice_Pos_skipWhile___at___00__private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_inside_spec__0___boxed(lean_object* v_s_68_, lean_object* v_pos_69_){
_start:
{
lean_object* v_res_70_; 
v_res_70_ = lp_vampireReplay_String_Slice_Pos_skipWhile___at___00__private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_inside_spec__0(v_s_68_, v_pos_69_);
lean_dec_ref(v_s_68_);
return v_res_70_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_inside(lean_object* v_name_71_){
_start:
{
lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_72_ = lean_unsigned_to_nat(0u);
v___x_73_ = lean_string_utf8_byte_size(v_name_71_);
lean_inc_ref_n(v_name_71_, 3);
v___x_74_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_74_, 0, v_name_71_);
lean_ctor_set(v___x_74_, 1, v___x_72_);
lean_ctor_set(v___x_74_, 2, v___x_73_);
v___x_75_ = lp_vampireReplay_String_Slice_Pos_skipWhile___at___00__private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_inside_spec__0(v___x_74_, v___x_72_);
lean_dec_ref_known(v___x_74_, 3);
lean_inc(v___x_75_);
v___x_76_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_76_, 0, v_name_71_);
lean_ctor_set(v___x_76_, 1, v___x_75_);
lean_ctor_set(v___x_76_, 2, v___x_73_);
v___x_77_ = lean_unsigned_to_nat(1u);
v___x_78_ = l_String_Slice_Pos_nextn(v___x_76_, v___x_72_, v___x_77_);
lean_dec_ref_known(v___x_76_, 3);
v___x_79_ = lean_nat_add(v___x_75_, v___x_78_);
lean_dec(v___x_78_);
lean_dec(v___x_75_);
lean_inc(v___x_79_);
v___x_80_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_80_, 0, v_name_71_);
lean_ctor_set(v___x_80_, 1, v___x_79_);
lean_ctor_set(v___x_80_, 2, v___x_73_);
v___x_81_ = lean_nat_sub(v___x_73_, v___x_79_);
v___x_82_ = l_String_Slice_Pos_prevn(v___x_80_, v___x_81_, v___x_77_);
lean_dec_ref_known(v___x_80_, 3);
v___x_83_ = lean_nat_add(v___x_79_, v___x_82_);
lean_dec(v___x_82_);
v___x_84_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_84_, 0, v_name_71_);
lean_ctor_set(v___x_84_, 1, v___x_79_);
lean_ctor_set(v___x_84_, 2, v___x_83_);
v___x_85_ = l_String_Slice_toString(v___x_84_);
lean_dec_ref_known(v___x_84_, 3);
return v___x_85_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___lam__0(lean_object* v_s_86_){
_start:
{
lean_object* v___x_87_; lean_object* v___x_88_; uint8_t v___x_89_; 
v___x_87_ = lean_string_utf8_byte_size(v_s_86_);
v___x_88_ = lean_unsigned_to_nat(0u);
v___x_89_ = lean_nat_dec_eq(v___x_87_, v___x_88_);
if (v___x_89_ == 0)
{
lean_object* v___x_90_; lean_object* v___x_91_; uint8_t v___x_92_; 
v___x_90_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_90_, 0, v_s_86_);
lean_ctor_set(v___x_90_, 1, v___x_88_);
lean_ctor_set(v___x_90_, 2, v___x_87_);
v___x_91_ = l_String_Slice_Pos_skipWhile___at___00Std_Http_Header_ContentLength_parse_spec__0(v___x_90_, v___x_88_);
v___x_92_ = lean_nat_dec_eq(v___x_91_, v___x_87_);
lean_dec(v___x_91_);
if (v___x_92_ == 0)
{
lean_object* v___x_93_; 
lean_dec_ref_known(v___x_90_, 3);
v___x_93_ = lean_box(0);
return v___x_93_;
}
else
{
lean_object* v___x_94_; 
v___x_94_ = l_String_Slice_toNat_x3f(v___x_90_);
lean_dec_ref_known(v___x_90_, 3);
return v___x_94_;
}
}
else
{
lean_object* v___x_95_; 
lean_dec_ref(v_s_86_);
v___x_95_ = lean_box(0);
return v___x_95_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___lam__1(uint8_t v_fst_96_, lean_object* v_n_97_){
_start:
{
if (v_fst_96_ == 0)
{
lean_inc(v_n_97_);
return v_n_97_;
}
else
{
lean_object* v___x_98_; 
v___x_98_ = lean_int_neg(v_n_97_);
return v___x_98_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___lam__1___boxed(lean_object* v_fst_99_, lean_object* v_n_100_){
_start:
{
uint8_t v_fst_1604__boxed_101_; lean_object* v_res_102_; 
v_fst_1604__boxed_101_ = lean_unbox(v_fst_99_);
v_res_102_ = lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___lam__1(v_fst_1604__boxed_101_, v_n_100_);
lean_dec(v_n_100_);
return v_res_102_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___closed__6(void){
_start:
{
lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_109_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___closed__5));
v___x_110_ = lean_string_utf8_byte_size(v___x_109_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort(lean_object* v_name_111_){
_start:
{
uint8_t v_fst_113_; lean_object* v_snd_114_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; uint8_t v___x_239_; 
v___x_236_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___closed__5));
v___x_237_ = lean_string_utf8_byte_size(v_name_111_);
v___x_238_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___closed__6, &lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___closed__6_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___closed__6);
v___x_239_ = lean_nat_dec_le(v___x_238_, v___x_237_);
if (v___x_239_ == 0)
{
v_fst_113_ = v___x_239_;
v_snd_114_ = v_name_111_;
goto v___jp_112_;
}
else
{
lean_object* v___x_240_; uint8_t v___x_241_; 
v___x_240_ = lean_unsigned_to_nat(0u);
v___x_241_ = lean_string_memcmp(v_name_111_, v___x_236_, v___x_240_, v___x_240_, v___x_238_);
if (v___x_241_ == 0)
{
v_fst_113_ = v___x_241_;
v_snd_114_ = v_name_111_;
goto v___jp_112_;
}
else
{
lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; 
v___x_242_ = lean_unsigned_to_nat(1u);
lean_inc_ref(v_name_111_);
v___x_243_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_243_, 0, v_name_111_);
lean_ctor_set(v___x_243_, 1, v___x_240_);
lean_ctor_set(v___x_243_, 2, v___x_237_);
v___x_244_ = l_String_Slice_Pos_nextn(v___x_243_, v___x_240_, v___x_242_);
lean_dec_ref_known(v___x_243_, 3);
v___x_245_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_245_, 0, v_name_111_);
lean_ctor_set(v___x_245_, 1, v___x_244_);
lean_ctor_set(v___x_245_, 2, v___x_237_);
v___x_246_ = l_String_Slice_toString(v___x_245_);
lean_dec_ref_known(v___x_245_, 3);
v_fst_113_ = v___x_239_;
v_snd_114_ = v___x_246_;
goto v___jp_112_;
}
}
v___jp_112_:
{
lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; 
v___x_115_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___closed__0));
v___x_116_ = lean_unsigned_to_nat(0u);
v___x_117_ = lean_box(0);
v___x_118_ = l_String_splitOnAux(v_snd_114_, v___x_115_, v___x_116_, v___x_116_, v___x_116_, v___x_117_);
lean_dec_ref(v_snd_114_);
if (lean_obj_tag(v___x_118_) == 1)
{
lean_object* v_tail_119_; 
v_tail_119_ = lean_ctor_get(v___x_118_, 1);
lean_inc(v_tail_119_);
if (lean_obj_tag(v_tail_119_) == 0)
{
lean_object* v_head_120_; lean_object* v___x_122_; uint8_t v_isShared_123_; uint8_t v_isSharedCheck_195_; 
v_head_120_ = lean_ctor_get(v___x_118_, 0);
v_isSharedCheck_195_ = !lean_is_exclusive(v___x_118_);
if (v_isSharedCheck_195_ == 0)
{
lean_object* v_unused_196_; 
v_unused_196_ = lean_ctor_get(v___x_118_, 1);
lean_dec(v_unused_196_);
v___x_122_ = v___x_118_;
v_isShared_123_ = v_isSharedCheck_195_;
goto v_resetjp_121_;
}
else
{
lean_inc(v_head_120_);
lean_dec(v___x_118_);
v___x_122_ = lean_box(0);
v_isShared_123_ = v_isSharedCheck_195_;
goto v_resetjp_121_;
}
v_resetjp_121_:
{
lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_124_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___closed__1));
v___x_125_ = l_String_splitOnAux(v_head_120_, v___x_124_, v___x_116_, v___x_116_, v___x_116_, v_tail_119_);
lean_dec(v_head_120_);
if (lean_obj_tag(v___x_125_) == 1)
{
lean_object* v_tail_126_; 
v_tail_126_ = lean_ctor_get(v___x_125_, 1);
lean_inc(v_tail_126_);
if (lean_obj_tag(v_tail_126_) == 0)
{
lean_object* v_head_127_; lean_object* v___x_129_; uint8_t v_isShared_130_; uint8_t v_isSharedCheck_151_; 
v_head_127_ = lean_ctor_get(v___x_125_, 0);
v_isSharedCheck_151_ = !lean_is_exclusive(v___x_125_);
if (v_isSharedCheck_151_ == 0)
{
lean_object* v_unused_152_; 
v_unused_152_ = lean_ctor_get(v___x_125_, 1);
lean_dec(v_unused_152_);
v___x_129_ = v___x_125_;
v_isShared_130_ = v_isSharedCheck_151_;
goto v_resetjp_128_;
}
else
{
lean_inc(v_head_127_);
lean_dec(v___x_125_);
v___x_129_ = lean_box(0);
v_isShared_130_ = v_isSharedCheck_151_;
goto v_resetjp_128_;
}
v_resetjp_128_:
{
lean_object* v___x_131_; 
v___x_131_ = lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___lam__0(v_head_127_);
if (lean_obj_tag(v___x_131_) == 0)
{
lean_object* v___x_132_; 
lean_del_object(v___x_129_);
lean_del_object(v___x_122_);
v___x_132_ = lean_box(0);
return v___x_132_;
}
else
{
lean_object* v_val_133_; lean_object* v___x_135_; uint8_t v_isShared_136_; uint8_t v_isSharedCheck_150_; 
v_val_133_ = lean_ctor_get(v___x_131_, 0);
v_isSharedCheck_150_ = !lean_is_exclusive(v___x_131_);
if (v_isSharedCheck_150_ == 0)
{
v___x_135_ = v___x_131_;
v_isShared_136_ = v_isSharedCheck_150_;
goto v_resetjp_134_;
}
else
{
lean_inc(v_val_133_);
lean_dec(v___x_131_);
v___x_135_ = lean_box(0);
v_isShared_136_ = v_isSharedCheck_150_;
goto v_resetjp_134_;
}
v_resetjp_134_:
{
lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_142_; 
v___x_137_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___closed__2));
v___x_138_ = lean_nat_to_int(v_val_133_);
v___x_139_ = lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___lam__1(v_fst_113_, v___x_138_);
lean_dec(v___x_138_);
v___x_140_ = lean_unsigned_to_nat(1u);
if (v_isShared_130_ == 0)
{
lean_ctor_set_tag(v___x_129_, 0);
lean_ctor_set(v___x_129_, 1, v___x_140_);
lean_ctor_set(v___x_129_, 0, v___x_139_);
v___x_142_ = v___x_129_;
goto v_reusejp_141_;
}
else
{
lean_object* v_reuseFailAlloc_149_; 
v_reuseFailAlloc_149_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_149_, 0, v___x_139_);
lean_ctor_set(v_reuseFailAlloc_149_, 1, v___x_140_);
v___x_142_ = v_reuseFailAlloc_149_;
goto v_reusejp_141_;
}
v_reusejp_141_:
{
lean_object* v___x_144_; 
if (v_isShared_123_ == 0)
{
lean_ctor_set_tag(v___x_122_, 0);
lean_ctor_set(v___x_122_, 1, v___x_142_);
lean_ctor_set(v___x_122_, 0, v___x_137_);
v___x_144_ = v___x_122_;
goto v_reusejp_143_;
}
else
{
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v___x_137_);
lean_ctor_set(v_reuseFailAlloc_148_, 1, v___x_142_);
v___x_144_ = v_reuseFailAlloc_148_;
goto v_reusejp_143_;
}
v_reusejp_143_:
{
lean_object* v___x_146_; 
if (v_isShared_136_ == 0)
{
lean_ctor_set(v___x_135_, 0, v___x_144_);
v___x_146_ = v___x_135_;
goto v_reusejp_145_;
}
else
{
lean_object* v_reuseFailAlloc_147_; 
v_reuseFailAlloc_147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_147_, 0, v___x_144_);
v___x_146_ = v_reuseFailAlloc_147_;
goto v_reusejp_145_;
}
v_reusejp_145_:
{
return v___x_146_;
}
}
}
}
}
}
}
else
{
lean_object* v_tail_153_; 
lean_del_object(v___x_122_);
v_tail_153_ = lean_ctor_get(v_tail_126_, 1);
if (lean_obj_tag(v_tail_153_) == 0)
{
lean_object* v_head_154_; lean_object* v___x_156_; uint8_t v_isShared_157_; uint8_t v_isSharedCheck_191_; 
v_head_154_ = lean_ctor_get(v___x_125_, 0);
v_isSharedCheck_191_ = !lean_is_exclusive(v___x_125_);
if (v_isSharedCheck_191_ == 0)
{
lean_object* v_unused_192_; 
v_unused_192_ = lean_ctor_get(v___x_125_, 1);
lean_dec(v_unused_192_);
v___x_156_ = v___x_125_;
v_isShared_157_ = v_isSharedCheck_191_;
goto v_resetjp_155_;
}
else
{
lean_inc(v_head_154_);
lean_dec(v___x_125_);
v___x_156_ = lean_box(0);
v_isShared_157_ = v_isSharedCheck_191_;
goto v_resetjp_155_;
}
v_resetjp_155_:
{
lean_object* v_head_158_; lean_object* v___x_160_; uint8_t v_isShared_161_; uint8_t v_isSharedCheck_189_; 
v_head_158_ = lean_ctor_get(v_tail_126_, 0);
v_isSharedCheck_189_ = !lean_is_exclusive(v_tail_126_);
if (v_isSharedCheck_189_ == 0)
{
lean_object* v_unused_190_; 
v_unused_190_ = lean_ctor_get(v_tail_126_, 1);
lean_dec(v_unused_190_);
v___x_160_ = v_tail_126_;
v_isShared_161_ = v_isSharedCheck_189_;
goto v_resetjp_159_;
}
else
{
lean_inc(v_head_158_);
lean_dec(v_tail_126_);
v___x_160_ = lean_box(0);
v_isShared_161_ = v_isSharedCheck_189_;
goto v_resetjp_159_;
}
v_resetjp_159_:
{
lean_object* v___x_162_; 
v___x_162_ = lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___lam__0(v_head_154_);
if (lean_obj_tag(v___x_162_) == 0)
{
lean_object* v___x_163_; 
lean_del_object(v___x_160_);
lean_dec(v_head_158_);
lean_del_object(v___x_156_);
v___x_163_ = lean_box(0);
return v___x_163_;
}
else
{
lean_object* v_val_164_; lean_object* v___x_165_; 
v_val_164_ = lean_ctor_get(v___x_162_, 0);
lean_inc(v_val_164_);
lean_dec_ref_known(v___x_162_, 1);
lean_inc(v_head_158_);
v___x_165_ = lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___lam__0(v_head_158_);
if (lean_obj_tag(v___x_165_) == 0)
{
lean_object* v___x_166_; 
lean_dec(v_val_164_);
lean_del_object(v___x_160_);
lean_dec(v_head_158_);
lean_del_object(v___x_156_);
v___x_166_ = lean_box(0);
return v___x_166_;
}
else
{
lean_object* v_val_167_; lean_object* v___x_169_; uint8_t v_isShared_170_; uint8_t v_isSharedCheck_188_; 
v_val_167_ = lean_ctor_get(v___x_165_, 0);
v_isSharedCheck_188_ = !lean_is_exclusive(v___x_165_);
if (v_isSharedCheck_188_ == 0)
{
v___x_169_ = v___x_165_;
v_isShared_170_ = v_isSharedCheck_188_;
goto v_resetjp_168_;
}
else
{
lean_inc(v_val_167_);
lean_dec(v___x_165_);
v___x_169_ = lean_box(0);
v_isShared_170_ = v_isSharedCheck_188_;
goto v_resetjp_168_;
}
v_resetjp_168_:
{
lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_180_; 
v___x_171_ = lean_unsigned_to_nat(10u);
v___x_172_ = lean_string_length(v_head_158_);
lean_dec(v_head_158_);
v___x_173_ = lean_nat_pow(v___x_171_, v___x_172_);
v___x_174_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___closed__3));
v___x_175_ = lean_nat_mul(v_val_164_, v___x_173_);
lean_dec(v_val_164_);
v___x_176_ = lean_nat_add(v___x_175_, v_val_167_);
lean_dec(v_val_167_);
lean_dec(v___x_175_);
v___x_177_ = lean_nat_to_int(v___x_176_);
v___x_178_ = lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___lam__1(v_fst_113_, v___x_177_);
lean_dec(v___x_177_);
if (v_isShared_161_ == 0)
{
lean_ctor_set_tag(v___x_160_, 0);
lean_ctor_set(v___x_160_, 1, v___x_173_);
lean_ctor_set(v___x_160_, 0, v___x_178_);
v___x_180_ = v___x_160_;
goto v_reusejp_179_;
}
else
{
lean_object* v_reuseFailAlloc_187_; 
v_reuseFailAlloc_187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_187_, 0, v___x_178_);
lean_ctor_set(v_reuseFailAlloc_187_, 1, v___x_173_);
v___x_180_ = v_reuseFailAlloc_187_;
goto v_reusejp_179_;
}
v_reusejp_179_:
{
lean_object* v___x_182_; 
if (v_isShared_157_ == 0)
{
lean_ctor_set_tag(v___x_156_, 0);
lean_ctor_set(v___x_156_, 1, v___x_180_);
lean_ctor_set(v___x_156_, 0, v___x_174_);
v___x_182_ = v___x_156_;
goto v_reusejp_181_;
}
else
{
lean_object* v_reuseFailAlloc_186_; 
v_reuseFailAlloc_186_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_186_, 0, v___x_174_);
lean_ctor_set(v_reuseFailAlloc_186_, 1, v___x_180_);
v___x_182_ = v_reuseFailAlloc_186_;
goto v_reusejp_181_;
}
v_reusejp_181_:
{
lean_object* v___x_184_; 
if (v_isShared_170_ == 0)
{
lean_ctor_set(v___x_169_, 0, v___x_182_);
v___x_184_ = v___x_169_;
goto v_reusejp_183_;
}
else
{
lean_object* v_reuseFailAlloc_185_; 
v_reuseFailAlloc_185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_185_, 0, v___x_182_);
v___x_184_ = v_reuseFailAlloc_185_;
goto v_reusejp_183_;
}
v_reusejp_183_:
{
return v___x_184_;
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
lean_object* v___x_193_; 
lean_dec_ref_known(v_tail_126_, 2);
lean_dec_ref_known(v___x_125_, 2);
v___x_193_ = lean_box(0);
return v___x_193_;
}
}
}
else
{
lean_object* v___x_194_; 
lean_dec(v___x_125_);
lean_del_object(v___x_122_);
v___x_194_ = lean_box(0);
return v___x_194_;
}
}
}
else
{
lean_object* v_tail_197_; 
v_tail_197_ = lean_ctor_get(v_tail_119_, 1);
if (lean_obj_tag(v_tail_197_) == 0)
{
lean_object* v_head_198_; lean_object* v___x_200_; uint8_t v_isShared_201_; uint8_t v_isSharedCheck_232_; 
v_head_198_ = lean_ctor_get(v___x_118_, 0);
v_isSharedCheck_232_ = !lean_is_exclusive(v___x_118_);
if (v_isSharedCheck_232_ == 0)
{
lean_object* v_unused_233_; 
v_unused_233_ = lean_ctor_get(v___x_118_, 1);
lean_dec(v_unused_233_);
v___x_200_ = v___x_118_;
v_isShared_201_ = v_isSharedCheck_232_;
goto v_resetjp_199_;
}
else
{
lean_inc(v_head_198_);
lean_dec(v___x_118_);
v___x_200_ = lean_box(0);
v_isShared_201_ = v_isSharedCheck_232_;
goto v_resetjp_199_;
}
v_resetjp_199_:
{
lean_object* v_head_202_; lean_object* v___x_204_; uint8_t v_isShared_205_; uint8_t v_isSharedCheck_230_; 
v_head_202_ = lean_ctor_get(v_tail_119_, 0);
v_isSharedCheck_230_ = !lean_is_exclusive(v_tail_119_);
if (v_isSharedCheck_230_ == 0)
{
lean_object* v_unused_231_; 
v_unused_231_ = lean_ctor_get(v_tail_119_, 1);
lean_dec(v_unused_231_);
v___x_204_ = v_tail_119_;
v_isShared_205_ = v_isSharedCheck_230_;
goto v_resetjp_203_;
}
else
{
lean_inc(v_head_202_);
lean_dec(v_tail_119_);
v___x_204_ = lean_box(0);
v_isShared_205_ = v_isSharedCheck_230_;
goto v_resetjp_203_;
}
v_resetjp_203_:
{
lean_object* v___x_206_; 
v___x_206_ = lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___lam__0(v_head_198_);
if (lean_obj_tag(v___x_206_) == 0)
{
lean_object* v___x_207_; 
lean_del_object(v___x_204_);
lean_dec(v_head_202_);
lean_del_object(v___x_200_);
v___x_207_ = lean_box(0);
return v___x_207_;
}
else
{
lean_object* v_val_208_; lean_object* v___x_209_; 
v_val_208_ = lean_ctor_get(v___x_206_, 0);
lean_inc(v_val_208_);
lean_dec_ref_known(v___x_206_, 1);
v___x_209_ = lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___lam__0(v_head_202_);
if (lean_obj_tag(v___x_209_) == 0)
{
lean_object* v___x_210_; 
lean_dec(v_val_208_);
lean_del_object(v___x_204_);
lean_del_object(v___x_200_);
v___x_210_ = lean_box(0);
return v___x_210_;
}
else
{
lean_object* v_val_211_; lean_object* v___x_213_; uint8_t v_isShared_214_; uint8_t v_isSharedCheck_229_; 
v_val_211_ = lean_ctor_get(v___x_209_, 0);
v_isSharedCheck_229_ = !lean_is_exclusive(v___x_209_);
if (v_isSharedCheck_229_ == 0)
{
v___x_213_ = v___x_209_;
v_isShared_214_ = v_isSharedCheck_229_;
goto v_resetjp_212_;
}
else
{
lean_inc(v_val_211_);
lean_dec(v___x_209_);
v___x_213_ = lean_box(0);
v_isShared_214_ = v_isSharedCheck_229_;
goto v_resetjp_212_;
}
v_resetjp_212_:
{
uint8_t v___x_215_; 
v___x_215_ = lean_nat_dec_eq(v_val_211_, v___x_116_);
if (v___x_215_ == 0)
{
lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_220_; 
v___x_216_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___closed__4));
v___x_217_ = lean_nat_to_int(v_val_208_);
v___x_218_ = lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___lam__1(v_fst_113_, v___x_217_);
lean_dec(v___x_217_);
if (v_isShared_205_ == 0)
{
lean_ctor_set_tag(v___x_204_, 0);
lean_ctor_set(v___x_204_, 1, v_val_211_);
lean_ctor_set(v___x_204_, 0, v___x_218_);
v___x_220_ = v___x_204_;
goto v_reusejp_219_;
}
else
{
lean_object* v_reuseFailAlloc_227_; 
v_reuseFailAlloc_227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_227_, 0, v___x_218_);
lean_ctor_set(v_reuseFailAlloc_227_, 1, v_val_211_);
v___x_220_ = v_reuseFailAlloc_227_;
goto v_reusejp_219_;
}
v_reusejp_219_:
{
lean_object* v___x_222_; 
if (v_isShared_201_ == 0)
{
lean_ctor_set_tag(v___x_200_, 0);
lean_ctor_set(v___x_200_, 1, v___x_220_);
lean_ctor_set(v___x_200_, 0, v___x_216_);
v___x_222_ = v___x_200_;
goto v_reusejp_221_;
}
else
{
lean_object* v_reuseFailAlloc_226_; 
v_reuseFailAlloc_226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_226_, 0, v___x_216_);
lean_ctor_set(v_reuseFailAlloc_226_, 1, v___x_220_);
v___x_222_ = v_reuseFailAlloc_226_;
goto v_reusejp_221_;
}
v_reusejp_221_:
{
lean_object* v___x_224_; 
if (v_isShared_214_ == 0)
{
lean_ctor_set(v___x_213_, 0, v___x_222_);
v___x_224_ = v___x_213_;
goto v_reusejp_223_;
}
else
{
lean_object* v_reuseFailAlloc_225_; 
v_reuseFailAlloc_225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_225_, 0, v___x_222_);
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
else
{
lean_object* v___x_228_; 
lean_del_object(v___x_213_);
lean_dec(v_val_211_);
lean_dec(v_val_208_);
lean_del_object(v___x_204_);
lean_del_object(v___x_200_);
v___x_228_ = lean_box(0);
return v___x_228_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_234_; 
lean_dec_ref_known(v_tail_119_, 2);
lean_dec_ref_known(v___x_118_, 2);
v___x_234_ = lean_box(0);
return v___x_234_;
}
}
}
else
{
lean_object* v___x_235_; 
lean_dec(v___x_118_);
v___x_235_ = lean_box(0);
return v___x_235_;
}
}
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg___closed__0(void){
_start:
{
lean_object* v___x_247_; lean_object* v___x_248_; 
v___x_247_ = lean_unsigned_to_nat(0u);
v___x_248_ = lean_nat_to_int(v___x_247_);
return v___x_248_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg(lean_object* v_00_u03c4_259_, lean_object* v_n_260_, lean_object* v_a_261_, lean_object* v_a_262_, lean_object* v_a_263_, lean_object* v_a_264_){
_start:
{
lean_object* v___x_266_; uint8_t v___x_267_; 
v___x_266_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg___closed__0, &lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg___closed__0_once, _init_lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg___closed__0);
v___x_267_ = lean_int_dec_lt(v_n_260_, v___x_266_);
if (v___x_267_ == 0)
{
lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; 
v___x_268_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg___closed__3));
v___x_269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_269_, 0, v_00_u03c4_259_);
v___x_270_ = l_Int_toNat(v_n_260_);
v___x_271_ = l_Lean_mkRawNatLit(v___x_270_);
v___x_272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_272_, 0, v___x_271_);
v___x_273_ = lean_box(0);
v___x_274_ = lean_unsigned_to_nat(3u);
v___x_275_ = lean_mk_empty_array_with_capacity(v___x_274_);
v___x_276_ = lean_array_push(v___x_275_, v___x_269_);
v___x_277_ = lean_array_push(v___x_276_, v___x_272_);
v___x_278_ = lean_array_push(v___x_277_, v___x_273_);
v___x_279_ = l_Lean_Meta_mkAppOptM(v___x_268_, v___x_278_, v_a_261_, v_a_262_, v_a_263_, v_a_264_);
return v___x_279_;
}
else
{
lean_object* v___x_280_; lean_object* v___x_281_; 
v___x_280_ = lean_int_neg(v_n_260_);
lean_inc_ref(v_00_u03c4_259_);
v___x_281_ = lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg(v_00_u03c4_259_, v___x_280_, v_a_261_, v_a_262_, v_a_263_, v_a_264_);
lean_dec(v___x_280_);
if (lean_obj_tag(v___x_281_) == 0)
{
lean_object* v_a_282_; lean_object* v___x_284_; uint8_t v_isShared_285_; uint8_t v_isSharedCheck_298_; 
v_a_282_ = lean_ctor_get(v___x_281_, 0);
v_isSharedCheck_298_ = !lean_is_exclusive(v___x_281_);
if (v_isSharedCheck_298_ == 0)
{
v___x_284_ = v___x_281_;
v_isShared_285_ = v_isSharedCheck_298_;
goto v_resetjp_283_;
}
else
{
lean_inc(v_a_282_);
lean_dec(v___x_281_);
v___x_284_ = lean_box(0);
v_isShared_285_ = v_isSharedCheck_298_;
goto v_resetjp_283_;
}
v_resetjp_283_:
{
lean_object* v___x_286_; lean_object* v___x_288_; 
v___x_286_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg___closed__6));
if (v_isShared_285_ == 0)
{
lean_ctor_set_tag(v___x_284_, 1);
lean_ctor_set(v___x_284_, 0, v_00_u03c4_259_);
v___x_288_ = v___x_284_;
goto v_reusejp_287_;
}
else
{
lean_object* v_reuseFailAlloc_297_; 
v_reuseFailAlloc_297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_297_, 0, v_00_u03c4_259_);
v___x_288_ = v_reuseFailAlloc_297_;
goto v_reusejp_287_;
}
v_reusejp_287_:
{
lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_289_ = lean_box(0);
v___x_290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_290_, 0, v_a_282_);
v___x_291_ = lean_unsigned_to_nat(3u);
v___x_292_ = lean_mk_empty_array_with_capacity(v___x_291_);
v___x_293_ = lean_array_push(v___x_292_, v___x_288_);
v___x_294_ = lean_array_push(v___x_293_, v___x_289_);
v___x_295_ = lean_array_push(v___x_294_, v___x_290_);
v___x_296_ = l_Lean_Meta_mkAppOptM(v___x_286_, v___x_295_, v_a_261_, v_a_262_, v_a_263_, v_a_264_);
return v___x_296_;
}
}
}
else
{
lean_dec_ref(v_00_u03c4_259_);
return v___x_281_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg___boxed(lean_object* v_00_u03c4_299_, lean_object* v_n_300_, lean_object* v_a_301_, lean_object* v_a_302_, lean_object* v_a_303_, lean_object* v_a_304_, lean_object* v_a_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg(v_00_u03c4_299_, v_n_300_, v_a_301_, v_a_302_, v_a_303_, v_a_304_);
lean_dec(v_a_304_);
lean_dec_ref(v_a_303_);
lean_dec(v_a_302_);
lean_dec_ref(v_a_301_);
lean_dec(v_n_300_);
return v_res_306_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_wholeNumeral(lean_object* v_00_u03c4_307_, lean_object* v_n_308_, lean_object* v_a_309_, lean_object* v_a_310_, lean_object* v_a_311_, lean_object* v_a_312_, lean_object* v_a_313_, lean_object* v_a_314_){
_start:
{
lean_object* v___x_316_; 
v___x_316_ = lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg(v_00_u03c4_307_, v_n_308_, v_a_311_, v_a_312_, v_a_313_, v_a_314_);
return v___x_316_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___boxed(lean_object* v_00_u03c4_317_, lean_object* v_n_318_, lean_object* v_a_319_, lean_object* v_a_320_, lean_object* v_a_321_, lean_object* v_a_322_, lean_object* v_a_323_, lean_object* v_a_324_, lean_object* v_a_325_){
_start:
{
lean_object* v_res_326_; 
v_res_326_ = lp_vampireReplay_Vampire_Reconstruct_wholeNumeral(v_00_u03c4_317_, v_n_318_, v_a_319_, v_a_320_, v_a_321_, v_a_322_, v_a_323_, v_a_324_);
lean_dec(v_a_324_);
lean_dec_ref(v_a_323_);
lean_dec(v_a_322_);
lean_dec_ref(v_a_321_);
lean_dec(v_a_320_);
lean_dec_ref(v_a_319_);
lean_dec(v_n_318_);
return v_res_326_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_castTo___redArg(lean_object* v_00_u03c4_346_, lean_object* v_args_347_, lean_object* v_a_348_, lean_object* v_a_349_, lean_object* v_a_350_, lean_object* v_a_351_){
_start:
{
lean_object* v___x_353_; lean_object* v___x_354_; uint8_t v___x_355_; 
v___x_353_ = lean_array_get_size(v_args_347_);
v___x_354_ = lean_unsigned_to_nat(1u);
v___x_355_ = lean_nat_dec_eq(v___x_353_, v___x_354_);
if (v___x_355_ == 0)
{
lean_object* v___x_356_; lean_object* v___x_357_; 
lean_dec_ref(v_00_u03c4_346_);
v___x_356_ = lean_box(0);
v___x_357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_357_, 0, v___x_356_);
return v___x_357_;
}
else
{
lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; 
v___x_358_ = lean_unsigned_to_nat(0u);
v___x_359_ = lean_array_fget_borrowed(v_args_347_, v___x_358_);
lean_inc(v_a_351_);
lean_inc_ref(v_a_350_);
lean_inc(v_a_349_);
lean_inc_ref(v_a_348_);
lean_inc(v___x_359_);
v___x_360_ = lean_infer_type(v___x_359_, v_a_348_, v_a_349_, v_a_350_, v_a_351_);
if (lean_obj_tag(v___x_360_) == 0)
{
lean_object* v_a_361_; lean_object* v___x_362_; 
v_a_361_ = lean_ctor_get(v___x_360_, 0);
lean_inc_n(v_a_361_, 2);
lean_dec_ref_known(v___x_360_, 1);
lean_inc_ref(v_00_u03c4_346_);
v___x_362_ = l_Lean_Meta_isExprDefEq(v_a_361_, v_00_u03c4_346_, v_a_348_, v_a_349_, v_a_350_, v_a_351_);
if (lean_obj_tag(v___x_362_) == 0)
{
lean_object* v_a_363_; lean_object* v___x_365_; uint8_t v_isShared_366_; uint8_t v_isSharedCheck_463_; 
v_a_363_ = lean_ctor_get(v___x_362_, 0);
v_isSharedCheck_463_ = !lean_is_exclusive(v___x_362_);
if (v_isSharedCheck_463_ == 0)
{
v___x_365_ = v___x_362_;
v_isShared_366_ = v_isSharedCheck_463_;
goto v_resetjp_364_;
}
else
{
lean_inc(v_a_363_);
lean_dec(v___x_362_);
v___x_365_ = lean_box(0);
v_isShared_366_ = v_isSharedCheck_463_;
goto v_resetjp_364_;
}
v_resetjp_364_:
{
uint8_t v___x_367_; 
v___x_367_ = lean_unbox(v_a_363_);
lean_dec(v_a_363_);
if (v___x_367_ == 0)
{
lean_object* v___x_368_; uint8_t v___x_369_; 
v___x_368_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__1));
v___x_369_ = l_Lean_Expr_isConstOf(v_a_361_, v___x_368_);
if (v___x_369_ == 0)
{
lean_object* v___x_370_; uint8_t v___x_371_; 
v___x_370_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__3));
v___x_371_ = l_Lean_Expr_isConstOf(v_a_361_, v___x_370_);
if (v___x_371_ == 0)
{
lean_object* v___x_372_; uint8_t v___x_373_; 
v___x_372_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__5));
v___x_373_ = l_Lean_Expr_isConstOf(v_a_361_, v___x_372_);
lean_dec(v_a_361_);
if (v___x_373_ == 0)
{
lean_object* v___x_374_; lean_object* v___x_376_; 
lean_dec_ref(v_00_u03c4_346_);
v___x_374_ = lean_box(0);
if (v_isShared_366_ == 0)
{
lean_ctor_set(v___x_365_, 0, v___x_374_);
v___x_376_ = v___x_365_;
goto v_reusejp_375_;
}
else
{
lean_object* v_reuseFailAlloc_377_; 
v_reuseFailAlloc_377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_377_, 0, v___x_374_);
v___x_376_ = v_reuseFailAlloc_377_;
goto v_reusejp_375_;
}
v_reusejp_375_:
{
return v___x_376_;
}
}
else
{
lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; 
lean_del_object(v___x_365_);
v___x_378_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__7));
v___x_379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_379_, 0, v_00_u03c4_346_);
v___x_380_ = lean_box(0);
lean_inc(v___x_359_);
v___x_381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_381_, 0, v___x_359_);
v___x_382_ = lean_unsigned_to_nat(3u);
v___x_383_ = lean_mk_empty_array_with_capacity(v___x_382_);
v___x_384_ = lean_array_push(v___x_383_, v___x_379_);
v___x_385_ = lean_array_push(v___x_384_, v___x_380_);
v___x_386_ = lean_array_push(v___x_385_, v___x_381_);
v___x_387_ = l_Lean_Meta_mkAppOptM(v___x_378_, v___x_386_, v_a_348_, v_a_349_, v_a_350_, v_a_351_);
if (lean_obj_tag(v___x_387_) == 0)
{
lean_object* v_a_388_; lean_object* v___x_390_; uint8_t v_isShared_391_; uint8_t v_isSharedCheck_396_; 
v_a_388_ = lean_ctor_get(v___x_387_, 0);
v_isSharedCheck_396_ = !lean_is_exclusive(v___x_387_);
if (v_isSharedCheck_396_ == 0)
{
v___x_390_ = v___x_387_;
v_isShared_391_ = v_isSharedCheck_396_;
goto v_resetjp_389_;
}
else
{
lean_inc(v_a_388_);
lean_dec(v___x_387_);
v___x_390_ = lean_box(0);
v_isShared_391_ = v_isSharedCheck_396_;
goto v_resetjp_389_;
}
v_resetjp_389_:
{
lean_object* v___x_392_; lean_object* v___x_394_; 
v___x_392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_392_, 0, v_a_388_);
if (v_isShared_391_ == 0)
{
lean_ctor_set(v___x_390_, 0, v___x_392_);
v___x_394_ = v___x_390_;
goto v_reusejp_393_;
}
else
{
lean_object* v_reuseFailAlloc_395_; 
v_reuseFailAlloc_395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_395_, 0, v___x_392_);
v___x_394_ = v_reuseFailAlloc_395_;
goto v_reusejp_393_;
}
v_reusejp_393_:
{
return v___x_394_;
}
}
}
else
{
lean_object* v_a_397_; lean_object* v___x_399_; uint8_t v_isShared_400_; uint8_t v_isSharedCheck_404_; 
v_a_397_ = lean_ctor_get(v___x_387_, 0);
v_isSharedCheck_404_ = !lean_is_exclusive(v___x_387_);
if (v_isSharedCheck_404_ == 0)
{
v___x_399_ = v___x_387_;
v_isShared_400_ = v_isSharedCheck_404_;
goto v_resetjp_398_;
}
else
{
lean_inc(v_a_397_);
lean_dec(v___x_387_);
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
}
else
{
lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; 
lean_del_object(v___x_365_);
lean_dec(v_a_361_);
v___x_405_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__8));
v___x_406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_406_, 0, v_00_u03c4_346_);
v___x_407_ = lean_box(0);
lean_inc(v___x_359_);
v___x_408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_408_, 0, v___x_359_);
v___x_409_ = lean_unsigned_to_nat(3u);
v___x_410_ = lean_mk_empty_array_with_capacity(v___x_409_);
v___x_411_ = lean_array_push(v___x_410_, v___x_406_);
v___x_412_ = lean_array_push(v___x_411_, v___x_407_);
v___x_413_ = lean_array_push(v___x_412_, v___x_408_);
v___x_414_ = l_Lean_Meta_mkAppOptM(v___x_405_, v___x_413_, v_a_348_, v_a_349_, v_a_350_, v_a_351_);
if (lean_obj_tag(v___x_414_) == 0)
{
lean_object* v_a_415_; lean_object* v___x_417_; uint8_t v_isShared_418_; uint8_t v_isSharedCheck_423_; 
v_a_415_ = lean_ctor_get(v___x_414_, 0);
v_isSharedCheck_423_ = !lean_is_exclusive(v___x_414_);
if (v_isSharedCheck_423_ == 0)
{
v___x_417_ = v___x_414_;
v_isShared_418_ = v_isSharedCheck_423_;
goto v_resetjp_416_;
}
else
{
lean_inc(v_a_415_);
lean_dec(v___x_414_);
v___x_417_ = lean_box(0);
v_isShared_418_ = v_isSharedCheck_423_;
goto v_resetjp_416_;
}
v_resetjp_416_:
{
lean_object* v___x_419_; lean_object* v___x_421_; 
v___x_419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_419_, 0, v_a_415_);
if (v_isShared_418_ == 0)
{
lean_ctor_set(v___x_417_, 0, v___x_419_);
v___x_421_ = v___x_417_;
goto v_reusejp_420_;
}
else
{
lean_object* v_reuseFailAlloc_422_; 
v_reuseFailAlloc_422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_422_, 0, v___x_419_);
v___x_421_ = v_reuseFailAlloc_422_;
goto v_reusejp_420_;
}
v_reusejp_420_:
{
return v___x_421_;
}
}
}
else
{
lean_object* v_a_424_; lean_object* v___x_426_; uint8_t v_isShared_427_; uint8_t v_isSharedCheck_431_; 
v_a_424_ = lean_ctor_get(v___x_414_, 0);
v_isSharedCheck_431_ = !lean_is_exclusive(v___x_414_);
if (v_isSharedCheck_431_ == 0)
{
v___x_426_ = v___x_414_;
v_isShared_427_ = v_isSharedCheck_431_;
goto v_resetjp_425_;
}
else
{
lean_inc(v_a_424_);
lean_dec(v___x_414_);
v___x_426_ = lean_box(0);
v_isShared_427_ = v_isSharedCheck_431_;
goto v_resetjp_425_;
}
v_resetjp_425_:
{
lean_object* v___x_429_; 
if (v_isShared_427_ == 0)
{
v___x_429_ = v___x_426_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v_a_424_);
v___x_429_ = v_reuseFailAlloc_430_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
return v___x_429_;
}
}
}
}
}
else
{
lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; 
lean_del_object(v___x_365_);
lean_dec(v_a_361_);
v___x_432_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__9));
v___x_433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_433_, 0, v_00_u03c4_346_);
v___x_434_ = lean_box(0);
lean_inc(v___x_359_);
v___x_435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_435_, 0, v___x_359_);
v___x_436_ = lean_unsigned_to_nat(3u);
v___x_437_ = lean_mk_empty_array_with_capacity(v___x_436_);
v___x_438_ = lean_array_push(v___x_437_, v___x_433_);
v___x_439_ = lean_array_push(v___x_438_, v___x_434_);
v___x_440_ = lean_array_push(v___x_439_, v___x_435_);
v___x_441_ = l_Lean_Meta_mkAppOptM(v___x_432_, v___x_440_, v_a_348_, v_a_349_, v_a_350_, v_a_351_);
if (lean_obj_tag(v___x_441_) == 0)
{
lean_object* v_a_442_; lean_object* v___x_444_; uint8_t v_isShared_445_; uint8_t v_isSharedCheck_450_; 
v_a_442_ = lean_ctor_get(v___x_441_, 0);
v_isSharedCheck_450_ = !lean_is_exclusive(v___x_441_);
if (v_isSharedCheck_450_ == 0)
{
v___x_444_ = v___x_441_;
v_isShared_445_ = v_isSharedCheck_450_;
goto v_resetjp_443_;
}
else
{
lean_inc(v_a_442_);
lean_dec(v___x_441_);
v___x_444_ = lean_box(0);
v_isShared_445_ = v_isSharedCheck_450_;
goto v_resetjp_443_;
}
v_resetjp_443_:
{
lean_object* v___x_446_; lean_object* v___x_448_; 
v___x_446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_446_, 0, v_a_442_);
if (v_isShared_445_ == 0)
{
lean_ctor_set(v___x_444_, 0, v___x_446_);
v___x_448_ = v___x_444_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v___x_446_);
v___x_448_ = v_reuseFailAlloc_449_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
return v___x_448_;
}
}
}
else
{
lean_object* v_a_451_; lean_object* v___x_453_; uint8_t v_isShared_454_; uint8_t v_isSharedCheck_458_; 
v_a_451_ = lean_ctor_get(v___x_441_, 0);
v_isSharedCheck_458_ = !lean_is_exclusive(v___x_441_);
if (v_isSharedCheck_458_ == 0)
{
v___x_453_ = v___x_441_;
v_isShared_454_ = v_isSharedCheck_458_;
goto v_resetjp_452_;
}
else
{
lean_inc(v_a_451_);
lean_dec(v___x_441_);
v___x_453_ = lean_box(0);
v_isShared_454_ = v_isSharedCheck_458_;
goto v_resetjp_452_;
}
v_resetjp_452_:
{
lean_object* v___x_456_; 
if (v_isShared_454_ == 0)
{
v___x_456_ = v___x_453_;
goto v_reusejp_455_;
}
else
{
lean_object* v_reuseFailAlloc_457_; 
v_reuseFailAlloc_457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v_a_451_);
v___x_456_ = v_reuseFailAlloc_457_;
goto v_reusejp_455_;
}
v_reusejp_455_:
{
return v___x_456_;
}
}
}
}
}
else
{
lean_object* v___x_459_; lean_object* v___x_461_; 
lean_dec(v_a_361_);
lean_dec_ref(v_00_u03c4_346_);
lean_inc(v___x_359_);
v___x_459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_459_, 0, v___x_359_);
if (v_isShared_366_ == 0)
{
lean_ctor_set(v___x_365_, 0, v___x_459_);
v___x_461_ = v___x_365_;
goto v_reusejp_460_;
}
else
{
lean_object* v_reuseFailAlloc_462_; 
v_reuseFailAlloc_462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_462_, 0, v___x_459_);
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
lean_dec(v_a_361_);
lean_dec_ref(v_00_u03c4_346_);
v_a_464_ = lean_ctor_get(v___x_362_, 0);
v_isSharedCheck_471_ = !lean_is_exclusive(v___x_362_);
if (v_isSharedCheck_471_ == 0)
{
v___x_466_ = v___x_362_;
v_isShared_467_ = v_isSharedCheck_471_;
goto v_resetjp_465_;
}
else
{
lean_inc(v_a_464_);
lean_dec(v___x_362_);
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
lean_object* v_a_472_; lean_object* v___x_474_; uint8_t v_isShared_475_; uint8_t v_isSharedCheck_479_; 
lean_dec_ref(v_00_u03c4_346_);
v_a_472_ = lean_ctor_get(v___x_360_, 0);
v_isSharedCheck_479_ = !lean_is_exclusive(v___x_360_);
if (v_isSharedCheck_479_ == 0)
{
v___x_474_ = v___x_360_;
v_isShared_475_ = v_isSharedCheck_479_;
goto v_resetjp_473_;
}
else
{
lean_inc(v_a_472_);
lean_dec(v___x_360_);
v___x_474_ = lean_box(0);
v_isShared_475_ = v_isSharedCheck_479_;
goto v_resetjp_473_;
}
v_resetjp_473_:
{
lean_object* v___x_477_; 
if (v_isShared_475_ == 0)
{
v___x_477_ = v___x_474_;
goto v_reusejp_476_;
}
else
{
lean_object* v_reuseFailAlloc_478_; 
v_reuseFailAlloc_478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_478_, 0, v_a_472_);
v___x_477_ = v_reuseFailAlloc_478_;
goto v_reusejp_476_;
}
v_reusejp_476_:
{
return v___x_477_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___boxed(lean_object* v_00_u03c4_480_, lean_object* v_args_481_, lean_object* v_a_482_, lean_object* v_a_483_, lean_object* v_a_484_, lean_object* v_a_485_, lean_object* v_a_486_){
_start:
{
lean_object* v_res_487_; 
v_res_487_ = lp_vampireReplay_Vampire_Reconstruct_castTo___redArg(v_00_u03c4_480_, v_args_481_, v_a_482_, v_a_483_, v_a_484_, v_a_485_);
lean_dec(v_a_485_);
lean_dec_ref(v_a_484_);
lean_dec(v_a_483_);
lean_dec_ref(v_a_482_);
lean_dec_ref(v_args_481_);
return v_res_487_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_castTo(lean_object* v_00_u03c4_488_, lean_object* v_args_489_, lean_object* v_a_490_, lean_object* v_a_491_, lean_object* v_a_492_, lean_object* v_a_493_, lean_object* v_a_494_, lean_object* v_a_495_){
_start:
{
lean_object* v___x_497_; 
v___x_497_ = lp_vampireReplay_Vampire_Reconstruct_castTo___redArg(v_00_u03c4_488_, v_args_489_, v_a_492_, v_a_493_, v_a_494_, v_a_495_);
return v___x_497_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_castTo___boxed(lean_object* v_00_u03c4_498_, lean_object* v_args_499_, lean_object* v_a_500_, lean_object* v_a_501_, lean_object* v_a_502_, lean_object* v_a_503_, lean_object* v_a_504_, lean_object* v_a_505_, lean_object* v_a_506_){
_start:
{
lean_object* v_res_507_; 
v_res_507_ = lp_vampireReplay_Vampire_Reconstruct_castTo(v_00_u03c4_498_, v_args_499_, v_a_500_, v_a_501_, v_a_502_, v_a_503_, v_a_504_, v_a_505_);
lean_dec(v_a_505_);
lean_dec_ref(v_a_504_);
lean_dec(v_a_503_);
lean_dec_ref(v_a_502_);
lean_dec(v_a_501_);
lean_dec_ref(v_a_500_);
lean_dec_ref(v_args_499_);
return v_res_507_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_interpreted_spec__0___redArg(lean_object* v_fn_508_, lean_object* v_as_509_, size_t v_sz_510_, size_t v_i_511_, lean_object* v_b_512_, lean_object* v___y_513_, lean_object* v___y_514_, lean_object* v___y_515_, lean_object* v___y_516_){
_start:
{
uint8_t v___x_518_; 
v___x_518_ = lean_usize_dec_lt(v_i_511_, v_sz_510_);
if (v___x_518_ == 0)
{
lean_object* v___x_519_; 
lean_dec(v_fn_508_);
v___x_519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_519_, 0, v_b_512_);
return v___x_519_;
}
else
{
lean_object* v_a_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; 
v_a_520_ = lean_array_uget_borrowed(v_as_509_, v_i_511_);
v___x_521_ = lean_unsigned_to_nat(2u);
v___x_522_ = lean_mk_empty_array_with_capacity(v___x_521_);
v___x_523_ = lean_array_push(v___x_522_, v_b_512_);
lean_inc(v_a_520_);
v___x_524_ = lean_array_push(v___x_523_, v_a_520_);
lean_inc(v_fn_508_);
v___x_525_ = l_Lean_Meta_mkAppM(v_fn_508_, v___x_524_, v___y_513_, v___y_514_, v___y_515_, v___y_516_);
if (lean_obj_tag(v___x_525_) == 0)
{
lean_object* v_a_526_; size_t v___x_527_; size_t v___x_528_; 
v_a_526_ = lean_ctor_get(v___x_525_, 0);
lean_inc(v_a_526_);
lean_dec_ref_known(v___x_525_, 1);
v___x_527_ = ((size_t)1ULL);
v___x_528_ = lean_usize_add(v_i_511_, v___x_527_);
v_i_511_ = v___x_528_;
v_b_512_ = v_a_526_;
goto _start;
}
else
{
lean_dec(v_fn_508_);
return v___x_525_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_interpreted_spec__0___redArg___boxed(lean_object* v_fn_530_, lean_object* v_as_531_, lean_object* v_sz_532_, lean_object* v_i_533_, lean_object* v_b_534_, lean_object* v___y_535_, lean_object* v___y_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_){
_start:
{
size_t v_sz_boxed_540_; size_t v_i_boxed_541_; lean_object* v_res_542_; 
v_sz_boxed_540_ = lean_unbox_usize(v_sz_532_);
lean_dec(v_sz_532_);
v_i_boxed_541_ = lean_unbox_usize(v_i_533_);
lean_dec(v_i_533_);
v_res_542_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_interpreted_spec__0___redArg(v_fn_530_, v_as_531_, v_sz_boxed_540_, v_i_boxed_541_, v_b_534_, v___y_535_, v___y_536_, v___y_537_, v___y_538_);
lean_dec(v___y_538_);
lean_dec_ref(v___y_537_);
lean_dec(v___y_536_);
lean_dec_ref(v___y_535_);
lean_dec_ref(v_as_531_);
return v_res_542_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__9(void){
_start:
{
lean_object* v___x_557_; lean_object* v___x_558_; 
v___x_557_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__8));
v___x_558_ = lean_string_utf8_byte_size(v___x_557_);
return v___x_558_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__12(void){
_start:
{
lean_object* v___x_562_; lean_object* v___x_563_; 
v___x_562_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__11));
v___x_563_ = lean_string_utf8_byte_size(v___x_562_);
return v___x_563_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__29(void){
_start:
{
lean_object* v___x_581_; lean_object* v___x_582_; 
v___x_581_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__28));
v___x_582_ = lean_string_utf8_byte_size(v___x_581_);
return v___x_582_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__33(void){
_start:
{
lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; 
v___x_589_ = lean_box(0);
v___x_590_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__3));
v___x_591_ = l_Lean_Expr_const___override(v___x_590_, v___x_589_);
return v___x_591_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__34(void){
_start:
{
lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; 
v___x_592_ = lean_box(0);
v___x_593_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__4));
v___x_594_ = l_Lean_Expr_const___override(v___x_593_, v___x_592_);
return v___x_594_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted(lean_object* v_name_620_, lean_object* v_args_621_, lean_object* v_a_622_, lean_object* v_a_623_, lean_object* v_a_624_, lean_object* v_a_625_, lean_object* v_a_626_, lean_object* v_a_627_){
_start:
{
lean_object* v_fn_630_; lean_object* v___y_631_; lean_object* v___y_632_; lean_object* v___y_633_; lean_object* v___y_634_; lean_object* v___y_635_; lean_object* v___y_636_; lean_object* v_fn_666_; lean_object* v___y_667_; lean_object* v___y_668_; lean_object* v___y_669_; lean_object* v___y_670_; lean_object* v___y_702_; lean_object* v___y_703_; lean_object* v___y_704_; lean_object* v___y_705_; lean_object* v___y_708_; lean_object* v___y_709_; lean_object* v_00_u03c4_710_; lean_object* v___y_711_; lean_object* v___y_712_; lean_object* v___y_713_; lean_object* v___y_714_; lean_object* v___y_780_; lean_object* v___y_781_; lean_object* v___y_782_; lean_object* v___y_793_; lean_object* v___y_794_; lean_object* v___y_795_; lean_object* v___y_799_; lean_object* v___y_800_; lean_object* v___y_801_; lean_object* v___y_802_; uint8_t v___y_803_; lean_object* v___y_812_; lean_object* v_numeral_813_; lean_object* v___y_814_; lean_object* v___y_815_; lean_object* v___y_816_; lean_object* v___y_817_; lean_object* v_fst_842_; lean_object* v_snd_843_; lean_object* v___x_951_; uint8_t v___x_952_; 
v___x_951_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__14));
v___x_952_ = lean_string_dec_eq(v_name_620_, v___x_951_);
if (v___x_952_ == 0)
{
lean_object* v___x_953_; uint8_t v___x_954_; 
v___x_953_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__15));
v___x_954_ = lean_string_dec_eq(v_name_620_, v___x_953_);
if (v___x_954_ == 0)
{
lean_object* v___x_955_; uint8_t v___x_956_; 
v___x_955_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__16));
v___x_956_ = lean_string_dec_eq(v_name_620_, v___x_955_);
if (v___x_956_ == 0)
{
lean_object* v___x_957_; uint8_t v___x_958_; 
v___x_957_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__17));
v___x_958_ = lean_string_dec_eq(v_name_620_, v___x_957_);
if (v___x_958_ == 0)
{
lean_object* v___x_959_; uint8_t v___x_960_; 
v___x_959_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__18));
v___x_960_ = lean_string_dec_eq(v_name_620_, v___x_959_);
if (v___x_960_ == 0)
{
lean_object* v___x_961_; uint8_t v___x_962_; 
v___x_961_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__19));
v___x_962_ = lean_string_dec_eq(v_name_620_, v___x_961_);
if (v___x_962_ == 0)
{
lean_object* v___x_963_; uint8_t v___x_964_; 
v___x_963_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__20));
v___x_964_ = lean_string_dec_eq(v_name_620_, v___x_963_);
if (v___x_964_ == 0)
{
lean_object* v___x_965_; uint8_t v___x_966_; 
v___x_965_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__21));
v___x_966_ = lean_string_dec_eq(v_name_620_, v___x_965_);
if (v___x_966_ == 0)
{
lean_object* v___x_967_; uint8_t v___x_968_; 
v___x_967_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__22));
v___x_968_ = lean_string_dec_eq(v_name_620_, v___x_967_);
if (v___x_968_ == 0)
{
lean_object* v___x_969_; uint8_t v___x_970_; 
v___x_969_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__23));
v___x_970_ = lean_string_dec_eq(v_name_620_, v___x_969_);
if (v___x_970_ == 0)
{
lean_object* v___x_971_; uint8_t v___x_972_; 
v___x_971_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__24));
v___x_972_ = lean_string_dec_eq(v_name_620_, v___x_971_);
if (v___x_972_ == 0)
{
lean_object* v___x_973_; uint8_t v___x_974_; 
v___x_973_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__25));
v___x_974_ = lean_string_dec_eq(v_name_620_, v___x_973_);
if (v___x_974_ == 0)
{
lean_object* v___x_975_; uint8_t v___x_976_; 
v___x_975_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__26));
v___x_976_ = lean_string_dec_eq(v_name_620_, v___x_975_);
if (v___x_976_ == 0)
{
lean_object* v___x_977_; uint8_t v___x_978_; 
v___x_977_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__27));
v___x_978_ = lean_string_dec_eq(v_name_620_, v___x_977_);
if (v___x_978_ == 0)
{
lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; uint8_t v___x_982_; 
v___x_979_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__28));
v___x_980_ = lean_string_utf8_byte_size(v_name_620_);
v___x_981_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__29, &lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__29_once, _init_lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__29);
v___x_982_ = lean_nat_dec_le(v___x_981_, v___x_980_);
if (v___x_982_ == 0)
{
goto v___jp_942_;
}
else
{
lean_object* v___x_983_; uint8_t v___x_984_; 
v___x_983_ = lean_unsigned_to_nat(0u);
v___x_984_ = lean_string_memcmp(v_name_620_, v___x_979_, v___x_983_, v___x_983_, v___x_981_);
if (v___x_984_ == 0)
{
goto v___jp_942_;
}
else
{
lean_object* v___x_985_; lean_object* v___x_986_; 
v___x_985_ = lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_inside(v_name_620_);
v___x_986_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__30));
v_fst_842_ = v___x_985_;
v_snd_843_ = v___x_986_;
goto v___jp_841_;
}
}
}
else
{
lean_object* v___x_987_; lean_object* v___x_988_; uint8_t v___x_989_; 
lean_dec_ref(v_name_620_);
v___x_987_ = lean_array_get_size(v_args_621_);
v___x_988_ = lean_unsigned_to_nat(1u);
v___x_989_ = lean_nat_dec_eq(v___x_987_, v___x_988_);
if (v___x_989_ == 0)
{
lean_object* v___x_990_; lean_object* v___x_991_; 
v___x_990_ = lean_box(0);
v___x_991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_991_, 0, v___x_990_);
return v___x_991_;
}
else
{
lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; 
v___x_992_ = lean_unsigned_to_nat(0u);
v___x_993_ = lean_array_fget_borrowed(v_args_621_, v___x_992_);
lean_inc(v_a_627_);
lean_inc_ref(v_a_626_);
lean_inc(v_a_625_);
lean_inc_ref(v_a_624_);
lean_inc(v___x_993_);
v___x_994_ = lean_infer_type(v___x_993_, v_a_624_, v_a_625_, v_a_626_, v_a_627_);
if (lean_obj_tag(v___x_994_) == 0)
{
lean_object* v_a_995_; lean_object* v___x_997_; uint8_t v_isShared_998_; uint8_t v_isSharedCheck_1026_; 
v_a_995_ = lean_ctor_get(v___x_994_, 0);
v_isSharedCheck_1026_ = !lean_is_exclusive(v___x_994_);
if (v_isSharedCheck_1026_ == 0)
{
v___x_997_ = v___x_994_;
v_isShared_998_ = v_isSharedCheck_1026_;
goto v_resetjp_996_;
}
else
{
lean_inc(v_a_995_);
lean_dec(v___x_994_);
v___x_997_ = lean_box(0);
v_isShared_998_ = v_isSharedCheck_1026_;
goto v_resetjp_996_;
}
v_resetjp_996_:
{
lean_object* v___x_999_; uint8_t v___x_1000_; 
v___x_999_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__1));
v___x_1000_ = l_Lean_Expr_isConstOf(v_a_995_, v___x_999_);
lean_dec(v_a_995_);
if (v___x_1000_ == 0)
{
lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; 
lean_del_object(v___x_997_);
v___x_1001_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__32));
v___x_1002_ = lean_mk_empty_array_with_capacity(v___x_988_);
lean_inc(v___x_993_);
v___x_1003_ = lean_array_push(v___x_1002_, v___x_993_);
v___x_1004_ = l_Lean_Meta_mkAppM(v___x_1001_, v___x_1003_, v_a_624_, v_a_625_, v_a_626_, v_a_627_);
if (lean_obj_tag(v___x_1004_) == 0)
{
lean_object* v_a_1005_; lean_object* v___x_1007_; uint8_t v_isShared_1008_; uint8_t v_isSharedCheck_1013_; 
v_a_1005_ = lean_ctor_get(v___x_1004_, 0);
v_isSharedCheck_1013_ = !lean_is_exclusive(v___x_1004_);
if (v_isSharedCheck_1013_ == 0)
{
v___x_1007_ = v___x_1004_;
v_isShared_1008_ = v_isSharedCheck_1013_;
goto v_resetjp_1006_;
}
else
{
lean_inc(v_a_1005_);
lean_dec(v___x_1004_);
v___x_1007_ = lean_box(0);
v_isShared_1008_ = v_isSharedCheck_1013_;
goto v_resetjp_1006_;
}
v_resetjp_1006_:
{
lean_object* v___x_1009_; lean_object* v___x_1011_; 
v___x_1009_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1009_, 0, v_a_1005_);
if (v_isShared_1008_ == 0)
{
lean_ctor_set(v___x_1007_, 0, v___x_1009_);
v___x_1011_ = v___x_1007_;
goto v_reusejp_1010_;
}
else
{
lean_object* v_reuseFailAlloc_1012_; 
v_reuseFailAlloc_1012_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1012_, 0, v___x_1009_);
v___x_1011_ = v_reuseFailAlloc_1012_;
goto v_reusejp_1010_;
}
v_reusejp_1010_:
{
return v___x_1011_;
}
}
}
else
{
lean_object* v_a_1014_; lean_object* v___x_1016_; uint8_t v_isShared_1017_; uint8_t v_isSharedCheck_1021_; 
v_a_1014_ = lean_ctor_get(v___x_1004_, 0);
v_isSharedCheck_1021_ = !lean_is_exclusive(v___x_1004_);
if (v_isSharedCheck_1021_ == 0)
{
v___x_1016_ = v___x_1004_;
v_isShared_1017_ = v_isSharedCheck_1021_;
goto v_resetjp_1015_;
}
else
{
lean_inc(v_a_1014_);
lean_dec(v___x_1004_);
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
else
{
lean_object* v___x_1022_; lean_object* v___x_1024_; 
lean_inc(v___x_993_);
v___x_1022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1022_, 0, v___x_993_);
if (v_isShared_998_ == 0)
{
lean_ctor_set(v___x_997_, 0, v___x_1022_);
v___x_1024_ = v___x_997_;
goto v_reusejp_1023_;
}
else
{
lean_object* v_reuseFailAlloc_1025_; 
v_reuseFailAlloc_1025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1025_, 0, v___x_1022_);
v___x_1024_ = v_reuseFailAlloc_1025_;
goto v_reusejp_1023_;
}
v_reusejp_1023_:
{
return v___x_1024_;
}
}
}
}
else
{
lean_object* v_a_1027_; lean_object* v___x_1029_; uint8_t v_isShared_1030_; uint8_t v_isSharedCheck_1034_; 
v_a_1027_ = lean_ctor_get(v___x_994_, 0);
v_isSharedCheck_1034_ = !lean_is_exclusive(v___x_994_);
if (v_isSharedCheck_1034_ == 0)
{
v___x_1029_ = v___x_994_;
v_isShared_1030_ = v_isSharedCheck_1034_;
goto v_resetjp_1028_;
}
else
{
lean_inc(v_a_1027_);
lean_dec(v___x_994_);
v___x_1029_ = lean_box(0);
v_isShared_1030_ = v_isSharedCheck_1034_;
goto v_resetjp_1028_;
}
v_resetjp_1028_:
{
lean_object* v___x_1032_; 
if (v_isShared_1030_ == 0)
{
v___x_1032_ = v___x_1029_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1033_; 
v_reuseFailAlloc_1033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1033_, 0, v_a_1027_);
v___x_1032_ = v_reuseFailAlloc_1033_;
goto v_reusejp_1031_;
}
v_reusejp_1031_:
{
return v___x_1032_;
}
}
}
}
}
}
else
{
lean_object* v___x_1035_; lean_object* v___x_1036_; 
lean_dec_ref(v_name_620_);
v___x_1035_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__33, &lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__33_once, _init_lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__33);
v___x_1036_ = lp_vampireReplay_Vampire_Reconstruct_castTo___redArg(v___x_1035_, v_args_621_, v_a_624_, v_a_625_, v_a_626_, v_a_627_);
return v___x_1036_;
}
}
else
{
lean_object* v___x_1037_; lean_object* v___x_1038_; 
lean_dec_ref(v_name_620_);
v___x_1037_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__34, &lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__34_once, _init_lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__34);
v___x_1038_ = lp_vampireReplay_Vampire_Reconstruct_castTo___redArg(v___x_1037_, v_args_621_, v_a_624_, v_a_625_, v_a_626_, v_a_627_);
return v___x_1038_;
}
}
else
{
lean_object* v___x_1039_; lean_object* v___x_1040_; uint8_t v___x_1041_; 
lean_dec_ref(v_name_620_);
v___x_1039_ = lean_array_get_size(v_args_621_);
v___x_1040_ = lean_unsigned_to_nat(1u);
v___x_1041_ = lean_nat_dec_eq(v___x_1039_, v___x_1040_);
if (v___x_1041_ == 0)
{
lean_object* v___x_1042_; lean_object* v___x_1043_; 
v___x_1042_ = lean_box(0);
v___x_1043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1043_, 0, v___x_1042_);
return v___x_1043_;
}
else
{
lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; 
v___x_1044_ = lean_unsigned_to_nat(0u);
v___x_1045_ = lean_array_fget_borrowed(v_args_621_, v___x_1044_);
v___x_1046_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg___closed__6));
v___x_1047_ = lean_mk_empty_array_with_capacity(v___x_1040_);
lean_inc(v___x_1045_);
v___x_1048_ = lean_array_push(v___x_1047_, v___x_1045_);
v___x_1049_ = l_Lean_Meta_mkAppM(v___x_1046_, v___x_1048_, v_a_624_, v_a_625_, v_a_626_, v_a_627_);
if (lean_obj_tag(v___x_1049_) == 0)
{
lean_object* v_a_1050_; lean_object* v___x_1052_; uint8_t v_isShared_1053_; uint8_t v_isSharedCheck_1058_; 
v_a_1050_ = lean_ctor_get(v___x_1049_, 0);
v_isSharedCheck_1058_ = !lean_is_exclusive(v___x_1049_);
if (v_isSharedCheck_1058_ == 0)
{
v___x_1052_ = v___x_1049_;
v_isShared_1053_ = v_isSharedCheck_1058_;
goto v_resetjp_1051_;
}
else
{
lean_inc(v_a_1050_);
lean_dec(v___x_1049_);
v___x_1052_ = lean_box(0);
v_isShared_1053_ = v_isSharedCheck_1058_;
goto v_resetjp_1051_;
}
v_resetjp_1051_:
{
lean_object* v___x_1054_; lean_object* v___x_1056_; 
v___x_1054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1054_, 0, v_a_1050_);
if (v_isShared_1053_ == 0)
{
lean_ctor_set(v___x_1052_, 0, v___x_1054_);
v___x_1056_ = v___x_1052_;
goto v_reusejp_1055_;
}
else
{
lean_object* v_reuseFailAlloc_1057_; 
v_reuseFailAlloc_1057_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1057_, 0, v___x_1054_);
v___x_1056_ = v_reuseFailAlloc_1057_;
goto v_reusejp_1055_;
}
v_reusejp_1055_:
{
return v___x_1056_;
}
}
}
else
{
lean_object* v_a_1059_; lean_object* v___x_1061_; uint8_t v_isShared_1062_; uint8_t v_isSharedCheck_1066_; 
v_a_1059_ = lean_ctor_get(v___x_1049_, 0);
v_isSharedCheck_1066_ = !lean_is_exclusive(v___x_1049_);
if (v_isSharedCheck_1066_ == 0)
{
v___x_1061_ = v___x_1049_;
v_isShared_1062_ = v_isSharedCheck_1066_;
goto v_resetjp_1060_;
}
else
{
lean_inc(v_a_1059_);
lean_dec(v___x_1049_);
v___x_1061_ = lean_box(0);
v_isShared_1062_ = v_isSharedCheck_1066_;
goto v_resetjp_1060_;
}
v_resetjp_1060_:
{
lean_object* v___x_1064_; 
if (v_isShared_1062_ == 0)
{
v___x_1064_ = v___x_1061_;
goto v_reusejp_1063_;
}
else
{
lean_object* v_reuseFailAlloc_1065_; 
v_reuseFailAlloc_1065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1065_, 0, v_a_1059_);
v___x_1064_ = v_reuseFailAlloc_1065_;
goto v_reusejp_1063_;
}
v_reusejp_1063_:
{
return v___x_1064_;
}
}
}
}
}
}
else
{
lean_object* v___x_1067_; lean_object* v___x_1068_; uint8_t v___x_1069_; 
lean_dec_ref(v_name_620_);
v___x_1067_ = lean_array_get_size(v_args_621_);
v___x_1068_ = lean_unsigned_to_nat(2u);
v___x_1069_ = lean_nat_dec_eq(v___x_1067_, v___x_1068_);
if (v___x_1069_ == 0)
{
lean_object* v___x_1070_; lean_object* v___x_1071_; 
v___x_1070_ = lean_box(0);
v___x_1071_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1071_, 0, v___x_1070_);
return v___x_1071_;
}
else
{
lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; 
v___x_1072_ = lean_unsigned_to_nat(0u);
v___x_1073_ = lean_array_fget_borrowed(v_args_621_, v___x_1072_);
v___x_1074_ = lean_unsigned_to_nat(1u);
v___x_1075_ = lean_array_fget_borrowed(v_args_621_, v___x_1074_);
v___x_1076_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__37));
v___x_1077_ = lean_mk_empty_array_with_capacity(v___x_1068_);
lean_inc(v___x_1075_);
v___x_1078_ = lean_array_push(v___x_1077_, v___x_1075_);
lean_inc(v___x_1073_);
v___x_1079_ = lean_array_push(v___x_1078_, v___x_1073_);
v___x_1080_ = l_Lean_Meta_mkAppM(v___x_1076_, v___x_1079_, v_a_624_, v_a_625_, v_a_626_, v_a_627_);
if (lean_obj_tag(v___x_1080_) == 0)
{
lean_object* v_a_1081_; lean_object* v___x_1083_; uint8_t v_isShared_1084_; uint8_t v_isSharedCheck_1089_; 
v_a_1081_ = lean_ctor_get(v___x_1080_, 0);
v_isSharedCheck_1089_ = !lean_is_exclusive(v___x_1080_);
if (v_isSharedCheck_1089_ == 0)
{
v___x_1083_ = v___x_1080_;
v_isShared_1084_ = v_isSharedCheck_1089_;
goto v_resetjp_1082_;
}
else
{
lean_inc(v_a_1081_);
lean_dec(v___x_1080_);
v___x_1083_ = lean_box(0);
v_isShared_1084_ = v_isSharedCheck_1089_;
goto v_resetjp_1082_;
}
v_resetjp_1082_:
{
lean_object* v___x_1085_; lean_object* v___x_1087_; 
v___x_1085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1085_, 0, v_a_1081_);
if (v_isShared_1084_ == 0)
{
lean_ctor_set(v___x_1083_, 0, v___x_1085_);
v___x_1087_ = v___x_1083_;
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
v_a_1090_ = lean_ctor_get(v___x_1080_, 0);
v_isSharedCheck_1097_ = !lean_is_exclusive(v___x_1080_);
if (v_isSharedCheck_1097_ == 0)
{
v___x_1092_ = v___x_1080_;
v_isShared_1093_ = v_isSharedCheck_1097_;
goto v_resetjp_1091_;
}
else
{
lean_inc(v_a_1090_);
lean_dec(v___x_1080_);
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
}
else
{
lean_object* v___x_1098_; lean_object* v___x_1099_; uint8_t v___x_1100_; 
lean_dec_ref(v_name_620_);
v___x_1098_ = lean_array_get_size(v_args_621_);
v___x_1099_ = lean_unsigned_to_nat(2u);
v___x_1100_ = lean_nat_dec_eq(v___x_1098_, v___x_1099_);
if (v___x_1100_ == 0)
{
lean_object* v___x_1101_; lean_object* v___x_1102_; 
v___x_1101_ = lean_box(0);
v___x_1102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1102_, 0, v___x_1101_);
return v___x_1102_;
}
else
{
lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; 
v___x_1103_ = lean_unsigned_to_nat(0u);
v___x_1104_ = lean_array_fget_borrowed(v_args_621_, v___x_1103_);
v___x_1105_ = lean_unsigned_to_nat(1u);
v___x_1106_ = lean_array_fget_borrowed(v_args_621_, v___x_1105_);
v___x_1107_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__40));
v___x_1108_ = lean_mk_empty_array_with_capacity(v___x_1099_);
lean_inc(v___x_1106_);
v___x_1109_ = lean_array_push(v___x_1108_, v___x_1106_);
lean_inc(v___x_1104_);
v___x_1110_ = lean_array_push(v___x_1109_, v___x_1104_);
v___x_1111_ = l_Lean_Meta_mkAppM(v___x_1107_, v___x_1110_, v_a_624_, v_a_625_, v_a_626_, v_a_627_);
if (lean_obj_tag(v___x_1111_) == 0)
{
lean_object* v_a_1112_; lean_object* v___x_1114_; uint8_t v_isShared_1115_; uint8_t v_isSharedCheck_1120_; 
v_a_1112_ = lean_ctor_get(v___x_1111_, 0);
v_isSharedCheck_1120_ = !lean_is_exclusive(v___x_1111_);
if (v_isSharedCheck_1120_ == 0)
{
v___x_1114_ = v___x_1111_;
v_isShared_1115_ = v_isSharedCheck_1120_;
goto v_resetjp_1113_;
}
else
{
lean_inc(v_a_1112_);
lean_dec(v___x_1111_);
v___x_1114_ = lean_box(0);
v_isShared_1115_ = v_isSharedCheck_1120_;
goto v_resetjp_1113_;
}
v_resetjp_1113_:
{
lean_object* v___x_1116_; lean_object* v___x_1118_; 
v___x_1116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1116_, 0, v_a_1112_);
if (v_isShared_1115_ == 0)
{
lean_ctor_set(v___x_1114_, 0, v___x_1116_);
v___x_1118_ = v___x_1114_;
goto v_reusejp_1117_;
}
else
{
lean_object* v_reuseFailAlloc_1119_; 
v_reuseFailAlloc_1119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1119_, 0, v___x_1116_);
v___x_1118_ = v_reuseFailAlloc_1119_;
goto v_reusejp_1117_;
}
v_reusejp_1117_:
{
return v___x_1118_;
}
}
}
else
{
lean_object* v_a_1121_; lean_object* v___x_1123_; uint8_t v_isShared_1124_; uint8_t v_isSharedCheck_1128_; 
v_a_1121_ = lean_ctor_get(v___x_1111_, 0);
v_isSharedCheck_1128_ = !lean_is_exclusive(v___x_1111_);
if (v_isSharedCheck_1128_ == 0)
{
v___x_1123_ = v___x_1111_;
v_isShared_1124_ = v_isSharedCheck_1128_;
goto v_resetjp_1122_;
}
else
{
lean_inc(v_a_1121_);
lean_dec(v___x_1111_);
v___x_1123_ = lean_box(0);
v_isShared_1124_ = v_isSharedCheck_1128_;
goto v_resetjp_1122_;
}
v_resetjp_1122_:
{
lean_object* v___x_1126_; 
if (v_isShared_1124_ == 0)
{
v___x_1126_ = v___x_1123_;
goto v_reusejp_1125_;
}
else
{
lean_object* v_reuseFailAlloc_1127_; 
v_reuseFailAlloc_1127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1127_, 0, v_a_1121_);
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
}
else
{
lean_object* v___x_1129_; 
lean_dec_ref(v_name_620_);
v___x_1129_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__37));
v_fn_666_ = v___x_1129_;
v___y_667_ = v_a_624_;
v___y_668_ = v_a_625_;
v___y_669_ = v_a_626_;
v___y_670_ = v_a_627_;
goto v___jp_665_;
}
}
else
{
lean_object* v___x_1130_; 
lean_dec_ref(v_name_620_);
v___x_1130_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__40));
v_fn_666_ = v___x_1130_;
v___y_667_ = v_a_624_;
v___y_668_ = v_a_625_;
v___y_669_ = v_a_626_;
v___y_670_ = v_a_627_;
goto v___jp_665_;
}
}
else
{
lean_object* v___x_1131_; 
lean_dec_ref(v_name_620_);
v___x_1131_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__43));
v_fn_666_ = v___x_1131_;
v___y_667_ = v_a_624_;
v___y_668_ = v_a_625_;
v___y_669_ = v_a_626_;
v___y_670_ = v_a_627_;
goto v___jp_665_;
}
}
else
{
lean_dec_ref(v_name_620_);
v___y_702_ = v_a_624_;
v___y_703_ = v_a_625_;
v___y_704_ = v_a_626_;
v___y_705_ = v_a_627_;
goto v___jp_701_;
}
}
else
{
lean_dec_ref(v_name_620_);
v___y_702_ = v_a_624_;
v___y_703_ = v_a_625_;
v___y_704_ = v_a_626_;
v___y_705_ = v_a_627_;
goto v___jp_701_;
}
}
else
{
lean_object* v___x_1132_; 
lean_dec_ref(v_name_620_);
v___x_1132_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__7));
v_fn_630_ = v___x_1132_;
v___y_631_ = v_a_622_;
v___y_632_ = v_a_623_;
v___y_633_ = v_a_624_;
v___y_634_ = v_a_625_;
v___y_635_ = v_a_626_;
v___y_636_ = v_a_627_;
goto v___jp_629_;
}
}
else
{
lean_object* v___x_1133_; 
lean_dec_ref(v_name_620_);
v___x_1133_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__46));
v_fn_666_ = v___x_1133_;
v___y_667_ = v_a_624_;
v___y_668_ = v_a_625_;
v___y_669_ = v_a_626_;
v___y_670_ = v_a_627_;
goto v___jp_665_;
}
}
else
{
lean_object* v___x_1134_; 
lean_dec_ref(v_name_620_);
v___x_1134_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__49));
v_fn_630_ = v___x_1134_;
v___y_631_ = v_a_622_;
v___y_632_ = v_a_623_;
v___y_633_ = v_a_624_;
v___y_634_ = v_a_625_;
v___y_635_ = v_a_626_;
v___y_636_ = v_a_627_;
goto v___jp_629_;
}
v___jp_629_:
{
lean_object* v___x_637_; lean_object* v___x_638_; uint8_t v___x_639_; 
v___x_637_ = lean_unsigned_to_nat(0u);
v___x_638_ = lean_array_get_size(v_args_621_);
v___x_639_ = lean_nat_dec_lt(v___x_637_, v___x_638_);
if (v___x_639_ == 0)
{
lean_object* v___x_640_; lean_object* v___x_641_; 
v___x_640_ = lean_box(0);
v___x_641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_641_, 0, v___x_640_);
return v___x_641_;
}
else
{
lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; size_t v_sz_645_; size_t v___x_646_; lean_object* v___x_647_; 
v___x_642_ = lean_array_fget_borrowed(v_args_621_, v___x_637_);
v___x_643_ = lean_unsigned_to_nat(1u);
v___x_644_ = l_Array_extract___redArg(v_args_621_, v___x_643_, v___x_638_);
v_sz_645_ = lean_array_size(v___x_644_);
v___x_646_ = ((size_t)0ULL);
lean_inc(v___x_642_);
lean_inc(v_fn_630_);
v___x_647_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_interpreted_spec__0___redArg(v_fn_630_, v___x_644_, v_sz_645_, v___x_646_, v___x_642_, v___y_633_, v___y_634_, v___y_635_, v___y_636_);
lean_dec_ref(v___x_644_);
if (lean_obj_tag(v___x_647_) == 0)
{
lean_object* v_a_648_; lean_object* v___x_650_; uint8_t v_isShared_651_; uint8_t v_isSharedCheck_656_; 
v_a_648_ = lean_ctor_get(v___x_647_, 0);
v_isSharedCheck_656_ = !lean_is_exclusive(v___x_647_);
if (v_isSharedCheck_656_ == 0)
{
v___x_650_ = v___x_647_;
v_isShared_651_ = v_isSharedCheck_656_;
goto v_resetjp_649_;
}
else
{
lean_inc(v_a_648_);
lean_dec(v___x_647_);
v___x_650_ = lean_box(0);
v_isShared_651_ = v_isSharedCheck_656_;
goto v_resetjp_649_;
}
v_resetjp_649_:
{
lean_object* v___x_652_; lean_object* v___x_654_; 
v___x_652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_652_, 0, v_a_648_);
if (v_isShared_651_ == 0)
{
lean_ctor_set(v___x_650_, 0, v___x_652_);
v___x_654_ = v___x_650_;
goto v_reusejp_653_;
}
else
{
lean_object* v_reuseFailAlloc_655_; 
v_reuseFailAlloc_655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_655_, 0, v___x_652_);
v___x_654_ = v_reuseFailAlloc_655_;
goto v_reusejp_653_;
}
v_reusejp_653_:
{
return v___x_654_;
}
}
}
else
{
lean_object* v_a_657_; lean_object* v___x_659_; uint8_t v_isShared_660_; uint8_t v_isSharedCheck_664_; 
v_a_657_ = lean_ctor_get(v___x_647_, 0);
v_isSharedCheck_664_ = !lean_is_exclusive(v___x_647_);
if (v_isSharedCheck_664_ == 0)
{
v___x_659_ = v___x_647_;
v_isShared_660_ = v_isSharedCheck_664_;
goto v_resetjp_658_;
}
else
{
lean_inc(v_a_657_);
lean_dec(v___x_647_);
v___x_659_ = lean_box(0);
v_isShared_660_ = v_isSharedCheck_664_;
goto v_resetjp_658_;
}
v_resetjp_658_:
{
lean_object* v___x_662_; 
if (v_isShared_660_ == 0)
{
v___x_662_ = v___x_659_;
goto v_reusejp_661_;
}
else
{
lean_object* v_reuseFailAlloc_663_; 
v_reuseFailAlloc_663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_663_, 0, v_a_657_);
v___x_662_ = v_reuseFailAlloc_663_;
goto v_reusejp_661_;
}
v_reusejp_661_:
{
return v___x_662_;
}
}
}
}
}
v___jp_665_:
{
lean_object* v___x_671_; lean_object* v___x_672_; uint8_t v___x_673_; 
v___x_671_ = lean_array_get_size(v_args_621_);
v___x_672_ = lean_unsigned_to_nat(2u);
v___x_673_ = lean_nat_dec_eq(v___x_671_, v___x_672_);
if (v___x_673_ == 0)
{
lean_object* v___x_674_; lean_object* v___x_675_; 
v___x_674_ = lean_box(0);
v___x_675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_675_, 0, v___x_674_);
return v___x_675_;
}
else
{
lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; 
v___x_676_ = lean_unsigned_to_nat(0u);
v___x_677_ = lean_array_fget_borrowed(v_args_621_, v___x_676_);
v___x_678_ = lean_unsigned_to_nat(1u);
v___x_679_ = lean_array_fget_borrowed(v_args_621_, v___x_678_);
v___x_680_ = lean_mk_empty_array_with_capacity(v___x_672_);
lean_inc(v___x_677_);
v___x_681_ = lean_array_push(v___x_680_, v___x_677_);
lean_inc(v___x_679_);
v___x_682_ = lean_array_push(v___x_681_, v___x_679_);
lean_inc(v_fn_666_);
v___x_683_ = l_Lean_Meta_mkAppM(v_fn_666_, v___x_682_, v___y_667_, v___y_668_, v___y_669_, v___y_670_);
if (lean_obj_tag(v___x_683_) == 0)
{
lean_object* v_a_684_; lean_object* v___x_686_; uint8_t v_isShared_687_; uint8_t v_isSharedCheck_692_; 
v_a_684_ = lean_ctor_get(v___x_683_, 0);
v_isSharedCheck_692_ = !lean_is_exclusive(v___x_683_);
if (v_isSharedCheck_692_ == 0)
{
v___x_686_ = v___x_683_;
v_isShared_687_ = v_isSharedCheck_692_;
goto v_resetjp_685_;
}
else
{
lean_inc(v_a_684_);
lean_dec(v___x_683_);
v___x_686_ = lean_box(0);
v_isShared_687_ = v_isSharedCheck_692_;
goto v_resetjp_685_;
}
v_resetjp_685_:
{
lean_object* v___x_688_; lean_object* v___x_690_; 
v___x_688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_688_, 0, v_a_684_);
if (v_isShared_687_ == 0)
{
lean_ctor_set(v___x_686_, 0, v___x_688_);
v___x_690_ = v___x_686_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_691_; 
v_reuseFailAlloc_691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_691_, 0, v___x_688_);
v___x_690_ = v_reuseFailAlloc_691_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
return v___x_690_;
}
}
}
else
{
lean_object* v_a_693_; lean_object* v___x_695_; uint8_t v_isShared_696_; uint8_t v_isSharedCheck_700_; 
v_a_693_ = lean_ctor_get(v___x_683_, 0);
v_isSharedCheck_700_ = !lean_is_exclusive(v___x_683_);
if (v_isSharedCheck_700_ == 0)
{
v___x_695_ = v___x_683_;
v_isShared_696_ = v_isSharedCheck_700_;
goto v_resetjp_694_;
}
else
{
lean_inc(v_a_693_);
lean_dec(v___x_683_);
v___x_695_ = lean_box(0);
v_isShared_696_ = v_isSharedCheck_700_;
goto v_resetjp_694_;
}
v_resetjp_694_:
{
lean_object* v___x_698_; 
if (v_isShared_696_ == 0)
{
v___x_698_ = v___x_695_;
goto v_reusejp_697_;
}
else
{
lean_object* v_reuseFailAlloc_699_; 
v_reuseFailAlloc_699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_699_, 0, v_a_693_);
v___x_698_ = v_reuseFailAlloc_699_;
goto v_reusejp_697_;
}
v_reusejp_697_:
{
return v___x_698_;
}
}
}
}
}
v___jp_701_:
{
lean_object* v___x_706_; 
v___x_706_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__2));
v_fn_666_ = v___x_706_;
v___y_667_ = v___y_702_;
v___y_668_ = v___y_703_;
v___y_669_ = v___y_704_;
v___y_670_ = v___y_705_;
goto v___jp_665_;
}
v___jp_707_:
{
lean_object* v___x_715_; uint8_t v___x_716_; 
v___x_715_ = lean_unsigned_to_nat(1u);
v___x_716_ = lean_nat_dec_eq(v___y_709_, v___x_715_);
if (v___x_716_ == 0)
{
lean_object* v___x_717_; 
lean_inc_ref(v_00_u03c4_710_);
v___x_717_ = lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg(v_00_u03c4_710_, v___y_708_, v___y_711_, v___y_712_, v___y_713_, v___y_714_);
lean_dec(v___y_708_);
if (lean_obj_tag(v___x_717_) == 0)
{
lean_object* v_a_718_; lean_object* v___x_719_; lean_object* v___x_720_; 
v_a_718_ = lean_ctor_get(v___x_717_, 0);
lean_inc(v_a_718_);
lean_dec_ref_known(v___x_717_, 1);
v___x_719_ = lean_nat_to_int(v___y_709_);
v___x_720_ = lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg(v_00_u03c4_710_, v___x_719_, v___y_711_, v___y_712_, v___y_713_, v___y_714_);
lean_dec(v___x_719_);
if (lean_obj_tag(v___x_720_) == 0)
{
lean_object* v_a_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; 
v_a_721_ = lean_ctor_get(v___x_720_, 0);
lean_inc(v_a_721_);
lean_dec_ref_known(v___x_720_, 1);
v___x_722_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__2));
v___x_723_ = lean_unsigned_to_nat(2u);
v___x_724_ = lean_mk_empty_array_with_capacity(v___x_723_);
v___x_725_ = lean_array_push(v___x_724_, v_a_718_);
v___x_726_ = lean_array_push(v___x_725_, v_a_721_);
v___x_727_ = l_Lean_Meta_mkAppM(v___x_722_, v___x_726_, v___y_711_, v___y_712_, v___y_713_, v___y_714_);
if (lean_obj_tag(v___x_727_) == 0)
{
lean_object* v_a_728_; lean_object* v___x_730_; uint8_t v_isShared_731_; uint8_t v_isSharedCheck_736_; 
v_a_728_ = lean_ctor_get(v___x_727_, 0);
v_isSharedCheck_736_ = !lean_is_exclusive(v___x_727_);
if (v_isSharedCheck_736_ == 0)
{
v___x_730_ = v___x_727_;
v_isShared_731_ = v_isSharedCheck_736_;
goto v_resetjp_729_;
}
else
{
lean_inc(v_a_728_);
lean_dec(v___x_727_);
v___x_730_ = lean_box(0);
v_isShared_731_ = v_isSharedCheck_736_;
goto v_resetjp_729_;
}
v_resetjp_729_:
{
lean_object* v___x_732_; lean_object* v___x_734_; 
v___x_732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_732_, 0, v_a_728_);
if (v_isShared_731_ == 0)
{
lean_ctor_set(v___x_730_, 0, v___x_732_);
v___x_734_ = v___x_730_;
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
else
{
lean_object* v_a_737_; lean_object* v___x_739_; uint8_t v_isShared_740_; uint8_t v_isSharedCheck_744_; 
v_a_737_ = lean_ctor_get(v___x_727_, 0);
v_isSharedCheck_744_ = !lean_is_exclusive(v___x_727_);
if (v_isSharedCheck_744_ == 0)
{
v___x_739_ = v___x_727_;
v_isShared_740_ = v_isSharedCheck_744_;
goto v_resetjp_738_;
}
else
{
lean_inc(v_a_737_);
lean_dec(v___x_727_);
v___x_739_ = lean_box(0);
v_isShared_740_ = v_isSharedCheck_744_;
goto v_resetjp_738_;
}
v_resetjp_738_:
{
lean_object* v___x_742_; 
if (v_isShared_740_ == 0)
{
v___x_742_ = v___x_739_;
goto v_reusejp_741_;
}
else
{
lean_object* v_reuseFailAlloc_743_; 
v_reuseFailAlloc_743_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_743_, 0, v_a_737_);
v___x_742_ = v_reuseFailAlloc_743_;
goto v_reusejp_741_;
}
v_reusejp_741_:
{
return v___x_742_;
}
}
}
}
else
{
lean_object* v_a_745_; lean_object* v___x_747_; uint8_t v_isShared_748_; uint8_t v_isSharedCheck_752_; 
lean_dec(v_a_718_);
v_a_745_ = lean_ctor_get(v___x_720_, 0);
v_isSharedCheck_752_ = !lean_is_exclusive(v___x_720_);
if (v_isSharedCheck_752_ == 0)
{
v___x_747_ = v___x_720_;
v_isShared_748_ = v_isSharedCheck_752_;
goto v_resetjp_746_;
}
else
{
lean_inc(v_a_745_);
lean_dec(v___x_720_);
v___x_747_ = lean_box(0);
v_isShared_748_ = v_isSharedCheck_752_;
goto v_resetjp_746_;
}
v_resetjp_746_:
{
lean_object* v___x_750_; 
if (v_isShared_748_ == 0)
{
v___x_750_ = v___x_747_;
goto v_reusejp_749_;
}
else
{
lean_object* v_reuseFailAlloc_751_; 
v_reuseFailAlloc_751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_751_, 0, v_a_745_);
v___x_750_ = v_reuseFailAlloc_751_;
goto v_reusejp_749_;
}
v_reusejp_749_:
{
return v___x_750_;
}
}
}
}
else
{
lean_object* v_a_753_; lean_object* v___x_755_; uint8_t v_isShared_756_; uint8_t v_isSharedCheck_760_; 
lean_dec_ref(v_00_u03c4_710_);
lean_dec(v___y_709_);
v_a_753_ = lean_ctor_get(v___x_717_, 0);
v_isSharedCheck_760_ = !lean_is_exclusive(v___x_717_);
if (v_isSharedCheck_760_ == 0)
{
v___x_755_ = v___x_717_;
v_isShared_756_ = v_isSharedCheck_760_;
goto v_resetjp_754_;
}
else
{
lean_inc(v_a_753_);
lean_dec(v___x_717_);
v___x_755_ = lean_box(0);
v_isShared_756_ = v_isSharedCheck_760_;
goto v_resetjp_754_;
}
v_resetjp_754_:
{
lean_object* v___x_758_; 
if (v_isShared_756_ == 0)
{
v___x_758_ = v___x_755_;
goto v_reusejp_757_;
}
else
{
lean_object* v_reuseFailAlloc_759_; 
v_reuseFailAlloc_759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_759_, 0, v_a_753_);
v___x_758_ = v_reuseFailAlloc_759_;
goto v_reusejp_757_;
}
v_reusejp_757_:
{
return v___x_758_;
}
}
}
}
else
{
lean_object* v___x_761_; 
lean_dec(v___y_709_);
v___x_761_ = lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg(v_00_u03c4_710_, v___y_708_, v___y_711_, v___y_712_, v___y_713_, v___y_714_);
lean_dec(v___y_708_);
if (lean_obj_tag(v___x_761_) == 0)
{
lean_object* v_a_762_; lean_object* v___x_764_; uint8_t v_isShared_765_; uint8_t v_isSharedCheck_770_; 
v_a_762_ = lean_ctor_get(v___x_761_, 0);
v_isSharedCheck_770_ = !lean_is_exclusive(v___x_761_);
if (v_isSharedCheck_770_ == 0)
{
v___x_764_ = v___x_761_;
v_isShared_765_ = v_isSharedCheck_770_;
goto v_resetjp_763_;
}
else
{
lean_inc(v_a_762_);
lean_dec(v___x_761_);
v___x_764_ = lean_box(0);
v_isShared_765_ = v_isSharedCheck_770_;
goto v_resetjp_763_;
}
v_resetjp_763_:
{
lean_object* v___x_766_; lean_object* v___x_768_; 
v___x_766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_766_, 0, v_a_762_);
if (v_isShared_765_ == 0)
{
lean_ctor_set(v___x_764_, 0, v___x_766_);
v___x_768_ = v___x_764_;
goto v_reusejp_767_;
}
else
{
lean_object* v_reuseFailAlloc_769_; 
v_reuseFailAlloc_769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_769_, 0, v___x_766_);
v___x_768_ = v_reuseFailAlloc_769_;
goto v_reusejp_767_;
}
v_reusejp_767_:
{
return v___x_768_;
}
}
}
else
{
lean_object* v_a_771_; lean_object* v___x_773_; uint8_t v_isShared_774_; uint8_t v_isSharedCheck_778_; 
v_a_771_ = lean_ctor_get(v___x_761_, 0);
v_isSharedCheck_778_ = !lean_is_exclusive(v___x_761_);
if (v_isSharedCheck_778_ == 0)
{
v___x_773_ = v___x_761_;
v_isShared_774_ = v_isSharedCheck_778_;
goto v_resetjp_772_;
}
else
{
lean_inc(v_a_771_);
lean_dec(v___x_761_);
v___x_773_ = lean_box(0);
v_isShared_774_ = v_isSharedCheck_778_;
goto v_resetjp_772_;
}
v_resetjp_772_:
{
lean_object* v___x_776_; 
if (v_isShared_774_ == 0)
{
v___x_776_ = v___x_773_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_777_; 
v_reuseFailAlloc_777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_777_, 0, v_a_771_);
v___x_776_ = v_reuseFailAlloc_777_;
goto v_reusejp_775_;
}
v_reusejp_775_:
{
return v___x_776_;
}
}
}
}
}
v___jp_779_:
{
if (lean_obj_tag(v___y_782_) == 0)
{
lean_object* v_a_783_; 
v_a_783_ = lean_ctor_get(v___y_782_, 0);
lean_inc(v_a_783_);
lean_dec_ref_known(v___y_782_, 1);
v___y_708_ = v___y_780_;
v___y_709_ = v___y_781_;
v_00_u03c4_710_ = v_a_783_;
v___y_711_ = v_a_624_;
v___y_712_ = v_a_625_;
v___y_713_ = v_a_626_;
v___y_714_ = v_a_627_;
goto v___jp_707_;
}
else
{
lean_object* v_a_784_; lean_object* v___x_786_; uint8_t v_isShared_787_; uint8_t v_isSharedCheck_791_; 
lean_dec(v___y_781_);
lean_dec(v___y_780_);
v_a_784_ = lean_ctor_get(v___y_782_, 0);
v_isSharedCheck_791_ = !lean_is_exclusive(v___y_782_);
if (v_isSharedCheck_791_ == 0)
{
v___x_786_ = v___y_782_;
v_isShared_787_ = v_isSharedCheck_791_;
goto v_resetjp_785_;
}
else
{
lean_inc(v_a_784_);
lean_dec(v___y_782_);
v___x_786_ = lean_box(0);
v_isShared_787_ = v_isSharedCheck_791_;
goto v_resetjp_785_;
}
v_resetjp_785_:
{
lean_object* v___x_789_; 
if (v_isShared_787_ == 0)
{
v___x_789_ = v___x_786_;
goto v_reusejp_788_;
}
else
{
lean_object* v_reuseFailAlloc_790_; 
v_reuseFailAlloc_790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_790_, 0, v_a_784_);
v___x_789_ = v_reuseFailAlloc_790_;
goto v_reusejp_788_;
}
v_reusejp_788_:
{
return v___x_789_;
}
}
}
}
v___jp_792_:
{
lean_object* v___x_796_; lean_object* v___x_797_; 
v___x_796_ = lean_box(0);
lean_inc(v___y_795_);
v___x_797_ = l_Lean_Expr_const___override(v___y_795_, v___x_796_);
v___y_708_ = v___y_793_;
v___y_709_ = v___y_794_;
v_00_u03c4_710_ = v___x_797_;
v___y_711_ = v_a_624_;
v___y_712_ = v_a_625_;
v___y_713_ = v_a_626_;
v___y_714_ = v_a_627_;
goto v___jp_707_;
}
v___jp_798_:
{
if (v___y_803_ == 0)
{
lean_object* v___x_804_; uint8_t v___x_805_; 
lean_dec_ref(v___y_801_);
v___x_804_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___closed__2));
v___x_805_ = lean_string_dec_eq(v___y_800_, v___x_804_);
if (v___x_805_ == 0)
{
lean_object* v___x_806_; uint8_t v___x_807_; 
v___x_806_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort___closed__4));
v___x_807_ = lean_string_dec_eq(v___y_800_, v___x_806_);
lean_dec_ref(v___y_800_);
if (v___x_807_ == 0)
{
lean_object* v___x_808_; 
v___x_808_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__4));
v___y_793_ = v___y_799_;
v___y_794_ = v___y_802_;
v___y_795_ = v___x_808_;
goto v___jp_792_;
}
else
{
lean_object* v___x_809_; 
v___x_809_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__3));
v___y_793_ = v___y_799_;
v___y_794_ = v___y_802_;
v___y_795_ = v___x_809_;
goto v___jp_792_;
}
}
else
{
lean_object* v___x_810_; 
lean_dec_ref(v___y_800_);
v___x_810_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_castTo___redArg___closed__1));
v___y_793_ = v___y_799_;
v___y_794_ = v___y_802_;
v___y_795_ = v___x_810_;
goto v___jp_792_;
}
}
else
{
lean_dec_ref(v___y_800_);
v___y_780_ = v___y_799_;
v___y_781_ = v___y_802_;
v___y_782_ = v___y_801_;
goto v___jp_779_;
}
}
v___jp_811_:
{
lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; 
v___x_818_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__7));
v___x_819_ = lean_unsigned_to_nat(2u);
v___x_820_ = lean_mk_empty_array_with_capacity(v___x_819_);
v___x_821_ = lean_array_push(v___x_820_, v_numeral_813_);
v___x_822_ = lean_array_push(v___x_821_, v___y_812_);
v___x_823_ = l_Lean_Meta_mkAppM(v___x_818_, v___x_822_, v___y_814_, v___y_815_, v___y_816_, v___y_817_);
if (lean_obj_tag(v___x_823_) == 0)
{
lean_object* v_a_824_; lean_object* v___x_826_; uint8_t v_isShared_827_; uint8_t v_isSharedCheck_832_; 
v_a_824_ = lean_ctor_get(v___x_823_, 0);
v_isSharedCheck_832_ = !lean_is_exclusive(v___x_823_);
if (v_isSharedCheck_832_ == 0)
{
v___x_826_ = v___x_823_;
v_isShared_827_ = v_isSharedCheck_832_;
goto v_resetjp_825_;
}
else
{
lean_inc(v_a_824_);
lean_dec(v___x_823_);
v___x_826_ = lean_box(0);
v_isShared_827_ = v_isSharedCheck_832_;
goto v_resetjp_825_;
}
v_resetjp_825_:
{
lean_object* v___x_828_; lean_object* v___x_830_; 
v___x_828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_828_, 0, v_a_824_);
if (v_isShared_827_ == 0)
{
lean_ctor_set(v___x_826_, 0, v___x_828_);
v___x_830_ = v___x_826_;
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
v_a_833_ = lean_ctor_get(v___x_823_, 0);
v_isSharedCheck_840_ = !lean_is_exclusive(v___x_823_);
if (v_isSharedCheck_840_ == 0)
{
v___x_835_ = v___x_823_;
v_isShared_836_ = v_isSharedCheck_840_;
goto v_resetjp_834_;
}
else
{
lean_inc(v_a_833_);
lean_dec(v___x_823_);
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
v___jp_841_:
{
lean_object* v___x_844_; 
v___x_844_ = lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_numeralSort(v_fst_842_);
if (lean_obj_tag(v___x_844_) == 1)
{
lean_object* v_val_845_; lean_object* v___x_847_; uint8_t v_isShared_848_; uint8_t v_isSharedCheck_928_; 
v_val_845_ = lean_ctor_get(v___x_844_, 0);
v_isSharedCheck_928_ = !lean_is_exclusive(v___x_844_);
if (v_isSharedCheck_928_ == 0)
{
v___x_847_ = v___x_844_;
v_isShared_848_ = v_isSharedCheck_928_;
goto v_resetjp_846_;
}
else
{
lean_inc(v_val_845_);
lean_dec(v___x_844_);
v___x_847_ = lean_box(0);
v_isShared_848_ = v_isSharedCheck_928_;
goto v_resetjp_846_;
}
v_resetjp_846_:
{
lean_object* v_snd_849_; lean_object* v_fst_850_; lean_object* v_fst_851_; lean_object* v_snd_852_; lean_object* v___x_853_; lean_object* v___x_854_; uint8_t v___x_855_; 
v_snd_849_ = lean_ctor_get(v_val_845_, 1);
lean_inc(v_snd_849_);
v_fst_850_ = lean_ctor_get(v_val_845_, 0);
lean_inc(v_fst_850_);
lean_dec(v_val_845_);
v_fst_851_ = lean_ctor_get(v_snd_849_, 0);
lean_inc(v_fst_851_);
v_snd_852_ = lean_ctor_get(v_snd_849_, 1);
lean_inc(v_snd_852_);
lean_dec(v_snd_849_);
v___x_853_ = lean_array_get_size(v_args_621_);
v___x_854_ = lean_unsigned_to_nat(1u);
v___x_855_ = lean_nat_dec_eq(v___x_853_, v___x_854_);
if (v___x_855_ == 0)
{
lean_object* v___x_856_; uint8_t v___x_857_; 
v___x_856_ = lean_unsigned_to_nat(0u);
v___x_857_ = lean_nat_dec_eq(v___x_853_, v___x_856_);
if (v___x_857_ == 0)
{
lean_object* v___x_858_; lean_object* v___x_860_; 
lean_dec(v_snd_852_);
lean_dec(v_fst_851_);
lean_dec(v_fst_850_);
v___x_858_ = lean_box(0);
if (v_isShared_848_ == 0)
{
lean_ctor_set_tag(v___x_847_, 0);
lean_ctor_set(v___x_847_, 0, v___x_858_);
v___x_860_ = v___x_847_;
goto v_reusejp_859_;
}
else
{
lean_object* v_reuseFailAlloc_861_; 
v_reuseFailAlloc_861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_861_, 0, v___x_858_);
v___x_860_ = v_reuseFailAlloc_861_;
goto v_reusejp_859_;
}
v_reusejp_859_:
{
return v___x_860_;
}
}
else
{
lean_del_object(v___x_847_);
if (lean_obj_tag(v_snd_843_) == 0)
{
lean_object* v___x_862_; 
lean_inc(v_fst_850_);
v___x_862_ = lp_vampireReplay_Vampire_Reconstruct_sortType(v_fst_850_, v_a_622_, v_a_623_, v_a_624_, v_a_625_, v_a_626_, v_a_627_);
if (lean_obj_tag(v___x_862_) == 0)
{
lean_dec(v_fst_850_);
v___y_780_ = v_fst_851_;
v___y_781_ = v_snd_852_;
v___y_782_ = v___x_862_;
goto v___jp_779_;
}
else
{
lean_object* v_a_863_; uint8_t v___x_864_; 
v_a_863_ = lean_ctor_get(v___x_862_, 0);
lean_inc(v_a_863_);
v___x_864_ = l_Lean_Exception_isInterrupt(v_a_863_);
if (v___x_864_ == 0)
{
uint8_t v___x_865_; 
v___x_865_ = l_Lean_Exception_isRuntime(v_a_863_);
v___y_799_ = v_fst_851_;
v___y_800_ = v_fst_850_;
v___y_801_ = v___x_862_;
v___y_802_ = v_snd_852_;
v___y_803_ = v___x_865_;
goto v___jp_798_;
}
else
{
lean_dec(v_a_863_);
v___y_799_ = v_fst_851_;
v___y_800_ = v_fst_850_;
v___y_801_ = v___x_862_;
v___y_802_ = v_snd_852_;
v___y_803_ = v___x_864_;
goto v___jp_798_;
}
}
}
else
{
lean_object* v_val_866_; lean_object* v___x_867_; lean_object* v___x_868_; 
lean_dec(v_fst_850_);
v_val_866_ = lean_ctor_get(v_snd_843_, 0);
v___x_867_ = lean_box(0);
lean_inc(v_val_866_);
v___x_868_ = l_Lean_Expr_const___override(v_val_866_, v___x_867_);
v___y_708_ = v_fst_851_;
v___y_709_ = v_snd_852_;
v_00_u03c4_710_ = v___x_868_;
v___y_711_ = v_a_624_;
v___y_712_ = v_a_625_;
v___y_713_ = v_a_626_;
v___y_714_ = v_a_627_;
goto v___jp_707_;
}
}
}
else
{
lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; 
lean_dec(v_fst_850_);
lean_del_object(v___x_847_);
v___x_869_ = lean_unsigned_to_nat(0u);
v___x_870_ = lean_array_fget_borrowed(v_args_621_, v___x_869_);
lean_inc(v_a_627_);
lean_inc_ref(v_a_626_);
lean_inc(v_a_625_);
lean_inc_ref(v_a_624_);
lean_inc(v___x_870_);
v___x_871_ = lean_infer_type(v___x_870_, v_a_624_, v_a_625_, v_a_626_, v_a_627_);
if (lean_obj_tag(v___x_871_) == 0)
{
lean_object* v_a_872_; uint8_t v___x_873_; 
v_a_872_ = lean_ctor_get(v___x_871_, 0);
lean_inc(v_a_872_);
lean_dec_ref_known(v___x_871_, 1);
v___x_873_ = lean_nat_dec_eq(v_snd_852_, v___x_854_);
if (v___x_873_ == 0)
{
lean_object* v___x_874_; 
lean_inc(v_a_872_);
v___x_874_ = lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg(v_a_872_, v_fst_851_, v_a_624_, v_a_625_, v_a_626_, v_a_627_);
lean_dec(v_fst_851_);
if (lean_obj_tag(v___x_874_) == 0)
{
lean_object* v_a_875_; lean_object* v___x_876_; lean_object* v___x_877_; 
v_a_875_ = lean_ctor_get(v___x_874_, 0);
lean_inc(v_a_875_);
lean_dec_ref_known(v___x_874_, 1);
v___x_876_ = lean_nat_to_int(v_snd_852_);
v___x_877_ = lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg(v_a_872_, v___x_876_, v_a_624_, v_a_625_, v_a_626_, v_a_627_);
lean_dec(v___x_876_);
if (lean_obj_tag(v___x_877_) == 0)
{
lean_object* v_a_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; 
v_a_878_ = lean_ctor_get(v___x_877_, 0);
lean_inc(v_a_878_);
lean_dec_ref_known(v___x_877_, 1);
v___x_879_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__2));
v___x_880_ = lean_unsigned_to_nat(2u);
v___x_881_ = lean_mk_empty_array_with_capacity(v___x_880_);
v___x_882_ = lean_array_push(v___x_881_, v_a_875_);
v___x_883_ = lean_array_push(v___x_882_, v_a_878_);
v___x_884_ = l_Lean_Meta_mkAppM(v___x_879_, v___x_883_, v_a_624_, v_a_625_, v_a_626_, v_a_627_);
if (lean_obj_tag(v___x_884_) == 0)
{
lean_object* v_a_885_; 
v_a_885_ = lean_ctor_get(v___x_884_, 0);
lean_inc(v_a_885_);
lean_dec_ref_known(v___x_884_, 1);
lean_inc(v___x_870_);
v___y_812_ = v___x_870_;
v_numeral_813_ = v_a_885_;
v___y_814_ = v_a_624_;
v___y_815_ = v_a_625_;
v___y_816_ = v_a_626_;
v___y_817_ = v_a_627_;
goto v___jp_811_;
}
else
{
lean_object* v_a_886_; lean_object* v___x_888_; uint8_t v_isShared_889_; uint8_t v_isSharedCheck_893_; 
v_a_886_ = lean_ctor_get(v___x_884_, 0);
v_isSharedCheck_893_ = !lean_is_exclusive(v___x_884_);
if (v_isSharedCheck_893_ == 0)
{
v___x_888_ = v___x_884_;
v_isShared_889_ = v_isSharedCheck_893_;
goto v_resetjp_887_;
}
else
{
lean_inc(v_a_886_);
lean_dec(v___x_884_);
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
else
{
lean_object* v_a_894_; lean_object* v___x_896_; uint8_t v_isShared_897_; uint8_t v_isSharedCheck_901_; 
lean_dec(v_a_875_);
v_a_894_ = lean_ctor_get(v___x_877_, 0);
v_isSharedCheck_901_ = !lean_is_exclusive(v___x_877_);
if (v_isSharedCheck_901_ == 0)
{
v___x_896_ = v___x_877_;
v_isShared_897_ = v_isSharedCheck_901_;
goto v_resetjp_895_;
}
else
{
lean_inc(v_a_894_);
lean_dec(v___x_877_);
v___x_896_ = lean_box(0);
v_isShared_897_ = v_isSharedCheck_901_;
goto v_resetjp_895_;
}
v_resetjp_895_:
{
lean_object* v___x_899_; 
if (v_isShared_897_ == 0)
{
v___x_899_ = v___x_896_;
goto v_reusejp_898_;
}
else
{
lean_object* v_reuseFailAlloc_900_; 
v_reuseFailAlloc_900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_900_, 0, v_a_894_);
v___x_899_ = v_reuseFailAlloc_900_;
goto v_reusejp_898_;
}
v_reusejp_898_:
{
return v___x_899_;
}
}
}
}
else
{
lean_object* v_a_902_; lean_object* v___x_904_; uint8_t v_isShared_905_; uint8_t v_isSharedCheck_909_; 
lean_dec(v_a_872_);
lean_dec(v_snd_852_);
v_a_902_ = lean_ctor_get(v___x_874_, 0);
v_isSharedCheck_909_ = !lean_is_exclusive(v___x_874_);
if (v_isSharedCheck_909_ == 0)
{
v___x_904_ = v___x_874_;
v_isShared_905_ = v_isSharedCheck_909_;
goto v_resetjp_903_;
}
else
{
lean_inc(v_a_902_);
lean_dec(v___x_874_);
v___x_904_ = lean_box(0);
v_isShared_905_ = v_isSharedCheck_909_;
goto v_resetjp_903_;
}
v_resetjp_903_:
{
lean_object* v___x_907_; 
if (v_isShared_905_ == 0)
{
v___x_907_ = v___x_904_;
goto v_reusejp_906_;
}
else
{
lean_object* v_reuseFailAlloc_908_; 
v_reuseFailAlloc_908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_908_, 0, v_a_902_);
v___x_907_ = v_reuseFailAlloc_908_;
goto v_reusejp_906_;
}
v_reusejp_906_:
{
return v___x_907_;
}
}
}
}
else
{
lean_object* v___x_910_; 
lean_dec(v_snd_852_);
v___x_910_ = lp_vampireReplay_Vampire_Reconstruct_wholeNumeral___redArg(v_a_872_, v_fst_851_, v_a_624_, v_a_625_, v_a_626_, v_a_627_);
lean_dec(v_fst_851_);
if (lean_obj_tag(v___x_910_) == 0)
{
lean_object* v_a_911_; 
v_a_911_ = lean_ctor_get(v___x_910_, 0);
lean_inc(v_a_911_);
lean_dec_ref_known(v___x_910_, 1);
lean_inc(v___x_870_);
v___y_812_ = v___x_870_;
v_numeral_813_ = v_a_911_;
v___y_814_ = v_a_624_;
v___y_815_ = v_a_625_;
v___y_816_ = v_a_626_;
v___y_817_ = v_a_627_;
goto v___jp_811_;
}
else
{
lean_object* v_a_912_; lean_object* v___x_914_; uint8_t v_isShared_915_; uint8_t v_isSharedCheck_919_; 
v_a_912_ = lean_ctor_get(v___x_910_, 0);
v_isSharedCheck_919_ = !lean_is_exclusive(v___x_910_);
if (v_isSharedCheck_919_ == 0)
{
v___x_914_ = v___x_910_;
v_isShared_915_ = v_isSharedCheck_919_;
goto v_resetjp_913_;
}
else
{
lean_inc(v_a_912_);
lean_dec(v___x_910_);
v___x_914_ = lean_box(0);
v_isShared_915_ = v_isSharedCheck_919_;
goto v_resetjp_913_;
}
v_resetjp_913_:
{
lean_object* v___x_917_; 
if (v_isShared_915_ == 0)
{
v___x_917_ = v___x_914_;
goto v_reusejp_916_;
}
else
{
lean_object* v_reuseFailAlloc_918_; 
v_reuseFailAlloc_918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_918_, 0, v_a_912_);
v___x_917_ = v_reuseFailAlloc_918_;
goto v_reusejp_916_;
}
v_reusejp_916_:
{
return v___x_917_;
}
}
}
}
}
else
{
lean_object* v_a_920_; lean_object* v___x_922_; uint8_t v_isShared_923_; uint8_t v_isSharedCheck_927_; 
lean_dec(v_snd_852_);
lean_dec(v_fst_851_);
v_a_920_ = lean_ctor_get(v___x_871_, 0);
v_isSharedCheck_927_ = !lean_is_exclusive(v___x_871_);
if (v_isSharedCheck_927_ == 0)
{
v___x_922_ = v___x_871_;
v_isShared_923_ = v_isSharedCheck_927_;
goto v_resetjp_921_;
}
else
{
lean_inc(v_a_920_);
lean_dec(v___x_871_);
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
else
{
lean_object* v___x_929_; lean_object* v___x_930_; 
lean_dec(v___x_844_);
v___x_929_ = lean_box(0);
v___x_930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_930_, 0, v___x_929_);
return v___x_930_;
}
}
v___jp_931_:
{
lean_object* v___x_932_; 
v___x_932_ = lean_box(0);
v_fst_842_ = v_name_620_;
v_snd_843_ = v___x_932_;
goto v___jp_841_;
}
v___jp_933_:
{
lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; uint8_t v___x_937_; 
v___x_934_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__8));
v___x_935_ = lean_string_utf8_byte_size(v_name_620_);
v___x_936_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__9, &lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__9_once, _init_lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__9);
v___x_937_ = lean_nat_dec_le(v___x_936_, v___x_935_);
if (v___x_937_ == 0)
{
goto v___jp_931_;
}
else
{
lean_object* v___x_938_; uint8_t v___x_939_; 
v___x_938_ = lean_unsigned_to_nat(0u);
v___x_939_ = lean_string_memcmp(v_name_620_, v___x_934_, v___x_938_, v___x_938_, v___x_936_);
if (v___x_939_ == 0)
{
goto v___jp_931_;
}
else
{
lean_object* v___x_940_; lean_object* v___x_941_; 
v___x_940_ = lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_inside(v_name_620_);
v___x_941_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__10));
v_fst_842_ = v___x_940_;
v_snd_843_ = v___x_941_;
goto v___jp_841_;
}
}
}
v___jp_942_:
{
lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; uint8_t v___x_946_; 
v___x_943_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__11));
v___x_944_ = lean_string_utf8_byte_size(v_name_620_);
v___x_945_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__12, &lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__12_once, _init_lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__12);
v___x_946_ = lean_nat_dec_le(v___x_945_, v___x_944_);
if (v___x_946_ == 0)
{
goto v___jp_933_;
}
else
{
lean_object* v___x_947_; uint8_t v___x_948_; 
v___x_947_ = lean_unsigned_to_nat(0u);
v___x_948_ = lean_string_memcmp(v_name_620_, v___x_943_, v___x_947_, v___x_947_, v___x_945_);
if (v___x_948_ == 0)
{
goto v___jp_933_;
}
else
{
lean_object* v___x_949_; lean_object* v___x_950_; 
v___x_949_ = lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_inside(v_name_620_);
v___x_950_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_interpreted___closed__13));
v_fst_842_ = v___x_949_;
v_snd_843_ = v___x_950_;
goto v___jp_841_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted___boxed(lean_object* v_name_1135_, lean_object* v_args_1136_, lean_object* v_a_1137_, lean_object* v_a_1138_, lean_object* v_a_1139_, lean_object* v_a_1140_, lean_object* v_a_1141_, lean_object* v_a_1142_, lean_object* v_a_1143_){
_start:
{
lean_object* v_res_1144_; 
v_res_1144_ = lp_vampireReplay_Vampire_Reconstruct_interpreted(v_name_1135_, v_args_1136_, v_a_1137_, v_a_1138_, v_a_1139_, v_a_1140_, v_a_1141_, v_a_1142_);
lean_dec(v_a_1142_);
lean_dec_ref(v_a_1141_);
lean_dec(v_a_1140_);
lean_dec_ref(v_a_1139_);
lean_dec(v_a_1138_);
lean_dec_ref(v_a_1137_);
lean_dec_ref(v_args_1136_);
return v_res_1144_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_interpreted_spec__0(lean_object* v_fn_1145_, lean_object* v_as_1146_, size_t v_sz_1147_, size_t v_i_1148_, lean_object* v_b_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_){
_start:
{
lean_object* v___x_1157_; 
v___x_1157_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_interpreted_spec__0___redArg(v_fn_1145_, v_as_1146_, v_sz_1147_, v_i_1148_, v_b_1149_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_);
return v___x_1157_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_interpreted_spec__0___boxed(lean_object* v_fn_1158_, lean_object* v_as_1159_, lean_object* v_sz_1160_, lean_object* v_i_1161_, lean_object* v_b_1162_, lean_object* v___y_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_){
_start:
{
size_t v_sz_boxed_1170_; size_t v_i_boxed_1171_; lean_object* v_res_1172_; 
v_sz_boxed_1170_ = lean_unbox_usize(v_sz_1160_);
lean_dec(v_sz_1160_);
v_i_boxed_1171_ = lean_unbox_usize(v_i_1161_);
lean_dec(v_i_1161_);
v_res_1172_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_interpreted_spec__0(v_fn_1158_, v_as_1159_, v_sz_boxed_1170_, v_i_boxed_1171_, v_b_1162_, v___y_1163_, v___y_1164_, v___y_1165_, v___y_1166_, v___y_1167_, v___y_1168_);
lean_dec(v___y_1168_);
lean_dec_ref(v___y_1167_);
lean_dec(v___y_1166_);
lean_dec_ref(v___y_1165_);
lean_dec(v___y_1164_);
lean_dec_ref(v___y_1163_);
lean_dec_ref(v_as_1159_);
return v_res_1172_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1_spec__1___redArg(uint32_t v_a_1173_, lean_object* v_x_1174_){
_start:
{
if (lean_obj_tag(v_x_1174_) == 0)
{
lean_object* v___x_1175_; 
v___x_1175_ = lean_box(0);
return v___x_1175_;
}
else
{
lean_object* v_key_1176_; lean_object* v_value_1177_; lean_object* v_tail_1178_; uint32_t v___x_1179_; uint8_t v___x_1180_; 
v_key_1176_ = lean_ctor_get(v_x_1174_, 0);
v_value_1177_ = lean_ctor_get(v_x_1174_, 1);
v_tail_1178_ = lean_ctor_get(v_x_1174_, 2);
v___x_1179_ = lean_unbox_uint32(v_key_1176_);
v___x_1180_ = lean_uint32_dec_eq(v___x_1179_, v_a_1173_);
if (v___x_1180_ == 0)
{
v_x_1174_ = v_tail_1178_;
goto _start;
}
else
{
lean_object* v___x_1182_; 
lean_inc(v_value_1177_);
v___x_1182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1182_, 0, v_value_1177_);
return v___x_1182_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1_spec__1___redArg___boxed(lean_object* v_a_1183_, lean_object* v_x_1184_){
_start:
{
uint32_t v_a_boxed_1185_; lean_object* v_res_1186_; 
v_a_boxed_1185_ = lean_unbox_uint32(v_a_1183_);
lean_dec(v_a_1183_);
v_res_1186_ = lp_vampireReplay_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1_spec__1___redArg(v_a_boxed_1185_, v_x_1184_);
lean_dec(v_x_1184_);
return v_res_1186_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1___redArg(lean_object* v_m_1187_, uint32_t v_a_1188_){
_start:
{
lean_object* v_buckets_1189_; lean_object* v___x_1190_; uint64_t v___x_1191_; uint64_t v___x_1192_; uint64_t v___x_1193_; uint64_t v_fold_1194_; uint64_t v___x_1195_; uint64_t v___x_1196_; uint64_t v___x_1197_; size_t v___x_1198_; size_t v___x_1199_; size_t v___x_1200_; size_t v___x_1201_; size_t v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; 
v_buckets_1189_ = lean_ctor_get(v_m_1187_, 1);
v___x_1190_ = lean_array_get_size(v_buckets_1189_);
v___x_1191_ = lean_uint32_to_uint64(v_a_1188_);
v___x_1192_ = 32ULL;
v___x_1193_ = lean_uint64_shift_right(v___x_1191_, v___x_1192_);
v_fold_1194_ = lean_uint64_xor(v___x_1191_, v___x_1193_);
v___x_1195_ = 16ULL;
v___x_1196_ = lean_uint64_shift_right(v_fold_1194_, v___x_1195_);
v___x_1197_ = lean_uint64_xor(v_fold_1194_, v___x_1196_);
v___x_1198_ = lean_uint64_to_usize(v___x_1197_);
v___x_1199_ = lean_usize_of_nat(v___x_1190_);
v___x_1200_ = ((size_t)1ULL);
v___x_1201_ = lean_usize_sub(v___x_1199_, v___x_1200_);
v___x_1202_ = lean_usize_land(v___x_1198_, v___x_1201_);
v___x_1203_ = lean_array_uget_borrowed(v_buckets_1189_, v___x_1202_);
v___x_1204_ = lp_vampireReplay_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1_spec__1___redArg(v_a_1188_, v___x_1203_);
return v___x_1204_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1___redArg___boxed(lean_object* v_m_1205_, lean_object* v_a_1206_){
_start:
{
uint32_t v_a_boxed_1207_; lean_object* v_res_1208_; 
v_a_boxed_1207_ = lean_unbox_uint32(v_a_1206_);
lean_dec(v_a_1206_);
v_res_1208_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1___redArg(v_m_1205_, v_a_boxed_1207_);
lean_dec_ref(v_m_1205_);
return v_res_1208_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_term___closed__1(void){
_start:
{
lean_object* v___x_1210_; lean_object* v___x_1211_; 
v___x_1210_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_term___closed__0));
v___x_1211_ = l_Lean_stringToMessageData(v___x_1210_);
return v___x_1211_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_term___closed__3(void){
_start:
{
lean_object* v___x_1213_; lean_object* v___x_1214_; 
v___x_1213_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_term___closed__2));
v___x_1214_ = l_Lean_stringToMessageData(v___x_1213_);
return v___x_1214_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_term___closed__5(void){
_start:
{
lean_object* v___x_1216_; lean_object* v___x_1217_; 
v___x_1216_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_term___closed__4));
v___x_1217_ = l_Lean_stringToMessageData(v___x_1216_);
return v___x_1217_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_term(lean_object* v_vars_1218_, lean_object* v_t_1219_, lean_object* v_a_1220_, lean_object* v_a_1221_, lean_object* v_a_1222_, lean_object* v_a_1223_, lean_object* v_a_1224_, lean_object* v_a_1225_){
_start:
{
lean_object* v___y_1228_; lean_object* v___y_1229_; lean_object* v___y_1230_; lean_object* v___y_1231_; lean_object* v___y_1232_; lean_object* v___y_1233_; uint8_t v___x_1274_; 
v___x_1274_ = lp_vampireReplay_Vampire_Term_isVar(v_t_1219_);
if (v___x_1274_ == 0)
{
v___y_1228_ = v_a_1220_;
v___y_1229_ = v_a_1221_;
v___y_1230_ = v_a_1222_;
v___y_1231_ = v_a_1223_;
v___y_1232_ = v_a_1224_;
v___y_1233_ = v_a_1225_;
goto v___jp_1227_;
}
else
{
uint32_t v___x_1275_; lean_object* v___x_1276_; 
v___x_1275_ = lp_vampireReplay_Vampire_Term_var(v_t_1219_);
v___x_1276_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1___redArg(v_vars_1218_, v___x_1275_);
if (lean_obj_tag(v___x_1276_) == 1)
{
lean_object* v_val_1277_; lean_object* v___x_1279_; uint8_t v_isShared_1280_; uint8_t v_isSharedCheck_1284_; 
lean_dec_ref(v_t_1219_);
v_val_1277_ = lean_ctor_get(v___x_1276_, 0);
v_isSharedCheck_1284_ = !lean_is_exclusive(v___x_1276_);
if (v_isSharedCheck_1284_ == 0)
{
v___x_1279_ = v___x_1276_;
v_isShared_1280_ = v_isSharedCheck_1284_;
goto v_resetjp_1278_;
}
else
{
lean_inc(v_val_1277_);
lean_dec(v___x_1276_);
v___x_1279_ = lean_box(0);
v_isShared_1280_ = v_isSharedCheck_1284_;
goto v_resetjp_1278_;
}
v_resetjp_1278_:
{
lean_object* v___x_1282_; 
if (v_isShared_1280_ == 0)
{
lean_ctor_set_tag(v___x_1279_, 0);
v___x_1282_ = v___x_1279_;
goto v_reusejp_1281_;
}
else
{
lean_object* v_reuseFailAlloc_1283_; 
v_reuseFailAlloc_1283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1283_, 0, v_val_1277_);
v___x_1282_ = v_reuseFailAlloc_1283_;
goto v_reusejp_1281_;
}
v_reusejp_1281_:
{
return v___x_1282_;
}
}
}
else
{
lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; 
lean_dec(v___x_1276_);
v___x_1285_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_term___closed__3, &lp_vampireReplay_Vampire_Reconstruct_term___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_term___closed__3);
v___x_1286_ = lean_uint32_to_nat(v___x_1275_);
v___x_1287_ = l_Nat_reprFast(v___x_1286_);
v___x_1288_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1288_, 0, v___x_1287_);
v___x_1289_ = l_Lean_MessageData_ofFormat(v___x_1288_);
v___x_1290_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1290_, 0, v___x_1285_);
lean_ctor_set(v___x_1290_, 1, v___x_1289_);
v___x_1291_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_term___closed__5, &lp_vampireReplay_Vampire_Reconstruct_term___closed__5_once, _init_lp_vampireReplay_Vampire_Reconstruct_term___closed__5);
v___x_1292_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1292_, 0, v___x_1290_);
lean_ctor_set(v___x_1292_, 1, v___x_1291_);
v___x_1293_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1292_, v_a_1222_, v_a_1223_, v_a_1224_, v_a_1225_);
if (lean_obj_tag(v___x_1293_) == 0)
{
lean_dec_ref_known(v___x_1293_, 1);
v___y_1228_ = v_a_1220_;
v___y_1229_ = v_a_1221_;
v___y_1230_ = v_a_1222_;
v___y_1231_ = v_a_1223_;
v___y_1232_ = v_a_1224_;
v___y_1233_ = v_a_1225_;
goto v___jp_1227_;
}
else
{
lean_object* v_a_1294_; lean_object* v___x_1296_; uint8_t v_isShared_1297_; uint8_t v_isSharedCheck_1301_; 
lean_dec_ref(v_t_1219_);
v_a_1294_ = lean_ctor_get(v___x_1293_, 0);
v_isSharedCheck_1301_ = !lean_is_exclusive(v___x_1293_);
if (v_isSharedCheck_1301_ == 0)
{
v___x_1296_ = v___x_1293_;
v_isShared_1297_ = v_isSharedCheck_1301_;
goto v_resetjp_1295_;
}
else
{
lean_inc(v_a_1294_);
lean_dec(v___x_1293_);
v___x_1296_ = lean_box(0);
v_isShared_1297_ = v_isSharedCheck_1301_;
goto v_resetjp_1295_;
}
v_resetjp_1295_:
{
lean_object* v___x_1299_; 
if (v_isShared_1297_ == 0)
{
v___x_1299_ = v___x_1296_;
goto v_reusejp_1298_;
}
else
{
lean_object* v_reuseFailAlloc_1300_; 
v_reuseFailAlloc_1300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1300_, 0, v_a_1294_);
v___x_1299_ = v_reuseFailAlloc_1300_;
goto v_reusejp_1298_;
}
v_reusejp_1298_:
{
return v___x_1299_;
}
}
}
}
}
v___jp_1227_:
{
lean_object* v___x_1234_; 
v___x_1234_ = lp_vampireReplay_Vampire_Term_symbol_x3f(v_t_1219_);
if (lean_obj_tag(v___x_1234_) == 1)
{
lean_object* v_val_1235_; lean_object* v___x_1236_; size_t v_sz_1237_; size_t v___x_1238_; lean_object* v___x_1239_; 
v_val_1235_ = lean_ctor_get(v___x_1234_, 0);
lean_inc(v_val_1235_);
lean_dec_ref_known(v___x_1234_, 1);
v___x_1236_ = lp_vampireReplay_Vampire_Term_args(v_t_1219_);
v_sz_1237_ = lean_array_size(v___x_1236_);
v___x_1238_ = ((size_t)0ULL);
v___x_1239_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_term_spec__0(v_vars_1218_, v_sz_1237_, v___x_1238_, v___x_1236_, v___y_1228_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_);
if (lean_obj_tag(v___x_1239_) == 0)
{
lean_object* v_a_1240_; lean_object* v_name_1241_; lean_object* v___x_1242_; 
v_a_1240_ = lean_ctor_get(v___x_1239_, 0);
lean_inc(v_a_1240_);
lean_dec_ref_known(v___x_1239_, 1);
v_name_1241_ = lean_ctor_get(v_val_1235_, 0);
lean_inc_ref_n(v_name_1241_, 2);
lean_dec(v_val_1235_);
v___x_1242_ = lp_vampireReplay_Vampire_Reconstruct_interpreted(v_name_1241_, v_a_1240_, v___y_1228_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_);
if (lean_obj_tag(v___x_1242_) == 0)
{
lean_object* v_a_1243_; 
v_a_1243_ = lean_ctor_get(v___x_1242_, 0);
lean_inc(v_a_1243_);
lean_dec_ref_known(v___x_1242_, 1);
if (lean_obj_tag(v_a_1243_) == 1)
{
lean_object* v_val_1244_; lean_object* v___x_1245_; 
lean_dec_ref(v_name_1241_);
lean_dec(v_a_1240_);
v_val_1244_ = lean_ctor_get(v_a_1243_, 0);
lean_inc(v_val_1244_);
lean_dec_ref_known(v_a_1243_, 1);
v___x_1245_ = lp_vampireReplay_Vampire_Reconstruct_shared___redArg(v_val_1244_, v___y_1229_);
return v___x_1245_;
}
else
{
lean_object* v___x_1246_; 
lean_dec(v_a_1243_);
v___x_1246_ = lp_vampireReplay_Vampire_Reconstruct_symbolExpr(v_name_1241_, v___y_1228_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_);
if (lean_obj_tag(v___x_1246_) == 0)
{
lean_object* v_a_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; 
v_a_1247_ = lean_ctor_get(v___x_1246_, 0);
lean_inc(v_a_1247_);
lean_dec_ref_known(v___x_1246_, 1);
v___x_1248_ = l_Lean_mkAppN(v_a_1247_, v_a_1240_);
lean_dec(v_a_1240_);
v___x_1249_ = lp_vampireReplay_Vampire_Reconstruct_shared___redArg(v___x_1248_, v___y_1229_);
return v___x_1249_;
}
else
{
lean_dec(v_a_1240_);
return v___x_1246_;
}
}
}
else
{
lean_object* v_a_1250_; lean_object* v___x_1252_; uint8_t v_isShared_1253_; uint8_t v_isSharedCheck_1257_; 
lean_dec_ref(v_name_1241_);
lean_dec(v_a_1240_);
v_a_1250_ = lean_ctor_get(v___x_1242_, 0);
v_isSharedCheck_1257_ = !lean_is_exclusive(v___x_1242_);
if (v_isSharedCheck_1257_ == 0)
{
v___x_1252_ = v___x_1242_;
v_isShared_1253_ = v_isSharedCheck_1257_;
goto v_resetjp_1251_;
}
else
{
lean_inc(v_a_1250_);
lean_dec(v___x_1242_);
v___x_1252_ = lean_box(0);
v_isShared_1253_ = v_isSharedCheck_1257_;
goto v_resetjp_1251_;
}
v_resetjp_1251_:
{
lean_object* v___x_1255_; 
if (v_isShared_1253_ == 0)
{
v___x_1255_ = v___x_1252_;
goto v_reusejp_1254_;
}
else
{
lean_object* v_reuseFailAlloc_1256_; 
v_reuseFailAlloc_1256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1256_, 0, v_a_1250_);
v___x_1255_ = v_reuseFailAlloc_1256_;
goto v_reusejp_1254_;
}
v_reusejp_1254_:
{
return v___x_1255_;
}
}
}
}
else
{
lean_object* v_a_1258_; lean_object* v___x_1260_; uint8_t v_isShared_1261_; uint8_t v_isSharedCheck_1265_; 
lean_dec(v_val_1235_);
v_a_1258_ = lean_ctor_get(v___x_1239_, 0);
v_isSharedCheck_1265_ = !lean_is_exclusive(v___x_1239_);
if (v_isSharedCheck_1265_ == 0)
{
v___x_1260_ = v___x_1239_;
v_isShared_1261_ = v_isSharedCheck_1265_;
goto v_resetjp_1259_;
}
else
{
lean_inc(v_a_1258_);
lean_dec(v___x_1239_);
v___x_1260_ = lean_box(0);
v_isShared_1261_ = v_isSharedCheck_1265_;
goto v_resetjp_1259_;
}
v_resetjp_1259_:
{
lean_object* v___x_1263_; 
if (v_isShared_1261_ == 0)
{
v___x_1263_ = v___x_1260_;
goto v_reusejp_1262_;
}
else
{
lean_object* v_reuseFailAlloc_1264_; 
v_reuseFailAlloc_1264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1264_, 0, v_a_1258_);
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
else
{
lean_object* v___x_1266_; uint32_t v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; 
lean_dec(v___x_1234_);
v___x_1266_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_term___closed__1, &lp_vampireReplay_Vampire_Reconstruct_term___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_term___closed__1);
v___x_1267_ = lp_vampireReplay_Vampire_Term_functor(v_t_1219_);
lean_dec_ref(v_t_1219_);
v___x_1268_ = lean_uint32_to_nat(v___x_1267_);
v___x_1269_ = l_Nat_reprFast(v___x_1268_);
v___x_1270_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1270_, 0, v___x_1269_);
v___x_1271_ = l_Lean_MessageData_ofFormat(v___x_1270_);
v___x_1272_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1272_, 0, v___x_1266_);
lean_ctor_set(v___x_1272_, 1, v___x_1271_);
v___x_1273_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1272_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_);
return v___x_1273_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_term_spec__0(lean_object* v_vars_1302_, size_t v_sz_1303_, size_t v_i_1304_, lean_object* v_bs_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_){
_start:
{
uint8_t v___x_1313_; 
v___x_1313_ = lean_usize_dec_lt(v_i_1304_, v_sz_1303_);
if (v___x_1313_ == 0)
{
lean_object* v___x_1314_; 
v___x_1314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1314_, 0, v_bs_1305_);
return v___x_1314_;
}
else
{
lean_object* v_v_1315_; lean_object* v___x_1316_; 
v_v_1315_ = lean_array_uget_borrowed(v_bs_1305_, v_i_1304_);
lean_inc(v_v_1315_);
v___x_1316_ = lp_vampireReplay_Vampire_Reconstruct_term(v_vars_1302_, v_v_1315_, v___y_1306_, v___y_1307_, v___y_1308_, v___y_1309_, v___y_1310_, v___y_1311_);
if (lean_obj_tag(v___x_1316_) == 0)
{
lean_object* v_a_1317_; lean_object* v___x_1318_; lean_object* v_bs_x27_1319_; size_t v___x_1320_; size_t v___x_1321_; lean_object* v___x_1322_; 
v_a_1317_ = lean_ctor_get(v___x_1316_, 0);
lean_inc(v_a_1317_);
lean_dec_ref_known(v___x_1316_, 1);
v___x_1318_ = lean_unsigned_to_nat(0u);
v_bs_x27_1319_ = lean_array_uset(v_bs_1305_, v_i_1304_, v___x_1318_);
v___x_1320_ = ((size_t)1ULL);
v___x_1321_ = lean_usize_add(v_i_1304_, v___x_1320_);
v___x_1322_ = lean_array_uset(v_bs_x27_1319_, v_i_1304_, v_a_1317_);
v_i_1304_ = v___x_1321_;
v_bs_1305_ = v___x_1322_;
goto _start;
}
else
{
lean_object* v_a_1324_; lean_object* v___x_1326_; uint8_t v_isShared_1327_; uint8_t v_isSharedCheck_1331_; 
lean_dec_ref(v_bs_1305_);
v_a_1324_ = lean_ctor_get(v___x_1316_, 0);
v_isSharedCheck_1331_ = !lean_is_exclusive(v___x_1316_);
if (v_isSharedCheck_1331_ == 0)
{
v___x_1326_ = v___x_1316_;
v_isShared_1327_ = v_isSharedCheck_1331_;
goto v_resetjp_1325_;
}
else
{
lean_inc(v_a_1324_);
lean_dec(v___x_1316_);
v___x_1326_ = lean_box(0);
v_isShared_1327_ = v_isSharedCheck_1331_;
goto v_resetjp_1325_;
}
v_resetjp_1325_:
{
lean_object* v___x_1329_; 
if (v_isShared_1327_ == 0)
{
v___x_1329_ = v___x_1326_;
goto v_reusejp_1328_;
}
else
{
lean_object* v_reuseFailAlloc_1330_; 
v_reuseFailAlloc_1330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1330_, 0, v_a_1324_);
v___x_1329_ = v_reuseFailAlloc_1330_;
goto v_reusejp_1328_;
}
v_reusejp_1328_:
{
return v___x_1329_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_term_spec__0___boxed(lean_object* v_vars_1332_, lean_object* v_sz_1333_, lean_object* v_i_1334_, lean_object* v_bs_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_){
_start:
{
size_t v_sz_boxed_1343_; size_t v_i_boxed_1344_; lean_object* v_res_1345_; 
v_sz_boxed_1343_ = lean_unbox_usize(v_sz_1333_);
lean_dec(v_sz_1333_);
v_i_boxed_1344_ = lean_unbox_usize(v_i_1334_);
lean_dec(v_i_1334_);
v_res_1345_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_term_spec__0(v_vars_1332_, v_sz_boxed_1343_, v_i_boxed_1344_, v_bs_1335_, v___y_1336_, v___y_1337_, v___y_1338_, v___y_1339_, v___y_1340_, v___y_1341_);
lean_dec(v___y_1341_);
lean_dec_ref(v___y_1340_);
lean_dec(v___y_1339_);
lean_dec_ref(v___y_1338_);
lean_dec(v___y_1337_);
lean_dec_ref(v___y_1336_);
lean_dec_ref(v_vars_1332_);
return v_res_1345_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_term___boxed(lean_object* v_vars_1346_, lean_object* v_t_1347_, lean_object* v_a_1348_, lean_object* v_a_1349_, lean_object* v_a_1350_, lean_object* v_a_1351_, lean_object* v_a_1352_, lean_object* v_a_1353_, lean_object* v_a_1354_){
_start:
{
lean_object* v_res_1355_; 
v_res_1355_ = lp_vampireReplay_Vampire_Reconstruct_term(v_vars_1346_, v_t_1347_, v_a_1348_, v_a_1349_, v_a_1350_, v_a_1351_, v_a_1352_, v_a_1353_);
lean_dec(v_a_1353_);
lean_dec_ref(v_a_1352_);
lean_dec(v_a_1351_);
lean_dec_ref(v_a_1350_);
lean_dec(v_a_1349_);
lean_dec_ref(v_a_1348_);
lean_dec_ref(v_vars_1346_);
return v_res_1355_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1(lean_object* v_00_u03b2_1356_, lean_object* v_m_1357_, uint32_t v_a_1358_){
_start:
{
lean_object* v___x_1359_; 
v___x_1359_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1___redArg(v_m_1357_, v_a_1358_);
return v___x_1359_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1___boxed(lean_object* v_00_u03b2_1360_, lean_object* v_m_1361_, lean_object* v_a_1362_){
_start:
{
uint32_t v_a_boxed_1363_; lean_object* v_res_1364_; 
v_a_boxed_1363_ = lean_unbox_uint32(v_a_1362_);
lean_dec(v_a_1362_);
v_res_1364_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1(v_00_u03b2_1360_, v_m_1361_, v_a_boxed_1363_);
lean_dec_ref(v_m_1361_);
return v_res_1364_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1_spec__1(lean_object* v_00_u03b2_1365_, uint32_t v_a_1366_, lean_object* v_x_1367_){
_start:
{
lean_object* v___x_1368_; 
v___x_1368_ = lp_vampireReplay_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1_spec__1___redArg(v_a_1366_, v_x_1367_);
return v___x_1368_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1_spec__1___boxed(lean_object* v_00_u03b2_1369_, lean_object* v_a_1370_, lean_object* v_x_1371_){
_start:
{
uint32_t v_a_boxed_1372_; lean_object* v_res_1373_; 
v_a_boxed_1372_ = lean_unbox_uint32(v_a_1370_);
lean_dec(v_a_1370_);
v_res_1373_ = lp_vampireReplay_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1_spec__1(v_00_u03b2_1369_, v_a_boxed_1372_, v_x_1371_);
lean_dec(v_x_1371_);
return v_res_1373_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_literalPolarity___redArg(lean_object* v_l_1374_, lean_object* v_a_1375_){
_start:
{
uint8_t v_flipping_1381_; 
v_flipping_1381_ = lean_ctor_get_uint8(v_a_1375_, sizeof(void*)*5 + 4);
if (v_flipping_1381_ == 0)
{
goto v___jp_1377_;
}
else
{
lean_object* v___x_1382_; 
v___x_1382_ = lp_vampireReplay_Vampire_Literal_symbol_x3f(v_l_1374_);
if (lean_obj_tag(v___x_1382_) == 1)
{
lean_object* v_val_1383_; lean_object* v___x_1385_; uint8_t v_isShared_1386_; uint8_t v_isSharedCheck_1398_; 
v_val_1383_ = lean_ctor_get(v___x_1382_, 0);
v_isSharedCheck_1398_ = !lean_is_exclusive(v___x_1382_);
if (v_isSharedCheck_1398_ == 0)
{
v___x_1385_ = v___x_1382_;
v_isShared_1386_ = v_isSharedCheck_1398_;
goto v_resetjp_1384_;
}
else
{
lean_inc(v_val_1383_);
lean_dec(v___x_1382_);
v___x_1385_ = lean_box(0);
v_isShared_1386_ = v_isSharedCheck_1398_;
goto v_resetjp_1384_;
}
v_resetjp_1384_:
{
uint8_t v_flipped_1387_; 
v_flipped_1387_ = lean_ctor_get_uint8(v_val_1383_, sizeof(void*)*1 + 4);
lean_dec(v_val_1383_);
if (v_flipped_1387_ == 0)
{
lean_del_object(v___x_1385_);
goto v___jp_1377_;
}
else
{
uint8_t v___x_1388_; 
v___x_1388_ = lp_vampireReplay_Vampire_Literal_polarity(v_l_1374_);
if (v___x_1388_ == 0)
{
lean_object* v___x_1389_; lean_object* v___x_1391_; 
v___x_1389_ = lean_box(v_flipped_1387_);
if (v_isShared_1386_ == 0)
{
lean_ctor_set_tag(v___x_1385_, 0);
lean_ctor_set(v___x_1385_, 0, v___x_1389_);
v___x_1391_ = v___x_1385_;
goto v_reusejp_1390_;
}
else
{
lean_object* v_reuseFailAlloc_1392_; 
v_reuseFailAlloc_1392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1392_, 0, v___x_1389_);
v___x_1391_ = v_reuseFailAlloc_1392_;
goto v_reusejp_1390_;
}
v_reusejp_1390_:
{
return v___x_1391_;
}
}
else
{
uint8_t v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1396_; 
v___x_1393_ = 0;
v___x_1394_ = lean_box(v___x_1393_);
if (v_isShared_1386_ == 0)
{
lean_ctor_set_tag(v___x_1385_, 0);
lean_ctor_set(v___x_1385_, 0, v___x_1394_);
v___x_1396_ = v___x_1385_;
goto v_reusejp_1395_;
}
else
{
lean_object* v_reuseFailAlloc_1397_; 
v_reuseFailAlloc_1397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1397_, 0, v___x_1394_);
v___x_1396_ = v_reuseFailAlloc_1397_;
goto v_reusejp_1395_;
}
v_reusejp_1395_:
{
return v___x_1396_;
}
}
}
}
}
else
{
lean_dec(v___x_1382_);
goto v___jp_1377_;
}
}
v___jp_1377_:
{
uint8_t v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; 
v___x_1378_ = lp_vampireReplay_Vampire_Literal_polarity(v_l_1374_);
v___x_1379_ = lean_box(v___x_1378_);
v___x_1380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1380_, 0, v___x_1379_);
return v___x_1380_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_literalPolarity___redArg___boxed(lean_object* v_l_1399_, lean_object* v_a_1400_, lean_object* v_a_1401_){
_start:
{
lean_object* v_res_1402_; 
v_res_1402_ = lp_vampireReplay_Vampire_Reconstruct_literalPolarity___redArg(v_l_1399_, v_a_1400_);
lean_dec_ref(v_a_1400_);
lean_dec_ref(v_l_1399_);
return v_res_1402_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_literalPolarity(lean_object* v_l_1403_, lean_object* v_a_1404_, lean_object* v_a_1405_, lean_object* v_a_1406_, lean_object* v_a_1407_, lean_object* v_a_1408_, lean_object* v_a_1409_){
_start:
{
lean_object* v___x_1411_; 
v___x_1411_ = lp_vampireReplay_Vampire_Reconstruct_literalPolarity___redArg(v_l_1403_, v_a_1404_);
return v___x_1411_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_literalPolarity___boxed(lean_object* v_l_1412_, lean_object* v_a_1413_, lean_object* v_a_1414_, lean_object* v_a_1415_, lean_object* v_a_1416_, lean_object* v_a_1417_, lean_object* v_a_1418_, lean_object* v_a_1419_){
_start:
{
lean_object* v_res_1420_; 
v_res_1420_ = lp_vampireReplay_Vampire_Reconstruct_literalPolarity(v_l_1412_, v_a_1413_, v_a_1414_, v_a_1415_, v_a_1416_, v_a_1417_, v_a_1418_);
lean_dec(v_a_1418_);
lean_dec_ref(v_a_1417_);
lean_dec(v_a_1416_);
lean_dec_ref(v_a_1415_);
lean_dec(v_a_1414_);
lean_dec_ref(v_a_1413_);
lean_dec_ref(v_l_1412_);
return v_res_1420_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_literal___closed__2(void){
_start:
{
lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; 
v___x_1424_ = lean_box(0);
v___x_1425_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_literal___closed__1));
v___x_1426_ = l_Lean_Expr_const___override(v___x_1425_, v___x_1424_);
return v___x_1426_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_literal___closed__4(void){
_start:
{
lean_object* v___x_1428_; lean_object* v___x_1429_; 
v___x_1428_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_literal___closed__3));
v___x_1429_ = l_Lean_stringToMessageData(v___x_1428_);
return v___x_1429_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_literal___closed__6(void){
_start:
{
lean_object* v___x_1431_; lean_object* v___x_1432_; 
v___x_1431_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_literal___closed__5));
v___x_1432_ = l_Lean_stringToMessageData(v___x_1431_);
return v___x_1432_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_literal___closed__8(void){
_start:
{
lean_object* v___x_1434_; lean_object* v___x_1435_; 
v___x_1434_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_literal___closed__7));
v___x_1435_ = l_Lean_stringToMessageData(v___x_1434_);
return v___x_1435_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_literal___closed__12(void){
_start:
{
lean_object* v___x_1440_; lean_object* v___x_1441_; 
v___x_1440_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_literal___closed__11));
v___x_1441_ = l_Lean_stringToMessageData(v___x_1440_);
return v___x_1441_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_literal(lean_object* v_vars_1442_, lean_object* v_l_1443_, lean_object* v_a_1444_, lean_object* v_a_1445_, lean_object* v_a_1446_, lean_object* v_a_1447_, lean_object* v_a_1448_, lean_object* v_a_1449_){
_start:
{
lean_object* v___x_1451_; size_t v_sz_1452_; size_t v___x_1453_; lean_object* v___x_1454_; 
lean_inc_ref(v_l_1443_);
v___x_1451_ = lp_vampireReplay_Vampire_Literal_args(v_l_1443_);
v_sz_1452_ = lean_array_size(v___x_1451_);
v___x_1453_ = ((size_t)0ULL);
v___x_1454_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_term_spec__0(v_vars_1442_, v_sz_1452_, v___x_1453_, v___x_1451_, v_a_1444_, v_a_1445_, v_a_1446_, v_a_1447_, v_a_1448_, v_a_1449_);
if (lean_obj_tag(v___x_1454_) == 0)
{
lean_object* v_a_1455_; lean_object* v___x_1456_; lean_object* v_a_1457_; lean_object* v___x_1459_; uint8_t v_isShared_1460_; uint8_t v_isSharedCheck_1545_; 
v_a_1455_ = lean_ctor_get(v___x_1454_, 0);
lean_inc(v_a_1455_);
lean_dec_ref_known(v___x_1454_, 1);
v___x_1456_ = lp_vampireReplay_Vampire_Reconstruct_literalPolarity___redArg(v_l_1443_, v_a_1444_);
v_a_1457_ = lean_ctor_get(v___x_1456_, 0);
v_isSharedCheck_1545_ = !lean_is_exclusive(v___x_1456_);
if (v_isSharedCheck_1545_ == 0)
{
v___x_1459_ = v___x_1456_;
v_isShared_1460_ = v_isSharedCheck_1545_;
goto v_resetjp_1458_;
}
else
{
lean_inc(v_a_1457_);
lean_dec(v___x_1456_);
v___x_1459_ = lean_box(0);
v_isShared_1460_ = v_isSharedCheck_1545_;
goto v_resetjp_1458_;
}
v_resetjp_1458_:
{
lean_object* v_atom_1462_; lean_object* v___y_1463_; uint8_t v___x_1469_; 
v___x_1469_ = lp_vampireReplay_Vampire_Literal_isEquality(v_l_1443_);
if (v___x_1469_ == 0)
{
lean_object* v___x_1470_; 
v___x_1470_ = lp_vampireReplay_Vampire_Literal_symbol_x3f(v_l_1443_);
if (lean_obj_tag(v___x_1470_) == 1)
{
lean_object* v_val_1471_; lean_object* v_name_1472_; lean_object* v___x_1473_; 
lean_del_object(v___x_1459_);
lean_dec_ref(v_l_1443_);
v_val_1471_ = lean_ctor_get(v___x_1470_, 0);
lean_inc(v_val_1471_);
lean_dec_ref_known(v___x_1470_, 1);
v_name_1472_ = lean_ctor_get(v_val_1471_, 0);
lean_inc_ref_n(v_name_1472_, 2);
lean_dec(v_val_1471_);
v___x_1473_ = lp_vampireReplay_Vampire_Reconstruct_interpreted(v_name_1472_, v_a_1455_, v_a_1444_, v_a_1445_, v_a_1446_, v_a_1447_, v_a_1448_, v_a_1449_);
if (lean_obj_tag(v___x_1473_) == 0)
{
lean_object* v_a_1474_; 
v_a_1474_ = lean_ctor_get(v___x_1473_, 0);
lean_inc(v_a_1474_);
lean_dec_ref_known(v___x_1473_, 1);
if (lean_obj_tag(v_a_1474_) == 0)
{
lean_object* v___x_1475_; 
v___x_1475_ = lp_vampireReplay_Vampire_Reconstruct_symbolExpr(v_name_1472_, v_a_1444_, v_a_1445_, v_a_1446_, v_a_1447_, v_a_1448_, v_a_1449_);
if (lean_obj_tag(v___x_1475_) == 0)
{
lean_object* v_a_1476_; lean_object* v___x_1477_; 
v_a_1476_ = lean_ctor_get(v___x_1475_, 0);
lean_inc(v_a_1476_);
lean_dec_ref_known(v___x_1475_, 1);
v___x_1477_ = l_Lean_mkAppN(v_a_1476_, v_a_1455_);
lean_dec(v_a_1455_);
v_atom_1462_ = v___x_1477_;
v___y_1463_ = v_a_1445_;
goto v___jp_1461_;
}
else
{
lean_dec(v_a_1457_);
lean_dec(v_a_1455_);
return v___x_1475_;
}
}
else
{
lean_object* v_val_1478_; 
lean_dec_ref(v_name_1472_);
lean_dec(v_a_1455_);
v_val_1478_ = lean_ctor_get(v_a_1474_, 0);
lean_inc(v_val_1478_);
lean_dec_ref_known(v_a_1474_, 1);
v_atom_1462_ = v_val_1478_;
v___y_1463_ = v_a_1445_;
goto v___jp_1461_;
}
}
else
{
lean_object* v_a_1479_; lean_object* v___x_1481_; uint8_t v_isShared_1482_; uint8_t v_isSharedCheck_1486_; 
lean_dec_ref(v_name_1472_);
lean_dec(v_a_1457_);
lean_dec(v_a_1455_);
v_a_1479_ = lean_ctor_get(v___x_1473_, 0);
v_isSharedCheck_1486_ = !lean_is_exclusive(v___x_1473_);
if (v_isSharedCheck_1486_ == 0)
{
v___x_1481_ = v___x_1473_;
v_isShared_1482_ = v_isSharedCheck_1486_;
goto v_resetjp_1480_;
}
else
{
lean_inc(v_a_1479_);
lean_dec(v___x_1473_);
v___x_1481_ = lean_box(0);
v_isShared_1482_ = v_isSharedCheck_1486_;
goto v_resetjp_1480_;
}
v_resetjp_1480_:
{
lean_object* v___x_1484_; 
if (v_isShared_1482_ == 0)
{
v___x_1484_ = v___x_1481_;
goto v_reusejp_1483_;
}
else
{
lean_object* v_reuseFailAlloc_1485_; 
v_reuseFailAlloc_1485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1485_, 0, v_a_1479_);
v___x_1484_ = v_reuseFailAlloc_1485_;
goto v_reusejp_1483_;
}
v_reusejp_1483_:
{
return v___x_1484_;
}
}
}
}
else
{
lean_object* v___x_1487_; uint32_t v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1492_; 
lean_dec(v___x_1470_);
lean_dec(v_a_1457_);
lean_dec(v_a_1455_);
v___x_1487_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_literal___closed__4, &lp_vampireReplay_Vampire_Reconstruct_literal___closed__4_once, _init_lp_vampireReplay_Vampire_Reconstruct_literal___closed__4);
v___x_1488_ = lp_vampireReplay_Vampire_Literal_predicate(v_l_1443_);
lean_dec_ref(v_l_1443_);
v___x_1489_ = lean_uint32_to_nat(v___x_1488_);
v___x_1490_ = l_Nat_reprFast(v___x_1489_);
if (v_isShared_1460_ == 0)
{
lean_ctor_set_tag(v___x_1459_, 3);
lean_ctor_set(v___x_1459_, 0, v___x_1490_);
v___x_1492_ = v___x_1459_;
goto v_reusejp_1491_;
}
else
{
lean_object* v_reuseFailAlloc_1496_; 
v_reuseFailAlloc_1496_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1496_, 0, v___x_1490_);
v___x_1492_ = v_reuseFailAlloc_1496_;
goto v_reusejp_1491_;
}
v_reusejp_1491_:
{
lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; 
v___x_1493_ = l_Lean_MessageData_ofFormat(v___x_1492_);
v___x_1494_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1494_, 0, v___x_1487_);
lean_ctor_set(v___x_1494_, 1, v___x_1493_);
v___x_1495_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1494_, v_a_1446_, v_a_1447_, v_a_1448_, v_a_1449_);
return v___x_1495_;
}
}
}
else
{
lean_object* v___x_1497_; 
v___x_1497_ = lp_vampireReplay_Vampire_Literal_sort_x3f(v_l_1443_);
lean_dec_ref(v_l_1443_);
if (lean_obj_tag(v___x_1497_) == 1)
{
lean_object* v_val_1498_; lean_object* v___x_1500_; uint8_t v_isShared_1501_; uint8_t v_isSharedCheck_1542_; 
v_val_1498_ = lean_ctor_get(v___x_1497_, 0);
v_isSharedCheck_1542_ = !lean_is_exclusive(v___x_1497_);
if (v_isSharedCheck_1542_ == 0)
{
v___x_1500_ = v___x_1497_;
v_isShared_1501_ = v_isSharedCheck_1542_;
goto v_resetjp_1499_;
}
else
{
lean_inc(v_val_1498_);
lean_dec(v___x_1497_);
v___x_1500_ = lean_box(0);
v_isShared_1501_ = v_isSharedCheck_1542_;
goto v_resetjp_1499_;
}
v_resetjp_1499_:
{
lean_object* v___x_1502_; lean_object* v___x_1503_; uint8_t v___x_1504_; 
v___x_1502_ = lean_array_get_size(v_a_1455_);
v___x_1503_ = lean_unsigned_to_nat(2u);
v___x_1504_ = lean_nat_dec_eq(v___x_1502_, v___x_1503_);
if (v___x_1504_ == 0)
{
lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1508_; 
lean_del_object(v___x_1500_);
lean_dec(v_val_1498_);
lean_dec(v_a_1457_);
lean_dec(v_a_1455_);
v___x_1505_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_literal___closed__6, &lp_vampireReplay_Vampire_Reconstruct_literal___closed__6_once, _init_lp_vampireReplay_Vampire_Reconstruct_literal___closed__6);
v___x_1506_ = l_Nat_reprFast(v___x_1502_);
if (v_isShared_1460_ == 0)
{
lean_ctor_set_tag(v___x_1459_, 3);
lean_ctor_set(v___x_1459_, 0, v___x_1506_);
v___x_1508_ = v___x_1459_;
goto v_reusejp_1507_;
}
else
{
lean_object* v_reuseFailAlloc_1514_; 
v_reuseFailAlloc_1514_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1514_, 0, v___x_1506_);
v___x_1508_ = v_reuseFailAlloc_1514_;
goto v_reusejp_1507_;
}
v_reusejp_1507_:
{
lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; 
v___x_1509_ = l_Lean_MessageData_ofFormat(v___x_1508_);
v___x_1510_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1510_, 0, v___x_1505_);
lean_ctor_set(v___x_1510_, 1, v___x_1509_);
v___x_1511_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_literal___closed__8, &lp_vampireReplay_Vampire_Reconstruct_literal___closed__8_once, _init_lp_vampireReplay_Vampire_Reconstruct_literal___closed__8);
v___x_1512_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1512_, 0, v___x_1510_);
lean_ctor_set(v___x_1512_, 1, v___x_1511_);
v___x_1513_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1512_, v_a_1446_, v_a_1447_, v_a_1448_, v_a_1449_);
return v___x_1513_;
}
}
else
{
lean_object* v___x_1515_; 
v___x_1515_ = lp_vampireReplay_Vampire_Reconstruct_sortType(v_val_1498_, v_a_1444_, v_a_1445_, v_a_1446_, v_a_1447_, v_a_1448_, v_a_1449_);
if (lean_obj_tag(v___x_1515_) == 0)
{
lean_object* v_a_1516_; lean_object* v___x_1518_; uint8_t v_isShared_1519_; uint8_t v_isSharedCheck_1541_; 
v_a_1516_ = lean_ctor_get(v___x_1515_, 0);
v_isSharedCheck_1541_ = !lean_is_exclusive(v___x_1515_);
if (v_isSharedCheck_1541_ == 0)
{
v___x_1518_ = v___x_1515_;
v_isShared_1519_ = v_isSharedCheck_1541_;
goto v_resetjp_1517_;
}
else
{
lean_inc(v_a_1516_);
lean_dec(v___x_1515_);
v___x_1518_ = lean_box(0);
v_isShared_1519_ = v_isSharedCheck_1541_;
goto v_resetjp_1517_;
}
v_resetjp_1517_:
{
lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1526_; 
v___x_1520_ = lean_unsigned_to_nat(0u);
v___x_1521_ = lean_array_fget(v_a_1455_, v___x_1520_);
v___x_1522_ = lean_unsigned_to_nat(1u);
v___x_1523_ = lean_array_fget(v_a_1455_, v___x_1522_);
lean_dec(v_a_1455_);
v___x_1524_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_literal___closed__10));
if (v_isShared_1501_ == 0)
{
lean_ctor_set(v___x_1500_, 0, v_a_1516_);
v___x_1526_ = v___x_1500_;
goto v_reusejp_1525_;
}
else
{
lean_object* v_reuseFailAlloc_1540_; 
v_reuseFailAlloc_1540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1540_, 0, v_a_1516_);
v___x_1526_ = v_reuseFailAlloc_1540_;
goto v_reusejp_1525_;
}
v_reusejp_1525_:
{
lean_object* v___x_1528_; 
if (v_isShared_1519_ == 0)
{
lean_ctor_set_tag(v___x_1518_, 1);
lean_ctor_set(v___x_1518_, 0, v___x_1521_);
v___x_1528_ = v___x_1518_;
goto v_reusejp_1527_;
}
else
{
lean_object* v_reuseFailAlloc_1539_; 
v_reuseFailAlloc_1539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1539_, 0, v___x_1521_);
v___x_1528_ = v_reuseFailAlloc_1539_;
goto v_reusejp_1527_;
}
v_reusejp_1527_:
{
lean_object* v___x_1530_; 
if (v_isShared_1460_ == 0)
{
lean_ctor_set_tag(v___x_1459_, 1);
lean_ctor_set(v___x_1459_, 0, v___x_1523_);
v___x_1530_ = v___x_1459_;
goto v_reusejp_1529_;
}
else
{
lean_object* v_reuseFailAlloc_1538_; 
v_reuseFailAlloc_1538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1538_, 0, v___x_1523_);
v___x_1530_ = v_reuseFailAlloc_1538_;
goto v_reusejp_1529_;
}
v_reusejp_1529_:
{
lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; 
v___x_1531_ = lean_unsigned_to_nat(3u);
v___x_1532_ = lean_mk_empty_array_with_capacity(v___x_1531_);
v___x_1533_ = lean_array_push(v___x_1532_, v___x_1526_);
v___x_1534_ = lean_array_push(v___x_1533_, v___x_1528_);
v___x_1535_ = lean_array_push(v___x_1534_, v___x_1530_);
v___x_1536_ = l_Lean_Meta_mkAppOptM(v___x_1524_, v___x_1535_, v_a_1446_, v_a_1447_, v_a_1448_, v_a_1449_);
if (lean_obj_tag(v___x_1536_) == 0)
{
lean_object* v_a_1537_; 
v_a_1537_ = lean_ctor_get(v___x_1536_, 0);
lean_inc(v_a_1537_);
lean_dec_ref_known(v___x_1536_, 1);
v_atom_1462_ = v_a_1537_;
v___y_1463_ = v_a_1445_;
goto v___jp_1461_;
}
else
{
lean_dec(v_a_1457_);
return v___x_1536_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_1500_);
lean_del_object(v___x_1459_);
lean_dec(v_a_1457_);
lean_dec(v_a_1455_);
return v___x_1515_;
}
}
}
}
else
{
lean_object* v___x_1543_; lean_object* v___x_1544_; 
lean_dec(v___x_1497_);
lean_del_object(v___x_1459_);
lean_dec(v_a_1457_);
lean_dec(v_a_1455_);
v___x_1543_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_literal___closed__12, &lp_vampireReplay_Vampire_Reconstruct_literal___closed__12_once, _init_lp_vampireReplay_Vampire_Reconstruct_literal___closed__12);
v___x_1544_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1543_, v_a_1446_, v_a_1447_, v_a_1448_, v_a_1449_);
return v___x_1544_;
}
}
v___jp_1461_:
{
uint8_t v___x_1464_; 
v___x_1464_ = lean_unbox(v_a_1457_);
lean_dec(v_a_1457_);
if (v___x_1464_ == 0)
{
lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; 
v___x_1465_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_literal___closed__2, &lp_vampireReplay_Vampire_Reconstruct_literal___closed__2_once, _init_lp_vampireReplay_Vampire_Reconstruct_literal___closed__2);
v___x_1466_ = l_Lean_Expr_app___override(v___x_1465_, v_atom_1462_);
v___x_1467_ = lp_vampireReplay_Vampire_Reconstruct_shared___redArg(v___x_1466_, v___y_1463_);
return v___x_1467_;
}
else
{
lean_object* v___x_1468_; 
v___x_1468_ = lp_vampireReplay_Vampire_Reconstruct_shared___redArg(v_atom_1462_, v___y_1463_);
return v___x_1468_;
}
}
}
}
else
{
lean_object* v_a_1546_; lean_object* v___x_1548_; uint8_t v_isShared_1549_; uint8_t v_isSharedCheck_1553_; 
lean_dec_ref(v_l_1443_);
v_a_1546_ = lean_ctor_get(v___x_1454_, 0);
v_isSharedCheck_1553_ = !lean_is_exclusive(v___x_1454_);
if (v_isSharedCheck_1553_ == 0)
{
v___x_1548_ = v___x_1454_;
v_isShared_1549_ = v_isSharedCheck_1553_;
goto v_resetjp_1547_;
}
else
{
lean_inc(v_a_1546_);
lean_dec(v___x_1454_);
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
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_literal___boxed(lean_object* v_vars_1554_, lean_object* v_l_1555_, lean_object* v_a_1556_, lean_object* v_a_1557_, lean_object* v_a_1558_, lean_object* v_a_1559_, lean_object* v_a_1560_, lean_object* v_a_1561_, lean_object* v_a_1562_){
_start:
{
lean_object* v_res_1563_; 
v_res_1563_ = lp_vampireReplay_Vampire_Reconstruct_literal(v_vars_1554_, v_l_1555_, v_a_1556_, v_a_1557_, v_a_1558_, v_a_1559_, v_a_1560_, v_a_1561_);
lean_dec(v_a_1561_);
lean_dec_ref(v_a_1560_);
lean_dec(v_a_1559_);
lean_dec_ref(v_a_1558_);
lean_dec(v_a_1557_);
lean_dec_ref(v_a_1556_);
lean_dec_ref(v_vars_1554_);
return v_res_1563_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Vampire_Reconstruct_junction_spec__0(lean_object* v_fn_1564_, lean_object* v_as_1565_, size_t v_i_1566_, size_t v_stop_1567_, lean_object* v_b_1568_){
_start:
{
uint8_t v___x_1569_; 
v___x_1569_ = lean_usize_dec_eq(v_i_1566_, v_stop_1567_);
if (v___x_1569_ == 0)
{
size_t v___x_1570_; size_t v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; 
v___x_1570_ = ((size_t)1ULL);
v___x_1571_ = lean_usize_sub(v_i_1566_, v___x_1570_);
v___x_1572_ = lean_array_uget_borrowed(v_as_1565_, v___x_1571_);
v___x_1573_ = lean_box(0);
lean_inc(v_fn_1564_);
v___x_1574_ = l_Lean_Expr_const___override(v_fn_1564_, v___x_1573_);
lean_inc(v___x_1572_);
v___x_1575_ = l_Lean_mkAppB(v___x_1574_, v___x_1572_, v_b_1568_);
v_i_1566_ = v___x_1571_;
v_b_1568_ = v___x_1575_;
goto _start;
}
else
{
lean_dec(v_fn_1564_);
return v_b_1568_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Vampire_Reconstruct_junction_spec__0___boxed(lean_object* v_fn_1577_, lean_object* v_as_1578_, lean_object* v_i_1579_, lean_object* v_stop_1580_, lean_object* v_b_1581_){
_start:
{
size_t v_i_boxed_1582_; size_t v_stop_boxed_1583_; lean_object* v_res_1584_; 
v_i_boxed_1582_ = lean_unbox_usize(v_i_1579_);
lean_dec(v_i_1579_);
v_stop_boxed_1583_ = lean_unbox_usize(v_stop_1580_);
lean_dec(v_stop_1580_);
v_res_1584_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Vampire_Reconstruct_junction_spec__0(v_fn_1577_, v_as_1578_, v_i_boxed_1582_, v_stop_boxed_1583_, v_b_1581_);
lean_dec_ref(v_as_1578_);
return v_res_1584_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_junction(lean_object* v_fn_1585_, lean_object* v_unit_1586_, lean_object* v_args_1587_){
_start:
{
lean_object* v___x_1588_; lean_object* v___x_1589_; uint8_t v___x_1590_; 
v___x_1588_ = lean_array_get_size(v_args_1587_);
v___x_1589_ = lean_unsigned_to_nat(0u);
v___x_1590_ = lean_nat_dec_eq(v___x_1588_, v___x_1589_);
if (v___x_1590_ == 0)
{
lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; uint8_t v___x_1597_; 
lean_dec(v_unit_1586_);
v___x_1591_ = l_Lean_instInhabitedExpr;
v___x_1592_ = lean_unsigned_to_nat(1u);
v___x_1593_ = lean_nat_sub(v___x_1588_, v___x_1592_);
v___x_1594_ = lean_array_get(v___x_1591_, v_args_1587_, v___x_1593_);
lean_dec(v___x_1593_);
v___x_1595_ = lean_array_pop(v_args_1587_);
v___x_1596_ = lean_array_get_size(v___x_1595_);
v___x_1597_ = lean_nat_dec_lt(v___x_1589_, v___x_1596_);
if (v___x_1597_ == 0)
{
lean_dec_ref(v___x_1595_);
lean_dec(v_fn_1585_);
return v___x_1594_;
}
else
{
size_t v___x_1598_; size_t v___x_1599_; lean_object* v___x_1600_; 
v___x_1598_ = lean_usize_of_nat(v___x_1596_);
v___x_1599_ = ((size_t)0ULL);
v___x_1600_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Vampire_Reconstruct_junction_spec__0(v_fn_1585_, v___x_1595_, v___x_1598_, v___x_1599_, v___x_1594_);
lean_dec_ref(v___x_1595_);
return v___x_1600_;
}
}
else
{
lean_object* v___x_1601_; lean_object* v___x_1602_; 
lean_dec_ref(v_args_1587_);
lean_dec(v_fn_1585_);
v___x_1601_ = lean_box(0);
v___x_1602_ = l_Lean_Expr_const___override(v_unit_1586_, v___x_1601_);
return v___x_1602_;
}
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_sharedClause___redArg___closed__2(void){
_start:
{
lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; 
v___x_1606_ = lean_box(0);
v___x_1607_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_sharedClause___redArg___closed__1));
v___x_1608_ = l_Lean_Expr_const___override(v___x_1607_, v___x_1606_);
return v___x_1608_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_sharedClause___redArg(lean_object* v_e_1609_, lean_object* v_a_1610_){
_start:
{
lean_object* v___x_1612_; lean_object* v___x_1613_; uint8_t v___x_1614_; 
v___x_1612_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_sharedClause___redArg___closed__1));
v___x_1613_ = lean_unsigned_to_nat(2u);
v___x_1614_ = l_Lean_Expr_isAppOfArity(v_e_1609_, v___x_1612_, v___x_1613_);
if (v___x_1614_ == 0)
{
lean_object* v___x_1615_; 
v___x_1615_ = lp_vampireReplay_Vampire_Reconstruct_shared___redArg(v_e_1609_, v_a_1610_);
return v___x_1615_;
}
else
{
lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; 
v___x_1616_ = l_Lean_Expr_appFn_x21(v_e_1609_);
v___x_1617_ = l_Lean_Expr_appArg_x21(v___x_1616_);
lean_dec_ref(v___x_1616_);
v___x_1618_ = lp_vampireReplay_Vampire_Reconstruct_sharedClause___redArg(v___x_1617_, v_a_1610_);
if (lean_obj_tag(v___x_1618_) == 0)
{
lean_object* v_a_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; 
v_a_1619_ = lean_ctor_get(v___x_1618_, 0);
lean_inc(v_a_1619_);
lean_dec_ref_known(v___x_1618_, 1);
v___x_1620_ = l_Lean_Expr_appArg_x21(v_e_1609_);
lean_dec_ref(v_e_1609_);
v___x_1621_ = lp_vampireReplay_Vampire_Reconstruct_sharedClause___redArg(v___x_1620_, v_a_1610_);
if (lean_obj_tag(v___x_1621_) == 0)
{
lean_object* v_a_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; 
v_a_1622_ = lean_ctor_get(v___x_1621_, 0);
lean_inc(v_a_1622_);
lean_dec_ref_known(v___x_1621_, 1);
v___x_1623_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_sharedClause___redArg___closed__2, &lp_vampireReplay_Vampire_Reconstruct_sharedClause___redArg___closed__2_once, _init_lp_vampireReplay_Vampire_Reconstruct_sharedClause___redArg___closed__2);
v___x_1624_ = l_Lean_mkAppB(v___x_1623_, v_a_1619_, v_a_1622_);
v___x_1625_ = lp_vampireReplay_Vampire_Reconstruct_shared___redArg(v___x_1624_, v_a_1610_);
return v___x_1625_;
}
else
{
lean_dec(v_a_1619_);
return v___x_1621_;
}
}
else
{
lean_dec_ref(v_e_1609_);
return v___x_1618_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_sharedClause___redArg___boxed(lean_object* v_e_1626_, lean_object* v_a_1627_, lean_object* v_a_1628_){
_start:
{
lean_object* v_res_1629_; 
v_res_1629_ = lp_vampireReplay_Vampire_Reconstruct_sharedClause___redArg(v_e_1626_, v_a_1627_);
lean_dec(v_a_1627_);
return v_res_1629_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_sharedClause(lean_object* v_e_1630_, lean_object* v_a_1631_, lean_object* v_a_1632_, lean_object* v_a_1633_, lean_object* v_a_1634_, lean_object* v_a_1635_, lean_object* v_a_1636_){
_start:
{
lean_object* v___x_1638_; 
v___x_1638_ = lp_vampireReplay_Vampire_Reconstruct_sharedClause___redArg(v_e_1630_, v_a_1632_);
return v___x_1638_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_sharedClause___boxed(lean_object* v_e_1639_, lean_object* v_a_1640_, lean_object* v_a_1641_, lean_object* v_a_1642_, lean_object* v_a_1643_, lean_object* v_a_1644_, lean_object* v_a_1645_, lean_object* v_a_1646_){
_start:
{
lean_object* v_res_1647_; 
v_res_1647_ = lp_vampireReplay_Vampire_Reconstruct_sharedClause(v_e_1639_, v_a_1640_, v_a_1641_, v_a_1642_, v_a_1643_, v_a_1644_, v_a_1645_);
lean_dec(v_a_1645_);
lean_dec_ref(v_a_1644_);
lean_dec(v_a_1643_);
lean_dec_ref(v_a_1642_);
lean_dec(v_a_1641_);
lean_dec_ref(v_a_1640_);
return v_res_1647_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_clause_spec__0(lean_object* v_vars_1648_, size_t v_sz_1649_, size_t v_i_1650_, lean_object* v_bs_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_){
_start:
{
uint8_t v___x_1659_; 
v___x_1659_ = lean_usize_dec_lt(v_i_1650_, v_sz_1649_);
if (v___x_1659_ == 0)
{
lean_object* v___x_1660_; 
v___x_1660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1660_, 0, v_bs_1651_);
return v___x_1660_;
}
else
{
lean_object* v_v_1661_; lean_object* v___x_1662_; 
v_v_1661_ = lean_array_uget_borrowed(v_bs_1651_, v_i_1650_);
lean_inc(v_v_1661_);
v___x_1662_ = lp_vampireReplay_Vampire_Reconstruct_literal(v_vars_1648_, v_v_1661_, v___y_1652_, v___y_1653_, v___y_1654_, v___y_1655_, v___y_1656_, v___y_1657_);
if (lean_obj_tag(v___x_1662_) == 0)
{
lean_object* v_a_1663_; lean_object* v___x_1664_; lean_object* v_bs_x27_1665_; size_t v___x_1666_; size_t v___x_1667_; lean_object* v___x_1668_; 
v_a_1663_ = lean_ctor_get(v___x_1662_, 0);
lean_inc(v_a_1663_);
lean_dec_ref_known(v___x_1662_, 1);
v___x_1664_ = lean_unsigned_to_nat(0u);
v_bs_x27_1665_ = lean_array_uset(v_bs_1651_, v_i_1650_, v___x_1664_);
v___x_1666_ = ((size_t)1ULL);
v___x_1667_ = lean_usize_add(v_i_1650_, v___x_1666_);
v___x_1668_ = lean_array_uset(v_bs_x27_1665_, v_i_1650_, v_a_1663_);
v_i_1650_ = v___x_1667_;
v_bs_1651_ = v___x_1668_;
goto _start;
}
else
{
lean_object* v_a_1670_; lean_object* v___x_1672_; uint8_t v_isShared_1673_; uint8_t v_isSharedCheck_1677_; 
lean_dec_ref(v_bs_1651_);
v_a_1670_ = lean_ctor_get(v___x_1662_, 0);
v_isSharedCheck_1677_ = !lean_is_exclusive(v___x_1662_);
if (v_isSharedCheck_1677_ == 0)
{
v___x_1672_ = v___x_1662_;
v_isShared_1673_ = v_isSharedCheck_1677_;
goto v_resetjp_1671_;
}
else
{
lean_inc(v_a_1670_);
lean_dec(v___x_1662_);
v___x_1672_ = lean_box(0);
v_isShared_1673_ = v_isSharedCheck_1677_;
goto v_resetjp_1671_;
}
v_resetjp_1671_:
{
lean_object* v___x_1675_; 
if (v_isShared_1673_ == 0)
{
v___x_1675_ = v___x_1672_;
goto v_reusejp_1674_;
}
else
{
lean_object* v_reuseFailAlloc_1676_; 
v_reuseFailAlloc_1676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1676_, 0, v_a_1670_);
v___x_1675_ = v_reuseFailAlloc_1676_;
goto v_reusejp_1674_;
}
v_reusejp_1674_:
{
return v___x_1675_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_clause_spec__0___boxed(lean_object* v_vars_1678_, lean_object* v_sz_1679_, lean_object* v_i_1680_, lean_object* v_bs_1681_, lean_object* v___y_1682_, lean_object* v___y_1683_, lean_object* v___y_1684_, lean_object* v___y_1685_, lean_object* v___y_1686_, lean_object* v___y_1687_, lean_object* v___y_1688_){
_start:
{
size_t v_sz_boxed_1689_; size_t v_i_boxed_1690_; lean_object* v_res_1691_; 
v_sz_boxed_1689_ = lean_unbox_usize(v_sz_1679_);
lean_dec(v_sz_1679_);
v_i_boxed_1690_ = lean_unbox_usize(v_i_1680_);
lean_dec(v_i_1680_);
v_res_1691_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_clause_spec__0(v_vars_1678_, v_sz_boxed_1689_, v_i_boxed_1690_, v_bs_1681_, v___y_1682_, v___y_1683_, v___y_1684_, v___y_1685_, v___y_1686_, v___y_1687_);
lean_dec(v___y_1687_);
lean_dec_ref(v___y_1686_);
lean_dec(v___y_1685_);
lean_dec_ref(v___y_1684_);
lean_dec(v___y_1683_);
lean_dec_ref(v___y_1682_);
lean_dec_ref(v_vars_1678_);
return v_res_1691_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_clause(lean_object* v_vars_1695_, lean_object* v_c_1696_, lean_object* v_a_1697_, lean_object* v_a_1698_, lean_object* v_a_1699_, lean_object* v_a_1700_, lean_object* v_a_1701_, lean_object* v_a_1702_){
_start:
{
lean_object* v___x_1704_; size_t v_sz_1705_; size_t v___x_1706_; lean_object* v___x_1707_; 
v___x_1704_ = lp_vampireReplay_Vampire_Clause_literals(v_c_1696_);
v_sz_1705_ = lean_array_size(v___x_1704_);
v___x_1706_ = ((size_t)0ULL);
v___x_1707_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_clause_spec__0(v_vars_1695_, v_sz_1705_, v___x_1706_, v___x_1704_, v_a_1697_, v_a_1698_, v_a_1699_, v_a_1700_, v_a_1701_, v_a_1702_);
if (lean_obj_tag(v___x_1707_) == 0)
{
lean_object* v_a_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; 
v_a_1708_ = lean_ctor_get(v___x_1707_, 0);
lean_inc(v_a_1708_);
lean_dec_ref_known(v___x_1707_, 1);
v___x_1709_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_sharedClause___redArg___closed__1));
v___x_1710_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_clause___closed__1));
v___x_1711_ = lp_vampireReplay_Vampire_Reconstruct_junction(v___x_1709_, v___x_1710_, v_a_1708_);
v___x_1712_ = lp_vampireReplay_Vampire_Reconstruct_sharedClause___redArg(v___x_1711_, v_a_1698_);
return v___x_1712_;
}
else
{
lean_object* v_a_1713_; lean_object* v___x_1715_; uint8_t v_isShared_1716_; uint8_t v_isSharedCheck_1720_; 
v_a_1713_ = lean_ctor_get(v___x_1707_, 0);
v_isSharedCheck_1720_ = !lean_is_exclusive(v___x_1707_);
if (v_isSharedCheck_1720_ == 0)
{
v___x_1715_ = v___x_1707_;
v_isShared_1716_ = v_isSharedCheck_1720_;
goto v_resetjp_1714_;
}
else
{
lean_inc(v_a_1713_);
lean_dec(v___x_1707_);
v___x_1715_ = lean_box(0);
v_isShared_1716_ = v_isSharedCheck_1720_;
goto v_resetjp_1714_;
}
v_resetjp_1714_:
{
lean_object* v___x_1718_; 
if (v_isShared_1716_ == 0)
{
v___x_1718_ = v___x_1715_;
goto v_reusejp_1717_;
}
else
{
lean_object* v_reuseFailAlloc_1719_; 
v_reuseFailAlloc_1719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1719_, 0, v_a_1713_);
v___x_1718_ = v_reuseFailAlloc_1719_;
goto v_reusejp_1717_;
}
v_reusejp_1717_:
{
return v___x_1718_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_clause___boxed(lean_object* v_vars_1721_, lean_object* v_c_1722_, lean_object* v_a_1723_, lean_object* v_a_1724_, lean_object* v_a_1725_, lean_object* v_a_1726_, lean_object* v_a_1727_, lean_object* v_a_1728_, lean_object* v_a_1729_){
_start:
{
lean_object* v_res_1730_; 
v_res_1730_ = lp_vampireReplay_Vampire_Reconstruct_clause(v_vars_1721_, v_c_1722_, v_a_1723_, v_a_1724_, v_a_1725_, v_a_1726_, v_a_1727_, v_a_1728_);
lean_dec(v_a_1728_);
lean_dec_ref(v_a_1727_);
lean_dec(v_a_1726_);
lean_dec_ref(v_a_1725_);
lean_dec(v_a_1724_);
lean_dec_ref(v_a_1723_);
lean_dec_ref(v_vars_1721_);
return v_res_1730_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1_spec__4___redArg___lam__0(lean_object* v_k_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_, lean_object* v_b_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_){
_start:
{
lean_object* v___x_1740_; 
lean_inc(v___y_1738_);
lean_inc_ref(v___y_1737_);
lean_inc(v___y_1736_);
lean_inc_ref(v___y_1735_);
lean_inc(v___y_1733_);
lean_inc_ref(v___y_1732_);
v___x_1740_ = lean_apply_8(v_k_1731_, v_b_1734_, v___y_1732_, v___y_1733_, v___y_1735_, v___y_1736_, v___y_1737_, v___y_1738_, lean_box(0));
return v___x_1740_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1_spec__4___redArg___lam__0___boxed(lean_object* v_k_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_, lean_object* v_b_1744_, lean_object* v___y_1745_, lean_object* v___y_1746_, lean_object* v___y_1747_, lean_object* v___y_1748_, lean_object* v___y_1749_){
_start:
{
lean_object* v_res_1750_; 
v_res_1750_ = lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1_spec__4___redArg___lam__0(v_k_1741_, v___y_1742_, v___y_1743_, v_b_1744_, v___y_1745_, v___y_1746_, v___y_1747_, v___y_1748_);
lean_dec(v___y_1748_);
lean_dec_ref(v___y_1747_);
lean_dec(v___y_1746_);
lean_dec_ref(v___y_1745_);
lean_dec(v___y_1743_);
lean_dec_ref(v___y_1742_);
return v_res_1750_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1_spec__4___redArg(lean_object* v_name_1751_, uint8_t v_bi_1752_, lean_object* v_type_1753_, lean_object* v_k_1754_, uint8_t v_kind_1755_, lean_object* v___y_1756_, lean_object* v___y_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_){
_start:
{
lean_object* v___f_1763_; lean_object* v___x_1764_; 
lean_inc(v___y_1757_);
lean_inc_ref(v___y_1756_);
v___f_1763_ = lean_alloc_closure((void*)(lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1_spec__4___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_1763_, 0, v_k_1754_);
lean_closure_set(v___f_1763_, 1, v___y_1756_);
lean_closure_set(v___f_1763_, 2, v___y_1757_);
v___x_1764_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp___redArg(v_name_1751_, v_bi_1752_, v_type_1753_, v___f_1763_, v_kind_1755_, v___y_1758_, v___y_1759_, v___y_1760_, v___y_1761_);
if (lean_obj_tag(v___x_1764_) == 0)
{
return v___x_1764_;
}
else
{
lean_object* v_a_1765_; lean_object* v___x_1767_; uint8_t v_isShared_1768_; uint8_t v_isSharedCheck_1772_; 
v_a_1765_ = lean_ctor_get(v___x_1764_, 0);
v_isSharedCheck_1772_ = !lean_is_exclusive(v___x_1764_);
if (v_isSharedCheck_1772_ == 0)
{
v___x_1767_ = v___x_1764_;
v_isShared_1768_ = v_isSharedCheck_1772_;
goto v_resetjp_1766_;
}
else
{
lean_inc(v_a_1765_);
lean_dec(v___x_1764_);
v___x_1767_ = lean_box(0);
v_isShared_1768_ = v_isSharedCheck_1772_;
goto v_resetjp_1766_;
}
v_resetjp_1766_:
{
lean_object* v___x_1770_; 
if (v_isShared_1768_ == 0)
{
v___x_1770_ = v___x_1767_;
goto v_reusejp_1769_;
}
else
{
lean_object* v_reuseFailAlloc_1771_; 
v_reuseFailAlloc_1771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1771_, 0, v_a_1765_);
v___x_1770_ = v_reuseFailAlloc_1771_;
goto v_reusejp_1769_;
}
v_reusejp_1769_:
{
return v___x_1770_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1_spec__4___redArg___boxed(lean_object* v_name_1773_, lean_object* v_bi_1774_, lean_object* v_type_1775_, lean_object* v_k_1776_, lean_object* v_kind_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_, lean_object* v___y_1784_){
_start:
{
uint8_t v_bi_boxed_1785_; uint8_t v_kind_boxed_1786_; lean_object* v_res_1787_; 
v_bi_boxed_1785_ = lean_unbox(v_bi_1774_);
v_kind_boxed_1786_ = lean_unbox(v_kind_1777_);
v_res_1787_ = lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1_spec__4___redArg(v_name_1773_, v_bi_boxed_1785_, v_type_1775_, v_k_1776_, v_kind_boxed_1786_, v___y_1778_, v___y_1779_, v___y_1780_, v___y_1781_, v___y_1782_, v___y_1783_);
lean_dec(v___y_1783_);
lean_dec_ref(v___y_1782_);
lean_dec(v___y_1781_);
lean_dec_ref(v___y_1780_);
lean_dec(v___y_1779_);
lean_dec_ref(v___y_1778_);
return v_res_1787_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(lean_object* v_name_1788_, lean_object* v_type_1789_, lean_object* v_k_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_, lean_object* v___y_1795_, lean_object* v___y_1796_){
_start:
{
uint8_t v___x_1798_; uint8_t v___x_1799_; lean_object* v___x_1800_; 
v___x_1798_ = 0;
v___x_1799_ = 0;
v___x_1800_ = lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1_spec__4___redArg(v_name_1788_, v___x_1798_, v_type_1789_, v_k_1790_, v___x_1799_, v___y_1791_, v___y_1792_, v___y_1793_, v___y_1794_, v___y_1795_, v___y_1796_);
return v___x_1800_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg___boxed(lean_object* v_name_1801_, lean_object* v_type_1802_, lean_object* v_k_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_, lean_object* v___y_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_){
_start:
{
lean_object* v_res_1811_; 
v_res_1811_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v_name_1801_, v_type_1802_, v_k_1803_, v___y_1804_, v___y_1805_, v___y_1806_, v___y_1807_, v___y_1808_, v___y_1809_);
lean_dec(v___y_1809_);
lean_dec_ref(v___y_1808_);
lean_dec(v___y_1807_);
lean_dec_ref(v___y_1806_);
lean_dec(v___y_1805_);
lean_dec_ref(v___y_1804_);
return v_res_1811_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__2___redArg(uint32_t v_a_1812_, lean_object* v_b_1813_, lean_object* v_x_1814_){
_start:
{
if (lean_obj_tag(v_x_1814_) == 0)
{
lean_dec(v_b_1813_);
return v_x_1814_;
}
else
{
lean_object* v_key_1815_; lean_object* v_value_1816_; lean_object* v_tail_1817_; lean_object* v___x_1819_; uint8_t v_isShared_1820_; uint8_t v_isSharedCheck_1831_; 
v_key_1815_ = lean_ctor_get(v_x_1814_, 0);
v_value_1816_ = lean_ctor_get(v_x_1814_, 1);
v_tail_1817_ = lean_ctor_get(v_x_1814_, 2);
v_isSharedCheck_1831_ = !lean_is_exclusive(v_x_1814_);
if (v_isSharedCheck_1831_ == 0)
{
v___x_1819_ = v_x_1814_;
v_isShared_1820_ = v_isSharedCheck_1831_;
goto v_resetjp_1818_;
}
else
{
lean_inc(v_tail_1817_);
lean_inc(v_value_1816_);
lean_inc(v_key_1815_);
lean_dec(v_x_1814_);
v___x_1819_ = lean_box(0);
v_isShared_1820_ = v_isSharedCheck_1831_;
goto v_resetjp_1818_;
}
v_resetjp_1818_:
{
uint32_t v___x_1821_; uint8_t v___x_1822_; 
v___x_1821_ = lean_unbox_uint32(v_key_1815_);
v___x_1822_ = lean_uint32_dec_eq(v___x_1821_, v_a_1812_);
if (v___x_1822_ == 0)
{
lean_object* v___x_1823_; lean_object* v___x_1825_; 
v___x_1823_ = lp_vampireReplay_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__2___redArg(v_a_1812_, v_b_1813_, v_tail_1817_);
if (v_isShared_1820_ == 0)
{
lean_ctor_set(v___x_1819_, 2, v___x_1823_);
v___x_1825_ = v___x_1819_;
goto v_reusejp_1824_;
}
else
{
lean_object* v_reuseFailAlloc_1826_; 
v_reuseFailAlloc_1826_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1826_, 0, v_key_1815_);
lean_ctor_set(v_reuseFailAlloc_1826_, 1, v_value_1816_);
lean_ctor_set(v_reuseFailAlloc_1826_, 2, v___x_1823_);
v___x_1825_ = v_reuseFailAlloc_1826_;
goto v_reusejp_1824_;
}
v_reusejp_1824_:
{
return v___x_1825_;
}
}
else
{
lean_object* v___x_1827_; lean_object* v___x_1829_; 
lean_dec(v_value_1816_);
lean_dec(v_key_1815_);
v___x_1827_ = lean_box_uint32(v_a_1812_);
if (v_isShared_1820_ == 0)
{
lean_ctor_set(v___x_1819_, 1, v_b_1813_);
lean_ctor_set(v___x_1819_, 0, v___x_1827_);
v___x_1829_ = v___x_1819_;
goto v_reusejp_1828_;
}
else
{
lean_object* v_reuseFailAlloc_1830_; 
v_reuseFailAlloc_1830_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1830_, 0, v___x_1827_);
lean_ctor_set(v_reuseFailAlloc_1830_, 1, v_b_1813_);
lean_ctor_set(v_reuseFailAlloc_1830_, 2, v_tail_1817_);
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
}
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__2___redArg___boxed(lean_object* v_a_1832_, lean_object* v_b_1833_, lean_object* v_x_1834_){
_start:
{
uint32_t v_a_boxed_1835_; lean_object* v_res_1836_; 
v_a_boxed_1835_ = lean_unbox_uint32(v_a_1832_);
lean_dec(v_a_1832_);
v_res_1836_ = lp_vampireReplay_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__2___redArg(v_a_boxed_1835_, v_b_1833_, v_x_1834_);
return v_res_1836_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__1_spec__2_spec__5___redArg(lean_object* v_x_1837_, lean_object* v_x_1838_){
_start:
{
if (lean_obj_tag(v_x_1838_) == 0)
{
return v_x_1837_;
}
else
{
lean_object* v_key_1839_; lean_object* v_value_1840_; lean_object* v_tail_1841_; lean_object* v___x_1843_; uint8_t v_isShared_1844_; uint8_t v_isSharedCheck_1865_; 
v_key_1839_ = lean_ctor_get(v_x_1838_, 0);
v_value_1840_ = lean_ctor_get(v_x_1838_, 1);
v_tail_1841_ = lean_ctor_get(v_x_1838_, 2);
v_isSharedCheck_1865_ = !lean_is_exclusive(v_x_1838_);
if (v_isSharedCheck_1865_ == 0)
{
v___x_1843_ = v_x_1838_;
v_isShared_1844_ = v_isSharedCheck_1865_;
goto v_resetjp_1842_;
}
else
{
lean_inc(v_tail_1841_);
lean_inc(v_value_1840_);
lean_inc(v_key_1839_);
lean_dec(v_x_1838_);
v___x_1843_ = lean_box(0);
v_isShared_1844_ = v_isSharedCheck_1865_;
goto v_resetjp_1842_;
}
v_resetjp_1842_:
{
lean_object* v___x_1845_; uint32_t v___x_1846_; uint64_t v___x_1847_; uint64_t v___x_1848_; uint64_t v___x_1849_; uint64_t v_fold_1850_; uint64_t v___x_1851_; uint64_t v___x_1852_; uint64_t v___x_1853_; size_t v___x_1854_; size_t v___x_1855_; size_t v___x_1856_; size_t v___x_1857_; size_t v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1861_; 
v___x_1845_ = lean_array_get_size(v_x_1837_);
v___x_1846_ = lean_unbox_uint32(v_key_1839_);
v___x_1847_ = lean_uint32_to_uint64(v___x_1846_);
v___x_1848_ = 32ULL;
v___x_1849_ = lean_uint64_shift_right(v___x_1847_, v___x_1848_);
v_fold_1850_ = lean_uint64_xor(v___x_1847_, v___x_1849_);
v___x_1851_ = 16ULL;
v___x_1852_ = lean_uint64_shift_right(v_fold_1850_, v___x_1851_);
v___x_1853_ = lean_uint64_xor(v_fold_1850_, v___x_1852_);
v___x_1854_ = lean_uint64_to_usize(v___x_1853_);
v___x_1855_ = lean_usize_of_nat(v___x_1845_);
v___x_1856_ = ((size_t)1ULL);
v___x_1857_ = lean_usize_sub(v___x_1855_, v___x_1856_);
v___x_1858_ = lean_usize_land(v___x_1854_, v___x_1857_);
v___x_1859_ = lean_array_uget_borrowed(v_x_1837_, v___x_1858_);
lean_inc(v___x_1859_);
if (v_isShared_1844_ == 0)
{
lean_ctor_set(v___x_1843_, 2, v___x_1859_);
v___x_1861_ = v___x_1843_;
goto v_reusejp_1860_;
}
else
{
lean_object* v_reuseFailAlloc_1864_; 
v_reuseFailAlloc_1864_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1864_, 0, v_key_1839_);
lean_ctor_set(v_reuseFailAlloc_1864_, 1, v_value_1840_);
lean_ctor_set(v_reuseFailAlloc_1864_, 2, v___x_1859_);
v___x_1861_ = v_reuseFailAlloc_1864_;
goto v_reusejp_1860_;
}
v_reusejp_1860_:
{
lean_object* v___x_1862_; 
v___x_1862_ = lean_array_uset(v_x_1837_, v___x_1858_, v___x_1861_);
v_x_1837_ = v___x_1862_;
v_x_1838_ = v_tail_1841_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__1_spec__2___redArg(lean_object* v_i_1866_, lean_object* v_source_1867_, lean_object* v_target_1868_){
_start:
{
lean_object* v___x_1869_; uint8_t v___x_1870_; 
v___x_1869_ = lean_array_get_size(v_source_1867_);
v___x_1870_ = lean_nat_dec_lt(v_i_1866_, v___x_1869_);
if (v___x_1870_ == 0)
{
lean_dec_ref(v_source_1867_);
lean_dec(v_i_1866_);
return v_target_1868_;
}
else
{
lean_object* v_es_1871_; lean_object* v___x_1872_; lean_object* v_source_1873_; lean_object* v_target_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; 
v_es_1871_ = lean_array_fget(v_source_1867_, v_i_1866_);
v___x_1872_ = lean_box(0);
v_source_1873_ = lean_array_fset(v_source_1867_, v_i_1866_, v___x_1872_);
v_target_1874_ = lp_vampireReplay_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__1_spec__2_spec__5___redArg(v_target_1868_, v_es_1871_);
v___x_1875_ = lean_unsigned_to_nat(1u);
v___x_1876_ = lean_nat_add(v_i_1866_, v___x_1875_);
lean_dec(v_i_1866_);
v_i_1866_ = v___x_1876_;
v_source_1867_ = v_source_1873_;
v_target_1868_ = v_target_1874_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__1___redArg(lean_object* v_data_1878_){
_start:
{
lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v_nbuckets_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; 
v___x_1879_ = lean_array_get_size(v_data_1878_);
v___x_1880_ = lean_unsigned_to_nat(2u);
v_nbuckets_1881_ = lean_nat_mul(v___x_1879_, v___x_1880_);
v___x_1882_ = lean_unsigned_to_nat(0u);
v___x_1883_ = lean_box(0);
v___x_1884_ = lean_mk_array(v_nbuckets_1881_, v___x_1883_);
v___x_1885_ = lp_vampireReplay___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__1_spec__2___redArg(v___x_1882_, v_data_1878_, v___x_1884_);
return v___x_1885_;
}
}
LEAN_EXPORT uint8_t lp_vampireReplay_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__0___redArg(uint32_t v_a_1886_, lean_object* v_x_1887_){
_start:
{
if (lean_obj_tag(v_x_1887_) == 0)
{
uint8_t v___x_1888_; 
v___x_1888_ = 0;
return v___x_1888_;
}
else
{
lean_object* v_key_1889_; lean_object* v_tail_1890_; uint32_t v___x_1891_; uint8_t v___x_1892_; 
v_key_1889_ = lean_ctor_get(v_x_1887_, 0);
v_tail_1890_ = lean_ctor_get(v_x_1887_, 2);
v___x_1891_ = lean_unbox_uint32(v_key_1889_);
v___x_1892_ = lean_uint32_dec_eq(v___x_1891_, v_a_1886_);
if (v___x_1892_ == 0)
{
v_x_1887_ = v_tail_1890_;
goto _start;
}
else
{
return v___x_1892_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__0___redArg___boxed(lean_object* v_a_1894_, lean_object* v_x_1895_){
_start:
{
uint32_t v_a_boxed_1896_; uint8_t v_res_1897_; lean_object* v_r_1898_; 
v_a_boxed_1896_ = lean_unbox_uint32(v_a_1894_);
lean_dec(v_a_1894_);
v_res_1897_ = lp_vampireReplay_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__0___redArg(v_a_boxed_1896_, v_x_1895_);
lean_dec(v_x_1895_);
v_r_1898_ = lean_box(v_res_1897_);
return v_r_1898_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(lean_object* v_m_1899_, uint32_t v_a_1900_, lean_object* v_b_1901_){
_start:
{
lean_object* v_size_1902_; lean_object* v_buckets_1903_; lean_object* v___x_1905_; uint8_t v_isShared_1906_; uint8_t v_isSharedCheck_1947_; 
v_size_1902_ = lean_ctor_get(v_m_1899_, 0);
v_buckets_1903_ = lean_ctor_get(v_m_1899_, 1);
v_isSharedCheck_1947_ = !lean_is_exclusive(v_m_1899_);
if (v_isSharedCheck_1947_ == 0)
{
v___x_1905_ = v_m_1899_;
v_isShared_1906_ = v_isSharedCheck_1947_;
goto v_resetjp_1904_;
}
else
{
lean_inc(v_buckets_1903_);
lean_inc(v_size_1902_);
lean_dec(v_m_1899_);
v___x_1905_ = lean_box(0);
v_isShared_1906_ = v_isSharedCheck_1947_;
goto v_resetjp_1904_;
}
v_resetjp_1904_:
{
lean_object* v___x_1907_; uint64_t v___x_1908_; uint64_t v___x_1909_; uint64_t v___x_1910_; uint64_t v_fold_1911_; uint64_t v___x_1912_; uint64_t v___x_1913_; uint64_t v___x_1914_; size_t v___x_1915_; size_t v___x_1916_; size_t v___x_1917_; size_t v___x_1918_; size_t v___x_1919_; lean_object* v_bkt_1920_; uint8_t v___x_1921_; 
v___x_1907_ = lean_array_get_size(v_buckets_1903_);
v___x_1908_ = lean_uint32_to_uint64(v_a_1900_);
v___x_1909_ = 32ULL;
v___x_1910_ = lean_uint64_shift_right(v___x_1908_, v___x_1909_);
v_fold_1911_ = lean_uint64_xor(v___x_1908_, v___x_1910_);
v___x_1912_ = 16ULL;
v___x_1913_ = lean_uint64_shift_right(v_fold_1911_, v___x_1912_);
v___x_1914_ = lean_uint64_xor(v_fold_1911_, v___x_1913_);
v___x_1915_ = lean_uint64_to_usize(v___x_1914_);
v___x_1916_ = lean_usize_of_nat(v___x_1907_);
v___x_1917_ = ((size_t)1ULL);
v___x_1918_ = lean_usize_sub(v___x_1916_, v___x_1917_);
v___x_1919_ = lean_usize_land(v___x_1915_, v___x_1918_);
v_bkt_1920_ = lean_array_uget_borrowed(v_buckets_1903_, v___x_1919_);
v___x_1921_ = lp_vampireReplay_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__0___redArg(v_a_1900_, v_bkt_1920_);
if (v___x_1921_ == 0)
{
lean_object* v___x_1922_; lean_object* v_size_x27_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v_buckets_x27_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; uint8_t v___x_1932_; 
v___x_1922_ = lean_unsigned_to_nat(1u);
v_size_x27_1923_ = lean_nat_add(v_size_1902_, v___x_1922_);
lean_dec(v_size_1902_);
v___x_1924_ = lean_box_uint32(v_a_1900_);
lean_inc(v_bkt_1920_);
v___x_1925_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1925_, 0, v___x_1924_);
lean_ctor_set(v___x_1925_, 1, v_b_1901_);
lean_ctor_set(v___x_1925_, 2, v_bkt_1920_);
v_buckets_x27_1926_ = lean_array_uset(v_buckets_1903_, v___x_1919_, v___x_1925_);
v___x_1927_ = lean_unsigned_to_nat(4u);
v___x_1928_ = lean_nat_mul(v_size_x27_1923_, v___x_1927_);
v___x_1929_ = lean_unsigned_to_nat(3u);
v___x_1930_ = lean_nat_div(v___x_1928_, v___x_1929_);
lean_dec(v___x_1928_);
v___x_1931_ = lean_array_get_size(v_buckets_x27_1926_);
v___x_1932_ = lean_nat_dec_le(v___x_1930_, v___x_1931_);
lean_dec(v___x_1930_);
if (v___x_1932_ == 0)
{
lean_object* v_val_1933_; lean_object* v___x_1935_; 
v_val_1933_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__1___redArg(v_buckets_x27_1926_);
if (v_isShared_1906_ == 0)
{
lean_ctor_set(v___x_1905_, 1, v_val_1933_);
lean_ctor_set(v___x_1905_, 0, v_size_x27_1923_);
v___x_1935_ = v___x_1905_;
goto v_reusejp_1934_;
}
else
{
lean_object* v_reuseFailAlloc_1936_; 
v_reuseFailAlloc_1936_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1936_, 0, v_size_x27_1923_);
lean_ctor_set(v_reuseFailAlloc_1936_, 1, v_val_1933_);
v___x_1935_ = v_reuseFailAlloc_1936_;
goto v_reusejp_1934_;
}
v_reusejp_1934_:
{
return v___x_1935_;
}
}
else
{
lean_object* v___x_1938_; 
if (v_isShared_1906_ == 0)
{
lean_ctor_set(v___x_1905_, 1, v_buckets_x27_1926_);
lean_ctor_set(v___x_1905_, 0, v_size_x27_1923_);
v___x_1938_ = v___x_1905_;
goto v_reusejp_1937_;
}
else
{
lean_object* v_reuseFailAlloc_1939_; 
v_reuseFailAlloc_1939_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1939_, 0, v_size_x27_1923_);
lean_ctor_set(v_reuseFailAlloc_1939_, 1, v_buckets_x27_1926_);
v___x_1938_ = v_reuseFailAlloc_1939_;
goto v_reusejp_1937_;
}
v_reusejp_1937_:
{
return v___x_1938_;
}
}
}
else
{
lean_object* v___x_1940_; lean_object* v_buckets_x27_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1945_; 
lean_inc(v_bkt_1920_);
v___x_1940_ = lean_box(0);
v_buckets_x27_1941_ = lean_array_uset(v_buckets_1903_, v___x_1919_, v___x_1940_);
v___x_1942_ = lp_vampireReplay_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__2___redArg(v_a_1900_, v_b_1901_, v_bkt_1920_);
v___x_1943_ = lean_array_uset(v_buckets_x27_1941_, v___x_1919_, v___x_1942_);
if (v_isShared_1906_ == 0)
{
lean_ctor_set(v___x_1905_, 1, v___x_1943_);
v___x_1945_ = v___x_1905_;
goto v_reusejp_1944_;
}
else
{
lean_object* v_reuseFailAlloc_1946_; 
v_reuseFailAlloc_1946_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1946_, 0, v_size_1902_);
lean_ctor_set(v_reuseFailAlloc_1946_, 1, v___x_1943_);
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
}
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg___boxed(lean_object* v_m_1948_, lean_object* v_a_1949_, lean_object* v_b_1950_){
_start:
{
uint32_t v_a_boxed_1951_; lean_object* v_res_1952_; 
v_a_boxed_1951_ = lean_unbox_uint32(v_a_1949_);
lean_dec(v_a_1949_);
v_res_1952_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(v_m_1948_, v_a_boxed_1951_, v_b_1950_);
return v_res_1952_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_withVars_go___redArg___lam__0___boxed(lean_object* v_i_1953_, lean_object* v_vars_1954_, lean_object* v_fst_1955_, lean_object* v_locals_1956_, lean_object* v_sorts_1957_, lean_object* v_k_1958_, lean_object* v_x_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_){
_start:
{
uint32_t v_fst_2411__boxed_1967_; lean_object* v_res_1968_; 
v_fst_2411__boxed_1967_ = lean_unbox_uint32(v_fst_1955_);
lean_dec(v_fst_1955_);
v_res_1968_ = lp_vampireReplay_Vampire_Reconstruct_withVars_go___redArg___lam__0(v_i_1953_, v_vars_1954_, v_fst_2411__boxed_1967_, v_locals_1956_, v_sorts_1957_, v_k_1958_, v_x_1959_, v___y_1960_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_);
lean_dec(v___y_1965_);
lean_dec_ref(v___y_1964_);
lean_dec(v___y_1963_);
lean_dec_ref(v___y_1962_);
lean_dec(v___y_1961_);
lean_dec_ref(v___y_1960_);
lean_dec(v_i_1953_);
return v_res_1968_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_withVars_go___redArg(lean_object* v_sorts_1970_, lean_object* v_k_1971_, lean_object* v_i_1972_, lean_object* v_vars_1973_, lean_object* v_locals_1974_, lean_object* v_a_1975_, lean_object* v_a_1976_, lean_object* v_a_1977_, lean_object* v_a_1978_, lean_object* v_a_1979_, lean_object* v_a_1980_){
_start:
{
lean_object* v___x_1982_; uint8_t v___x_1983_; 
v___x_1982_ = lean_array_get_size(v_sorts_1970_);
v___x_1983_ = lean_nat_dec_lt(v_i_1972_, v___x_1982_);
if (v___x_1983_ == 0)
{
lean_object* v___x_1984_; 
lean_dec(v_i_1972_);
lean_dec_ref(v_sorts_1970_);
lean_inc(v_a_1980_);
lean_inc_ref(v_a_1979_);
lean_inc(v_a_1978_);
lean_inc_ref(v_a_1977_);
lean_inc(v_a_1976_);
lean_inc_ref(v_a_1975_);
v___x_1984_ = lean_apply_9(v_k_1971_, v_vars_1973_, v_locals_1974_, v_a_1975_, v_a_1976_, v_a_1977_, v_a_1978_, v_a_1979_, v_a_1980_, lean_box(0));
return v___x_1984_;
}
else
{
lean_object* v___x_1985_; lean_object* v_fst_1986_; lean_object* v_snd_1987_; lean_object* v___x_1988_; 
v___x_1985_ = lean_array_fget_borrowed(v_sorts_1970_, v_i_1972_);
v_fst_1986_ = lean_ctor_get(v___x_1985_, 0);
lean_inc(v_fst_1986_);
v_snd_1987_ = lean_ctor_get(v___x_1985_, 1);
lean_inc(v_snd_1987_);
v___x_1988_ = lp_vampireReplay_Vampire_Reconstruct_sortType(v_snd_1987_, v_a_1975_, v_a_1976_, v_a_1977_, v_a_1978_, v_a_1979_, v_a_1980_);
if (lean_obj_tag(v___x_1988_) == 0)
{
lean_object* v_a_1989_; lean_object* v___f_1990_; lean_object* v___x_1991_; uint32_t v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; 
v_a_1989_ = lean_ctor_get(v___x_1988_, 0);
lean_inc(v_a_1989_);
lean_dec_ref_known(v___x_1988_, 1);
lean_inc(v_fst_1986_);
v___f_1990_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_withVars_go___redArg___lam__0___boxed), 14, 6);
lean_closure_set(v___f_1990_, 0, v_i_1972_);
lean_closure_set(v___f_1990_, 1, v_vars_1973_);
lean_closure_set(v___f_1990_, 2, v_fst_1986_);
lean_closure_set(v___f_1990_, 3, v_locals_1974_);
lean_closure_set(v___f_1990_, 4, v_sorts_1970_);
lean_closure_set(v___f_1990_, 5, v_k_1971_);
v___x_1991_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_withVars_go___redArg___closed__0));
v___x_1992_ = lean_unbox_uint32(v_fst_1986_);
lean_dec(v_fst_1986_);
v___x_1993_ = lean_uint32_to_nat(v___x_1992_);
v___x_1994_ = l_Nat_reprFast(v___x_1993_);
v___x_1995_ = lean_string_append(v___x_1991_, v___x_1994_);
lean_dec_ref(v___x_1994_);
v___x_1996_ = lean_box(0);
v___x_1997_ = l_Lean_Name_str___override(v___x_1996_, v___x_1995_);
v___x_1998_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_1997_, v_a_1989_, v___f_1990_, v_a_1975_, v_a_1976_, v_a_1977_, v_a_1978_, v_a_1979_, v_a_1980_);
return v___x_1998_;
}
else
{
lean_object* v_a_1999_; lean_object* v___x_2001_; uint8_t v_isShared_2002_; uint8_t v_isSharedCheck_2006_; 
lean_dec(v_fst_1986_);
lean_dec_ref(v_locals_1974_);
lean_dec_ref(v_vars_1973_);
lean_dec(v_i_1972_);
lean_dec_ref(v_k_1971_);
lean_dec_ref(v_sorts_1970_);
v_a_1999_ = lean_ctor_get(v___x_1988_, 0);
v_isSharedCheck_2006_ = !lean_is_exclusive(v___x_1988_);
if (v_isSharedCheck_2006_ == 0)
{
v___x_2001_ = v___x_1988_;
v_isShared_2002_ = v_isSharedCheck_2006_;
goto v_resetjp_2000_;
}
else
{
lean_inc(v_a_1999_);
lean_dec(v___x_1988_);
v___x_2001_ = lean_box(0);
v_isShared_2002_ = v_isSharedCheck_2006_;
goto v_resetjp_2000_;
}
v_resetjp_2000_:
{
lean_object* v___x_2004_; 
if (v_isShared_2002_ == 0)
{
v___x_2004_ = v___x_2001_;
goto v_reusejp_2003_;
}
else
{
lean_object* v_reuseFailAlloc_2005_; 
v_reuseFailAlloc_2005_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2005_, 0, v_a_1999_);
v___x_2004_ = v_reuseFailAlloc_2005_;
goto v_reusejp_2003_;
}
v_reusejp_2003_:
{
return v___x_2004_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_withVars_go___redArg___lam__0(lean_object* v_i_2007_, lean_object* v_vars_2008_, uint32_t v_fst_2009_, lean_object* v_locals_2010_, lean_object* v_sorts_2011_, lean_object* v_k_2012_, lean_object* v_x_2013_, lean_object* v___y_2014_, lean_object* v___y_2015_, lean_object* v___y_2016_, lean_object* v___y_2017_, lean_object* v___y_2018_, lean_object* v___y_2019_){
_start:
{
lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; 
v___x_2021_ = lean_unsigned_to_nat(1u);
v___x_2022_ = lean_nat_add(v_i_2007_, v___x_2021_);
lean_inc_ref(v_x_2013_);
v___x_2023_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(v_vars_2008_, v_fst_2009_, v_x_2013_);
v___x_2024_ = lean_array_push(v_locals_2010_, v_x_2013_);
v___x_2025_ = lp_vampireReplay_Vampire_Reconstruct_withVars_go___redArg(v_sorts_2011_, v_k_2012_, v___x_2022_, v___x_2023_, v___x_2024_, v___y_2014_, v___y_2015_, v___y_2016_, v___y_2017_, v___y_2018_, v___y_2019_);
return v___x_2025_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_withVars_go___redArg___boxed(lean_object* v_sorts_2026_, lean_object* v_k_2027_, lean_object* v_i_2028_, lean_object* v_vars_2029_, lean_object* v_locals_2030_, lean_object* v_a_2031_, lean_object* v_a_2032_, lean_object* v_a_2033_, lean_object* v_a_2034_, lean_object* v_a_2035_, lean_object* v_a_2036_, lean_object* v_a_2037_){
_start:
{
lean_object* v_res_2038_; 
v_res_2038_ = lp_vampireReplay_Vampire_Reconstruct_withVars_go___redArg(v_sorts_2026_, v_k_2027_, v_i_2028_, v_vars_2029_, v_locals_2030_, v_a_2031_, v_a_2032_, v_a_2033_, v_a_2034_, v_a_2035_, v_a_2036_);
lean_dec(v_a_2036_);
lean_dec_ref(v_a_2035_);
lean_dec(v_a_2034_);
lean_dec_ref(v_a_2033_);
lean_dec(v_a_2032_);
lean_dec_ref(v_a_2031_);
return v_res_2038_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_withVars_go(lean_object* v_00_u03b1_2039_, lean_object* v_sorts_2040_, lean_object* v_k_2041_, lean_object* v_i_2042_, lean_object* v_vars_2043_, lean_object* v_locals_2044_, lean_object* v_a_2045_, lean_object* v_a_2046_, lean_object* v_a_2047_, lean_object* v_a_2048_, lean_object* v_a_2049_, lean_object* v_a_2050_){
_start:
{
lean_object* v___x_2052_; 
v___x_2052_ = lp_vampireReplay_Vampire_Reconstruct_withVars_go___redArg(v_sorts_2040_, v_k_2041_, v_i_2042_, v_vars_2043_, v_locals_2044_, v_a_2045_, v_a_2046_, v_a_2047_, v_a_2048_, v_a_2049_, v_a_2050_);
return v___x_2052_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_withVars_go___boxed(lean_object* v_00_u03b1_2053_, lean_object* v_sorts_2054_, lean_object* v_k_2055_, lean_object* v_i_2056_, lean_object* v_vars_2057_, lean_object* v_locals_2058_, lean_object* v_a_2059_, lean_object* v_a_2060_, lean_object* v_a_2061_, lean_object* v_a_2062_, lean_object* v_a_2063_, lean_object* v_a_2064_, lean_object* v_a_2065_){
_start:
{
lean_object* v_res_2066_; 
v_res_2066_ = lp_vampireReplay_Vampire_Reconstruct_withVars_go(v_00_u03b1_2053_, v_sorts_2054_, v_k_2055_, v_i_2056_, v_vars_2057_, v_locals_2058_, v_a_2059_, v_a_2060_, v_a_2061_, v_a_2062_, v_a_2063_, v_a_2064_);
lean_dec(v_a_2064_);
lean_dec_ref(v_a_2063_);
lean_dec(v_a_2062_);
lean_dec_ref(v_a_2061_);
lean_dec(v_a_2060_);
lean_dec_ref(v_a_2059_);
return v_res_2066_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0(lean_object* v_00_u03b2_2067_, lean_object* v_m_2068_, uint32_t v_a_2069_, lean_object* v_b_2070_){
_start:
{
lean_object* v___x_2071_; 
v___x_2071_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(v_m_2068_, v_a_2069_, v_b_2070_);
return v___x_2071_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___boxed(lean_object* v_00_u03b2_2072_, lean_object* v_m_2073_, lean_object* v_a_2074_, lean_object* v_b_2075_){
_start:
{
uint32_t v_a_boxed_2076_; lean_object* v_res_2077_; 
v_a_boxed_2076_ = lean_unbox_uint32(v_a_2074_);
lean_dec(v_a_2074_);
v_res_2077_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0(v_00_u03b2_2072_, v_m_2073_, v_a_boxed_2076_, v_b_2075_);
return v_res_2077_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1_spec__4(lean_object* v_00_u03b1_2078_, lean_object* v_name_2079_, uint8_t v_bi_2080_, lean_object* v_type_2081_, lean_object* v_k_2082_, uint8_t v_kind_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_, lean_object* v___y_2088_, lean_object* v___y_2089_){
_start:
{
lean_object* v___x_2091_; 
v___x_2091_ = lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1_spec__4___redArg(v_name_2079_, v_bi_2080_, v_type_2081_, v_k_2082_, v_kind_2083_, v___y_2084_, v___y_2085_, v___y_2086_, v___y_2087_, v___y_2088_, v___y_2089_);
return v___x_2091_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1_spec__4___boxed(lean_object* v_00_u03b1_2092_, lean_object* v_name_2093_, lean_object* v_bi_2094_, lean_object* v_type_2095_, lean_object* v_k_2096_, lean_object* v_kind_2097_, lean_object* v___y_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_, lean_object* v___y_2104_){
_start:
{
uint8_t v_bi_boxed_2105_; uint8_t v_kind_boxed_2106_; lean_object* v_res_2107_; 
v_bi_boxed_2105_ = lean_unbox(v_bi_2094_);
v_kind_boxed_2106_ = lean_unbox(v_kind_2097_);
v_res_2107_ = lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1_spec__4(v_00_u03b1_2092_, v_name_2093_, v_bi_boxed_2105_, v_type_2095_, v_k_2096_, v_kind_boxed_2106_, v___y_2098_, v___y_2099_, v___y_2100_, v___y_2101_, v___y_2102_, v___y_2103_);
lean_dec(v___y_2103_);
lean_dec_ref(v___y_2102_);
lean_dec(v___y_2101_);
lean_dec_ref(v___y_2100_);
lean_dec(v___y_2099_);
lean_dec_ref(v___y_2098_);
return v_res_2107_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1(lean_object* v_00_u03b1_2108_, lean_object* v_name_2109_, lean_object* v_type_2110_, lean_object* v_k_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_, lean_object* v___y_2115_, lean_object* v___y_2116_, lean_object* v___y_2117_){
_start:
{
lean_object* v___x_2119_; 
v___x_2119_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v_name_2109_, v_type_2110_, v_k_2111_, v___y_2112_, v___y_2113_, v___y_2114_, v___y_2115_, v___y_2116_, v___y_2117_);
return v___x_2119_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___boxed(lean_object* v_00_u03b1_2120_, lean_object* v_name_2121_, lean_object* v_type_2122_, lean_object* v_k_2123_, lean_object* v___y_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_, lean_object* v___y_2130_){
_start:
{
lean_object* v_res_2131_; 
v_res_2131_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1(v_00_u03b1_2120_, v_name_2121_, v_type_2122_, v_k_2123_, v___y_2124_, v___y_2125_, v___y_2126_, v___y_2127_, v___y_2128_, v___y_2129_);
lean_dec(v___y_2129_);
lean_dec_ref(v___y_2128_);
lean_dec(v___y_2127_);
lean_dec_ref(v___y_2126_);
lean_dec(v___y_2125_);
lean_dec_ref(v___y_2124_);
return v_res_2131_;
}
}
LEAN_EXPORT uint8_t lp_vampireReplay_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__0(lean_object* v_00_u03b2_2132_, uint32_t v_a_2133_, lean_object* v_x_2134_){
_start:
{
uint8_t v___x_2135_; 
v___x_2135_ = lp_vampireReplay_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__0___redArg(v_a_2133_, v_x_2134_);
return v___x_2135_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2136_, lean_object* v_a_2137_, lean_object* v_x_2138_){
_start:
{
uint32_t v_a_boxed_2139_; uint8_t v_res_2140_; lean_object* v_r_2141_; 
v_a_boxed_2139_ = lean_unbox_uint32(v_a_2137_);
lean_dec(v_a_2137_);
v_res_2140_ = lp_vampireReplay_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__0(v_00_u03b2_2136_, v_a_boxed_2139_, v_x_2138_);
lean_dec(v_x_2138_);
v_r_2141_ = lean_box(v_res_2140_);
return v_r_2141_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__1(lean_object* v_00_u03b2_2142_, lean_object* v_data_2143_){
_start:
{
lean_object* v___x_2144_; 
v___x_2144_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__1___redArg(v_data_2143_);
return v___x_2144_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__2(lean_object* v_00_u03b2_2145_, uint32_t v_a_2146_, lean_object* v_b_2147_, lean_object* v_x_2148_){
_start:
{
lean_object* v___x_2149_; 
v___x_2149_ = lp_vampireReplay_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__2___redArg(v_a_2146_, v_b_2147_, v_x_2148_);
return v___x_2149_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__2___boxed(lean_object* v_00_u03b2_2150_, lean_object* v_a_2151_, lean_object* v_b_2152_, lean_object* v_x_2153_){
_start:
{
uint32_t v_a_boxed_2154_; lean_object* v_res_2155_; 
v_a_boxed_2154_ = lean_unbox_uint32(v_a_2151_);
lean_dec(v_a_2151_);
v_res_2155_ = lp_vampireReplay_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__2(v_00_u03b2_2150_, v_a_boxed_2154_, v_b_2152_, v_x_2153_);
return v_res_2155_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_2156_, lean_object* v_i_2157_, lean_object* v_source_2158_, lean_object* v_target_2159_){
_start:
{
lean_object* v___x_2160_; 
v___x_2160_ = lp_vampireReplay___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__1_spec__2___redArg(v_i_2157_, v_source_2158_, v_target_2159_);
return v___x_2160_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_2161_, lean_object* v_x_2162_, lean_object* v_x_2163_){
_start:
{
lean_object* v___x_2164_; 
v___x_2164_ = lp_vampireReplay_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__1_spec__2_spec__5___redArg(v_x_2162_, v_x_2163_);
return v___x_2164_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_withVars_go_match__1_splitter___redArg(lean_object* v_x_2165_, lean_object* v_h__1_2166_){
_start:
{
lean_object* v_fst_2167_; lean_object* v_snd_2168_; lean_object* v___x_2169_; 
v_fst_2167_ = lean_ctor_get(v_x_2165_, 0);
lean_inc(v_fst_2167_);
v_snd_2168_ = lean_ctor_get(v_x_2165_, 1);
lean_inc(v_snd_2168_);
lean_dec_ref(v_x_2165_);
v___x_2169_ = lean_apply_2(v_h__1_2166_, v_fst_2167_, v_snd_2168_);
return v___x_2169_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Stated_0__Vampire_Reconstruct_withVars_go_match__1_splitter(lean_object* v_motive_2170_, lean_object* v_x_2171_, lean_object* v_h__1_2172_){
_start:
{
lean_object* v_fst_2173_; lean_object* v_snd_2174_; lean_object* v___x_2175_; 
v_fst_2173_ = lean_ctor_get(v_x_2171_, 0);
lean_inc(v_fst_2173_);
v_snd_2174_ = lean_ctor_get(v_x_2171_, 1);
lean_inc(v_snd_2174_);
lean_dec_ref(v_x_2171_);
v___x_2175_ = lean_apply_2(v_h__1_2172_, v_fst_2173_, v_snd_2174_);
return v___x_2175_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_withVars___redArg(lean_object* v_sorts_2178_, lean_object* v_vars_2179_, lean_object* v_k_2180_, lean_object* v_a_2181_, lean_object* v_a_2182_, lean_object* v_a_2183_, lean_object* v_a_2184_, lean_object* v_a_2185_, lean_object* v_a_2186_){
_start:
{
lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; 
v___x_2188_ = lean_unsigned_to_nat(0u);
v___x_2189_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_withVars___redArg___closed__0));
v___x_2190_ = lp_vampireReplay_Vampire_Reconstruct_withVars_go___redArg(v_sorts_2178_, v_k_2180_, v___x_2188_, v_vars_2179_, v___x_2189_, v_a_2181_, v_a_2182_, v_a_2183_, v_a_2184_, v_a_2185_, v_a_2186_);
return v___x_2190_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_withVars___redArg___boxed(lean_object* v_sorts_2191_, lean_object* v_vars_2192_, lean_object* v_k_2193_, lean_object* v_a_2194_, lean_object* v_a_2195_, lean_object* v_a_2196_, lean_object* v_a_2197_, lean_object* v_a_2198_, lean_object* v_a_2199_, lean_object* v_a_2200_){
_start:
{
lean_object* v_res_2201_; 
v_res_2201_ = lp_vampireReplay_Vampire_Reconstruct_withVars___redArg(v_sorts_2191_, v_vars_2192_, v_k_2193_, v_a_2194_, v_a_2195_, v_a_2196_, v_a_2197_, v_a_2198_, v_a_2199_);
lean_dec(v_a_2199_);
lean_dec_ref(v_a_2198_);
lean_dec(v_a_2197_);
lean_dec_ref(v_a_2196_);
lean_dec(v_a_2195_);
lean_dec_ref(v_a_2194_);
return v_res_2201_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_withVars(lean_object* v_00_u03b1_2202_, lean_object* v_sorts_2203_, lean_object* v_vars_2204_, lean_object* v_k_2205_, lean_object* v_a_2206_, lean_object* v_a_2207_, lean_object* v_a_2208_, lean_object* v_a_2209_, lean_object* v_a_2210_, lean_object* v_a_2211_){
_start:
{
lean_object* v___x_2213_; 
v___x_2213_ = lp_vampireReplay_Vampire_Reconstruct_withVars___redArg(v_sorts_2203_, v_vars_2204_, v_k_2205_, v_a_2206_, v_a_2207_, v_a_2208_, v_a_2209_, v_a_2210_, v_a_2211_);
return v___x_2213_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_withVars___boxed(lean_object* v_00_u03b1_2214_, lean_object* v_sorts_2215_, lean_object* v_vars_2216_, lean_object* v_k_2217_, lean_object* v_a_2218_, lean_object* v_a_2219_, lean_object* v_a_2220_, lean_object* v_a_2221_, lean_object* v_a_2222_, lean_object* v_a_2223_, lean_object* v_a_2224_){
_start:
{
lean_object* v_res_2225_; 
v_res_2225_ = lp_vampireReplay_Vampire_Reconstruct_withVars(v_00_u03b1_2214_, v_sorts_2215_, v_vars_2216_, v_k_2217_, v_a_2218_, v_a_2219_, v_a_2220_, v_a_2221_, v_a_2222_, v_a_2223_);
lean_dec(v_a_2223_);
lean_dec_ref(v_a_2222_);
lean_dec(v_a_2221_);
lean_dec_ref(v_a_2220_);
lean_dec(v_a_2219_);
lean_dec_ref(v_a_2218_);
return v_res_2225_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___lam__4(lean_object* v_locals_2226_, lean_object* v_body_2227_, lean_object* v___y_2228_, lean_object* v___y_2229_, lean_object* v___y_2230_, lean_object* v___y_2231_, lean_object* v___y_2232_, lean_object* v___y_2233_){
_start:
{
uint8_t v___x_2235_; uint8_t v___x_2236_; uint8_t v___x_2237_; lean_object* v___x_2238_; 
v___x_2235_ = 0;
v___x_2236_ = 1;
v___x_2237_ = 1;
v___x_2238_ = l_Lean_Meta_mkForallFVars(v_locals_2226_, v_body_2227_, v___x_2235_, v___x_2236_, v___x_2236_, v___x_2237_, v___y_2230_, v___y_2231_, v___y_2232_, v___y_2233_);
return v___x_2238_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___lam__4___boxed(lean_object* v_locals_2239_, lean_object* v_body_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_, lean_object* v___y_2245_, lean_object* v___y_2246_, lean_object* v___y_2247_){
_start:
{
lean_object* v_res_2248_; 
v_res_2248_ = lp_vampireReplay_Vampire_Reconstruct_formula___lam__4(v_locals_2239_, v_body_2240_, v___y_2241_, v___y_2242_, v___y_2243_, v___y_2244_, v___y_2245_, v___y_2246_);
lean_dec(v___y_2246_);
lean_dec_ref(v___y_2245_);
lean_dec(v___y_2244_);
lean_dec_ref(v___y_2243_);
lean_dec(v___y_2242_);
lean_dec_ref(v___y_2241_);
lean_dec_ref(v_locals_2239_);
return v_res_2248_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___lam__1(lean_object* v_sub_2249_, lean_object* v_fn_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_){
_start:
{
lean_object* v___x_2258_; lean_object* v___x_2259_; 
v___x_2258_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_sub_2249_);
lean_inc(v___y_2256_);
lean_inc_ref(v___y_2255_);
lean_inc(v___y_2254_);
lean_inc_ref(v___y_2253_);
lean_inc(v___y_2252_);
lean_inc_ref(v___y_2251_);
v___x_2259_ = lean_apply_8(v_sub_2249_, v___x_2258_, v___y_2251_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_, lean_box(0));
if (lean_obj_tag(v___x_2259_) == 0)
{
lean_object* v_a_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; 
v_a_2260_ = lean_ctor_get(v___x_2259_, 0);
lean_inc(v_a_2260_);
lean_dec_ref_known(v___x_2259_, 1);
v___x_2261_ = lean_unsigned_to_nat(1u);
lean_inc(v___y_2256_);
lean_inc_ref(v___y_2255_);
lean_inc(v___y_2254_);
lean_inc_ref(v___y_2253_);
lean_inc(v___y_2252_);
lean_inc_ref(v___y_2251_);
v___x_2262_ = lean_apply_8(v_sub_2249_, v___x_2261_, v___y_2251_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_, lean_box(0));
if (lean_obj_tag(v___x_2262_) == 0)
{
lean_object* v_a_2263_; lean_object* v___x_2265_; uint8_t v_isShared_2266_; uint8_t v_isSharedCheck_2273_; 
v_a_2263_ = lean_ctor_get(v___x_2262_, 0);
v_isSharedCheck_2273_ = !lean_is_exclusive(v___x_2262_);
if (v_isSharedCheck_2273_ == 0)
{
v___x_2265_ = v___x_2262_;
v_isShared_2266_ = v_isSharedCheck_2273_;
goto v_resetjp_2264_;
}
else
{
lean_inc(v_a_2263_);
lean_dec(v___x_2262_);
v___x_2265_ = lean_box(0);
v_isShared_2266_ = v_isSharedCheck_2273_;
goto v_resetjp_2264_;
}
v_resetjp_2264_:
{
lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2271_; 
v___x_2267_ = lean_box(0);
v___x_2268_ = l_Lean_Expr_const___override(v_fn_2250_, v___x_2267_);
v___x_2269_ = l_Lean_mkAppB(v___x_2268_, v_a_2260_, v_a_2263_);
if (v_isShared_2266_ == 0)
{
lean_ctor_set(v___x_2265_, 0, v___x_2269_);
v___x_2271_ = v___x_2265_;
goto v_reusejp_2270_;
}
else
{
lean_object* v_reuseFailAlloc_2272_; 
v_reuseFailAlloc_2272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2272_, 0, v___x_2269_);
v___x_2271_ = v_reuseFailAlloc_2272_;
goto v_reusejp_2270_;
}
v_reusejp_2270_:
{
return v___x_2271_;
}
}
}
else
{
lean_dec(v_a_2260_);
lean_dec(v_fn_2250_);
return v___x_2262_;
}
}
else
{
lean_dec(v_fn_2250_);
lean_dec_ref(v_sub_2249_);
return v___x_2259_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___lam__1___boxed(lean_object* v_sub_2274_, lean_object* v_fn_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_){
_start:
{
lean_object* v_res_2283_; 
v_res_2283_ = lp_vampireReplay_Vampire_Reconstruct_formula___lam__1(v_sub_2274_, v_fn_2275_, v___y_2276_, v___y_2277_, v___y_2278_, v___y_2279_, v___y_2280_, v___y_2281_);
lean_dec(v___y_2281_);
lean_dec_ref(v___y_2280_);
lean_dec(v___y_2279_);
lean_dec_ref(v___y_2278_);
lean_dec(v___y_2277_);
lean_dec_ref(v___y_2276_);
return v_res_2283_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Vampire_Reconstruct_formula_spec__1___redArg(lean_object* v_as_2287_, size_t v_i_2288_, size_t v_stop_2289_, lean_object* v_b_2290_, lean_object* v___y_2291_, lean_object* v___y_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_){
_start:
{
uint8_t v___x_2296_; 
v___x_2296_ = lean_usize_dec_eq(v_i_2288_, v_stop_2289_);
if (v___x_2296_ == 0)
{
size_t v___x_2297_; size_t v___x_2298_; lean_object* v___y_2300_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; uint8_t v___x_2307_; uint8_t v___x_2308_; lean_object* v___x_2309_; 
v___x_2297_ = ((size_t)1ULL);
v___x_2298_ = lean_usize_sub(v_i_2288_, v___x_2297_);
v___x_2303_ = lean_array_uget_borrowed(v_as_2287_, v___x_2298_);
v___x_2304_ = lean_unsigned_to_nat(1u);
v___x_2305_ = lean_mk_empty_array_with_capacity(v___x_2304_);
lean_inc(v___x_2303_);
lean_inc_ref(v___x_2305_);
v___x_2306_ = lean_array_push(v___x_2305_, v___x_2303_);
v___x_2307_ = 1;
v___x_2308_ = 1;
v___x_2309_ = l_Lean_Meta_mkLambdaFVars(v___x_2306_, v_b_2290_, v___x_2296_, v___x_2307_, v___x_2296_, v___x_2307_, v___x_2308_, v___y_2291_, v___y_2292_, v___y_2293_, v___y_2294_);
lean_dec_ref(v___x_2306_);
if (lean_obj_tag(v___x_2309_) == 0)
{
lean_object* v_a_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; 
v_a_2310_ = lean_ctor_get(v___x_2309_, 0);
lean_inc(v_a_2310_);
lean_dec_ref_known(v___x_2309_, 1);
v___x_2311_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Vampire_Reconstruct_formula_spec__1___redArg___closed__1));
v___x_2312_ = lean_array_push(v___x_2305_, v_a_2310_);
v___x_2313_ = l_Lean_Meta_mkAppM(v___x_2311_, v___x_2312_, v___y_2291_, v___y_2292_, v___y_2293_, v___y_2294_);
v___y_2300_ = v___x_2313_;
goto v___jp_2299_;
}
else
{
lean_dec_ref(v___x_2305_);
v___y_2300_ = v___x_2309_;
goto v___jp_2299_;
}
v___jp_2299_:
{
if (lean_obj_tag(v___y_2300_) == 0)
{
lean_object* v_a_2301_; 
v_a_2301_ = lean_ctor_get(v___y_2300_, 0);
lean_inc(v_a_2301_);
lean_dec_ref_known(v___y_2300_, 1);
v_i_2288_ = v___x_2298_;
v_b_2290_ = v_a_2301_;
goto _start;
}
else
{
return v___y_2300_;
}
}
}
else
{
lean_object* v___x_2314_; 
v___x_2314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2314_, 0, v_b_2290_);
return v___x_2314_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Vampire_Reconstruct_formula_spec__1___redArg___boxed(lean_object* v_as_2315_, lean_object* v_i_2316_, lean_object* v_stop_2317_, lean_object* v_b_2318_, lean_object* v___y_2319_, lean_object* v___y_2320_, lean_object* v___y_2321_, lean_object* v___y_2322_, lean_object* v___y_2323_){
_start:
{
size_t v_i_boxed_2324_; size_t v_stop_boxed_2325_; lean_object* v_res_2326_; 
v_i_boxed_2324_ = lean_unbox_usize(v_i_2316_);
lean_dec(v_i_2316_);
v_stop_boxed_2325_ = lean_unbox_usize(v_stop_2317_);
lean_dec(v_stop_2317_);
v_res_2326_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Vampire_Reconstruct_formula_spec__1___redArg(v_as_2315_, v_i_boxed_2324_, v_stop_boxed_2325_, v_b_2318_, v___y_2319_, v___y_2320_, v___y_2321_, v___y_2322_);
lean_dec(v___y_2322_);
lean_dec_ref(v___y_2321_);
lean_dec(v___y_2320_);
lean_dec_ref(v___y_2319_);
lean_dec_ref(v_as_2315_);
return v_res_2326_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___lam__5(lean_object* v_locals_2327_, lean_object* v_body_2328_, lean_object* v___y_2329_, lean_object* v___y_2330_, lean_object* v___y_2331_, lean_object* v___y_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_){
_start:
{
lean_object* v___x_2336_; lean_object* v___x_2337_; uint8_t v___x_2338_; 
v___x_2336_ = lean_array_get_size(v_locals_2327_);
v___x_2337_ = lean_unsigned_to_nat(0u);
v___x_2338_ = lean_nat_dec_lt(v___x_2337_, v___x_2336_);
if (v___x_2338_ == 0)
{
lean_object* v___x_2339_; 
v___x_2339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2339_, 0, v_body_2328_);
return v___x_2339_;
}
else
{
size_t v___x_2340_; size_t v___x_2341_; lean_object* v___x_2342_; 
v___x_2340_ = lean_usize_of_nat(v___x_2336_);
v___x_2341_ = ((size_t)0ULL);
v___x_2342_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Vampire_Reconstruct_formula_spec__1___redArg(v_locals_2327_, v___x_2340_, v___x_2341_, v_body_2328_, v___y_2331_, v___y_2332_, v___y_2333_, v___y_2334_);
return v___x_2342_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___lam__5___boxed(lean_object* v_locals_2343_, lean_object* v_body_2344_, lean_object* v___y_2345_, lean_object* v___y_2346_, lean_object* v___y_2347_, lean_object* v___y_2348_, lean_object* v___y_2349_, lean_object* v___y_2350_, lean_object* v___y_2351_){
_start:
{
lean_object* v_res_2352_; 
v_res_2352_ = lp_vampireReplay_Vampire_Reconstruct_formula___lam__5(v_locals_2343_, v_body_2344_, v___y_2345_, v___y_2346_, v___y_2347_, v___y_2348_, v___y_2349_, v___y_2350_);
lean_dec(v___y_2350_);
lean_dec_ref(v___y_2349_);
lean_dec(v___y_2348_);
lean_dec_ref(v___y_2347_);
lean_dec(v___y_2346_);
lean_dec_ref(v___y_2345_);
lean_dec_ref(v_locals_2343_);
return v_res_2352_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_formula_spec__0(uint32_t v_x_2356_, lean_object* v_as_2357_, size_t v_sz_2358_, size_t v_i_2359_, lean_object* v_b_2360_){
_start:
{
uint8_t v___x_2361_; 
v___x_2361_ = lean_usize_dec_lt(v_i_2359_, v_sz_2358_);
if (v___x_2361_ == 0)
{
lean_inc_ref(v_b_2360_);
return v_b_2360_;
}
else
{
lean_object* v_a_2362_; lean_object* v_fst_2363_; lean_object* v___x_2364_; uint32_t v___x_2365_; uint8_t v___x_2366_; 
v_a_2362_ = lean_array_uget_borrowed(v_as_2357_, v_i_2359_);
v_fst_2363_ = lean_ctor_get(v_a_2362_, 0);
v___x_2364_ = lean_box(0);
v___x_2365_ = lean_unbox_uint32(v_fst_2363_);
v___x_2366_ = lean_uint32_dec_eq(v___x_2365_, v_x_2356_);
if (v___x_2366_ == 0)
{
lean_object* v___x_2367_; size_t v___x_2368_; size_t v___x_2369_; 
v___x_2367_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_formula_spec__0___closed__0));
v___x_2368_ = ((size_t)1ULL);
v___x_2369_ = lean_usize_add(v_i_2359_, v___x_2368_);
v_i_2359_ = v___x_2369_;
v_b_2360_ = v___x_2367_;
goto _start;
}
else
{
lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; 
lean_inc(v_a_2362_);
v___x_2371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2371_, 0, v_a_2362_);
v___x_2372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2372_, 0, v___x_2371_);
v___x_2373_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2373_, 0, v___x_2372_);
lean_ctor_set(v___x_2373_, 1, v___x_2364_);
return v___x_2373_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_formula_spec__0___boxed(lean_object* v_x_2374_, lean_object* v_as_2375_, lean_object* v_sz_2376_, lean_object* v_i_2377_, lean_object* v_b_2378_){
_start:
{
uint32_t v_x_10374__boxed_2379_; size_t v_sz_boxed_2380_; size_t v_i_boxed_2381_; lean_object* v_res_2382_; 
v_x_10374__boxed_2379_ = lean_unbox_uint32(v_x_2374_);
lean_dec(v_x_2374_);
v_sz_boxed_2380_ = lean_unbox_usize(v_sz_2376_);
lean_dec(v_sz_2376_);
v_i_boxed_2381_ = lean_unbox_usize(v_i_2377_);
lean_dec(v_i_2377_);
v_res_2382_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_formula_spec__0(v_x_10374__boxed_2379_, v_as_2375_, v_sz_boxed_2380_, v_i_boxed_2381_, v_b_2378_);
lean_dec_ref(v_b_2378_);
lean_dec_ref(v_as_2375_);
return v_res_2382_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Vampire_Reconstruct_formula_spec__2_spec__2(lean_object* v_sorts_2383_, lean_object* v_as_2384_, size_t v_i_2385_, size_t v_stop_2386_, lean_object* v_b_2387_){
_start:
{
lean_object* v___y_2389_; uint8_t v___x_2393_; 
v___x_2393_ = lean_usize_dec_eq(v_i_2385_, v_stop_2386_);
if (v___x_2393_ == 0)
{
lean_object* v___x_2394_; lean_object* v___x_2395_; size_t v_sz_2396_; size_t v___x_2397_; uint32_t v___x_2398_; lean_object* v___x_2399_; lean_object* v_fst_2400_; 
v___x_2394_ = lean_array_uget_borrowed(v_as_2384_, v_i_2385_);
v___x_2395_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_formula_spec__0___closed__0));
v_sz_2396_ = lean_array_size(v_sorts_2383_);
v___x_2397_ = ((size_t)0ULL);
v___x_2398_ = lean_unbox_uint32(v___x_2394_);
v___x_2399_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_formula_spec__0(v___x_2398_, v_sorts_2383_, v_sz_2396_, v___x_2397_, v___x_2395_);
v_fst_2400_ = lean_ctor_get(v___x_2399_, 0);
lean_inc(v_fst_2400_);
lean_dec_ref(v___x_2399_);
if (lean_obj_tag(v_fst_2400_) == 0)
{
v___y_2389_ = v_b_2387_;
goto v___jp_2388_;
}
else
{
lean_object* v_val_2401_; 
v_val_2401_ = lean_ctor_get(v_fst_2400_, 0);
lean_inc(v_val_2401_);
lean_dec_ref_known(v_fst_2400_, 1);
if (lean_obj_tag(v_val_2401_) == 0)
{
v___y_2389_ = v_b_2387_;
goto v___jp_2388_;
}
else
{
lean_object* v_val_2402_; lean_object* v_snd_2403_; lean_object* v___x_2405_; uint8_t v_isShared_2406_; uint8_t v_isSharedCheck_2411_; 
v_val_2402_ = lean_ctor_get(v_val_2401_, 0);
lean_inc(v_val_2402_);
lean_dec_ref_known(v_val_2401_, 1);
v_snd_2403_ = lean_ctor_get(v_val_2402_, 1);
v_isSharedCheck_2411_ = !lean_is_exclusive(v_val_2402_);
if (v_isSharedCheck_2411_ == 0)
{
lean_object* v_unused_2412_; 
v_unused_2412_ = lean_ctor_get(v_val_2402_, 0);
lean_dec(v_unused_2412_);
v___x_2405_ = v_val_2402_;
v_isShared_2406_ = v_isSharedCheck_2411_;
goto v_resetjp_2404_;
}
else
{
lean_inc(v_snd_2403_);
lean_dec(v_val_2402_);
v___x_2405_ = lean_box(0);
v_isShared_2406_ = v_isSharedCheck_2411_;
goto v_resetjp_2404_;
}
v_resetjp_2404_:
{
lean_object* v___x_2408_; 
lean_inc(v___x_2394_);
if (v_isShared_2406_ == 0)
{
lean_ctor_set(v___x_2405_, 0, v___x_2394_);
v___x_2408_ = v___x_2405_;
goto v_reusejp_2407_;
}
else
{
lean_object* v_reuseFailAlloc_2410_; 
v_reuseFailAlloc_2410_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2410_, 0, v___x_2394_);
lean_ctor_set(v_reuseFailAlloc_2410_, 1, v_snd_2403_);
v___x_2408_ = v_reuseFailAlloc_2410_;
goto v_reusejp_2407_;
}
v_reusejp_2407_:
{
lean_object* v___x_2409_; 
v___x_2409_ = lean_array_push(v_b_2387_, v___x_2408_);
v___y_2389_ = v___x_2409_;
goto v___jp_2388_;
}
}
}
}
}
else
{
return v_b_2387_;
}
v___jp_2388_:
{
size_t v___x_2390_; size_t v___x_2391_; 
v___x_2390_ = ((size_t)1ULL);
v___x_2391_ = lean_usize_add(v_i_2385_, v___x_2390_);
v_i_2385_ = v___x_2391_;
v_b_2387_ = v___y_2389_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Vampire_Reconstruct_formula_spec__2_spec__2___boxed(lean_object* v_sorts_2413_, lean_object* v_as_2414_, lean_object* v_i_2415_, lean_object* v_stop_2416_, lean_object* v_b_2417_){
_start:
{
size_t v_i_boxed_2418_; size_t v_stop_boxed_2419_; lean_object* v_res_2420_; 
v_i_boxed_2418_ = lean_unbox_usize(v_i_2415_);
lean_dec(v_i_2415_);
v_stop_boxed_2419_ = lean_unbox_usize(v_stop_2416_);
lean_dec(v_stop_2416_);
v_res_2420_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Vampire_Reconstruct_formula_spec__2_spec__2(v_sorts_2413_, v_as_2414_, v_i_boxed_2418_, v_stop_boxed_2419_, v_b_2417_);
lean_dec_ref(v_as_2414_);
lean_dec_ref(v_sorts_2413_);
return v_res_2420_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Array_filterMapM___at___00Vampire_Reconstruct_formula_spec__2(lean_object* v_sorts_2423_, lean_object* v_as_2424_, lean_object* v_start_2425_, lean_object* v_stop_2426_){
_start:
{
lean_object* v___x_2427_; uint8_t v___x_2428_; 
v___x_2427_ = ((lean_object*)(lp_vampireReplay_Array_filterMapM___at___00Vampire_Reconstruct_formula_spec__2___closed__0));
v___x_2428_ = lean_nat_dec_lt(v_start_2425_, v_stop_2426_);
if (v___x_2428_ == 0)
{
return v___x_2427_;
}
else
{
lean_object* v___x_2429_; uint8_t v___x_2430_; 
v___x_2429_ = lean_array_get_size(v_as_2424_);
v___x_2430_ = lean_nat_dec_le(v_stop_2426_, v___x_2429_);
if (v___x_2430_ == 0)
{
uint8_t v___x_2431_; 
v___x_2431_ = lean_nat_dec_lt(v_start_2425_, v___x_2429_);
if (v___x_2431_ == 0)
{
return v___x_2427_;
}
else
{
size_t v___x_2432_; size_t v___x_2433_; lean_object* v___x_2434_; 
v___x_2432_ = lean_usize_of_nat(v_start_2425_);
v___x_2433_ = lean_usize_of_nat(v___x_2429_);
v___x_2434_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Vampire_Reconstruct_formula_spec__2_spec__2(v_sorts_2423_, v_as_2424_, v___x_2432_, v___x_2433_, v___x_2427_);
return v___x_2434_;
}
}
else
{
size_t v___x_2435_; size_t v___x_2436_; lean_object* v___x_2437_; 
v___x_2435_ = lean_usize_of_nat(v_start_2425_);
v___x_2436_ = lean_usize_of_nat(v_stop_2426_);
v___x_2437_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Vampire_Reconstruct_formula_spec__2_spec__2(v_sorts_2423_, v_as_2424_, v___x_2435_, v___x_2436_, v___x_2427_);
return v___x_2437_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Array_filterMapM___at___00Vampire_Reconstruct_formula_spec__2___boxed(lean_object* v_sorts_2438_, lean_object* v_as_2439_, lean_object* v_start_2440_, lean_object* v_stop_2441_){
_start:
{
lean_object* v_res_2442_; 
v_res_2442_ = lp_vampireReplay_Array_filterMapM___at___00Vampire_Reconstruct_formula_spec__2(v_sorts_2438_, v_as_2439_, v_start_2440_, v_stop_2441_);
lean_dec(v_stop_2441_);
lean_dec(v_start_2440_);
lean_dec_ref(v_as_2439_);
lean_dec_ref(v_sorts_2438_);
return v_res_2442_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_formula___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2444_; lean_object* v___x_2445_; 
v___x_2444_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_formula___lam__0___closed__0));
v___x_2445_ = l_Lean_stringToMessageData(v___x_2444_);
return v___x_2445_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___lam__0(lean_object* v_f_2446_, lean_object* v_sorts_2447_, lean_object* v_vars_2448_, lean_object* v_i_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_, lean_object* v___y_2454_, lean_object* v___y_2455_){
_start:
{
lean_object* v___x_2457_; lean_object* v___x_2458_; uint8_t v___x_2459_; 
v___x_2457_ = lp_vampireReplay_Vampire_Formula_subformulas(v_f_2446_);
v___x_2458_ = lean_array_get_size(v___x_2457_);
v___x_2459_ = lean_nat_dec_lt(v_i_2449_, v___x_2458_);
if (v___x_2459_ == 0)
{
lean_object* v___x_2460_; lean_object* v___x_2461_; 
lean_dec_ref(v___x_2457_);
lean_dec_ref(v_vars_2448_);
lean_dec_ref(v_sorts_2447_);
v___x_2460_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_formula___lam__0___closed__1, &lp_vampireReplay_Vampire_Reconstruct_formula___lam__0___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_formula___lam__0___closed__1);
v___x_2461_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2460_, v___y_2452_, v___y_2453_, v___y_2454_, v___y_2455_);
return v___x_2461_;
}
else
{
lean_object* v___x_2462_; lean_object* v___x_2463_; 
v___x_2462_ = lean_array_fget(v___x_2457_, v_i_2449_);
lean_dec_ref(v___x_2457_);
v___x_2463_ = lp_vampireReplay_Vampire_Reconstruct_formula(v_sorts_2447_, v_vars_2448_, v___x_2462_, v___y_2450_, v___y_2451_, v___y_2452_, v___y_2453_, v___y_2454_, v___y_2455_);
return v___x_2463_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___lam__0___boxed(lean_object* v_f_2464_, lean_object* v_sorts_2465_, lean_object* v_vars_2466_, lean_object* v_i_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_, lean_object* v___y_2471_, lean_object* v___y_2472_, lean_object* v___y_2473_, lean_object* v___y_2474_){
_start:
{
lean_object* v_res_2475_; 
v_res_2475_ = lp_vampireReplay_Vampire_Reconstruct_formula___lam__0(v_f_2464_, v_sorts_2465_, v_vars_2466_, v_i_2467_, v___y_2468_, v___y_2469_, v___y_2470_, v___y_2471_, v___y_2472_, v___y_2473_);
lean_dec(v___y_2473_);
lean_dec_ref(v___y_2472_);
lean_dec(v___y_2471_);
lean_dec_ref(v___y_2470_);
lean_dec(v___y_2469_);
lean_dec_ref(v___y_2468_);
lean_dec(v_i_2467_);
return v_res_2475_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_formula___closed__1(void){
_start:
{
lean_object* v___x_2477_; lean_object* v___x_2478_; 
v___x_2477_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_formula___closed__0));
v___x_2478_ = l_Lean_stringToMessageData(v___x_2477_);
return v___x_2478_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_formula___closed__4(void){
_start:
{
lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; 
v___x_2482_ = lean_box(0);
v___x_2483_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_formula___closed__3));
v___x_2484_ = l_Lean_Expr_const___override(v___x_2483_, v___x_2482_);
return v___x_2484_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_formula___closed__5(void){
_start:
{
lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; 
v___x_2485_ = lean_box(0);
v___x_2486_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_clause___closed__1));
v___x_2487_ = l_Lean_Expr_const___override(v___x_2486_, v___x_2485_);
return v___x_2487_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_formula_spec__3(lean_object* v_sorts_2488_, lean_object* v_vars_2489_, size_t v_sz_2490_, size_t v_i_2491_, lean_object* v_bs_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_, lean_object* v___y_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_){
_start:
{
uint8_t v___x_2500_; 
v___x_2500_ = lean_usize_dec_lt(v_i_2491_, v_sz_2490_);
if (v___x_2500_ == 0)
{
lean_object* v___x_2501_; 
lean_dec_ref(v_vars_2489_);
lean_dec_ref(v_sorts_2488_);
v___x_2501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2501_, 0, v_bs_2492_);
return v___x_2501_;
}
else
{
lean_object* v_v_2502_; lean_object* v___x_2503_; 
v_v_2502_ = lean_array_uget_borrowed(v_bs_2492_, v_i_2491_);
lean_inc(v_v_2502_);
lean_inc_ref(v_vars_2489_);
lean_inc_ref(v_sorts_2488_);
v___x_2503_ = lp_vampireReplay_Vampire_Reconstruct_formula(v_sorts_2488_, v_vars_2489_, v_v_2502_, v___y_2493_, v___y_2494_, v___y_2495_, v___y_2496_, v___y_2497_, v___y_2498_);
if (lean_obj_tag(v___x_2503_) == 0)
{
lean_object* v_a_2504_; lean_object* v___x_2505_; lean_object* v_bs_x27_2506_; size_t v___x_2507_; size_t v___x_2508_; lean_object* v___x_2509_; 
v_a_2504_ = lean_ctor_get(v___x_2503_, 0);
lean_inc(v_a_2504_);
lean_dec_ref_known(v___x_2503_, 1);
v___x_2505_ = lean_unsigned_to_nat(0u);
v_bs_x27_2506_ = lean_array_uset(v_bs_2492_, v_i_2491_, v___x_2505_);
v___x_2507_ = ((size_t)1ULL);
v___x_2508_ = lean_usize_add(v_i_2491_, v___x_2507_);
v___x_2509_ = lean_array_uset(v_bs_x27_2506_, v_i_2491_, v_a_2504_);
v_i_2491_ = v___x_2508_;
v_bs_2492_ = v___x_2509_;
goto _start;
}
else
{
lean_object* v_a_2511_; lean_object* v___x_2513_; uint8_t v_isShared_2514_; uint8_t v_isSharedCheck_2518_; 
lean_dec_ref(v_bs_2492_);
lean_dec_ref(v_vars_2489_);
lean_dec_ref(v_sorts_2488_);
v_a_2511_ = lean_ctor_get(v___x_2503_, 0);
v_isSharedCheck_2518_ = !lean_is_exclusive(v___x_2503_);
if (v_isSharedCheck_2518_ == 0)
{
v___x_2513_ = v___x_2503_;
v_isShared_2514_ = v_isSharedCheck_2518_;
goto v_resetjp_2512_;
}
else
{
lean_inc(v_a_2511_);
lean_dec(v___x_2503_);
v___x_2513_ = lean_box(0);
v_isShared_2514_ = v_isSharedCheck_2518_;
goto v_resetjp_2512_;
}
v_resetjp_2512_:
{
lean_object* v___x_2516_; 
if (v_isShared_2514_ == 0)
{
v___x_2516_ = v___x_2513_;
goto v_reusejp_2515_;
}
else
{
lean_object* v_reuseFailAlloc_2517_; 
v_reuseFailAlloc_2517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2517_, 0, v_a_2511_);
v___x_2516_ = v_reuseFailAlloc_2517_;
goto v_reusejp_2515_;
}
v_reusejp_2515_:
{
return v___x_2516_;
}
}
}
}
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_formula___closed__13(void){
_start:
{
lean_object* v___x_2528_; lean_object* v___x_2529_; 
v___x_2528_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_formula___closed__12));
v___x_2529_ = l_Lean_stringToMessageData(v___x_2528_);
return v___x_2529_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_formula___closed__15(void){
_start:
{
lean_object* v___x_2531_; lean_object* v___x_2532_; 
v___x_2531_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_formula___closed__14));
v___x_2532_ = l_Lean_stringToMessageData(v___x_2531_);
return v___x_2532_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_formula(lean_object* v_sorts_2533_, lean_object* v_vars_2534_, lean_object* v_f_2535_, lean_object* v_a_2536_, lean_object* v_a_2537_, lean_object* v_a_2538_, lean_object* v_a_2539_, lean_object* v_a_2540_, lean_object* v_a_2541_){
_start:
{
lean_object* v___x_2543_; 
v___x_2543_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v_f_2535_, v_a_2538_, v_a_2539_, v_a_2540_, v_a_2541_);
if (lean_obj_tag(v___x_2543_) == 0)
{
lean_object* v_a_2544_; lean_object* v___x_2546_; uint8_t v_isShared_2547_; uint8_t v_isSharedCheck_2675_; 
v_a_2544_ = lean_ctor_get(v___x_2543_, 0);
v_isSharedCheck_2675_ = !lean_is_exclusive(v___x_2543_);
if (v_isSharedCheck_2675_ == 0)
{
v___x_2546_ = v___x_2543_;
v_isShared_2547_ = v_isSharedCheck_2675_;
goto v_resetjp_2545_;
}
else
{
lean_inc(v_a_2544_);
lean_dec(v___x_2543_);
v___x_2546_ = lean_box(0);
v_isShared_2547_ = v_isSharedCheck_2675_;
goto v_resetjp_2545_;
}
v_resetjp_2545_:
{
lean_object* v_sub_2548_; lean_object* v___x_2549_; uint8_t v___x_2550_; 
lean_inc_ref(v_vars_2534_);
lean_inc_ref(v_sorts_2533_);
lean_inc_ref_n(v_f_2535_, 2);
v_sub_2548_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_formula___lam__0___boxed), 11, 3);
lean_closure_set(v_sub_2548_, 0, v_f_2535_);
lean_closure_set(v_sub_2548_, 1, v_sorts_2533_);
lean_closure_set(v_sub_2548_, 2, v_vars_2534_);
v___x_2549_ = lp_vampireReplay_Vampire_Formula_subformulas(v_f_2535_);
v___x_2550_ = lean_unbox(v_a_2544_);
switch(v___x_2550_)
{
case 0:
{
lean_object* v___x_2551_; 
lean_dec_ref(v___x_2549_);
lean_dec_ref(v_sub_2548_);
lean_del_object(v___x_2546_);
lean_dec(v_a_2544_);
lean_dec_ref(v_sorts_2533_);
v___x_2551_ = lp_vampireReplay_Vampire_Formula_literal_x3f(v_f_2535_);
if (lean_obj_tag(v___x_2551_) == 1)
{
lean_object* v_val_2552_; lean_object* v___x_2553_; 
v_val_2552_ = lean_ctor_get(v___x_2551_, 0);
lean_inc(v_val_2552_);
lean_dec_ref_known(v___x_2551_, 1);
v___x_2553_ = lp_vampireReplay_Vampire_Reconstruct_literal(v_vars_2534_, v_val_2552_, v_a_2536_, v_a_2537_, v_a_2538_, v_a_2539_, v_a_2540_, v_a_2541_);
lean_dec_ref(v_vars_2534_);
if (lean_obj_tag(v___x_2553_) == 0)
{
lean_object* v_a_2554_; lean_object* v___x_2555_; 
v_a_2554_ = lean_ctor_get(v___x_2553_, 0);
lean_inc(v_a_2554_);
lean_dec_ref_known(v___x_2553_, 1);
v___x_2555_ = lp_vampireReplay_Vampire_Reconstruct_shared___redArg(v_a_2554_, v_a_2537_);
return v___x_2555_;
}
else
{
return v___x_2553_;
}
}
else
{
lean_object* v___x_2556_; lean_object* v___x_2557_; 
lean_dec(v___x_2551_);
lean_dec_ref(v_vars_2534_);
v___x_2556_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_formula___closed__1, &lp_vampireReplay_Vampire_Reconstruct_formula___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_formula___closed__1);
v___x_2557_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2556_, v_a_2538_, v_a_2539_, v_a_2540_, v_a_2541_);
if (lean_obj_tag(v___x_2557_) == 0)
{
lean_object* v_a_2558_; lean_object* v___x_2559_; 
v_a_2558_ = lean_ctor_get(v___x_2557_, 0);
lean_inc(v_a_2558_);
lean_dec_ref_known(v___x_2557_, 1);
v___x_2559_ = lp_vampireReplay_Vampire_Reconstruct_shared___redArg(v_a_2558_, v_a_2537_);
return v___x_2559_;
}
else
{
return v___x_2557_;
}
}
}
case 11:
{
lean_object* v___x_2560_; lean_object* v___x_2562_; 
lean_dec_ref(v___x_2549_);
lean_dec_ref(v_sub_2548_);
lean_dec(v_a_2544_);
lean_dec_ref(v_f_2535_);
lean_dec_ref(v_vars_2534_);
lean_dec_ref(v_sorts_2533_);
v___x_2560_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_formula___closed__4, &lp_vampireReplay_Vampire_Reconstruct_formula___closed__4_once, _init_lp_vampireReplay_Vampire_Reconstruct_formula___closed__4);
if (v_isShared_2547_ == 0)
{
lean_ctor_set(v___x_2546_, 0, v___x_2560_);
v___x_2562_ = v___x_2546_;
goto v_reusejp_2561_;
}
else
{
lean_object* v_reuseFailAlloc_2563_; 
v_reuseFailAlloc_2563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2563_, 0, v___x_2560_);
v___x_2562_ = v_reuseFailAlloc_2563_;
goto v_reusejp_2561_;
}
v_reusejp_2561_:
{
return v___x_2562_;
}
}
case 10:
{
lean_object* v___x_2564_; lean_object* v___x_2566_; 
lean_dec_ref(v___x_2549_);
lean_dec_ref(v_sub_2548_);
lean_dec(v_a_2544_);
lean_dec_ref(v_f_2535_);
lean_dec_ref(v_vars_2534_);
lean_dec_ref(v_sorts_2533_);
v___x_2564_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_formula___closed__5, &lp_vampireReplay_Vampire_Reconstruct_formula___closed__5_once, _init_lp_vampireReplay_Vampire_Reconstruct_formula___closed__5);
if (v_isShared_2547_ == 0)
{
lean_ctor_set(v___x_2546_, 0, v___x_2564_);
v___x_2566_ = v___x_2546_;
goto v_reusejp_2565_;
}
else
{
lean_object* v_reuseFailAlloc_2567_; 
v_reuseFailAlloc_2567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2567_, 0, v___x_2564_);
v___x_2566_ = v_reuseFailAlloc_2567_;
goto v_reusejp_2565_;
}
v_reusejp_2565_:
{
return v___x_2566_;
}
}
case 6:
{
lean_object* v___x_2568_; lean_object* v___x_2569_; 
lean_dec_ref(v___x_2549_);
lean_dec_ref(v_sub_2548_);
lean_del_object(v___x_2546_);
lean_dec(v_a_2544_);
v___x_2568_ = lean_unsigned_to_nat(0u);
v___x_2569_ = lp_vampireReplay_Vampire_Reconstruct_formula___lam__0(v_f_2535_, v_sorts_2533_, v_vars_2534_, v___x_2568_, v_a_2536_, v_a_2537_, v_a_2538_, v_a_2539_, v_a_2540_, v_a_2541_);
if (lean_obj_tag(v___x_2569_) == 0)
{
lean_object* v_a_2570_; lean_object* v___x_2572_; uint8_t v_isShared_2573_; uint8_t v_isSharedCheck_2579_; 
v_a_2570_ = lean_ctor_get(v___x_2569_, 0);
v_isSharedCheck_2579_ = !lean_is_exclusive(v___x_2569_);
if (v_isSharedCheck_2579_ == 0)
{
v___x_2572_ = v___x_2569_;
v_isShared_2573_ = v_isSharedCheck_2579_;
goto v_resetjp_2571_;
}
else
{
lean_inc(v_a_2570_);
lean_dec(v___x_2569_);
v___x_2572_ = lean_box(0);
v_isShared_2573_ = v_isSharedCheck_2579_;
goto v_resetjp_2571_;
}
v_resetjp_2571_:
{
lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2577_; 
v___x_2574_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_literal___closed__2, &lp_vampireReplay_Vampire_Reconstruct_literal___closed__2_once, _init_lp_vampireReplay_Vampire_Reconstruct_literal___closed__2);
v___x_2575_ = l_Lean_Expr_app___override(v___x_2574_, v_a_2570_);
if (v_isShared_2573_ == 0)
{
lean_ctor_set(v___x_2572_, 0, v___x_2575_);
v___x_2577_ = v___x_2572_;
goto v_reusejp_2576_;
}
else
{
lean_object* v_reuseFailAlloc_2578_; 
v_reuseFailAlloc_2578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2578_, 0, v___x_2575_);
v___x_2577_ = v_reuseFailAlloc_2578_;
goto v_reusejp_2576_;
}
v_reusejp_2576_:
{
return v___x_2577_;
}
}
}
else
{
return v___x_2569_;
}
}
case 1:
{
size_t v_sz_2580_; size_t v___x_2581_; lean_object* v___x_2582_; 
lean_dec_ref(v_sub_2548_);
lean_del_object(v___x_2546_);
lean_dec(v_a_2544_);
lean_dec_ref(v_f_2535_);
v_sz_2580_ = lean_array_size(v___x_2549_);
v___x_2581_ = ((size_t)0ULL);
v___x_2582_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_formula_spec__3(v_sorts_2533_, v_vars_2534_, v_sz_2580_, v___x_2581_, v___x_2549_, v_a_2536_, v_a_2537_, v_a_2538_, v_a_2539_, v_a_2540_, v_a_2541_);
if (lean_obj_tag(v___x_2582_) == 0)
{
lean_object* v_a_2583_; lean_object* v___x_2585_; uint8_t v_isShared_2586_; uint8_t v_isSharedCheck_2593_; 
v_a_2583_ = lean_ctor_get(v___x_2582_, 0);
v_isSharedCheck_2593_ = !lean_is_exclusive(v___x_2582_);
if (v_isSharedCheck_2593_ == 0)
{
v___x_2585_ = v___x_2582_;
v_isShared_2586_ = v_isSharedCheck_2593_;
goto v_resetjp_2584_;
}
else
{
lean_inc(v_a_2583_);
lean_dec(v___x_2582_);
v___x_2585_ = lean_box(0);
v_isShared_2586_ = v_isSharedCheck_2593_;
goto v_resetjp_2584_;
}
v_resetjp_2584_:
{
lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2591_; 
v___x_2587_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_formula___closed__7));
v___x_2588_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_formula___closed__3));
v___x_2589_ = lp_vampireReplay_Vampire_Reconstruct_junction(v___x_2587_, v___x_2588_, v_a_2583_);
if (v_isShared_2586_ == 0)
{
lean_ctor_set(v___x_2585_, 0, v___x_2589_);
v___x_2591_ = v___x_2585_;
goto v_reusejp_2590_;
}
else
{
lean_object* v_reuseFailAlloc_2592_; 
v_reuseFailAlloc_2592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2592_, 0, v___x_2589_);
v___x_2591_ = v_reuseFailAlloc_2592_;
goto v_reusejp_2590_;
}
v_reusejp_2590_:
{
return v___x_2591_;
}
}
}
else
{
lean_object* v_a_2594_; lean_object* v___x_2596_; uint8_t v_isShared_2597_; uint8_t v_isSharedCheck_2601_; 
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
case 2:
{
size_t v_sz_2602_; size_t v___x_2603_; lean_object* v___x_2604_; 
lean_dec_ref(v_sub_2548_);
lean_del_object(v___x_2546_);
lean_dec(v_a_2544_);
lean_dec_ref(v_f_2535_);
v_sz_2602_ = lean_array_size(v___x_2549_);
v___x_2603_ = ((size_t)0ULL);
v___x_2604_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_formula_spec__3(v_sorts_2533_, v_vars_2534_, v_sz_2602_, v___x_2603_, v___x_2549_, v_a_2536_, v_a_2537_, v_a_2538_, v_a_2539_, v_a_2540_, v_a_2541_);
if (lean_obj_tag(v___x_2604_) == 0)
{
lean_object* v_a_2605_; lean_object* v___x_2607_; uint8_t v_isShared_2608_; uint8_t v_isSharedCheck_2615_; 
v_a_2605_ = lean_ctor_get(v___x_2604_, 0);
v_isSharedCheck_2615_ = !lean_is_exclusive(v___x_2604_);
if (v_isSharedCheck_2615_ == 0)
{
v___x_2607_ = v___x_2604_;
v_isShared_2608_ = v_isSharedCheck_2615_;
goto v_resetjp_2606_;
}
else
{
lean_inc(v_a_2605_);
lean_dec(v___x_2604_);
v___x_2607_ = lean_box(0);
v_isShared_2608_ = v_isSharedCheck_2615_;
goto v_resetjp_2606_;
}
v_resetjp_2606_:
{
lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2613_; 
v___x_2609_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_sharedClause___redArg___closed__1));
v___x_2610_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_clause___closed__1));
v___x_2611_ = lp_vampireReplay_Vampire_Reconstruct_junction(v___x_2609_, v___x_2610_, v_a_2605_);
if (v_isShared_2608_ == 0)
{
lean_ctor_set(v___x_2607_, 0, v___x_2611_);
v___x_2613_ = v___x_2607_;
goto v_reusejp_2612_;
}
else
{
lean_object* v_reuseFailAlloc_2614_; 
v_reuseFailAlloc_2614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2614_, 0, v___x_2611_);
v___x_2613_ = v_reuseFailAlloc_2614_;
goto v_reusejp_2612_;
}
v_reusejp_2612_:
{
return v___x_2613_;
}
}
}
else
{
lean_object* v_a_2616_; lean_object* v___x_2618_; uint8_t v_isShared_2619_; uint8_t v_isSharedCheck_2623_; 
v_a_2616_ = lean_ctor_get(v___x_2604_, 0);
v_isSharedCheck_2623_ = !lean_is_exclusive(v___x_2604_);
if (v_isSharedCheck_2623_ == 0)
{
v___x_2618_ = v___x_2604_;
v_isShared_2619_ = v_isSharedCheck_2623_;
goto v_resetjp_2617_;
}
else
{
lean_inc(v_a_2616_);
lean_dec(v___x_2604_);
v___x_2618_ = lean_box(0);
v_isShared_2619_ = v_isSharedCheck_2623_;
goto v_resetjp_2617_;
}
v_resetjp_2617_:
{
lean_object* v___x_2621_; 
if (v_isShared_2619_ == 0)
{
v___x_2621_ = v___x_2618_;
goto v_reusejp_2620_;
}
else
{
lean_object* v_reuseFailAlloc_2622_; 
v_reuseFailAlloc_2622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2622_, 0, v_a_2616_);
v___x_2621_ = v_reuseFailAlloc_2622_;
goto v_reusejp_2620_;
}
v_reusejp_2620_:
{
return v___x_2621_;
}
}
}
}
case 3:
{
lean_object* v___x_2624_; lean_object* v___x_2625_; 
lean_dec_ref(v___x_2549_);
lean_dec_ref(v_sub_2548_);
lean_del_object(v___x_2546_);
lean_dec(v_a_2544_);
v___x_2624_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_vars_2534_);
lean_inc_ref(v_sorts_2533_);
lean_inc_ref(v_f_2535_);
v___x_2625_ = lp_vampireReplay_Vampire_Reconstruct_formula___lam__0(v_f_2535_, v_sorts_2533_, v_vars_2534_, v___x_2624_, v_a_2536_, v_a_2537_, v_a_2538_, v_a_2539_, v_a_2540_, v_a_2541_);
if (lean_obj_tag(v___x_2625_) == 0)
{
lean_object* v_a_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; 
v_a_2626_ = lean_ctor_get(v___x_2625_, 0);
lean_inc(v_a_2626_);
lean_dec_ref_known(v___x_2625_, 1);
v___x_2627_ = lean_unsigned_to_nat(1u);
v___x_2628_ = lp_vampireReplay_Vampire_Reconstruct_formula___lam__0(v_f_2535_, v_sorts_2533_, v_vars_2534_, v___x_2627_, v_a_2536_, v_a_2537_, v_a_2538_, v_a_2539_, v_a_2540_, v_a_2541_);
if (lean_obj_tag(v___x_2628_) == 0)
{
lean_object* v_a_2629_; lean_object* v___x_2630_; 
v_a_2629_ = lean_ctor_get(v___x_2628_, 0);
lean_inc(v_a_2629_);
lean_dec_ref_known(v___x_2628_, 1);
v___x_2630_ = l_Lean_mkArrow(v_a_2626_, v_a_2629_, v_a_2540_, v_a_2541_);
if (lean_obj_tag(v___x_2630_) == 0)
{
lean_object* v_a_2631_; lean_object* v___x_2632_; 
v_a_2631_ = lean_ctor_get(v___x_2630_, 0);
lean_inc(v_a_2631_);
lean_dec_ref_known(v___x_2630_, 1);
v___x_2632_ = lp_vampireReplay_Vampire_Reconstruct_shared___redArg(v_a_2631_, v_a_2537_);
return v___x_2632_;
}
else
{
return v___x_2630_;
}
}
else
{
lean_dec(v_a_2626_);
return v___x_2628_;
}
}
else
{
lean_dec_ref(v_f_2535_);
lean_dec_ref(v_vars_2534_);
lean_dec_ref(v_sorts_2533_);
return v___x_2625_;
}
}
case 4:
{
lean_object* v___x_2633_; lean_object* v___x_2634_; 
lean_dec_ref(v___x_2549_);
lean_del_object(v___x_2546_);
lean_dec(v_a_2544_);
lean_dec_ref(v_f_2535_);
lean_dec_ref(v_vars_2534_);
lean_dec_ref(v_sorts_2533_);
v___x_2633_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_formula___closed__9));
v___x_2634_ = lp_vampireReplay_Vampire_Reconstruct_formula___lam__1(v_sub_2548_, v___x_2633_, v_a_2536_, v_a_2537_, v_a_2538_, v_a_2539_, v_a_2540_, v_a_2541_);
if (lean_obj_tag(v___x_2634_) == 0)
{
lean_object* v_a_2635_; lean_object* v___x_2636_; 
v_a_2635_ = lean_ctor_get(v___x_2634_, 0);
lean_inc(v_a_2635_);
lean_dec_ref_known(v___x_2634_, 1);
v___x_2636_ = lp_vampireReplay_Vampire_Reconstruct_shared___redArg(v_a_2635_, v_a_2537_);
return v___x_2636_;
}
else
{
return v___x_2634_;
}
}
case 5:
{
lean_object* v___x_2637_; lean_object* v___x_2638_; 
lean_dec_ref(v___x_2549_);
lean_del_object(v___x_2546_);
lean_dec(v_a_2544_);
lean_dec_ref(v_f_2535_);
lean_dec_ref(v_vars_2534_);
lean_dec_ref(v_sorts_2533_);
v___x_2637_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_formula___closed__9));
v___x_2638_ = lp_vampireReplay_Vampire_Reconstruct_formula___lam__1(v_sub_2548_, v___x_2637_, v_a_2536_, v_a_2537_, v_a_2538_, v_a_2539_, v_a_2540_, v_a_2541_);
if (lean_obj_tag(v___x_2638_) == 0)
{
lean_object* v_a_2639_; lean_object* v___x_2641_; uint8_t v_isShared_2642_; uint8_t v_isSharedCheck_2648_; 
v_a_2639_ = lean_ctor_get(v___x_2638_, 0);
v_isSharedCheck_2648_ = !lean_is_exclusive(v___x_2638_);
if (v_isSharedCheck_2648_ == 0)
{
v___x_2641_ = v___x_2638_;
v_isShared_2642_ = v_isSharedCheck_2648_;
goto v_resetjp_2640_;
}
else
{
lean_inc(v_a_2639_);
lean_dec(v___x_2638_);
v___x_2641_ = lean_box(0);
v_isShared_2642_ = v_isSharedCheck_2648_;
goto v_resetjp_2640_;
}
v_resetjp_2640_:
{
lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2646_; 
v___x_2643_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_literal___closed__2, &lp_vampireReplay_Vampire_Reconstruct_literal___closed__2_once, _init_lp_vampireReplay_Vampire_Reconstruct_literal___closed__2);
v___x_2644_ = l_Lean_Expr_app___override(v___x_2643_, v_a_2639_);
if (v_isShared_2642_ == 0)
{
lean_ctor_set(v___x_2641_, 0, v___x_2644_);
v___x_2646_ = v___x_2641_;
goto v_reusejp_2645_;
}
else
{
lean_object* v_reuseFailAlloc_2647_; 
v_reuseFailAlloc_2647_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2647_, 0, v___x_2644_);
v___x_2646_ = v_reuseFailAlloc_2647_;
goto v_reusejp_2645_;
}
v_reusejp_2645_:
{
return v___x_2646_;
}
}
}
else
{
return v___x_2638_;
}
}
case 7:
{
lean_object* v___f_2649_; lean_object* v___x_2650_; 
lean_dec_ref(v_sub_2548_);
lean_del_object(v___x_2546_);
lean_dec(v_a_2544_);
v___f_2649_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_formula___closed__10));
v___x_2650_ = lp_vampireReplay_Vampire_Reconstruct_formula___lam__3(v_f_2535_, v_sorts_2533_, v___x_2549_, v_vars_2534_, v___f_2649_, v_a_2536_, v_a_2537_, v_a_2538_, v_a_2539_, v_a_2540_, v_a_2541_);
if (lean_obj_tag(v___x_2650_) == 0)
{
lean_object* v_a_2651_; lean_object* v___x_2652_; 
v_a_2651_ = lean_ctor_get(v___x_2650_, 0);
lean_inc(v_a_2651_);
lean_dec_ref_known(v___x_2650_, 1);
v___x_2652_ = lp_vampireReplay_Vampire_Reconstruct_shared___redArg(v_a_2651_, v_a_2537_);
return v___x_2652_;
}
else
{
return v___x_2650_;
}
}
case 8:
{
lean_object* v___f_2653_; lean_object* v___x_2654_; 
lean_dec_ref(v_sub_2548_);
lean_del_object(v___x_2546_);
lean_dec(v_a_2544_);
v___f_2653_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_formula___closed__11));
v___x_2654_ = lp_vampireReplay_Vampire_Reconstruct_formula___lam__3(v_f_2535_, v_sorts_2533_, v___x_2549_, v_vars_2534_, v___f_2653_, v_a_2536_, v_a_2537_, v_a_2538_, v_a_2539_, v_a_2540_, v_a_2541_);
if (lean_obj_tag(v___x_2654_) == 0)
{
lean_object* v_a_2655_; lean_object* v___x_2656_; 
v_a_2655_ = lean_ctor_get(v___x_2654_, 0);
lean_inc(v_a_2655_);
lean_dec_ref_known(v___x_2654_, 1);
v___x_2656_ = lp_vampireReplay_Vampire_Reconstruct_shared___redArg(v_a_2655_, v_a_2537_);
return v___x_2656_;
}
else
{
return v___x_2654_;
}
}
case 12:
{
lean_object* v___x_2657_; 
lean_dec_ref(v___x_2549_);
lean_dec_ref(v_sub_2548_);
lean_del_object(v___x_2546_);
lean_dec(v_a_2544_);
lean_dec_ref(v_vars_2534_);
lean_dec_ref(v_sorts_2533_);
v___x_2657_ = lp_vampireReplay_Vampire_Formula_name_x3f(v_f_2535_);
lean_dec_ref(v_f_2535_);
if (lean_obj_tag(v___x_2657_) == 1)
{
lean_object* v_val_2658_; lean_object* v___x_2659_; 
v_val_2658_ = lean_ctor_get(v___x_2657_, 0);
lean_inc(v_val_2658_);
lean_dec_ref_known(v___x_2657_, 1);
v___x_2659_ = lp_vampireReplay_Vampire_Reconstruct_namedFormula(v_val_2658_, v_a_2536_, v_a_2537_, v_a_2538_, v_a_2539_, v_a_2540_, v_a_2541_);
if (lean_obj_tag(v___x_2659_) == 0)
{
lean_object* v_a_2660_; lean_object* v___x_2661_; 
v_a_2660_ = lean_ctor_get(v___x_2659_, 0);
lean_inc(v_a_2660_);
lean_dec_ref_known(v___x_2659_, 1);
v___x_2661_ = lp_vampireReplay_Vampire_Reconstruct_shared___redArg(v_a_2660_, v_a_2537_);
return v___x_2661_;
}
else
{
return v___x_2659_;
}
}
else
{
lean_object* v___x_2662_; lean_object* v___x_2663_; 
lean_dec(v___x_2657_);
v___x_2662_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_formula___closed__13, &lp_vampireReplay_Vampire_Reconstruct_formula___closed__13_once, _init_lp_vampireReplay_Vampire_Reconstruct_formula___closed__13);
v___x_2663_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2662_, v_a_2538_, v_a_2539_, v_a_2540_, v_a_2541_);
if (lean_obj_tag(v___x_2663_) == 0)
{
lean_object* v_a_2664_; lean_object* v___x_2665_; 
v_a_2664_ = lean_ctor_get(v___x_2663_, 0);
lean_inc(v_a_2664_);
lean_dec_ref_known(v___x_2663_, 1);
v___x_2665_ = lp_vampireReplay_Vampire_Reconstruct_shared___redArg(v_a_2664_, v_a_2537_);
return v___x_2665_;
}
else
{
return v___x_2663_;
}
}
}
default: 
{
lean_object* v___x_2666_; lean_object* v___x_2667_; uint8_t v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; 
lean_dec_ref(v___x_2549_);
lean_dec_ref(v_sub_2548_);
lean_del_object(v___x_2546_);
lean_dec_ref(v_f_2535_);
lean_dec_ref(v_vars_2534_);
lean_dec_ref(v_sorts_2533_);
v___x_2666_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_formula___closed__15, &lp_vampireReplay_Vampire_Reconstruct_formula___closed__15_once, _init_lp_vampireReplay_Vampire_Reconstruct_formula___closed__15);
v___x_2667_ = lean_unsigned_to_nat(0u);
v___x_2668_ = lean_unbox(v_a_2544_);
lean_dec(v_a_2544_);
v___x_2669_ = lp_vampireReplay_Vampire_instReprConnective_repr(v___x_2668_, v___x_2667_);
v___x_2670_ = l_Lean_MessageData_ofFormat(v___x_2669_);
v___x_2671_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2671_, 0, v___x_2666_);
lean_ctor_set(v___x_2671_, 1, v___x_2670_);
v___x_2672_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2671_, v_a_2538_, v_a_2539_, v_a_2540_, v_a_2541_);
if (lean_obj_tag(v___x_2672_) == 0)
{
lean_object* v_a_2673_; lean_object* v___x_2674_; 
v_a_2673_ = lean_ctor_get(v___x_2672_, 0);
lean_inc(v_a_2673_);
lean_dec_ref_known(v___x_2672_, 1);
v___x_2674_ = lp_vampireReplay_Vampire_Reconstruct_shared___redArg(v_a_2673_, v_a_2537_);
return v___x_2674_;
}
else
{
return v___x_2672_;
}
}
}
}
}
else
{
lean_object* v_a_2676_; lean_object* v___x_2678_; uint8_t v_isShared_2679_; uint8_t v_isSharedCheck_2683_; 
lean_dec_ref(v_f_2535_);
lean_dec_ref(v_vars_2534_);
lean_dec_ref(v_sorts_2533_);
v_a_2676_ = lean_ctor_get(v___x_2543_, 0);
v_isSharedCheck_2683_ = !lean_is_exclusive(v___x_2543_);
if (v_isSharedCheck_2683_ == 0)
{
v___x_2678_ = v___x_2543_;
v_isShared_2679_ = v_isSharedCheck_2683_;
goto v_resetjp_2677_;
}
else
{
lean_inc(v_a_2676_);
lean_dec(v___x_2543_);
v___x_2678_ = lean_box(0);
v_isShared_2679_ = v_isSharedCheck_2683_;
goto v_resetjp_2677_;
}
v_resetjp_2677_:
{
lean_object* v___x_2681_; 
if (v_isShared_2679_ == 0)
{
v___x_2681_ = v___x_2678_;
goto v_reusejp_2680_;
}
else
{
lean_object* v_reuseFailAlloc_2682_; 
v_reuseFailAlloc_2682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2682_, 0, v_a_2676_);
v___x_2681_ = v_reuseFailAlloc_2682_;
goto v_reusejp_2680_;
}
v_reusejp_2680_:
{
return v___x_2681_;
}
}
}
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_formula___lam__2___closed__1(void){
_start:
{
lean_object* v___x_2685_; lean_object* v___x_2686_; 
v___x_2685_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_formula___lam__2___closed__0));
v___x_2686_ = l_Lean_stringToMessageData(v___x_2685_);
return v___x_2686_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___lam__2(lean_object* v_sorts_2687_, lean_object* v_bind_2688_, lean_object* v___x_2689_, lean_object* v___x_2690_, lean_object* v_vars_2691_, lean_object* v_locals_2692_, lean_object* v___y_2693_, lean_object* v___y_2694_, lean_object* v___y_2695_, lean_object* v___y_2696_, lean_object* v___y_2697_, lean_object* v___y_2698_){
_start:
{
lean_object* v_____do__lift_2701_; lean_object* v___x_2705_; uint8_t v___x_2706_; 
v___x_2705_ = lean_array_get_size(v___x_2689_);
v___x_2706_ = lean_nat_dec_lt(v___x_2690_, v___x_2705_);
if (v___x_2706_ == 0)
{
lean_object* v___x_2707_; lean_object* v___x_2708_; 
v___x_2707_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_formula___lam__2___closed__1, &lp_vampireReplay_Vampire_Reconstruct_formula___lam__2___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_formula___lam__2___closed__1);
v___x_2708_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2707_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_);
if (lean_obj_tag(v___x_2708_) == 0)
{
lean_object* v_a_2709_; 
v_a_2709_ = lean_ctor_get(v___x_2708_, 0);
lean_inc(v_a_2709_);
lean_dec_ref_known(v___x_2708_, 1);
v_____do__lift_2701_ = v_a_2709_;
goto v___jp_2700_;
}
else
{
lean_object* v_a_2710_; lean_object* v___x_2712_; uint8_t v_isShared_2713_; uint8_t v_isSharedCheck_2717_; 
lean_dec_ref(v_locals_2692_);
lean_dec_ref(v_vars_2691_);
lean_dec_ref(v_bind_2688_);
lean_dec_ref(v_sorts_2687_);
v_a_2710_ = lean_ctor_get(v___x_2708_, 0);
v_isSharedCheck_2717_ = !lean_is_exclusive(v___x_2708_);
if (v_isSharedCheck_2717_ == 0)
{
v___x_2712_ = v___x_2708_;
v_isShared_2713_ = v_isSharedCheck_2717_;
goto v_resetjp_2711_;
}
else
{
lean_inc(v_a_2710_);
lean_dec(v___x_2708_);
v___x_2712_ = lean_box(0);
v_isShared_2713_ = v_isSharedCheck_2717_;
goto v_resetjp_2711_;
}
v_resetjp_2711_:
{
lean_object* v___x_2715_; 
if (v_isShared_2713_ == 0)
{
v___x_2715_ = v___x_2712_;
goto v_reusejp_2714_;
}
else
{
lean_object* v_reuseFailAlloc_2716_; 
v_reuseFailAlloc_2716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2716_, 0, v_a_2710_);
v___x_2715_ = v_reuseFailAlloc_2716_;
goto v_reusejp_2714_;
}
v_reusejp_2714_:
{
return v___x_2715_;
}
}
}
}
else
{
lean_object* v___x_2718_; 
v___x_2718_ = lean_array_fget_borrowed(v___x_2689_, v___x_2690_);
lean_inc(v___x_2718_);
v_____do__lift_2701_ = v___x_2718_;
goto v___jp_2700_;
}
v___jp_2700_:
{
lean_object* v___x_2702_; 
v___x_2702_ = lp_vampireReplay_Vampire_Reconstruct_formula(v_sorts_2687_, v_vars_2691_, v_____do__lift_2701_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_);
if (lean_obj_tag(v___x_2702_) == 0)
{
lean_object* v_a_2703_; lean_object* v___x_2704_; 
v_a_2703_ = lean_ctor_get(v___x_2702_, 0);
lean_inc(v_a_2703_);
lean_dec_ref_known(v___x_2702_, 1);
lean_inc(v___y_2698_);
lean_inc_ref(v___y_2697_);
lean_inc(v___y_2696_);
lean_inc_ref(v___y_2695_);
lean_inc(v___y_2694_);
lean_inc_ref(v___y_2693_);
v___x_2704_ = lean_apply_9(v_bind_2688_, v_locals_2692_, v_a_2703_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_, lean_box(0));
return v___x_2704_;
}
else
{
lean_dec_ref(v_locals_2692_);
lean_dec_ref(v_bind_2688_);
return v___x_2702_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___lam__2___boxed(lean_object* v_sorts_2719_, lean_object* v_bind_2720_, lean_object* v___x_2721_, lean_object* v___x_2722_, lean_object* v_vars_2723_, lean_object* v_locals_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_, lean_object* v___y_2727_, lean_object* v___y_2728_, lean_object* v___y_2729_, lean_object* v___y_2730_, lean_object* v___y_2731_){
_start:
{
lean_object* v_res_2732_; 
v_res_2732_ = lp_vampireReplay_Vampire_Reconstruct_formula___lam__2(v_sorts_2719_, v_bind_2720_, v___x_2721_, v___x_2722_, v_vars_2723_, v_locals_2724_, v___y_2725_, v___y_2726_, v___y_2727_, v___y_2728_, v___y_2729_, v___y_2730_);
lean_dec(v___y_2730_);
lean_dec_ref(v___y_2729_);
lean_dec(v___y_2728_);
lean_dec_ref(v___y_2727_);
lean_dec(v___y_2726_);
lean_dec_ref(v___y_2725_);
lean_dec(v___x_2722_);
lean_dec_ref(v___x_2721_);
return v_res_2732_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___lam__3(lean_object* v_f_2733_, lean_object* v_sorts_2734_, lean_object* v___x_2735_, lean_object* v_vars_2736_, lean_object* v_bind_2737_, lean_object* v___y_2738_, lean_object* v___y_2739_, lean_object* v___y_2740_, lean_object* v___y_2741_, lean_object* v___y_2742_, lean_object* v___y_2743_){
_start:
{
lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___f_2747_; lean_object* v___x_2748_; lean_object* v_bound_2749_; lean_object* v___x_2750_; 
v___x_2745_ = lp_vampireReplay_Vampire_Formula_boundVars(v_f_2733_);
v___x_2746_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_sorts_2734_);
v___f_2747_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_formula___lam__2___boxed), 13, 4);
lean_closure_set(v___f_2747_, 0, v_sorts_2734_);
lean_closure_set(v___f_2747_, 1, v_bind_2737_);
lean_closure_set(v___f_2747_, 2, v___x_2735_);
lean_closure_set(v___f_2747_, 3, v___x_2746_);
v___x_2748_ = lean_array_get_size(v___x_2745_);
v_bound_2749_ = lp_vampireReplay_Array_filterMapM___at___00Vampire_Reconstruct_formula_spec__2(v_sorts_2734_, v___x_2745_, v___x_2746_, v___x_2748_);
lean_dec_ref(v___x_2745_);
lean_dec_ref(v_sorts_2734_);
v___x_2750_ = lp_vampireReplay_Vampire_Reconstruct_withVars___redArg(v_bound_2749_, v_vars_2736_, v___f_2747_, v___y_2738_, v___y_2739_, v___y_2740_, v___y_2741_, v___y_2742_, v___y_2743_);
return v___x_2750_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___lam__3___boxed(lean_object* v_f_2751_, lean_object* v_sorts_2752_, lean_object* v___x_2753_, lean_object* v_vars_2754_, lean_object* v_bind_2755_, lean_object* v___y_2756_, lean_object* v___y_2757_, lean_object* v___y_2758_, lean_object* v___y_2759_, lean_object* v___y_2760_, lean_object* v___y_2761_, lean_object* v___y_2762_){
_start:
{
lean_object* v_res_2763_; 
v_res_2763_ = lp_vampireReplay_Vampire_Reconstruct_formula___lam__3(v_f_2751_, v_sorts_2752_, v___x_2753_, v_vars_2754_, v_bind_2755_, v___y_2756_, v___y_2757_, v___y_2758_, v___y_2759_, v___y_2760_, v___y_2761_);
lean_dec(v___y_2761_);
lean_dec_ref(v___y_2760_);
lean_dec(v___y_2759_);
lean_dec_ref(v___y_2758_);
lean_dec(v___y_2757_);
lean_dec_ref(v___y_2756_);
return v_res_2763_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_formula_spec__3___boxed(lean_object* v_sorts_2764_, lean_object* v_vars_2765_, lean_object* v_sz_2766_, lean_object* v_i_2767_, lean_object* v_bs_2768_, lean_object* v___y_2769_, lean_object* v___y_2770_, lean_object* v___y_2771_, lean_object* v___y_2772_, lean_object* v___y_2773_, lean_object* v___y_2774_, lean_object* v___y_2775_){
_start:
{
size_t v_sz_boxed_2776_; size_t v_i_boxed_2777_; lean_object* v_res_2778_; 
v_sz_boxed_2776_ = lean_unbox_usize(v_sz_2766_);
lean_dec(v_sz_2766_);
v_i_boxed_2777_ = lean_unbox_usize(v_i_2767_);
lean_dec(v_i_2767_);
v_res_2778_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_formula_spec__3(v_sorts_2764_, v_vars_2765_, v_sz_boxed_2776_, v_i_boxed_2777_, v_bs_2768_, v___y_2769_, v___y_2770_, v___y_2771_, v___y_2772_, v___y_2773_, v___y_2774_);
lean_dec(v___y_2774_);
lean_dec_ref(v___y_2773_);
lean_dec(v___y_2772_);
lean_dec_ref(v___y_2771_);
lean_dec(v___y_2770_);
lean_dec_ref(v___y_2769_);
return v_res_2778_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_formula___boxed(lean_object* v_sorts_2779_, lean_object* v_vars_2780_, lean_object* v_f_2781_, lean_object* v_a_2782_, lean_object* v_a_2783_, lean_object* v_a_2784_, lean_object* v_a_2785_, lean_object* v_a_2786_, lean_object* v_a_2787_, lean_object* v_a_2788_){
_start:
{
lean_object* v_res_2789_; 
v_res_2789_ = lp_vampireReplay_Vampire_Reconstruct_formula(v_sorts_2779_, v_vars_2780_, v_f_2781_, v_a_2782_, v_a_2783_, v_a_2784_, v_a_2785_, v_a_2786_, v_a_2787_);
lean_dec(v_a_2787_);
lean_dec_ref(v_a_2786_);
lean_dec(v_a_2785_);
lean_dec_ref(v_a_2784_);
lean_dec(v_a_2783_);
lean_dec_ref(v_a_2782_);
return v_res_2789_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Vampire_Reconstruct_formula_spec__1(lean_object* v_as_2790_, size_t v_i_2791_, size_t v_stop_2792_, lean_object* v_b_2793_, lean_object* v___y_2794_, lean_object* v___y_2795_, lean_object* v___y_2796_, lean_object* v___y_2797_, lean_object* v___y_2798_, lean_object* v___y_2799_){
_start:
{
lean_object* v___x_2801_; 
v___x_2801_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Vampire_Reconstruct_formula_spec__1___redArg(v_as_2790_, v_i_2791_, v_stop_2792_, v_b_2793_, v___y_2796_, v___y_2797_, v___y_2798_, v___y_2799_);
return v___x_2801_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Vampire_Reconstruct_formula_spec__1___boxed(lean_object* v_as_2802_, lean_object* v_i_2803_, lean_object* v_stop_2804_, lean_object* v_b_2805_, lean_object* v___y_2806_, lean_object* v___y_2807_, lean_object* v___y_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_, lean_object* v___y_2811_, lean_object* v___y_2812_){
_start:
{
size_t v_i_boxed_2813_; size_t v_stop_boxed_2814_; lean_object* v_res_2815_; 
v_i_boxed_2813_ = lean_unbox_usize(v_i_2803_);
lean_dec(v_i_2803_);
v_stop_boxed_2814_ = lean_unbox_usize(v_stop_2804_);
lean_dec(v_stop_2804_);
v_res_2815_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Vampire_Reconstruct_formula_spec__1(v_as_2802_, v_i_boxed_2813_, v_stop_boxed_2814_, v_b_2805_, v___y_2806_, v___y_2807_, v___y_2808_, v___y_2809_, v___y_2810_, v___y_2811_);
lean_dec(v___y_2811_);
lean_dec_ref(v___y_2810_);
lean_dec(v___y_2809_);
lean_dec_ref(v___y_2808_);
lean_dec(v___y_2807_);
lean_dec_ref(v___y_2806_);
lean_dec_ref(v_as_2802_);
return v_res_2815_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_junctionParts(lean_object* v_fn_2816_, lean_object* v_e_2817_){
_start:
{
lean_object* v___x_2818_; uint8_t v___x_2819_; 
v___x_2818_ = lean_unsigned_to_nat(2u);
v___x_2819_ = l_Lean_Expr_isAppOfArity(v_e_2817_, v_fn_2816_, v___x_2818_);
if (v___x_2819_ == 0)
{
lean_object* v___x_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; 
v___x_2820_ = lean_unsigned_to_nat(1u);
v___x_2821_ = lean_mk_empty_array_with_capacity(v___x_2820_);
v___x_2822_ = lean_array_push(v___x_2821_, v_e_2817_);
return v___x_2822_;
}
else
{
lean_object* v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; 
v___x_2823_ = l_Lean_Expr_appFn_x21(v_e_2817_);
v___x_2824_ = l_Lean_Expr_appArg_x21(v___x_2823_);
lean_dec_ref(v___x_2823_);
v___x_2825_ = lp_vampireReplay_Vampire_Reconstruct_junctionParts(v_fn_2816_, v___x_2824_);
v___x_2826_ = l_Lean_Expr_appArg_x21(v_e_2817_);
lean_dec_ref(v_e_2817_);
v___x_2827_ = lp_vampireReplay_Vampire_Reconstruct_junctionParts(v_fn_2816_, v___x_2826_);
v___x_2828_ = l_Array_append___redArg(v___x_2825_, v___x_2827_);
lean_dec_ref(v___x_2827_);
return v___x_2828_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_junctionParts___boxed(lean_object* v_fn_2829_, lean_object* v_e_2830_){
_start:
{
lean_object* v_res_2831_; 
v_res_2831_ = lp_vampireReplay_Vampire_Reconstruct_junctionParts(v_fn_2829_, v_e_2830_);
lean_dec(v_fn_2829_);
return v_res_2831_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_vampireReplay_Vampire_Reconstruct_Monad(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_vampireReplay_Vampire_Reconstruct_Stated(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_vampireReplay_Vampire_Reconstruct_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
