// Lean compiler output
// Module: VampireReplay.Reconstruct.Rules.Resolution
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
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_parents(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* lp_vampireReplay_Vampire_Unit_varSorts(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_coverVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_boundVarSorts(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_instantiateAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_carryPast(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Lean_Meta_forallBoundedTelescope___at___00Vampire_Reconstruct_relateLiterals_spec__6___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint32_t lp_vampireReplay_Vampire_Unit_number(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_constraints(lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_clause_x3f(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Clause_literals(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_literal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_byArithmetic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_placeLiteral(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_substitutedVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_term(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_junctionParts(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkExpectedTypeHint(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4___redArg(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__1___redArg(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lp_vampireReplay_Vampire_Reconstruct_carryAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_premiseUses(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_Step_useAt_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__2(uint32_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__4___closed__0;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__4___boxed(lean_object**);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "resolution should have two premises, got "};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___closed__1;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "resolution should have two premises"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___closed__2_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___closed__3;
static const lean_closure_object lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___closed__4_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "resolution did not record the literal it resolved on in step "};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___closed__5 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___closed__5_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___closed__6;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__1(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "no unit resolved literal "};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__3___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__3___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__3___closed__1;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " away"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__3___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__3___closed__2_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__3___closed__3;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__0___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__0___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "a premise without a proof"};
static const lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg___closed__1;
static const lean_string_object lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "a premise without a step"};
static const lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg___closed__2 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg___closed__3;
static const lean_string_object lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "nothing says which literal the unit in step "};
static const lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg___closed__4 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg___closed__4_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg___closed__5;
static const lean_string_object lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = " resolved away"};
static const lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg___closed__6 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg___closed__6_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg___closed__7;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__4___boxed(lean_object**);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "unit resulting resolution without a clause"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___closed__1;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_factoring___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_factoring___lam__0___boxed(lean_object**);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Resolution_factoring___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "factoring should have one premise, got "};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_factoring___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_factoring___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Resolution_factoring___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_factoring___closed__1;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Resolution_factoring___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "factoring without a premise"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_factoring___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_factoring___closed__2_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Resolution_factoring___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_factoring___closed__3;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_factoring(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_factoring___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "absurd"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__0_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(93, 22, 196, 124, 199, 219, 238, 136)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__1_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Not"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__2_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__2_value),LEAN_SCALAR_PTR_LITERAL(185, 11, 203, 55, 27, 192, 137, 230)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__3 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__3_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "the constraint"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__4_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__5;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "\nis not a disequality"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__6 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__6_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__7;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__8 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__8_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__8_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__9 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__9_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "byCases"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__11 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__11_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Classical"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__10 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__10_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__10_value),LEAN_SCALAR_PTR_LITERAL(40, 236, 220, 79, 38, 141, 161, 150)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__12_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__11_value),LEAN_SCALAR_PTR_LITERAL(240, 75, 32, 165, 126, 243, 120, 233)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__12 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__12_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_fromConstraints_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "the step records a constraint at literal "};
static const lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_fromConstraints_spec__0___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_fromConstraints_spec__0___redArg___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_fromConstraints_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_fromConstraints_spec__0___redArg___closed__1;
static const lean_string_object lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_fromConstraints_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = ", and its conclusion has "};
static const lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_fromConstraints_spec__0___redArg___closed__2 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_fromConstraints_spec__0___redArg___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_fromConstraints_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_fromConstraints_spec__0___redArg___closed__3;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_fromConstraints_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_fromConstraints_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints___closed__0_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "a step with unification constraints is not a clause"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints___closed__1_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints___closed__2;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "vampire resolved an inequality between"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints___closed__3 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints___closed__3_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints___closed__4;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 197, .m_capacity = 197, .m_length = 196, .m_data = "\nwhose sides no substitution makes one, and recorded neither a unifier nor a constraint: this is vampire's unsoundness bug https://github.com/vprover/vampire/issues/938, and the step does not hold"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints___closed__5 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints___closed__5_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints___closed__6;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_fromConstraints_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_fromConstraints_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "the literal resolved on is not a negation:"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___lam__2___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___lam__2___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___lam__2___closed__1;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___lam__2___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___lam__2___closed__2_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___lam__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___lam__2___closed__3 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___lam__2___closed__3_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "the literal resolved on is not an equality:"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___lam__2___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___lam__2___closed__4_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___lam__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___lam__2___closed__5;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___lam__0___boxed(lean_object**);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "equality resolution with deletion should have one premise, got "};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___closed__1;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "equality resolution with deletion without a premise"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___closed__2_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___closed__3;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 76, .m_capacity = 76, .m_length = 75, .m_data = "equality resolution with deletion did not record the inequality it resolved"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___closed__4_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___closed__5;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 56, .m_capacity = 56, .m_length = 55, .m_data = "equality factoring did not record which side it unified"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__2___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__2___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__2___closed__1;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trans"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__1___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__1___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__1___boxed(lean_object**);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "the equality factored is not an equality:"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__3___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__3___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__3___closed__1;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Ne"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__3___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__3___closed__2_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 247, 70, 70, 118, 145, 235, 92)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__3___closed__3 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__3___closed__3_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "symm"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__3___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__3___closed__4_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__3___boxed(lean_object**);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Or"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__4___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__4___closed__0_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(34, 237, 162, 225, 217, 98, 205, 196)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__4___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__4___closed__1_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "the premise has no literal "};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__4___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__4___closed__2_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__4___closed__3;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "the equality factored against is not an equality:"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__4___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__4___closed__4_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__4___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__4___closed__5;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint32_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__4___boxed(lean_object**);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "equality factoring should have one premise, got "};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__1;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "equality factoring without a premise"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__2_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__3;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "equality factoring recorded "};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__4_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__5;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 89, .m_capacity = 89, .m_length = 88, .m_data = " uses of its premise, expected the selected equality and the one it was factored against"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__6 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__6_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__7;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "equality factoring did not record the equality it factored against"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__8 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__8_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__9;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = "equality factoring did not record the equality it factored"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__10 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__10_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__11;
static const lean_array_object lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__12 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__12_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__0(lean_object* v_x_1_, lean_object* v_h_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_10_, 0, v_h_2_);
return v___x_10_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__0___boxed(lean_object* v_x_11_, lean_object* v_h_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_, lean_object* v___y_18_, lean_object* v___y_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__0(v_x_11_, v_h_12_, v___y_13_, v___y_14_, v___y_15_, v___y_16_, v___y_17_, v___y_18_);
lean_dec(v___y_18_);
lean_dec_ref(v___y_17_);
lean_dec(v___y_16_);
lean_dec_ref(v___y_15_);
lean_dec(v___y_14_);
lean_dec_ref(v___y_13_);
lean_dec(v_x_11_);
return v_res_20_;
}
}
LEAN_EXPORT uint8_t lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__2(uint32_t v_val_21_, lean_object* v_x_22_){
_start:
{
lean_object* v___x_23_; uint8_t v___x_24_; 
v___x_23_ = lean_uint32_to_nat(v_val_21_);
v___x_24_ = lean_nat_dec_eq(v_x_22_, v___x_23_);
lean_dec(v___x_23_);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__2___boxed(lean_object* v_val_25_, lean_object* v_x_26_){
_start:
{
uint32_t v_val_11402__boxed_27_; uint8_t v_res_28_; lean_object* v_r_29_; 
v_val_11402__boxed_27_ = lean_unbox_uint32(v_val_25_);
lean_dec(v_val_25_);
v_res_28_ = lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__2(v_val_11402__boxed_27_, v_x_26_);
lean_dec(v_x_26_);
v_r_29_ = lean_box(v_res_28_);
return v_r_29_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__3(lean_object* v_h_u2081_30_, lean_object* v_x_31_, lean_object* v_h_u2082_32_, lean_object* v_inner_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg(v_inner_33_, v_h_u2081_30_, v_h_u2082_32_, v___y_36_, v___y_37_, v___y_38_, v___y_39_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__3___boxed(lean_object* v_h_u2081_42_, lean_object* v_x_43_, lean_object* v_h_u2082_44_, lean_object* v_inner_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_){
_start:
{
lean_object* v_res_53_; 
v_res_53_ = lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__3(v_h_u2081_42_, v_x_43_, v_h_u2082_44_, v_inner_45_, v___y_46_, v___y_47_, v___y_48_, v___y_49_, v___y_50_, v___y_51_);
lean_dec(v___y_51_);
lean_dec_ref(v___y_50_);
lean_dec(v___y_49_);
lean_dec_ref(v___y_48_);
lean_dec(v___y_47_);
lean_dec_ref(v___y_46_);
lean_dec(v_x_43_);
return v_res_53_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__1(lean_object* v_snd_54_, lean_object* v_fst_55_, lean_object* v___f_56_, lean_object* v___f_57_, lean_object* v_x_58_, lean_object* v_h_u2081_59_, lean_object* v_rest_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_){
_start:
{
lean_object* v___f_68_; lean_object* v___x_69_; 
v___f_68_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__3___boxed), 11, 1);
lean_closure_set(v___f_68_, 0, v_h_u2081_59_);
v___x_69_ = lp_vampireReplay_Vampire_Reconstruct_carryPast(v_snd_54_, v_rest_60_, v_fst_55_, v___f_56_, v___f_68_, v___f_57_, v___y_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_, v___y_66_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__1___boxed(lean_object* v_snd_70_, lean_object* v_fst_71_, lean_object* v___f_72_, lean_object* v___f_73_, lean_object* v_x_74_, lean_object* v_h_u2081_75_, lean_object* v_rest_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_){
_start:
{
lean_object* v_res_84_; 
v_res_84_ = lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__1(v_snd_70_, v_fst_71_, v___f_72_, v___f_73_, v_x_74_, v_h_u2081_75_, v_rest_76_, v___y_77_, v___y_78_, v___y_79_, v___y_80_, v___y_81_, v___y_82_);
lean_dec(v___y_82_);
lean_dec_ref(v___y_81_);
lean_dec(v___y_80_);
lean_dec_ref(v___y_79_);
lean_dec(v___y_78_);
lean_dec_ref(v___y_77_);
lean_dec(v_x_74_);
return v_res_84_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__4___closed__0(void){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_85_ = lean_box(0);
v___x_86_ = lean_unsigned_to_nat(16u);
v___x_87_ = lean_mk_array(v___x_86_, v___x_85_);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__4(lean_object* v___x_88_, lean_object* v___x_89_, lean_object* v___x_90_, lean_object* v_unit_91_, lean_object* v___x_92_, lean_object* v_a_93_, lean_object* v_fst_94_, lean_object* v_snd_95_, lean_object* v_a_96_, lean_object* v_fst_97_, lean_object* v_snd_98_, lean_object* v___f_99_, lean_object* v___f_100_, lean_object* v___f_101_, lean_object* v___f_102_, uint8_t v___x_103_, lean_object* v_xs_104_, lean_object* v_target_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_){
_start:
{
lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; size_t v_sz_116_; size_t v___x_117_; lean_object* v___x_118_; 
v___x_113_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__4___closed__0, &lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__4___closed__0_once, _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__4___closed__0);
lean_inc(v___x_88_);
v___x_114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_114_, 0, v___x_88_);
lean_ctor_set(v___x_114_, 1, v___x_113_);
v___x_115_ = l_Array_zip___redArg(v_xs_104_, v___x_89_);
v_sz_116_ = lean_array_size(v___x_115_);
v___x_117_ = ((size_t)0ULL);
v___x_118_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__0___redArg(v___x_115_, v_sz_116_, v___x_117_, v___x_114_);
lean_dec_ref(v___x_115_);
if (lean_obj_tag(v___x_118_) == 0)
{
lean_object* v_a_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
v_a_119_ = lean_ctor_get(v___x_118_, 0);
lean_inc(v_a_119_);
lean_dec_ref_known(v___x_118_, 1);
v___x_120_ = lean_mk_empty_array_with_capacity(v___x_88_);
lean_dec(v___x_88_);
lean_inc_ref(v___x_90_);
v___x_121_ = lp_vampireReplay_Vampire_Reconstruct_coverVars(v___x_90_, v_a_119_, v___x_120_, v___y_106_, v___y_107_, v___y_108_, v___y_109_, v___y_110_, v___y_111_);
lean_dec_ref(v___x_120_);
if (lean_obj_tag(v___x_121_) == 0)
{
lean_object* v_a_122_; lean_object* v___x_123_; lean_object* v___x_124_; 
v_a_122_ = lean_ctor_get(v___x_121_, 0);
lean_inc(v_a_122_);
lean_dec_ref_known(v___x_121_, 1);
v___x_123_ = lp_vampireReplay_Vampire_Unit_boundVarSorts(v_unit_91_);
lean_inc_ref(v___x_92_);
v___x_124_ = lp_vampireReplay_Vampire_Reconstruct_coverVars(v___x_92_, v_a_122_, v___x_123_, v___y_106_, v___y_107_, v___y_108_, v___y_109_, v___y_110_, v___y_111_);
lean_dec_ref(v___x_123_);
if (lean_obj_tag(v___x_124_) == 0)
{
lean_object* v_a_125_; lean_object* v___x_126_; 
v_a_125_ = lean_ctor_get(v___x_124_, 0);
lean_inc(v_a_125_);
lean_dec_ref_known(v___x_124_, 1);
v___x_126_ = lp_vampireReplay_Vampire_Reconstruct_instantiateAt(v___x_90_, v_a_93_, v_a_125_, v_fst_94_, v_snd_95_, v___y_106_, v___y_107_, v___y_108_, v___y_109_, v___y_110_, v___y_111_);
if (lean_obj_tag(v___x_126_) == 0)
{
lean_object* v_a_127_; lean_object* v_fst_128_; lean_object* v_snd_129_; lean_object* v___x_130_; 
v_a_127_ = lean_ctor_get(v___x_126_, 0);
lean_inc(v_a_127_);
lean_dec_ref_known(v___x_126_, 1);
v_fst_128_ = lean_ctor_get(v_a_127_, 0);
lean_inc(v_fst_128_);
v_snd_129_ = lean_ctor_get(v_a_127_, 1);
lean_inc(v_snd_129_);
lean_dec(v_a_127_);
v___x_130_ = lp_vampireReplay_Vampire_Reconstruct_instantiateAt(v___x_92_, v_a_96_, v_a_125_, v_fst_97_, v_snd_98_, v___y_106_, v___y_107_, v___y_108_, v___y_109_, v___y_110_, v___y_111_);
lean_dec(v_a_125_);
if (lean_obj_tag(v___x_130_) == 0)
{
lean_object* v_a_131_; lean_object* v_fst_132_; lean_object* v_snd_133_; lean_object* v___f_134_; lean_object* v___x_135_; 
v_a_131_ = lean_ctor_get(v___x_130_, 0);
lean_inc(v_a_131_);
lean_dec_ref_known(v___x_130_, 1);
v_fst_132_ = lean_ctor_get(v_a_131_, 0);
lean_inc(v_fst_132_);
v_snd_133_ = lean_ctor_get(v_a_131_, 1);
lean_inc(v_snd_133_);
lean_dec(v_a_131_);
v___f_134_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__1___boxed), 14, 4);
lean_closure_set(v___f_134_, 0, v_snd_133_);
lean_closure_set(v___f_134_, 1, v_fst_132_);
lean_closure_set(v___f_134_, 2, v___f_99_);
lean_closure_set(v___f_134_, 3, v___f_100_);
v___x_135_ = lp_vampireReplay_Vampire_Reconstruct_carryPast(v_snd_129_, v_target_105_, v_fst_128_, v___f_101_, v___f_134_, v___f_102_, v___y_106_, v___y_107_, v___y_108_, v___y_109_, v___y_110_, v___y_111_);
if (lean_obj_tag(v___x_135_) == 0)
{
lean_object* v_a_136_; uint8_t v___x_137_; uint8_t v___x_138_; lean_object* v___x_139_; 
v_a_136_ = lean_ctor_get(v___x_135_, 0);
lean_inc(v_a_136_);
lean_dec_ref_known(v___x_135_, 1);
v___x_137_ = 0;
v___x_138_ = 1;
v___x_139_ = l_Lean_Meta_mkLambdaFVars(v_xs_104_, v_a_136_, v___x_137_, v___x_103_, v___x_137_, v___x_103_, v___x_138_, v___y_108_, v___y_109_, v___y_110_, v___y_111_);
return v___x_139_;
}
else
{
return v___x_135_;
}
}
else
{
lean_object* v_a_140_; lean_object* v___x_142_; uint8_t v_isShared_143_; uint8_t v_isSharedCheck_147_; 
lean_dec(v_snd_129_);
lean_dec(v_fst_128_);
lean_dec_ref(v_target_105_);
lean_dec_ref(v___f_102_);
lean_dec_ref(v___f_101_);
lean_dec_ref(v___f_100_);
lean_dec_ref(v___f_99_);
v_a_140_ = lean_ctor_get(v___x_130_, 0);
v_isSharedCheck_147_ = !lean_is_exclusive(v___x_130_);
if (v_isSharedCheck_147_ == 0)
{
v___x_142_ = v___x_130_;
v_isShared_143_ = v_isSharedCheck_147_;
goto v_resetjp_141_;
}
else
{
lean_inc(v_a_140_);
lean_dec(v___x_130_);
v___x_142_ = lean_box(0);
v_isShared_143_ = v_isSharedCheck_147_;
goto v_resetjp_141_;
}
v_resetjp_141_:
{
lean_object* v___x_145_; 
if (v_isShared_143_ == 0)
{
v___x_145_ = v___x_142_;
goto v_reusejp_144_;
}
else
{
lean_object* v_reuseFailAlloc_146_; 
v_reuseFailAlloc_146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_146_, 0, v_a_140_);
v___x_145_ = v_reuseFailAlloc_146_;
goto v_reusejp_144_;
}
v_reusejp_144_:
{
return v___x_145_;
}
}
}
}
else
{
lean_object* v_a_148_; lean_object* v___x_150_; uint8_t v_isShared_151_; uint8_t v_isSharedCheck_155_; 
lean_dec(v_a_125_);
lean_dec_ref(v_target_105_);
lean_dec_ref(v___f_102_);
lean_dec_ref(v___f_101_);
lean_dec_ref(v___f_100_);
lean_dec_ref(v___f_99_);
lean_dec_ref(v_snd_98_);
lean_dec_ref(v_fst_97_);
lean_dec_ref(v_a_96_);
lean_dec_ref(v___x_92_);
v_a_148_ = lean_ctor_get(v___x_126_, 0);
v_isSharedCheck_155_ = !lean_is_exclusive(v___x_126_);
if (v_isSharedCheck_155_ == 0)
{
v___x_150_ = v___x_126_;
v_isShared_151_ = v_isSharedCheck_155_;
goto v_resetjp_149_;
}
else
{
lean_inc(v_a_148_);
lean_dec(v___x_126_);
v___x_150_ = lean_box(0);
v_isShared_151_ = v_isSharedCheck_155_;
goto v_resetjp_149_;
}
v_resetjp_149_:
{
lean_object* v___x_153_; 
if (v_isShared_151_ == 0)
{
v___x_153_ = v___x_150_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v_a_148_);
v___x_153_ = v_reuseFailAlloc_154_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
return v___x_153_;
}
}
}
}
else
{
lean_object* v_a_156_; lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_163_; 
lean_dec_ref(v_target_105_);
lean_dec_ref(v___f_102_);
lean_dec_ref(v___f_101_);
lean_dec_ref(v___f_100_);
lean_dec_ref(v___f_99_);
lean_dec_ref(v_snd_98_);
lean_dec_ref(v_fst_97_);
lean_dec_ref(v_a_96_);
lean_dec_ref(v_snd_95_);
lean_dec_ref(v_fst_94_);
lean_dec_ref(v_a_93_);
lean_dec_ref(v___x_92_);
lean_dec_ref(v___x_90_);
v_a_156_ = lean_ctor_get(v___x_124_, 0);
v_isSharedCheck_163_ = !lean_is_exclusive(v___x_124_);
if (v_isSharedCheck_163_ == 0)
{
v___x_158_ = v___x_124_;
v_isShared_159_ = v_isSharedCheck_163_;
goto v_resetjp_157_;
}
else
{
lean_inc(v_a_156_);
lean_dec(v___x_124_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_163_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
lean_object* v___x_161_; 
if (v_isShared_159_ == 0)
{
v___x_161_ = v___x_158_;
goto v_reusejp_160_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v_a_156_);
v___x_161_ = v_reuseFailAlloc_162_;
goto v_reusejp_160_;
}
v_reusejp_160_:
{
return v___x_161_;
}
}
}
}
else
{
lean_object* v_a_164_; lean_object* v___x_166_; uint8_t v_isShared_167_; uint8_t v_isSharedCheck_171_; 
lean_dec_ref(v_target_105_);
lean_dec_ref(v___f_102_);
lean_dec_ref(v___f_101_);
lean_dec_ref(v___f_100_);
lean_dec_ref(v___f_99_);
lean_dec_ref(v_snd_98_);
lean_dec_ref(v_fst_97_);
lean_dec_ref(v_a_96_);
lean_dec_ref(v_snd_95_);
lean_dec_ref(v_fst_94_);
lean_dec_ref(v_a_93_);
lean_dec_ref(v___x_92_);
lean_dec_ref(v_unit_91_);
lean_dec_ref(v___x_90_);
v_a_164_ = lean_ctor_get(v___x_121_, 0);
v_isSharedCheck_171_ = !lean_is_exclusive(v___x_121_);
if (v_isSharedCheck_171_ == 0)
{
v___x_166_ = v___x_121_;
v_isShared_167_ = v_isSharedCheck_171_;
goto v_resetjp_165_;
}
else
{
lean_inc(v_a_164_);
lean_dec(v___x_121_);
v___x_166_ = lean_box(0);
v_isShared_167_ = v_isSharedCheck_171_;
goto v_resetjp_165_;
}
v_resetjp_165_:
{
lean_object* v___x_169_; 
if (v_isShared_167_ == 0)
{
v___x_169_ = v___x_166_;
goto v_reusejp_168_;
}
else
{
lean_object* v_reuseFailAlloc_170_; 
v_reuseFailAlloc_170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_170_, 0, v_a_164_);
v___x_169_ = v_reuseFailAlloc_170_;
goto v_reusejp_168_;
}
v_reusejp_168_:
{
return v___x_169_;
}
}
}
}
else
{
lean_object* v_a_172_; lean_object* v___x_174_; uint8_t v_isShared_175_; uint8_t v_isSharedCheck_179_; 
lean_dec_ref(v_target_105_);
lean_dec_ref(v___f_102_);
lean_dec_ref(v___f_101_);
lean_dec_ref(v___f_100_);
lean_dec_ref(v___f_99_);
lean_dec_ref(v_snd_98_);
lean_dec_ref(v_fst_97_);
lean_dec_ref(v_a_96_);
lean_dec_ref(v_snd_95_);
lean_dec_ref(v_fst_94_);
lean_dec_ref(v_a_93_);
lean_dec_ref(v___x_92_);
lean_dec_ref(v_unit_91_);
lean_dec_ref(v___x_90_);
lean_dec(v___x_88_);
v_a_172_ = lean_ctor_get(v___x_118_, 0);
v_isSharedCheck_179_ = !lean_is_exclusive(v___x_118_);
if (v_isSharedCheck_179_ == 0)
{
v___x_174_ = v___x_118_;
v_isShared_175_ = v_isSharedCheck_179_;
goto v_resetjp_173_;
}
else
{
lean_inc(v_a_172_);
lean_dec(v___x_118_);
v___x_174_ = lean_box(0);
v_isShared_175_ = v_isSharedCheck_179_;
goto v_resetjp_173_;
}
v_resetjp_173_:
{
lean_object* v___x_177_; 
if (v_isShared_175_ == 0)
{
v___x_177_ = v___x_174_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v_a_172_);
v___x_177_ = v_reuseFailAlloc_178_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
return v___x_177_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__4___boxed(lean_object** _args){
lean_object* v___x_180_ = _args[0];
lean_object* v___x_181_ = _args[1];
lean_object* v___x_182_ = _args[2];
lean_object* v_unit_183_ = _args[3];
lean_object* v___x_184_ = _args[4];
lean_object* v_a_185_ = _args[5];
lean_object* v_fst_186_ = _args[6];
lean_object* v_snd_187_ = _args[7];
lean_object* v_a_188_ = _args[8];
lean_object* v_fst_189_ = _args[9];
lean_object* v_snd_190_ = _args[10];
lean_object* v___f_191_ = _args[11];
lean_object* v___f_192_ = _args[12];
lean_object* v___f_193_ = _args[13];
lean_object* v___f_194_ = _args[14];
lean_object* v___x_195_ = _args[15];
lean_object* v_xs_196_ = _args[16];
lean_object* v_target_197_ = _args[17];
lean_object* v___y_198_ = _args[18];
lean_object* v___y_199_ = _args[19];
lean_object* v___y_200_ = _args[20];
lean_object* v___y_201_ = _args[21];
lean_object* v___y_202_ = _args[22];
lean_object* v___y_203_ = _args[23];
lean_object* v___y_204_ = _args[24];
_start:
{
uint8_t v___x_11498__boxed_205_; lean_object* v_res_206_; 
v___x_11498__boxed_205_ = lean_unbox(v___x_195_);
v_res_206_ = lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__4(v___x_180_, v___x_181_, v___x_182_, v_unit_183_, v___x_184_, v_a_185_, v_fst_186_, v_snd_187_, v_a_188_, v_fst_189_, v_snd_190_, v___f_191_, v___f_192_, v___f_193_, v___f_194_, v___x_11498__boxed_205_, v_xs_196_, v_target_197_, v___y_198_, v___y_199_, v___y_200_, v___y_201_, v___y_202_, v___y_203_);
lean_dec(v___y_203_);
lean_dec_ref(v___y_202_);
lean_dec(v___y_201_);
lean_dec_ref(v___y_200_);
lean_dec(v___y_199_);
lean_dec_ref(v___y_198_);
lean_dec_ref(v_xs_196_);
lean_dec_ref(v___x_181_);
return v_res_206_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___closed__1(void){
_start:
{
lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_208_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___closed__0));
v___x_209_ = l_Lean_stringToMessageData(v___x_208_);
return v___x_209_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___closed__3(void){
_start:
{
lean_object* v___x_211_; lean_object* v___x_212_; 
v___x_211_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___closed__2));
v___x_212_ = l_Lean_stringToMessageData(v___x_211_);
return v___x_212_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___closed__6(void){
_start:
{
lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_215_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___closed__5));
v___x_216_ = l_Lean_stringToMessageData(v___x_215_);
return v___x_216_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution(lean_object* v_step_217_, lean_object* v_a_218_, lean_object* v_a_219_, lean_object* v_a_220_, lean_object* v_a_221_, lean_object* v_a_222_, lean_object* v_a_223_){
_start:
{
lean_object* v_unit_225_; lean_object* v_premises_226_; lean_object* v___x_227_; lean_object* v___x_228_; uint8_t v___x_229_; 
v_unit_225_ = lean_ctor_get(v_step_217_, 0);
lean_inc_ref(v_unit_225_);
v_premises_226_ = lean_ctor_get(v_step_217_, 1);
v___x_227_ = lean_array_get_size(v_premises_226_);
v___x_228_ = lean_unsigned_to_nat(2u);
v___x_229_ = lean_nat_dec_eq(v___x_227_, v___x_228_);
if (v___x_229_ == 0)
{
lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; 
lean_dec_ref(v_unit_225_);
lean_dec_ref(v_step_217_);
v___x_230_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___closed__1);
v___x_231_ = l_Nat_reprFast(v___x_227_);
v___x_232_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_232_, 0, v___x_231_);
v___x_233_ = l_Lean_MessageData_ofFormat(v___x_232_);
v___x_234_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_234_, 0, v___x_230_);
lean_ctor_set(v___x_234_, 1, v___x_233_);
v___x_235_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_234_, v_a_220_, v_a_221_, v_a_222_, v_a_223_);
return v___x_235_;
}
else
{
lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v_fst_238_; lean_object* v_snd_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v_fst_242_; lean_object* v_snd_243_; lean_object* v___x_245_; uint8_t v_isShared_246_; uint8_t v_isSharedCheck_322_; 
v___x_236_ = lean_unsigned_to_nat(0u);
v___x_237_ = lean_array_fget_borrowed(v_premises_226_, v___x_236_);
v_fst_238_ = lean_ctor_get(v___x_237_, 0);
lean_inc(v_fst_238_);
v_snd_239_ = lean_ctor_get(v___x_237_, 1);
lean_inc(v_snd_239_);
v___x_240_ = lean_unsigned_to_nat(1u);
v___x_241_ = lean_array_fget(v_premises_226_, v___x_240_);
v_fst_242_ = lean_ctor_get(v___x_241_, 0);
v_snd_243_ = lean_ctor_get(v___x_241_, 1);
v_isSharedCheck_322_ = !lean_is_exclusive(v___x_241_);
if (v_isSharedCheck_322_ == 0)
{
v___x_245_ = v___x_241_;
v_isShared_246_ = v_isSharedCheck_322_;
goto v_resetjp_244_;
}
else
{
lean_inc(v_snd_243_);
lean_inc(v_fst_242_);
lean_dec(v___x_241_);
v___x_245_ = lean_box(0);
v_isShared_246_ = v_isSharedCheck_322_;
goto v_resetjp_244_;
}
v_resetjp_244_:
{
lean_object* v___x_247_; lean_object* v___x_248_; uint8_t v___x_249_; 
lean_inc_ref(v_unit_225_);
v___x_247_ = lp_vampireReplay_Vampire_Unit_parents(v_unit_225_);
v___x_248_ = lean_array_get_size(v___x_247_);
v___x_249_ = lean_nat_dec_eq(v___x_248_, v___x_228_);
if (v___x_249_ == 0)
{
lean_object* v___x_250_; lean_object* v___x_251_; 
lean_dec_ref(v___x_247_);
lean_del_object(v___x_245_);
lean_dec(v_snd_243_);
lean_dec(v_fst_242_);
lean_dec(v_snd_239_);
lean_dec(v_fst_238_);
lean_dec_ref(v_unit_225_);
lean_dec_ref(v_step_217_);
v___x_250_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___closed__3, &lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___closed__3);
v___x_251_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_250_, v_a_220_, v_a_221_, v_a_222_, v_a_223_);
return v___x_251_;
}
else
{
lean_object* v___x_252_; 
lean_inc_ref(v_step_217_);
v___x_252_ = lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg(v_step_217_, v___x_236_, v_a_220_, v_a_221_, v_a_222_, v_a_223_);
if (lean_obj_tag(v___x_252_) == 0)
{
lean_object* v_a_253_; lean_object* v___x_254_; 
v_a_253_ = lean_ctor_get(v___x_252_, 0);
lean_inc(v_a_253_);
lean_dec_ref_known(v___x_252_, 1);
lean_inc_ref(v_step_217_);
v___x_254_ = lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg(v_step_217_, v___x_240_, v_a_220_, v_a_221_, v_a_222_, v_a_223_);
if (lean_obj_tag(v___x_254_) == 0)
{
lean_object* v_a_255_; lean_object* v_literal_256_; lean_object* v___x_257_; 
v_a_255_ = lean_ctor_get(v___x_254_, 0);
lean_inc(v_a_255_);
lean_dec_ref_known(v___x_254_, 1);
v_literal_256_ = lean_ctor_get(v_a_253_, 0);
lean_inc(v_literal_256_);
v___x_257_ = lean_array_fget(v___x_247_, v___x_236_);
if (lean_obj_tag(v_literal_256_) == 1)
{
lean_object* v_val_258_; lean_object* v___x_260_; uint8_t v_isShared_261_; uint8_t v_isSharedCheck_295_; 
v_val_258_ = lean_ctor_get(v_literal_256_, 0);
v_isSharedCheck_295_ = !lean_is_exclusive(v_literal_256_);
if (v_isSharedCheck_295_ == 0)
{
v___x_260_ = v_literal_256_;
v_isShared_261_ = v_isSharedCheck_295_;
goto v_resetjp_259_;
}
else
{
lean_inc(v_val_258_);
lean_dec(v_literal_256_);
v___x_260_ = lean_box(0);
v_isShared_261_ = v_isSharedCheck_295_;
goto v_resetjp_259_;
}
v_resetjp_259_:
{
lean_object* v_literal_262_; lean_object* v___x_263_; 
v_literal_262_ = lean_ctor_get(v_a_255_, 0);
lean_inc(v_literal_262_);
v___x_263_ = lean_array_fget(v___x_247_, v___x_240_);
lean_dec_ref(v___x_247_);
if (lean_obj_tag(v_literal_262_) == 1)
{
lean_object* v_val_264_; lean_object* v___x_266_; uint8_t v_isShared_267_; uint8_t v_isSharedCheck_282_; 
lean_del_object(v___x_260_);
lean_del_object(v___x_245_);
v_val_264_ = lean_ctor_get(v_literal_262_, 0);
v_isSharedCheck_282_ = !lean_is_exclusive(v_literal_262_);
if (v_isSharedCheck_282_ == 0)
{
v___x_266_ = v_literal_262_;
v_isShared_267_ = v_isSharedCheck_282_;
goto v_resetjp_265_;
}
else
{
lean_inc(v_val_264_);
lean_dec(v_literal_262_);
v___x_266_ = lean_box(0);
v_isShared_267_ = v_isSharedCheck_282_;
goto v_resetjp_265_;
}
v_resetjp_265_:
{
lean_object* v___x_268_; 
v___x_268_ = lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(v_step_217_, v_a_218_, v_a_219_, v_a_220_, v_a_221_, v_a_222_, v_a_223_);
if (lean_obj_tag(v___x_268_) == 0)
{
lean_object* v_a_269_; lean_object* v___f_270_; lean_object* v___f_271_; lean_object* v___f_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___f_275_; lean_object* v___x_276_; lean_object* v___x_278_; 
v_a_269_ = lean_ctor_get(v___x_268_, 0);
lean_inc(v_a_269_);
lean_dec_ref_known(v___x_268_, 1);
v___f_270_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___closed__4));
v___f_271_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__2___boxed), 2, 1);
lean_closure_set(v___f_271_, 0, v_val_258_);
v___f_272_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__2___boxed), 2, 1);
lean_closure_set(v___f_272_, 0, v_val_264_);
lean_inc_ref(v_unit_225_);
v___x_273_ = lp_vampireReplay_Vampire_Unit_varSorts(v_unit_225_);
v___x_274_ = lean_box(v___x_249_);
lean_inc_ref(v___x_273_);
v___f_275_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__4___boxed), 25, 16);
lean_closure_set(v___f_275_, 0, v___x_236_);
lean_closure_set(v___f_275_, 1, v___x_273_);
lean_closure_set(v___f_275_, 2, v___x_257_);
lean_closure_set(v___f_275_, 3, v_unit_225_);
lean_closure_set(v___f_275_, 4, v___x_263_);
lean_closure_set(v___f_275_, 5, v_a_253_);
lean_closure_set(v___f_275_, 6, v_fst_238_);
lean_closure_set(v___f_275_, 7, v_snd_239_);
lean_closure_set(v___f_275_, 8, v_a_255_);
lean_closure_set(v___f_275_, 9, v_fst_242_);
lean_closure_set(v___f_275_, 10, v_snd_243_);
lean_closure_set(v___f_275_, 11, v___f_272_);
lean_closure_set(v___f_275_, 12, v___f_270_);
lean_closure_set(v___f_275_, 13, v___f_271_);
lean_closure_set(v___f_275_, 14, v___f_270_);
lean_closure_set(v___f_275_, 15, v___x_274_);
v___x_276_ = lean_array_get_size(v___x_273_);
lean_dec_ref(v___x_273_);
if (v_isShared_267_ == 0)
{
lean_ctor_set(v___x_266_, 0, v___x_276_);
v___x_278_ = v___x_266_;
goto v_reusejp_277_;
}
else
{
lean_object* v_reuseFailAlloc_281_; 
v_reuseFailAlloc_281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_281_, 0, v___x_276_);
v___x_278_ = v_reuseFailAlloc_281_;
goto v_reusejp_277_;
}
v_reusejp_277_:
{
uint8_t v___x_279_; lean_object* v___x_280_; 
v___x_279_ = 0;
v___x_280_ = lp_vampireReplay_Lean_Meta_forallBoundedTelescope___at___00Vampire_Reconstruct_relateLiterals_spec__6___redArg(v_a_269_, v___x_278_, v___f_275_, v___x_279_, v___x_279_, v_a_218_, v_a_219_, v_a_220_, v_a_221_, v_a_222_, v_a_223_);
return v___x_280_;
}
}
else
{
lean_del_object(v___x_266_);
lean_dec(v_val_264_);
lean_dec(v___x_263_);
lean_dec(v_val_258_);
lean_dec(v___x_257_);
lean_dec(v_a_255_);
lean_dec(v_a_253_);
lean_dec(v_snd_243_);
lean_dec(v_fst_242_);
lean_dec(v_snd_239_);
lean_dec(v_fst_238_);
lean_dec_ref(v_unit_225_);
return v___x_268_;
}
}
}
else
{
lean_object* v___x_283_; uint32_t v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_288_; 
lean_dec(v_literal_262_);
lean_dec(v_val_258_);
lean_dec(v___x_257_);
lean_dec(v_a_255_);
lean_dec(v_a_253_);
lean_dec(v_snd_243_);
lean_dec(v_fst_242_);
lean_dec(v_snd_239_);
lean_dec(v_fst_238_);
lean_dec_ref(v_unit_225_);
lean_dec_ref(v_step_217_);
v___x_283_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___closed__6, &lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___closed__6_once, _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___closed__6);
v___x_284_ = lp_vampireReplay_Vampire_Unit_number(v___x_263_);
lean_dec(v___x_263_);
v___x_285_ = lean_uint32_to_nat(v___x_284_);
v___x_286_ = l_Nat_reprFast(v___x_285_);
if (v_isShared_261_ == 0)
{
lean_ctor_set_tag(v___x_260_, 3);
lean_ctor_set(v___x_260_, 0, v___x_286_);
v___x_288_ = v___x_260_;
goto v_reusejp_287_;
}
else
{
lean_object* v_reuseFailAlloc_294_; 
v_reuseFailAlloc_294_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_294_, 0, v___x_286_);
v___x_288_ = v_reuseFailAlloc_294_;
goto v_reusejp_287_;
}
v_reusejp_287_:
{
lean_object* v___x_289_; lean_object* v___x_291_; 
v___x_289_ = l_Lean_MessageData_ofFormat(v___x_288_);
if (v_isShared_246_ == 0)
{
lean_ctor_set_tag(v___x_245_, 7);
lean_ctor_set(v___x_245_, 1, v___x_289_);
lean_ctor_set(v___x_245_, 0, v___x_283_);
v___x_291_ = v___x_245_;
goto v_reusejp_290_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v___x_283_);
lean_ctor_set(v_reuseFailAlloc_293_, 1, v___x_289_);
v___x_291_ = v_reuseFailAlloc_293_;
goto v_reusejp_290_;
}
v_reusejp_290_:
{
lean_object* v___x_292_; 
v___x_292_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_291_, v_a_220_, v_a_221_, v_a_222_, v_a_223_);
return v___x_292_;
}
}
}
}
}
else
{
lean_object* v___x_296_; uint32_t v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_303_; 
lean_dec(v_literal_256_);
lean_dec(v_a_255_);
lean_dec(v_a_253_);
lean_dec_ref(v___x_247_);
lean_dec(v_snd_243_);
lean_dec(v_fst_242_);
lean_dec(v_snd_239_);
lean_dec(v_fst_238_);
lean_dec_ref(v_unit_225_);
lean_dec_ref(v_step_217_);
v___x_296_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___closed__6, &lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___closed__6_once, _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___closed__6);
v___x_297_ = lp_vampireReplay_Vampire_Unit_number(v___x_257_);
lean_dec(v___x_257_);
v___x_298_ = lean_uint32_to_nat(v___x_297_);
v___x_299_ = l_Nat_reprFast(v___x_298_);
v___x_300_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_300_, 0, v___x_299_);
v___x_301_ = l_Lean_MessageData_ofFormat(v___x_300_);
if (v_isShared_246_ == 0)
{
lean_ctor_set_tag(v___x_245_, 7);
lean_ctor_set(v___x_245_, 1, v___x_301_);
lean_ctor_set(v___x_245_, 0, v___x_296_);
v___x_303_ = v___x_245_;
goto v_reusejp_302_;
}
else
{
lean_object* v_reuseFailAlloc_305_; 
v_reuseFailAlloc_305_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_305_, 0, v___x_296_);
lean_ctor_set(v_reuseFailAlloc_305_, 1, v___x_301_);
v___x_303_ = v_reuseFailAlloc_305_;
goto v_reusejp_302_;
}
v_reusejp_302_:
{
lean_object* v___x_304_; 
v___x_304_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_303_, v_a_220_, v_a_221_, v_a_222_, v_a_223_);
return v___x_304_;
}
}
}
else
{
lean_object* v_a_306_; lean_object* v___x_308_; uint8_t v_isShared_309_; uint8_t v_isSharedCheck_313_; 
lean_dec(v_a_253_);
lean_dec_ref(v___x_247_);
lean_del_object(v___x_245_);
lean_dec(v_snd_243_);
lean_dec(v_fst_242_);
lean_dec(v_snd_239_);
lean_dec(v_fst_238_);
lean_dec_ref(v_unit_225_);
lean_dec_ref(v_step_217_);
v_a_306_ = lean_ctor_get(v___x_254_, 0);
v_isSharedCheck_313_ = !lean_is_exclusive(v___x_254_);
if (v_isSharedCheck_313_ == 0)
{
v___x_308_ = v___x_254_;
v_isShared_309_ = v_isSharedCheck_313_;
goto v_resetjp_307_;
}
else
{
lean_inc(v_a_306_);
lean_dec(v___x_254_);
v___x_308_ = lean_box(0);
v_isShared_309_ = v_isSharedCheck_313_;
goto v_resetjp_307_;
}
v_resetjp_307_:
{
lean_object* v___x_311_; 
if (v_isShared_309_ == 0)
{
v___x_311_ = v___x_308_;
goto v_reusejp_310_;
}
else
{
lean_object* v_reuseFailAlloc_312_; 
v_reuseFailAlloc_312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_312_, 0, v_a_306_);
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
lean_object* v_a_314_; lean_object* v___x_316_; uint8_t v_isShared_317_; uint8_t v_isSharedCheck_321_; 
lean_dec_ref(v___x_247_);
lean_del_object(v___x_245_);
lean_dec(v_snd_243_);
lean_dec(v_fst_242_);
lean_dec(v_snd_239_);
lean_dec(v_fst_238_);
lean_dec_ref(v_unit_225_);
lean_dec_ref(v_step_217_);
v_a_314_ = lean_ctor_get(v___x_252_, 0);
v_isSharedCheck_321_ = !lean_is_exclusive(v___x_252_);
if (v_isSharedCheck_321_ == 0)
{
v___x_316_ = v___x_252_;
v_isShared_317_ = v_isSharedCheck_321_;
goto v_resetjp_315_;
}
else
{
lean_inc(v_a_314_);
lean_dec(v___x_252_);
v___x_316_ = lean_box(0);
v_isShared_317_ = v_isSharedCheck_321_;
goto v_resetjp_315_;
}
v_resetjp_315_:
{
lean_object* v___x_319_; 
if (v_isShared_317_ == 0)
{
v___x_319_ = v___x_316_;
goto v_reusejp_318_;
}
else
{
lean_object* v_reuseFailAlloc_320_; 
v_reuseFailAlloc_320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_320_, 0, v_a_314_);
v___x_319_ = v_reuseFailAlloc_320_;
goto v_reusejp_318_;
}
v_reusejp_318_:
{
return v___x_319_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___boxed(lean_object* v_step_323_, lean_object* v_a_324_, lean_object* v_a_325_, lean_object* v_a_326_, lean_object* v_a_327_, lean_object* v_a_328_, lean_object* v_a_329_, lean_object* v_a_330_){
_start:
{
lean_object* v_res_331_; 
v_res_331_ = lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution(v_step_323_, v_a_324_, v_a_325_, v_a_326_, v_a_327_, v_a_328_, v_a_329_);
lean_dec(v_a_329_);
lean_dec_ref(v_a_328_);
lean_dec(v_a_327_);
lean_dec_ref(v_a_326_);
lean_dec(v_a_325_);
lean_dec_ref(v_a_324_);
return v_res_331_;
}
}
LEAN_EXPORT uint8_t lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__1(uint8_t v___x_332_, lean_object* v_x_333_){
_start:
{
return v___x_332_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__1___boxed(lean_object* v___x_334_, lean_object* v_x_335_){
_start:
{
uint8_t v___x_21368__boxed_336_; uint8_t v_res_337_; lean_object* v_r_338_; 
v___x_21368__boxed_336_ = lean_unbox(v___x_334_);
v_res_337_ = lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__1(v___x_21368__boxed_336_, v_x_335_);
lean_dec(v_x_335_);
v_r_338_ = lean_box(v_res_337_);
return v_r_338_;
}
}
LEAN_EXPORT uint8_t lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__2(lean_object* v_a_339_, lean_object* v_x_340_){
_start:
{
uint8_t v___x_341_; 
v___x_341_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__1___redArg(v_a_339_, v_x_340_);
return v___x_341_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__2___boxed(lean_object* v_a_342_, lean_object* v_x_343_){
_start:
{
uint8_t v_res_344_; lean_object* v_r_345_; 
v_res_344_ = lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__2(v_a_342_, v_x_343_);
lean_dec(v_x_343_);
lean_dec_ref(v_a_342_);
v_r_345_ = lean_box(v_res_344_);
return v_r_345_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__0(lean_object* v_h_346_, lean_object* v_x_347_, lean_object* v_hu_348_, lean_object* v_inner_349_, lean_object* v___y_350_, lean_object* v___y_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_){
_start:
{
lean_object* v___x_357_; 
v___x_357_ = lp_vampireReplay_Vampire_Reconstruct_closeComplementary___redArg(v_inner_349_, v_h_346_, v_hu_348_, v___y_352_, v___y_353_, v___y_354_, v___y_355_);
return v___x_357_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__0___boxed(lean_object* v_h_358_, lean_object* v_x_359_, lean_object* v_hu_360_, lean_object* v_inner_361_, lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v___y_364_, lean_object* v___y_365_, lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_){
_start:
{
lean_object* v_res_369_; 
v_res_369_ = lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__0(v_h_358_, v_x_359_, v_hu_360_, v_inner_361_, v___y_362_, v___y_363_, v___y_364_, v___y_365_, v___y_366_, v___y_367_);
lean_dec(v___y_367_);
lean_dec_ref(v___y_366_);
lean_dec(v___y_365_);
lean_dec_ref(v___y_364_);
lean_dec(v___y_363_);
lean_dec_ref(v___y_362_);
lean_dec(v_x_359_);
return v_res_369_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__3___closed__1(void){
_start:
{
lean_object* v___x_371_; lean_object* v___x_372_; 
v___x_371_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__3___closed__0));
v___x_372_ = l_Lean_stringToMessageData(v___x_371_);
return v___x_372_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__3___closed__3(void){
_start:
{
lean_object* v___x_374_; lean_object* v___x_375_; 
v___x_374_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__3___closed__2));
v___x_375_ = l_Lean_stringToMessageData(v___x_374_);
return v___x_375_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__3(lean_object* v_a_376_, lean_object* v___f_377_, lean_object* v___f_378_, lean_object* v_i_379_, lean_object* v_h_380_, lean_object* v_rest_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_){
_start:
{
lean_object* v___x_389_; 
v___x_389_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4___redArg(v_a_376_, v_i_379_);
if (lean_obj_tag(v___x_389_) == 1)
{
lean_object* v_val_390_; lean_object* v_fst_391_; lean_object* v_snd_392_; lean_object* v___f_393_; lean_object* v___x_394_; 
lean_dec(v_i_379_);
v_val_390_ = lean_ctor_get(v___x_389_, 0);
lean_inc(v_val_390_);
lean_dec_ref_known(v___x_389_, 1);
v_fst_391_ = lean_ctor_get(v_val_390_, 0);
lean_inc(v_fst_391_);
v_snd_392_ = lean_ctor_get(v_val_390_, 1);
lean_inc(v_snd_392_);
lean_dec(v_val_390_);
v___f_393_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__0___boxed), 11, 1);
lean_closure_set(v___f_393_, 0, v_h_380_);
v___x_394_ = lp_vampireReplay_Vampire_Reconstruct_carryPast(v_snd_392_, v_rest_381_, v_fst_391_, v___f_377_, v___f_393_, v___f_378_, v___y_382_, v___y_383_, v___y_384_, v___y_385_, v___y_386_, v___y_387_);
return v___x_394_;
}
else
{
lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; 
lean_dec(v___x_389_);
lean_dec_ref(v_rest_381_);
lean_dec_ref(v_h_380_);
lean_dec_ref(v___f_378_);
lean_dec_ref(v___f_377_);
v___x_395_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__3___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__3___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__3___closed__1);
v___x_396_ = l_Nat_reprFast(v_i_379_);
v___x_397_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_397_, 0, v___x_396_);
v___x_398_ = l_Lean_MessageData_ofFormat(v___x_397_);
v___x_399_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_399_, 0, v___x_395_);
lean_ctor_set(v___x_399_, 1, v___x_398_);
v___x_400_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__3___closed__3, &lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__3___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__3___closed__3);
v___x_401_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_401_, 0, v___x_399_);
lean_ctor_set(v___x_401_, 1, v___x_400_);
v___x_402_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_401_, v___y_384_, v___y_385_, v___y_386_, v___y_387_);
return v___x_402_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__3___boxed(lean_object* v_a_403_, lean_object* v___f_404_, lean_object* v___f_405_, lean_object* v_i_406_, lean_object* v_h_407_, lean_object* v_rest_408_, lean_object* v___y_409_, lean_object* v___y_410_, lean_object* v___y_411_, lean_object* v___y_412_, lean_object* v___y_413_, lean_object* v___y_414_, lean_object* v___y_415_){
_start:
{
lean_object* v_res_416_; 
v_res_416_ = lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__3(v_a_403_, v___f_404_, v___f_405_, v_i_406_, v_h_407_, v_rest_408_, v___y_409_, v___y_410_, v___y_411_, v___y_412_, v___y_413_, v___y_414_);
lean_dec(v___y_414_);
lean_dec_ref(v___y_413_);
lean_dec(v___y_412_);
lean_dec_ref(v___y_411_);
lean_dec(v___y_410_);
lean_dec_ref(v___y_409_);
lean_dec_ref(v_a_403_);
return v_res_416_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__0(lean_object* v_as_419_, size_t v_sz_420_, size_t v_i_421_, lean_object* v_b_422_, lean_object* v___y_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_){
_start:
{
uint8_t v___x_430_; 
v___x_430_ = lean_usize_dec_lt(v_i_421_, v_sz_420_);
if (v___x_430_ == 0)
{
lean_object* v___x_431_; 
v___x_431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_431_, 0, v_b_422_);
return v___x_431_;
}
else
{
lean_object* v_a_432_; lean_object* v___x_433_; lean_object* v___x_434_; 
v_a_432_ = lean_array_uget_borrowed(v_as_419_, v_i_421_);
v___x_433_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__0___closed__0));
lean_inc(v_a_432_);
v___x_434_ = lp_vampireReplay_Vampire_Reconstruct_coverVars(v_a_432_, v_b_422_, v___x_433_, v___y_423_, v___y_424_, v___y_425_, v___y_426_, v___y_427_, v___y_428_);
if (lean_obj_tag(v___x_434_) == 0)
{
lean_object* v_a_435_; size_t v___x_436_; size_t v___x_437_; 
v_a_435_ = lean_ctor_get(v___x_434_, 0);
lean_inc(v_a_435_);
lean_dec_ref_known(v___x_434_, 1);
v___x_436_ = ((size_t)1ULL);
v___x_437_ = lean_usize_add(v_i_421_, v___x_436_);
v_i_421_ = v___x_437_;
v_b_422_ = v_a_435_;
goto _start;
}
else
{
return v___x_434_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__0___boxed(lean_object* v_as_439_, lean_object* v_sz_440_, lean_object* v_i_441_, lean_object* v_b_442_, lean_object* v___y_443_, lean_object* v___y_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_){
_start:
{
size_t v_sz_boxed_450_; size_t v_i_boxed_451_; lean_object* v_res_452_; 
v_sz_boxed_450_ = lean_unbox_usize(v_sz_440_);
lean_dec(v_sz_440_);
v_i_boxed_451_ = lean_unbox_usize(v_i_441_);
lean_dec(v_i_441_);
v_res_452_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__0(v_as_439_, v_sz_boxed_450_, v_i_boxed_451_, v_b_442_, v___y_443_, v___y_444_, v___y_445_, v___y_446_, v___y_447_, v___y_448_);
lean_dec(v___y_448_);
lean_dec_ref(v___y_447_);
lean_dec(v___y_446_);
lean_dec_ref(v___y_445_);
lean_dec(v___y_444_);
lean_dec_ref(v___y_443_);
lean_dec_ref(v_as_439_);
return v_res_452_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_454_; lean_object* v___x_455_; 
v___x_454_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg___closed__0));
v___x_455_ = l_Lean_stringToMessageData(v___x_454_);
return v___x_455_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg___closed__3(void){
_start:
{
lean_object* v___x_457_; lean_object* v___x_458_; 
v___x_457_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg___closed__2));
v___x_458_ = l_Lean_stringToMessageData(v___x_457_);
return v___x_458_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg___closed__5(void){
_start:
{
lean_object* v___x_460_; lean_object* v___x_461_; 
v___x_460_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg___closed__4));
v___x_461_ = l_Lean_stringToMessageData(v___x_460_);
return v___x_461_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg___closed__7(void){
_start:
{
lean_object* v___x_463_; lean_object* v___x_464_; 
v___x_463_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg___closed__6));
v___x_464_ = l_Lean_stringToMessageData(v___x_463_);
return v___x_464_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg(lean_object* v___x_465_, lean_object* v___x_466_, lean_object* v_step_467_, lean_object* v_a_468_, lean_object* v_range_469_, lean_object* v_b_470_, lean_object* v_i_471_, lean_object* v___y_472_, lean_object* v___y_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_){
_start:
{
lean_object* v_stop_479_; lean_object* v_step_480_; lean_object* v_a_482_; uint8_t v___x_485_; 
v_stop_479_ = lean_ctor_get(v_range_469_, 1);
v_step_480_ = lean_ctor_get(v_range_469_, 2);
v___x_485_ = lean_nat_dec_lt(v_i_471_, v_stop_479_);
if (v___x_485_ == 0)
{
lean_object* v___x_486_; 
lean_dec(v_i_471_);
lean_dec_ref(v_step_467_);
v___x_486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_486_, 0, v_b_470_);
return v___x_486_;
}
else
{
lean_object* v___x_487_; uint8_t v___x_488_; 
v___x_487_ = lean_array_get_size(v___x_465_);
v___x_488_ = lean_nat_dec_lt(v_i_471_, v___x_487_);
if (v___x_488_ == 0)
{
lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v_a_491_; lean_object* v___x_493_; uint8_t v_isShared_494_; uint8_t v_isSharedCheck_498_; 
lean_dec(v_i_471_);
lean_dec_ref(v_b_470_);
lean_dec_ref(v_step_467_);
v___x_489_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg___closed__1, &lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg___closed__1);
v___x_490_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_489_, v___y_474_, v___y_475_, v___y_476_, v___y_477_);
v_a_491_ = lean_ctor_get(v___x_490_, 0);
v_isSharedCheck_498_ = !lean_is_exclusive(v___x_490_);
if (v_isSharedCheck_498_ == 0)
{
v___x_493_ = v___x_490_;
v_isShared_494_ = v_isSharedCheck_498_;
goto v_resetjp_492_;
}
else
{
lean_inc(v_a_491_);
lean_dec(v___x_490_);
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
else
{
lean_object* v___x_499_; lean_object* v_fst_500_; lean_object* v_snd_501_; lean_object* v___x_503_; uint8_t v_isShared_504_; uint8_t v_isSharedCheck_563_; 
v___x_499_ = lean_array_fget(v___x_465_, v_i_471_);
v_fst_500_ = lean_ctor_get(v___x_499_, 0);
v_snd_501_ = lean_ctor_get(v___x_499_, 1);
v_isSharedCheck_563_ = !lean_is_exclusive(v___x_499_);
if (v_isSharedCheck_563_ == 0)
{
v___x_503_ = v___x_499_;
v_isShared_504_ = v_isSharedCheck_563_;
goto v_resetjp_502_;
}
else
{
lean_inc(v_snd_501_);
lean_inc(v_fst_500_);
lean_dec(v___x_499_);
v___x_503_ = lean_box(0);
v_isShared_504_ = v_isSharedCheck_563_;
goto v_resetjp_502_;
}
v_resetjp_502_:
{
lean_object* v___x_505_; uint8_t v___x_506_; 
v___x_505_ = lean_array_get_size(v___x_466_);
v___x_506_ = lean_nat_dec_lt(v_i_471_, v___x_505_);
if (v___x_506_ == 0)
{
lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v_a_509_; lean_object* v___x_511_; uint8_t v_isShared_512_; uint8_t v_isSharedCheck_516_; 
lean_del_object(v___x_503_);
lean_dec(v_snd_501_);
lean_dec(v_fst_500_);
lean_dec(v_i_471_);
lean_dec_ref(v_b_470_);
lean_dec_ref(v_step_467_);
v___x_507_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg___closed__3, &lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg___closed__3_once, _init_lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg___closed__3);
v___x_508_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_507_, v___y_474_, v___y_475_, v___y_476_, v___y_477_);
v_a_509_ = lean_ctor_get(v___x_508_, 0);
v_isSharedCheck_516_ = !lean_is_exclusive(v___x_508_);
if (v_isSharedCheck_516_ == 0)
{
v___x_511_ = v___x_508_;
v_isShared_512_ = v_isSharedCheck_516_;
goto v_resetjp_510_;
}
else
{
lean_inc(v_a_509_);
lean_dec(v___x_508_);
v___x_511_ = lean_box(0);
v_isShared_512_ = v_isSharedCheck_516_;
goto v_resetjp_510_;
}
v_resetjp_510_:
{
lean_object* v___x_514_; 
if (v_isShared_512_ == 0)
{
v___x_514_ = v___x_511_;
goto v_reusejp_513_;
}
else
{
lean_object* v_reuseFailAlloc_515_; 
v_reuseFailAlloc_515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_515_, 0, v_a_509_);
v___x_514_ = v_reuseFailAlloc_515_;
goto v_reusejp_513_;
}
v_reusejp_513_:
{
return v___x_514_;
}
}
}
else
{
lean_object* v___x_517_; lean_object* v___x_518_; 
v___x_517_ = lean_array_fget_borrowed(v___x_466_, v_i_471_);
lean_inc(v_i_471_);
lean_inc_ref(v_step_467_);
v___x_518_ = lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg(v_step_467_, v_i_471_, v___y_474_, v___y_475_, v___y_476_, v___y_477_);
if (lean_obj_tag(v___x_518_) == 0)
{
lean_object* v_a_519_; lean_object* v_literal_520_; 
v_a_519_ = lean_ctor_get(v___x_518_, 0);
lean_inc(v_a_519_);
lean_dec_ref_known(v___x_518_, 1);
v_literal_520_ = lean_ctor_get(v_a_519_, 0);
if (lean_obj_tag(v_literal_520_) == 1)
{
lean_object* v_val_521_; lean_object* v___x_522_; 
lean_del_object(v___x_503_);
v_val_521_ = lean_ctor_get(v_literal_520_, 0);
lean_inc(v_val_521_);
lean_inc(v___x_517_);
v___x_522_ = lp_vampireReplay_Vampire_Reconstruct_instantiateAt(v___x_517_, v_a_519_, v_a_468_, v_fst_500_, v_snd_501_, v___y_472_, v___y_473_, v___y_474_, v___y_475_, v___y_476_, v___y_477_);
if (lean_obj_tag(v___x_522_) == 0)
{
lean_object* v_a_523_; uint32_t v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; 
v_a_523_ = lean_ctor_get(v___x_522_, 0);
lean_inc(v_a_523_);
lean_dec_ref_known(v___x_522_, 1);
v___x_524_ = lean_unbox_uint32(v_val_521_);
lean_dec(v_val_521_);
v___x_525_ = lean_uint32_to_nat(v___x_524_);
v___x_526_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0___redArg(v_b_470_, v___x_525_, v_a_523_);
v_a_482_ = v___x_526_;
goto v___jp_481_;
}
else
{
lean_object* v_a_527_; lean_object* v___x_529_; uint8_t v_isShared_530_; uint8_t v_isSharedCheck_534_; 
lean_dec(v_val_521_);
lean_dec(v_i_471_);
lean_dec_ref(v_b_470_);
lean_dec_ref(v_step_467_);
v_a_527_ = lean_ctor_get(v___x_522_, 0);
v_isSharedCheck_534_ = !lean_is_exclusive(v___x_522_);
if (v_isSharedCheck_534_ == 0)
{
v___x_529_ = v___x_522_;
v_isShared_530_ = v_isSharedCheck_534_;
goto v_resetjp_528_;
}
else
{
lean_inc(v_a_527_);
lean_dec(v___x_522_);
v___x_529_ = lean_box(0);
v_isShared_530_ = v_isSharedCheck_534_;
goto v_resetjp_528_;
}
v_resetjp_528_:
{
lean_object* v___x_532_; 
if (v_isShared_530_ == 0)
{
v___x_532_ = v___x_529_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v_a_527_);
v___x_532_ = v_reuseFailAlloc_533_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
return v___x_532_;
}
}
}
}
else
{
lean_object* v___x_535_; uint32_t v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_542_; 
lean_dec(v_a_519_);
lean_dec(v_snd_501_);
lean_dec(v_fst_500_);
lean_dec(v_i_471_);
lean_dec_ref(v_b_470_);
lean_dec_ref(v_step_467_);
v___x_535_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg___closed__5, &lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg___closed__5_once, _init_lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg___closed__5);
v___x_536_ = lp_vampireReplay_Vampire_Unit_number(v___x_517_);
v___x_537_ = lean_uint32_to_nat(v___x_536_);
v___x_538_ = l_Nat_reprFast(v___x_537_);
v___x_539_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_539_, 0, v___x_538_);
v___x_540_ = l_Lean_MessageData_ofFormat(v___x_539_);
if (v_isShared_504_ == 0)
{
lean_ctor_set_tag(v___x_503_, 7);
lean_ctor_set(v___x_503_, 1, v___x_540_);
lean_ctor_set(v___x_503_, 0, v___x_535_);
v___x_542_ = v___x_503_;
goto v_reusejp_541_;
}
else
{
lean_object* v_reuseFailAlloc_554_; 
v_reuseFailAlloc_554_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_554_, 0, v___x_535_);
lean_ctor_set(v_reuseFailAlloc_554_, 1, v___x_540_);
v___x_542_ = v_reuseFailAlloc_554_;
goto v_reusejp_541_;
}
v_reusejp_541_:
{
lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v_a_546_; lean_object* v___x_548_; uint8_t v_isShared_549_; uint8_t v_isSharedCheck_553_; 
v___x_543_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg___closed__7, &lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg___closed__7_once, _init_lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg___closed__7);
v___x_544_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_544_, 0, v___x_542_);
lean_ctor_set(v___x_544_, 1, v___x_543_);
v___x_545_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_544_, v___y_474_, v___y_475_, v___y_476_, v___y_477_);
v_a_546_ = lean_ctor_get(v___x_545_, 0);
v_isSharedCheck_553_ = !lean_is_exclusive(v___x_545_);
if (v_isSharedCheck_553_ == 0)
{
v___x_548_ = v___x_545_;
v_isShared_549_ = v_isSharedCheck_553_;
goto v_resetjp_547_;
}
else
{
lean_inc(v_a_546_);
lean_dec(v___x_545_);
v___x_548_ = lean_box(0);
v_isShared_549_ = v_isSharedCheck_553_;
goto v_resetjp_547_;
}
v_resetjp_547_:
{
lean_object* v___x_551_; 
if (v_isShared_549_ == 0)
{
v___x_551_ = v___x_548_;
goto v_reusejp_550_;
}
else
{
lean_object* v_reuseFailAlloc_552_; 
v_reuseFailAlloc_552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_552_, 0, v_a_546_);
v___x_551_ = v_reuseFailAlloc_552_;
goto v_reusejp_550_;
}
v_reusejp_550_:
{
return v___x_551_;
}
}
}
}
}
else
{
lean_object* v_a_555_; lean_object* v___x_557_; uint8_t v_isShared_558_; uint8_t v_isSharedCheck_562_; 
lean_del_object(v___x_503_);
lean_dec(v_snd_501_);
lean_dec(v_fst_500_);
lean_dec(v_i_471_);
lean_dec_ref(v_b_470_);
lean_dec_ref(v_step_467_);
v_a_555_ = lean_ctor_get(v___x_518_, 0);
v_isSharedCheck_562_ = !lean_is_exclusive(v___x_518_);
if (v_isSharedCheck_562_ == 0)
{
v___x_557_ = v___x_518_;
v_isShared_558_ = v_isSharedCheck_562_;
goto v_resetjp_556_;
}
else
{
lean_inc(v_a_555_);
lean_dec(v___x_518_);
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
}
}
}
v___jp_481_:
{
lean_object* v___x_483_; 
v___x_483_ = lean_nat_add(v_i_471_, v_step_480_);
lean_dec(v_i_471_);
v_b_470_ = v_a_482_;
v_i_471_ = v___x_483_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg___boxed(lean_object* v___x_564_, lean_object* v___x_565_, lean_object* v_step_566_, lean_object* v_a_567_, lean_object* v_range_568_, lean_object* v_b_569_, lean_object* v_i_570_, lean_object* v___y_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_){
_start:
{
lean_object* v_res_578_; 
v_res_578_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg(v___x_564_, v___x_565_, v_step_566_, v_a_567_, v_range_568_, v_b_569_, v_i_570_, v___y_571_, v___y_572_, v___y_573_, v___y_574_, v___y_575_, v___y_576_);
lean_dec(v___y_576_);
lean_dec_ref(v___y_575_);
lean_dec(v___y_574_);
lean_dec_ref(v___y_573_);
lean_dec(v___y_572_);
lean_dec_ref(v___y_571_);
lean_dec_ref(v_range_568_);
lean_dec_ref(v_a_567_);
lean_dec_ref(v___x_565_);
lean_dec_ref(v___x_564_);
return v_res_578_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__4(lean_object* v___x_579_, lean_object* v___x_580_, lean_object* v_unit_581_, lean_object* v___x_582_, lean_object* v___x_583_, lean_object* v_a_584_, lean_object* v_fst_585_, lean_object* v_snd_586_, lean_object* v___x_587_, lean_object* v_premises_588_, lean_object* v_step_589_, lean_object* v___f_590_, lean_object* v___f_591_, lean_object* v___f_592_, uint8_t v___x_593_, lean_object* v_xs_594_, lean_object* v_target_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_){
_start:
{
lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; size_t v_sz_606_; size_t v___x_607_; lean_object* v___x_608_; 
v___x_603_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__4___closed__0, &lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__4___closed__0_once, _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__4___closed__0);
v___x_604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_604_, 0, v___x_579_);
lean_ctor_set(v___x_604_, 1, v___x_603_);
v___x_605_ = l_Array_zip___redArg(v_xs_594_, v___x_580_);
v_sz_606_ = lean_array_size(v___x_605_);
v___x_607_ = ((size_t)0ULL);
lean_inc_ref(v___x_604_);
v___x_608_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__0___redArg(v___x_605_, v_sz_606_, v___x_607_, v___x_604_);
lean_dec_ref(v___x_605_);
if (lean_obj_tag(v___x_608_) == 0)
{
lean_object* v_a_609_; lean_object* v___x_610_; lean_object* v___x_611_; 
v_a_609_ = lean_ctor_get(v___x_608_, 0);
lean_inc(v_a_609_);
lean_dec_ref_known(v___x_608_, 1);
v___x_610_ = lp_vampireReplay_Vampire_Unit_boundVarSorts(v_unit_581_);
lean_inc_ref(v___x_582_);
v___x_611_ = lp_vampireReplay_Vampire_Reconstruct_coverVars(v___x_582_, v_a_609_, v___x_610_, v___y_596_, v___y_597_, v___y_598_, v___y_599_, v___y_600_, v___y_601_);
lean_dec_ref(v___x_610_);
if (lean_obj_tag(v___x_611_) == 0)
{
lean_object* v_a_612_; size_t v_sz_613_; lean_object* v___x_614_; 
v_a_612_ = lean_ctor_get(v___x_611_, 0);
lean_inc(v_a_612_);
lean_dec_ref_known(v___x_611_, 1);
v_sz_613_ = lean_array_size(v___x_583_);
v___x_614_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__0(v___x_583_, v_sz_613_, v___x_607_, v_a_612_, v___y_596_, v___y_597_, v___y_598_, v___y_599_, v___y_600_, v___y_601_);
if (lean_obj_tag(v___x_614_) == 0)
{
lean_object* v_a_615_; lean_object* v___x_616_; 
v_a_615_ = lean_ctor_get(v___x_614_, 0);
lean_inc(v_a_615_);
lean_dec_ref_known(v___x_614_, 1);
v___x_616_ = lp_vampireReplay_Vampire_Reconstruct_instantiateAt(v___x_582_, v_a_584_, v_a_615_, v_fst_585_, v_snd_586_, v___y_596_, v___y_597_, v___y_598_, v___y_599_, v___y_600_, v___y_601_);
if (lean_obj_tag(v___x_616_) == 0)
{
lean_object* v_a_617_; lean_object* v_fst_618_; lean_object* v_snd_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; 
v_a_617_ = lean_ctor_get(v___x_616_, 0);
lean_inc(v_a_617_);
lean_dec_ref_known(v___x_616_, 1);
v_fst_618_ = lean_ctor_get(v_a_617_, 0);
lean_inc(v_fst_618_);
v_snd_619_ = lean_ctor_get(v_a_617_, 1);
lean_inc(v_snd_619_);
lean_dec(v_a_617_);
v___x_620_ = lean_unsigned_to_nat(1u);
v___x_621_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_621_, 0, v___x_620_);
lean_ctor_set(v___x_621_, 1, v___x_587_);
lean_ctor_set(v___x_621_, 2, v___x_620_);
v___x_622_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg(v_premises_588_, v___x_583_, v_step_589_, v_a_615_, v___x_621_, v___x_604_, v___x_620_, v___y_596_, v___y_597_, v___y_598_, v___y_599_, v___y_600_, v___y_601_);
lean_dec_ref_known(v___x_621_, 3);
lean_dec(v_a_615_);
if (lean_obj_tag(v___x_622_) == 0)
{
lean_object* v_a_623_; lean_object* v___f_624_; lean_object* v___f_625_; lean_object* v___x_626_; 
v_a_623_ = lean_ctor_get(v___x_622_, 0);
lean_inc_n(v_a_623_, 2);
lean_dec_ref_known(v___x_622_, 1);
v___f_624_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__2___boxed), 2, 1);
lean_closure_set(v___f_624_, 0, v_a_623_);
v___f_625_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__3___boxed), 13, 3);
lean_closure_set(v___f_625_, 0, v_a_623_);
lean_closure_set(v___f_625_, 1, v___f_590_);
lean_closure_set(v___f_625_, 2, v___f_591_);
v___x_626_ = lp_vampireReplay_Vampire_Reconstruct_carryPast(v_snd_619_, v_target_595_, v_fst_618_, v___f_624_, v___f_625_, v___f_592_, v___y_596_, v___y_597_, v___y_598_, v___y_599_, v___y_600_, v___y_601_);
if (lean_obj_tag(v___x_626_) == 0)
{
lean_object* v_a_627_; uint8_t v___x_628_; uint8_t v___x_629_; lean_object* v___x_630_; 
v_a_627_ = lean_ctor_get(v___x_626_, 0);
lean_inc(v_a_627_);
lean_dec_ref_known(v___x_626_, 1);
v___x_628_ = 0;
v___x_629_ = 1;
v___x_630_ = l_Lean_Meta_mkLambdaFVars(v_xs_594_, v_a_627_, v___x_628_, v___x_593_, v___x_628_, v___x_593_, v___x_629_, v___y_598_, v___y_599_, v___y_600_, v___y_601_);
return v___x_630_;
}
else
{
return v___x_626_;
}
}
else
{
lean_object* v_a_631_; lean_object* v___x_633_; uint8_t v_isShared_634_; uint8_t v_isSharedCheck_638_; 
lean_dec(v_snd_619_);
lean_dec(v_fst_618_);
lean_dec_ref(v_target_595_);
lean_dec_ref(v___f_592_);
lean_dec_ref(v___f_591_);
lean_dec_ref(v___f_590_);
v_a_631_ = lean_ctor_get(v___x_622_, 0);
v_isSharedCheck_638_ = !lean_is_exclusive(v___x_622_);
if (v_isSharedCheck_638_ == 0)
{
v___x_633_ = v___x_622_;
v_isShared_634_ = v_isSharedCheck_638_;
goto v_resetjp_632_;
}
else
{
lean_inc(v_a_631_);
lean_dec(v___x_622_);
v___x_633_ = lean_box(0);
v_isShared_634_ = v_isSharedCheck_638_;
goto v_resetjp_632_;
}
v_resetjp_632_:
{
lean_object* v___x_636_; 
if (v_isShared_634_ == 0)
{
v___x_636_ = v___x_633_;
goto v_reusejp_635_;
}
else
{
lean_object* v_reuseFailAlloc_637_; 
v_reuseFailAlloc_637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_637_, 0, v_a_631_);
v___x_636_ = v_reuseFailAlloc_637_;
goto v_reusejp_635_;
}
v_reusejp_635_:
{
return v___x_636_;
}
}
}
}
else
{
lean_object* v_a_639_; lean_object* v___x_641_; uint8_t v_isShared_642_; uint8_t v_isSharedCheck_646_; 
lean_dec(v_a_615_);
lean_dec_ref_known(v___x_604_, 2);
lean_dec_ref(v_target_595_);
lean_dec_ref(v___f_592_);
lean_dec_ref(v___f_591_);
lean_dec_ref(v___f_590_);
lean_dec_ref(v_step_589_);
lean_dec(v___x_587_);
v_a_639_ = lean_ctor_get(v___x_616_, 0);
v_isSharedCheck_646_ = !lean_is_exclusive(v___x_616_);
if (v_isSharedCheck_646_ == 0)
{
v___x_641_ = v___x_616_;
v_isShared_642_ = v_isSharedCheck_646_;
goto v_resetjp_640_;
}
else
{
lean_inc(v_a_639_);
lean_dec(v___x_616_);
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
lean_object* v_a_647_; lean_object* v___x_649_; uint8_t v_isShared_650_; uint8_t v_isSharedCheck_654_; 
lean_dec_ref_known(v___x_604_, 2);
lean_dec_ref(v_target_595_);
lean_dec_ref(v___f_592_);
lean_dec_ref(v___f_591_);
lean_dec_ref(v___f_590_);
lean_dec_ref(v_step_589_);
lean_dec(v___x_587_);
lean_dec_ref(v_snd_586_);
lean_dec_ref(v_fst_585_);
lean_dec_ref(v_a_584_);
lean_dec_ref(v___x_582_);
v_a_647_ = lean_ctor_get(v___x_614_, 0);
v_isSharedCheck_654_ = !lean_is_exclusive(v___x_614_);
if (v_isSharedCheck_654_ == 0)
{
v___x_649_ = v___x_614_;
v_isShared_650_ = v_isSharedCheck_654_;
goto v_resetjp_648_;
}
else
{
lean_inc(v_a_647_);
lean_dec(v___x_614_);
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
lean_object* v_a_655_; lean_object* v___x_657_; uint8_t v_isShared_658_; uint8_t v_isSharedCheck_662_; 
lean_dec_ref_known(v___x_604_, 2);
lean_dec_ref(v_target_595_);
lean_dec_ref(v___f_592_);
lean_dec_ref(v___f_591_);
lean_dec_ref(v___f_590_);
lean_dec_ref(v_step_589_);
lean_dec(v___x_587_);
lean_dec_ref(v_snd_586_);
lean_dec_ref(v_fst_585_);
lean_dec_ref(v_a_584_);
lean_dec_ref(v___x_582_);
v_a_655_ = lean_ctor_get(v___x_611_, 0);
v_isSharedCheck_662_ = !lean_is_exclusive(v___x_611_);
if (v_isSharedCheck_662_ == 0)
{
v___x_657_ = v___x_611_;
v_isShared_658_ = v_isSharedCheck_662_;
goto v_resetjp_656_;
}
else
{
lean_inc(v_a_655_);
lean_dec(v___x_611_);
v___x_657_ = lean_box(0);
v_isShared_658_ = v_isSharedCheck_662_;
goto v_resetjp_656_;
}
v_resetjp_656_:
{
lean_object* v___x_660_; 
if (v_isShared_658_ == 0)
{
v___x_660_ = v___x_657_;
goto v_reusejp_659_;
}
else
{
lean_object* v_reuseFailAlloc_661_; 
v_reuseFailAlloc_661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_661_, 0, v_a_655_);
v___x_660_ = v_reuseFailAlloc_661_;
goto v_reusejp_659_;
}
v_reusejp_659_:
{
return v___x_660_;
}
}
}
}
else
{
lean_object* v_a_663_; lean_object* v___x_665_; uint8_t v_isShared_666_; uint8_t v_isSharedCheck_670_; 
lean_dec_ref_known(v___x_604_, 2);
lean_dec_ref(v_target_595_);
lean_dec_ref(v___f_592_);
lean_dec_ref(v___f_591_);
lean_dec_ref(v___f_590_);
lean_dec_ref(v_step_589_);
lean_dec(v___x_587_);
lean_dec_ref(v_snd_586_);
lean_dec_ref(v_fst_585_);
lean_dec_ref(v_a_584_);
lean_dec_ref(v___x_582_);
lean_dec_ref(v_unit_581_);
v_a_663_ = lean_ctor_get(v___x_608_, 0);
v_isSharedCheck_670_ = !lean_is_exclusive(v___x_608_);
if (v_isSharedCheck_670_ == 0)
{
v___x_665_ = v___x_608_;
v_isShared_666_ = v_isSharedCheck_670_;
goto v_resetjp_664_;
}
else
{
lean_inc(v_a_663_);
lean_dec(v___x_608_);
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
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__4___boxed(lean_object** _args){
lean_object* v___x_671_ = _args[0];
lean_object* v___x_672_ = _args[1];
lean_object* v_unit_673_ = _args[2];
lean_object* v___x_674_ = _args[3];
lean_object* v___x_675_ = _args[4];
lean_object* v_a_676_ = _args[5];
lean_object* v_fst_677_ = _args[6];
lean_object* v_snd_678_ = _args[7];
lean_object* v___x_679_ = _args[8];
lean_object* v_premises_680_ = _args[9];
lean_object* v_step_681_ = _args[10];
lean_object* v___f_682_ = _args[11];
lean_object* v___f_683_ = _args[12];
lean_object* v___f_684_ = _args[13];
lean_object* v___x_685_ = _args[14];
lean_object* v_xs_686_ = _args[15];
lean_object* v_target_687_ = _args[16];
lean_object* v___y_688_ = _args[17];
lean_object* v___y_689_ = _args[18];
lean_object* v___y_690_ = _args[19];
lean_object* v___y_691_ = _args[20];
lean_object* v___y_692_ = _args[21];
lean_object* v___y_693_ = _args[22];
lean_object* v___y_694_ = _args[23];
_start:
{
uint8_t v___x_21775__boxed_695_; lean_object* v_res_696_; 
v___x_21775__boxed_695_ = lean_unbox(v___x_685_);
v_res_696_ = lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__4(v___x_671_, v___x_672_, v_unit_673_, v___x_674_, v___x_675_, v_a_676_, v_fst_677_, v_snd_678_, v___x_679_, v_premises_680_, v_step_681_, v___f_682_, v___f_683_, v___f_684_, v___x_21775__boxed_695_, v_xs_686_, v_target_687_, v___y_688_, v___y_689_, v___y_690_, v___y_691_, v___y_692_, v___y_693_);
lean_dec(v___y_693_);
lean_dec_ref(v___y_692_);
lean_dec(v___y_691_);
lean_dec_ref(v___y_690_);
lean_dec(v___y_689_);
lean_dec_ref(v___y_688_);
lean_dec_ref(v_xs_686_);
lean_dec_ref(v_premises_680_);
lean_dec_ref(v___x_675_);
lean_dec_ref(v___x_672_);
return v_res_696_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___closed__1(void){
_start:
{
lean_object* v___x_698_; lean_object* v___x_699_; 
v___x_698_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___closed__0));
v___x_699_ = l_Lean_stringToMessageData(v___x_698_);
return v___x_699_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting(lean_object* v_step_700_, lean_object* v_a_701_, lean_object* v_a_702_, lean_object* v_a_703_, lean_object* v_a_704_, lean_object* v_a_705_, lean_object* v_a_706_){
_start:
{
lean_object* v_unit_708_; lean_object* v_premises_709_; lean_object* v___x_710_; lean_object* v___x_711_; uint8_t v___x_712_; 
v_unit_708_ = lean_ctor_get(v_step_700_, 0);
lean_inc_ref(v_unit_708_);
v_premises_709_ = lean_ctor_get(v_step_700_, 1);
lean_inc_ref(v_premises_709_);
v___x_710_ = lean_unsigned_to_nat(0u);
v___x_711_ = lean_array_get_size(v_premises_709_);
v___x_712_ = lean_nat_dec_lt(v___x_710_, v___x_711_);
if (v___x_712_ == 0)
{
lean_object* v___x_713_; lean_object* v___x_714_; 
lean_dec_ref(v_premises_709_);
lean_dec_ref(v_unit_708_);
lean_dec_ref(v_step_700_);
v___x_713_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___closed__1);
v___x_714_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_713_, v_a_703_, v_a_704_, v_a_705_, v_a_706_);
return v___x_714_;
}
else
{
lean_object* v___x_715_; lean_object* v_fst_716_; lean_object* v_snd_717_; lean_object* v___x_718_; lean_object* v___x_719_; uint8_t v___x_720_; 
v___x_715_ = lean_array_fget_borrowed(v_premises_709_, v___x_710_);
v_fst_716_ = lean_ctor_get(v___x_715_, 0);
lean_inc(v_fst_716_);
v_snd_717_ = lean_ctor_get(v___x_715_, 1);
lean_inc(v_snd_717_);
lean_inc_ref(v_unit_708_);
v___x_718_ = lp_vampireReplay_Vampire_Unit_parents(v_unit_708_);
v___x_719_ = lean_array_get_size(v___x_718_);
v___x_720_ = lean_nat_dec_lt(v___x_710_, v___x_719_);
if (v___x_720_ == 0)
{
lean_object* v___x_721_; lean_object* v___x_722_; 
lean_dec_ref(v___x_718_);
lean_dec(v_snd_717_);
lean_dec(v_fst_716_);
lean_dec_ref(v_premises_709_);
lean_dec_ref(v_unit_708_);
lean_dec_ref(v_step_700_);
v___x_721_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___closed__1);
v___x_722_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_721_, v_a_703_, v_a_704_, v_a_705_, v_a_706_);
return v___x_722_;
}
else
{
lean_object* v___x_723_; lean_object* v___x_724_; 
v___x_723_ = lean_array_fget(v___x_718_, v___x_710_);
lean_inc_ref(v_step_700_);
v___x_724_ = lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg(v_step_700_, v___x_710_, v_a_703_, v_a_704_, v_a_705_, v_a_706_);
if (lean_obj_tag(v___x_724_) == 0)
{
lean_object* v_a_725_; lean_object* v___x_726_; 
v_a_725_ = lean_ctor_get(v___x_724_, 0);
lean_inc(v_a_725_);
lean_dec_ref_known(v___x_724_, 1);
lean_inc_ref(v_step_700_);
v___x_726_ = lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(v_step_700_, v_a_701_, v_a_702_, v_a_703_, v_a_704_, v_a_705_, v_a_706_);
if (lean_obj_tag(v___x_726_) == 0)
{
lean_object* v_a_727_; lean_object* v___x_729_; uint8_t v_isShared_730_; uint8_t v_isSharedCheck_743_; 
v_a_727_ = lean_ctor_get(v___x_726_, 0);
v_isSharedCheck_743_ = !lean_is_exclusive(v___x_726_);
if (v_isSharedCheck_743_ == 0)
{
v___x_729_ = v___x_726_;
v_isShared_730_ = v_isSharedCheck_743_;
goto v_resetjp_728_;
}
else
{
lean_inc(v_a_727_);
lean_dec(v___x_726_);
v___x_729_ = lean_box(0);
v_isShared_730_ = v_isSharedCheck_743_;
goto v_resetjp_728_;
}
v_resetjp_728_:
{
lean_object* v___f_731_; lean_object* v___x_732_; lean_object* v___f_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___f_736_; lean_object* v___x_737_; lean_object* v___x_739_; 
v___f_731_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___closed__4));
v___x_732_ = lean_box(v___x_720_);
v___f_733_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__1___boxed), 2, 1);
lean_closure_set(v___f_733_, 0, v___x_732_);
lean_inc_ref(v_unit_708_);
v___x_734_ = lp_vampireReplay_Vampire_Unit_varSorts(v_unit_708_);
v___x_735_ = lean_box(v___x_720_);
lean_inc_ref(v___x_734_);
v___f_736_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___lam__4___boxed), 24, 15);
lean_closure_set(v___f_736_, 0, v___x_710_);
lean_closure_set(v___f_736_, 1, v___x_734_);
lean_closure_set(v___f_736_, 2, v_unit_708_);
lean_closure_set(v___f_736_, 3, v___x_723_);
lean_closure_set(v___f_736_, 4, v___x_718_);
lean_closure_set(v___f_736_, 5, v_a_725_);
lean_closure_set(v___f_736_, 6, v_fst_716_);
lean_closure_set(v___f_736_, 7, v_snd_717_);
lean_closure_set(v___f_736_, 8, v___x_711_);
lean_closure_set(v___f_736_, 9, v_premises_709_);
lean_closure_set(v___f_736_, 10, v_step_700_);
lean_closure_set(v___f_736_, 11, v___f_733_);
lean_closure_set(v___f_736_, 12, v___f_731_);
lean_closure_set(v___f_736_, 13, v___f_731_);
lean_closure_set(v___f_736_, 14, v___x_735_);
v___x_737_ = lean_array_get_size(v___x_734_);
lean_dec_ref(v___x_734_);
if (v_isShared_730_ == 0)
{
lean_ctor_set_tag(v___x_729_, 1);
lean_ctor_set(v___x_729_, 0, v___x_737_);
v___x_739_ = v___x_729_;
goto v_reusejp_738_;
}
else
{
lean_object* v_reuseFailAlloc_742_; 
v_reuseFailAlloc_742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_742_, 0, v___x_737_);
v___x_739_ = v_reuseFailAlloc_742_;
goto v_reusejp_738_;
}
v_reusejp_738_:
{
uint8_t v___x_740_; lean_object* v___x_741_; 
v___x_740_ = 0;
v___x_741_ = lp_vampireReplay_Lean_Meta_forallBoundedTelescope___at___00Vampire_Reconstruct_relateLiterals_spec__6___redArg(v_a_727_, v___x_739_, v___f_736_, v___x_740_, v___x_740_, v_a_701_, v_a_702_, v_a_703_, v_a_704_, v_a_705_, v_a_706_);
return v___x_741_;
}
}
}
else
{
lean_dec(v_a_725_);
lean_dec(v___x_723_);
lean_dec_ref(v___x_718_);
lean_dec(v_snd_717_);
lean_dec(v_fst_716_);
lean_dec_ref(v_premises_709_);
lean_dec_ref(v_unit_708_);
lean_dec_ref(v_step_700_);
return v___x_726_;
}
}
else
{
lean_object* v_a_744_; lean_object* v___x_746_; uint8_t v_isShared_747_; uint8_t v_isSharedCheck_751_; 
lean_dec(v___x_723_);
lean_dec_ref(v___x_718_);
lean_dec(v_snd_717_);
lean_dec(v_fst_716_);
lean_dec_ref(v_premises_709_);
lean_dec_ref(v_unit_708_);
lean_dec_ref(v_step_700_);
v_a_744_ = lean_ctor_get(v___x_724_, 0);
v_isSharedCheck_751_ = !lean_is_exclusive(v___x_724_);
if (v_isSharedCheck_751_ == 0)
{
v___x_746_ = v___x_724_;
v_isShared_747_ = v_isSharedCheck_751_;
goto v_resetjp_745_;
}
else
{
lean_inc(v_a_744_);
lean_dec(v___x_724_);
v___x_746_ = lean_box(0);
v_isShared_747_ = v_isSharedCheck_751_;
goto v_resetjp_745_;
}
v_resetjp_745_:
{
lean_object* v___x_749_; 
if (v_isShared_747_ == 0)
{
v___x_749_ = v___x_746_;
goto v_reusejp_748_;
}
else
{
lean_object* v_reuseFailAlloc_750_; 
v_reuseFailAlloc_750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_750_, 0, v_a_744_);
v___x_749_ = v_reuseFailAlloc_750_;
goto v_reusejp_748_;
}
v_reusejp_748_:
{
return v___x_749_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting___boxed(lean_object* v_step_752_, lean_object* v_a_753_, lean_object* v_a_754_, lean_object* v_a_755_, lean_object* v_a_756_, lean_object* v_a_757_, lean_object* v_a_758_, lean_object* v_a_759_){
_start:
{
lean_object* v_res_760_; 
v_res_760_ = lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting(v_step_752_, v_a_753_, v_a_754_, v_a_755_, v_a_756_, v_a_757_, v_a_758_);
lean_dec(v_a_758_);
lean_dec_ref(v_a_757_);
lean_dec(v_a_756_);
lean_dec_ref(v_a_755_);
lean_dec(v_a_754_);
lean_dec_ref(v_a_753_);
return v_res_760_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1(lean_object* v___x_761_, lean_object* v___x_762_, lean_object* v_step_763_, lean_object* v_a_764_, lean_object* v_range_765_, lean_object* v_b_766_, lean_object* v_i_767_, lean_object* v_hs_768_, lean_object* v_hl_769_, lean_object* v___y_770_, lean_object* v___y_771_, lean_object* v___y_772_, lean_object* v___y_773_, lean_object* v___y_774_, lean_object* v___y_775_){
_start:
{
lean_object* v___x_777_; 
v___x_777_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___redArg(v___x_761_, v___x_762_, v_step_763_, v_a_764_, v_range_765_, v_b_766_, v_i_767_, v___y_770_, v___y_771_, v___y_772_, v___y_773_, v___y_774_, v___y_775_);
return v___x_777_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1___boxed(lean_object* v___x_778_, lean_object* v___x_779_, lean_object* v_step_780_, lean_object* v_a_781_, lean_object* v_range_782_, lean_object* v_b_783_, lean_object* v_i_784_, lean_object* v_hs_785_, lean_object* v_hl_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_, lean_object* v___y_792_, lean_object* v___y_793_){
_start:
{
lean_object* v_res_794_; 
v_res_794_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_unitResulting_spec__1(v___x_778_, v___x_779_, v_step_780_, v_a_781_, v_range_782_, v_b_783_, v_i_784_, v_hs_785_, v_hl_786_, v___y_787_, v___y_788_, v___y_789_, v___y_790_, v___y_791_, v___y_792_);
lean_dec(v___y_792_);
lean_dec_ref(v___y_791_);
lean_dec(v___y_790_);
lean_dec_ref(v___y_789_);
lean_dec(v___y_788_);
lean_dec_ref(v___y_787_);
lean_dec_ref(v_range_782_);
lean_dec_ref(v_a_781_);
lean_dec_ref(v___x_779_);
lean_dec_ref(v___x_778_);
return v_res_794_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_factoring___lam__0(lean_object* v___x_795_, lean_object* v___x_796_, lean_object* v_unit_797_, lean_object* v___x_798_, lean_object* v_a_799_, lean_object* v_fst_800_, lean_object* v_snd_801_, uint8_t v___x_802_, lean_object* v_xs_803_, lean_object* v_target_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_){
_start:
{
lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; size_t v_sz_815_; size_t v___x_816_; lean_object* v___x_817_; 
v___x_812_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__4___closed__0, &lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__4___closed__0_once, _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__4___closed__0);
v___x_813_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_813_, 0, v___x_795_);
lean_ctor_set(v___x_813_, 1, v___x_812_);
v___x_814_ = l_Array_zip___redArg(v_xs_803_, v___x_796_);
v_sz_815_ = lean_array_size(v___x_814_);
v___x_816_ = ((size_t)0ULL);
v___x_817_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__0___redArg(v___x_814_, v_sz_815_, v___x_816_, v___x_813_);
lean_dec_ref(v___x_814_);
if (lean_obj_tag(v___x_817_) == 0)
{
lean_object* v_a_818_; lean_object* v___x_819_; lean_object* v___x_820_; 
v_a_818_ = lean_ctor_get(v___x_817_, 0);
lean_inc(v_a_818_);
lean_dec_ref_known(v___x_817_, 1);
v___x_819_ = lp_vampireReplay_Vampire_Unit_boundVarSorts(v_unit_797_);
lean_inc_ref(v___x_798_);
v___x_820_ = lp_vampireReplay_Vampire_Reconstruct_coverVars(v___x_798_, v_a_818_, v___x_819_, v___y_805_, v___y_806_, v___y_807_, v___y_808_, v___y_809_, v___y_810_);
lean_dec_ref(v___x_819_);
if (lean_obj_tag(v___x_820_) == 0)
{
lean_object* v_a_821_; lean_object* v___x_822_; 
v_a_821_ = lean_ctor_get(v___x_820_, 0);
lean_inc(v_a_821_);
lean_dec_ref_known(v___x_820_, 1);
v___x_822_ = lp_vampireReplay_Vampire_Reconstruct_instantiateAt(v___x_798_, v_a_799_, v_a_821_, v_fst_800_, v_snd_801_, v___y_805_, v___y_806_, v___y_807_, v___y_808_, v___y_809_, v___y_810_);
lean_dec(v_a_821_);
if (lean_obj_tag(v___x_822_) == 0)
{
lean_object* v_a_823_; lean_object* v_fst_824_; lean_object* v_snd_825_; lean_object* v___x_826_; 
v_a_823_ = lean_ctor_get(v___x_822_, 0);
lean_inc(v_a_823_);
lean_dec_ref_known(v___x_822_, 1);
v_fst_824_ = lean_ctor_get(v_a_823_, 0);
lean_inc(v_fst_824_);
v_snd_825_ = lean_ctor_get(v_a_823_, 1);
lean_inc(v_snd_825_);
lean_dec(v_a_823_);
v___x_826_ = lp_vampireReplay_Vampire_Reconstruct_carryAll(v_snd_825_, v_target_804_, v_fst_824_, v___y_805_, v___y_806_, v___y_807_, v___y_808_, v___y_809_, v___y_810_);
if (lean_obj_tag(v___x_826_) == 0)
{
lean_object* v_a_827_; uint8_t v___x_828_; uint8_t v___x_829_; lean_object* v___x_830_; 
v_a_827_ = lean_ctor_get(v___x_826_, 0);
lean_inc(v_a_827_);
lean_dec_ref_known(v___x_826_, 1);
v___x_828_ = 0;
v___x_829_ = 1;
v___x_830_ = l_Lean_Meta_mkLambdaFVars(v_xs_803_, v_a_827_, v___x_828_, v___x_802_, v___x_828_, v___x_802_, v___x_829_, v___y_807_, v___y_808_, v___y_809_, v___y_810_);
return v___x_830_;
}
else
{
return v___x_826_;
}
}
else
{
lean_object* v_a_831_; lean_object* v___x_833_; uint8_t v_isShared_834_; uint8_t v_isSharedCheck_838_; 
lean_dec_ref(v_target_804_);
v_a_831_ = lean_ctor_get(v___x_822_, 0);
v_isSharedCheck_838_ = !lean_is_exclusive(v___x_822_);
if (v_isSharedCheck_838_ == 0)
{
v___x_833_ = v___x_822_;
v_isShared_834_ = v_isSharedCheck_838_;
goto v_resetjp_832_;
}
else
{
lean_inc(v_a_831_);
lean_dec(v___x_822_);
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
else
{
lean_object* v_a_839_; lean_object* v___x_841_; uint8_t v_isShared_842_; uint8_t v_isSharedCheck_846_; 
lean_dec_ref(v_target_804_);
lean_dec_ref(v_snd_801_);
lean_dec_ref(v_fst_800_);
lean_dec_ref(v_a_799_);
lean_dec_ref(v___x_798_);
v_a_839_ = lean_ctor_get(v___x_820_, 0);
v_isSharedCheck_846_ = !lean_is_exclusive(v___x_820_);
if (v_isSharedCheck_846_ == 0)
{
v___x_841_ = v___x_820_;
v_isShared_842_ = v_isSharedCheck_846_;
goto v_resetjp_840_;
}
else
{
lean_inc(v_a_839_);
lean_dec(v___x_820_);
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
else
{
lean_object* v_a_847_; lean_object* v___x_849_; uint8_t v_isShared_850_; uint8_t v_isSharedCheck_854_; 
lean_dec_ref(v_target_804_);
lean_dec_ref(v_snd_801_);
lean_dec_ref(v_fst_800_);
lean_dec_ref(v_a_799_);
lean_dec_ref(v___x_798_);
lean_dec_ref(v_unit_797_);
v_a_847_ = lean_ctor_get(v___x_817_, 0);
v_isSharedCheck_854_ = !lean_is_exclusive(v___x_817_);
if (v_isSharedCheck_854_ == 0)
{
v___x_849_ = v___x_817_;
v_isShared_850_ = v_isSharedCheck_854_;
goto v_resetjp_848_;
}
else
{
lean_inc(v_a_847_);
lean_dec(v___x_817_);
v___x_849_ = lean_box(0);
v_isShared_850_ = v_isSharedCheck_854_;
goto v_resetjp_848_;
}
v_resetjp_848_:
{
lean_object* v___x_852_; 
if (v_isShared_850_ == 0)
{
v___x_852_ = v___x_849_;
goto v_reusejp_851_;
}
else
{
lean_object* v_reuseFailAlloc_853_; 
v_reuseFailAlloc_853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_853_, 0, v_a_847_);
v___x_852_ = v_reuseFailAlloc_853_;
goto v_reusejp_851_;
}
v_reusejp_851_:
{
return v___x_852_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_factoring___lam__0___boxed(lean_object** _args){
lean_object* v___x_855_ = _args[0];
lean_object* v___x_856_ = _args[1];
lean_object* v_unit_857_ = _args[2];
lean_object* v___x_858_ = _args[3];
lean_object* v_a_859_ = _args[4];
lean_object* v_fst_860_ = _args[5];
lean_object* v_snd_861_ = _args[6];
lean_object* v___x_862_ = _args[7];
lean_object* v_xs_863_ = _args[8];
lean_object* v_target_864_ = _args[9];
lean_object* v___y_865_ = _args[10];
lean_object* v___y_866_ = _args[11];
lean_object* v___y_867_ = _args[12];
lean_object* v___y_868_ = _args[13];
lean_object* v___y_869_ = _args[14];
lean_object* v___y_870_ = _args[15];
lean_object* v___y_871_ = _args[16];
_start:
{
uint8_t v___x_3973__boxed_872_; lean_object* v_res_873_; 
v___x_3973__boxed_872_ = lean_unbox(v___x_862_);
v_res_873_ = lp_vampireReplay_Vampire_Reconstruct_Resolution_factoring___lam__0(v___x_855_, v___x_856_, v_unit_857_, v___x_858_, v_a_859_, v_fst_860_, v_snd_861_, v___x_3973__boxed_872_, v_xs_863_, v_target_864_, v___y_865_, v___y_866_, v___y_867_, v___y_868_, v___y_869_, v___y_870_);
lean_dec(v___y_870_);
lean_dec_ref(v___y_869_);
lean_dec(v___y_868_);
lean_dec_ref(v___y_867_);
lean_dec(v___y_866_);
lean_dec_ref(v___y_865_);
lean_dec_ref(v_xs_863_);
lean_dec_ref(v___x_856_);
return v_res_873_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_factoring___closed__1(void){
_start:
{
lean_object* v___x_875_; lean_object* v___x_876_; 
v___x_875_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_factoring___closed__0));
v___x_876_ = l_Lean_stringToMessageData(v___x_875_);
return v___x_876_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_factoring___closed__3(void){
_start:
{
lean_object* v___x_878_; lean_object* v___x_879_; 
v___x_878_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_factoring___closed__2));
v___x_879_ = l_Lean_stringToMessageData(v___x_878_);
return v___x_879_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_factoring(lean_object* v_step_880_, lean_object* v_a_881_, lean_object* v_a_882_, lean_object* v_a_883_, lean_object* v_a_884_, lean_object* v_a_885_, lean_object* v_a_886_){
_start:
{
lean_object* v_unit_888_; lean_object* v_premises_889_; lean_object* v___x_890_; lean_object* v___x_891_; uint8_t v___x_892_; 
v_unit_888_ = lean_ctor_get(v_step_880_, 0);
lean_inc_ref(v_unit_888_);
v_premises_889_ = lean_ctor_get(v_step_880_, 1);
v___x_890_ = lean_array_get_size(v_premises_889_);
v___x_891_ = lean_unsigned_to_nat(1u);
v___x_892_ = lean_nat_dec_eq(v___x_890_, v___x_891_);
if (v___x_892_ == 0)
{
lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; 
lean_dec_ref(v_unit_888_);
lean_dec_ref(v_step_880_);
v___x_893_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Resolution_factoring___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Resolution_factoring___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_factoring___closed__1);
v___x_894_ = l_Nat_reprFast(v___x_890_);
v___x_895_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_895_, 0, v___x_894_);
v___x_896_ = l_Lean_MessageData_ofFormat(v___x_895_);
v___x_897_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_897_, 0, v___x_893_);
lean_ctor_set(v___x_897_, 1, v___x_896_);
v___x_898_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_897_, v_a_883_, v_a_884_, v_a_885_, v_a_886_);
return v___x_898_;
}
else
{
lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v_fst_901_; lean_object* v_snd_902_; lean_object* v___x_903_; lean_object* v___x_904_; uint8_t v___x_905_; 
v___x_899_ = lean_unsigned_to_nat(0u);
v___x_900_ = lean_array_fget_borrowed(v_premises_889_, v___x_899_);
v_fst_901_ = lean_ctor_get(v___x_900_, 0);
lean_inc(v_fst_901_);
v_snd_902_ = lean_ctor_get(v___x_900_, 1);
lean_inc(v_snd_902_);
lean_inc_ref(v_unit_888_);
v___x_903_ = lp_vampireReplay_Vampire_Unit_parents(v_unit_888_);
v___x_904_ = lean_array_get_size(v___x_903_);
v___x_905_ = lean_nat_dec_lt(v___x_899_, v___x_904_);
if (v___x_905_ == 0)
{
lean_object* v___x_906_; lean_object* v___x_907_; 
lean_dec_ref(v___x_903_);
lean_dec(v_snd_902_);
lean_dec(v_fst_901_);
lean_dec_ref(v_unit_888_);
lean_dec_ref(v_step_880_);
v___x_906_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Resolution_factoring___closed__3, &lp_vampireReplay_Vampire_Reconstruct_Resolution_factoring___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_factoring___closed__3);
v___x_907_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_906_, v_a_883_, v_a_884_, v_a_885_, v_a_886_);
return v___x_907_;
}
else
{
lean_object* v___x_908_; 
lean_inc_ref(v_step_880_);
v___x_908_ = lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg(v_step_880_, v___x_899_, v_a_883_, v_a_884_, v_a_885_, v_a_886_);
if (lean_obj_tag(v___x_908_) == 0)
{
lean_object* v_a_909_; lean_object* v___x_910_; 
v_a_909_ = lean_ctor_get(v___x_908_, 0);
lean_inc(v_a_909_);
lean_dec_ref_known(v___x_908_, 1);
v___x_910_ = lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(v_step_880_, v_a_881_, v_a_882_, v_a_883_, v_a_884_, v_a_885_, v_a_886_);
if (lean_obj_tag(v___x_910_) == 0)
{
lean_object* v_a_911_; lean_object* v___x_913_; uint8_t v_isShared_914_; uint8_t v_isSharedCheck_925_; 
v_a_911_ = lean_ctor_get(v___x_910_, 0);
v_isSharedCheck_925_ = !lean_is_exclusive(v___x_910_);
if (v_isSharedCheck_925_ == 0)
{
v___x_913_ = v___x_910_;
v_isShared_914_ = v_isSharedCheck_925_;
goto v_resetjp_912_;
}
else
{
lean_inc(v_a_911_);
lean_dec(v___x_910_);
v___x_913_ = lean_box(0);
v_isShared_914_ = v_isSharedCheck_925_;
goto v_resetjp_912_;
}
v_resetjp_912_:
{
lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___f_918_; lean_object* v___x_919_; lean_object* v___x_921_; 
v___x_915_ = lean_array_fget(v___x_903_, v___x_899_);
lean_dec_ref(v___x_903_);
lean_inc_ref(v_unit_888_);
v___x_916_ = lp_vampireReplay_Vampire_Unit_varSorts(v_unit_888_);
v___x_917_ = lean_box(v___x_905_);
lean_inc_ref(v___x_916_);
v___f_918_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_factoring___lam__0___boxed), 17, 8);
lean_closure_set(v___f_918_, 0, v___x_899_);
lean_closure_set(v___f_918_, 1, v___x_916_);
lean_closure_set(v___f_918_, 2, v_unit_888_);
lean_closure_set(v___f_918_, 3, v___x_915_);
lean_closure_set(v___f_918_, 4, v_a_909_);
lean_closure_set(v___f_918_, 5, v_fst_901_);
lean_closure_set(v___f_918_, 6, v_snd_902_);
lean_closure_set(v___f_918_, 7, v___x_917_);
v___x_919_ = lean_array_get_size(v___x_916_);
lean_dec_ref(v___x_916_);
if (v_isShared_914_ == 0)
{
lean_ctor_set_tag(v___x_913_, 1);
lean_ctor_set(v___x_913_, 0, v___x_919_);
v___x_921_ = v___x_913_;
goto v_reusejp_920_;
}
else
{
lean_object* v_reuseFailAlloc_924_; 
v_reuseFailAlloc_924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_924_, 0, v___x_919_);
v___x_921_ = v_reuseFailAlloc_924_;
goto v_reusejp_920_;
}
v_reusejp_920_:
{
uint8_t v___x_922_; lean_object* v___x_923_; 
v___x_922_ = 0;
v___x_923_ = lp_vampireReplay_Lean_Meta_forallBoundedTelescope___at___00Vampire_Reconstruct_relateLiterals_spec__6___redArg(v_a_911_, v___x_921_, v___f_918_, v___x_922_, v___x_922_, v_a_881_, v_a_882_, v_a_883_, v_a_884_, v_a_885_, v_a_886_);
return v___x_923_;
}
}
}
else
{
lean_dec(v_a_909_);
lean_dec_ref(v___x_903_);
lean_dec(v_snd_902_);
lean_dec(v_fst_901_);
lean_dec_ref(v_unit_888_);
return v___x_910_;
}
}
else
{
lean_object* v_a_926_; lean_object* v___x_928_; uint8_t v_isShared_929_; uint8_t v_isSharedCheck_933_; 
lean_dec_ref(v___x_903_);
lean_dec(v_snd_902_);
lean_dec(v_fst_901_);
lean_dec_ref(v_unit_888_);
lean_dec_ref(v_step_880_);
v_a_926_ = lean_ctor_get(v___x_908_, 0);
v_isSharedCheck_933_ = !lean_is_exclusive(v___x_908_);
if (v_isSharedCheck_933_ == 0)
{
v___x_928_ = v___x_908_;
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
else
{
lean_inc(v_a_926_);
lean_dec(v___x_908_);
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
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_factoring___boxed(lean_object* v_step_934_, lean_object* v_a_935_, lean_object* v_a_936_, lean_object* v_a_937_, lean_object* v_a_938_, lean_object* v_a_939_, lean_object* v_a_940_, lean_object* v_a_941_){
_start:
{
lean_object* v_res_942_; 
v_res_942_ = lp_vampireReplay_Vampire_Reconstruct_Resolution_factoring(v_step_934_, v_a_935_, v_a_936_, v_a_937_, v_a_938_, v_a_939_, v_a_940_);
lean_dec(v_a_940_);
lean_dec_ref(v_a_939_);
lean_dec(v_a_938_);
lean_dec_ref(v_a_937_);
lean_dec(v_a_936_);
lean_dec_ref(v_a_935_);
return v_res_942_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___lam__1(lean_object* v_rest_943_, lean_object* v___x_944_, uint8_t v___x_945_, lean_object* v_x_946_, lean_object* v___y_947_, lean_object* v___y_948_, lean_object* v___y_949_, lean_object* v___y_950_, lean_object* v___y_951_, lean_object* v___y_952_){
_start:
{
lean_object* v___x_954_; 
lean_inc_ref(v_x_946_);
v___x_954_ = lp_vampireReplay_Vampire_Reconstruct_placeLiteral(v_rest_943_, v_x_946_, v___y_947_, v___y_948_, v___y_949_, v___y_950_, v___y_951_, v___y_952_);
if (lean_obj_tag(v___x_954_) == 0)
{
lean_object* v_a_955_; lean_object* v___x_956_; lean_object* v___x_957_; uint8_t v___x_958_; uint8_t v___x_959_; lean_object* v___x_960_; 
v_a_955_ = lean_ctor_get(v___x_954_, 0);
lean_inc(v_a_955_);
lean_dec_ref_known(v___x_954_, 1);
v___x_956_ = lean_mk_empty_array_with_capacity(v___x_944_);
v___x_957_ = lean_array_push(v___x_956_, v_x_946_);
v___x_958_ = 0;
v___x_959_ = 1;
v___x_960_ = l_Lean_Meta_mkLambdaFVars(v___x_957_, v_a_955_, v___x_958_, v___x_945_, v___x_958_, v___x_945_, v___x_959_, v___y_949_, v___y_950_, v___y_951_, v___y_952_);
lean_dec_ref(v___x_957_);
return v___x_960_;
}
else
{
lean_dec_ref(v_x_946_);
return v___x_954_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___lam__1___boxed(lean_object* v_rest_961_, lean_object* v___x_962_, lean_object* v___x_963_, lean_object* v_x_964_, lean_object* v___y_965_, lean_object* v___y_966_, lean_object* v___y_967_, lean_object* v___y_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_){
_start:
{
uint8_t v___x_2562__boxed_972_; lean_object* v_res_973_; 
v___x_2562__boxed_972_ = lean_unbox(v___x_963_);
v_res_973_ = lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___lam__1(v_rest_961_, v___x_962_, v___x_2562__boxed_972_, v_x_964_, v___y_965_, v___y_966_, v___y_967_, v___y_968_, v___y_969_, v___y_970_);
lean_dec(v___y_970_);
lean_dec_ref(v___y_969_);
lean_dec(v___y_968_);
lean_dec_ref(v___y_967_);
lean_dec(v___y_966_);
lean_dec_ref(v___y_965_);
lean_dec(v___x_962_);
return v_res_973_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__5(void){
_start:
{
lean_object* v___x_981_; lean_object* v___x_982_; 
v___x_981_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__4));
v___x_982_ = l_Lean_stringToMessageData(v___x_981_);
return v___x_982_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__7(void){
_start:
{
lean_object* v___x_984_; lean_object* v___x_985_; 
v___x_984_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__6));
v___x_985_ = l_Lean_stringToMessageData(v___x_984_);
return v___x_985_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___lam__0___boxed(lean_object* v_facts_986_, lean_object* v_i_987_, lean_object* v___x_988_, lean_object* v_rest_989_, lean_object* v_inner_990_, lean_object* v_h_991_, lean_object* v_constraints_992_, lean_object* v___x_993_, lean_object* v_x_994_, lean_object* v___y_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_){
_start:
{
uint8_t v___x_2624__boxed_1002_; lean_object* v_res_1003_; 
v___x_2624__boxed_1002_ = lean_unbox(v___x_993_);
v_res_1003_ = lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___lam__0(v_facts_986_, v_i_987_, v___x_988_, v_rest_989_, v_inner_990_, v_h_991_, v_constraints_992_, v___x_2624__boxed_1002_, v_x_994_, v___y_995_, v___y_996_, v___y_997_, v___y_998_, v___y_999_, v___y_1000_);
lean_dec(v___y_1000_);
lean_dec_ref(v___y_999_);
lean_dec(v___y_998_);
lean_dec_ref(v___y_997_);
lean_dec(v___y_996_);
lean_dec_ref(v___y_995_);
lean_dec(v___x_988_);
lean_dec(v_i_987_);
return v_res_1003_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go(lean_object* v_rest_1012_, lean_object* v_inner_1013_, lean_object* v_h_1014_, lean_object* v_constraints_1015_, lean_object* v_facts_1016_, lean_object* v_i_1017_, lean_object* v_a_1018_, lean_object* v_a_1019_, lean_object* v_a_1020_, lean_object* v_a_1021_, lean_object* v_a_1022_, lean_object* v_a_1023_){
_start:
{
lean_object* v___x_1025_; uint8_t v___x_1026_; 
v___x_1025_ = lean_array_get_size(v_constraints_1015_);
v___x_1026_ = lean_nat_dec_lt(v_i_1017_, v___x_1025_);
if (v___x_1026_ == 0)
{
lean_object* v___x_1027_; lean_object* v___x_1028_; 
lean_dec(v_i_1017_);
lean_dec_ref(v_constraints_1015_);
v___x_1027_ = lean_unsigned_to_nat(2u);
lean_inc_ref(v_inner_1013_);
v___x_1028_ = lp_vampireReplay_Vampire_Reconstruct_byArithmetic(v_facts_1016_, v_inner_1013_, v___x_1027_, v_a_1018_, v_a_1019_, v_a_1020_, v_a_1021_, v_a_1022_, v_a_1023_);
if (lean_obj_tag(v___x_1028_) == 0)
{
lean_object* v_a_1029_; lean_object* v___x_1031_; uint8_t v_isShared_1032_; uint8_t v_isSharedCheck_1047_; 
v_a_1029_ = lean_ctor_get(v___x_1028_, 0);
v_isSharedCheck_1047_ = !lean_is_exclusive(v___x_1028_);
if (v_isSharedCheck_1047_ == 0)
{
v___x_1031_ = v___x_1028_;
v_isShared_1032_ = v_isSharedCheck_1047_;
goto v_resetjp_1030_;
}
else
{
lean_inc(v_a_1029_);
lean_dec(v___x_1028_);
v___x_1031_ = lean_box(0);
v_isShared_1032_ = v_isSharedCheck_1047_;
goto v_resetjp_1030_;
}
v_resetjp_1030_:
{
lean_object* v___x_1033_; lean_object* v___x_1035_; 
v___x_1033_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__1));
if (v_isShared_1032_ == 0)
{
lean_ctor_set_tag(v___x_1031_, 1);
lean_ctor_set(v___x_1031_, 0, v_inner_1013_);
v___x_1035_ = v___x_1031_;
goto v_reusejp_1034_;
}
else
{
lean_object* v_reuseFailAlloc_1046_; 
v_reuseFailAlloc_1046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1046_, 0, v_inner_1013_);
v___x_1035_ = v_reuseFailAlloc_1046_;
goto v_reusejp_1034_;
}
v_reusejp_1034_:
{
lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; 
v___x_1036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1036_, 0, v_rest_1012_);
v___x_1037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1037_, 0, v_a_1029_);
v___x_1038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1038_, 0, v_h_1014_);
v___x_1039_ = lean_unsigned_to_nat(4u);
v___x_1040_ = lean_mk_empty_array_with_capacity(v___x_1039_);
v___x_1041_ = lean_array_push(v___x_1040_, v___x_1035_);
v___x_1042_ = lean_array_push(v___x_1041_, v___x_1036_);
v___x_1043_ = lean_array_push(v___x_1042_, v___x_1037_);
v___x_1044_ = lean_array_push(v___x_1043_, v___x_1038_);
v___x_1045_ = l_Lean_Meta_mkAppOptM(v___x_1033_, v___x_1044_, v_a_1020_, v_a_1021_, v_a_1022_, v_a_1023_);
return v___x_1045_;
}
}
}
else
{
lean_dec_ref(v_h_1014_);
lean_dec_ref(v_inner_1013_);
lean_dec_ref(v_rest_1012_);
return v___x_1028_;
}
}
else
{
lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; uint8_t v___x_1051_; 
v___x_1048_ = lean_array_fget(v_constraints_1015_, v_i_1017_);
v___x_1049_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__3));
v___x_1050_ = lean_unsigned_to_nat(1u);
v___x_1051_ = l_Lean_Expr_isAppOfArity(v___x_1048_, v___x_1049_, v___x_1050_);
if (v___x_1051_ == 0)
{
lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; 
lean_dec(v_i_1017_);
lean_dec_ref(v_facts_1016_);
lean_dec_ref(v_constraints_1015_);
lean_dec_ref(v_h_1014_);
lean_dec_ref(v_inner_1013_);
lean_dec_ref(v_rest_1012_);
v___x_1052_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__5, &lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__5_once, _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__5);
v___x_1053_ = l_Lean_indentExpr(v___x_1048_);
v___x_1054_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1054_, 0, v___x_1052_);
lean_ctor_set(v___x_1054_, 1, v___x_1053_);
v___x_1055_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__7, &lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__7_once, _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__7);
v___x_1056_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1056_, 0, v___x_1054_);
lean_ctor_set(v___x_1056_, 1, v___x_1055_);
v___x_1057_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1056_, v_a_1020_, v_a_1021_, v_a_1022_, v_a_1023_);
return v___x_1057_;
}
else
{
lean_object* v___x_1058_; lean_object* v___f_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; 
v___x_1058_ = lean_box(v___x_1051_);
lean_inc_ref(v_rest_1012_);
v___f_1059_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___lam__0___boxed), 16, 8);
lean_closure_set(v___f_1059_, 0, v_facts_1016_);
lean_closure_set(v___f_1059_, 1, v_i_1017_);
lean_closure_set(v___f_1059_, 2, v___x_1050_);
lean_closure_set(v___f_1059_, 3, v_rest_1012_);
lean_closure_set(v___f_1059_, 4, v_inner_1013_);
lean_closure_set(v___f_1059_, 5, v_h_1014_);
lean_closure_set(v___f_1059_, 6, v_constraints_1015_);
lean_closure_set(v___f_1059_, 7, v___x_1058_);
v___x_1060_ = l_Lean_Expr_appArg_x21(v___x_1048_);
v___x_1061_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__9));
v___x_1062_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_1061_, v___x_1060_, v___f_1059_, v_a_1018_, v_a_1019_, v_a_1020_, v_a_1021_, v_a_1022_, v_a_1023_);
if (lean_obj_tag(v___x_1062_) == 0)
{
lean_object* v_a_1063_; lean_object* v___x_1064_; lean_object* v___f_1065_; lean_object* v___x_1066_; 
v_a_1063_ = lean_ctor_get(v___x_1062_, 0);
lean_inc(v_a_1063_);
lean_dec_ref_known(v___x_1062_, 1);
v___x_1064_ = lean_box(v___x_1051_);
v___f_1065_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___lam__1___boxed), 11, 3);
lean_closure_set(v___f_1065_, 0, v_rest_1012_);
lean_closure_set(v___f_1065_, 1, v___x_1050_);
lean_closure_set(v___f_1065_, 2, v___x_1064_);
v___x_1066_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_1061_, v___x_1048_, v___f_1065_, v_a_1018_, v_a_1019_, v_a_1020_, v_a_1021_, v_a_1022_, v_a_1023_);
if (lean_obj_tag(v___x_1066_) == 0)
{
lean_object* v_a_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; 
v_a_1067_ = lean_ctor_get(v___x_1066_, 0);
lean_inc(v_a_1067_);
lean_dec_ref_known(v___x_1066_, 1);
v___x_1068_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__12));
v___x_1069_ = lean_unsigned_to_nat(2u);
v___x_1070_ = lean_mk_empty_array_with_capacity(v___x_1069_);
v___x_1071_ = lean_array_push(v___x_1070_, v_a_1063_);
v___x_1072_ = lean_array_push(v___x_1071_, v_a_1067_);
v___x_1073_ = l_Lean_Meta_mkAppM(v___x_1068_, v___x_1072_, v_a_1020_, v_a_1021_, v_a_1022_, v_a_1023_);
return v___x_1073_;
}
else
{
lean_dec(v_a_1063_);
return v___x_1066_;
}
}
else
{
lean_dec(v___x_1048_);
lean_dec_ref(v_rest_1012_);
return v___x_1062_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___lam__0(lean_object* v_facts_1074_, lean_object* v_i_1075_, lean_object* v___x_1076_, lean_object* v_rest_1077_, lean_object* v_inner_1078_, lean_object* v_h_1079_, lean_object* v_constraints_1080_, uint8_t v___x_1081_, lean_object* v_x_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_){
_start:
{
lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; 
lean_inc_ref(v_x_1082_);
v___x_1090_ = lean_array_push(v_facts_1074_, v_x_1082_);
v___x_1091_ = lean_nat_add(v_i_1075_, v___x_1076_);
v___x_1092_ = lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go(v_rest_1077_, v_inner_1078_, v_h_1079_, v_constraints_1080_, v___x_1090_, v___x_1091_, v___y_1083_, v___y_1084_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_);
if (lean_obj_tag(v___x_1092_) == 0)
{
lean_object* v_a_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; uint8_t v___x_1096_; uint8_t v___x_1097_; lean_object* v___x_1098_; 
v_a_1093_ = lean_ctor_get(v___x_1092_, 0);
lean_inc(v_a_1093_);
lean_dec_ref_known(v___x_1092_, 1);
v___x_1094_ = lean_mk_empty_array_with_capacity(v___x_1076_);
v___x_1095_ = lean_array_push(v___x_1094_, v_x_1082_);
v___x_1096_ = 0;
v___x_1097_ = 1;
v___x_1098_ = l_Lean_Meta_mkLambdaFVars(v___x_1095_, v_a_1093_, v___x_1096_, v___x_1081_, v___x_1096_, v___x_1081_, v___x_1097_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_);
lean_dec_ref(v___x_1095_);
return v___x_1098_;
}
else
{
lean_dec_ref(v_x_1082_);
return v___x_1092_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___boxed(lean_object* v_rest_1099_, lean_object* v_inner_1100_, lean_object* v_h_1101_, lean_object* v_constraints_1102_, lean_object* v_facts_1103_, lean_object* v_i_1104_, lean_object* v_a_1105_, lean_object* v_a_1106_, lean_object* v_a_1107_, lean_object* v_a_1108_, lean_object* v_a_1109_, lean_object* v_a_1110_, lean_object* v_a_1111_){
_start:
{
lean_object* v_res_1112_; 
v_res_1112_ = lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go(v_rest_1099_, v_inner_1100_, v_h_1101_, v_constraints_1102_, v_facts_1103_, v_i_1104_, v_a_1105_, v_a_1106_, v_a_1107_, v_a_1108_, v_a_1109_, v_a_1110_);
lean_dec(v_a_1110_);
lean_dec_ref(v_a_1109_);
lean_dec(v_a_1108_);
lean_dec_ref(v_a_1107_);
lean_dec(v_a_1106_);
lean_dec_ref(v_a_1105_);
return v_res_1112_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_fromConstraints_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_1114_; lean_object* v___x_1115_; 
v___x_1114_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_fromConstraints_spec__0___redArg___closed__0));
v___x_1115_ = l_Lean_stringToMessageData(v___x_1114_);
return v___x_1115_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_fromConstraints_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_1117_; lean_object* v___x_1118_; 
v___x_1117_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_fromConstraints_spec__0___redArg___closed__2));
v___x_1118_ = l_Lean_stringToMessageData(v___x_1117_);
return v___x_1118_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_fromConstraints_spec__0___redArg(lean_object* v_val_1119_, lean_object* v_vars_1120_, lean_object* v_range_1121_, lean_object* v_b_1122_, lean_object* v_i_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_){
_start:
{
lean_object* v_stop_1131_; lean_object* v_step_1132_; lean_object* v_a_1134_; uint8_t v___x_1137_; 
v_stop_1131_ = lean_ctor_get(v_range_1121_, 1);
v_step_1132_ = lean_ctor_get(v_range_1121_, 2);
v___x_1137_ = lean_nat_dec_lt(v_i_1123_, v_stop_1131_);
if (v___x_1137_ == 0)
{
lean_object* v___x_1138_; 
lean_dec(v_i_1123_);
lean_dec_ref(v_val_1119_);
v___x_1138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1138_, 0, v_b_1122_);
return v___x_1138_;
}
else
{
lean_object* v___x_1139_; lean_object* v___x_1140_; uint8_t v___x_1141_; 
lean_inc_ref(v_val_1119_);
v___x_1139_ = lp_vampireReplay_Vampire_Clause_literals(v_val_1119_);
v___x_1140_ = lean_array_get_size(v___x_1139_);
v___x_1141_ = lean_nat_dec_lt(v_i_1123_, v___x_1140_);
if (v___x_1141_ == 0)
{
lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v_a_1154_; lean_object* v___x_1156_; uint8_t v_isShared_1157_; uint8_t v_isSharedCheck_1161_; 
lean_dec_ref(v___x_1139_);
lean_dec_ref(v_b_1122_);
lean_dec_ref(v_val_1119_);
v___x_1142_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_fromConstraints_spec__0___redArg___closed__1, &lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_fromConstraints_spec__0___redArg___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_fromConstraints_spec__0___redArg___closed__1);
v___x_1143_ = l_Nat_reprFast(v_i_1123_);
v___x_1144_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1144_, 0, v___x_1143_);
v___x_1145_ = l_Lean_MessageData_ofFormat(v___x_1144_);
v___x_1146_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1146_, 0, v___x_1142_);
lean_ctor_set(v___x_1146_, 1, v___x_1145_);
v___x_1147_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_fromConstraints_spec__0___redArg___closed__3, &lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_fromConstraints_spec__0___redArg___closed__3_once, _init_lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_fromConstraints_spec__0___redArg___closed__3);
v___x_1148_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1148_, 0, v___x_1146_);
lean_ctor_set(v___x_1148_, 1, v___x_1147_);
v___x_1149_ = l_Nat_reprFast(v___x_1140_);
v___x_1150_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1150_, 0, v___x_1149_);
v___x_1151_ = l_Lean_MessageData_ofFormat(v___x_1150_);
v___x_1152_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1152_, 0, v___x_1148_);
lean_ctor_set(v___x_1152_, 1, v___x_1151_);
v___x_1153_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1152_, v___y_1126_, v___y_1127_, v___y_1128_, v___y_1129_);
v_a_1154_ = lean_ctor_get(v___x_1153_, 0);
v_isSharedCheck_1161_ = !lean_is_exclusive(v___x_1153_);
if (v_isSharedCheck_1161_ == 0)
{
v___x_1156_ = v___x_1153_;
v_isShared_1157_ = v_isSharedCheck_1161_;
goto v_resetjp_1155_;
}
else
{
lean_inc(v_a_1154_);
lean_dec(v___x_1153_);
v___x_1156_ = lean_box(0);
v_isShared_1157_ = v_isSharedCheck_1161_;
goto v_resetjp_1155_;
}
v_resetjp_1155_:
{
lean_object* v___x_1159_; 
if (v_isShared_1157_ == 0)
{
v___x_1159_ = v___x_1156_;
goto v_reusejp_1158_;
}
else
{
lean_object* v_reuseFailAlloc_1160_; 
v_reuseFailAlloc_1160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1160_, 0, v_a_1154_);
v___x_1159_ = v_reuseFailAlloc_1160_;
goto v_reusejp_1158_;
}
v_reusejp_1158_:
{
return v___x_1159_;
}
}
}
else
{
lean_object* v___x_1162_; lean_object* v___x_1163_; 
v___x_1162_ = lean_array_fget(v___x_1139_, v_i_1123_);
lean_dec_ref(v___x_1139_);
v___x_1163_ = lp_vampireReplay_Vampire_Reconstruct_literal(v_vars_1120_, v___x_1162_, v___y_1124_, v___y_1125_, v___y_1126_, v___y_1127_, v___y_1128_, v___y_1129_);
if (lean_obj_tag(v___x_1163_) == 0)
{
lean_object* v_a_1164_; lean_object* v___x_1165_; 
v_a_1164_ = lean_ctor_get(v___x_1163_, 0);
lean_inc(v_a_1164_);
lean_dec_ref_known(v___x_1163_, 1);
v___x_1165_ = lean_array_push(v_b_1122_, v_a_1164_);
v_a_1134_ = v___x_1165_;
goto v___jp_1133_;
}
else
{
lean_object* v_a_1166_; lean_object* v___x_1168_; uint8_t v_isShared_1169_; uint8_t v_isSharedCheck_1173_; 
lean_dec(v_i_1123_);
lean_dec_ref(v_b_1122_);
lean_dec_ref(v_val_1119_);
v_a_1166_ = lean_ctor_get(v___x_1163_, 0);
v_isSharedCheck_1173_ = !lean_is_exclusive(v___x_1163_);
if (v_isSharedCheck_1173_ == 0)
{
v___x_1168_ = v___x_1163_;
v_isShared_1169_ = v_isSharedCheck_1173_;
goto v_resetjp_1167_;
}
else
{
lean_inc(v_a_1166_);
lean_dec(v___x_1163_);
v___x_1168_ = lean_box(0);
v_isShared_1169_ = v_isSharedCheck_1173_;
goto v_resetjp_1167_;
}
v_resetjp_1167_:
{
lean_object* v___x_1171_; 
if (v_isShared_1169_ == 0)
{
v___x_1171_ = v___x_1168_;
goto v_reusejp_1170_;
}
else
{
lean_object* v_reuseFailAlloc_1172_; 
v_reuseFailAlloc_1172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1172_, 0, v_a_1166_);
v___x_1171_ = v_reuseFailAlloc_1172_;
goto v_reusejp_1170_;
}
v_reusejp_1170_:
{
return v___x_1171_;
}
}
}
}
}
v___jp_1133_:
{
lean_object* v___x_1135_; 
v___x_1135_ = lean_nat_add(v_i_1123_, v_step_1132_);
lean_dec(v_i_1123_);
v_b_1122_ = v_a_1134_;
v_i_1123_ = v___x_1135_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_fromConstraints_spec__0___redArg___boxed(lean_object* v_val_1174_, lean_object* v_vars_1175_, lean_object* v_range_1176_, lean_object* v_b_1177_, lean_object* v_i_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_){
_start:
{
lean_object* v_res_1186_; 
v_res_1186_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_fromConstraints_spec__0___redArg(v_val_1174_, v_vars_1175_, v_range_1176_, v_b_1177_, v_i_1178_, v___y_1179_, v___y_1180_, v___y_1181_, v___y_1182_, v___y_1183_, v___y_1184_);
lean_dec(v___y_1184_);
lean_dec_ref(v___y_1183_);
lean_dec(v___y_1182_);
lean_dec_ref(v___y_1181_);
lean_dec(v___y_1180_);
lean_dec_ref(v___y_1179_);
lean_dec_ref(v_range_1176_);
lean_dec_ref(v_vars_1175_);
return v_res_1186_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints___closed__2(void){
_start:
{
lean_object* v___x_1190_; lean_object* v___x_1191_; 
v___x_1190_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints___closed__1));
v___x_1191_ = l_Lean_stringToMessageData(v___x_1190_);
return v___x_1191_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints___closed__4(void){
_start:
{
lean_object* v___x_1193_; lean_object* v___x_1194_; 
v___x_1193_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints___closed__3));
v___x_1194_ = l_Lean_stringToMessageData(v___x_1193_);
return v___x_1194_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints___closed__6(void){
_start:
{
lean_object* v___x_1196_; lean_object* v___x_1197_; 
v___x_1196_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints___closed__5));
v___x_1197_ = l_Lean_stringToMessageData(v___x_1196_);
return v___x_1197_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints(lean_object* v_step_1198_, lean_object* v_vars_1199_, lean_object* v_rest_1200_, lean_object* v_inner_1201_, lean_object* v_h_1202_, lean_object* v_a_1203_, lean_object* v_a_1204_, lean_object* v_a_1205_, lean_object* v_a_1206_, lean_object* v_a_1207_, lean_object* v_a_1208_){
_start:
{
lean_object* v_unit_1210_; lean_object* v___x_1211_; 
v_unit_1210_ = lean_ctor_get(v_step_1198_, 0);
lean_inc_ref(v_unit_1210_);
lean_dec_ref(v_step_1198_);
v___x_1211_ = lp_vampireReplay_Vampire_Unit_constraints(v_unit_1210_);
if (lean_obj_tag(v___x_1211_) == 1)
{
lean_object* v_val_1212_; lean_object* v_fst_1213_; lean_object* v_snd_1214_; lean_object* v___x_1215_; 
v_val_1212_ = lean_ctor_get(v___x_1211_, 0);
lean_inc(v_val_1212_);
lean_dec_ref_known(v___x_1211_, 1);
v_fst_1213_ = lean_ctor_get(v_val_1212_, 0);
lean_inc(v_fst_1213_);
v_snd_1214_ = lean_ctor_get(v_val_1212_, 1);
lean_inc(v_snd_1214_);
lean_dec(v_val_1212_);
v___x_1215_ = lp_vampireReplay_Vampire_Unit_clause_x3f(v_unit_1210_);
if (lean_obj_tag(v___x_1215_) == 1)
{
lean_object* v_val_1216_; lean_object* v___x_1217_; lean_object* v_constraints_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; 
v_val_1216_ = lean_ctor_get(v___x_1215_, 0);
lean_inc(v_val_1216_);
lean_dec_ref_known(v___x_1215_, 1);
v___x_1217_ = lean_unsigned_to_nat(0u);
v_constraints_1218_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints___closed__0));
v___x_1219_ = lean_nat_add(v_fst_1213_, v_snd_1214_);
lean_dec(v_snd_1214_);
v___x_1220_ = lean_unsigned_to_nat(1u);
lean_inc(v_fst_1213_);
v___x_1221_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1221_, 0, v_fst_1213_);
lean_ctor_set(v___x_1221_, 1, v___x_1219_);
lean_ctor_set(v___x_1221_, 2, v___x_1220_);
v___x_1222_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_fromConstraints_spec__0___redArg(v_val_1216_, v_vars_1199_, v___x_1221_, v_constraints_1218_, v_fst_1213_, v_a_1203_, v_a_1204_, v_a_1205_, v_a_1206_, v_a_1207_, v_a_1208_);
lean_dec_ref_known(v___x_1221_, 3);
if (lean_obj_tag(v___x_1222_) == 0)
{
lean_object* v_a_1223_; lean_object* v___x_1224_; 
v_a_1223_ = lean_ctor_get(v___x_1222_, 0);
lean_inc(v_a_1223_);
lean_dec_ref_known(v___x_1222_, 1);
v___x_1224_ = lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go(v_rest_1200_, v_inner_1201_, v_h_1202_, v_a_1223_, v_constraints_1218_, v___x_1217_, v_a_1203_, v_a_1204_, v_a_1205_, v_a_1206_, v_a_1207_, v_a_1208_);
return v___x_1224_;
}
else
{
lean_object* v_a_1225_; lean_object* v___x_1227_; uint8_t v_isShared_1228_; uint8_t v_isSharedCheck_1232_; 
lean_dec_ref(v_h_1202_);
lean_dec_ref(v_inner_1201_);
lean_dec_ref(v_rest_1200_);
v_a_1225_ = lean_ctor_get(v___x_1222_, 0);
v_isSharedCheck_1232_ = !lean_is_exclusive(v___x_1222_);
if (v_isSharedCheck_1232_ == 0)
{
v___x_1227_ = v___x_1222_;
v_isShared_1228_ = v_isSharedCheck_1232_;
goto v_resetjp_1226_;
}
else
{
lean_inc(v_a_1225_);
lean_dec(v___x_1222_);
v___x_1227_ = lean_box(0);
v_isShared_1228_ = v_isSharedCheck_1232_;
goto v_resetjp_1226_;
}
v_resetjp_1226_:
{
lean_object* v___x_1230_; 
if (v_isShared_1228_ == 0)
{
v___x_1230_ = v___x_1227_;
goto v_reusejp_1229_;
}
else
{
lean_object* v_reuseFailAlloc_1231_; 
v_reuseFailAlloc_1231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1231_, 0, v_a_1225_);
v___x_1230_ = v_reuseFailAlloc_1231_;
goto v_reusejp_1229_;
}
v_reusejp_1229_:
{
return v___x_1230_;
}
}
}
}
else
{
lean_object* v___x_1233_; lean_object* v___x_1234_; 
lean_dec(v___x_1215_);
lean_dec(v_snd_1214_);
lean_dec(v_fst_1213_);
lean_dec_ref(v_h_1202_);
lean_dec_ref(v_inner_1201_);
lean_dec_ref(v_rest_1200_);
v___x_1233_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints___closed__2, &lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints___closed__2_once, _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints___closed__2);
v___x_1234_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1233_, v_a_1205_, v_a_1206_, v_a_1207_, v_a_1208_);
return v___x_1234_;
}
}
else
{
lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; 
lean_dec(v___x_1211_);
lean_dec_ref(v_unit_1210_);
lean_dec_ref(v_h_1202_);
lean_dec_ref(v_rest_1200_);
v___x_1235_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints___closed__4, &lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints___closed__4_once, _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints___closed__4);
v___x_1236_ = l_Lean_indentExpr(v_inner_1201_);
v___x_1237_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1237_, 0, v___x_1235_);
lean_ctor_set(v___x_1237_, 1, v___x_1236_);
v___x_1238_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints___closed__6, &lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints___closed__6_once, _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints___closed__6);
v___x_1239_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1239_, 0, v___x_1237_);
lean_ctor_set(v___x_1239_, 1, v___x_1238_);
v___x_1240_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1239_, v_a_1205_, v_a_1206_, v_a_1207_, v_a_1208_);
return v___x_1240_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints___boxed(lean_object* v_step_1241_, lean_object* v_vars_1242_, lean_object* v_rest_1243_, lean_object* v_inner_1244_, lean_object* v_h_1245_, lean_object* v_a_1246_, lean_object* v_a_1247_, lean_object* v_a_1248_, lean_object* v_a_1249_, lean_object* v_a_1250_, lean_object* v_a_1251_, lean_object* v_a_1252_){
_start:
{
lean_object* v_res_1253_; 
v_res_1253_ = lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints(v_step_1241_, v_vars_1242_, v_rest_1243_, v_inner_1244_, v_h_1245_, v_a_1246_, v_a_1247_, v_a_1248_, v_a_1249_, v_a_1250_, v_a_1251_);
lean_dec(v_a_1251_);
lean_dec_ref(v_a_1250_);
lean_dec(v_a_1249_);
lean_dec_ref(v_a_1248_);
lean_dec(v_a_1247_);
lean_dec_ref(v_a_1246_);
lean_dec_ref(v_vars_1242_);
return v_res_1253_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_fromConstraints_spec__0(lean_object* v_val_1254_, lean_object* v_vars_1255_, lean_object* v_range_1256_, lean_object* v_b_1257_, lean_object* v_i_1258_, lean_object* v_hs_1259_, lean_object* v_hl_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_){
_start:
{
lean_object* v___x_1268_; 
v___x_1268_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_fromConstraints_spec__0___redArg(v_val_1254_, v_vars_1255_, v_range_1256_, v_b_1257_, v_i_1258_, v___y_1261_, v___y_1262_, v___y_1263_, v___y_1264_, v___y_1265_, v___y_1266_);
return v___x_1268_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_fromConstraints_spec__0___boxed(lean_object* v_val_1269_, lean_object* v_vars_1270_, lean_object* v_range_1271_, lean_object* v_b_1272_, lean_object* v_i_1273_, lean_object* v_hs_1274_, lean_object* v_hl_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_){
_start:
{
lean_object* v_res_1283_; 
v_res_1283_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Vampire_Reconstruct_Resolution_fromConstraints_spec__0(v_val_1269_, v_vars_1270_, v_range_1271_, v_b_1272_, v_i_1273_, v_hs_1274_, v_hl_1275_, v___y_1276_, v___y_1277_, v___y_1278_, v___y_1279_, v___y_1280_, v___y_1281_);
lean_dec(v___y_1281_);
lean_dec_ref(v___y_1280_);
lean_dec(v___y_1279_);
lean_dec_ref(v___y_1278_);
lean_dec(v___y_1277_);
lean_dec_ref(v___y_1276_);
lean_dec_ref(v_range_1271_);
lean_dec_ref(v_vars_1270_);
return v_res_1283_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___lam__2___closed__1(void){
_start:
{
lean_object* v___x_1285_; lean_object* v___x_1286_; 
v___x_1285_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___lam__2___closed__0));
v___x_1286_ = l_Lean_stringToMessageData(v___x_1285_);
return v___x_1286_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___lam__2___closed__5(void){
_start:
{
lean_object* v___x_1291_; lean_object* v___x_1292_; 
v___x_1291_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___lam__2___closed__4));
v___x_1292_ = l_Lean_stringToMessageData(v___x_1291_);
return v___x_1292_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___lam__2(lean_object* v___x_1293_, lean_object* v_step_1294_, lean_object* v_a_1295_, lean_object* v_x_1296_, lean_object* v_h_1297_, lean_object* v_rest_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_){
_start:
{
lean_object* v___x_1306_; 
lean_inc(v___y_1304_);
lean_inc_ref(v___y_1303_);
lean_inc(v___y_1302_);
lean_inc_ref(v___y_1301_);
lean_inc_ref(v_h_1297_);
v___x_1306_ = lean_infer_type(v_h_1297_, v___y_1301_, v___y_1302_, v___y_1303_, v___y_1304_);
if (lean_obj_tag(v___x_1306_) == 0)
{
lean_object* v_a_1307_; lean_object* v___x_1309_; uint8_t v_isShared_1310_; uint8_t v_isSharedCheck_1370_; 
v_a_1307_ = lean_ctor_get(v___x_1306_, 0);
v_isSharedCheck_1370_ = !lean_is_exclusive(v___x_1306_);
if (v_isSharedCheck_1370_ == 0)
{
v___x_1309_ = v___x_1306_;
v_isShared_1310_ = v_isSharedCheck_1370_;
goto v_resetjp_1308_;
}
else
{
lean_inc(v_a_1307_);
lean_dec(v___x_1306_);
v___x_1309_ = lean_box(0);
v_isShared_1310_ = v_isSharedCheck_1370_;
goto v_resetjp_1308_;
}
v_resetjp_1308_:
{
lean_object* v___x_1311_; lean_object* v_a_1312_; lean_object* v___x_1314_; uint8_t v_isShared_1315_; uint8_t v_isSharedCheck_1369_; 
v___x_1311_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_a_1307_, v___y_1302_);
v_a_1312_ = lean_ctor_get(v___x_1311_, 0);
v_isSharedCheck_1369_ = !lean_is_exclusive(v___x_1311_);
if (v_isSharedCheck_1369_ == 0)
{
v___x_1314_ = v___x_1311_;
v_isShared_1315_ = v_isSharedCheck_1369_;
goto v_resetjp_1313_;
}
else
{
lean_inc(v_a_1312_);
lean_dec(v___x_1311_);
v___x_1314_ = lean_box(0);
v_isShared_1315_ = v_isSharedCheck_1369_;
goto v_resetjp_1313_;
}
v_resetjp_1313_:
{
lean_object* v___x_1316_; uint8_t v___x_1317_; 
v___x_1316_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__3));
v___x_1317_ = l_Lean_Expr_isAppOfArity(v_a_1312_, v___x_1316_, v___x_1293_);
if (v___x_1317_ == 0)
{
lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; 
lean_del_object(v___x_1314_);
lean_del_object(v___x_1309_);
lean_dec_ref(v_rest_1298_);
lean_dec_ref(v_h_1297_);
lean_dec_ref(v_step_1294_);
v___x_1318_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___lam__2___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___lam__2___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___lam__2___closed__1);
v___x_1319_ = l_Lean_indentExpr(v_a_1312_);
v___x_1320_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1320_, 0, v___x_1318_);
lean_ctor_set(v___x_1320_, 1, v___x_1319_);
v___x_1321_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1320_, v___y_1301_, v___y_1302_, v___y_1303_, v___y_1304_);
return v___x_1321_;
}
else
{
lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; uint8_t v___x_1325_; 
v___x_1322_ = l_Lean_Expr_appArg_x21(v_a_1312_);
lean_dec(v_a_1312_);
v___x_1323_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___lam__2___closed__3));
v___x_1324_ = lean_unsigned_to_nat(3u);
v___x_1325_ = l_Lean_Expr_isAppOfArity(v___x_1322_, v___x_1323_, v___x_1324_);
if (v___x_1325_ == 0)
{
lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; 
lean_del_object(v___x_1314_);
lean_del_object(v___x_1309_);
lean_dec_ref(v_rest_1298_);
lean_dec_ref(v_h_1297_);
lean_dec_ref(v_step_1294_);
v___x_1326_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___lam__2___closed__5, &lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___lam__2___closed__5_once, _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___lam__2___closed__5);
v___x_1327_ = l_Lean_indentExpr(v___x_1322_);
v___x_1328_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1328_, 0, v___x_1326_);
lean_ctor_set(v___x_1328_, 1, v___x_1327_);
v___x_1329_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1328_, v___y_1301_, v___y_1302_, v___y_1303_, v___y_1304_);
return v___x_1329_;
}
else
{
lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; 
v___x_1330_ = l_Lean_Expr_appFn_x21(v___x_1322_);
v___x_1331_ = l_Lean_Expr_appArg_x21(v___x_1330_);
lean_dec_ref(v___x_1330_);
v___x_1332_ = l_Lean_Expr_appArg_x21(v___x_1322_);
lean_inc_ref(v___x_1331_);
v___x_1333_ = l_Lean_Meta_isExprDefEq(v___x_1331_, v___x_1332_, v___y_1301_, v___y_1302_, v___y_1303_, v___y_1304_);
if (lean_obj_tag(v___x_1333_) == 0)
{
lean_object* v_a_1334_; uint8_t v___x_1335_; 
v_a_1334_ = lean_ctor_get(v___x_1333_, 0);
lean_inc(v_a_1334_);
lean_dec_ref_known(v___x_1333_, 1);
v___x_1335_ = lean_unbox(v_a_1334_);
lean_dec(v_a_1334_);
if (v___x_1335_ == 0)
{
lean_object* v___x_1336_; 
lean_dec_ref(v___x_1331_);
lean_del_object(v___x_1314_);
lean_del_object(v___x_1309_);
v___x_1336_ = lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints(v_step_1294_, v_a_1295_, v_rest_1298_, v___x_1322_, v_h_1297_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_, v___y_1303_, v___y_1304_);
return v___x_1336_;
}
else
{
lean_object* v___x_1337_; 
lean_dec_ref(v_step_1294_);
v___x_1337_ = l_Lean_Meta_mkEqRefl(v___x_1331_, v___y_1301_, v___y_1302_, v___y_1303_, v___y_1304_);
if (lean_obj_tag(v___x_1337_) == 0)
{
lean_object* v_a_1338_; lean_object* v___x_1340_; uint8_t v_isShared_1341_; uint8_t v_isSharedCheck_1360_; 
v_a_1338_ = lean_ctor_get(v___x_1337_, 0);
v_isSharedCheck_1360_ = !lean_is_exclusive(v___x_1337_);
if (v_isSharedCheck_1360_ == 0)
{
v___x_1340_ = v___x_1337_;
v_isShared_1341_ = v_isSharedCheck_1360_;
goto v_resetjp_1339_;
}
else
{
lean_inc(v_a_1338_);
lean_dec(v___x_1337_);
v___x_1340_ = lean_box(0);
v_isShared_1341_ = v_isSharedCheck_1360_;
goto v_resetjp_1339_;
}
v_resetjp_1339_:
{
lean_object* v___x_1343_; 
if (v_isShared_1341_ == 0)
{
lean_ctor_set_tag(v___x_1340_, 1);
lean_ctor_set(v___x_1340_, 0, v___x_1322_);
v___x_1343_ = v___x_1340_;
goto v_reusejp_1342_;
}
else
{
lean_object* v_reuseFailAlloc_1359_; 
v_reuseFailAlloc_1359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1359_, 0, v___x_1322_);
v___x_1343_ = v_reuseFailAlloc_1359_;
goto v_reusejp_1342_;
}
v_reusejp_1342_:
{
lean_object* v___x_1344_; lean_object* v___x_1346_; 
v___x_1344_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__1));
if (v_isShared_1315_ == 0)
{
lean_ctor_set_tag(v___x_1314_, 1);
lean_ctor_set(v___x_1314_, 0, v_rest_1298_);
v___x_1346_ = v___x_1314_;
goto v_reusejp_1345_;
}
else
{
lean_object* v_reuseFailAlloc_1358_; 
v_reuseFailAlloc_1358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1358_, 0, v_rest_1298_);
v___x_1346_ = v_reuseFailAlloc_1358_;
goto v_reusejp_1345_;
}
v_reusejp_1345_:
{
lean_object* v___x_1348_; 
if (v_isShared_1310_ == 0)
{
lean_ctor_set_tag(v___x_1309_, 1);
lean_ctor_set(v___x_1309_, 0, v_a_1338_);
v___x_1348_ = v___x_1309_;
goto v_reusejp_1347_;
}
else
{
lean_object* v_reuseFailAlloc_1357_; 
v_reuseFailAlloc_1357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1357_, 0, v_a_1338_);
v___x_1348_ = v_reuseFailAlloc_1357_;
goto v_reusejp_1347_;
}
v_reusejp_1347_:
{
lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; 
v___x_1349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1349_, 0, v_h_1297_);
v___x_1350_ = lean_unsigned_to_nat(4u);
v___x_1351_ = lean_mk_empty_array_with_capacity(v___x_1350_);
v___x_1352_ = lean_array_push(v___x_1351_, v___x_1343_);
v___x_1353_ = lean_array_push(v___x_1352_, v___x_1346_);
v___x_1354_ = lean_array_push(v___x_1353_, v___x_1348_);
v___x_1355_ = lean_array_push(v___x_1354_, v___x_1349_);
v___x_1356_ = l_Lean_Meta_mkAppOptM(v___x_1344_, v___x_1355_, v___y_1301_, v___y_1302_, v___y_1303_, v___y_1304_);
return v___x_1356_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_1322_);
lean_del_object(v___x_1314_);
lean_del_object(v___x_1309_);
lean_dec_ref(v_rest_1298_);
lean_dec_ref(v_h_1297_);
return v___x_1337_;
}
}
}
else
{
lean_object* v_a_1361_; lean_object* v___x_1363_; uint8_t v_isShared_1364_; uint8_t v_isSharedCheck_1368_; 
lean_dec_ref(v___x_1331_);
lean_dec_ref(v___x_1322_);
lean_del_object(v___x_1314_);
lean_del_object(v___x_1309_);
lean_dec_ref(v_rest_1298_);
lean_dec_ref(v_h_1297_);
lean_dec_ref(v_step_1294_);
v_a_1361_ = lean_ctor_get(v___x_1333_, 0);
v_isSharedCheck_1368_ = !lean_is_exclusive(v___x_1333_);
if (v_isSharedCheck_1368_ == 0)
{
v___x_1363_ = v___x_1333_;
v_isShared_1364_ = v_isSharedCheck_1368_;
goto v_resetjp_1362_;
}
else
{
lean_inc(v_a_1361_);
lean_dec(v___x_1333_);
v___x_1363_ = lean_box(0);
v_isShared_1364_ = v_isSharedCheck_1368_;
goto v_resetjp_1362_;
}
v_resetjp_1362_:
{
lean_object* v___x_1366_; 
if (v_isShared_1364_ == 0)
{
v___x_1366_ = v___x_1363_;
goto v_reusejp_1365_;
}
else
{
lean_object* v_reuseFailAlloc_1367_; 
v_reuseFailAlloc_1367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1367_, 0, v_a_1361_);
v___x_1366_ = v_reuseFailAlloc_1367_;
goto v_reusejp_1365_;
}
v_reusejp_1365_:
{
return v___x_1366_;
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
lean_dec_ref(v_rest_1298_);
lean_dec_ref(v_h_1297_);
lean_dec_ref(v_step_1294_);
lean_dec(v___x_1293_);
return v___x_1306_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___lam__2___boxed(lean_object* v___x_1371_, lean_object* v_step_1372_, lean_object* v_a_1373_, lean_object* v_x_1374_, lean_object* v_h_1375_, lean_object* v_rest_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_){
_start:
{
lean_object* v_res_1384_; 
v_res_1384_ = lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___lam__2(v___x_1371_, v_step_1372_, v_a_1373_, v_x_1374_, v_h_1375_, v_rest_1376_, v___y_1377_, v___y_1378_, v___y_1379_, v___y_1380_, v___y_1381_, v___y_1382_);
lean_dec(v___y_1382_);
lean_dec_ref(v___y_1381_);
lean_dec(v___y_1380_);
lean_dec_ref(v___y_1379_);
lean_dec(v___y_1378_);
lean_dec_ref(v___y_1377_);
lean_dec(v_x_1374_);
lean_dec_ref(v_a_1373_);
return v_res_1384_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___lam__0(lean_object* v___x_1385_, lean_object* v___x_1386_, lean_object* v_unit_1387_, lean_object* v___x_1388_, lean_object* v_a_1389_, lean_object* v_fst_1390_, lean_object* v_snd_1391_, lean_object* v___x_1392_, lean_object* v_step_1393_, lean_object* v___f_1394_, lean_object* v___f_1395_, uint8_t v___x_1396_, lean_object* v_xs_1397_, lean_object* v_target_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_){
_start:
{
lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; size_t v_sz_1409_; size_t v___x_1410_; lean_object* v___x_1411_; 
v___x_1406_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__4___closed__0, &lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__4___closed__0_once, _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__4___closed__0);
v___x_1407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1407_, 0, v___x_1385_);
lean_ctor_set(v___x_1407_, 1, v___x_1406_);
v___x_1408_ = l_Array_zip___redArg(v_xs_1397_, v___x_1386_);
v_sz_1409_ = lean_array_size(v___x_1408_);
v___x_1410_ = ((size_t)0ULL);
v___x_1411_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__0___redArg(v___x_1408_, v_sz_1409_, v___x_1410_, v___x_1407_);
lean_dec_ref(v___x_1408_);
if (lean_obj_tag(v___x_1411_) == 0)
{
lean_object* v_a_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; 
v_a_1412_ = lean_ctor_get(v___x_1411_, 0);
lean_inc(v_a_1412_);
lean_dec_ref_known(v___x_1411_, 1);
v___x_1413_ = lp_vampireReplay_Vampire_Unit_boundVarSorts(v_unit_1387_);
lean_inc_ref(v___x_1388_);
v___x_1414_ = lp_vampireReplay_Vampire_Reconstruct_coverVars(v___x_1388_, v_a_1412_, v___x_1413_, v___y_1399_, v___y_1400_, v___y_1401_, v___y_1402_, v___y_1403_, v___y_1404_);
lean_dec_ref(v___x_1413_);
if (lean_obj_tag(v___x_1414_) == 0)
{
lean_object* v_a_1415_; lean_object* v___x_1416_; 
v_a_1415_ = lean_ctor_get(v___x_1414_, 0);
lean_inc(v_a_1415_);
lean_dec_ref_known(v___x_1414_, 1);
v___x_1416_ = lp_vampireReplay_Vampire_Reconstruct_instantiateAt(v___x_1388_, v_a_1389_, v_a_1415_, v_fst_1390_, v_snd_1391_, v___y_1399_, v___y_1400_, v___y_1401_, v___y_1402_, v___y_1403_, v___y_1404_);
if (lean_obj_tag(v___x_1416_) == 0)
{
lean_object* v_a_1417_; lean_object* v_fst_1418_; lean_object* v_snd_1419_; lean_object* v___f_1420_; lean_object* v___x_1421_; 
v_a_1417_ = lean_ctor_get(v___x_1416_, 0);
lean_inc(v_a_1417_);
lean_dec_ref_known(v___x_1416_, 1);
v_fst_1418_ = lean_ctor_get(v_a_1417_, 0);
lean_inc(v_fst_1418_);
v_snd_1419_ = lean_ctor_get(v_a_1417_, 1);
lean_inc(v_snd_1419_);
lean_dec(v_a_1417_);
v___f_1420_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___lam__2___boxed), 13, 3);
lean_closure_set(v___f_1420_, 0, v___x_1392_);
lean_closure_set(v___f_1420_, 1, v_step_1393_);
lean_closure_set(v___f_1420_, 2, v_a_1415_);
v___x_1421_ = lp_vampireReplay_Vampire_Reconstruct_carryPast(v_snd_1419_, v_target_1398_, v_fst_1418_, v___f_1394_, v___f_1420_, v___f_1395_, v___y_1399_, v___y_1400_, v___y_1401_, v___y_1402_, v___y_1403_, v___y_1404_);
if (lean_obj_tag(v___x_1421_) == 0)
{
lean_object* v_a_1422_; uint8_t v___x_1423_; uint8_t v___x_1424_; lean_object* v___x_1425_; 
v_a_1422_ = lean_ctor_get(v___x_1421_, 0);
lean_inc(v_a_1422_);
lean_dec_ref_known(v___x_1421_, 1);
v___x_1423_ = 0;
v___x_1424_ = 1;
v___x_1425_ = l_Lean_Meta_mkLambdaFVars(v_xs_1397_, v_a_1422_, v___x_1423_, v___x_1396_, v___x_1423_, v___x_1396_, v___x_1424_, v___y_1401_, v___y_1402_, v___y_1403_, v___y_1404_);
return v___x_1425_;
}
else
{
return v___x_1421_;
}
}
else
{
lean_object* v_a_1426_; lean_object* v___x_1428_; uint8_t v_isShared_1429_; uint8_t v_isSharedCheck_1433_; 
lean_dec(v_a_1415_);
lean_dec_ref(v_target_1398_);
lean_dec_ref(v___f_1395_);
lean_dec_ref(v___f_1394_);
lean_dec_ref(v_step_1393_);
lean_dec(v___x_1392_);
v_a_1426_ = lean_ctor_get(v___x_1416_, 0);
v_isSharedCheck_1433_ = !lean_is_exclusive(v___x_1416_);
if (v_isSharedCheck_1433_ == 0)
{
v___x_1428_ = v___x_1416_;
v_isShared_1429_ = v_isSharedCheck_1433_;
goto v_resetjp_1427_;
}
else
{
lean_inc(v_a_1426_);
lean_dec(v___x_1416_);
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
else
{
lean_object* v_a_1434_; lean_object* v___x_1436_; uint8_t v_isShared_1437_; uint8_t v_isSharedCheck_1441_; 
lean_dec_ref(v_target_1398_);
lean_dec_ref(v___f_1395_);
lean_dec_ref(v___f_1394_);
lean_dec_ref(v_step_1393_);
lean_dec(v___x_1392_);
lean_dec_ref(v_snd_1391_);
lean_dec_ref(v_fst_1390_);
lean_dec_ref(v_a_1389_);
lean_dec_ref(v___x_1388_);
v_a_1434_ = lean_ctor_get(v___x_1414_, 0);
v_isSharedCheck_1441_ = !lean_is_exclusive(v___x_1414_);
if (v_isSharedCheck_1441_ == 0)
{
v___x_1436_ = v___x_1414_;
v_isShared_1437_ = v_isSharedCheck_1441_;
goto v_resetjp_1435_;
}
else
{
lean_inc(v_a_1434_);
lean_dec(v___x_1414_);
v___x_1436_ = lean_box(0);
v_isShared_1437_ = v_isSharedCheck_1441_;
goto v_resetjp_1435_;
}
v_resetjp_1435_:
{
lean_object* v___x_1439_; 
if (v_isShared_1437_ == 0)
{
v___x_1439_ = v___x_1436_;
goto v_reusejp_1438_;
}
else
{
lean_object* v_reuseFailAlloc_1440_; 
v_reuseFailAlloc_1440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1440_, 0, v_a_1434_);
v___x_1439_ = v_reuseFailAlloc_1440_;
goto v_reusejp_1438_;
}
v_reusejp_1438_:
{
return v___x_1439_;
}
}
}
}
else
{
lean_object* v_a_1442_; lean_object* v___x_1444_; uint8_t v_isShared_1445_; uint8_t v_isSharedCheck_1449_; 
lean_dec_ref(v_target_1398_);
lean_dec_ref(v___f_1395_);
lean_dec_ref(v___f_1394_);
lean_dec_ref(v_step_1393_);
lean_dec(v___x_1392_);
lean_dec_ref(v_snd_1391_);
lean_dec_ref(v_fst_1390_);
lean_dec_ref(v_a_1389_);
lean_dec_ref(v___x_1388_);
lean_dec_ref(v_unit_1387_);
v_a_1442_ = lean_ctor_get(v___x_1411_, 0);
v_isSharedCheck_1449_ = !lean_is_exclusive(v___x_1411_);
if (v_isSharedCheck_1449_ == 0)
{
v___x_1444_ = v___x_1411_;
v_isShared_1445_ = v_isSharedCheck_1449_;
goto v_resetjp_1443_;
}
else
{
lean_inc(v_a_1442_);
lean_dec(v___x_1411_);
v___x_1444_ = lean_box(0);
v_isShared_1445_ = v_isSharedCheck_1449_;
goto v_resetjp_1443_;
}
v_resetjp_1443_:
{
lean_object* v___x_1447_; 
if (v_isShared_1445_ == 0)
{
v___x_1447_ = v___x_1444_;
goto v_reusejp_1446_;
}
else
{
lean_object* v_reuseFailAlloc_1448_; 
v_reuseFailAlloc_1448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1448_, 0, v_a_1442_);
v___x_1447_ = v_reuseFailAlloc_1448_;
goto v_reusejp_1446_;
}
v_reusejp_1446_:
{
return v___x_1447_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___lam__0___boxed(lean_object** _args){
lean_object* v___x_1450_ = _args[0];
lean_object* v___x_1451_ = _args[1];
lean_object* v_unit_1452_ = _args[2];
lean_object* v___x_1453_ = _args[3];
lean_object* v_a_1454_ = _args[4];
lean_object* v_fst_1455_ = _args[5];
lean_object* v_snd_1456_ = _args[6];
lean_object* v___x_1457_ = _args[7];
lean_object* v_step_1458_ = _args[8];
lean_object* v___f_1459_ = _args[9];
lean_object* v___f_1460_ = _args[10];
lean_object* v___x_1461_ = _args[11];
lean_object* v_xs_1462_ = _args[12];
lean_object* v_target_1463_ = _args[13];
lean_object* v___y_1464_ = _args[14];
lean_object* v___y_1465_ = _args[15];
lean_object* v___y_1466_ = _args[16];
lean_object* v___y_1467_ = _args[17];
lean_object* v___y_1468_ = _args[18];
lean_object* v___y_1469_ = _args[19];
lean_object* v___y_1470_ = _args[20];
_start:
{
uint8_t v___x_13368__boxed_1471_; lean_object* v_res_1472_; 
v___x_13368__boxed_1471_ = lean_unbox(v___x_1461_);
v_res_1472_ = lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___lam__0(v___x_1450_, v___x_1451_, v_unit_1452_, v___x_1453_, v_a_1454_, v_fst_1455_, v_snd_1456_, v___x_1457_, v_step_1458_, v___f_1459_, v___f_1460_, v___x_13368__boxed_1471_, v_xs_1462_, v_target_1463_, v___y_1464_, v___y_1465_, v___y_1466_, v___y_1467_, v___y_1468_, v___y_1469_);
lean_dec(v___y_1469_);
lean_dec_ref(v___y_1468_);
lean_dec(v___y_1467_);
lean_dec_ref(v___y_1466_);
lean_dec(v___y_1465_);
lean_dec_ref(v___y_1464_);
lean_dec_ref(v_xs_1462_);
lean_dec_ref(v___x_1451_);
return v_res_1472_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___closed__1(void){
_start:
{
lean_object* v___x_1474_; lean_object* v___x_1475_; 
v___x_1474_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___closed__0));
v___x_1475_ = l_Lean_stringToMessageData(v___x_1474_);
return v___x_1475_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___closed__3(void){
_start:
{
lean_object* v___x_1477_; lean_object* v___x_1478_; 
v___x_1477_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___closed__2));
v___x_1478_ = l_Lean_stringToMessageData(v___x_1477_);
return v___x_1478_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___closed__5(void){
_start:
{
lean_object* v___x_1480_; lean_object* v___x_1481_; 
v___x_1480_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___closed__4));
v___x_1481_ = l_Lean_stringToMessageData(v___x_1480_);
return v___x_1481_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion(lean_object* v_step_1482_, lean_object* v_a_1483_, lean_object* v_a_1484_, lean_object* v_a_1485_, lean_object* v_a_1486_, lean_object* v_a_1487_, lean_object* v_a_1488_){
_start:
{
lean_object* v_unit_1490_; lean_object* v_premises_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; uint8_t v___x_1494_; 
v_unit_1490_ = lean_ctor_get(v_step_1482_, 0);
lean_inc_ref(v_unit_1490_);
v_premises_1491_ = lean_ctor_get(v_step_1482_, 1);
v___x_1492_ = lean_array_get_size(v_premises_1491_);
v___x_1493_ = lean_unsigned_to_nat(1u);
v___x_1494_ = lean_nat_dec_eq(v___x_1492_, v___x_1493_);
if (v___x_1494_ == 0)
{
lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; 
lean_dec_ref(v_unit_1490_);
lean_dec_ref(v_step_1482_);
v___x_1495_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___closed__1);
v___x_1496_ = l_Nat_reprFast(v___x_1492_);
v___x_1497_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1497_, 0, v___x_1496_);
v___x_1498_ = l_Lean_MessageData_ofFormat(v___x_1497_);
v___x_1499_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1499_, 0, v___x_1495_);
lean_ctor_set(v___x_1499_, 1, v___x_1498_);
v___x_1500_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1499_, v_a_1485_, v_a_1486_, v_a_1487_, v_a_1488_);
return v___x_1500_;
}
else
{
lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v_fst_1503_; lean_object* v_snd_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; uint8_t v___x_1507_; 
v___x_1501_ = lean_unsigned_to_nat(0u);
v___x_1502_ = lean_array_fget_borrowed(v_premises_1491_, v___x_1501_);
v_fst_1503_ = lean_ctor_get(v___x_1502_, 0);
lean_inc(v_fst_1503_);
v_snd_1504_ = lean_ctor_get(v___x_1502_, 1);
lean_inc(v_snd_1504_);
lean_inc_ref(v_unit_1490_);
v___x_1505_ = lp_vampireReplay_Vampire_Unit_parents(v_unit_1490_);
v___x_1506_ = lean_array_get_size(v___x_1505_);
v___x_1507_ = lean_nat_dec_lt(v___x_1501_, v___x_1506_);
if (v___x_1507_ == 0)
{
lean_object* v___x_1508_; lean_object* v___x_1509_; 
lean_dec_ref(v___x_1505_);
lean_dec(v_snd_1504_);
lean_dec(v_fst_1503_);
lean_dec_ref(v_unit_1490_);
lean_dec_ref(v_step_1482_);
v___x_1508_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___closed__3, &lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___closed__3);
v___x_1509_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1508_, v_a_1485_, v_a_1486_, v_a_1487_, v_a_1488_);
return v___x_1509_;
}
else
{
lean_object* v___x_1510_; 
lean_inc_ref(v_step_1482_);
v___x_1510_ = lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg(v_step_1482_, v___x_1501_, v_a_1485_, v_a_1486_, v_a_1487_, v_a_1488_);
if (lean_obj_tag(v___x_1510_) == 0)
{
lean_object* v_a_1511_; lean_object* v_literal_1512_; 
v_a_1511_ = lean_ctor_get(v___x_1510_, 0);
lean_inc(v_a_1511_);
lean_dec_ref_known(v___x_1510_, 1);
v_literal_1512_ = lean_ctor_get(v_a_1511_, 0);
lean_inc(v_literal_1512_);
if (lean_obj_tag(v_literal_1512_) == 1)
{
lean_object* v_val_1513_; lean_object* v___x_1515_; uint8_t v_isShared_1516_; uint8_t v_isSharedCheck_1531_; 
v_val_1513_ = lean_ctor_get(v_literal_1512_, 0);
v_isSharedCheck_1531_ = !lean_is_exclusive(v_literal_1512_);
if (v_isSharedCheck_1531_ == 0)
{
v___x_1515_ = v_literal_1512_;
v_isShared_1516_ = v_isSharedCheck_1531_;
goto v_resetjp_1514_;
}
else
{
lean_inc(v_val_1513_);
lean_dec(v_literal_1512_);
v___x_1515_ = lean_box(0);
v_isShared_1516_ = v_isSharedCheck_1531_;
goto v_resetjp_1514_;
}
v_resetjp_1514_:
{
lean_object* v___x_1517_; 
lean_inc_ref(v_step_1482_);
v___x_1517_ = lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(v_step_1482_, v_a_1483_, v_a_1484_, v_a_1485_, v_a_1486_, v_a_1487_, v_a_1488_);
if (lean_obj_tag(v___x_1517_) == 0)
{
lean_object* v_a_1518_; lean_object* v___f_1519_; lean_object* v___f_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___f_1524_; lean_object* v___x_1525_; lean_object* v___x_1527_; 
v_a_1518_ = lean_ctor_get(v___x_1517_, 0);
lean_inc(v_a_1518_);
lean_dec_ref_known(v___x_1517_, 1);
v___f_1519_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___closed__4));
v___f_1520_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__2___boxed), 2, 1);
lean_closure_set(v___f_1520_, 0, v_val_1513_);
v___x_1521_ = lean_array_fget(v___x_1505_, v___x_1501_);
lean_dec_ref(v___x_1505_);
lean_inc_ref(v_unit_1490_);
v___x_1522_ = lp_vampireReplay_Vampire_Unit_varSorts(v_unit_1490_);
v___x_1523_ = lean_box(v___x_1507_);
lean_inc_ref(v___x_1522_);
v___f_1524_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___lam__0___boxed), 21, 12);
lean_closure_set(v___f_1524_, 0, v___x_1501_);
lean_closure_set(v___f_1524_, 1, v___x_1522_);
lean_closure_set(v___f_1524_, 2, v_unit_1490_);
lean_closure_set(v___f_1524_, 3, v___x_1521_);
lean_closure_set(v___f_1524_, 4, v_a_1511_);
lean_closure_set(v___f_1524_, 5, v_fst_1503_);
lean_closure_set(v___f_1524_, 6, v_snd_1504_);
lean_closure_set(v___f_1524_, 7, v___x_1493_);
lean_closure_set(v___f_1524_, 8, v_step_1482_);
lean_closure_set(v___f_1524_, 9, v___f_1520_);
lean_closure_set(v___f_1524_, 10, v___f_1519_);
lean_closure_set(v___f_1524_, 11, v___x_1523_);
v___x_1525_ = lean_array_get_size(v___x_1522_);
lean_dec_ref(v___x_1522_);
if (v_isShared_1516_ == 0)
{
lean_ctor_set(v___x_1515_, 0, v___x_1525_);
v___x_1527_ = v___x_1515_;
goto v_reusejp_1526_;
}
else
{
lean_object* v_reuseFailAlloc_1530_; 
v_reuseFailAlloc_1530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1530_, 0, v___x_1525_);
v___x_1527_ = v_reuseFailAlloc_1530_;
goto v_reusejp_1526_;
}
v_reusejp_1526_:
{
uint8_t v___x_1528_; lean_object* v___x_1529_; 
v___x_1528_ = 0;
v___x_1529_ = lp_vampireReplay_Lean_Meta_forallBoundedTelescope___at___00Vampire_Reconstruct_relateLiterals_spec__6___redArg(v_a_1518_, v___x_1527_, v___f_1524_, v___x_1528_, v___x_1528_, v_a_1483_, v_a_1484_, v_a_1485_, v_a_1486_, v_a_1487_, v_a_1488_);
return v___x_1529_;
}
}
else
{
lean_del_object(v___x_1515_);
lean_dec(v_val_1513_);
lean_dec(v_a_1511_);
lean_dec_ref(v___x_1505_);
lean_dec(v_snd_1504_);
lean_dec(v_fst_1503_);
lean_dec_ref(v_unit_1490_);
lean_dec_ref(v_step_1482_);
return v___x_1517_;
}
}
}
else
{
lean_object* v___x_1532_; lean_object* v___x_1533_; 
lean_dec(v_literal_1512_);
lean_dec(v_a_1511_);
lean_dec_ref(v___x_1505_);
lean_dec(v_snd_1504_);
lean_dec(v_fst_1503_);
lean_dec_ref(v_unit_1490_);
lean_dec_ref(v_step_1482_);
v___x_1532_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___closed__5, &lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___closed__5_once, _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___closed__5);
v___x_1533_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1532_, v_a_1485_, v_a_1486_, v_a_1487_, v_a_1488_);
return v___x_1533_;
}
}
else
{
lean_object* v_a_1534_; lean_object* v___x_1536_; uint8_t v_isShared_1537_; uint8_t v_isSharedCheck_1541_; 
lean_dec_ref(v___x_1505_);
lean_dec(v_snd_1504_);
lean_dec(v_fst_1503_);
lean_dec_ref(v_unit_1490_);
lean_dec_ref(v_step_1482_);
v_a_1534_ = lean_ctor_get(v___x_1510_, 0);
v_isSharedCheck_1541_ = !lean_is_exclusive(v___x_1510_);
if (v_isSharedCheck_1541_ == 0)
{
v___x_1536_ = v___x_1510_;
v_isShared_1537_ = v_isSharedCheck_1541_;
goto v_resetjp_1535_;
}
else
{
lean_inc(v_a_1534_);
lean_dec(v___x_1510_);
v___x_1536_ = lean_box(0);
v_isShared_1537_ = v_isSharedCheck_1541_;
goto v_resetjp_1535_;
}
v_resetjp_1535_:
{
lean_object* v___x_1539_; 
if (v_isShared_1537_ == 0)
{
v___x_1539_ = v___x_1536_;
goto v_reusejp_1538_;
}
else
{
lean_object* v_reuseFailAlloc_1540_; 
v_reuseFailAlloc_1540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1540_, 0, v_a_1534_);
v___x_1539_ = v_reuseFailAlloc_1540_;
goto v_reusejp_1538_;
}
v_reusejp_1538_:
{
return v___x_1539_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___boxed(lean_object* v_step_1542_, lean_object* v_a_1543_, lean_object* v_a_1544_, lean_object* v_a_1545_, lean_object* v_a_1546_, lean_object* v_a_1547_, lean_object* v_a_1548_, lean_object* v_a_1549_){
_start:
{
lean_object* v_res_1550_; 
v_res_1550_ = lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion(v_step_1542_, v_a_1543_, v_a_1544_, v_a_1545_, v_a_1546_, v_a_1547_, v_a_1548_);
lean_dec(v_a_1548_);
lean_dec_ref(v_a_1547_);
lean_dec(v_a_1546_);
lean_dec_ref(v_a_1545_);
lean_dec(v_a_1544_);
lean_dec_ref(v_a_1543_);
return v_res_1550_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__2___closed__1(void){
_start:
{
lean_object* v___x_1552_; lean_object* v___x_1553_; 
v___x_1552_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__2___closed__0));
v___x_1553_ = l_Lean_stringToMessageData(v___x_1552_);
return v___x_1553_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__2(lean_object* v_a_1554_, lean_object* v_use_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_){
_start:
{
lean_object* v_term_1563_; 
v_term_1563_ = lean_ctor_get(v_use_1555_, 1);
if (lean_obj_tag(v_term_1563_) == 1)
{
lean_object* v_val_1564_; lean_object* v___x_1565_; 
v_val_1564_ = lean_ctor_get(v_term_1563_, 0);
lean_inc(v_val_1564_);
v___x_1565_ = lp_vampireReplay_Vampire_Reconstruct_substitutedVars(v_use_1555_, v_a_1554_, v___y_1556_, v___y_1557_, v___y_1558_, v___y_1559_, v___y_1560_, v___y_1561_);
lean_dec_ref(v_use_1555_);
if (lean_obj_tag(v___x_1565_) == 0)
{
lean_object* v_a_1566_; lean_object* v___x_1567_; 
v_a_1566_ = lean_ctor_get(v___x_1565_, 0);
lean_inc(v_a_1566_);
lean_dec_ref_known(v___x_1565_, 1);
v___x_1567_ = lp_vampireReplay_Vampire_Reconstruct_term(v_a_1566_, v_val_1564_, v___y_1556_, v___y_1557_, v___y_1558_, v___y_1559_, v___y_1560_, v___y_1561_);
lean_dec(v_a_1566_);
return v___x_1567_;
}
else
{
lean_object* v_a_1568_; lean_object* v___x_1570_; uint8_t v_isShared_1571_; uint8_t v_isSharedCheck_1575_; 
lean_dec(v_val_1564_);
v_a_1568_ = lean_ctor_get(v___x_1565_, 0);
v_isSharedCheck_1575_ = !lean_is_exclusive(v___x_1565_);
if (v_isSharedCheck_1575_ == 0)
{
v___x_1570_ = v___x_1565_;
v_isShared_1571_ = v_isSharedCheck_1575_;
goto v_resetjp_1569_;
}
else
{
lean_inc(v_a_1568_);
lean_dec(v___x_1565_);
v___x_1570_ = lean_box(0);
v_isShared_1571_ = v_isSharedCheck_1575_;
goto v_resetjp_1569_;
}
v_resetjp_1569_:
{
lean_object* v___x_1573_; 
if (v_isShared_1571_ == 0)
{
v___x_1573_ = v___x_1570_;
goto v_reusejp_1572_;
}
else
{
lean_object* v_reuseFailAlloc_1574_; 
v_reuseFailAlloc_1574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1574_, 0, v_a_1568_);
v___x_1573_ = v_reuseFailAlloc_1574_;
goto v_reusejp_1572_;
}
v_reusejp_1572_:
{
return v___x_1573_;
}
}
}
}
else
{
lean_object* v___x_1576_; lean_object* v___x_1577_; 
lean_dec_ref(v_use_1555_);
v___x_1576_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__2___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__2___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__2___closed__1);
v___x_1577_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1576_, v___y_1558_, v___y_1559_, v___y_1560_, v___y_1561_);
return v___x_1577_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__2___boxed(lean_object* v_a_1578_, lean_object* v_use_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_){
_start:
{
lean_object* v_res_1587_; 
v_res_1587_ = lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__2(v_a_1578_, v_use_1579_, v___y_1580_, v___y_1581_, v___y_1582_, v___y_1583_, v___y_1584_, v___y_1585_);
lean_dec(v___y_1585_);
lean_dec_ref(v___y_1584_);
lean_dec(v___y_1583_);
lean_dec_ref(v___y_1582_);
lean_dec(v___y_1581_);
lean_dec_ref(v___y_1580_);
lean_dec_ref(v_a_1578_);
return v_res_1587_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__0(lean_object* v_rest_1588_, lean_object* v___x_1589_, uint8_t v___x_1590_, lean_object* v_hne_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_){
_start:
{
lean_object* v___x_1599_; 
lean_inc_ref(v_hne_1591_);
v___x_1599_ = lp_vampireReplay_Vampire_Reconstruct_placeLiteral(v_rest_1588_, v_hne_1591_, v___y_1592_, v___y_1593_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_);
if (lean_obj_tag(v___x_1599_) == 0)
{
lean_object* v_a_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; uint8_t v___x_1603_; uint8_t v___x_1604_; lean_object* v___x_1605_; 
v_a_1600_ = lean_ctor_get(v___x_1599_, 0);
lean_inc(v_a_1600_);
lean_dec_ref_known(v___x_1599_, 1);
v___x_1601_ = lean_mk_empty_array_with_capacity(v___x_1589_);
v___x_1602_ = lean_array_push(v___x_1601_, v_hne_1591_);
v___x_1603_ = 0;
v___x_1604_ = 1;
v___x_1605_ = l_Lean_Meta_mkLambdaFVars(v___x_1602_, v_a_1600_, v___x_1603_, v___x_1590_, v___x_1603_, v___x_1590_, v___x_1604_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_);
lean_dec_ref(v___x_1602_);
return v___x_1605_;
}
else
{
lean_dec_ref(v_hne_1591_);
return v___x_1599_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__0___boxed(lean_object* v_rest_1606_, lean_object* v___x_1607_, lean_object* v___x_1608_, lean_object* v_hne_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_){
_start:
{
uint8_t v___x_42220__boxed_1617_; lean_object* v_res_1618_; 
v___x_42220__boxed_1617_ = lean_unbox(v___x_1608_);
v_res_1618_ = lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__0(v_rest_1606_, v___x_1607_, v___x_42220__boxed_1617_, v_hne_1609_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_, v___y_1615_);
lean_dec(v___y_1615_);
lean_dec_ref(v___y_1614_);
lean_dec(v___y_1613_);
lean_dec_ref(v___y_1612_);
lean_dec(v___y_1611_);
lean_dec_ref(v___y_1610_);
lean_dec(v___x_1607_);
return v_res_1618_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__1(lean_object* v___x_1620_, lean_object* v___x_1621_, lean_object* v_h_1622_, lean_object* v_a_1623_, lean_object* v___x_1624_, lean_object* v___x_1625_, lean_object* v___x_1626_, lean_object* v___x_1627_, lean_object* v_rest_1628_, lean_object* v___x_1629_, uint8_t v___x_1630_, lean_object* v_he_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_){
_start:
{
lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; 
v___x_1639_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__1___closed__0));
v___x_1640_ = l_Lean_Name_mkStr2(v___x_1620_, v___x_1639_);
v___x_1641_ = lean_array_push(v___x_1621_, v_h_1622_);
lean_inc_ref(v_he_1631_);
v___x_1642_ = lean_array_push(v___x_1641_, v_he_1631_);
v___x_1643_ = l_Lean_Meta_mkAppM(v___x_1640_, v___x_1642_, v___y_1634_, v___y_1635_, v___y_1636_, v___y_1637_);
if (lean_obj_tag(v___x_1643_) == 0)
{
lean_object* v_a_1644_; lean_object* v___x_1646_; uint8_t v_isShared_1647_; uint8_t v_isSharedCheck_1666_; 
v_a_1644_ = lean_ctor_get(v___x_1643_, 0);
v_isSharedCheck_1666_ = !lean_is_exclusive(v___x_1643_);
if (v_isSharedCheck_1666_ == 0)
{
v___x_1646_ = v___x_1643_;
v_isShared_1647_ = v_isSharedCheck_1666_;
goto v_resetjp_1645_;
}
else
{
lean_inc(v_a_1644_);
lean_dec(v___x_1643_);
v___x_1646_ = lean_box(0);
v_isShared_1647_ = v_isSharedCheck_1666_;
goto v_resetjp_1645_;
}
v_resetjp_1645_:
{
lean_object* v___x_1649_; 
if (v_isShared_1647_ == 0)
{
lean_ctor_set_tag(v___x_1646_, 1);
lean_ctor_set(v___x_1646_, 0, v_a_1623_);
v___x_1649_ = v___x_1646_;
goto v_reusejp_1648_;
}
else
{
lean_object* v_reuseFailAlloc_1665_; 
v_reuseFailAlloc_1665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1665_, 0, v_a_1623_);
v___x_1649_ = v_reuseFailAlloc_1665_;
goto v_reusejp_1648_;
}
v_reusejp_1648_:
{
lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; 
v___x_1650_ = lean_mk_empty_array_with_capacity(v___x_1624_);
v___x_1651_ = lean_array_push(v___x_1650_, v___x_1625_);
v___x_1652_ = lean_array_push(v___x_1651_, v___x_1649_);
v___x_1653_ = lean_array_push(v___x_1652_, v___x_1626_);
v___x_1654_ = l_Lean_Meta_mkAppOptM(v___x_1627_, v___x_1653_, v___y_1634_, v___y_1635_, v___y_1636_, v___y_1637_);
if (lean_obj_tag(v___x_1654_) == 0)
{
lean_object* v_a_1655_; lean_object* v___x_1656_; 
v_a_1655_ = lean_ctor_get(v___x_1654_, 0);
lean_inc(v_a_1655_);
lean_dec_ref_known(v___x_1654_, 1);
v___x_1656_ = l_Lean_Meta_mkExpectedTypeHint(v_a_1644_, v_a_1655_, v___y_1634_, v___y_1635_, v___y_1636_, v___y_1637_);
if (lean_obj_tag(v___x_1656_) == 0)
{
lean_object* v_a_1657_; lean_object* v___x_1658_; 
v_a_1657_ = lean_ctor_get(v___x_1656_, 0);
lean_inc(v_a_1657_);
lean_dec_ref_known(v___x_1656_, 1);
v___x_1658_ = lp_vampireReplay_Vampire_Reconstruct_placeLiteral(v_rest_1628_, v_a_1657_, v___y_1632_, v___y_1633_, v___y_1634_, v___y_1635_, v___y_1636_, v___y_1637_);
if (lean_obj_tag(v___x_1658_) == 0)
{
lean_object* v_a_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; uint8_t v___x_1662_; uint8_t v___x_1663_; lean_object* v___x_1664_; 
v_a_1659_ = lean_ctor_get(v___x_1658_, 0);
lean_inc(v_a_1659_);
lean_dec_ref_known(v___x_1658_, 1);
v___x_1660_ = lean_mk_empty_array_with_capacity(v___x_1629_);
v___x_1661_ = lean_array_push(v___x_1660_, v_he_1631_);
v___x_1662_ = 0;
v___x_1663_ = 1;
v___x_1664_ = l_Lean_Meta_mkLambdaFVars(v___x_1661_, v_a_1659_, v___x_1662_, v___x_1630_, v___x_1662_, v___x_1630_, v___x_1663_, v___y_1634_, v___y_1635_, v___y_1636_, v___y_1637_);
lean_dec_ref(v___x_1661_);
return v___x_1664_;
}
else
{
lean_dec_ref(v_he_1631_);
return v___x_1658_;
}
}
else
{
lean_dec_ref(v_he_1631_);
lean_dec_ref(v_rest_1628_);
return v___x_1656_;
}
}
else
{
lean_dec(v_a_1644_);
lean_dec_ref(v_he_1631_);
lean_dec_ref(v_rest_1628_);
return v___x_1654_;
}
}
}
}
else
{
lean_dec_ref(v_he_1631_);
lean_dec_ref(v_rest_1628_);
lean_dec(v___x_1627_);
lean_dec(v___x_1626_);
lean_dec(v___x_1625_);
lean_dec_ref(v_a_1623_);
return v___x_1643_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__1___boxed(lean_object** _args){
lean_object* v___x_1667_ = _args[0];
lean_object* v___x_1668_ = _args[1];
lean_object* v_h_1669_ = _args[2];
lean_object* v_a_1670_ = _args[3];
lean_object* v___x_1671_ = _args[4];
lean_object* v___x_1672_ = _args[5];
lean_object* v___x_1673_ = _args[6];
lean_object* v___x_1674_ = _args[7];
lean_object* v_rest_1675_ = _args[8];
lean_object* v___x_1676_ = _args[9];
lean_object* v___x_1677_ = _args[10];
lean_object* v_he_1678_ = _args[11];
lean_object* v___y_1679_ = _args[12];
lean_object* v___y_1680_ = _args[13];
lean_object* v___y_1681_ = _args[14];
lean_object* v___y_1682_ = _args[15];
lean_object* v___y_1683_ = _args[16];
lean_object* v___y_1684_ = _args[17];
lean_object* v___y_1685_ = _args[18];
_start:
{
uint8_t v___x_42271__boxed_1686_; lean_object* v_res_1687_; 
v___x_42271__boxed_1686_ = lean_unbox(v___x_1677_);
v_res_1687_ = lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__1(v___x_1667_, v___x_1668_, v_h_1669_, v_a_1670_, v___x_1671_, v___x_1672_, v___x_1673_, v___x_1674_, v_rest_1675_, v___x_1676_, v___x_42271__boxed_1686_, v_he_1678_, v___y_1679_, v___y_1680_, v___y_1681_, v___y_1682_, v___y_1683_, v___y_1684_);
lean_dec(v___y_1684_);
lean_dec_ref(v___y_1683_);
lean_dec(v___y_1682_);
lean_dec_ref(v___y_1681_);
lean_dec(v___y_1680_);
lean_dec_ref(v___y_1679_);
lean_dec(v___x_1676_);
lean_dec(v___x_1671_);
return v_res_1687_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__3___closed__1(void){
_start:
{
lean_object* v___x_1689_; lean_object* v___x_1690_; 
v___x_1689_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__3___closed__0));
v___x_1690_ = l_Lean_stringToMessageData(v___x_1689_);
return v___x_1690_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__3(lean_object* v___x_1695_, lean_object* v___x_1696_, lean_object* v_a_1697_, lean_object* v___x_1698_, uint8_t v___x_1699_, lean_object* v___x_1700_, lean_object* v___y_1701_, lean_object* v___x_1702_, lean_object* v_a_1703_, lean_object* v_x_1704_, lean_object* v_h_1705_, lean_object* v_rest_1706_, lean_object* v___y_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_){
_start:
{
lean_object* v___x_1714_; 
lean_inc(v___y_1712_);
lean_inc_ref(v___y_1711_);
lean_inc(v___y_1710_);
lean_inc_ref(v___y_1709_);
lean_inc_ref(v_h_1705_);
v___x_1714_ = lean_infer_type(v_h_1705_, v___y_1709_, v___y_1710_, v___y_1711_, v___y_1712_);
if (lean_obj_tag(v___x_1714_) == 0)
{
lean_object* v_a_1715_; lean_object* v___x_1716_; lean_object* v_a_1717_; lean_object* v___x_1719_; uint8_t v_isShared_1720_; uint8_t v_isSharedCheck_1812_; 
v_a_1715_ = lean_ctor_get(v___x_1714_, 0);
lean_inc(v_a_1715_);
lean_dec_ref_known(v___x_1714_, 1);
v___x_1716_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_a_1715_, v___y_1710_);
v_a_1717_ = lean_ctor_get(v___x_1716_, 0);
v_isSharedCheck_1812_ = !lean_is_exclusive(v___x_1716_);
if (v_isSharedCheck_1812_ == 0)
{
v___x_1719_ = v___x_1716_;
v_isShared_1720_ = v_isSharedCheck_1812_;
goto v_resetjp_1718_;
}
else
{
lean_inc(v_a_1717_);
lean_dec(v___x_1716_);
v___x_1719_ = lean_box(0);
v_isShared_1720_ = v_isSharedCheck_1812_;
goto v_resetjp_1718_;
}
v_resetjp_1718_:
{
uint8_t v___x_1721_; 
lean_inc(v___x_1696_);
v___x_1721_ = l_Lean_Expr_isAppOfArity(v_a_1717_, v___x_1695_, v___x_1696_);
if (v___x_1721_ == 0)
{
lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; 
lean_del_object(v___x_1719_);
lean_dec_ref(v_rest_1706_);
lean_dec_ref(v_h_1705_);
lean_dec_ref(v_a_1703_);
lean_dec_ref(v___x_1702_);
lean_dec_ref(v___y_1701_);
lean_dec(v___x_1698_);
lean_dec_ref(v_a_1697_);
lean_dec(v___x_1696_);
lean_dec(v___x_1695_);
v___x_1722_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__3___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__3___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__3___closed__1);
v___x_1723_ = l_Lean_indentExpr(v_a_1717_);
v___x_1724_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1724_, 0, v___x_1722_);
lean_ctor_set(v___x_1724_, 1, v___x_1723_);
v___x_1725_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1724_, v___y_1709_, v___y_1710_, v___y_1711_, v___y_1712_);
return v___x_1725_;
}
else
{
lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; 
v___x_1726_ = l_Lean_Expr_appFn_x21(v_a_1717_);
v___x_1727_ = l_Lean_Expr_appArg_x21(v___x_1726_);
lean_inc_ref(v_a_1697_);
lean_inc_ref(v___x_1727_);
v___x_1728_ = l_Lean_Meta_isExprDefEq(v___x_1727_, v_a_1697_, v___y_1709_, v___y_1710_, v___y_1711_, v___y_1712_);
if (lean_obj_tag(v___x_1728_) == 0)
{
lean_object* v_a_1729_; lean_object* v___x_1730_; lean_object* v___f_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___y_1735_; lean_object* v_h_1736_; lean_object* v___y_1737_; lean_object* v___y_1738_; lean_object* v___y_1739_; lean_object* v___y_1740_; lean_object* v___y_1741_; lean_object* v___y_1742_; lean_object* v___y_1784_; uint8_t v___x_1802_; 
v_a_1729_ = lean_ctor_get(v___x_1728_, 0);
lean_inc(v_a_1729_);
lean_dec_ref_known(v___x_1728_, 1);
v___x_1730_ = lean_box(v___x_1699_);
lean_inc(v___x_1698_);
lean_inc_ref(v_rest_1706_);
v___f_1731_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__0___boxed), 11, 3);
lean_closure_set(v___f_1731_, 0, v_rest_1706_);
lean_closure_set(v___f_1731_, 1, v___x_1698_);
lean_closure_set(v___f_1731_, 2, v___x_1730_);
v___x_1732_ = l_Lean_Expr_appFn_x21(v___x_1726_);
lean_dec_ref(v___x_1726_);
v___x_1733_ = l_Lean_Expr_appArg_x21(v___x_1732_);
lean_dec_ref(v___x_1732_);
v___x_1802_ = lean_unbox(v_a_1729_);
lean_dec(v_a_1729_);
if (v___x_1802_ == 0)
{
lean_dec(v_a_1717_);
lean_inc_ref(v___x_1727_);
v___y_1784_ = v___x_1727_;
goto v___jp_1783_;
}
else
{
lean_object* v___x_1803_; 
v___x_1803_ = l_Lean_Expr_appArg_x21(v_a_1717_);
lean_dec(v_a_1717_);
v___y_1784_ = v___x_1803_;
goto v___jp_1783_;
}
v___jp_1734_:
{
lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; 
v___x_1743_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__3___closed__3));
v___x_1744_ = lean_mk_empty_array_with_capacity(v___x_1700_);
lean_inc_ref(v___y_1735_);
lean_inc_ref(v___x_1744_);
v___x_1745_ = lean_array_push(v___x_1744_, v___y_1735_);
lean_inc_ref(v___y_1701_);
v___x_1746_ = lean_array_push(v___x_1745_, v___y_1701_);
v___x_1747_ = l_Lean_Meta_mkAppM(v___x_1743_, v___x_1746_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_);
if (lean_obj_tag(v___x_1747_) == 0)
{
lean_object* v_a_1748_; lean_object* v___x_1750_; uint8_t v_isShared_1751_; uint8_t v_isSharedCheck_1782_; 
v_a_1748_ = lean_ctor_get(v___x_1747_, 0);
v_isSharedCheck_1782_ = !lean_is_exclusive(v___x_1747_);
if (v_isSharedCheck_1782_ == 0)
{
v___x_1750_ = v___x_1747_;
v_isShared_1751_ = v_isSharedCheck_1782_;
goto v_resetjp_1749_;
}
else
{
lean_inc(v_a_1748_);
lean_dec(v___x_1747_);
v___x_1750_ = lean_box(0);
v_isShared_1751_ = v_isSharedCheck_1782_;
goto v_resetjp_1749_;
}
v_resetjp_1749_:
{
lean_object* v___x_1752_; lean_object* v___x_1753_; 
v___x_1752_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__9));
v___x_1753_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_1752_, v_a_1748_, v___f_1731_, v___y_1737_, v___y_1738_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_);
if (lean_obj_tag(v___x_1753_) == 0)
{
lean_object* v_a_1754_; lean_object* v___x_1756_; uint8_t v_isShared_1757_; uint8_t v_isSharedCheck_1781_; 
v_a_1754_ = lean_ctor_get(v___x_1753_, 0);
v_isSharedCheck_1781_ = !lean_is_exclusive(v___x_1753_);
if (v_isSharedCheck_1781_ == 0)
{
v___x_1756_ = v___x_1753_;
v_isShared_1757_ = v_isSharedCheck_1781_;
goto v_resetjp_1755_;
}
else
{
lean_inc(v_a_1754_);
lean_dec(v___x_1753_);
v___x_1756_ = lean_box(0);
v_isShared_1757_ = v_isSharedCheck_1781_;
goto v_resetjp_1755_;
}
v_resetjp_1755_:
{
lean_object* v___x_1759_; 
if (v_isShared_1757_ == 0)
{
lean_ctor_set_tag(v___x_1756_, 1);
lean_ctor_set(v___x_1756_, 0, v___x_1733_);
v___x_1759_ = v___x_1756_;
goto v_reusejp_1758_;
}
else
{
lean_object* v_reuseFailAlloc_1780_; 
v_reuseFailAlloc_1780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1780_, 0, v___x_1733_);
v___x_1759_ = v_reuseFailAlloc_1780_;
goto v_reusejp_1758_;
}
v_reusejp_1758_:
{
lean_object* v___x_1761_; 
if (v_isShared_1751_ == 0)
{
lean_ctor_set_tag(v___x_1750_, 1);
lean_ctor_set(v___x_1750_, 0, v___y_1735_);
v___x_1761_ = v___x_1750_;
goto v_reusejp_1760_;
}
else
{
lean_object* v_reuseFailAlloc_1779_; 
v_reuseFailAlloc_1779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1779_, 0, v___y_1735_);
v___x_1761_ = v_reuseFailAlloc_1779_;
goto v_reusejp_1760_;
}
v_reusejp_1760_:
{
lean_object* v___x_1763_; 
if (v_isShared_1720_ == 0)
{
lean_ctor_set_tag(v___x_1719_, 1);
lean_ctor_set(v___x_1719_, 0, v___y_1701_);
v___x_1763_ = v___x_1719_;
goto v_reusejp_1762_;
}
else
{
lean_object* v_reuseFailAlloc_1778_; 
v_reuseFailAlloc_1778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1778_, 0, v___y_1701_);
v___x_1763_ = v_reuseFailAlloc_1778_;
goto v_reusejp_1762_;
}
v_reusejp_1762_:
{
lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; 
v___x_1764_ = lean_mk_empty_array_with_capacity(v___x_1696_);
lean_inc_ref(v___x_1759_);
v___x_1765_ = lean_array_push(v___x_1764_, v___x_1759_);
v___x_1766_ = lean_array_push(v___x_1765_, v___x_1761_);
lean_inc_ref(v___x_1763_);
v___x_1767_ = lean_array_push(v___x_1766_, v___x_1763_);
lean_inc(v___x_1695_);
v___x_1768_ = l_Lean_Meta_mkAppOptM(v___x_1695_, v___x_1767_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_);
if (lean_obj_tag(v___x_1768_) == 0)
{
lean_object* v_a_1769_; lean_object* v___x_1770_; lean_object* v___f_1771_; lean_object* v___x_1772_; 
v_a_1769_ = lean_ctor_get(v___x_1768_, 0);
lean_inc(v_a_1769_);
lean_dec_ref_known(v___x_1768_, 1);
v___x_1770_ = lean_box(v___x_1699_);
lean_inc_ref(v___x_1744_);
v___f_1771_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__1___boxed), 19, 11);
lean_closure_set(v___f_1771_, 0, v___x_1702_);
lean_closure_set(v___f_1771_, 1, v___x_1744_);
lean_closure_set(v___f_1771_, 2, v_h_1736_);
lean_closure_set(v___f_1771_, 3, v_a_1703_);
lean_closure_set(v___f_1771_, 4, v___x_1696_);
lean_closure_set(v___f_1771_, 5, v___x_1759_);
lean_closure_set(v___f_1771_, 6, v___x_1763_);
lean_closure_set(v___f_1771_, 7, v___x_1695_);
lean_closure_set(v___f_1771_, 8, v_rest_1706_);
lean_closure_set(v___f_1771_, 9, v___x_1698_);
lean_closure_set(v___f_1771_, 10, v___x_1770_);
v___x_1772_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_1752_, v_a_1769_, v___f_1771_, v___y_1737_, v___y_1738_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_);
if (lean_obj_tag(v___x_1772_) == 0)
{
lean_object* v_a_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; 
v_a_1773_ = lean_ctor_get(v___x_1772_, 0);
lean_inc(v_a_1773_);
lean_dec_ref_known(v___x_1772_, 1);
v___x_1774_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_fromConstraints_go___closed__12));
v___x_1775_ = lean_array_push(v___x_1744_, v_a_1773_);
v___x_1776_ = lean_array_push(v___x_1775_, v_a_1754_);
v___x_1777_ = l_Lean_Meta_mkAppM(v___x_1774_, v___x_1776_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_);
return v___x_1777_;
}
else
{
lean_dec(v_a_1754_);
lean_dec_ref(v___x_1744_);
return v___x_1772_;
}
}
else
{
lean_dec_ref(v___x_1763_);
lean_dec_ref(v___x_1759_);
lean_dec(v_a_1754_);
lean_dec_ref(v___x_1744_);
lean_dec_ref(v_h_1736_);
lean_dec_ref(v_rest_1706_);
lean_dec_ref(v_a_1703_);
lean_dec_ref(v___x_1702_);
lean_dec(v___x_1698_);
lean_dec(v___x_1696_);
lean_dec(v___x_1695_);
return v___x_1768_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_1750_);
lean_dec_ref(v___x_1744_);
lean_dec_ref(v_h_1736_);
lean_dec_ref(v___y_1735_);
lean_dec_ref(v___x_1733_);
lean_del_object(v___x_1719_);
lean_dec_ref(v_rest_1706_);
lean_dec_ref(v_a_1703_);
lean_dec_ref(v___x_1702_);
lean_dec_ref(v___y_1701_);
lean_dec(v___x_1698_);
lean_dec(v___x_1696_);
lean_dec(v___x_1695_);
return v___x_1753_;
}
}
}
else
{
lean_dec_ref(v___x_1744_);
lean_dec_ref(v_h_1736_);
lean_dec_ref(v___y_1735_);
lean_dec_ref(v___x_1733_);
lean_dec_ref(v___f_1731_);
lean_del_object(v___x_1719_);
lean_dec_ref(v_rest_1706_);
lean_dec_ref(v_a_1703_);
lean_dec_ref(v___x_1702_);
lean_dec_ref(v___y_1701_);
lean_dec(v___x_1698_);
lean_dec(v___x_1696_);
lean_dec(v___x_1695_);
return v___x_1747_;
}
}
v___jp_1783_:
{
lean_object* v___x_1785_; 
v___x_1785_ = l_Lean_Meta_isExprDefEq(v___x_1727_, v_a_1697_, v___y_1709_, v___y_1710_, v___y_1711_, v___y_1712_);
if (lean_obj_tag(v___x_1785_) == 0)
{
lean_object* v_a_1786_; uint8_t v___x_1787_; 
v_a_1786_ = lean_ctor_get(v___x_1785_, 0);
lean_inc(v_a_1786_);
lean_dec_ref_known(v___x_1785_, 1);
v___x_1787_ = lean_unbox(v_a_1786_);
lean_dec(v_a_1786_);
if (v___x_1787_ == 0)
{
lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; 
v___x_1788_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__3___closed__4));
lean_inc_ref(v___x_1702_);
v___x_1789_ = l_Lean_Name_mkStr2(v___x_1702_, v___x_1788_);
v___x_1790_ = lean_mk_empty_array_with_capacity(v___x_1698_);
v___x_1791_ = lean_array_push(v___x_1790_, v_h_1705_);
v___x_1792_ = l_Lean_Meta_mkAppM(v___x_1789_, v___x_1791_, v___y_1709_, v___y_1710_, v___y_1711_, v___y_1712_);
if (lean_obj_tag(v___x_1792_) == 0)
{
lean_object* v_a_1793_; 
v_a_1793_ = lean_ctor_get(v___x_1792_, 0);
lean_inc(v_a_1793_);
lean_dec_ref_known(v___x_1792_, 1);
v___y_1735_ = v___y_1784_;
v_h_1736_ = v_a_1793_;
v___y_1737_ = v___y_1707_;
v___y_1738_ = v___y_1708_;
v___y_1739_ = v___y_1709_;
v___y_1740_ = v___y_1710_;
v___y_1741_ = v___y_1711_;
v___y_1742_ = v___y_1712_;
goto v___jp_1734_;
}
else
{
lean_dec_ref(v___y_1784_);
lean_dec_ref(v___x_1733_);
lean_dec_ref(v___f_1731_);
lean_del_object(v___x_1719_);
lean_dec_ref(v_rest_1706_);
lean_dec_ref(v_a_1703_);
lean_dec_ref(v___x_1702_);
lean_dec_ref(v___y_1701_);
lean_dec(v___x_1698_);
lean_dec(v___x_1696_);
lean_dec(v___x_1695_);
return v___x_1792_;
}
}
else
{
v___y_1735_ = v___y_1784_;
v_h_1736_ = v_h_1705_;
v___y_1737_ = v___y_1707_;
v___y_1738_ = v___y_1708_;
v___y_1739_ = v___y_1709_;
v___y_1740_ = v___y_1710_;
v___y_1741_ = v___y_1711_;
v___y_1742_ = v___y_1712_;
goto v___jp_1734_;
}
}
else
{
lean_object* v_a_1794_; lean_object* v___x_1796_; uint8_t v_isShared_1797_; uint8_t v_isSharedCheck_1801_; 
lean_dec_ref(v___y_1784_);
lean_dec_ref(v___x_1733_);
lean_dec_ref(v___f_1731_);
lean_del_object(v___x_1719_);
lean_dec_ref(v_rest_1706_);
lean_dec_ref(v_h_1705_);
lean_dec_ref(v_a_1703_);
lean_dec_ref(v___x_1702_);
lean_dec_ref(v___y_1701_);
lean_dec(v___x_1698_);
lean_dec(v___x_1696_);
lean_dec(v___x_1695_);
v_a_1794_ = lean_ctor_get(v___x_1785_, 0);
v_isSharedCheck_1801_ = !lean_is_exclusive(v___x_1785_);
if (v_isSharedCheck_1801_ == 0)
{
v___x_1796_ = v___x_1785_;
v_isShared_1797_ = v_isSharedCheck_1801_;
goto v_resetjp_1795_;
}
else
{
lean_inc(v_a_1794_);
lean_dec(v___x_1785_);
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
}
else
{
lean_object* v_a_1804_; lean_object* v___x_1806_; uint8_t v_isShared_1807_; uint8_t v_isSharedCheck_1811_; 
lean_dec_ref(v___x_1727_);
lean_dec_ref(v___x_1726_);
lean_del_object(v___x_1719_);
lean_dec(v_a_1717_);
lean_dec_ref(v_rest_1706_);
lean_dec_ref(v_h_1705_);
lean_dec_ref(v_a_1703_);
lean_dec_ref(v___x_1702_);
lean_dec_ref(v___y_1701_);
lean_dec(v___x_1698_);
lean_dec_ref(v_a_1697_);
lean_dec(v___x_1696_);
lean_dec(v___x_1695_);
v_a_1804_ = lean_ctor_get(v___x_1728_, 0);
v_isSharedCheck_1811_ = !lean_is_exclusive(v___x_1728_);
if (v_isSharedCheck_1811_ == 0)
{
v___x_1806_ = v___x_1728_;
v_isShared_1807_ = v_isSharedCheck_1811_;
goto v_resetjp_1805_;
}
else
{
lean_inc(v_a_1804_);
lean_dec(v___x_1728_);
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
}
}
else
{
lean_dec_ref(v_rest_1706_);
lean_dec_ref(v_h_1705_);
lean_dec_ref(v_a_1703_);
lean_dec_ref(v___x_1702_);
lean_dec_ref(v___y_1701_);
lean_dec(v___x_1698_);
lean_dec_ref(v_a_1697_);
lean_dec(v___x_1696_);
lean_dec(v___x_1695_);
return v___x_1714_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__3___boxed(lean_object** _args){
lean_object* v___x_1813_ = _args[0];
lean_object* v___x_1814_ = _args[1];
lean_object* v_a_1815_ = _args[2];
lean_object* v___x_1816_ = _args[3];
lean_object* v___x_1817_ = _args[4];
lean_object* v___x_1818_ = _args[5];
lean_object* v___y_1819_ = _args[6];
lean_object* v___x_1820_ = _args[7];
lean_object* v_a_1821_ = _args[8];
lean_object* v_x_1822_ = _args[9];
lean_object* v_h_1823_ = _args[10];
lean_object* v_rest_1824_ = _args[11];
lean_object* v___y_1825_ = _args[12];
lean_object* v___y_1826_ = _args[13];
lean_object* v___y_1827_ = _args[14];
lean_object* v___y_1828_ = _args[15];
lean_object* v___y_1829_ = _args[16];
lean_object* v___y_1830_ = _args[17];
lean_object* v___y_1831_ = _args[18];
_start:
{
uint8_t v___x_42398__boxed_1832_; lean_object* v_res_1833_; 
v___x_42398__boxed_1832_ = lean_unbox(v___x_1817_);
v_res_1833_ = lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__3(v___x_1813_, v___x_1814_, v_a_1815_, v___x_1816_, v___x_42398__boxed_1832_, v___x_1818_, v___y_1819_, v___x_1820_, v_a_1821_, v_x_1822_, v_h_1823_, v_rest_1824_, v___y_1825_, v___y_1826_, v___y_1827_, v___y_1828_, v___y_1829_, v___y_1830_);
lean_dec(v___y_1830_);
lean_dec_ref(v___y_1829_);
lean_dec(v___y_1828_);
lean_dec_ref(v___y_1827_);
lean_dec(v___y_1826_);
lean_dec_ref(v___y_1825_);
lean_dec(v_x_1822_);
lean_dec(v___x_1818_);
return v_res_1833_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__4___closed__3(void){
_start:
{
lean_object* v___x_1838_; lean_object* v___x_1839_; 
v___x_1838_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__4___closed__2));
v___x_1839_ = l_Lean_stringToMessageData(v___x_1838_);
return v___x_1839_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__4___closed__5(void){
_start:
{
lean_object* v___x_1841_; lean_object* v___x_1842_; 
v___x_1841_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__4___closed__4));
v___x_1842_ = l_Lean_stringToMessageData(v___x_1841_);
return v___x_1842_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__4(lean_object* v___x_1843_, lean_object* v___x_1844_, lean_object* v_unit_1845_, lean_object* v___x_1846_, lean_object* v___x_1847_, lean_object* v_fst_1848_, lean_object* v_snd_1849_, lean_object* v___x_1850_, uint32_t v_val_1851_, lean_object* v___x_1852_, lean_object* v___x_1853_, lean_object* v___f_1854_, lean_object* v___f_1855_, lean_object* v_xs_1856_, lean_object* v_target_1857_, lean_object* v___y_1858_, lean_object* v___y_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_, lean_object* v___y_1863_){
_start:
{
lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; size_t v_sz_1868_; size_t v___x_1869_; lean_object* v___x_1870_; 
v___x_1865_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__4___closed__0, &lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__4___closed__0_once, _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__4___closed__0);
v___x_1866_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1866_, 0, v___x_1843_);
lean_ctor_set(v___x_1866_, 1, v___x_1865_);
v___x_1867_ = l_Array_zip___redArg(v_xs_1856_, v___x_1844_);
v_sz_1868_ = lean_array_size(v___x_1867_);
v___x_1869_ = ((size_t)0ULL);
v___x_1870_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__0___redArg(v___x_1867_, v_sz_1868_, v___x_1869_, v___x_1866_);
lean_dec_ref(v___x_1867_);
if (lean_obj_tag(v___x_1870_) == 0)
{
lean_object* v_a_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; 
v_a_1871_ = lean_ctor_get(v___x_1870_, 0);
lean_inc(v_a_1871_);
lean_dec_ref_known(v___x_1870_, 1);
v___x_1872_ = lp_vampireReplay_Vampire_Unit_boundVarSorts(v_unit_1845_);
lean_inc_ref(v___x_1846_);
v___x_1873_ = lp_vampireReplay_Vampire_Reconstruct_coverVars(v___x_1846_, v_a_1871_, v___x_1872_, v___y_1858_, v___y_1859_, v___y_1860_, v___y_1861_, v___y_1862_, v___y_1863_);
lean_dec_ref(v___x_1872_);
if (lean_obj_tag(v___x_1873_) == 0)
{
lean_object* v_a_1874_; lean_object* v___x_1875_; 
v_a_1874_ = lean_ctor_get(v___x_1873_, 0);
lean_inc(v_a_1874_);
lean_dec_ref_known(v___x_1873_, 1);
lean_inc_ref(v___x_1847_);
v___x_1875_ = lp_vampireReplay_Vampire_Reconstruct_instantiateAt(v___x_1846_, v___x_1847_, v_a_1874_, v_fst_1848_, v_snd_1849_, v___y_1858_, v___y_1859_, v___y_1860_, v___y_1861_, v___y_1862_, v___y_1863_);
if (lean_obj_tag(v___x_1875_) == 0)
{
lean_object* v_a_1876_; lean_object* v_fst_1877_; lean_object* v_snd_1878_; lean_object* v___x_1880_; uint8_t v_isShared_1881_; uint8_t v_isSharedCheck_1939_; 
v_a_1876_ = lean_ctor_get(v___x_1875_, 0);
lean_inc(v_a_1876_);
lean_dec_ref_known(v___x_1875_, 1);
v_fst_1877_ = lean_ctor_get(v_a_1876_, 0);
v_snd_1878_ = lean_ctor_get(v_a_1876_, 1);
v_isSharedCheck_1939_ = !lean_is_exclusive(v_a_1876_);
if (v_isSharedCheck_1939_ == 0)
{
v___x_1880_ = v_a_1876_;
v_isShared_1881_ = v_isSharedCheck_1939_;
goto v_resetjp_1879_;
}
else
{
lean_inc(v_snd_1878_);
lean_inc(v_fst_1877_);
lean_dec(v_a_1876_);
v___x_1880_ = lean_box(0);
v_isShared_1881_ = v_isSharedCheck_1939_;
goto v_resetjp_1879_;
}
v_resetjp_1879_:
{
lean_object* v___x_1882_; 
v___x_1882_ = lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__2(v_a_1874_, v___x_1847_, v___y_1858_, v___y_1859_, v___y_1860_, v___y_1861_, v___y_1862_, v___y_1863_);
if (lean_obj_tag(v___x_1882_) == 0)
{
lean_object* v_a_1883_; lean_object* v___x_1884_; 
v_a_1883_ = lean_ctor_get(v___x_1882_, 0);
lean_inc(v_a_1883_);
lean_dec_ref_known(v___x_1882_, 1);
v___x_1884_ = lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__2(v_a_1874_, v___x_1850_, v___y_1858_, v___y_1859_, v___y_1860_, v___y_1861_, v___y_1862_, v___y_1863_);
lean_dec(v_a_1874_);
if (lean_obj_tag(v___x_1884_) == 0)
{
lean_object* v_a_1885_; lean_object* v___x_1887_; uint8_t v_isShared_1888_; uint8_t v_isSharedCheck_1938_; 
v_a_1885_ = lean_ctor_get(v___x_1884_, 0);
v_isSharedCheck_1938_ = !lean_is_exclusive(v___x_1884_);
if (v_isSharedCheck_1938_ == 0)
{
v___x_1887_ = v___x_1884_;
v_isShared_1888_ = v_isSharedCheck_1938_;
goto v_resetjp_1886_;
}
else
{
lean_inc(v_a_1885_);
lean_dec(v___x_1884_);
v___x_1887_ = lean_box(0);
v_isShared_1888_ = v_isSharedCheck_1938_;
goto v_resetjp_1886_;
}
v_resetjp_1886_:
{
lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; uint8_t v___x_1893_; 
v___x_1889_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__4___closed__1));
lean_inc(v_snd_1878_);
v___x_1890_ = lp_vampireReplay_Vampire_Reconstruct_junctionParts(v___x_1889_, v_snd_1878_);
v___x_1891_ = lean_uint32_to_nat(v_val_1851_);
v___x_1892_ = lean_array_get_size(v___x_1890_);
v___x_1893_ = lean_nat_dec_lt(v___x_1891_, v___x_1892_);
if (v___x_1893_ == 0)
{
lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1897_; 
lean_dec_ref(v___x_1890_);
lean_dec(v_a_1885_);
lean_dec(v_a_1883_);
lean_dec(v_snd_1878_);
lean_dec(v_fst_1877_);
lean_dec_ref(v_target_1857_);
lean_dec_ref(v___f_1855_);
lean_dec_ref(v___f_1854_);
lean_dec(v___x_1853_);
lean_dec(v___x_1852_);
v___x_1894_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__4___closed__3, &lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__4___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__4___closed__3);
v___x_1895_ = l_Nat_reprFast(v___x_1891_);
if (v_isShared_1888_ == 0)
{
lean_ctor_set_tag(v___x_1887_, 3);
lean_ctor_set(v___x_1887_, 0, v___x_1895_);
v___x_1897_ = v___x_1887_;
goto v_reusejp_1896_;
}
else
{
lean_object* v_reuseFailAlloc_1903_; 
v_reuseFailAlloc_1903_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1903_, 0, v___x_1895_);
v___x_1897_ = v_reuseFailAlloc_1903_;
goto v_reusejp_1896_;
}
v_reusejp_1896_:
{
lean_object* v___x_1898_; lean_object* v___x_1900_; 
v___x_1898_ = l_Lean_MessageData_ofFormat(v___x_1897_);
if (v_isShared_1881_ == 0)
{
lean_ctor_set_tag(v___x_1880_, 7);
lean_ctor_set(v___x_1880_, 1, v___x_1898_);
lean_ctor_set(v___x_1880_, 0, v___x_1894_);
v___x_1900_ = v___x_1880_;
goto v_reusejp_1899_;
}
else
{
lean_object* v_reuseFailAlloc_1902_; 
v_reuseFailAlloc_1902_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1902_, 0, v___x_1894_);
lean_ctor_set(v_reuseFailAlloc_1902_, 1, v___x_1898_);
v___x_1900_ = v_reuseFailAlloc_1902_;
goto v_reusejp_1899_;
}
v_reusejp_1899_:
{
lean_object* v___x_1901_; 
v___x_1901_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1900_, v___y_1860_, v___y_1861_, v___y_1862_, v___y_1863_);
return v___x_1901_;
}
}
}
else
{
lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; uint8_t v___x_1908_; 
lean_del_object(v___x_1887_);
v___x_1904_ = lean_array_fget(v___x_1890_, v___x_1891_);
lean_dec(v___x_1891_);
lean_dec_ref(v___x_1890_);
v___x_1905_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___lam__2___closed__2));
v___x_1906_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion___lam__2___closed__3));
v___x_1907_ = lean_unsigned_to_nat(3u);
v___x_1908_ = l_Lean_Expr_isAppOfArity(v___x_1904_, v___x_1906_, v___x_1907_);
if (v___x_1908_ == 0)
{
lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1912_; 
lean_dec(v_a_1885_);
lean_dec(v_a_1883_);
lean_dec(v_snd_1878_);
lean_dec(v_fst_1877_);
lean_dec_ref(v_target_1857_);
lean_dec_ref(v___f_1855_);
lean_dec_ref(v___f_1854_);
lean_dec(v___x_1853_);
lean_dec(v___x_1852_);
v___x_1909_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__4___closed__5, &lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__4___closed__5_once, _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__4___closed__5);
v___x_1910_ = l_Lean_indentExpr(v___x_1904_);
if (v_isShared_1881_ == 0)
{
lean_ctor_set_tag(v___x_1880_, 7);
lean_ctor_set(v___x_1880_, 1, v___x_1910_);
lean_ctor_set(v___x_1880_, 0, v___x_1909_);
v___x_1912_ = v___x_1880_;
goto v_reusejp_1911_;
}
else
{
lean_object* v_reuseFailAlloc_1914_; 
v_reuseFailAlloc_1914_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1914_, 0, v___x_1909_);
lean_ctor_set(v_reuseFailAlloc_1914_, 1, v___x_1910_);
v___x_1912_ = v_reuseFailAlloc_1914_;
goto v_reusejp_1911_;
}
v_reusejp_1911_:
{
lean_object* v___x_1913_; 
v___x_1913_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1912_, v___y_1860_, v___y_1861_, v___y_1862_, v___y_1863_);
return v___x_1913_;
}
}
else
{
lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; 
lean_del_object(v___x_1880_);
v___x_1915_ = l_Lean_Expr_appFn_x21(v___x_1904_);
v___x_1916_ = l_Lean_Expr_appArg_x21(v___x_1915_);
lean_dec_ref(v___x_1915_);
lean_inc(v_a_1885_);
lean_inc_ref(v___x_1916_);
v___x_1917_ = l_Lean_Meta_isExprDefEq(v___x_1916_, v_a_1885_, v___y_1860_, v___y_1861_, v___y_1862_, v___y_1863_);
if (lean_obj_tag(v___x_1917_) == 0)
{
lean_object* v_a_1918_; lean_object* v___y_1920_; uint8_t v___x_1928_; 
v_a_1918_ = lean_ctor_get(v___x_1917_, 0);
lean_inc(v_a_1918_);
lean_dec_ref_known(v___x_1917_, 1);
v___x_1928_ = lean_unbox(v_a_1918_);
lean_dec(v_a_1918_);
if (v___x_1928_ == 0)
{
lean_dec(v___x_1904_);
v___y_1920_ = v___x_1916_;
goto v___jp_1919_;
}
else
{
lean_object* v___x_1929_; 
lean_dec_ref(v___x_1916_);
v___x_1929_ = l_Lean_Expr_appArg_x21(v___x_1904_);
lean_dec(v___x_1904_);
v___y_1920_ = v___x_1929_;
goto v___jp_1919_;
}
v___jp_1919_:
{
lean_object* v___x_1921_; lean_object* v___f_1922_; lean_object* v___x_1923_; 
v___x_1921_ = lean_box(v___x_1908_);
v___f_1922_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__3___boxed), 19, 9);
lean_closure_set(v___f_1922_, 0, v___x_1906_);
lean_closure_set(v___f_1922_, 1, v___x_1907_);
lean_closure_set(v___f_1922_, 2, v_a_1883_);
lean_closure_set(v___f_1922_, 3, v___x_1852_);
lean_closure_set(v___f_1922_, 4, v___x_1921_);
lean_closure_set(v___f_1922_, 5, v___x_1853_);
lean_closure_set(v___f_1922_, 6, v___y_1920_);
lean_closure_set(v___f_1922_, 7, v___x_1905_);
lean_closure_set(v___f_1922_, 8, v_a_1885_);
v___x_1923_ = lp_vampireReplay_Vampire_Reconstruct_carryPast(v_snd_1878_, v_target_1857_, v_fst_1877_, v___f_1854_, v___f_1922_, v___f_1855_, v___y_1858_, v___y_1859_, v___y_1860_, v___y_1861_, v___y_1862_, v___y_1863_);
if (lean_obj_tag(v___x_1923_) == 0)
{
lean_object* v_a_1924_; uint8_t v___x_1925_; uint8_t v___x_1926_; lean_object* v___x_1927_; 
v_a_1924_ = lean_ctor_get(v___x_1923_, 0);
lean_inc(v_a_1924_);
lean_dec_ref_known(v___x_1923_, 1);
v___x_1925_ = 0;
v___x_1926_ = 1;
v___x_1927_ = l_Lean_Meta_mkLambdaFVars(v_xs_1856_, v_a_1924_, v___x_1925_, v___x_1908_, v___x_1925_, v___x_1908_, v___x_1926_, v___y_1860_, v___y_1861_, v___y_1862_, v___y_1863_);
return v___x_1927_;
}
else
{
return v___x_1923_;
}
}
}
else
{
lean_object* v_a_1930_; lean_object* v___x_1932_; uint8_t v_isShared_1933_; uint8_t v_isSharedCheck_1937_; 
lean_dec_ref(v___x_1916_);
lean_dec(v___x_1904_);
lean_dec(v_a_1885_);
lean_dec(v_a_1883_);
lean_dec(v_snd_1878_);
lean_dec(v_fst_1877_);
lean_dec_ref(v_target_1857_);
lean_dec_ref(v___f_1855_);
lean_dec_ref(v___f_1854_);
lean_dec(v___x_1853_);
lean_dec(v___x_1852_);
v_a_1930_ = lean_ctor_get(v___x_1917_, 0);
v_isSharedCheck_1937_ = !lean_is_exclusive(v___x_1917_);
if (v_isSharedCheck_1937_ == 0)
{
v___x_1932_ = v___x_1917_;
v_isShared_1933_ = v_isSharedCheck_1937_;
goto v_resetjp_1931_;
}
else
{
lean_inc(v_a_1930_);
lean_dec(v___x_1917_);
v___x_1932_ = lean_box(0);
v_isShared_1933_ = v_isSharedCheck_1937_;
goto v_resetjp_1931_;
}
v_resetjp_1931_:
{
lean_object* v___x_1935_; 
if (v_isShared_1933_ == 0)
{
v___x_1935_ = v___x_1932_;
goto v_reusejp_1934_;
}
else
{
lean_object* v_reuseFailAlloc_1936_; 
v_reuseFailAlloc_1936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1936_, 0, v_a_1930_);
v___x_1935_ = v_reuseFailAlloc_1936_;
goto v_reusejp_1934_;
}
v_reusejp_1934_:
{
return v___x_1935_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_1883_);
lean_del_object(v___x_1880_);
lean_dec(v_snd_1878_);
lean_dec(v_fst_1877_);
lean_dec_ref(v_target_1857_);
lean_dec_ref(v___f_1855_);
lean_dec_ref(v___f_1854_);
lean_dec(v___x_1853_);
lean_dec(v___x_1852_);
return v___x_1884_;
}
}
else
{
lean_del_object(v___x_1880_);
lean_dec(v_snd_1878_);
lean_dec(v_fst_1877_);
lean_dec(v_a_1874_);
lean_dec_ref(v_target_1857_);
lean_dec_ref(v___f_1855_);
lean_dec_ref(v___f_1854_);
lean_dec(v___x_1853_);
lean_dec(v___x_1852_);
lean_dec_ref(v___x_1850_);
return v___x_1882_;
}
}
}
else
{
lean_object* v_a_1940_; lean_object* v___x_1942_; uint8_t v_isShared_1943_; uint8_t v_isSharedCheck_1947_; 
lean_dec(v_a_1874_);
lean_dec_ref(v_target_1857_);
lean_dec_ref(v___f_1855_);
lean_dec_ref(v___f_1854_);
lean_dec(v___x_1853_);
lean_dec(v___x_1852_);
lean_dec_ref(v___x_1850_);
lean_dec_ref(v___x_1847_);
v_a_1940_ = lean_ctor_get(v___x_1875_, 0);
v_isSharedCheck_1947_ = !lean_is_exclusive(v___x_1875_);
if (v_isSharedCheck_1947_ == 0)
{
v___x_1942_ = v___x_1875_;
v_isShared_1943_ = v_isSharedCheck_1947_;
goto v_resetjp_1941_;
}
else
{
lean_inc(v_a_1940_);
lean_dec(v___x_1875_);
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
lean_dec_ref(v_target_1857_);
lean_dec_ref(v___f_1855_);
lean_dec_ref(v___f_1854_);
lean_dec(v___x_1853_);
lean_dec(v___x_1852_);
lean_dec_ref(v___x_1850_);
lean_dec_ref(v_snd_1849_);
lean_dec_ref(v_fst_1848_);
lean_dec_ref(v___x_1847_);
lean_dec_ref(v___x_1846_);
v_a_1948_ = lean_ctor_get(v___x_1873_, 0);
v_isSharedCheck_1955_ = !lean_is_exclusive(v___x_1873_);
if (v_isSharedCheck_1955_ == 0)
{
v___x_1950_ = v___x_1873_;
v_isShared_1951_ = v_isSharedCheck_1955_;
goto v_resetjp_1949_;
}
else
{
lean_inc(v_a_1948_);
lean_dec(v___x_1873_);
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
lean_dec_ref(v_target_1857_);
lean_dec_ref(v___f_1855_);
lean_dec_ref(v___f_1854_);
lean_dec(v___x_1853_);
lean_dec(v___x_1852_);
lean_dec_ref(v___x_1850_);
lean_dec_ref(v_snd_1849_);
lean_dec_ref(v_fst_1848_);
lean_dec_ref(v___x_1847_);
lean_dec_ref(v___x_1846_);
lean_dec_ref(v_unit_1845_);
v_a_1956_ = lean_ctor_get(v___x_1870_, 0);
v_isSharedCheck_1963_ = !lean_is_exclusive(v___x_1870_);
if (v_isSharedCheck_1963_ == 0)
{
v___x_1958_ = v___x_1870_;
v_isShared_1959_ = v_isSharedCheck_1963_;
goto v_resetjp_1957_;
}
else
{
lean_inc(v_a_1956_);
lean_dec(v___x_1870_);
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
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__4___boxed(lean_object** _args){
lean_object* v___x_1964_ = _args[0];
lean_object* v___x_1965_ = _args[1];
lean_object* v_unit_1966_ = _args[2];
lean_object* v___x_1967_ = _args[3];
lean_object* v___x_1968_ = _args[4];
lean_object* v_fst_1969_ = _args[5];
lean_object* v_snd_1970_ = _args[6];
lean_object* v___x_1971_ = _args[7];
lean_object* v_val_1972_ = _args[8];
lean_object* v___x_1973_ = _args[9];
lean_object* v___x_1974_ = _args[10];
lean_object* v___f_1975_ = _args[11];
lean_object* v___f_1976_ = _args[12];
lean_object* v_xs_1977_ = _args[13];
lean_object* v_target_1978_ = _args[14];
lean_object* v___y_1979_ = _args[15];
lean_object* v___y_1980_ = _args[16];
lean_object* v___y_1981_ = _args[17];
lean_object* v___y_1982_ = _args[18];
lean_object* v___y_1983_ = _args[19];
lean_object* v___y_1984_ = _args[20];
lean_object* v___y_1985_ = _args[21];
_start:
{
uint32_t v_val_42686__boxed_1986_; lean_object* v_res_1987_; 
v_val_42686__boxed_1986_ = lean_unbox_uint32(v_val_1972_);
lean_dec(v_val_1972_);
v_res_1987_ = lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__4(v___x_1964_, v___x_1965_, v_unit_1966_, v___x_1967_, v___x_1968_, v_fst_1969_, v_snd_1970_, v___x_1971_, v_val_42686__boxed_1986_, v___x_1973_, v___x_1974_, v___f_1975_, v___f_1976_, v_xs_1977_, v_target_1978_, v___y_1979_, v___y_1980_, v___y_1981_, v___y_1982_, v___y_1983_, v___y_1984_);
lean_dec(v___y_1984_);
lean_dec_ref(v___y_1983_);
lean_dec(v___y_1982_);
lean_dec_ref(v___y_1981_);
lean_dec(v___y_1980_);
lean_dec_ref(v___y_1979_);
lean_dec_ref(v_xs_1977_);
lean_dec_ref(v___x_1965_);
return v_res_1987_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__1(void){
_start:
{
lean_object* v___x_1989_; lean_object* v___x_1990_; 
v___x_1989_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__0));
v___x_1990_ = l_Lean_stringToMessageData(v___x_1989_);
return v___x_1990_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__3(void){
_start:
{
lean_object* v___x_1992_; lean_object* v___x_1993_; 
v___x_1992_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__2));
v___x_1993_ = l_Lean_stringToMessageData(v___x_1992_);
return v___x_1993_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__5(void){
_start:
{
lean_object* v___x_1995_; lean_object* v___x_1996_; 
v___x_1995_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__4));
v___x_1996_ = l_Lean_stringToMessageData(v___x_1995_);
return v___x_1996_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__7(void){
_start:
{
lean_object* v___x_1998_; lean_object* v___x_1999_; 
v___x_1998_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__6));
v___x_1999_ = l_Lean_stringToMessageData(v___x_1998_);
return v___x_1999_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__9(void){
_start:
{
lean_object* v___x_2001_; lean_object* v___x_2002_; 
v___x_2001_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__8));
v___x_2002_ = l_Lean_stringToMessageData(v___x_2001_);
return v___x_2002_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__11(void){
_start:
{
lean_object* v___x_2004_; lean_object* v___x_2005_; 
v___x_2004_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__10));
v___x_2005_ = l_Lean_stringToMessageData(v___x_2004_);
return v___x_2005_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring(lean_object* v_step_2008_, lean_object* v_a_2009_, lean_object* v_a_2010_, lean_object* v_a_2011_, lean_object* v_a_2012_, lean_object* v_a_2013_, lean_object* v_a_2014_){
_start:
{
lean_object* v_unit_2016_; lean_object* v_premises_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; uint8_t v___x_2020_; 
v_unit_2016_ = lean_ctor_get(v_step_2008_, 0);
lean_inc_ref(v_unit_2016_);
v_premises_2017_ = lean_ctor_get(v_step_2008_, 1);
v___x_2018_ = lean_array_get_size(v_premises_2017_);
v___x_2019_ = lean_unsigned_to_nat(1u);
v___x_2020_ = lean_nat_dec_eq(v___x_2018_, v___x_2019_);
if (v___x_2020_ == 0)
{
lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; 
lean_dec_ref(v_unit_2016_);
lean_dec_ref(v_step_2008_);
v___x_2021_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__1);
v___x_2022_ = l_Nat_reprFast(v___x_2018_);
v___x_2023_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2023_, 0, v___x_2022_);
v___x_2024_ = l_Lean_MessageData_ofFormat(v___x_2023_);
v___x_2025_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2025_, 0, v___x_2021_);
lean_ctor_set(v___x_2025_, 1, v___x_2024_);
v___x_2026_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2025_, v_a_2011_, v_a_2012_, v_a_2013_, v_a_2014_);
return v___x_2026_;
}
else
{
lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v_fst_2029_; lean_object* v_snd_2030_; lean_object* v___x_2032_; uint8_t v_isShared_2033_; uint8_t v_isSharedCheck_2092_; 
v___x_2027_ = lean_unsigned_to_nat(0u);
v___x_2028_ = lean_array_fget(v_premises_2017_, v___x_2027_);
v_fst_2029_ = lean_ctor_get(v___x_2028_, 0);
v_snd_2030_ = lean_ctor_get(v___x_2028_, 1);
v_isSharedCheck_2092_ = !lean_is_exclusive(v___x_2028_);
if (v_isSharedCheck_2092_ == 0)
{
v___x_2032_ = v___x_2028_;
v_isShared_2033_ = v_isSharedCheck_2092_;
goto v_resetjp_2031_;
}
else
{
lean_inc(v_snd_2030_);
lean_inc(v_fst_2029_);
lean_dec(v___x_2028_);
v___x_2032_ = lean_box(0);
v_isShared_2033_ = v_isSharedCheck_2092_;
goto v_resetjp_2031_;
}
v_resetjp_2031_:
{
lean_object* v___x_2034_; lean_object* v___x_2035_; uint8_t v___x_2036_; 
lean_inc_ref(v_unit_2016_);
v___x_2034_ = lp_vampireReplay_Vampire_Unit_parents(v_unit_2016_);
v___x_2035_ = lean_array_get_size(v___x_2034_);
v___x_2036_ = lean_nat_dec_lt(v___x_2027_, v___x_2035_);
if (v___x_2036_ == 0)
{
lean_object* v___x_2037_; lean_object* v___x_2038_; 
lean_dec_ref(v___x_2034_);
lean_del_object(v___x_2032_);
lean_dec(v_snd_2030_);
lean_dec(v_fst_2029_);
lean_dec_ref(v_unit_2016_);
lean_dec_ref(v_step_2008_);
v___x_2037_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__3, &lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__3);
v___x_2038_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2037_, v_a_2011_, v_a_2012_, v_a_2013_, v_a_2014_);
return v___x_2038_;
}
else
{
lean_object* v___f_2039_; lean_object* v___x_2040_; lean_object* v___y_2042_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; uint8_t v___x_2084_; 
v___f_2039_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___closed__4));
v___x_2040_ = lean_array_fget(v___x_2034_, v___x_2027_);
lean_dec_ref(v___x_2034_);
lean_inc_ref(v_unit_2016_);
v___x_2081_ = lp_vampireReplay_Vampire_Unit_premiseUses(v_unit_2016_);
v___x_2082_ = lean_array_get_size(v___x_2081_);
v___x_2083_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__12));
v___x_2084_ = lean_nat_dec_lt(v___x_2027_, v___x_2082_);
if (v___x_2084_ == 0)
{
lean_dec_ref(v___x_2081_);
v___y_2042_ = v___x_2083_;
goto v___jp_2041_;
}
else
{
uint8_t v___x_2085_; 
v___x_2085_ = lean_nat_dec_le(v___x_2082_, v___x_2082_);
if (v___x_2085_ == 0)
{
if (v___x_2084_ == 0)
{
lean_dec_ref(v___x_2081_);
v___y_2042_ = v___x_2083_;
goto v___jp_2041_;
}
else
{
size_t v___x_2086_; size_t v___x_2087_; lean_object* v___x_2088_; 
v___x_2086_ = ((size_t)0ULL);
v___x_2087_ = lean_usize_of_nat(v___x_2082_);
v___x_2088_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_Step_useAt_spec__0(v___x_2040_, v___x_2081_, v___x_2086_, v___x_2087_, v___x_2083_);
lean_dec_ref(v___x_2081_);
v___y_2042_ = v___x_2088_;
goto v___jp_2041_;
}
}
else
{
size_t v___x_2089_; size_t v___x_2090_; lean_object* v___x_2091_; 
v___x_2089_ = ((size_t)0ULL);
v___x_2090_ = lean_usize_of_nat(v___x_2082_);
v___x_2091_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_Step_useAt_spec__0(v___x_2040_, v___x_2081_, v___x_2089_, v___x_2090_, v___x_2083_);
lean_dec_ref(v___x_2081_);
v___y_2042_ = v___x_2091_;
goto v___jp_2041_;
}
}
v___jp_2041_:
{
lean_object* v___x_2043_; lean_object* v___x_2044_; uint8_t v___x_2045_; 
v___x_2043_ = lean_array_get_size(v___y_2042_);
v___x_2044_ = lean_unsigned_to_nat(2u);
v___x_2045_ = lean_nat_dec_eq(v___x_2043_, v___x_2044_);
if (v___x_2045_ == 0)
{
lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2051_; 
lean_dec_ref(v___y_2042_);
lean_dec(v___x_2040_);
lean_dec(v_snd_2030_);
lean_dec(v_fst_2029_);
lean_dec_ref(v_unit_2016_);
lean_dec_ref(v_step_2008_);
v___x_2046_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__5, &lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__5_once, _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__5);
v___x_2047_ = l_Nat_reprFast(v___x_2043_);
v___x_2048_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2048_, 0, v___x_2047_);
v___x_2049_ = l_Lean_MessageData_ofFormat(v___x_2048_);
if (v_isShared_2033_ == 0)
{
lean_ctor_set_tag(v___x_2032_, 7);
lean_ctor_set(v___x_2032_, 1, v___x_2049_);
lean_ctor_set(v___x_2032_, 0, v___x_2046_);
v___x_2051_ = v___x_2032_;
goto v_reusejp_2050_;
}
else
{
lean_object* v_reuseFailAlloc_2055_; 
v_reuseFailAlloc_2055_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2055_, 0, v___x_2046_);
lean_ctor_set(v_reuseFailAlloc_2055_, 1, v___x_2049_);
v___x_2051_ = v_reuseFailAlloc_2055_;
goto v_reusejp_2050_;
}
v_reusejp_2050_:
{
lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; 
v___x_2052_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__7, &lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__7_once, _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__7);
v___x_2053_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2053_, 0, v___x_2051_);
lean_ctor_set(v___x_2053_, 1, v___x_2052_);
v___x_2054_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2053_, v_a_2011_, v_a_2012_, v_a_2013_, v_a_2014_);
return v___x_2054_;
}
}
else
{
lean_object* v___x_2056_; lean_object* v_literal_2057_; 
lean_del_object(v___x_2032_);
v___x_2056_ = lean_array_fget(v___y_2042_, v___x_2027_);
v_literal_2057_ = lean_ctor_get(v___x_2056_, 0);
if (lean_obj_tag(v_literal_2057_) == 1)
{
lean_object* v_val_2058_; lean_object* v___x_2059_; lean_object* v_literal_2060_; 
v_val_2058_ = lean_ctor_get(v_literal_2057_, 0);
v___x_2059_ = lean_array_fget(v___y_2042_, v___x_2019_);
lean_dec_ref(v___y_2042_);
v_literal_2060_ = lean_ctor_get(v___x_2059_, 0);
lean_inc(v_literal_2060_);
if (lean_obj_tag(v_literal_2060_) == 1)
{
lean_object* v_val_2061_; lean_object* v___x_2063_; uint8_t v_isShared_2064_; uint8_t v_isSharedCheck_2076_; 
v_val_2061_ = lean_ctor_get(v_literal_2060_, 0);
v_isSharedCheck_2076_ = !lean_is_exclusive(v_literal_2060_);
if (v_isSharedCheck_2076_ == 0)
{
v___x_2063_ = v_literal_2060_;
v_isShared_2064_ = v_isSharedCheck_2076_;
goto v_resetjp_2062_;
}
else
{
lean_inc(v_val_2061_);
lean_dec(v_literal_2060_);
v___x_2063_ = lean_box(0);
v_isShared_2064_ = v_isSharedCheck_2076_;
goto v_resetjp_2062_;
}
v_resetjp_2062_:
{
lean_object* v___x_2065_; 
v___x_2065_ = lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(v_step_2008_, v_a_2009_, v_a_2010_, v_a_2011_, v_a_2012_, v_a_2013_, v_a_2014_);
if (lean_obj_tag(v___x_2065_) == 0)
{
lean_object* v_a_2066_; lean_object* v___f_2067_; lean_object* v___x_2068_; lean_object* v___f_2069_; lean_object* v___x_2070_; lean_object* v___x_2072_; 
v_a_2066_ = lean_ctor_get(v___x_2065_, 0);
lean_inc(v_a_2066_);
lean_dec_ref_known(v___x_2065_, 1);
lean_inc(v_val_2058_);
v___f_2067_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution___lam__2___boxed), 2, 1);
lean_closure_set(v___f_2067_, 0, v_val_2058_);
lean_inc_ref(v_unit_2016_);
v___x_2068_ = lp_vampireReplay_Vampire_Unit_varSorts(v_unit_2016_);
lean_inc_ref(v___x_2068_);
v___f_2069_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___lam__4___boxed), 22, 13);
lean_closure_set(v___f_2069_, 0, v___x_2027_);
lean_closure_set(v___f_2069_, 1, v___x_2068_);
lean_closure_set(v___f_2069_, 2, v_unit_2016_);
lean_closure_set(v___f_2069_, 3, v___x_2040_);
lean_closure_set(v___f_2069_, 4, v___x_2056_);
lean_closure_set(v___f_2069_, 5, v_fst_2029_);
lean_closure_set(v___f_2069_, 6, v_snd_2030_);
lean_closure_set(v___f_2069_, 7, v___x_2059_);
lean_closure_set(v___f_2069_, 8, v_val_2061_);
lean_closure_set(v___f_2069_, 9, v___x_2019_);
lean_closure_set(v___f_2069_, 10, v___x_2044_);
lean_closure_set(v___f_2069_, 11, v___f_2067_);
lean_closure_set(v___f_2069_, 12, v___f_2039_);
v___x_2070_ = lean_array_get_size(v___x_2068_);
lean_dec_ref(v___x_2068_);
if (v_isShared_2064_ == 0)
{
lean_ctor_set(v___x_2063_, 0, v___x_2070_);
v___x_2072_ = v___x_2063_;
goto v_reusejp_2071_;
}
else
{
lean_object* v_reuseFailAlloc_2075_; 
v_reuseFailAlloc_2075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2075_, 0, v___x_2070_);
v___x_2072_ = v_reuseFailAlloc_2075_;
goto v_reusejp_2071_;
}
v_reusejp_2071_:
{
uint8_t v___x_2073_; lean_object* v___x_2074_; 
v___x_2073_ = 0;
v___x_2074_ = lp_vampireReplay_Lean_Meta_forallBoundedTelescope___at___00Vampire_Reconstruct_relateLiterals_spec__6___redArg(v_a_2066_, v___x_2072_, v___f_2069_, v___x_2073_, v___x_2073_, v_a_2009_, v_a_2010_, v_a_2011_, v_a_2012_, v_a_2013_, v_a_2014_);
return v___x_2074_;
}
}
else
{
lean_del_object(v___x_2063_);
lean_dec(v_val_2061_);
lean_dec(v___x_2059_);
lean_dec(v___x_2056_);
lean_dec(v___x_2040_);
lean_dec(v_snd_2030_);
lean_dec(v_fst_2029_);
lean_dec_ref(v_unit_2016_);
return v___x_2065_;
}
}
}
else
{
lean_object* v___x_2077_; lean_object* v___x_2078_; 
lean_dec(v_literal_2060_);
lean_dec(v___x_2059_);
lean_dec(v___x_2056_);
lean_dec(v___x_2040_);
lean_dec(v_snd_2030_);
lean_dec(v_fst_2029_);
lean_dec_ref(v_unit_2016_);
lean_dec_ref(v_step_2008_);
v___x_2077_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__9, &lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__9_once, _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__9);
v___x_2078_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2077_, v_a_2011_, v_a_2012_, v_a_2013_, v_a_2014_);
return v___x_2078_;
}
}
else
{
lean_object* v___x_2079_; lean_object* v___x_2080_; 
lean_dec(v___x_2056_);
lean_dec_ref(v___y_2042_);
lean_dec(v___x_2040_);
lean_dec(v_snd_2030_);
lean_dec(v_fst_2029_);
lean_dec_ref(v_unit_2016_);
lean_dec_ref(v_step_2008_);
v___x_2079_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__11, &lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__11_once, _init_lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___closed__11);
v___x_2080_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2079_, v_a_2011_, v_a_2012_, v_a_2013_, v_a_2014_);
return v___x_2080_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring___boxed(lean_object* v_step_2093_, lean_object* v_a_2094_, lean_object* v_a_2095_, lean_object* v_a_2096_, lean_object* v_a_2097_, lean_object* v_a_2098_, lean_object* v_a_2099_, lean_object* v_a_2100_){
_start:
{
lean_object* v_res_2101_; 
v_res_2101_ = lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring(v_step_2093_, v_a_2094_, v_a_2095_, v_a_2096_, v_a_2097_, v_a_2098_, v_a_2099_);
lean_dec(v_a_2099_);
lean_dec_ref(v_a_2098_);
lean_dec(v_a_2097_);
lean_dec_ref(v_a_2096_);
lean_dec(v_a_2095_);
lean_dec_ref(v_a_2094_);
return v_res_2101_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_vampireReplay_VampireReplay_Reconstruct_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_vampireReplay_VampireReplay_Reconstruct_Rules_Resolution(uint8_t builtin) {
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
