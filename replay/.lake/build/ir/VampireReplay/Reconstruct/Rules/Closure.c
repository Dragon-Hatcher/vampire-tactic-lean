// Lean compiler output
// Module: VampireReplay.Reconstruct.Rules.Closure
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
lean_object* l_Lean_stringToMessageData(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_zipIdx___redArg(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Meta_mkCongrFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkCongr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_injectGiven(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
lean_object* lp_vampireReplay_Vampire_Clause_literals(lean_object*);
lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_clause_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_asNegation(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_ofNotNot(lean_object*, lean_object*);
uint32_t lp_vampireReplay_Vampire_Unit_number(lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_mkEqMP(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Literal_symbol_x3f(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_symbolExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Literal_args(lean_object*);
lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_term_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Term_symbol_x3f(lean_object*);
lean_object* lp_vampireReplay_Vampire_Term_args(lean_object*);
uint8_t l_Option_instBEq_beq___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__0(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqSymm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_clause_x3f(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_varSorts(lean_object*);
lean_object* lp_vampireReplay_Lean_Meta_forallBoundedTelescope___at___00Vampire_Reconstruct_relateLiterals_spec__6___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_congruences(lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Closure_0__Vampire_Reconstruct_Closure_congruent_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Closure_0__Vampire_Reconstruct_Closure_congruent_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Closure_0__Vampire_Reconstruct_Closure_congruent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Closure_0__Vampire_Reconstruct_Closure_congruent___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "no literal "};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__1;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = " in the clause"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__2 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__3;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "l"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__4 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__4_value;
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__4_value),LEAN_SCALAR_PTR_LITERAL(140, 76, 64, 139, 36, 56, 191, 236)}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__5 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__5_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "literal "};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__4___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__4___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__4___closed__1;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " of step "};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__4___closed__2 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__4___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__4___closed__3;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = " denies nothing:"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__4___closed__4 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__4___closed__4_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__4___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__4___closed__5;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "congruence step "};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__1___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__1___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__1___closed__1;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = " is unproved"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__1___closed__2 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__1___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__1___closed__3;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Closure_conflict_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Closure_conflict_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Closure_conflict_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Closure_conflict_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Closure_conflict_spec__1___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Closure_conflict_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "absurd"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__0_value;
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(93, 22, 196, 124, 199, 219, 238, 136)}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__1 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__1_value;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__2 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__2_value;
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__3 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__3_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__4;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__5;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = " is over an unknown predicate"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__6 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__6_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__7;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "a congruence relates two different symbols"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__8 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__8_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__9;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "a congruence is over an unknown symbol"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__10 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__10_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__11;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "what is recorded of step "};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__0___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__0___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__0___closed__1;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = " settles nothing"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__0___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__0___closed__2_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__0___closed__3;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__1___closed__0;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__1___closed__1;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__1___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__1___closed__2_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__1___closed__3 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__1___closed__3_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Not"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__1___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__1___closed__4_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(185, 11, 203, 55, 27, 192, 137, 230)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__1___closed__5 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__1___closed__5_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__1___closed__6;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__1___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__1___boxed__const__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__1___boxed__const__1_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "nothing is recorded of why the literals of step "};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___closed__1;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = " cannot all be false"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___closed__2_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___closed__3;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "a congruence-closure conflict is not a clause"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___closed__4_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___closed__5;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Closure_conflict(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Closure_conflict_spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Closure_conflict_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Closure_conflict_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Closure_conflict_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Closure_0__Vampire_Reconstruct_Closure_congruent_spec__0(lean_object* v_equal_1_, lean_object* v_as_2_, size_t v_sz_3_, size_t v_i_4_, lean_object* v_b_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_, lean_object* v___y_9_){
_start:
{
lean_object* v_a_12_; uint8_t v___x_16_; 
v___x_16_ = lean_usize_dec_lt(v_i_4_, v_sz_3_);
if (v___x_16_ == 0)
{
lean_object* v___x_17_; 
v___x_17_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_17_, 0, v_b_5_);
return v___x_17_;
}
else
{
lean_object* v_a_18_; lean_object* v_fst_19_; lean_object* v_snd_20_; lean_object* v___y_22_; lean_object* v___y_23_; lean_object* v___y_24_; lean_object* v___y_25_; lean_object* v___x_28_; uint8_t v___x_29_; 
v_a_18_ = lean_array_uget_borrowed(v_as_2_, v_i_4_);
v_fst_19_ = lean_ctor_get(v_a_18_, 0);
v_snd_20_ = lean_ctor_get(v_a_18_, 1);
v___x_28_ = lean_array_get_size(v_equal_1_);
v___x_29_ = lean_nat_dec_lt(v_snd_20_, v___x_28_);
if (v___x_29_ == 0)
{
v___y_22_ = v___y_6_;
v___y_23_ = v___y_7_;
v___y_24_ = v___y_8_;
v___y_25_ = v___y_9_;
goto v___jp_21_;
}
else
{
lean_object* v___x_30_; 
v___x_30_ = lean_array_fget_borrowed(v_equal_1_, v_snd_20_);
if (lean_obj_tag(v___x_30_) == 1)
{
lean_object* v_val_31_; lean_object* v___x_32_; 
v_val_31_ = lean_ctor_get(v___x_30_, 0);
lean_inc(v_val_31_);
v___x_32_ = l_Lean_Meta_mkCongr(v_b_5_, v_val_31_, v___y_6_, v___y_7_, v___y_8_, v___y_9_);
if (lean_obj_tag(v___x_32_) == 0)
{
lean_object* v_a_33_; 
v_a_33_ = lean_ctor_get(v___x_32_, 0);
lean_inc(v_a_33_);
lean_dec_ref_known(v___x_32_, 1);
v_a_12_ = v_a_33_;
goto v___jp_11_;
}
else
{
return v___x_32_;
}
}
else
{
v___y_22_ = v___y_6_;
v___y_23_ = v___y_7_;
v___y_24_ = v___y_8_;
v___y_25_ = v___y_9_;
goto v___jp_21_;
}
}
v___jp_21_:
{
lean_object* v___x_26_; 
lean_inc(v_fst_19_);
v___x_26_ = l_Lean_Meta_mkCongrFun(v_b_5_, v_fst_19_, v___y_22_, v___y_23_, v___y_24_, v___y_25_);
if (lean_obj_tag(v___x_26_) == 0)
{
lean_object* v_a_27_; 
v_a_27_ = lean_ctor_get(v___x_26_, 0);
lean_inc(v_a_27_);
lean_dec_ref_known(v___x_26_, 1);
v_a_12_ = v_a_27_;
goto v___jp_11_;
}
else
{
return v___x_26_;
}
}
}
v___jp_11_:
{
size_t v___x_13_; size_t v___x_14_; 
v___x_13_ = ((size_t)1ULL);
v___x_14_ = lean_usize_add(v_i_4_, v___x_13_);
v_i_4_ = v___x_14_;
v_b_5_ = v_a_12_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Closure_0__Vampire_Reconstruct_Closure_congruent_spec__0___boxed(lean_object* v_equal_34_, lean_object* v_as_35_, lean_object* v_sz_36_, lean_object* v_i_37_, lean_object* v_b_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_, lean_object* v___y_43_){
_start:
{
size_t v_sz_boxed_44_; size_t v_i_boxed_45_; lean_object* v_res_46_; 
v_sz_boxed_44_ = lean_unbox_usize(v_sz_36_);
lean_dec(v_sz_36_);
v_i_boxed_45_ = lean_unbox_usize(v_i_37_);
lean_dec(v_i_37_);
v_res_46_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Closure_0__Vampire_Reconstruct_Closure_congruent_spec__0(v_equal_34_, v_as_35_, v_sz_boxed_44_, v_i_boxed_45_, v_b_38_, v___y_39_, v___y_40_, v___y_41_, v___y_42_);
lean_dec(v___y_42_);
lean_dec_ref(v___y_41_);
lean_dec(v___y_40_);
lean_dec_ref(v___y_39_);
lean_dec_ref(v_as_35_);
lean_dec_ref(v_equal_34_);
return v_res_46_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Closure_0__Vampire_Reconstruct_Closure_congruent(lean_object* v_head_47_, lean_object* v_args_48_, lean_object* v_equal_49_, lean_object* v_a_50_, lean_object* v_a_51_, lean_object* v_a_52_, lean_object* v_a_53_){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = l_Lean_Meta_mkEqRefl(v_head_47_, v_a_50_, v_a_51_, v_a_52_, v_a_53_);
if (lean_obj_tag(v___x_55_) == 0)
{
lean_object* v_a_56_; lean_object* v___x_57_; lean_object* v___x_58_; size_t v_sz_59_; size_t v___x_60_; lean_object* v___x_61_; 
v_a_56_ = lean_ctor_get(v___x_55_, 0);
lean_inc(v_a_56_);
lean_dec_ref_known(v___x_55_, 1);
v___x_57_ = lean_unsigned_to_nat(0u);
v___x_58_ = l_Array_zipIdx___redArg(v_args_48_, v___x_57_);
v_sz_59_ = lean_array_size(v___x_58_);
v___x_60_ = ((size_t)0ULL);
v___x_61_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Closure_0__Vampire_Reconstruct_Closure_congruent_spec__0(v_equal_49_, v___x_58_, v_sz_59_, v___x_60_, v_a_56_, v_a_50_, v_a_51_, v_a_52_, v_a_53_);
lean_dec_ref(v___x_58_);
return v___x_61_;
}
else
{
lean_dec_ref(v_args_48_);
return v___x_55_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Closure_0__Vampire_Reconstruct_Closure_congruent___boxed(lean_object* v_head_62_, lean_object* v_args_63_, lean_object* v_equal_64_, lean_object* v_a_65_, lean_object* v_a_66_, lean_object* v_a_67_, lean_object* v_a_68_, lean_object* v_a_69_){
_start:
{
lean_object* v_res_70_; 
v_res_70_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Closure_0__Vampire_Reconstruct_Closure_congruent(v_head_62_, v_args_63_, v_equal_64_, v_a_65_, v_a_66_, v_a_67_, v_a_68_);
lean_dec(v_a_68_);
lean_dec_ref(v_a_67_);
lean_dec(v_a_66_);
lean_dec_ref(v_a_65_);
lean_dec_ref(v_equal_64_);
return v_res_70_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__2(lean_object* v_a_71_, lean_object* v_i_72_, lean_object* v_h_73_, uint8_t v___x_74_, lean_object* v_l_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_){
_start:
{
lean_object* v___x_83_; 
lean_inc_ref(v_l_75_);
v___x_83_ = lp_vampireReplay_Vampire_Reconstruct_injectGiven(v_a_71_, v_i_72_, v_l_75_, v___y_76_, v___y_77_, v___y_78_, v___y_79_, v___y_80_, v___y_81_);
if (lean_obj_tag(v___x_83_) == 0)
{
lean_object* v_a_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; uint8_t v___x_89_; uint8_t v___x_90_; lean_object* v___x_91_; 
v_a_84_ = lean_ctor_get(v___x_83_, 0);
lean_inc(v_a_84_);
lean_dec_ref_known(v___x_83_, 1);
v___x_85_ = lean_unsigned_to_nat(1u);
v___x_86_ = lean_mk_empty_array_with_capacity(v___x_85_);
v___x_87_ = lean_array_push(v___x_86_, v_l_75_);
v___x_88_ = l_Lean_Expr_app___override(v_h_73_, v_a_84_);
v___x_89_ = 0;
v___x_90_ = 1;
v___x_91_ = l_Lean_Meta_mkLambdaFVars(v___x_87_, v___x_88_, v___x_89_, v___x_74_, v___x_89_, v___x_74_, v___x_90_, v___y_78_, v___y_79_, v___y_80_, v___y_81_);
lean_dec_ref(v___x_87_);
return v___x_91_;
}
else
{
lean_dec_ref(v_l_75_);
lean_dec_ref(v_h_73_);
return v___x_83_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__2___boxed(lean_object* v_a_92_, lean_object* v_i_93_, lean_object* v_h_94_, lean_object* v___x_95_, lean_object* v_l_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_, lean_object* v___y_103_){
_start:
{
uint8_t v___x_45277__boxed_104_; lean_object* v_res_105_; 
v___x_45277__boxed_104_ = lean_unbox(v___x_95_);
v_res_105_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__2(v_a_92_, v_i_93_, v_h_94_, v___x_45277__boxed_104_, v_l_96_, v___y_97_, v___y_98_, v___y_99_, v___y_100_, v___y_101_, v___y_102_);
lean_dec(v___y_102_);
lean_dec_ref(v___y_101_);
lean_dec(v___y_100_);
lean_dec_ref(v___y_99_);
lean_dec(v___y_98_);
lean_dec_ref(v___y_97_);
lean_dec_ref(v_a_92_);
return v_res_105_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__1(void){
_start:
{
lean_object* v___x_107_; lean_object* v___x_108_; 
v___x_107_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__0));
v___x_108_ = l_Lean_stringToMessageData(v___x_107_);
return v___x_108_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__3(void){
_start:
{
lean_object* v___x_110_; lean_object* v___x_111_; 
v___x_110_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__2));
v___x_111_ = l_Lean_stringToMessageData(v___x_110_);
return v___x_111_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3(lean_object* v_a_115_, lean_object* v_h_116_, lean_object* v_i_117_, lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v___y_120_, lean_object* v___y_121_, lean_object* v___y_122_, lean_object* v___y_123_){
_start:
{
lean_object* v___x_125_; uint8_t v___x_126_; 
v___x_125_ = lean_array_get_size(v_a_115_);
v___x_126_ = lean_nat_dec_lt(v_i_117_, v___x_125_);
if (v___x_126_ == 0)
{
lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; 
lean_dec_ref(v_h_116_);
lean_dec_ref(v_a_115_);
v___x_127_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__1, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__1);
v___x_128_ = l_Nat_reprFast(v_i_117_);
v___x_129_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_129_, 0, v___x_128_);
v___x_130_ = l_Lean_MessageData_ofFormat(v___x_129_);
v___x_131_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_131_, 0, v___x_127_);
lean_ctor_set(v___x_131_, 1, v___x_130_);
v___x_132_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__3, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__3_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__3);
v___x_133_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_133_, 0, v___x_131_);
lean_ctor_set(v___x_133_, 1, v___x_132_);
v___x_134_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_133_, v___y_120_, v___y_121_, v___y_122_, v___y_123_);
return v___x_134_;
}
else
{
lean_object* v___x_135_; lean_object* v___f_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; 
v___x_135_ = lean_box(v___x_126_);
lean_inc(v_i_117_);
lean_inc_ref(v_a_115_);
v___f_136_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__2___boxed), 12, 4);
lean_closure_set(v___f_136_, 0, v_a_115_);
lean_closure_set(v___f_136_, 1, v_i_117_);
lean_closure_set(v___f_136_, 2, v_h_116_);
lean_closure_set(v___f_136_, 3, v___x_135_);
v___x_137_ = lean_array_fget(v_a_115_, v_i_117_);
lean_dec(v_i_117_);
lean_dec_ref(v_a_115_);
v___x_138_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__5));
v___x_139_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_138_, v___x_137_, v___f_136_, v___y_118_, v___y_119_, v___y_120_, v___y_121_, v___y_122_, v___y_123_);
return v___x_139_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___boxed(lean_object* v_a_140_, lean_object* v_h_141_, lean_object* v_i_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_){
_start:
{
lean_object* v_res_150_; 
v_res_150_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3(v_a_140_, v_h_141_, v_i_142_, v___y_143_, v___y_144_, v___y_145_, v___y_146_, v___y_147_, v___y_148_);
lean_dec(v___y_148_);
lean_dec_ref(v___y_147_);
lean_dec(v___y_146_);
lean_dec_ref(v___y_145_);
lean_dec(v___y_144_);
lean_dec_ref(v___y_143_);
return v_res_150_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__4___closed__1(void){
_start:
{
lean_object* v___x_152_; lean_object* v___x_153_; 
v___x_152_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__4___closed__0));
v___x_153_ = l_Lean_stringToMessageData(v___x_152_);
return v___x_153_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__4___closed__3(void){
_start:
{
lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_155_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__4___closed__2));
v___x_156_ = l_Lean_stringToMessageData(v___x_155_);
return v___x_156_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__4___closed__5(void){
_start:
{
lean_object* v___x_158_; lean_object* v___x_159_; 
v___x_158_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__4___closed__4));
v___x_159_ = l_Lean_stringToMessageData(v___x_158_);
return v___x_159_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__4(lean_object* v_a_160_, lean_object* v___f_161_, lean_object* v___x_162_, lean_object* v_i_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_){
_start:
{
lean_object* v___x_171_; uint8_t v___x_172_; 
v___x_171_ = lean_array_get_size(v_a_160_);
v___x_172_ = lean_nat_dec_lt(v_i_163_, v___x_171_);
if (v___x_172_ == 0)
{
lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; 
lean_dec_ref(v___f_161_);
v___x_173_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__1, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__1);
v___x_174_ = l_Nat_reprFast(v_i_163_);
v___x_175_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_175_, 0, v___x_174_);
v___x_176_ = l_Lean_MessageData_ofFormat(v___x_175_);
v___x_177_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_177_, 0, v___x_173_);
lean_ctor_set(v___x_177_, 1, v___x_176_);
v___x_178_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__3, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__3_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__3);
v___x_179_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_179_, 0, v___x_177_);
lean_ctor_set(v___x_179_, 1, v___x_178_);
v___x_180_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_179_, v___y_166_, v___y_167_, v___y_168_, v___y_169_);
return v___x_180_;
}
else
{
lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_181_ = lean_array_fget_borrowed(v_a_160_, v_i_163_);
lean_inc(v___x_181_);
v___x_182_ = lp_vampireReplay_Vampire_Reconstruct_asNegation(v___x_181_);
if (lean_obj_tag(v___x_182_) == 1)
{
lean_object* v_val_183_; lean_object* v___x_184_; 
v_val_183_ = lean_ctor_get(v___x_182_, 0);
lean_inc(v_val_183_);
lean_dec_ref_known(v___x_182_, 1);
lean_inc(v___y_169_);
lean_inc_ref(v___y_168_);
lean_inc(v___y_167_);
lean_inc_ref(v___y_166_);
lean_inc(v___y_165_);
lean_inc_ref(v___y_164_);
v___x_184_ = lean_apply_8(v___f_161_, v_i_163_, v___y_164_, v___y_165_, v___y_166_, v___y_167_, v___y_168_, v___y_169_, lean_box(0));
if (lean_obj_tag(v___x_184_) == 0)
{
lean_object* v_a_185_; lean_object* v___x_187_; uint8_t v_isShared_188_; uint8_t v_isSharedCheck_194_; 
v_a_185_ = lean_ctor_get(v___x_184_, 0);
v_isSharedCheck_194_ = !lean_is_exclusive(v___x_184_);
if (v_isSharedCheck_194_ == 0)
{
v___x_187_ = v___x_184_;
v_isShared_188_ = v_isSharedCheck_194_;
goto v_resetjp_186_;
}
else
{
lean_inc(v_a_185_);
lean_dec(v___x_184_);
v___x_187_ = lean_box(0);
v_isShared_188_ = v_isSharedCheck_194_;
goto v_resetjp_186_;
}
v_resetjp_186_:
{
lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_192_; 
lean_inc(v_val_183_);
v___x_189_ = lp_vampireReplay_Vampire_Reconstruct_ofNotNot(v_val_183_, v_a_185_);
v___x_190_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_190_, 0, v_val_183_);
lean_ctor_set(v___x_190_, 1, v___x_189_);
if (v_isShared_188_ == 0)
{
lean_ctor_set(v___x_187_, 0, v___x_190_);
v___x_192_ = v___x_187_;
goto v_reusejp_191_;
}
else
{
lean_object* v_reuseFailAlloc_193_; 
v_reuseFailAlloc_193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_193_, 0, v___x_190_);
v___x_192_ = v_reuseFailAlloc_193_;
goto v_reusejp_191_;
}
v_reusejp_191_:
{
return v___x_192_;
}
}
}
else
{
lean_object* v_a_195_; lean_object* v___x_197_; uint8_t v_isShared_198_; uint8_t v_isSharedCheck_202_; 
lean_dec(v_val_183_);
v_a_195_ = lean_ctor_get(v___x_184_, 0);
v_isSharedCheck_202_ = !lean_is_exclusive(v___x_184_);
if (v_isSharedCheck_202_ == 0)
{
v___x_197_ = v___x_184_;
v_isShared_198_ = v_isSharedCheck_202_;
goto v_resetjp_196_;
}
else
{
lean_inc(v_a_195_);
lean_dec(v___x_184_);
v___x_197_ = lean_box(0);
v_isShared_198_ = v_isSharedCheck_202_;
goto v_resetjp_196_;
}
v_resetjp_196_:
{
lean_object* v___x_200_; 
if (v_isShared_198_ == 0)
{
v___x_200_ = v___x_197_;
goto v_reusejp_199_;
}
else
{
lean_object* v_reuseFailAlloc_201_; 
v_reuseFailAlloc_201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_201_, 0, v_a_195_);
v___x_200_ = v_reuseFailAlloc_201_;
goto v_reusejp_199_;
}
v_reusejp_199_:
{
return v___x_200_;
}
}
}
}
else
{
lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; uint32_t v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; 
lean_dec(v___x_182_);
lean_dec_ref(v___f_161_);
v___x_203_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__4___closed__1, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__4___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__4___closed__1);
v___x_204_ = l_Nat_reprFast(v_i_163_);
v___x_205_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_205_, 0, v___x_204_);
v___x_206_ = l_Lean_MessageData_ofFormat(v___x_205_);
v___x_207_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_207_, 0, v___x_203_);
lean_ctor_set(v___x_207_, 1, v___x_206_);
v___x_208_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__4___closed__3, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__4___closed__3_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__4___closed__3);
v___x_209_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_209_, 0, v___x_207_);
lean_ctor_set(v___x_209_, 1, v___x_208_);
v___x_210_ = lp_vampireReplay_Vampire_Unit_number(v___x_162_);
v___x_211_ = lean_uint32_to_nat(v___x_210_);
v___x_212_ = l_Nat_reprFast(v___x_211_);
v___x_213_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_213_, 0, v___x_212_);
v___x_214_ = l_Lean_MessageData_ofFormat(v___x_213_);
v___x_215_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_215_, 0, v___x_209_);
lean_ctor_set(v___x_215_, 1, v___x_214_);
v___x_216_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__4___closed__5, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__4___closed__5_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__4___closed__5);
v___x_217_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_217_, 0, v___x_215_);
lean_ctor_set(v___x_217_, 1, v___x_216_);
lean_inc(v___x_181_);
v___x_218_ = l_Lean_indentExpr(v___x_181_);
v___x_219_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_219_, 0, v___x_217_);
lean_ctor_set(v___x_219_, 1, v___x_218_);
v___x_220_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_219_, v___y_166_, v___y_167_, v___y_168_, v___y_169_);
return v___x_220_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__4___boxed(lean_object* v_a_221_, lean_object* v___f_222_, lean_object* v___x_223_, lean_object* v_i_224_, lean_object* v___y_225_, lean_object* v___y_226_, lean_object* v___y_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v___y_231_){
_start:
{
lean_object* v_res_232_; 
v_res_232_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__4(v_a_221_, v___f_222_, v___x_223_, v_i_224_, v___y_225_, v___y_226_, v___y_227_, v___y_228_, v___y_229_, v___y_230_);
lean_dec(v___y_230_);
lean_dec_ref(v___y_229_);
lean_dec(v___y_228_);
lean_dec_ref(v___y_227_);
lean_dec(v___y_226_);
lean_dec_ref(v___y_225_);
lean_dec_ref(v___x_223_);
lean_dec_ref(v_a_221_);
return v_res_232_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__1___closed__1(void){
_start:
{
lean_object* v___x_234_; lean_object* v___x_235_; 
v___x_234_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__1___closed__0));
v___x_235_ = l_Lean_stringToMessageData(v___x_234_);
return v___x_235_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__1___closed__3(void){
_start:
{
lean_object* v___x_237_; lean_object* v___x_238_; 
v___x_237_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__1___closed__2));
v___x_238_ = l_Lean_stringToMessageData(v___x_237_);
return v___x_238_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__1(lean_object* v_proofs_239_, lean_object* v_i_240_, lean_object* v___y_241_, lean_object* v___y_242_, lean_object* v___y_243_, lean_object* v___y_244_, lean_object* v___y_245_, lean_object* v___y_246_){
_start:
{
lean_object* v___x_248_; uint8_t v___x_249_; 
v___x_248_ = lean_array_get_size(v_proofs_239_);
v___x_249_ = lean_nat_dec_lt(v_i_240_, v___x_248_);
if (v___x_249_ == 0)
{
lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; 
v___x_250_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__1___closed__1, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__1___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__1___closed__1);
v___x_251_ = l_Nat_reprFast(v_i_240_);
v___x_252_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_252_, 0, v___x_251_);
v___x_253_ = l_Lean_MessageData_ofFormat(v___x_252_);
v___x_254_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_254_, 0, v___x_250_);
lean_ctor_set(v___x_254_, 1, v___x_253_);
v___x_255_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__1___closed__3, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__1___closed__3_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__1___closed__3);
v___x_256_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_256_, 0, v___x_254_);
lean_ctor_set(v___x_256_, 1, v___x_255_);
v___x_257_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_256_, v___y_243_, v___y_244_, v___y_245_, v___y_246_);
return v___x_257_;
}
else
{
lean_object* v___x_258_; lean_object* v___x_259_; 
v___x_258_ = lean_array_fget_borrowed(v_proofs_239_, v_i_240_);
lean_dec(v_i_240_);
lean_inc(v___x_258_);
v___x_259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_259_, 0, v___x_258_);
return v___x_259_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__1___boxed(lean_object* v_proofs_260_, lean_object* v_i_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_){
_start:
{
lean_object* v_res_269_; 
v_res_269_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__1(v_proofs_260_, v_i_261_, v___y_262_, v___y_263_, v___y_264_, v___y_265_, v___y_266_, v___y_267_);
lean_dec(v___y_267_);
lean_dec_ref(v___y_266_);
lean_dec(v___y_265_);
lean_dec_ref(v___y_264_);
lean_dec(v___y_263_);
lean_dec_ref(v___y_262_);
lean_dec_ref(v_proofs_260_);
return v_res_269_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Closure_conflict_spec__0_spec__0___redArg(lean_object* v_proofs_270_, size_t v_sz_271_, size_t v_i_272_, lean_object* v_bs_273_, lean_object* v___y_274_, lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_){
_start:
{
uint8_t v___x_279_; 
v___x_279_ = lean_usize_dec_lt(v_i_272_, v_sz_271_);
if (v___x_279_ == 0)
{
lean_object* v___x_280_; 
v___x_280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_280_, 0, v_bs_273_);
return v___x_280_;
}
else
{
lean_object* v_v_281_; lean_object* v___x_282_; lean_object* v_bs_x27_283_; lean_object* v_a_285_; lean_object* v_a_291_; 
v_v_281_ = lean_array_uget(v_bs_273_, v_i_272_);
v___x_282_ = lean_unsigned_to_nat(0u);
v_bs_x27_283_ = lean_array_uset(v_bs_273_, v_i_272_, v___x_282_);
if (lean_obj_tag(v_v_281_) == 0)
{
lean_object* v___x_293_; 
v___x_293_ = lean_box(0);
v_a_285_ = v___x_293_;
goto v___jp_284_;
}
else
{
lean_object* v_val_294_; lean_object* v___x_296_; uint8_t v_isShared_297_; uint8_t v_isSharedCheck_320_; 
v_val_294_ = lean_ctor_get(v_v_281_, 0);
v_isSharedCheck_320_ = !lean_is_exclusive(v_v_281_);
if (v_isSharedCheck_320_ == 0)
{
v___x_296_ = v_v_281_;
v_isShared_297_ = v_isSharedCheck_320_;
goto v_resetjp_295_;
}
else
{
lean_inc(v_val_294_);
lean_dec(v_v_281_);
v___x_296_ = lean_box(0);
v_isShared_297_ = v_isSharedCheck_320_;
goto v_resetjp_295_;
}
v_resetjp_295_:
{
lean_object* v___x_298_; uint8_t v___x_299_; 
v___x_298_ = lean_array_get_size(v_proofs_270_);
v___x_299_ = lean_nat_dec_lt(v_val_294_, v___x_298_);
if (v___x_299_ == 0)
{
lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_303_; 
v___x_300_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__1___closed__1, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__1___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__1___closed__1);
v___x_301_ = l_Nat_reprFast(v_val_294_);
if (v_isShared_297_ == 0)
{
lean_ctor_set_tag(v___x_296_, 3);
lean_ctor_set(v___x_296_, 0, v___x_301_);
v___x_303_ = v___x_296_;
goto v_reusejp_302_;
}
else
{
lean_object* v_reuseFailAlloc_318_; 
v_reuseFailAlloc_318_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_318_, 0, v___x_301_);
v___x_303_ = v_reuseFailAlloc_318_;
goto v_reusejp_302_;
}
v_reusejp_302_:
{
lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_304_ = l_Lean_MessageData_ofFormat(v___x_303_);
v___x_305_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_305_, 0, v___x_300_);
lean_ctor_set(v___x_305_, 1, v___x_304_);
v___x_306_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__1___closed__3, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__1___closed__3_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__1___closed__3);
v___x_307_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_307_, 0, v___x_305_);
lean_ctor_set(v___x_307_, 1, v___x_306_);
v___x_308_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_307_, v___y_274_, v___y_275_, v___y_276_, v___y_277_);
if (lean_obj_tag(v___x_308_) == 0)
{
lean_object* v_a_309_; 
v_a_309_ = lean_ctor_get(v___x_308_, 0);
lean_inc(v_a_309_);
lean_dec_ref_known(v___x_308_, 1);
v_a_291_ = v_a_309_;
goto v___jp_290_;
}
else
{
lean_object* v_a_310_; lean_object* v___x_312_; uint8_t v_isShared_313_; uint8_t v_isSharedCheck_317_; 
lean_dec_ref(v_bs_x27_283_);
v_a_310_ = lean_ctor_get(v___x_308_, 0);
v_isSharedCheck_317_ = !lean_is_exclusive(v___x_308_);
if (v_isSharedCheck_317_ == 0)
{
v___x_312_ = v___x_308_;
v_isShared_313_ = v_isSharedCheck_317_;
goto v_resetjp_311_;
}
else
{
lean_inc(v_a_310_);
lean_dec(v___x_308_);
v___x_312_ = lean_box(0);
v_isShared_313_ = v_isSharedCheck_317_;
goto v_resetjp_311_;
}
v_resetjp_311_:
{
lean_object* v___x_315_; 
if (v_isShared_313_ == 0)
{
v___x_315_ = v___x_312_;
goto v_reusejp_314_;
}
else
{
lean_object* v_reuseFailAlloc_316_; 
v_reuseFailAlloc_316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_316_, 0, v_a_310_);
v___x_315_ = v_reuseFailAlloc_316_;
goto v_reusejp_314_;
}
v_reusejp_314_:
{
return v___x_315_;
}
}
}
}
}
else
{
lean_object* v___x_319_; 
lean_del_object(v___x_296_);
v___x_319_ = lean_array_fget_borrowed(v_proofs_270_, v_val_294_);
lean_dec(v_val_294_);
lean_inc(v___x_319_);
v_a_291_ = v___x_319_;
goto v___jp_290_;
}
}
}
v___jp_284_:
{
size_t v___x_286_; size_t v___x_287_; lean_object* v___x_288_; 
v___x_286_ = ((size_t)1ULL);
v___x_287_ = lean_usize_add(v_i_272_, v___x_286_);
v___x_288_ = lean_array_uset(v_bs_x27_283_, v_i_272_, v_a_285_);
v_i_272_ = v___x_287_;
v_bs_273_ = v___x_288_;
goto _start;
}
v___jp_290_:
{
lean_object* v___x_292_; 
v___x_292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_292_, 0, v_a_291_);
v_a_285_ = v___x_292_;
goto v___jp_284_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Closure_conflict_spec__0_spec__0___redArg___boxed(lean_object* v_proofs_321_, lean_object* v_sz_322_, lean_object* v_i_323_, lean_object* v_bs_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_, lean_object* v___y_329_){
_start:
{
size_t v_sz_boxed_330_; size_t v_i_boxed_331_; lean_object* v_res_332_; 
v_sz_boxed_330_ = lean_unbox_usize(v_sz_322_);
lean_dec(v_sz_322_);
v_i_boxed_331_ = lean_unbox_usize(v_i_323_);
lean_dec(v_i_323_);
v_res_332_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Closure_conflict_spec__0_spec__0___redArg(v_proofs_321_, v_sz_boxed_330_, v_i_boxed_331_, v_bs_324_, v___y_325_, v___y_326_, v___y_327_, v___y_328_);
lean_dec(v___y_328_);
lean_dec_ref(v___y_327_);
lean_dec(v___y_326_);
lean_dec_ref(v___y_325_);
lean_dec_ref(v_proofs_321_);
return v_res_332_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Closure_conflict_spec__0(lean_object* v_proofs_333_, size_t v_sz_334_, size_t v_i_335_, lean_object* v_bs_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_){
_start:
{
uint8_t v___x_344_; 
v___x_344_ = lean_usize_dec_lt(v_i_335_, v_sz_334_);
if (v___x_344_ == 0)
{
lean_object* v___x_345_; 
v___x_345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_345_, 0, v_bs_336_);
return v___x_345_;
}
else
{
lean_object* v_v_346_; lean_object* v___x_347_; lean_object* v_bs_x27_348_; lean_object* v_a_350_; lean_object* v_a_356_; 
v_v_346_ = lean_array_uget(v_bs_336_, v_i_335_);
v___x_347_ = lean_unsigned_to_nat(0u);
v_bs_x27_348_ = lean_array_uset(v_bs_336_, v_i_335_, v___x_347_);
if (lean_obj_tag(v_v_346_) == 0)
{
lean_object* v___x_358_; 
v___x_358_ = lean_box(0);
v_a_350_ = v___x_358_;
goto v___jp_349_;
}
else
{
lean_object* v_val_359_; lean_object* v___x_361_; uint8_t v_isShared_362_; uint8_t v_isSharedCheck_385_; 
v_val_359_ = lean_ctor_get(v_v_346_, 0);
v_isSharedCheck_385_ = !lean_is_exclusive(v_v_346_);
if (v_isSharedCheck_385_ == 0)
{
v___x_361_ = v_v_346_;
v_isShared_362_ = v_isSharedCheck_385_;
goto v_resetjp_360_;
}
else
{
lean_inc(v_val_359_);
lean_dec(v_v_346_);
v___x_361_ = lean_box(0);
v_isShared_362_ = v_isSharedCheck_385_;
goto v_resetjp_360_;
}
v_resetjp_360_:
{
lean_object* v___x_363_; uint8_t v___x_364_; 
v___x_363_ = lean_array_get_size(v_proofs_333_);
v___x_364_ = lean_nat_dec_lt(v_val_359_, v___x_363_);
if (v___x_364_ == 0)
{
lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_368_; 
v___x_365_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__1___closed__1, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__1___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__1___closed__1);
v___x_366_ = l_Nat_reprFast(v_val_359_);
if (v_isShared_362_ == 0)
{
lean_ctor_set_tag(v___x_361_, 3);
lean_ctor_set(v___x_361_, 0, v___x_366_);
v___x_368_ = v___x_361_;
goto v_reusejp_367_;
}
else
{
lean_object* v_reuseFailAlloc_383_; 
v_reuseFailAlloc_383_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_383_, 0, v___x_366_);
v___x_368_ = v_reuseFailAlloc_383_;
goto v_reusejp_367_;
}
v_reusejp_367_:
{
lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; 
v___x_369_ = l_Lean_MessageData_ofFormat(v___x_368_);
v___x_370_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_370_, 0, v___x_365_);
lean_ctor_set(v___x_370_, 1, v___x_369_);
v___x_371_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__1___closed__3, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__1___closed__3_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__1___closed__3);
v___x_372_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_372_, 0, v___x_370_);
lean_ctor_set(v___x_372_, 1, v___x_371_);
v___x_373_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_372_, v___y_339_, v___y_340_, v___y_341_, v___y_342_);
if (lean_obj_tag(v___x_373_) == 0)
{
lean_object* v_a_374_; 
v_a_374_ = lean_ctor_get(v___x_373_, 0);
lean_inc(v_a_374_);
lean_dec_ref_known(v___x_373_, 1);
v_a_356_ = v_a_374_;
goto v___jp_355_;
}
else
{
lean_object* v_a_375_; lean_object* v___x_377_; uint8_t v_isShared_378_; uint8_t v_isSharedCheck_382_; 
lean_dec_ref(v_bs_x27_348_);
v_a_375_ = lean_ctor_get(v___x_373_, 0);
v_isSharedCheck_382_ = !lean_is_exclusive(v___x_373_);
if (v_isSharedCheck_382_ == 0)
{
v___x_377_ = v___x_373_;
v_isShared_378_ = v_isSharedCheck_382_;
goto v_resetjp_376_;
}
else
{
lean_inc(v_a_375_);
lean_dec(v___x_373_);
v___x_377_ = lean_box(0);
v_isShared_378_ = v_isSharedCheck_382_;
goto v_resetjp_376_;
}
v_resetjp_376_:
{
lean_object* v___x_380_; 
if (v_isShared_378_ == 0)
{
v___x_380_ = v___x_377_;
goto v_reusejp_379_;
}
else
{
lean_object* v_reuseFailAlloc_381_; 
v_reuseFailAlloc_381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_381_, 0, v_a_375_);
v___x_380_ = v_reuseFailAlloc_381_;
goto v_reusejp_379_;
}
v_reusejp_379_:
{
return v___x_380_;
}
}
}
}
}
else
{
lean_object* v___x_384_; 
lean_del_object(v___x_361_);
v___x_384_ = lean_array_fget_borrowed(v_proofs_333_, v_val_359_);
lean_dec(v_val_359_);
lean_inc(v___x_384_);
v_a_356_ = v___x_384_;
goto v___jp_355_;
}
}
}
v___jp_349_:
{
size_t v___x_351_; size_t v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; 
v___x_351_ = ((size_t)1ULL);
v___x_352_ = lean_usize_add(v_i_335_, v___x_351_);
v___x_353_ = lean_array_uset(v_bs_x27_348_, v_i_335_, v_a_350_);
v___x_354_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Closure_conflict_spec__0_spec__0___redArg(v_proofs_333_, v_sz_334_, v___x_352_, v___x_353_, v___y_339_, v___y_340_, v___y_341_, v___y_342_);
return v___x_354_;
}
v___jp_355_:
{
lean_object* v___x_357_; 
v___x_357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_357_, 0, v_a_356_);
v_a_350_ = v___x_357_;
goto v___jp_349_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Closure_conflict_spec__0___boxed(lean_object* v_proofs_386_, lean_object* v_sz_387_, lean_object* v_i_388_, lean_object* v_bs_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_){
_start:
{
size_t v_sz_boxed_397_; size_t v_i_boxed_398_; lean_object* v_res_399_; 
v_sz_boxed_397_ = lean_unbox_usize(v_sz_387_);
lean_dec(v_sz_387_);
v_i_boxed_398_ = lean_unbox_usize(v_i_388_);
lean_dec(v_i_388_);
v_res_399_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Closure_conflict_spec__0(v_proofs_386_, v_sz_boxed_397_, v_i_boxed_398_, v_bs_389_, v___y_390_, v___y_391_, v___y_392_, v___y_393_, v___y_394_, v___y_395_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
lean_dec(v___y_393_);
lean_dec_ref(v___y_392_);
lean_dec(v___y_391_);
lean_dec_ref(v___y_390_);
lean_dec_ref(v_proofs_386_);
return v_res_399_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__0(lean_object* v_proofs_400_, lean_object* v_args_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_, lean_object* v___y_407_){
_start:
{
size_t v_sz_409_; size_t v___x_410_; lean_object* v___x_411_; 
v_sz_409_ = lean_array_size(v_args_401_);
v___x_410_ = ((size_t)0ULL);
v___x_411_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Closure_conflict_spec__0(v_proofs_400_, v_sz_409_, v___x_410_, v_args_401_, v___y_402_, v___y_403_, v___y_404_, v___y_405_, v___y_406_, v___y_407_);
return v___x_411_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__0___boxed(lean_object* v_proofs_412_, lean_object* v_args_413_, lean_object* v___y_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_){
_start:
{
lean_object* v_res_421_; 
v_res_421_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__0(v_proofs_412_, v_args_413_, v___y_414_, v___y_415_, v___y_416_, v___y_417_, v___y_418_, v___y_419_);
lean_dec(v___y_419_);
lean_dec_ref(v___y_418_);
lean_dec(v___y_417_);
lean_dec_ref(v___y_416_);
lean_dec(v___y_415_);
lean_dec_ref(v___y_414_);
lean_dec_ref(v_proofs_412_);
return v_res_421_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Closure_conflict_spec__1___redArg(size_t v_sz_422_, size_t v_i_423_, lean_object* v_bs_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_){
_start:
{
uint8_t v___x_430_; 
v___x_430_ = lean_usize_dec_lt(v_i_423_, v_sz_422_);
if (v___x_430_ == 0)
{
lean_object* v___x_431_; 
v___x_431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_431_, 0, v_bs_424_);
return v___x_431_;
}
else
{
lean_object* v_v_432_; lean_object* v___x_433_; lean_object* v_bs_x27_434_; lean_object* v_a_436_; 
v_v_432_ = lean_array_uget(v_bs_424_, v_i_423_);
v___x_433_ = lean_unsigned_to_nat(0u);
v_bs_x27_434_ = lean_array_uset(v_bs_424_, v_i_423_, v___x_433_);
if (lean_obj_tag(v_v_432_) == 0)
{
v_a_436_ = v_v_432_;
goto v___jp_435_;
}
else
{
lean_object* v_val_441_; lean_object* v___x_443_; uint8_t v_isShared_444_; uint8_t v_isSharedCheck_458_; 
v_val_441_ = lean_ctor_get(v_v_432_, 0);
v_isSharedCheck_458_ = !lean_is_exclusive(v_v_432_);
if (v_isSharedCheck_458_ == 0)
{
v___x_443_ = v_v_432_;
v_isShared_444_ = v_isSharedCheck_458_;
goto v_resetjp_442_;
}
else
{
lean_inc(v_val_441_);
lean_dec(v_v_432_);
v___x_443_ = lean_box(0);
v_isShared_444_ = v_isSharedCheck_458_;
goto v_resetjp_442_;
}
v_resetjp_442_:
{
lean_object* v___x_445_; 
v___x_445_ = l_Lean_Meta_mkEqSymm(v_val_441_, v___y_425_, v___y_426_, v___y_427_, v___y_428_);
if (lean_obj_tag(v___x_445_) == 0)
{
lean_object* v_a_446_; lean_object* v___x_448_; 
v_a_446_ = lean_ctor_get(v___x_445_, 0);
lean_inc(v_a_446_);
lean_dec_ref_known(v___x_445_, 1);
if (v_isShared_444_ == 0)
{
lean_ctor_set(v___x_443_, 0, v_a_446_);
v___x_448_ = v___x_443_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v_a_446_);
v___x_448_ = v_reuseFailAlloc_449_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
v_a_436_ = v___x_448_;
goto v___jp_435_;
}
}
else
{
lean_object* v_a_450_; lean_object* v___x_452_; uint8_t v_isShared_453_; uint8_t v_isSharedCheck_457_; 
lean_del_object(v___x_443_);
lean_dec_ref(v_bs_x27_434_);
v_a_450_ = lean_ctor_get(v___x_445_, 0);
v_isSharedCheck_457_ = !lean_is_exclusive(v___x_445_);
if (v_isSharedCheck_457_ == 0)
{
v___x_452_ = v___x_445_;
v_isShared_453_ = v_isSharedCheck_457_;
goto v_resetjp_451_;
}
else
{
lean_inc(v_a_450_);
lean_dec(v___x_445_);
v___x_452_ = lean_box(0);
v_isShared_453_ = v_isSharedCheck_457_;
goto v_resetjp_451_;
}
v_resetjp_451_:
{
lean_object* v___x_455_; 
if (v_isShared_453_ == 0)
{
v___x_455_ = v___x_452_;
goto v_reusejp_454_;
}
else
{
lean_object* v_reuseFailAlloc_456_; 
v_reuseFailAlloc_456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_456_, 0, v_a_450_);
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
}
v___jp_435_:
{
size_t v___x_437_; size_t v___x_438_; lean_object* v___x_439_; 
v___x_437_ = ((size_t)1ULL);
v___x_438_ = lean_usize_add(v_i_423_, v___x_437_);
v___x_439_ = lean_array_uset(v_bs_x27_434_, v_i_423_, v_a_436_);
v_i_423_ = v___x_438_;
v_bs_424_ = v___x_439_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Closure_conflict_spec__1___redArg___boxed(lean_object* v_sz_459_, lean_object* v_i_460_, lean_object* v_bs_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_){
_start:
{
size_t v_sz_boxed_467_; size_t v_i_boxed_468_; lean_object* v_res_469_; 
v_sz_boxed_467_ = lean_unbox_usize(v_sz_459_);
lean_dec(v_sz_459_);
v_i_boxed_468_ = lean_unbox_usize(v_i_460_);
lean_dec(v_i_460_);
v_res_469_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Closure_conflict_spec__1___redArg(v_sz_boxed_467_, v_i_boxed_468_, v_bs_461_, v___y_462_, v___y_463_, v___y_464_, v___y_465_);
lean_dec(v___y_465_);
lean_dec_ref(v___y_464_);
lean_dec(v___y_463_);
lean_dec_ref(v___y_462_);
return v_res_469_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__4(void){
_start:
{
lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; 
v___x_476_ = lean_box(0);
v___x_477_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__3));
v___x_478_ = l_Lean_Expr_const___override(v___x_477_, v___x_476_);
return v___x_478_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__5(void){
_start:
{
lean_object* v___x_479_; lean_object* v___x_480_; 
v___x_479_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__4, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__4_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__4);
v___x_480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_480_, 0, v___x_479_);
return v___x_480_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__7(void){
_start:
{
lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_482_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__6));
v___x_483_ = l_Lean_stringToMessageData(v___x_482_);
return v___x_483_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__9(void){
_start:
{
lean_object* v___x_485_; lean_object* v___x_486_; 
v___x_485_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__8));
v___x_486_ = l_Lean_stringToMessageData(v___x_485_);
return v___x_486_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__11(void){
_start:
{
lean_object* v___x_488_; lean_object* v___x_489_; 
v___x_488_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__10));
v___x_489_ = l_Lean_stringToMessageData(v___x_488_);
return v___x_489_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2(lean_object* v_a_490_, lean_object* v_h_491_, lean_object* v___x_492_, lean_object* v_a_493_, lean_object* v___x_494_, lean_object* v_as_495_, size_t v_sz_496_, size_t v_i_497_, lean_object* v_b_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_){
_start:
{
lean_object* v_a_507_; uint8_t v___x_511_; 
v___x_511_ = lean_usize_dec_lt(v_i_497_, v_sz_496_);
if (v___x_511_ == 0)
{
lean_object* v___x_512_; 
lean_dec_ref(v_h_491_);
lean_dec_ref(v_a_490_);
v___x_512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_512_, 0, v_b_498_);
return v___x_512_;
}
else
{
lean_object* v_fst_513_; lean_object* v_snd_514_; lean_object* v___x_516_; uint8_t v_isShared_517_; uint8_t v_isSharedCheck_1018_; 
v_fst_513_ = lean_ctor_get(v_b_498_, 0);
v_snd_514_ = lean_ctor_get(v_b_498_, 1);
v_isSharedCheck_1018_ = !lean_is_exclusive(v_b_498_);
if (v_isSharedCheck_1018_ == 0)
{
v___x_516_ = v_b_498_;
v_isShared_517_ = v_isSharedCheck_1018_;
goto v_resetjp_515_;
}
else
{
lean_inc(v_snd_514_);
lean_inc(v_fst_513_);
lean_dec(v_b_498_);
v___x_516_ = lean_box(0);
v_isShared_517_ = v_isSharedCheck_1018_;
goto v_resetjp_515_;
}
v_resetjp_515_:
{
lean_object* v___f_518_; lean_object* v___y_520_; lean_object* v___y_521_; lean_object* v___y_522_; lean_object* v___y_523_; lean_object* v___y_524_; lean_object* v___y_525_; lean_object* v___y_526_; lean_object* v___y_527_; lean_object* v___y_528_; lean_object* v_fst_529_; lean_object* v_snd_530_; lean_object* v___y_625_; lean_object* v___y_626_; lean_object* v___y_627_; lean_object* v___y_628_; lean_object* v___y_629_; lean_object* v___y_630_; lean_object* v___y_631_; lean_object* v___y_632_; lean_object* v___y_633_; lean_object* v___y_634_; lean_object* v___y_647_; lean_object* v___y_648_; lean_object* v_equal_649_; lean_object* v___y_650_; lean_object* v___y_651_; lean_object* v___y_652_; lean_object* v___y_653_; lean_object* v___y_654_; lean_object* v___y_655_; lean_object* v_a_701_; 
lean_inc_ref(v_h_491_);
lean_inc_ref(v_a_490_);
v___f_518_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___boxed), 10, 2);
lean_closure_set(v___f_518_, 0, v_a_490_);
lean_closure_set(v___f_518_, 1, v_h_491_);
v_a_701_ = lean_array_uget(v_as_495_, v_i_497_);
switch(lean_obj_tag(v_a_701_))
{
case 0:
{
lean_object* v_literal_702_; lean_object* v___x_703_; 
lean_del_object(v___x_516_);
v_literal_702_ = lean_ctor_get(v_a_701_, 0);
lean_inc(v_literal_702_);
lean_dec_ref_known(v_a_701_, 1);
v___x_703_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__4(v_a_490_, v___f_518_, v___x_492_, v_literal_702_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_, v___y_504_);
if (lean_obj_tag(v___x_703_) == 0)
{
lean_object* v_a_704_; lean_object* v_snd_705_; lean_object* v___x_707_; uint8_t v_isShared_708_; uint8_t v_isSharedCheck_713_; 
v_a_704_ = lean_ctor_get(v___x_703_, 0);
lean_inc(v_a_704_);
lean_dec_ref_known(v___x_703_, 1);
v_snd_705_ = lean_ctor_get(v_a_704_, 1);
v_isSharedCheck_713_ = !lean_is_exclusive(v_a_704_);
if (v_isSharedCheck_713_ == 0)
{
lean_object* v_unused_714_; 
v_unused_714_ = lean_ctor_get(v_a_704_, 0);
lean_dec(v_unused_714_);
v___x_707_ = v_a_704_;
v_isShared_708_ = v_isSharedCheck_713_;
goto v_resetjp_706_;
}
else
{
lean_inc(v_snd_705_);
lean_dec(v_a_704_);
v___x_707_ = lean_box(0);
v_isShared_708_ = v_isSharedCheck_713_;
goto v_resetjp_706_;
}
v_resetjp_706_:
{
lean_object* v___x_709_; lean_object* v___x_711_; 
v___x_709_ = lean_array_push(v_fst_513_, v_snd_705_);
if (v_isShared_708_ == 0)
{
lean_ctor_set(v___x_707_, 1, v_snd_514_);
lean_ctor_set(v___x_707_, 0, v___x_709_);
v___x_711_ = v___x_707_;
goto v_reusejp_710_;
}
else
{
lean_object* v_reuseFailAlloc_712_; 
v_reuseFailAlloc_712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_712_, 0, v___x_709_);
lean_ctor_set(v_reuseFailAlloc_712_, 1, v_snd_514_);
v___x_711_ = v_reuseFailAlloc_712_;
goto v_reusejp_710_;
}
v_reusejp_710_:
{
v_a_507_ = v___x_711_;
goto v___jp_506_;
}
}
}
else
{
lean_object* v_a_715_; lean_object* v___x_717_; uint8_t v_isShared_718_; uint8_t v_isSharedCheck_722_; 
lean_dec(v_snd_514_);
lean_dec(v_fst_513_);
lean_dec_ref(v_h_491_);
lean_dec_ref(v_a_490_);
v_a_715_ = lean_ctor_get(v___x_703_, 0);
v_isSharedCheck_722_ = !lean_is_exclusive(v___x_703_);
if (v_isSharedCheck_722_ == 0)
{
v___x_717_ = v___x_703_;
v_isShared_718_ = v_isSharedCheck_722_;
goto v_resetjp_716_;
}
else
{
lean_inc(v_a_715_);
lean_dec(v___x_703_);
v___x_717_ = lean_box(0);
v_isShared_718_ = v_isSharedCheck_722_;
goto v_resetjp_716_;
}
v_resetjp_716_:
{
lean_object* v___x_720_; 
if (v_isShared_718_ == 0)
{
v___x_720_ = v___x_717_;
goto v_reusejp_719_;
}
else
{
lean_object* v_reuseFailAlloc_721_; 
v_reuseFailAlloc_721_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_721_, 0, v_a_715_);
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
case 1:
{
lean_object* v_lhs_723_; lean_object* v_rhs_724_; lean_object* v_args_725_; lean_object* v___x_726_; 
lean_dec_ref(v___f_518_);
v_lhs_723_ = lean_ctor_get(v_a_701_, 0);
lean_inc_ref(v_lhs_723_);
v_rhs_724_ = lean_ctor_get(v_a_701_, 1);
lean_inc_ref(v_rhs_724_);
v_args_725_ = lean_ctor_get(v_a_701_, 2);
lean_inc_ref(v_args_725_);
lean_dec_ref_known(v_a_701_, 3);
v___x_726_ = lp_vampireReplay_Vampire_Term_symbol_x3f(v_lhs_723_);
if (lean_obj_tag(v___x_726_) == 1)
{
lean_object* v_val_727_; lean_object* v___x_729_; uint8_t v_isShared_730_; uint8_t v_isSharedCheck_814_; 
v_val_727_ = lean_ctor_get(v___x_726_, 0);
v_isSharedCheck_814_ = !lean_is_exclusive(v___x_726_);
if (v_isSharedCheck_814_ == 0)
{
v___x_729_ = v___x_726_;
v_isShared_730_ = v_isSharedCheck_814_;
goto v_resetjp_728_;
}
else
{
lean_inc(v_val_727_);
lean_dec(v___x_726_);
v___x_729_ = lean_box(0);
v_isShared_730_ = v_isSharedCheck_814_;
goto v_resetjp_728_;
}
v_resetjp_728_:
{
lean_object* v___y_732_; lean_object* v___y_733_; lean_object* v___y_734_; lean_object* v___y_735_; lean_object* v___y_736_; lean_object* v___y_737_; lean_object* v___y_787_; lean_object* v___x_803_; 
v___x_803_ = lp_vampireReplay_Vampire_Term_symbol_x3f(v_rhs_724_);
lean_dec_ref(v_rhs_724_);
if (lean_obj_tag(v___x_803_) == 0)
{
lean_object* v___x_804_; 
v___x_804_ = lean_box(0);
v___y_787_ = v___x_804_;
goto v___jp_786_;
}
else
{
lean_object* v_val_805_; lean_object* v___x_807_; uint8_t v_isShared_808_; uint8_t v_isSharedCheck_813_; 
v_val_805_ = lean_ctor_get(v___x_803_, 0);
v_isSharedCheck_813_ = !lean_is_exclusive(v___x_803_);
if (v_isSharedCheck_813_ == 0)
{
v___x_807_ = v___x_803_;
v_isShared_808_ = v_isSharedCheck_813_;
goto v_resetjp_806_;
}
else
{
lean_inc(v_val_805_);
lean_dec(v___x_803_);
v___x_807_ = lean_box(0);
v_isShared_808_ = v_isSharedCheck_813_;
goto v_resetjp_806_;
}
v_resetjp_806_:
{
lean_object* v_name_809_; lean_object* v___x_811_; 
v_name_809_ = lean_ctor_get(v_val_805_, 0);
lean_inc_ref(v_name_809_);
lean_dec(v_val_805_);
if (v_isShared_808_ == 0)
{
lean_ctor_set(v___x_807_, 0, v_name_809_);
v___x_811_ = v___x_807_;
goto v_reusejp_810_;
}
else
{
lean_object* v_reuseFailAlloc_812_; 
v_reuseFailAlloc_812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_812_, 0, v_name_809_);
v___x_811_ = v_reuseFailAlloc_812_;
goto v_reusejp_810_;
}
v_reusejp_810_:
{
v___y_787_ = v___x_811_;
goto v___jp_786_;
}
}
}
v___jp_731_:
{
lean_object* v_name_738_; lean_object* v___x_739_; 
v_name_738_ = lean_ctor_get(v_val_727_, 0);
lean_inc_ref(v_name_738_);
lean_dec(v_val_727_);
v___x_739_ = lp_vampireReplay_Vampire_Reconstruct_symbolExpr(v_name_738_, v___y_732_, v___y_733_, v___y_734_, v___y_735_, v___y_736_, v___y_737_);
if (lean_obj_tag(v___x_739_) == 0)
{
lean_object* v_a_740_; lean_object* v___x_741_; size_t v_sz_742_; size_t v___x_743_; lean_object* v___x_744_; 
v_a_740_ = lean_ctor_get(v___x_739_, 0);
lean_inc(v_a_740_);
lean_dec_ref_known(v___x_739_, 1);
v___x_741_ = lp_vampireReplay_Vampire_Term_args(v_lhs_723_);
v_sz_742_ = lean_array_size(v___x_741_);
v___x_743_ = ((size_t)0ULL);
v___x_744_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_term_spec__0(v_a_493_, v_sz_742_, v___x_743_, v___x_741_, v___y_732_, v___y_733_, v___y_734_, v___y_735_, v___y_736_, v___y_737_);
if (lean_obj_tag(v___x_744_) == 0)
{
lean_object* v_a_745_; lean_object* v___x_746_; 
v_a_745_ = lean_ctor_get(v___x_744_, 0);
lean_inc(v_a_745_);
lean_dec_ref_known(v___x_744_, 1);
v___x_746_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__0(v_fst_513_, v_args_725_, v___y_732_, v___y_733_, v___y_734_, v___y_735_, v___y_736_, v___y_737_);
if (lean_obj_tag(v___x_746_) == 0)
{
lean_object* v_a_747_; lean_object* v___x_748_; 
v_a_747_ = lean_ctor_get(v___x_746_, 0);
lean_inc(v_a_747_);
lean_dec_ref_known(v___x_746_, 1);
v___x_748_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Closure_0__Vampire_Reconstruct_Closure_congruent(v_a_740_, v_a_745_, v_a_747_, v___y_734_, v___y_735_, v___y_736_, v___y_737_);
lean_dec(v_a_747_);
if (lean_obj_tag(v___x_748_) == 0)
{
lean_object* v_a_749_; lean_object* v___x_750_; lean_object* v___x_752_; 
v_a_749_ = lean_ctor_get(v___x_748_, 0);
lean_inc(v_a_749_);
lean_dec_ref_known(v___x_748_, 1);
v___x_750_ = lean_array_push(v_fst_513_, v_a_749_);
if (v_isShared_517_ == 0)
{
lean_ctor_set(v___x_516_, 0, v___x_750_);
v___x_752_ = v___x_516_;
goto v_reusejp_751_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v___x_750_);
lean_ctor_set(v_reuseFailAlloc_753_, 1, v_snd_514_);
v___x_752_ = v_reuseFailAlloc_753_;
goto v_reusejp_751_;
}
v_reusejp_751_:
{
v_a_507_ = v___x_752_;
goto v___jp_506_;
}
}
else
{
lean_object* v_a_754_; lean_object* v___x_756_; uint8_t v_isShared_757_; uint8_t v_isSharedCheck_761_; 
lean_del_object(v___x_516_);
lean_dec(v_snd_514_);
lean_dec(v_fst_513_);
lean_dec_ref(v_h_491_);
lean_dec_ref(v_a_490_);
v_a_754_ = lean_ctor_get(v___x_748_, 0);
v_isSharedCheck_761_ = !lean_is_exclusive(v___x_748_);
if (v_isSharedCheck_761_ == 0)
{
v___x_756_ = v___x_748_;
v_isShared_757_ = v_isSharedCheck_761_;
goto v_resetjp_755_;
}
else
{
lean_inc(v_a_754_);
lean_dec(v___x_748_);
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
else
{
lean_object* v_a_762_; lean_object* v___x_764_; uint8_t v_isShared_765_; uint8_t v_isSharedCheck_769_; 
lean_dec(v_a_745_);
lean_dec(v_a_740_);
lean_del_object(v___x_516_);
lean_dec(v_snd_514_);
lean_dec(v_fst_513_);
lean_dec_ref(v_h_491_);
lean_dec_ref(v_a_490_);
v_a_762_ = lean_ctor_get(v___x_746_, 0);
v_isSharedCheck_769_ = !lean_is_exclusive(v___x_746_);
if (v_isSharedCheck_769_ == 0)
{
v___x_764_ = v___x_746_;
v_isShared_765_ = v_isSharedCheck_769_;
goto v_resetjp_763_;
}
else
{
lean_inc(v_a_762_);
lean_dec(v___x_746_);
v___x_764_ = lean_box(0);
v_isShared_765_ = v_isSharedCheck_769_;
goto v_resetjp_763_;
}
v_resetjp_763_:
{
lean_object* v___x_767_; 
if (v_isShared_765_ == 0)
{
v___x_767_ = v___x_764_;
goto v_reusejp_766_;
}
else
{
lean_object* v_reuseFailAlloc_768_; 
v_reuseFailAlloc_768_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_768_, 0, v_a_762_);
v___x_767_ = v_reuseFailAlloc_768_;
goto v_reusejp_766_;
}
v_reusejp_766_:
{
return v___x_767_;
}
}
}
}
else
{
lean_object* v_a_770_; lean_object* v___x_772_; uint8_t v_isShared_773_; uint8_t v_isSharedCheck_777_; 
lean_dec(v_a_740_);
lean_dec_ref(v_args_725_);
lean_del_object(v___x_516_);
lean_dec(v_snd_514_);
lean_dec(v_fst_513_);
lean_dec_ref(v_h_491_);
lean_dec_ref(v_a_490_);
v_a_770_ = lean_ctor_get(v___x_744_, 0);
v_isSharedCheck_777_ = !lean_is_exclusive(v___x_744_);
if (v_isSharedCheck_777_ == 0)
{
v___x_772_ = v___x_744_;
v_isShared_773_ = v_isSharedCheck_777_;
goto v_resetjp_771_;
}
else
{
lean_inc(v_a_770_);
lean_dec(v___x_744_);
v___x_772_ = lean_box(0);
v_isShared_773_ = v_isSharedCheck_777_;
goto v_resetjp_771_;
}
v_resetjp_771_:
{
lean_object* v___x_775_; 
if (v_isShared_773_ == 0)
{
v___x_775_ = v___x_772_;
goto v_reusejp_774_;
}
else
{
lean_object* v_reuseFailAlloc_776_; 
v_reuseFailAlloc_776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_776_, 0, v_a_770_);
v___x_775_ = v_reuseFailAlloc_776_;
goto v_reusejp_774_;
}
v_reusejp_774_:
{
return v___x_775_;
}
}
}
}
else
{
lean_object* v_a_778_; lean_object* v___x_780_; uint8_t v_isShared_781_; uint8_t v_isSharedCheck_785_; 
lean_dec_ref(v_args_725_);
lean_dec_ref(v_lhs_723_);
lean_del_object(v___x_516_);
lean_dec(v_snd_514_);
lean_dec(v_fst_513_);
lean_dec_ref(v_h_491_);
lean_dec_ref(v_a_490_);
v_a_778_ = lean_ctor_get(v___x_739_, 0);
v_isSharedCheck_785_ = !lean_is_exclusive(v___x_739_);
if (v_isSharedCheck_785_ == 0)
{
v___x_780_ = v___x_739_;
v_isShared_781_ = v_isSharedCheck_785_;
goto v_resetjp_779_;
}
else
{
lean_inc(v_a_778_);
lean_dec(v___x_739_);
v___x_780_ = lean_box(0);
v_isShared_781_ = v_isSharedCheck_785_;
goto v_resetjp_779_;
}
v_resetjp_779_:
{
lean_object* v___x_783_; 
if (v_isShared_781_ == 0)
{
v___x_783_ = v___x_780_;
goto v_reusejp_782_;
}
else
{
lean_object* v_reuseFailAlloc_784_; 
v_reuseFailAlloc_784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_784_, 0, v_a_778_);
v___x_783_ = v_reuseFailAlloc_784_;
goto v_reusejp_782_;
}
v_reusejp_782_:
{
return v___x_783_;
}
}
}
}
v___jp_786_:
{
lean_object* v_name_788_; lean_object* v___x_790_; 
v_name_788_ = lean_ctor_get(v_val_727_, 0);
lean_inc_ref(v_name_788_);
if (v_isShared_730_ == 0)
{
lean_ctor_set(v___x_729_, 0, v_name_788_);
v___x_790_ = v___x_729_;
goto v_reusejp_789_;
}
else
{
lean_object* v_reuseFailAlloc_802_; 
v_reuseFailAlloc_802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_802_, 0, v_name_788_);
v___x_790_ = v_reuseFailAlloc_802_;
goto v_reusejp_789_;
}
v_reusejp_789_:
{
uint8_t v___x_791_; 
v___x_791_ = l_Option_instBEq_beq___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__0(v___y_787_, v___x_790_);
lean_dec_ref(v___x_790_);
lean_dec(v___y_787_);
if (v___x_791_ == 0)
{
lean_object* v___x_792_; lean_object* v___x_793_; 
v___x_792_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__9, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__9_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__9);
v___x_793_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_792_, v___y_501_, v___y_502_, v___y_503_, v___y_504_);
if (lean_obj_tag(v___x_793_) == 0)
{
lean_dec_ref_known(v___x_793_, 1);
v___y_732_ = v___y_499_;
v___y_733_ = v___y_500_;
v___y_734_ = v___y_501_;
v___y_735_ = v___y_502_;
v___y_736_ = v___y_503_;
v___y_737_ = v___y_504_;
goto v___jp_731_;
}
else
{
lean_object* v_a_794_; lean_object* v___x_796_; uint8_t v_isShared_797_; uint8_t v_isSharedCheck_801_; 
lean_dec(v_val_727_);
lean_dec_ref(v_args_725_);
lean_dec_ref(v_lhs_723_);
lean_del_object(v___x_516_);
lean_dec(v_snd_514_);
lean_dec(v_fst_513_);
lean_dec_ref(v_h_491_);
lean_dec_ref(v_a_490_);
v_a_794_ = lean_ctor_get(v___x_793_, 0);
v_isSharedCheck_801_ = !lean_is_exclusive(v___x_793_);
if (v_isSharedCheck_801_ == 0)
{
v___x_796_ = v___x_793_;
v_isShared_797_ = v_isSharedCheck_801_;
goto v_resetjp_795_;
}
else
{
lean_inc(v_a_794_);
lean_dec(v___x_793_);
v___x_796_ = lean_box(0);
v_isShared_797_ = v_isSharedCheck_801_;
goto v_resetjp_795_;
}
v_resetjp_795_:
{
lean_object* v___x_799_; 
if (v_isShared_797_ == 0)
{
v___x_799_ = v___x_796_;
goto v_reusejp_798_;
}
else
{
lean_object* v_reuseFailAlloc_800_; 
v_reuseFailAlloc_800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_800_, 0, v_a_794_);
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
v___y_732_ = v___y_499_;
v___y_733_ = v___y_500_;
v___y_734_ = v___y_501_;
v___y_735_ = v___y_502_;
v___y_736_ = v___y_503_;
v___y_737_ = v___y_504_;
goto v___jp_731_;
}
}
}
}
}
else
{
lean_object* v___x_815_; lean_object* v___x_816_; 
lean_dec(v___x_726_);
lean_dec_ref(v_args_725_);
lean_dec_ref(v_rhs_724_);
lean_dec_ref(v_lhs_723_);
v___x_815_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__11, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__11_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__11);
v___x_816_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_815_, v___y_501_, v___y_502_, v___y_503_, v___y_504_);
if (lean_obj_tag(v___x_816_) == 0)
{
lean_object* v___x_818_; 
lean_dec_ref_known(v___x_816_, 1);
if (v_isShared_517_ == 0)
{
v___x_818_ = v___x_516_;
goto v_reusejp_817_;
}
else
{
lean_object* v_reuseFailAlloc_819_; 
v_reuseFailAlloc_819_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_819_, 0, v_fst_513_);
lean_ctor_set(v_reuseFailAlloc_819_, 1, v_snd_514_);
v___x_818_ = v_reuseFailAlloc_819_;
goto v_reusejp_817_;
}
v_reusejp_817_:
{
v_a_507_ = v___x_818_;
goto v___jp_506_;
}
}
else
{
lean_object* v_a_820_; lean_object* v___x_822_; uint8_t v_isShared_823_; uint8_t v_isSharedCheck_827_; 
lean_del_object(v___x_516_);
lean_dec(v_snd_514_);
lean_dec(v_fst_513_);
lean_dec_ref(v_h_491_);
lean_dec_ref(v_a_490_);
v_a_820_ = lean_ctor_get(v___x_816_, 0);
v_isSharedCheck_827_ = !lean_is_exclusive(v___x_816_);
if (v_isSharedCheck_827_ == 0)
{
v___x_822_ = v___x_816_;
v_isShared_823_ = v_isSharedCheck_827_;
goto v_resetjp_821_;
}
else
{
lean_inc(v_a_820_);
lean_dec(v___x_816_);
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
}
case 2:
{
lean_object* v_first_828_; lean_object* v_second_829_; lean_object* v___x_830_; 
lean_dec_ref(v___f_518_);
v_first_828_ = lean_ctor_get(v_a_701_, 0);
lean_inc(v_first_828_);
v_second_829_ = lean_ctor_get(v_a_701_, 1);
lean_inc(v_second_829_);
lean_dec_ref_known(v_a_701_, 2);
v___x_830_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__1(v_fst_513_, v_first_828_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_, v___y_504_);
if (lean_obj_tag(v___x_830_) == 0)
{
lean_object* v_a_831_; lean_object* v___x_832_; 
v_a_831_ = lean_ctor_get(v___x_830_, 0);
lean_inc(v_a_831_);
lean_dec_ref_known(v___x_830_, 1);
v___x_832_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__1(v_fst_513_, v_second_829_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_, v___y_504_);
if (lean_obj_tag(v___x_832_) == 0)
{
lean_object* v_a_833_; lean_object* v___x_834_; 
v_a_833_ = lean_ctor_get(v___x_832_, 0);
lean_inc(v_a_833_);
lean_dec_ref_known(v___x_832_, 1);
v___x_834_ = l_Lean_Meta_mkEqTrans(v_a_831_, v_a_833_, v___y_501_, v___y_502_, v___y_503_, v___y_504_);
if (lean_obj_tag(v___x_834_) == 0)
{
lean_object* v_a_835_; lean_object* v___x_836_; lean_object* v___x_838_; 
v_a_835_ = lean_ctor_get(v___x_834_, 0);
lean_inc(v_a_835_);
lean_dec_ref_known(v___x_834_, 1);
v___x_836_ = lean_array_push(v_fst_513_, v_a_835_);
if (v_isShared_517_ == 0)
{
lean_ctor_set(v___x_516_, 0, v___x_836_);
v___x_838_ = v___x_516_;
goto v_reusejp_837_;
}
else
{
lean_object* v_reuseFailAlloc_839_; 
v_reuseFailAlloc_839_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_839_, 0, v___x_836_);
lean_ctor_set(v_reuseFailAlloc_839_, 1, v_snd_514_);
v___x_838_ = v_reuseFailAlloc_839_;
goto v_reusejp_837_;
}
v_reusejp_837_:
{
v_a_507_ = v___x_838_;
goto v___jp_506_;
}
}
else
{
lean_object* v_a_840_; lean_object* v___x_842_; uint8_t v_isShared_843_; uint8_t v_isSharedCheck_847_; 
lean_del_object(v___x_516_);
lean_dec(v_snd_514_);
lean_dec(v_fst_513_);
lean_dec_ref(v_h_491_);
lean_dec_ref(v_a_490_);
v_a_840_ = lean_ctor_get(v___x_834_, 0);
v_isSharedCheck_847_ = !lean_is_exclusive(v___x_834_);
if (v_isSharedCheck_847_ == 0)
{
v___x_842_ = v___x_834_;
v_isShared_843_ = v_isSharedCheck_847_;
goto v_resetjp_841_;
}
else
{
lean_inc(v_a_840_);
lean_dec(v___x_834_);
v___x_842_ = lean_box(0);
v_isShared_843_ = v_isSharedCheck_847_;
goto v_resetjp_841_;
}
v_resetjp_841_:
{
lean_object* v___x_845_; 
if (v_isShared_843_ == 0)
{
v___x_845_ = v___x_842_;
goto v_reusejp_844_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v_a_840_);
v___x_845_ = v_reuseFailAlloc_846_;
goto v_reusejp_844_;
}
v_reusejp_844_:
{
return v___x_845_;
}
}
}
}
else
{
lean_object* v_a_848_; lean_object* v___x_850_; uint8_t v_isShared_851_; uint8_t v_isSharedCheck_855_; 
lean_dec(v_a_831_);
lean_del_object(v___x_516_);
lean_dec(v_snd_514_);
lean_dec(v_fst_513_);
lean_dec_ref(v_h_491_);
lean_dec_ref(v_a_490_);
v_a_848_ = lean_ctor_get(v___x_832_, 0);
v_isSharedCheck_855_ = !lean_is_exclusive(v___x_832_);
if (v_isSharedCheck_855_ == 0)
{
v___x_850_ = v___x_832_;
v_isShared_851_ = v_isSharedCheck_855_;
goto v_resetjp_849_;
}
else
{
lean_inc(v_a_848_);
lean_dec(v___x_832_);
v___x_850_ = lean_box(0);
v_isShared_851_ = v_isSharedCheck_855_;
goto v_resetjp_849_;
}
v_resetjp_849_:
{
lean_object* v___x_853_; 
if (v_isShared_851_ == 0)
{
v___x_853_ = v___x_850_;
goto v_reusejp_852_;
}
else
{
lean_object* v_reuseFailAlloc_854_; 
v_reuseFailAlloc_854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_854_, 0, v_a_848_);
v___x_853_ = v_reuseFailAlloc_854_;
goto v_reusejp_852_;
}
v_reusejp_852_:
{
return v___x_853_;
}
}
}
}
else
{
lean_object* v_a_856_; lean_object* v___x_858_; uint8_t v_isShared_859_; uint8_t v_isSharedCheck_863_; 
lean_dec(v_second_829_);
lean_del_object(v___x_516_);
lean_dec(v_snd_514_);
lean_dec(v_fst_513_);
lean_dec_ref(v_h_491_);
lean_dec_ref(v_a_490_);
v_a_856_ = lean_ctor_get(v___x_830_, 0);
v_isSharedCheck_863_ = !lean_is_exclusive(v___x_830_);
if (v_isSharedCheck_863_ == 0)
{
v___x_858_ = v___x_830_;
v_isShared_859_ = v_isSharedCheck_863_;
goto v_resetjp_857_;
}
else
{
lean_inc(v_a_856_);
lean_dec(v___x_830_);
v___x_858_ = lean_box(0);
v_isShared_859_ = v_isSharedCheck_863_;
goto v_resetjp_857_;
}
v_resetjp_857_:
{
lean_object* v___x_861_; 
if (v_isShared_859_ == 0)
{
v___x_861_ = v___x_858_;
goto v_reusejp_860_;
}
else
{
lean_object* v_reuseFailAlloc_862_; 
v_reuseFailAlloc_862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_862_, 0, v_a_856_);
v___x_861_ = v_reuseFailAlloc_862_;
goto v_reusejp_860_;
}
v_reusejp_860_:
{
return v___x_861_;
}
}
}
}
case 3:
{
lean_object* v_step_864_; lean_object* v___x_865_; 
lean_dec_ref(v___f_518_);
v_step_864_ = lean_ctor_get(v_a_701_, 0);
lean_inc(v_step_864_);
lean_dec_ref_known(v_a_701_, 1);
v___x_865_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__1(v_fst_513_, v_step_864_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_, v___y_504_);
if (lean_obj_tag(v___x_865_) == 0)
{
lean_object* v_a_866_; lean_object* v___x_867_; 
v_a_866_ = lean_ctor_get(v___x_865_, 0);
lean_inc(v_a_866_);
lean_dec_ref_known(v___x_865_, 1);
v___x_867_ = l_Lean_Meta_mkEqSymm(v_a_866_, v___y_501_, v___y_502_, v___y_503_, v___y_504_);
if (lean_obj_tag(v___x_867_) == 0)
{
lean_object* v_a_868_; lean_object* v___x_869_; lean_object* v___x_871_; 
v_a_868_ = lean_ctor_get(v___x_867_, 0);
lean_inc(v_a_868_);
lean_dec_ref_known(v___x_867_, 1);
v___x_869_ = lean_array_push(v_fst_513_, v_a_868_);
if (v_isShared_517_ == 0)
{
lean_ctor_set(v___x_516_, 0, v___x_869_);
v___x_871_ = v___x_516_;
goto v_reusejp_870_;
}
else
{
lean_object* v_reuseFailAlloc_872_; 
v_reuseFailAlloc_872_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_872_, 0, v___x_869_);
lean_ctor_set(v_reuseFailAlloc_872_, 1, v_snd_514_);
v___x_871_ = v_reuseFailAlloc_872_;
goto v_reusejp_870_;
}
v_reusejp_870_:
{
v_a_507_ = v___x_871_;
goto v___jp_506_;
}
}
else
{
lean_object* v_a_873_; lean_object* v___x_875_; uint8_t v_isShared_876_; uint8_t v_isSharedCheck_880_; 
lean_del_object(v___x_516_);
lean_dec(v_snd_514_);
lean_dec(v_fst_513_);
lean_dec_ref(v_h_491_);
lean_dec_ref(v_a_490_);
v_a_873_ = lean_ctor_get(v___x_867_, 0);
v_isSharedCheck_880_ = !lean_is_exclusive(v___x_867_);
if (v_isSharedCheck_880_ == 0)
{
v___x_875_ = v___x_867_;
v_isShared_876_ = v_isSharedCheck_880_;
goto v_resetjp_874_;
}
else
{
lean_inc(v_a_873_);
lean_dec(v___x_867_);
v___x_875_ = lean_box(0);
v_isShared_876_ = v_isSharedCheck_880_;
goto v_resetjp_874_;
}
v_resetjp_874_:
{
lean_object* v___x_878_; 
if (v_isShared_876_ == 0)
{
v___x_878_ = v___x_875_;
goto v_reusejp_877_;
}
else
{
lean_object* v_reuseFailAlloc_879_; 
v_reuseFailAlloc_879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_879_, 0, v_a_873_);
v___x_878_ = v_reuseFailAlloc_879_;
goto v_reusejp_877_;
}
v_reusejp_877_:
{
return v___x_878_;
}
}
}
}
else
{
lean_object* v_a_881_; lean_object* v___x_883_; uint8_t v_isShared_884_; uint8_t v_isSharedCheck_888_; 
lean_del_object(v___x_516_);
lean_dec(v_snd_514_);
lean_dec(v_fst_513_);
lean_dec_ref(v_h_491_);
lean_dec_ref(v_a_490_);
v_a_881_ = lean_ctor_get(v___x_865_, 0);
v_isSharedCheck_888_ = !lean_is_exclusive(v___x_865_);
if (v_isSharedCheck_888_ == 0)
{
v___x_883_ = v___x_865_;
v_isShared_884_ = v_isSharedCheck_888_;
goto v_resetjp_882_;
}
else
{
lean_inc(v_a_881_);
lean_dec(v___x_865_);
v___x_883_ = lean_box(0);
v_isShared_884_ = v_isSharedCheck_888_;
goto v_resetjp_882_;
}
v_resetjp_882_:
{
lean_object* v___x_886_; 
if (v_isShared_884_ == 0)
{
v___x_886_ = v___x_883_;
goto v_reusejp_885_;
}
else
{
lean_object* v_reuseFailAlloc_887_; 
v_reuseFailAlloc_887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_887_, 0, v_a_881_);
v___x_886_ = v_reuseFailAlloc_887_;
goto v_reusejp_885_;
}
v_reusejp_885_:
{
return v___x_886_;
}
}
}
}
case 4:
{
lean_object* v_literal_889_; lean_object* v_step_890_; lean_object* v___x_892_; uint8_t v_isShared_893_; uint8_t v_isSharedCheck_963_; 
lean_dec_ref(v___f_518_);
v_literal_889_ = lean_ctor_get(v_a_701_, 0);
v_step_890_ = lean_ctor_get(v_a_701_, 1);
v_isSharedCheck_963_ = !lean_is_exclusive(v_a_701_);
if (v_isSharedCheck_963_ == 0)
{
v___x_892_ = v_a_701_;
v_isShared_893_ = v_isSharedCheck_963_;
goto v_resetjp_891_;
}
else
{
lean_inc(v_step_890_);
lean_inc(v_literal_889_);
lean_dec(v_a_701_);
v___x_892_ = lean_box(0);
v_isShared_893_ = v_isSharedCheck_963_;
goto v_resetjp_891_;
}
v_resetjp_891_:
{
lean_object* v___x_894_; uint8_t v___x_895_; 
v___x_894_ = lean_array_get_size(v_a_490_);
v___x_895_ = lean_nat_dec_lt(v_literal_889_, v___x_894_);
if (v___x_895_ == 0)
{
lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_901_; 
lean_dec(v_step_890_);
v___x_896_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__1, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__1);
v___x_897_ = l_Nat_reprFast(v_literal_889_);
v___x_898_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_898_, 0, v___x_897_);
v___x_899_ = l_Lean_MessageData_ofFormat(v___x_898_);
if (v_isShared_893_ == 0)
{
lean_ctor_set_tag(v___x_892_, 7);
lean_ctor_set(v___x_892_, 1, v___x_899_);
lean_ctor_set(v___x_892_, 0, v___x_896_);
v___x_901_ = v___x_892_;
goto v_reusejp_900_;
}
else
{
lean_object* v_reuseFailAlloc_916_; 
v_reuseFailAlloc_916_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_916_, 0, v___x_896_);
lean_ctor_set(v_reuseFailAlloc_916_, 1, v___x_899_);
v___x_901_ = v_reuseFailAlloc_916_;
goto v_reusejp_900_;
}
v_reusejp_900_:
{
lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; 
v___x_902_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__3, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__3_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__3);
v___x_903_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_903_, 0, v___x_901_);
lean_ctor_set(v___x_903_, 1, v___x_902_);
v___x_904_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_903_, v___y_501_, v___y_502_, v___y_503_, v___y_504_);
if (lean_obj_tag(v___x_904_) == 0)
{
lean_object* v___x_906_; 
lean_dec_ref_known(v___x_904_, 1);
if (v_isShared_517_ == 0)
{
v___x_906_ = v___x_516_;
goto v_reusejp_905_;
}
else
{
lean_object* v_reuseFailAlloc_907_; 
v_reuseFailAlloc_907_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_907_, 0, v_fst_513_);
lean_ctor_set(v_reuseFailAlloc_907_, 1, v_snd_514_);
v___x_906_ = v_reuseFailAlloc_907_;
goto v_reusejp_905_;
}
v_reusejp_905_:
{
v_a_507_ = v___x_906_;
goto v___jp_506_;
}
}
else
{
lean_object* v_a_908_; lean_object* v___x_910_; uint8_t v_isShared_911_; uint8_t v_isSharedCheck_915_; 
lean_del_object(v___x_516_);
lean_dec(v_snd_514_);
lean_dec(v_fst_513_);
lean_dec_ref(v_h_491_);
lean_dec_ref(v_a_490_);
v_a_908_ = lean_ctor_get(v___x_904_, 0);
v_isSharedCheck_915_ = !lean_is_exclusive(v___x_904_);
if (v_isSharedCheck_915_ == 0)
{
v___x_910_ = v___x_904_;
v_isShared_911_ = v_isSharedCheck_915_;
goto v_resetjp_909_;
}
else
{
lean_inc(v_a_908_);
lean_dec(v___x_904_);
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
}
else
{
lean_object* v___x_917_; 
lean_del_object(v___x_892_);
lean_dec(v_snd_514_);
v___x_917_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__1(v_fst_513_, v_step_890_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_, v___y_504_);
if (lean_obj_tag(v___x_917_) == 0)
{
lean_object* v_a_918_; lean_object* v___x_919_; lean_object* v___x_920_; 
v_a_918_ = lean_ctor_get(v___x_917_, 0);
lean_inc(v_a_918_);
lean_dec_ref_known(v___x_917_, 1);
v___x_919_ = lean_array_fget_borrowed(v_a_490_, v_literal_889_);
lean_inc_ref(v_h_491_);
lean_inc_ref(v_a_490_);
v___x_920_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3(v_a_490_, v_h_491_, v_literal_889_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_, v___y_504_);
if (lean_obj_tag(v___x_920_) == 0)
{
lean_object* v_a_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; 
v_a_921_ = lean_ctor_get(v___x_920_, 0);
lean_inc(v_a_921_);
lean_dec_ref_known(v___x_920_, 1);
lean_inc(v___x_919_);
v___x_922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_922_, 0, v___x_919_);
v___x_923_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__1));
v___x_924_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__5, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__5_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__5);
v___x_925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_925_, 0, v_a_918_);
v___x_926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_926_, 0, v_a_921_);
v___x_927_ = lean_unsigned_to_nat(4u);
v___x_928_ = lean_mk_empty_array_with_capacity(v___x_927_);
v___x_929_ = lean_array_push(v___x_928_, v___x_922_);
v___x_930_ = lean_array_push(v___x_929_, v___x_924_);
v___x_931_ = lean_array_push(v___x_930_, v___x_925_);
v___x_932_ = lean_array_push(v___x_931_, v___x_926_);
v___x_933_ = l_Lean_Meta_mkAppOptM(v___x_923_, v___x_932_, v___y_501_, v___y_502_, v___y_503_, v___y_504_);
if (lean_obj_tag(v___x_933_) == 0)
{
lean_object* v_a_934_; lean_object* v___x_935_; lean_object* v___x_937_; 
v_a_934_ = lean_ctor_get(v___x_933_, 0);
lean_inc(v_a_934_);
lean_dec_ref_known(v___x_933_, 1);
v___x_935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_935_, 0, v_a_934_);
if (v_isShared_517_ == 0)
{
lean_ctor_set(v___x_516_, 1, v___x_935_);
v___x_937_ = v___x_516_;
goto v_reusejp_936_;
}
else
{
lean_object* v_reuseFailAlloc_938_; 
v_reuseFailAlloc_938_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_938_, 0, v_fst_513_);
lean_ctor_set(v_reuseFailAlloc_938_, 1, v___x_935_);
v___x_937_ = v_reuseFailAlloc_938_;
goto v_reusejp_936_;
}
v_reusejp_936_:
{
v_a_507_ = v___x_937_;
goto v___jp_506_;
}
}
else
{
lean_object* v_a_939_; lean_object* v___x_941_; uint8_t v_isShared_942_; uint8_t v_isSharedCheck_946_; 
lean_del_object(v___x_516_);
lean_dec(v_fst_513_);
lean_dec_ref(v_h_491_);
lean_dec_ref(v_a_490_);
v_a_939_ = lean_ctor_get(v___x_933_, 0);
v_isSharedCheck_946_ = !lean_is_exclusive(v___x_933_);
if (v_isSharedCheck_946_ == 0)
{
v___x_941_ = v___x_933_;
v_isShared_942_ = v_isSharedCheck_946_;
goto v_resetjp_940_;
}
else
{
lean_inc(v_a_939_);
lean_dec(v___x_933_);
v___x_941_ = lean_box(0);
v_isShared_942_ = v_isSharedCheck_946_;
goto v_resetjp_940_;
}
v_resetjp_940_:
{
lean_object* v___x_944_; 
if (v_isShared_942_ == 0)
{
v___x_944_ = v___x_941_;
goto v_reusejp_943_;
}
else
{
lean_object* v_reuseFailAlloc_945_; 
v_reuseFailAlloc_945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_945_, 0, v_a_939_);
v___x_944_ = v_reuseFailAlloc_945_;
goto v_reusejp_943_;
}
v_reusejp_943_:
{
return v___x_944_;
}
}
}
}
else
{
lean_object* v_a_947_; lean_object* v___x_949_; uint8_t v_isShared_950_; uint8_t v_isSharedCheck_954_; 
lean_dec(v_a_918_);
lean_del_object(v___x_516_);
lean_dec(v_fst_513_);
lean_dec_ref(v_h_491_);
lean_dec_ref(v_a_490_);
v_a_947_ = lean_ctor_get(v___x_920_, 0);
v_isSharedCheck_954_ = !lean_is_exclusive(v___x_920_);
if (v_isSharedCheck_954_ == 0)
{
v___x_949_ = v___x_920_;
v_isShared_950_ = v_isSharedCheck_954_;
goto v_resetjp_948_;
}
else
{
lean_inc(v_a_947_);
lean_dec(v___x_920_);
v___x_949_ = lean_box(0);
v_isShared_950_ = v_isSharedCheck_954_;
goto v_resetjp_948_;
}
v_resetjp_948_:
{
lean_object* v___x_952_; 
if (v_isShared_950_ == 0)
{
v___x_952_ = v___x_949_;
goto v_reusejp_951_;
}
else
{
lean_object* v_reuseFailAlloc_953_; 
v_reuseFailAlloc_953_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_953_, 0, v_a_947_);
v___x_952_ = v_reuseFailAlloc_953_;
goto v_reusejp_951_;
}
v_reusejp_951_:
{
return v___x_952_;
}
}
}
}
else
{
lean_object* v_a_955_; lean_object* v___x_957_; uint8_t v_isShared_958_; uint8_t v_isSharedCheck_962_; 
lean_dec(v_literal_889_);
lean_del_object(v___x_516_);
lean_dec(v_fst_513_);
lean_dec_ref(v_h_491_);
lean_dec_ref(v_a_490_);
v_a_955_ = lean_ctor_get(v___x_917_, 0);
v_isSharedCheck_962_ = !lean_is_exclusive(v___x_917_);
if (v_isSharedCheck_962_ == 0)
{
v___x_957_ = v___x_917_;
v_isShared_958_ = v_isSharedCheck_962_;
goto v_resetjp_956_;
}
else
{
lean_inc(v_a_955_);
lean_dec(v___x_917_);
v___x_957_ = lean_box(0);
v_isShared_958_ = v_isSharedCheck_962_;
goto v_resetjp_956_;
}
v_resetjp_956_:
{
lean_object* v___x_960_; 
if (v_isShared_958_ == 0)
{
v___x_960_ = v___x_957_;
goto v_reusejp_959_;
}
else
{
lean_object* v_reuseFailAlloc_961_; 
v_reuseFailAlloc_961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_961_, 0, v_a_955_);
v___x_960_ = v_reuseFailAlloc_961_;
goto v_reusejp_959_;
}
v_reusejp_959_:
{
return v___x_960_;
}
}
}
}
}
}
default: 
{
lean_object* v_negative_964_; lean_object* v_positive_965_; lean_object* v_args_966_; uint8_t v___y_968_; lean_object* v_fst_969_; lean_object* v_snd_970_; lean_object* v___x_994_; uint8_t v___x_995_; 
v_negative_964_ = lean_ctor_get(v_a_701_, 0);
lean_inc(v_negative_964_);
v_positive_965_ = lean_ctor_get(v_a_701_, 1);
lean_inc(v_positive_965_);
v_args_966_ = lean_ctor_get(v_a_701_, 2);
lean_inc_ref(v_args_966_);
lean_dec_ref_known(v_a_701_, 3);
v___x_994_ = lean_array_get_size(v_a_490_);
v___x_995_ = lean_nat_dec_lt(v_negative_964_, v___x_994_);
if (v___x_995_ == 0)
{
lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; 
lean_dec_ref(v_args_966_);
lean_dec(v_positive_965_);
lean_dec_ref(v___f_518_);
v___x_996_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__1, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__1);
v___x_997_ = l_Nat_reprFast(v_negative_964_);
v___x_998_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_998_, 0, v___x_997_);
v___x_999_ = l_Lean_MessageData_ofFormat(v___x_998_);
v___x_1000_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1000_, 0, v___x_996_);
lean_ctor_set(v___x_1000_, 1, v___x_999_);
v___x_1001_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__3, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__3_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__3);
v___x_1002_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1002_, 0, v___x_1000_);
lean_ctor_set(v___x_1002_, 1, v___x_1001_);
v___x_1003_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1002_, v___y_501_, v___y_502_, v___y_503_, v___y_504_);
if (lean_obj_tag(v___x_1003_) == 0)
{
lean_object* v___x_1005_; 
lean_dec_ref_known(v___x_1003_, 1);
if (v_isShared_517_ == 0)
{
v___x_1005_ = v___x_516_;
goto v_reusejp_1004_;
}
else
{
lean_object* v_reuseFailAlloc_1006_; 
v_reuseFailAlloc_1006_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1006_, 0, v_fst_513_);
lean_ctor_set(v_reuseFailAlloc_1006_, 1, v_snd_514_);
v___x_1005_ = v_reuseFailAlloc_1006_;
goto v_reusejp_1004_;
}
v_reusejp_1004_:
{
v_a_507_ = v___x_1005_;
goto v___jp_506_;
}
}
else
{
lean_object* v_a_1007_; lean_object* v___x_1009_; uint8_t v_isShared_1010_; uint8_t v_isSharedCheck_1014_; 
lean_del_object(v___x_516_);
lean_dec(v_snd_514_);
lean_dec(v_fst_513_);
lean_dec_ref(v_h_491_);
lean_dec_ref(v_a_490_);
v_a_1007_ = lean_ctor_get(v___x_1003_, 0);
v_isSharedCheck_1014_ = !lean_is_exclusive(v___x_1003_);
if (v_isSharedCheck_1014_ == 0)
{
v___x_1009_ = v___x_1003_;
v_isShared_1010_ = v_isSharedCheck_1014_;
goto v_resetjp_1008_;
}
else
{
lean_inc(v_a_1007_);
lean_dec(v___x_1003_);
v___x_1009_ = lean_box(0);
v_isShared_1010_ = v_isSharedCheck_1014_;
goto v_resetjp_1008_;
}
v_resetjp_1008_:
{
lean_object* v___x_1012_; 
if (v_isShared_1010_ == 0)
{
v___x_1012_ = v___x_1009_;
goto v_reusejp_1011_;
}
else
{
lean_object* v_reuseFailAlloc_1013_; 
v_reuseFailAlloc_1013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1013_, 0, v_a_1007_);
v___x_1012_ = v_reuseFailAlloc_1013_;
goto v_reusejp_1011_;
}
v_reusejp_1011_:
{
return v___x_1012_;
}
}
}
}
else
{
lean_object* v___x_1015_; lean_object* v___x_1016_; 
lean_del_object(v___x_516_);
v___x_1015_ = lean_array_fget_borrowed(v_a_490_, v_negative_964_);
lean_inc(v___x_1015_);
v___x_1016_ = lp_vampireReplay_Vampire_Reconstruct_asNegation(v___x_1015_);
if (lean_obj_tag(v___x_1016_) == 0)
{
if (v___x_995_ == 0)
{
v___y_968_ = v___x_995_;
v_fst_969_ = v_negative_964_;
v_snd_970_ = v_positive_965_;
goto v___jp_967_;
}
else
{
v___y_968_ = v___x_995_;
v_fst_969_ = v_positive_965_;
v_snd_970_ = v_negative_964_;
goto v___jp_967_;
}
}
else
{
uint8_t v___x_1017_; 
lean_dec_ref_known(v___x_1016_, 1);
v___x_1017_ = 0;
v___y_968_ = v___x_1017_;
v_fst_969_ = v_negative_964_;
v_snd_970_ = v_positive_965_;
goto v___jp_967_;
}
}
v___jp_967_:
{
lean_object* v___x_971_; 
v___x_971_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__0(v_fst_513_, v_args_966_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_, v___y_504_);
if (lean_obj_tag(v___x_971_) == 0)
{
if (v___y_968_ == 0)
{
lean_object* v_a_972_; 
v_a_972_ = lean_ctor_get(v___x_971_, 0);
lean_inc(v_a_972_);
lean_dec_ref_known(v___x_971_, 1);
v___y_647_ = v_snd_970_;
v___y_648_ = v_fst_969_;
v_equal_649_ = v_a_972_;
v___y_650_ = v___y_499_;
v___y_651_ = v___y_500_;
v___y_652_ = v___y_501_;
v___y_653_ = v___y_502_;
v___y_654_ = v___y_503_;
v___y_655_ = v___y_504_;
goto v___jp_646_;
}
else
{
lean_object* v_a_973_; size_t v_sz_974_; size_t v___x_975_; lean_object* v___x_976_; 
v_a_973_ = lean_ctor_get(v___x_971_, 0);
lean_inc(v_a_973_);
lean_dec_ref_known(v___x_971_, 1);
v_sz_974_ = lean_array_size(v_a_973_);
v___x_975_ = ((size_t)0ULL);
v___x_976_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Closure_conflict_spec__1___redArg(v_sz_974_, v___x_975_, v_a_973_, v___y_501_, v___y_502_, v___y_503_, v___y_504_);
if (lean_obj_tag(v___x_976_) == 0)
{
lean_object* v_a_977_; 
v_a_977_ = lean_ctor_get(v___x_976_, 0);
lean_inc(v_a_977_);
lean_dec_ref_known(v___x_976_, 1);
v___y_647_ = v_snd_970_;
v___y_648_ = v_fst_969_;
v_equal_649_ = v_a_977_;
v___y_650_ = v___y_499_;
v___y_651_ = v___y_500_;
v___y_652_ = v___y_501_;
v___y_653_ = v___y_502_;
v___y_654_ = v___y_503_;
v___y_655_ = v___y_504_;
goto v___jp_646_;
}
else
{
lean_object* v_a_978_; lean_object* v___x_980_; uint8_t v_isShared_981_; uint8_t v_isSharedCheck_985_; 
lean_dec(v_snd_970_);
lean_dec(v_fst_969_);
lean_dec_ref(v___f_518_);
lean_dec(v_snd_514_);
lean_dec(v_fst_513_);
lean_dec_ref(v_h_491_);
lean_dec_ref(v_a_490_);
v_a_978_ = lean_ctor_get(v___x_976_, 0);
v_isSharedCheck_985_ = !lean_is_exclusive(v___x_976_);
if (v_isSharedCheck_985_ == 0)
{
v___x_980_ = v___x_976_;
v_isShared_981_ = v_isSharedCheck_985_;
goto v_resetjp_979_;
}
else
{
lean_inc(v_a_978_);
lean_dec(v___x_976_);
v___x_980_ = lean_box(0);
v_isShared_981_ = v_isSharedCheck_985_;
goto v_resetjp_979_;
}
v_resetjp_979_:
{
lean_object* v___x_983_; 
if (v_isShared_981_ == 0)
{
v___x_983_ = v___x_980_;
goto v_reusejp_982_;
}
else
{
lean_object* v_reuseFailAlloc_984_; 
v_reuseFailAlloc_984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_984_, 0, v_a_978_);
v___x_983_ = v_reuseFailAlloc_984_;
goto v_reusejp_982_;
}
v_reusejp_982_:
{
return v___x_983_;
}
}
}
}
}
else
{
lean_object* v_a_986_; lean_object* v___x_988_; uint8_t v_isShared_989_; uint8_t v_isSharedCheck_993_; 
lean_dec(v_snd_970_);
lean_dec(v_fst_969_);
lean_dec_ref(v___f_518_);
lean_dec(v_snd_514_);
lean_dec(v_fst_513_);
lean_dec_ref(v_h_491_);
lean_dec_ref(v_a_490_);
v_a_986_ = lean_ctor_get(v___x_971_, 0);
v_isSharedCheck_993_ = !lean_is_exclusive(v___x_971_);
if (v_isSharedCheck_993_ == 0)
{
v___x_988_ = v___x_971_;
v_isShared_989_ = v_isSharedCheck_993_;
goto v_resetjp_987_;
}
else
{
lean_inc(v_a_986_);
lean_dec(v___x_971_);
v___x_988_ = lean_box(0);
v_isShared_989_ = v_isSharedCheck_993_;
goto v_resetjp_987_;
}
v_resetjp_987_:
{
lean_object* v___x_991_; 
if (v_isShared_989_ == 0)
{
v___x_991_ = v___x_988_;
goto v_reusejp_990_;
}
else
{
lean_object* v_reuseFailAlloc_992_; 
v_reuseFailAlloc_992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_992_, 0, v_a_986_);
v___x_991_ = v_reuseFailAlloc_992_;
goto v_reusejp_990_;
}
v_reusejp_990_:
{
return v___x_991_;
}
}
}
}
}
}
v___jp_519_:
{
lean_object* v___x_531_; 
v___x_531_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__4(v_a_490_, v___f_518_, v___x_492_, v___y_527_, v___y_523_, v___y_525_, v___y_521_, v___y_524_, v___y_526_, v___y_528_);
if (lean_obj_tag(v___x_531_) == 0)
{
lean_object* v_a_532_; lean_object* v_snd_533_; lean_object* v___x_535_; uint8_t v_isShared_536_; uint8_t v_isSharedCheck_614_; 
v_a_532_ = lean_ctor_get(v___x_531_, 0);
lean_inc(v_a_532_);
lean_dec_ref_known(v___x_531_, 1);
v_snd_533_ = lean_ctor_get(v_a_532_, 1);
v_isSharedCheck_614_ = !lean_is_exclusive(v_a_532_);
if (v_isSharedCheck_614_ == 0)
{
lean_object* v_unused_615_; 
v_unused_615_ = lean_ctor_get(v_a_532_, 0);
lean_dec(v_unused_615_);
v___x_535_ = v_a_532_;
v_isShared_536_ = v_isSharedCheck_614_;
goto v_resetjp_534_;
}
else
{
lean_inc(v_snd_533_);
lean_dec(v_a_532_);
v___x_535_ = lean_box(0);
v_isShared_536_ = v_isSharedCheck_614_;
goto v_resetjp_534_;
}
v_resetjp_534_:
{
lean_object* v___x_537_; 
v___x_537_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Closure_0__Vampire_Reconstruct_Closure_congruent(v_fst_529_, v_snd_530_, v___y_522_, v___y_521_, v___y_524_, v___y_526_, v___y_528_);
lean_dec_ref(v___y_522_);
if (lean_obj_tag(v___x_537_) == 0)
{
lean_object* v_a_538_; lean_object* v___x_539_; uint8_t v___x_540_; 
v_a_538_ = lean_ctor_get(v___x_537_, 0);
lean_inc(v_a_538_);
lean_dec_ref_known(v___x_537_, 1);
v___x_539_ = lean_array_get_size(v_a_490_);
v___x_540_ = lean_nat_dec_lt(v___y_520_, v___x_539_);
if (v___x_540_ == 0)
{
lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; 
lean_dec(v_a_538_);
lean_dec(v_snd_533_);
v___x_541_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__1, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__1);
v___x_542_ = l_Nat_reprFast(v___y_520_);
v___x_543_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_543_, 0, v___x_542_);
v___x_544_ = l_Lean_MessageData_ofFormat(v___x_543_);
v___x_545_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_545_, 0, v___x_541_);
lean_ctor_set(v___x_545_, 1, v___x_544_);
v___x_546_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__3, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__3_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__3);
v___x_547_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_547_, 0, v___x_545_);
lean_ctor_set(v___x_547_, 1, v___x_546_);
v___x_548_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_547_, v___y_521_, v___y_524_, v___y_526_, v___y_528_);
if (lean_obj_tag(v___x_548_) == 0)
{
lean_object* v___x_550_; 
lean_dec_ref_known(v___x_548_, 1);
if (v_isShared_536_ == 0)
{
lean_ctor_set(v___x_535_, 1, v_snd_514_);
lean_ctor_set(v___x_535_, 0, v_fst_513_);
v___x_550_ = v___x_535_;
goto v_reusejp_549_;
}
else
{
lean_object* v_reuseFailAlloc_551_; 
v_reuseFailAlloc_551_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_551_, 0, v_fst_513_);
lean_ctor_set(v_reuseFailAlloc_551_, 1, v_snd_514_);
v___x_550_ = v_reuseFailAlloc_551_;
goto v_reusejp_549_;
}
v_reusejp_549_:
{
v_a_507_ = v___x_550_;
goto v___jp_506_;
}
}
else
{
lean_object* v_a_552_; lean_object* v___x_554_; uint8_t v_isShared_555_; uint8_t v_isSharedCheck_559_; 
lean_del_object(v___x_535_);
lean_dec(v_snd_514_);
lean_dec(v_fst_513_);
lean_dec_ref(v_h_491_);
lean_dec_ref(v_a_490_);
v_a_552_ = lean_ctor_get(v___x_548_, 0);
v_isSharedCheck_559_ = !lean_is_exclusive(v___x_548_);
if (v_isSharedCheck_559_ == 0)
{
v___x_554_ = v___x_548_;
v_isShared_555_ = v_isSharedCheck_559_;
goto v_resetjp_553_;
}
else
{
lean_inc(v_a_552_);
lean_dec(v___x_548_);
v___x_554_ = lean_box(0);
v_isShared_555_ = v_isSharedCheck_559_;
goto v_resetjp_553_;
}
v_resetjp_553_:
{
lean_object* v___x_557_; 
if (v_isShared_555_ == 0)
{
v___x_557_ = v___x_554_;
goto v_reusejp_556_;
}
else
{
lean_object* v_reuseFailAlloc_558_; 
v_reuseFailAlloc_558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_558_, 0, v_a_552_);
v___x_557_ = v_reuseFailAlloc_558_;
goto v_reusejp_556_;
}
v_reusejp_556_:
{
return v___x_557_;
}
}
}
}
else
{
lean_object* v___x_560_; 
lean_dec(v_snd_514_);
v___x_560_ = l_Lean_Meta_mkEqMP(v_a_538_, v_snd_533_, v___y_521_, v___y_524_, v___y_526_, v___y_528_);
if (lean_obj_tag(v___x_560_) == 0)
{
lean_object* v_a_561_; lean_object* v___x_562_; lean_object* v___x_563_; 
v_a_561_ = lean_ctor_get(v___x_560_, 0);
lean_inc(v_a_561_);
lean_dec_ref_known(v___x_560_, 1);
v___x_562_ = lean_array_fget_borrowed(v_a_490_, v___y_520_);
lean_inc_ref(v_h_491_);
lean_inc_ref(v_a_490_);
v___x_563_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3(v_a_490_, v_h_491_, v___y_520_, v___y_523_, v___y_525_, v___y_521_, v___y_524_, v___y_526_, v___y_528_);
if (lean_obj_tag(v___x_563_) == 0)
{
lean_object* v_a_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; 
v_a_564_ = lean_ctor_get(v___x_563_, 0);
lean_inc(v_a_564_);
lean_dec_ref_known(v___x_563_, 1);
lean_inc(v___x_562_);
v___x_565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_565_, 0, v___x_562_);
v___x_566_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__1));
v___x_567_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__5, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__5_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__5);
v___x_568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_568_, 0, v_a_561_);
v___x_569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_569_, 0, v_a_564_);
v___x_570_ = lean_unsigned_to_nat(4u);
v___x_571_ = lean_mk_empty_array_with_capacity(v___x_570_);
v___x_572_ = lean_array_push(v___x_571_, v___x_565_);
v___x_573_ = lean_array_push(v___x_572_, v___x_567_);
v___x_574_ = lean_array_push(v___x_573_, v___x_568_);
v___x_575_ = lean_array_push(v___x_574_, v___x_569_);
v___x_576_ = l_Lean_Meta_mkAppOptM(v___x_566_, v___x_575_, v___y_521_, v___y_524_, v___y_526_, v___y_528_);
if (lean_obj_tag(v___x_576_) == 0)
{
lean_object* v_a_577_; lean_object* v___x_578_; lean_object* v___x_580_; 
v_a_577_ = lean_ctor_get(v___x_576_, 0);
lean_inc(v_a_577_);
lean_dec_ref_known(v___x_576_, 1);
v___x_578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_578_, 0, v_a_577_);
if (v_isShared_536_ == 0)
{
lean_ctor_set(v___x_535_, 1, v___x_578_);
lean_ctor_set(v___x_535_, 0, v_fst_513_);
v___x_580_ = v___x_535_;
goto v_reusejp_579_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v_fst_513_);
lean_ctor_set(v_reuseFailAlloc_581_, 1, v___x_578_);
v___x_580_ = v_reuseFailAlloc_581_;
goto v_reusejp_579_;
}
v_reusejp_579_:
{
v_a_507_ = v___x_580_;
goto v___jp_506_;
}
}
else
{
lean_object* v_a_582_; lean_object* v___x_584_; uint8_t v_isShared_585_; uint8_t v_isSharedCheck_589_; 
lean_del_object(v___x_535_);
lean_dec(v_fst_513_);
lean_dec_ref(v_h_491_);
lean_dec_ref(v_a_490_);
v_a_582_ = lean_ctor_get(v___x_576_, 0);
v_isSharedCheck_589_ = !lean_is_exclusive(v___x_576_);
if (v_isSharedCheck_589_ == 0)
{
v___x_584_ = v___x_576_;
v_isShared_585_ = v_isSharedCheck_589_;
goto v_resetjp_583_;
}
else
{
lean_inc(v_a_582_);
lean_dec(v___x_576_);
v___x_584_ = lean_box(0);
v_isShared_585_ = v_isSharedCheck_589_;
goto v_resetjp_583_;
}
v_resetjp_583_:
{
lean_object* v___x_587_; 
if (v_isShared_585_ == 0)
{
v___x_587_ = v___x_584_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_588_; 
v_reuseFailAlloc_588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_588_, 0, v_a_582_);
v___x_587_ = v_reuseFailAlloc_588_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
return v___x_587_;
}
}
}
}
else
{
lean_object* v_a_590_; lean_object* v___x_592_; uint8_t v_isShared_593_; uint8_t v_isSharedCheck_597_; 
lean_dec(v_a_561_);
lean_del_object(v___x_535_);
lean_dec(v_fst_513_);
lean_dec_ref(v_h_491_);
lean_dec_ref(v_a_490_);
v_a_590_ = lean_ctor_get(v___x_563_, 0);
v_isSharedCheck_597_ = !lean_is_exclusive(v___x_563_);
if (v_isSharedCheck_597_ == 0)
{
v___x_592_ = v___x_563_;
v_isShared_593_ = v_isSharedCheck_597_;
goto v_resetjp_591_;
}
else
{
lean_inc(v_a_590_);
lean_dec(v___x_563_);
v___x_592_ = lean_box(0);
v_isShared_593_ = v_isSharedCheck_597_;
goto v_resetjp_591_;
}
v_resetjp_591_:
{
lean_object* v___x_595_; 
if (v_isShared_593_ == 0)
{
v___x_595_ = v___x_592_;
goto v_reusejp_594_;
}
else
{
lean_object* v_reuseFailAlloc_596_; 
v_reuseFailAlloc_596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_596_, 0, v_a_590_);
v___x_595_ = v_reuseFailAlloc_596_;
goto v_reusejp_594_;
}
v_reusejp_594_:
{
return v___x_595_;
}
}
}
}
else
{
lean_object* v_a_598_; lean_object* v___x_600_; uint8_t v_isShared_601_; uint8_t v_isSharedCheck_605_; 
lean_del_object(v___x_535_);
lean_dec(v___y_520_);
lean_dec(v_fst_513_);
lean_dec_ref(v_h_491_);
lean_dec_ref(v_a_490_);
v_a_598_ = lean_ctor_get(v___x_560_, 0);
v_isSharedCheck_605_ = !lean_is_exclusive(v___x_560_);
if (v_isSharedCheck_605_ == 0)
{
v___x_600_ = v___x_560_;
v_isShared_601_ = v_isSharedCheck_605_;
goto v_resetjp_599_;
}
else
{
lean_inc(v_a_598_);
lean_dec(v___x_560_);
v___x_600_ = lean_box(0);
v_isShared_601_ = v_isSharedCheck_605_;
goto v_resetjp_599_;
}
v_resetjp_599_:
{
lean_object* v___x_603_; 
if (v_isShared_601_ == 0)
{
v___x_603_ = v___x_600_;
goto v_reusejp_602_;
}
else
{
lean_object* v_reuseFailAlloc_604_; 
v_reuseFailAlloc_604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_604_, 0, v_a_598_);
v___x_603_ = v_reuseFailAlloc_604_;
goto v_reusejp_602_;
}
v_reusejp_602_:
{
return v___x_603_;
}
}
}
}
}
else
{
lean_object* v_a_606_; lean_object* v___x_608_; uint8_t v_isShared_609_; uint8_t v_isSharedCheck_613_; 
lean_del_object(v___x_535_);
lean_dec(v_snd_533_);
lean_dec(v___y_520_);
lean_dec(v_snd_514_);
lean_dec(v_fst_513_);
lean_dec_ref(v_h_491_);
lean_dec_ref(v_a_490_);
v_a_606_ = lean_ctor_get(v___x_537_, 0);
v_isSharedCheck_613_ = !lean_is_exclusive(v___x_537_);
if (v_isSharedCheck_613_ == 0)
{
v___x_608_ = v___x_537_;
v_isShared_609_ = v_isSharedCheck_613_;
goto v_resetjp_607_;
}
else
{
lean_inc(v_a_606_);
lean_dec(v___x_537_);
v___x_608_ = lean_box(0);
v_isShared_609_ = v_isSharedCheck_613_;
goto v_resetjp_607_;
}
v_resetjp_607_:
{
lean_object* v___x_611_; 
if (v_isShared_609_ == 0)
{
v___x_611_ = v___x_608_;
goto v_reusejp_610_;
}
else
{
lean_object* v_reuseFailAlloc_612_; 
v_reuseFailAlloc_612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_612_, 0, v_a_606_);
v___x_611_ = v_reuseFailAlloc_612_;
goto v_reusejp_610_;
}
v_reusejp_610_:
{
return v___x_611_;
}
}
}
}
}
else
{
lean_object* v_a_616_; lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_623_; 
lean_dec_ref(v_snd_530_);
lean_dec_ref(v_fst_529_);
lean_dec_ref(v___y_522_);
lean_dec(v___y_520_);
lean_dec(v_snd_514_);
lean_dec(v_fst_513_);
lean_dec_ref(v_h_491_);
lean_dec_ref(v_a_490_);
v_a_616_ = lean_ctor_get(v___x_531_, 0);
v_isSharedCheck_623_ = !lean_is_exclusive(v___x_531_);
if (v_isSharedCheck_623_ == 0)
{
v___x_618_ = v___x_531_;
v_isShared_619_ = v_isSharedCheck_623_;
goto v_resetjp_617_;
}
else
{
lean_inc(v_a_616_);
lean_dec(v___x_531_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_623_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
lean_object* v___x_621_; 
if (v_isShared_619_ == 0)
{
v___x_621_ = v___x_618_;
goto v_reusejp_620_;
}
else
{
lean_object* v_reuseFailAlloc_622_; 
v_reuseFailAlloc_622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_622_, 0, v_a_616_);
v___x_621_ = v_reuseFailAlloc_622_;
goto v_reusejp_620_;
}
v_reusejp_620_:
{
return v___x_621_;
}
}
}
}
v___jp_624_:
{
if (lean_obj_tag(v___y_634_) == 0)
{
lean_object* v_a_635_; lean_object* v_fst_636_; lean_object* v_snd_637_; 
v_a_635_ = lean_ctor_get(v___y_634_, 0);
lean_inc(v_a_635_);
lean_dec_ref_known(v___y_634_, 1);
v_fst_636_ = lean_ctor_get(v_a_635_, 0);
lean_inc(v_fst_636_);
v_snd_637_ = lean_ctor_get(v_a_635_, 1);
lean_inc(v_snd_637_);
lean_dec(v_a_635_);
v___y_520_ = v___y_626_;
v___y_521_ = v___y_625_;
v___y_522_ = v___y_628_;
v___y_523_ = v___y_627_;
v___y_524_ = v___y_630_;
v___y_525_ = v___y_629_;
v___y_526_ = v___y_631_;
v___y_527_ = v___y_632_;
v___y_528_ = v___y_633_;
v_fst_529_ = v_fst_636_;
v_snd_530_ = v_snd_637_;
goto v___jp_519_;
}
else
{
lean_object* v_a_638_; lean_object* v___x_640_; uint8_t v_isShared_641_; uint8_t v_isSharedCheck_645_; 
lean_dec(v___y_632_);
lean_dec_ref(v___y_628_);
lean_dec(v___y_626_);
lean_dec_ref(v___f_518_);
lean_dec(v_snd_514_);
lean_dec(v_fst_513_);
lean_dec_ref(v_h_491_);
lean_dec_ref(v_a_490_);
v_a_638_ = lean_ctor_get(v___y_634_, 0);
v_isSharedCheck_645_ = !lean_is_exclusive(v___y_634_);
if (v_isSharedCheck_645_ == 0)
{
v___x_640_ = v___y_634_;
v_isShared_641_ = v_isSharedCheck_645_;
goto v_resetjp_639_;
}
else
{
lean_inc(v_a_638_);
lean_dec(v___y_634_);
v___x_640_ = lean_box(0);
v_isShared_641_ = v_isSharedCheck_645_;
goto v_resetjp_639_;
}
v_resetjp_639_:
{
lean_object* v___x_643_; 
if (v_isShared_641_ == 0)
{
v___x_643_ = v___x_640_;
goto v_reusejp_642_;
}
else
{
lean_object* v_reuseFailAlloc_644_; 
v_reuseFailAlloc_644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_644_, 0, v_a_638_);
v___x_643_ = v_reuseFailAlloc_644_;
goto v_reusejp_642_;
}
v_reusejp_642_:
{
return v___x_643_;
}
}
}
}
v___jp_646_:
{
lean_object* v___x_656_; uint8_t v___x_657_; 
v___x_656_ = lean_array_get_size(v___x_494_);
v___x_657_ = lean_nat_dec_lt(v___y_648_, v___x_656_);
if (v___x_657_ == 0)
{
lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; 
v___x_658_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__1, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__1);
lean_inc(v___y_648_);
v___x_659_ = l_Nat_reprFast(v___y_648_);
v___x_660_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_660_, 0, v___x_659_);
v___x_661_ = l_Lean_MessageData_ofFormat(v___x_660_);
v___x_662_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_662_, 0, v___x_658_);
lean_ctor_set(v___x_662_, 1, v___x_661_);
v___x_663_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__3, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__3_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__3___closed__3);
v___x_664_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_664_, 0, v___x_662_);
lean_ctor_set(v___x_664_, 1, v___x_663_);
v___x_665_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_664_, v___y_652_, v___y_653_, v___y_654_, v___y_655_);
v___y_625_ = v___y_652_;
v___y_626_ = v___y_647_;
v___y_627_ = v___y_650_;
v___y_628_ = v_equal_649_;
v___y_629_ = v___y_651_;
v___y_630_ = v___y_653_;
v___y_631_ = v___y_654_;
v___y_632_ = v___y_648_;
v___y_633_ = v___y_655_;
v___y_634_ = v___x_665_;
goto v___jp_624_;
}
else
{
lean_object* v___x_666_; lean_object* v___x_667_; 
v___x_666_ = lean_array_fget_borrowed(v___x_494_, v___y_648_);
v___x_667_ = lp_vampireReplay_Vampire_Literal_symbol_x3f(v___x_666_);
if (lean_obj_tag(v___x_667_) == 1)
{
lean_object* v_val_668_; lean_object* v_name_669_; lean_object* v___x_670_; 
v_val_668_ = lean_ctor_get(v___x_667_, 0);
lean_inc(v_val_668_);
lean_dec_ref_known(v___x_667_, 1);
v_name_669_ = lean_ctor_get(v_val_668_, 0);
lean_inc_ref(v_name_669_);
lean_dec(v_val_668_);
v___x_670_ = lp_vampireReplay_Vampire_Reconstruct_symbolExpr(v_name_669_, v___y_650_, v___y_651_, v___y_652_, v___y_653_, v___y_654_, v___y_655_);
if (lean_obj_tag(v___x_670_) == 0)
{
lean_object* v_a_671_; lean_object* v___x_672_; size_t v_sz_673_; size_t v___x_674_; lean_object* v___x_675_; 
v_a_671_ = lean_ctor_get(v___x_670_, 0);
lean_inc(v_a_671_);
lean_dec_ref_known(v___x_670_, 1);
lean_inc(v___x_666_);
v___x_672_ = lp_vampireReplay_Vampire_Literal_args(v___x_666_);
v_sz_673_ = lean_array_size(v___x_672_);
v___x_674_ = ((size_t)0ULL);
v___x_675_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_term_spec__0(v_a_493_, v_sz_673_, v___x_674_, v___x_672_, v___y_650_, v___y_651_, v___y_652_, v___y_653_, v___y_654_, v___y_655_);
if (lean_obj_tag(v___x_675_) == 0)
{
lean_object* v_a_676_; 
v_a_676_ = lean_ctor_get(v___x_675_, 0);
lean_inc(v_a_676_);
lean_dec_ref_known(v___x_675_, 1);
v___y_520_ = v___y_647_;
v___y_521_ = v___y_652_;
v___y_522_ = v_equal_649_;
v___y_523_ = v___y_650_;
v___y_524_ = v___y_653_;
v___y_525_ = v___y_651_;
v___y_526_ = v___y_654_;
v___y_527_ = v___y_648_;
v___y_528_ = v___y_655_;
v_fst_529_ = v_a_671_;
v_snd_530_ = v_a_676_;
goto v___jp_519_;
}
else
{
lean_object* v_a_677_; lean_object* v___x_679_; uint8_t v_isShared_680_; uint8_t v_isSharedCheck_684_; 
lean_dec(v_a_671_);
lean_dec_ref(v_equal_649_);
lean_dec(v___y_648_);
lean_dec(v___y_647_);
lean_dec_ref(v___f_518_);
lean_dec(v_snd_514_);
lean_dec(v_fst_513_);
lean_dec_ref(v_h_491_);
lean_dec_ref(v_a_490_);
v_a_677_ = lean_ctor_get(v___x_675_, 0);
v_isSharedCheck_684_ = !lean_is_exclusive(v___x_675_);
if (v_isSharedCheck_684_ == 0)
{
v___x_679_ = v___x_675_;
v_isShared_680_ = v_isSharedCheck_684_;
goto v_resetjp_678_;
}
else
{
lean_inc(v_a_677_);
lean_dec(v___x_675_);
v___x_679_ = lean_box(0);
v_isShared_680_ = v_isSharedCheck_684_;
goto v_resetjp_678_;
}
v_resetjp_678_:
{
lean_object* v___x_682_; 
if (v_isShared_680_ == 0)
{
v___x_682_ = v___x_679_;
goto v_reusejp_681_;
}
else
{
lean_object* v_reuseFailAlloc_683_; 
v_reuseFailAlloc_683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_683_, 0, v_a_677_);
v___x_682_ = v_reuseFailAlloc_683_;
goto v_reusejp_681_;
}
v_reusejp_681_:
{
return v___x_682_;
}
}
}
}
else
{
lean_object* v_a_685_; lean_object* v___x_687_; uint8_t v_isShared_688_; uint8_t v_isSharedCheck_692_; 
lean_dec_ref(v_equal_649_);
lean_dec(v___y_648_);
lean_dec(v___y_647_);
lean_dec_ref(v___f_518_);
lean_dec(v_snd_514_);
lean_dec(v_fst_513_);
lean_dec_ref(v_h_491_);
lean_dec_ref(v_a_490_);
v_a_685_ = lean_ctor_get(v___x_670_, 0);
v_isSharedCheck_692_ = !lean_is_exclusive(v___x_670_);
if (v_isSharedCheck_692_ == 0)
{
v___x_687_ = v___x_670_;
v_isShared_688_ = v_isSharedCheck_692_;
goto v_resetjp_686_;
}
else
{
lean_inc(v_a_685_);
lean_dec(v___x_670_);
v___x_687_ = lean_box(0);
v_isShared_688_ = v_isSharedCheck_692_;
goto v_resetjp_686_;
}
v_resetjp_686_:
{
lean_object* v___x_690_; 
if (v_isShared_688_ == 0)
{
v___x_690_ = v___x_687_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_691_; 
v_reuseFailAlloc_691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_691_, 0, v_a_685_);
v___x_690_ = v_reuseFailAlloc_691_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
return v___x_690_;
}
}
}
}
else
{
lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; 
lean_dec(v___x_667_);
v___x_693_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__4___closed__1, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__4___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___lam__4___closed__1);
lean_inc(v___y_648_);
v___x_694_ = l_Nat_reprFast(v___y_648_);
v___x_695_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_695_, 0, v___x_694_);
v___x_696_ = l_Lean_MessageData_ofFormat(v___x_695_);
v___x_697_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_697_, 0, v___x_693_);
lean_ctor_set(v___x_697_, 1, v___x_696_);
v___x_698_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__7, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__7_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___closed__7);
v___x_699_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_699_, 0, v___x_697_);
lean_ctor_set(v___x_699_, 1, v___x_698_);
v___x_700_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_699_, v___y_652_, v___y_653_, v___y_654_, v___y_655_);
v___y_625_ = v___y_652_;
v___y_626_ = v___y_647_;
v___y_627_ = v___y_650_;
v___y_628_ = v_equal_649_;
v___y_629_ = v___y_651_;
v___y_630_ = v___y_653_;
v___y_631_ = v___y_654_;
v___y_632_ = v___y_648_;
v___y_633_ = v___y_655_;
v___y_634_ = v___x_700_;
goto v___jp_624_;
}
}
}
}
}
v___jp_506_:
{
size_t v___x_508_; size_t v___x_509_; 
v___x_508_ = ((size_t)1ULL);
v___x_509_ = lean_usize_add(v_i_497_, v___x_508_);
v_i_497_ = v___x_509_;
v_b_498_ = v_a_507_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2___boxed(lean_object* v_a_1019_, lean_object* v_h_1020_, lean_object* v___x_1021_, lean_object* v_a_1022_, lean_object* v___x_1023_, lean_object* v_as_1024_, lean_object* v_sz_1025_, lean_object* v_i_1026_, lean_object* v_b_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_){
_start:
{
size_t v_sz_boxed_1035_; size_t v_i_boxed_1036_; lean_object* v_res_1037_; 
v_sz_boxed_1035_ = lean_unbox_usize(v_sz_1025_);
lean_dec(v_sz_1025_);
v_i_boxed_1036_ = lean_unbox_usize(v_i_1026_);
lean_dec(v_i_1026_);
v_res_1037_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2(v_a_1019_, v_h_1020_, v___x_1021_, v_a_1022_, v___x_1023_, v_as_1024_, v_sz_boxed_1035_, v_i_boxed_1036_, v_b_1027_, v___y_1028_, v___y_1029_, v___y_1030_, v___y_1031_, v___y_1032_, v___y_1033_);
lean_dec(v___y_1033_);
lean_dec_ref(v___y_1032_);
lean_dec(v___y_1031_);
lean_dec_ref(v___y_1030_);
lean_dec(v___y_1029_);
lean_dec_ref(v___y_1028_);
lean_dec_ref(v_as_1024_);
lean_dec_ref(v___x_1023_);
lean_dec_ref(v_a_1022_);
lean_dec_ref(v___x_1021_);
return v_res_1037_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1039_; lean_object* v___x_1040_; 
v___x_1039_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__0___closed__0));
v___x_1040_ = l_Lean_stringToMessageData(v___x_1039_);
return v___x_1040_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1042_; lean_object* v___x_1043_; 
v___x_1042_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__0___closed__2));
v___x_1043_ = l_Lean_stringToMessageData(v___x_1042_);
return v___x_1043_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__0(lean_object* v___x_1044_, lean_object* v_recorded_1045_, lean_object* v_a_1046_, lean_object* v_unit_1047_, lean_object* v_a_1048_, lean_object* v___x_1049_, size_t v___x_1050_, lean_object* v_h_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_){
_start:
{
lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; size_t v_sz_1062_; lean_object* v___x_1063_; 
v___x_1059_ = lean_mk_empty_array_with_capacity(v___x_1044_);
v___x_1060_ = lean_box(0);
v___x_1061_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1061_, 0, v___x_1059_);
lean_ctor_set(v___x_1061_, 1, v___x_1060_);
v_sz_1062_ = lean_array_size(v_recorded_1045_);
lean_inc_ref(v_h_1051_);
v___x_1063_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Closure_conflict_spec__2(v_a_1046_, v_h_1051_, v_unit_1047_, v_a_1048_, v___x_1049_, v_recorded_1045_, v_sz_1062_, v___x_1050_, v___x_1061_, v___y_1052_, v___y_1053_, v___y_1054_, v___y_1055_, v___y_1056_, v___y_1057_);
if (lean_obj_tag(v___x_1063_) == 0)
{
lean_object* v_a_1064_; lean_object* v_snd_1065_; lean_object* v___x_1067_; uint8_t v_isShared_1068_; uint8_t v_isSharedCheck_1089_; 
v_a_1064_ = lean_ctor_get(v___x_1063_, 0);
lean_inc(v_a_1064_);
lean_dec_ref_known(v___x_1063_, 1);
v_snd_1065_ = lean_ctor_get(v_a_1064_, 1);
v_isSharedCheck_1089_ = !lean_is_exclusive(v_a_1064_);
if (v_isSharedCheck_1089_ == 0)
{
lean_object* v_unused_1090_; 
v_unused_1090_ = lean_ctor_get(v_a_1064_, 0);
lean_dec(v_unused_1090_);
v___x_1067_ = v_a_1064_;
v_isShared_1068_ = v_isSharedCheck_1089_;
goto v_resetjp_1066_;
}
else
{
lean_inc(v_snd_1065_);
lean_dec(v_a_1064_);
v___x_1067_ = lean_box(0);
v_isShared_1068_ = v_isSharedCheck_1089_;
goto v_resetjp_1066_;
}
v_resetjp_1066_:
{
if (lean_obj_tag(v_snd_1065_) == 1)
{
lean_object* v_val_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; uint8_t v___x_1073_; uint8_t v___x_1074_; uint8_t v___x_1075_; lean_object* v___x_1076_; 
lean_del_object(v___x_1067_);
v_val_1069_ = lean_ctor_get(v_snd_1065_, 0);
lean_inc(v_val_1069_);
lean_dec_ref_known(v_snd_1065_, 1);
v___x_1070_ = lean_unsigned_to_nat(1u);
v___x_1071_ = lean_mk_empty_array_with_capacity(v___x_1070_);
v___x_1072_ = lean_array_push(v___x_1071_, v_h_1051_);
v___x_1073_ = 0;
v___x_1074_ = 1;
v___x_1075_ = 1;
v___x_1076_ = l_Lean_Meta_mkLambdaFVars(v___x_1072_, v_val_1069_, v___x_1073_, v___x_1074_, v___x_1073_, v___x_1074_, v___x_1075_, v___y_1054_, v___y_1055_, v___y_1056_, v___y_1057_);
lean_dec_ref(v___x_1072_);
return v___x_1076_;
}
else
{
lean_object* v___x_1077_; uint32_t v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1084_; 
lean_dec(v_snd_1065_);
lean_dec_ref(v_h_1051_);
v___x_1077_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__0___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__0___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__0___closed__1);
v___x_1078_ = lp_vampireReplay_Vampire_Unit_number(v_unit_1047_);
v___x_1079_ = lean_uint32_to_nat(v___x_1078_);
v___x_1080_ = l_Nat_reprFast(v___x_1079_);
v___x_1081_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1081_, 0, v___x_1080_);
v___x_1082_ = l_Lean_MessageData_ofFormat(v___x_1081_);
if (v_isShared_1068_ == 0)
{
lean_ctor_set_tag(v___x_1067_, 7);
lean_ctor_set(v___x_1067_, 1, v___x_1082_);
lean_ctor_set(v___x_1067_, 0, v___x_1077_);
v___x_1084_ = v___x_1067_;
goto v_reusejp_1083_;
}
else
{
lean_object* v_reuseFailAlloc_1088_; 
v_reuseFailAlloc_1088_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1088_, 0, v___x_1077_);
lean_ctor_set(v_reuseFailAlloc_1088_, 1, v___x_1082_);
v___x_1084_ = v_reuseFailAlloc_1088_;
goto v_reusejp_1083_;
}
v_reusejp_1083_:
{
lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; 
v___x_1085_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__0___closed__3, &lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__0___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__0___closed__3);
v___x_1086_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1086_, 0, v___x_1084_);
lean_ctor_set(v___x_1086_, 1, v___x_1085_);
v___x_1087_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1086_, v___y_1054_, v___y_1055_, v___y_1056_, v___y_1057_);
return v___x_1087_;
}
}
}
}
else
{
lean_object* v_a_1091_; lean_object* v___x_1093_; uint8_t v_isShared_1094_; uint8_t v_isSharedCheck_1098_; 
lean_dec_ref(v_h_1051_);
v_a_1091_ = lean_ctor_get(v___x_1063_, 0);
v_isSharedCheck_1098_ = !lean_is_exclusive(v___x_1063_);
if (v_isSharedCheck_1098_ == 0)
{
v___x_1093_ = v___x_1063_;
v_isShared_1094_ = v_isSharedCheck_1098_;
goto v_resetjp_1092_;
}
else
{
lean_inc(v_a_1091_);
lean_dec(v___x_1063_);
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
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__0___boxed(lean_object* v___x_1099_, lean_object* v_recorded_1100_, lean_object* v_a_1101_, lean_object* v_unit_1102_, lean_object* v_a_1103_, lean_object* v___x_1104_, lean_object* v___x_1105_, lean_object* v_h_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_, lean_object* v___y_1113_){
_start:
{
size_t v___x_47091__boxed_1114_; lean_object* v_res_1115_; 
v___x_47091__boxed_1114_ = lean_unbox_usize(v___x_1105_);
lean_dec(v___x_1105_);
v_res_1115_ = lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__0(v___x_1099_, v_recorded_1100_, v_a_1101_, v_unit_1102_, v_a_1103_, v___x_1104_, v___x_47091__boxed_1114_, v_h_1106_, v___y_1107_, v___y_1108_, v___y_1109_, v___y_1110_, v___y_1111_, v___y_1112_);
lean_dec(v___y_1112_);
lean_dec_ref(v___y_1111_);
lean_dec(v___y_1110_);
lean_dec_ref(v___y_1109_);
lean_dec(v___y_1108_);
lean_dec_ref(v___y_1107_);
lean_dec_ref(v___x_1104_);
lean_dec_ref(v_a_1103_);
lean_dec_ref(v_unit_1102_);
lean_dec_ref(v_recorded_1100_);
lean_dec(v___x_1099_);
return v_res_1115_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__1___closed__0(void){
_start:
{
lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; 
v___x_1116_ = lean_box(0);
v___x_1117_ = lean_unsigned_to_nat(16u);
v___x_1118_ = lean_mk_array(v___x_1117_, v___x_1116_);
return v___x_1118_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; 
v___x_1119_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__1___closed__0, &lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__1___closed__0_once, _init_lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__1___closed__0);
v___x_1120_ = lean_unsigned_to_nat(0u);
v___x_1121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1121_, 0, v___x_1120_);
lean_ctor_set(v___x_1121_, 1, v___x_1119_);
return v___x_1121_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__1___closed__6(void){
_start:
{
lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; 
v___x_1128_ = lean_box(0);
v___x_1129_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__1___closed__5));
v___x_1130_ = l_Lean_Expr_const___override(v___x_1129_, v___x_1128_);
return v___x_1130_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__1(lean_object* v___x_1133_, lean_object* v_val_1134_, lean_object* v_recorded_1135_, lean_object* v_unit_1136_, lean_object* v_xs_1137_, lean_object* v_target_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_, lean_object* v___y_1143_, lean_object* v___y_1144_){
_start:
{
lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; size_t v_sz_1149_; size_t v___x_1150_; lean_object* v___x_1151_; 
v___x_1146_ = lean_unsigned_to_nat(0u);
v___x_1147_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__1___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__1___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__1___closed__1);
v___x_1148_ = l_Array_zip___redArg(v_xs_1137_, v___x_1133_);
v_sz_1149_ = lean_array_size(v___x_1148_);
v___x_1150_ = ((size_t)0ULL);
v___x_1151_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__0___redArg(v___x_1148_, v_sz_1149_, v___x_1150_, v___x_1147_);
lean_dec_ref(v___x_1148_);
if (lean_obj_tag(v___x_1151_) == 0)
{
lean_object* v_a_1152_; lean_object* v___x_1153_; size_t v_sz_1154_; lean_object* v___x_1155_; 
v_a_1152_ = lean_ctor_get(v___x_1151_, 0);
lean_inc(v_a_1152_);
lean_dec_ref_known(v___x_1151_, 1);
v___x_1153_ = lp_vampireReplay_Vampire_Clause_literals(v_val_1134_);
v_sz_1154_ = lean_array_size(v___x_1153_);
lean_inc_ref(v___x_1153_);
v___x_1155_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_clause_spec__0(v_a_1152_, v_sz_1154_, v___x_1150_, v___x_1153_, v___y_1139_, v___y_1140_, v___y_1141_, v___y_1142_, v___y_1143_, v___y_1144_);
if (lean_obj_tag(v___x_1155_) == 0)
{
lean_object* v_a_1156_; lean_object* v___x_1157_; lean_object* v___f_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; 
v_a_1156_ = lean_ctor_get(v___x_1155_, 0);
lean_inc(v_a_1156_);
lean_dec_ref_known(v___x_1155_, 1);
v___x_1157_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__1___boxed__const__1));
v___f_1158_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__0___boxed), 15, 7);
lean_closure_set(v___f_1158_, 0, v___x_1146_);
lean_closure_set(v___f_1158_, 1, v_recorded_1135_);
lean_closure_set(v___f_1158_, 2, v_a_1156_);
lean_closure_set(v___f_1158_, 3, v_unit_1136_);
lean_closure_set(v___f_1158_, 4, v_a_1152_);
lean_closure_set(v___f_1158_, 5, v___x_1153_);
lean_closure_set(v___f_1158_, 6, v___x_1157_);
v___x_1159_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__1___closed__3));
v___x_1160_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__1___closed__6, &lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__1___closed__6_once, _init_lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__1___closed__6);
lean_inc_ref(v_target_1138_);
v___x_1161_ = l_Lean_Expr_app___override(v___x_1160_, v_target_1138_);
v___x_1162_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_1159_, v___x_1161_, v___f_1158_, v___y_1139_, v___y_1140_, v___y_1141_, v___y_1142_, v___y_1143_, v___y_1144_);
if (lean_obj_tag(v___x_1162_) == 0)
{
lean_object* v_a_1163_; lean_object* v___x_1164_; uint8_t v___x_1165_; uint8_t v___x_1166_; uint8_t v___x_1167_; lean_object* v___x_1168_; 
v_a_1163_ = lean_ctor_get(v___x_1162_, 0);
lean_inc(v_a_1163_);
lean_dec_ref_known(v___x_1162_, 1);
v___x_1164_ = lp_vampireReplay_Vampire_Reconstruct_ofNotNot(v_target_1138_, v_a_1163_);
v___x_1165_ = 0;
v___x_1166_ = 1;
v___x_1167_ = 1;
v___x_1168_ = l_Lean_Meta_mkLambdaFVars(v_xs_1137_, v___x_1164_, v___x_1165_, v___x_1166_, v___x_1165_, v___x_1166_, v___x_1167_, v___y_1141_, v___y_1142_, v___y_1143_, v___y_1144_);
return v___x_1168_;
}
else
{
lean_dec_ref(v_target_1138_);
return v___x_1162_;
}
}
else
{
lean_object* v_a_1169_; lean_object* v___x_1171_; uint8_t v_isShared_1172_; uint8_t v_isSharedCheck_1176_; 
lean_dec_ref(v___x_1153_);
lean_dec(v_a_1152_);
lean_dec_ref(v_target_1138_);
lean_dec_ref(v_unit_1136_);
lean_dec_ref(v_recorded_1135_);
v_a_1169_ = lean_ctor_get(v___x_1155_, 0);
v_isSharedCheck_1176_ = !lean_is_exclusive(v___x_1155_);
if (v_isSharedCheck_1176_ == 0)
{
v___x_1171_ = v___x_1155_;
v_isShared_1172_ = v_isSharedCheck_1176_;
goto v_resetjp_1170_;
}
else
{
lean_inc(v_a_1169_);
lean_dec(v___x_1155_);
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
lean_object* v_a_1177_; lean_object* v___x_1179_; uint8_t v_isShared_1180_; uint8_t v_isSharedCheck_1184_; 
lean_dec_ref(v_target_1138_);
lean_dec_ref(v_unit_1136_);
lean_dec_ref(v_recorded_1135_);
lean_dec_ref(v_val_1134_);
v_a_1177_ = lean_ctor_get(v___x_1151_, 0);
v_isSharedCheck_1184_ = !lean_is_exclusive(v___x_1151_);
if (v_isSharedCheck_1184_ == 0)
{
v___x_1179_ = v___x_1151_;
v_isShared_1180_ = v_isSharedCheck_1184_;
goto v_resetjp_1178_;
}
else
{
lean_inc(v_a_1177_);
lean_dec(v___x_1151_);
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
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__1___boxed(lean_object* v___x_1185_, lean_object* v_val_1186_, lean_object* v_recorded_1187_, lean_object* v_unit_1188_, lean_object* v_xs_1189_, lean_object* v_target_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_){
_start:
{
lean_object* v_res_1198_; 
v_res_1198_ = lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__1(v___x_1185_, v_val_1186_, v_recorded_1187_, v_unit_1188_, v_xs_1189_, v_target_1190_, v___y_1191_, v___y_1192_, v___y_1193_, v___y_1194_, v___y_1195_, v___y_1196_);
lean_dec(v___y_1196_);
lean_dec_ref(v___y_1195_);
lean_dec(v___y_1194_);
lean_dec_ref(v___y_1193_);
lean_dec(v___y_1192_);
lean_dec_ref(v___y_1191_);
lean_dec_ref(v_xs_1189_);
lean_dec_ref(v___x_1185_);
return v_res_1198_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___closed__1(void){
_start:
{
lean_object* v___x_1200_; lean_object* v___x_1201_; 
v___x_1200_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___closed__0));
v___x_1201_ = l_Lean_stringToMessageData(v___x_1200_);
return v___x_1201_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___closed__3(void){
_start:
{
lean_object* v___x_1203_; lean_object* v___x_1204_; 
v___x_1203_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___closed__2));
v___x_1204_ = l_Lean_stringToMessageData(v___x_1203_);
return v___x_1204_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___closed__5(void){
_start:
{
lean_object* v___x_1206_; lean_object* v___x_1207_; 
v___x_1206_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___closed__4));
v___x_1207_ = l_Lean_stringToMessageData(v___x_1206_);
return v___x_1207_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Closure_conflict(lean_object* v_step_1208_, lean_object* v_a_1209_, lean_object* v_a_1210_, lean_object* v_a_1211_, lean_object* v_a_1212_, lean_object* v_a_1213_, lean_object* v_a_1214_){
_start:
{
lean_object* v_unit_1216_; lean_object* v___x_1217_; 
v_unit_1216_ = lean_ctor_get(v_step_1208_, 0);
lean_inc_ref_n(v_unit_1216_, 2);
v___x_1217_ = lp_vampireReplay_Vampire_Unit_clause_x3f(v_unit_1216_);
if (lean_obj_tag(v___x_1217_) == 1)
{
lean_object* v_val_1218_; lean_object* v___x_1220_; uint8_t v_isShared_1221_; uint8_t v_isSharedCheck_1289_; 
v_val_1218_ = lean_ctor_get(v___x_1217_, 0);
v_isSharedCheck_1289_ = !lean_is_exclusive(v___x_1217_);
if (v_isSharedCheck_1289_ == 0)
{
v___x_1220_ = v___x_1217_;
v_isShared_1221_ = v_isSharedCheck_1289_;
goto v_resetjp_1219_;
}
else
{
lean_inc(v_val_1218_);
lean_dec(v___x_1217_);
v___x_1220_ = lean_box(0);
v_isShared_1221_ = v_isSharedCheck_1289_;
goto v_resetjp_1219_;
}
v_resetjp_1219_:
{
lean_object* v___y_1223_; lean_object* v___y_1224_; lean_object* v___y_1225_; lean_object* v___y_1226_; lean_object* v___y_1227_; lean_object* v___y_1228_; lean_object* v___y_1229_; lean_object* v_recorded_1241_; lean_object* v___y_1242_; lean_object* v___y_1243_; lean_object* v___y_1244_; lean_object* v___y_1245_; lean_object* v___y_1246_; lean_object* v___y_1247_; lean_object* v___x_1269_; 
lean_inc_ref(v_unit_1216_);
v___x_1269_ = lp_vampireReplay_Vampire_Unit_congruences(v_unit_1216_);
if (lean_obj_tag(v___x_1269_) == 0)
{
lean_object* v_a_1270_; lean_object* v___x_1272_; uint8_t v_isShared_1273_; uint8_t v_isSharedCheck_1287_; 
lean_del_object(v___x_1220_);
lean_dec(v_val_1218_);
lean_dec_ref(v_unit_1216_);
lean_dec_ref(v_step_1208_);
v_a_1270_ = lean_ctor_get(v___x_1269_, 0);
v_isSharedCheck_1287_ = !lean_is_exclusive(v___x_1269_);
if (v_isSharedCheck_1287_ == 0)
{
v___x_1272_ = v___x_1269_;
v_isShared_1273_ = v_isSharedCheck_1287_;
goto v_resetjp_1271_;
}
else
{
lean_inc(v_a_1270_);
lean_dec(v___x_1269_);
v___x_1272_ = lean_box(0);
v_isShared_1273_ = v_isSharedCheck_1287_;
goto v_resetjp_1271_;
}
v_resetjp_1271_:
{
lean_object* v___x_1275_; 
if (v_isShared_1273_ == 0)
{
lean_ctor_set_tag(v___x_1272_, 3);
v___x_1275_ = v___x_1272_;
goto v_reusejp_1274_;
}
else
{
lean_object* v_reuseFailAlloc_1286_; 
v_reuseFailAlloc_1286_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1286_, 0, v_a_1270_);
v___x_1275_ = v_reuseFailAlloc_1286_;
goto v_reusejp_1274_;
}
v_reusejp_1274_:
{
lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v_a_1278_; lean_object* v___x_1280_; uint8_t v_isShared_1281_; uint8_t v_isSharedCheck_1285_; 
v___x_1276_ = l_Lean_MessageData_ofFormat(v___x_1275_);
v___x_1277_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1276_, v_a_1211_, v_a_1212_, v_a_1213_, v_a_1214_);
v_a_1278_ = lean_ctor_get(v___x_1277_, 0);
v_isSharedCheck_1285_ = !lean_is_exclusive(v___x_1277_);
if (v_isSharedCheck_1285_ == 0)
{
v___x_1280_ = v___x_1277_;
v_isShared_1281_ = v_isSharedCheck_1285_;
goto v_resetjp_1279_;
}
else
{
lean_inc(v_a_1278_);
lean_dec(v___x_1277_);
v___x_1280_ = lean_box(0);
v_isShared_1281_ = v_isSharedCheck_1285_;
goto v_resetjp_1279_;
}
v_resetjp_1279_:
{
lean_object* v___x_1283_; 
if (v_isShared_1281_ == 0)
{
v___x_1283_ = v___x_1280_;
goto v_reusejp_1282_;
}
else
{
lean_object* v_reuseFailAlloc_1284_; 
v_reuseFailAlloc_1284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1284_, 0, v_a_1278_);
v___x_1283_ = v_reuseFailAlloc_1284_;
goto v_reusejp_1282_;
}
v_reusejp_1282_:
{
return v___x_1283_;
}
}
}
}
}
else
{
lean_object* v_a_1288_; 
v_a_1288_ = lean_ctor_get(v___x_1269_, 0);
lean_inc(v_a_1288_);
lean_dec_ref_known(v___x_1269_, 1);
v_recorded_1241_ = v_a_1288_;
v___y_1242_ = v_a_1209_;
v___y_1243_ = v_a_1210_;
v___y_1244_ = v_a_1211_;
v___y_1245_ = v_a_1212_;
v___y_1246_ = v_a_1213_;
v___y_1247_ = v_a_1214_;
goto v___jp_1240_;
}
v___jp_1222_:
{
lean_object* v___x_1230_; 
v___x_1230_ = lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(v_step_1208_, v___y_1227_, v___y_1228_, v___y_1226_, v___y_1225_, v___y_1229_, v___y_1224_);
if (lean_obj_tag(v___x_1230_) == 0)
{
lean_object* v_a_1231_; lean_object* v___x_1232_; lean_object* v___f_1233_; lean_object* v___x_1234_; lean_object* v___x_1236_; 
v_a_1231_ = lean_ctor_get(v___x_1230_, 0);
lean_inc(v_a_1231_);
lean_dec_ref_known(v___x_1230_, 1);
lean_inc_ref(v_unit_1216_);
v___x_1232_ = lp_vampireReplay_Vampire_Unit_varSorts(v_unit_1216_);
lean_inc_ref(v___x_1232_);
v___f_1233_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___lam__1___boxed), 13, 4);
lean_closure_set(v___f_1233_, 0, v___x_1232_);
lean_closure_set(v___f_1233_, 1, v_val_1218_);
lean_closure_set(v___f_1233_, 2, v___y_1223_);
lean_closure_set(v___f_1233_, 3, v_unit_1216_);
v___x_1234_ = lean_array_get_size(v___x_1232_);
lean_dec_ref(v___x_1232_);
if (v_isShared_1221_ == 0)
{
lean_ctor_set(v___x_1220_, 0, v___x_1234_);
v___x_1236_ = v___x_1220_;
goto v_reusejp_1235_;
}
else
{
lean_object* v_reuseFailAlloc_1239_; 
v_reuseFailAlloc_1239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1239_, 0, v___x_1234_);
v___x_1236_ = v_reuseFailAlloc_1239_;
goto v_reusejp_1235_;
}
v_reusejp_1235_:
{
uint8_t v___x_1237_; lean_object* v___x_1238_; 
v___x_1237_ = 0;
v___x_1238_ = lp_vampireReplay_Lean_Meta_forallBoundedTelescope___at___00Vampire_Reconstruct_relateLiterals_spec__6___redArg(v_a_1231_, v___x_1236_, v___f_1233_, v___x_1237_, v___x_1237_, v___y_1227_, v___y_1228_, v___y_1226_, v___y_1225_, v___y_1229_, v___y_1224_);
return v___x_1238_;
}
}
else
{
lean_dec_ref(v___y_1223_);
lean_del_object(v___x_1220_);
lean_dec(v_val_1218_);
lean_dec_ref(v_unit_1216_);
return v___x_1230_;
}
}
v___jp_1240_:
{
lean_object* v___x_1248_; lean_object* v___x_1249_; uint8_t v___x_1250_; 
v___x_1248_ = lean_array_get_size(v_recorded_1241_);
v___x_1249_ = lean_unsigned_to_nat(0u);
v___x_1250_ = lean_nat_dec_eq(v___x_1248_, v___x_1249_);
if (v___x_1250_ == 0)
{
v___y_1223_ = v_recorded_1241_;
v___y_1224_ = v___y_1247_;
v___y_1225_ = v___y_1245_;
v___y_1226_ = v___y_1244_;
v___y_1227_ = v___y_1242_;
v___y_1228_ = v___y_1243_;
v___y_1229_ = v___y_1246_;
goto v___jp_1222_;
}
else
{
lean_object* v___x_1251_; uint32_t v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v_a_1261_; lean_object* v___x_1263_; uint8_t v_isShared_1264_; uint8_t v_isSharedCheck_1268_; 
lean_dec_ref(v_recorded_1241_);
lean_del_object(v___x_1220_);
lean_dec(v_val_1218_);
lean_dec_ref(v_step_1208_);
v___x_1251_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___closed__1);
v___x_1252_ = lp_vampireReplay_Vampire_Unit_number(v_unit_1216_);
lean_dec_ref(v_unit_1216_);
v___x_1253_ = lean_uint32_to_nat(v___x_1252_);
v___x_1254_ = l_Nat_reprFast(v___x_1253_);
v___x_1255_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1255_, 0, v___x_1254_);
v___x_1256_ = l_Lean_MessageData_ofFormat(v___x_1255_);
v___x_1257_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1257_, 0, v___x_1251_);
lean_ctor_set(v___x_1257_, 1, v___x_1256_);
v___x_1258_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___closed__3, &lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___closed__3);
v___x_1259_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1259_, 0, v___x_1257_);
lean_ctor_set(v___x_1259_, 1, v___x_1258_);
v___x_1260_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1259_, v___y_1244_, v___y_1245_, v___y_1246_, v___y_1247_);
v_a_1261_ = lean_ctor_get(v___x_1260_, 0);
v_isSharedCheck_1268_ = !lean_is_exclusive(v___x_1260_);
if (v_isSharedCheck_1268_ == 0)
{
v___x_1263_ = v___x_1260_;
v_isShared_1264_ = v_isSharedCheck_1268_;
goto v_resetjp_1262_;
}
else
{
lean_inc(v_a_1261_);
lean_dec(v___x_1260_);
v___x_1263_ = lean_box(0);
v_isShared_1264_ = v_isSharedCheck_1268_;
goto v_resetjp_1262_;
}
v_resetjp_1262_:
{
lean_object* v___x_1266_; 
if (v_isShared_1264_ == 0)
{
v___x_1266_ = v___x_1263_;
goto v_reusejp_1265_;
}
else
{
lean_object* v_reuseFailAlloc_1267_; 
v_reuseFailAlloc_1267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1267_, 0, v_a_1261_);
v___x_1266_ = v_reuseFailAlloc_1267_;
goto v_reusejp_1265_;
}
v_reusejp_1265_:
{
return v___x_1266_;
}
}
}
}
}
}
else
{
lean_object* v___x_1290_; lean_object* v___x_1291_; 
lean_dec(v___x_1217_);
lean_dec_ref(v_unit_1216_);
lean_dec_ref(v_step_1208_);
v___x_1290_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___closed__5, &lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___closed__5_once, _init_lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___closed__5);
v___x_1291_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1290_, v_a_1211_, v_a_1212_, v_a_1213_, v_a_1214_);
return v___x_1291_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Closure_conflict___boxed(lean_object* v_step_1292_, lean_object* v_a_1293_, lean_object* v_a_1294_, lean_object* v_a_1295_, lean_object* v_a_1296_, lean_object* v_a_1297_, lean_object* v_a_1298_, lean_object* v_a_1299_){
_start:
{
lean_object* v_res_1300_; 
v_res_1300_ = lp_vampireReplay_Vampire_Reconstruct_Closure_conflict(v_step_1292_, v_a_1293_, v_a_1294_, v_a_1295_, v_a_1296_, v_a_1297_, v_a_1298_);
lean_dec(v_a_1298_);
lean_dec_ref(v_a_1297_);
lean_dec(v_a_1296_);
lean_dec_ref(v_a_1295_);
lean_dec(v_a_1294_);
lean_dec_ref(v_a_1293_);
return v_res_1300_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Closure_conflict_spec__1(size_t v_sz_1301_, size_t v_i_1302_, lean_object* v_bs_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_){
_start:
{
lean_object* v___x_1311_; 
v___x_1311_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Closure_conflict_spec__1___redArg(v_sz_1301_, v_i_1302_, v_bs_1303_, v___y_1306_, v___y_1307_, v___y_1308_, v___y_1309_);
return v___x_1311_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Closure_conflict_spec__1___boxed(lean_object* v_sz_1312_, lean_object* v_i_1313_, lean_object* v_bs_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_, lean_object* v___y_1320_, lean_object* v___y_1321_){
_start:
{
size_t v_sz_boxed_1322_; size_t v_i_boxed_1323_; lean_object* v_res_1324_; 
v_sz_boxed_1322_ = lean_unbox_usize(v_sz_1312_);
lean_dec(v_sz_1312_);
v_i_boxed_1323_ = lean_unbox_usize(v_i_1313_);
lean_dec(v_i_1313_);
v_res_1324_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Closure_conflict_spec__1(v_sz_boxed_1322_, v_i_boxed_1323_, v_bs_1314_, v___y_1315_, v___y_1316_, v___y_1317_, v___y_1318_, v___y_1319_, v___y_1320_);
lean_dec(v___y_1320_);
lean_dec_ref(v___y_1319_);
lean_dec(v___y_1318_);
lean_dec_ref(v___y_1317_);
lean_dec(v___y_1316_);
lean_dec_ref(v___y_1315_);
return v_res_1324_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Closure_conflict_spec__0_spec__0(lean_object* v_proofs_1325_, size_t v_sz_1326_, size_t v_i_1327_, lean_object* v_bs_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_){
_start:
{
lean_object* v___x_1336_; 
v___x_1336_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Closure_conflict_spec__0_spec__0___redArg(v_proofs_1325_, v_sz_1326_, v_i_1327_, v_bs_1328_, v___y_1331_, v___y_1332_, v___y_1333_, v___y_1334_);
return v___x_1336_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Closure_conflict_spec__0_spec__0___boxed(lean_object* v_proofs_1337_, lean_object* v_sz_1338_, lean_object* v_i_1339_, lean_object* v_bs_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_){
_start:
{
size_t v_sz_boxed_1348_; size_t v_i_boxed_1349_; lean_object* v_res_1350_; 
v_sz_boxed_1348_ = lean_unbox_usize(v_sz_1338_);
lean_dec(v_sz_1338_);
v_i_boxed_1349_ = lean_unbox_usize(v_i_1339_);
lean_dec(v_i_1339_);
v_res_1350_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Closure_conflict_spec__0_spec__0(v_proofs_1337_, v_sz_boxed_1348_, v_i_boxed_1349_, v_bs_1340_, v___y_1341_, v___y_1342_, v___y_1343_, v___y_1344_, v___y_1345_, v___y_1346_);
lean_dec(v___y_1346_);
lean_dec_ref(v___y_1345_);
lean_dec(v___y_1344_);
lean_dec_ref(v___y_1343_);
lean_dec(v___y_1342_);
lean_dec_ref(v___y_1341_);
lean_dec_ref(v_proofs_1337_);
return v_res_1350_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_vampireReplay_VampireReplay_Reconstruct_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_vampireReplay_VampireReplay_Reconstruct_Rules_Closure(uint8_t builtin) {
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
