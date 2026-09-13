// Lean compiler output
// Module: VampireReplay.Translate
// Imports: public import Init public meta import Init public import Lean
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
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Structure_0__Lean_Elab_Command_Structure_elabStructFieldDefaults_spec__0(size_t, size_t, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t l_Array_contains___at___00Lean_Meta_CheckAssignment_checkMVar_spec__14(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_string_mk(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
uint32_t lean_uint32_add(uint32_t, uint32_t);
lean_object* lean_string_data(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLogConfig_fromJson_spec__1_spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Server_Test_Cancel_mkTestTask_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getUserName___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lean_Name_getString_x21(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__7_spec__9_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getType___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabOmit_spec__3___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Expr_consumeMData(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Command_elabOmit_spec__7___redArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp___redArg(lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_zipIdx___redArg(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Tm_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Tm_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Tm_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Tm_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Tm_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Tm_var_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Tm_var_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Tm_app_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Tm_app_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_instInhabitedTm_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* lp_vampireReplay_Vampire_instInhabitedTm_default___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_instInhabitedTm_default___closed__0_value;
static const lean_ctor_object lp_vampireReplay_Vampire_instInhabitedTm_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_instInhabitedTm_default___closed__0_value)}};
static const lean_object* lp_vampireReplay_Vampire_instInhabitedTm_default___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_instInhabitedTm_default___closed__1_value;
LEAN_EXPORT const lean_object* lp_vampireReplay_Vampire_instInhabitedTm_default = (const lean_object*)&lp_vampireReplay_Vampire_instInhabitedTm_default___closed__1_value;
LEAN_EXPORT const lean_object* lp_vampireReplay_Vampire_instInhabitedTm = (const lean_object*)&lp_vampireReplay_Vampire_instInhabitedTm_default___closed__1_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_top_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_top_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_bot_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_bot_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_atom_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_atom_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_eq_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_eq_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_neg_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_neg_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_and_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_and_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_or_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_or_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_imp_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_imp_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_iff_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_iff_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_all_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_all_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_ex_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_ex_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_instInhabitedFm_default;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_instInhabitedFm;
static const lean_string_object lp_vampireReplay_Vampire_Tm_render___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* lp_vampireReplay_Vampire_Tm_render___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Tm_render___closed__0_value;
static const lean_string_object lp_vampireReplay_Vampire_Tm_render___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* lp_vampireReplay_Vampire_Tm_render___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Tm_render___closed__1_value;
static const lean_string_object lp_vampireReplay_Vampire_Tm_render___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* lp_vampireReplay_Vampire_Tm_render___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Tm_render___closed__2_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Tm_render(lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_List_mapTR_loop___at___00Vampire_Tm_render_spec__0(lean_object*, lean_object*);
static const lean_closure_object lp_vampireReplay_Vampire_Tm_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_vampireReplay_Vampire_Tm_render, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_vampireReplay_Vampire_Tm_instToString___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Tm_instToString___closed__0_value;
LEAN_EXPORT const lean_object* lp_vampireReplay_Vampire_Tm_instToString = (const lean_object*)&lp_vampireReplay_Vampire_Tm_instToString___closed__0_value;
static const lean_string_object lp_vampireReplay_List_mapTR_loop___at___00__private_VampireReplay_Translate_0__Vampire_Fm_renderVars_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* lp_vampireReplay_List_mapTR_loop___at___00__private_VampireReplay_Translate_0__Vampire_Fm_renderVars_spec__0___closed__0 = (const lean_object*)&lp_vampireReplay_List_mapTR_loop___at___00__private_VampireReplay_Translate_0__Vampire_Fm_renderVars_spec__0___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay_List_mapTR_loop___at___00__private_VampireReplay_Translate_0__Vampire_Fm_renderVars_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Translate_0__Vampire_Fm_renderVars(lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Fm_render_junction___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "$true"};
static const lean_object* lp_vampireReplay_Vampire_Fm_render_junction___closed__3 = (const lean_object*)&lp_vampireReplay_Vampire_Fm_render_junction___closed__3_value;
static const lean_string_object lp_vampireReplay_Vampire_Fm_render_junction___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "$false"};
static const lean_object* lp_vampireReplay_Vampire_Fm_render_junction___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Fm_render_junction___closed__2_value;
static const lean_string_object lp_vampireReplay_Vampire_Fm_render_junction___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* lp_vampireReplay_Vampire_Fm_render_junction___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Fm_render_junction___closed__0_value;
static const lean_string_object lp_vampireReplay_Vampire_Fm_render___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "!="};
static const lean_object* lp_vampireReplay_Vampire_Fm_render___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Fm_render___closed__0_value;
static const lean_string_object lp_vampireReplay_Vampire_Fm_render___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "="};
static const lean_object* lp_vampireReplay_Vampire_Fm_render___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Fm_render___closed__1_value;
static const lean_string_object lp_vampireReplay_Vampire_Fm_render___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "~"};
static const lean_object* lp_vampireReplay_Vampire_Fm_render___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Fm_render___closed__2_value;
static const lean_string_object lp_vampireReplay_Vampire_Fm_render_junction___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "&"};
static const lean_object* lp_vampireReplay_Vampire_Fm_render_junction___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Fm_render_junction___closed__1_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_render_junction(lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Fm_render___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "|"};
static const lean_object* lp_vampireReplay_Vampire_Fm_render___closed__3 = (const lean_object*)&lp_vampireReplay_Vampire_Fm_render___closed__3_value;
static const lean_string_object lp_vampireReplay_Vampire_Fm_render___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " => "};
static const lean_object* lp_vampireReplay_Vampire_Fm_render___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Fm_render___closed__4_value;
static const lean_string_object lp_vampireReplay_Vampire_Fm_render___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " <=> "};
static const lean_object* lp_vampireReplay_Vampire_Fm_render___closed__5 = (const lean_object*)&lp_vampireReplay_Vampire_Fm_render___closed__5_value;
static const lean_string_object lp_vampireReplay_Vampire_Fm_render___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "(! ["};
static const lean_object* lp_vampireReplay_Vampire_Fm_render___closed__6 = (const lean_object*)&lp_vampireReplay_Vampire_Fm_render___closed__6_value;
static const lean_string_object lp_vampireReplay_Vampire_Fm_render___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "] : "};
static const lean_object* lp_vampireReplay_Vampire_Fm_render___closed__7 = (const lean_object*)&lp_vampireReplay_Vampire_Fm_render___closed__7_value;
static const lean_string_object lp_vampireReplay_Vampire_Fm_render___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "(\? ["};
static const lean_object* lp_vampireReplay_Vampire_Fm_render___closed__8 = (const lean_object*)&lp_vampireReplay_Vampire_Fm_render___closed__8_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_render(lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_List_mapTR_loop___at___00Vampire_Fm_render_junction_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_render_junction___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_vampireReplay_Vampire_Fm_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_vampireReplay_Vampire_Fm_render, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_vampireReplay_Vampire_Fm_instToString___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Fm_instToString___closed__0_value;
LEAN_EXPORT const lean_object* lp_vampireReplay_Vampire_Fm_instToString = (const lean_object*)&lp_vampireReplay_Vampire_Fm_instToString___closed__0_value;
static const lean_array_object lp_vampireReplay_Vampire_instInhabitedDeclarations_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_vampireReplay_Vampire_instInhabitedDeclarations_default___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_instInhabitedDeclarations_default___closed__0_value;
static const lean_ctor_object lp_vampireReplay_Vampire_instInhabitedDeclarations_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_instInhabitedDeclarations_default___closed__0_value),((lean_object*)&lp_vampireReplay_Vampire_instInhabitedDeclarations_default___closed__0_value)}};
static const lean_object* lp_vampireReplay_Vampire_instInhabitedDeclarations_default___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_instInhabitedDeclarations_default___closed__1_value;
LEAN_EXPORT const lean_object* lp_vampireReplay_Vampire_instInhabitedDeclarations_default = (const lean_object*)&lp_vampireReplay_Vampire_instInhabitedDeclarations_default___closed__1_value;
LEAN_EXPORT const lean_object* lp_vampireReplay_Vampire_instInhabitedDeclarations = (const lean_object*)&lp_vampireReplay_Vampire_instInhabitedDeclarations_default___closed__1_value;
static lean_once_cell_t lp_vampireReplay_Vampire_instInhabitedState_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_instInhabitedState_default___closed__0;
static lean_once_cell_t lp_vampireReplay_Vampire_instInhabitedState_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_instInhabitedState_default___closed__1;
static lean_once_cell_t lp_vampireReplay_Vampire_instInhabitedState_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_instInhabitedState_default___closed__2;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_instInhabitedState_default;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_instInhabitedState;
LEAN_EXPORT lean_object* lp_vampireReplay_List_dropWhile___at___00Vampire_sanitize_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_List_dropWhile___at___00Vampire_sanitize_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_List_mapTR_loop___at___00Vampire_sanitize_spec__1(lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_sanitize___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* lp_vampireReplay_Vampire_sanitize___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_sanitize___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_sanitize___boxed__const__1;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_sanitize(lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_sanitize___boxed(lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_freshName_attempt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* lp_vampireReplay_Vampire_freshName_attempt___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_freshName_attempt___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_freshName_attempt(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_freshName_attempt___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_freshName___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_freshName___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_freshName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_freshName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_arithmeticSort___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* lp_vampireReplay_Vampire_arithmeticSort___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_arithmeticSort___closed__0_value;
static const lean_ctor_object lp_vampireReplay_Vampire_arithmeticSort___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_arithmeticSort___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_object* lp_vampireReplay_Vampire_arithmeticSort___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_arithmeticSort___closed__1_value;
static const lean_string_object lp_vampireReplay_Vampire_arithmeticSort___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Rat"};
static const lean_object* lp_vampireReplay_Vampire_arithmeticSort___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_arithmeticSort___closed__2_value;
static const lean_ctor_object lp_vampireReplay_Vampire_arithmeticSort___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_arithmeticSort___closed__2_value),LEAN_SCALAR_PTR_LITERAL(231, 55, 105, 214, 206, 30, 120, 51)}};
static const lean_object* lp_vampireReplay_Vampire_arithmeticSort___closed__3 = (const lean_object*)&lp_vampireReplay_Vampire_arithmeticSort___closed__3_value;
static const lean_string_object lp_vampireReplay_Vampire_arithmeticSort___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Real"};
static const lean_object* lp_vampireReplay_Vampire_arithmeticSort___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_arithmeticSort___closed__4_value;
static const lean_ctor_object lp_vampireReplay_Vampire_arithmeticSort___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_arithmeticSort___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 97, 13, 185, 175, 95, 64, 15)}};
static const lean_object* lp_vampireReplay_Vampire_arithmeticSort___closed__5 = (const lean_object*)&lp_vampireReplay_Vampire_arithmeticSort___closed__5_value;
static const lean_string_object lp_vampireReplay_Vampire_arithmeticSort___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "$real"};
static const lean_object* lp_vampireReplay_Vampire_arithmeticSort___closed__6 = (const lean_object*)&lp_vampireReplay_Vampire_arithmeticSort___closed__6_value;
static const lean_ctor_object lp_vampireReplay_Vampire_arithmeticSort___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_arithmeticSort___closed__6_value)}};
static const lean_object* lp_vampireReplay_Vampire_arithmeticSort___closed__7 = (const lean_object*)&lp_vampireReplay_Vampire_arithmeticSort___closed__7_value;
static const lean_string_object lp_vampireReplay_Vampire_arithmeticSort___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "$rat"};
static const lean_object* lp_vampireReplay_Vampire_arithmeticSort___closed__8 = (const lean_object*)&lp_vampireReplay_Vampire_arithmeticSort___closed__8_value;
static const lean_ctor_object lp_vampireReplay_Vampire_arithmeticSort___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_arithmeticSort___closed__8_value)}};
static const lean_object* lp_vampireReplay_Vampire_arithmeticSort___closed__9 = (const lean_object*)&lp_vampireReplay_Vampire_arithmeticSort___closed__9_value;
static const lean_string_object lp_vampireReplay_Vampire_arithmeticSort___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "$int"};
static const lean_object* lp_vampireReplay_Vampire_arithmeticSort___closed__10 = (const lean_object*)&lp_vampireReplay_Vampire_arithmeticSort___closed__10_value;
static const lean_ctor_object lp_vampireReplay_Vampire_arithmeticSort___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_arithmeticSort___closed__10_value)}};
static const lean_object* lp_vampireReplay_Vampire_arithmeticSort___closed__11 = (const lean_object*)&lp_vampireReplay_Vampire_arithmeticSort___closed__11_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_arithmeticSort(lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_arithmeticSort___boxed(lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_numeral_x3f_numeralNat_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "OfNat"};
static const lean_object* lp_vampireReplay_Vampire_numeral_x3f_numeralNat_x3f___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_numeral_x3f_numeralNat_x3f___closed__0_value;
static const lean_string_object lp_vampireReplay_Vampire_numeral_x3f_numeralNat_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* lp_vampireReplay_Vampire_numeral_x3f_numeralNat_x3f___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_numeral_x3f_numeralNat_x3f___closed__1_value;
static const lean_ctor_object lp_vampireReplay_Vampire_numeral_x3f_numeralNat_x3f___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_numeral_x3f_numeralNat_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(135, 241, 166, 108, 243, 216, 193, 244)}};
static const lean_ctor_object lp_vampireReplay_Vampire_numeral_x3f_numeralNat_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_numeral_x3f_numeralNat_x3f___closed__2_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_numeral_x3f_numeralNat_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(2, 108, 58, 34, 100, 49, 50, 216)}};
static const lean_object* lp_vampireReplay_Vampire_numeral_x3f_numeralNat_x3f___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_numeral_x3f_numeralNat_x3f___closed__2_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_numeral_x3f_numeralNat_x3f(lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_numeral_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Neg"};
static const lean_object* lp_vampireReplay_Vampire_numeral_x3f___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_numeral_x3f___closed__0_value;
static const lean_string_object lp_vampireReplay_Vampire_numeral_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "neg"};
static const lean_object* lp_vampireReplay_Vampire_numeral_x3f___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_numeral_x3f___closed__1_value;
static const lean_ctor_object lp_vampireReplay_Vampire_numeral_x3f___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_numeral_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(94, 4, 109, 108, 64, 81, 153, 133)}};
static const lean_ctor_object lp_vampireReplay_Vampire_numeral_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_numeral_x3f___closed__2_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_numeral_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(105, 26, 70, 221, 245, 238, 127, 238)}};
static const lean_object* lp_vampireReplay_Vampire_numeral_x3f___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_numeral_x3f___closed__2_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_numeral_x3f(lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_renderNumeral___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ".0"};
static const lean_object* lp_vampireReplay_Vampire_renderNumeral___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_renderNumeral___closed__0_value;
static const lean_string_object lp_vampireReplay_Vampire_renderNumeral___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "/1"};
static const lean_object* lp_vampireReplay_Vampire_renderNumeral___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_renderNumeral___closed__1_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_renderNumeral(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_renderNumeral___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_vampireReplay_Vampire_isPropType(lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_isPropType___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_isSortType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_isSortType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_sortName___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "tff("};
static const lean_object* lp_vampireReplay_Vampire_sortName___redArg___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_sortName___redArg___closed__0_value;
static const lean_string_object lp_vampireReplay_Vampire_sortName___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "_type, type, "};
static const lean_object* lp_vampireReplay_Vampire_sortName___redArg___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_sortName___redArg___closed__1_value;
static const lean_string_object lp_vampireReplay_Vampire_sortName___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = ": $tType)."};
static const lean_object* lp_vampireReplay_Vampire_sortName___redArg___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_sortName___redArg___closed__2_value;
static const lean_string_object lp_vampireReplay_Vampire_sortName___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "sort"};
static const lean_object* lp_vampireReplay_Vampire_sortName___redArg___closed__3 = (const lean_object*)&lp_vampireReplay_Vampire_sortName___redArg___closed__3_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_sortName___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_sortName___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_sortName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_sortName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_forallTelescopeReducing___at___00Vampire_signatureOf_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_forallTelescopeReducing___at___00Vampire_signatureOf_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_forallTelescopeReducing___at___00Vampire_signatureOf_spec__3___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_forallTelescopeReducing___at___00Vampire_signatureOf_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_forallTelescopeReducing___at___00Vampire_signatureOf_spec__3(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_forallTelescopeReducing___at___00Vampire_signatureOf_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_vampireReplay___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Vampire_signatureOf_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Vampire_signatureOf_spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_signatureOf_spec__1_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_signatureOf_spec__1_spec__1___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_signatureOf_spec__1_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_signatureOf_spec__1_spec__1___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_signatureOf_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_signatureOf_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_signatureOf_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_signatureOf_spec__2___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_signatureOf_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_vampireReplay_Vampire_signatureOf___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_vampireReplay_Vampire_signatureOf___lam__0___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_signatureOf___lam__0___closed__0_value;
static const lean_ctor_object lp_vampireReplay_Vampire_signatureOf___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_signatureOf___lam__0___closed__0_value)}};
static const lean_object* lp_vampireReplay_Vampire_signatureOf___lam__0___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_signatureOf___lam__0___closed__1_value;
static const lean_string_object lp_vampireReplay_Vampire_signatureOf___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "$o"};
static const lean_object* lp_vampireReplay_Vampire_signatureOf___lam__0___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_signatureOf___lam__0___closed__2_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_signatureOf___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_signatureOf___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_vampireReplay_Vampire_signatureOf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_vampireReplay_Vampire_signatureOf___lam__0___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_vampireReplay_Vampire_signatureOf___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_signatureOf___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_signatureOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_signatureOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_signatureOf_spec__2(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_signatureOf_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_signatureOf_spec__1_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_signatureOf_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_symbolName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "_decl, type, "};
static const lean_object* lp_vampireReplay_Vampire_symbolName___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_symbolName___closed__0_value;
static const lean_string_object lp_vampireReplay_Vampire_symbolName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ")."};
static const lean_object* lp_vampireReplay_Vampire_symbolName___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_symbolName___closed__1_value;
static const lean_string_object lp_vampireReplay_Vampire_symbolName___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " * "};
static const lean_object* lp_vampireReplay_Vampire_symbolName___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_symbolName___closed__2_value;
static const lean_string_object lp_vampireReplay_Vampire_symbolName___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = ") > "};
static const lean_object* lp_vampireReplay_Vampire_symbolName___closed__3 = (const lean_object*)&lp_vampireReplay_Vampire_symbolName___closed__3_value;
static const lean_string_object lp_vampireReplay_Vampire_symbolName___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " > "};
static const lean_object* lp_vampireReplay_Vampire_symbolName___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_symbolName___closed__4_value;
static const lean_string_object lp_vampireReplay_Vampire_symbolName___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "f"};
static const lean_object* lp_vampireReplay_Vampire_symbolName___closed__5 = (const lean_object*)&lp_vampireReplay_Vampire_symbolName___closed__5_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_symbolName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_symbolName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_bindVar___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_bindVar___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_bindVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_bindVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_castInto___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "$to_int"};
static const lean_object* lp_vampireReplay_Vampire_castInto___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_castInto___closed__0_value;
static const lean_string_object lp_vampireReplay_Vampire_castInto___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "$to_rat"};
static const lean_object* lp_vampireReplay_Vampire_castInto___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_castInto___closed__1_value;
static const lean_string_object lp_vampireReplay_Vampire_castInto___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "$to_real"};
static const lean_object* lp_vampireReplay_Vampire_castInto___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_castInto___closed__2_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_castInto(lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_castInto___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_junctionArgs_parts(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_junctionArgs_parts___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_translateTerm_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_translateTerm_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_throwError___at___00Vampire_translateTerm_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_throwError___at___00Vampire_translateTerm_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_translateTerm_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_translateTerm_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__0_value;
static const lean_string_object lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cast"};
static const lean_object* lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__2_value;
static const lean_string_object lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__1_value;
static const lean_ctor_object lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__3_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(19, 237, 167, 212, 100, 179, 19, 112)}};
static const lean_object* lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__3 = (const lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__3_value;
static const lean_ctor_object lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_arithmeticSort___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__4_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(181, 4, 252, 84, 28, 16, 24, 6)}};
static const lean_object* lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__4_value;
static const lean_string_object lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMod"};
static const lean_object* lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__6 = (const lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__6_value;
static const lean_string_object lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMod"};
static const lean_object* lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__5 = (const lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__5_value;
static const lean_ctor_object lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__5_value),LEAN_SCALAR_PTR_LITERAL(93, 4, 3, 35, 188, 254, 191, 190)}};
static const lean_ctor_object lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__7_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__6_value),LEAN_SCALAR_PTR_LITERAL(120, 199, 142, 238, 9, 44, 94, 134)}};
static const lean_object* lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__7 = (const lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__7_value;
static const lean_string_object lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hDiv"};
static const lean_object* lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__9 = (const lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__9_value;
static const lean_string_object lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HDiv"};
static const lean_object* lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__8 = (const lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__8_value;
static const lean_ctor_object lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__8_value),LEAN_SCALAR_PTR_LITERAL(74, 223, 78, 88, 255, 236, 144, 164)}};
static const lean_ctor_object lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__10_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__9_value),LEAN_SCALAR_PTR_LITERAL(26, 183, 188, 240, 156, 118, 170, 84)}};
static const lean_object* lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__10 = (const lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__10_value;
static const lean_string_object lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMul"};
static const lean_object* lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__12 = (const lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__12_value;
static const lean_string_object lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMul"};
static const lean_object* lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__11 = (const lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__11_value;
static const lean_ctor_object lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__11_value),LEAN_SCALAR_PTR_LITERAL(254, 113, 255, 140, 142, 9, 169, 40)}};
static const lean_ctor_object lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__13_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__12_value),LEAN_SCALAR_PTR_LITERAL(248, 227, 200, 215, 229, 255, 92, 22)}};
static const lean_object* lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__13 = (const lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__13_value;
static const lean_string_object lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hSub"};
static const lean_object* lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__15 = (const lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__15_value;
static const lean_string_object lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HSub"};
static const lean_object* lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__14 = (const lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__14_value;
static const lean_ctor_object lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__14_value),LEAN_SCALAR_PTR_LITERAL(121, 130, 45, 212, 110, 237, 236, 233)}};
static const lean_ctor_object lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__16_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__15_value),LEAN_SCALAR_PTR_LITERAL(231, 253, 204, 163, 168, 77, 27, 58)}};
static const lean_object* lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__16 = (const lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__16_value;
static const lean_string_object lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hAdd"};
static const lean_object* lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__18 = (const lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__18_value;
static const lean_string_object lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HAdd"};
static const lean_object* lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__17 = (const lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__17_value;
static const lean_ctor_object lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__17_value),LEAN_SCALAR_PTR_LITERAL(221, 239, 47, 196, 170, 166, 59, 144)}};
static const lean_ctor_object lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__19_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__18_value),LEAN_SCALAR_PTR_LITERAL(134, 172, 115, 219, 189, 252, 56, 148)}};
static const lean_object* lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__19 = (const lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__19_value;
static const lean_string_object lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "$sum"};
static const lean_object* lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__20 = (const lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__20_value;
static const lean_string_object lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "$difference"};
static const lean_object* lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__21 = (const lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__21_value;
static const lean_string_object lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "$product"};
static const lean_object* lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__22 = (const lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__22_value;
static const lean_string_object lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "$quotient"};
static const lean_object* lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__23 = (const lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__23_value;
static const lean_string_object lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "$quotient_e"};
static const lean_object* lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__24 = (const lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__24_value;
static const lean_string_object lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "$remainder_e"};
static const lean_object* lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__25 = (const lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__25_value;
static const lean_string_object lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "$uminus"};
static const lean_object* lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__26 = (const lean_object*)&lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__26_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_arithmeticTerm_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_translateTerm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "cannot translate "};
static const lean_object* lp_vampireReplay_Vampire_translateTerm___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_translateTerm___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_translateTerm___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_translateTerm___closed__1;
static const lean_string_object lp_vampireReplay_Vampire_translateTerm___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " of type "};
static const lean_object* lp_vampireReplay_Vampire_translateTerm___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_translateTerm___closed__2_value;
static lean_once_cell_t lp_vampireReplay_Vampire_translateTerm___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_translateTerm___closed__3;
static const lean_string_object lp_vampireReplay_Vampire_translateTerm___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = " to TPTP"};
static const lean_object* lp_vampireReplay_Vampire_translateTerm___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_translateTerm___closed__4_value;
static lean_once_cell_t lp_vampireReplay_Vampire_translateTerm___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_translateTerm___closed__5;
static const lean_string_object lp_vampireReplay_Vampire_translateTerm___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "cannot translate application of "};
static const lean_object* lp_vampireReplay_Vampire_translateTerm___closed__6 = (const lean_object*)&lp_vampireReplay_Vampire_translateTerm___closed__6_value;
static lean_once_cell_t lp_vampireReplay_Vampire_translateTerm___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_translateTerm___closed__7;
static lean_once_cell_t lp_vampireReplay_Vampire_translateTerm___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_translateTerm___closed__8;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_translateTerm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_translateTerm_spec__2(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_translateTerm_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_arithmeticTerm_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_translateTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_translateTerm_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_translateTerm_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_throwError___at___00Vampire_translateTerm_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_throwError___at___00Vampire_translateTerm_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_translateTerm_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_translateTerm_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_arithmeticAtom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_arithmeticAtom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_translateFormula_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_translateFormula_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_lambdaTelescope___at___00Vampire_translateFormula_spec__4___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_lambdaTelescope___at___00Vampire_translateFormula_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Vampire_translateFormula_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Vampire_translateFormula_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Vampire_translateFormula_spec__3___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Vampire_translateFormula_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_translateFormula___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_translateFormula___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_translateFormula___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_translateFormula___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* lp_vampireReplay_Vampire_translateFormula___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__0_value;
static const lean_ctor_object lp_vampireReplay_Vampire_translateFormula___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__0_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_object* lp_vampireReplay_Vampire_translateFormula___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__1_value;
static const lean_string_object lp_vampireReplay_Vampire_translateFormula___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* lp_vampireReplay_Vampire_translateFormula___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__2_value;
static const lean_ctor_object lp_vampireReplay_Vampire_translateFormula___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_object* lp_vampireReplay_Vampire_translateFormula___closed__3 = (const lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__3_value;
static const lean_string_object lp_vampireReplay_Vampire_translateFormula___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Not"};
static const lean_object* lp_vampireReplay_Vampire_translateFormula___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__4_value;
static const lean_ctor_object lp_vampireReplay_Vampire_translateFormula___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__4_value),LEAN_SCALAR_PTR_LITERAL(185, 11, 203, 55, 27, 192, 137, 230)}};
static const lean_object* lp_vampireReplay_Vampire_translateFormula___closed__5 = (const lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__5_value;
static const lean_string_object lp_vampireReplay_Vampire_translateFormula___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Exists"};
static const lean_object* lp_vampireReplay_Vampire_translateFormula___closed__6 = (const lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__6_value;
static const lean_ctor_object lp_vampireReplay_Vampire_translateFormula___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__6_value),LEAN_SCALAR_PTR_LITERAL(65, 29, 48, 135, 199, 176, 149, 70)}};
static const lean_object* lp_vampireReplay_Vampire_translateFormula___closed__7 = (const lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__7_value;
static const lean_string_object lp_vampireReplay_Vampire_translateFormula___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Iff"};
static const lean_object* lp_vampireReplay_Vampire_translateFormula___closed__8 = (const lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__8_value;
static const lean_ctor_object lp_vampireReplay_Vampire_translateFormula___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__8_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_object* lp_vampireReplay_Vampire_translateFormula___closed__9 = (const lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__9_value;
static const lean_string_object lp_vampireReplay_Vampire_translateFormula___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Or"};
static const lean_object* lp_vampireReplay_Vampire_translateFormula___closed__10 = (const lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__10_value;
static const lean_ctor_object lp_vampireReplay_Vampire_translateFormula___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__10_value),LEAN_SCALAR_PTR_LITERAL(34, 237, 162, 225, 217, 98, 205, 196)}};
static const lean_object* lp_vampireReplay_Vampire_translateFormula___closed__11 = (const lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__11_value;
static const lean_string_object lp_vampireReplay_Vampire_translateFormula___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "And"};
static const lean_object* lp_vampireReplay_Vampire_translateFormula___closed__12 = (const lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__12_value;
static const lean_ctor_object lp_vampireReplay_Vampire_translateFormula___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__12_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_object* lp_vampireReplay_Vampire_translateFormula___closed__13 = (const lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__13_value;
static const lean_string_object lp_vampireReplay_Vampire_translateFormula___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Ne"};
static const lean_object* lp_vampireReplay_Vampire_translateFormula___closed__14 = (const lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__14_value;
static const lean_ctor_object lp_vampireReplay_Vampire_translateFormula___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__14_value),LEAN_SCALAR_PTR_LITERAL(161, 247, 70, 70, 118, 145, 235, 92)}};
static const lean_object* lp_vampireReplay_Vampire_translateFormula___closed__15 = (const lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__15_value;
static const lean_string_object lp_vampireReplay_Vampire_translateFormula___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* lp_vampireReplay_Vampire_translateFormula___closed__16 = (const lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__16_value;
static const lean_ctor_object lp_vampireReplay_Vampire_translateFormula___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__16_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* lp_vampireReplay_Vampire_translateFormula___closed__17 = (const lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__17_value;
static const lean_string_object lp_vampireReplay_Vampire_translateFormula___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ge"};
static const lean_object* lp_vampireReplay_Vampire_translateFormula___closed__19 = (const lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__19_value;
static const lean_string_object lp_vampireReplay_Vampire_translateFormula___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "GE"};
static const lean_object* lp_vampireReplay_Vampire_translateFormula___closed__18 = (const lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__18_value;
static const lean_ctor_object lp_vampireReplay_Vampire_translateFormula___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__18_value),LEAN_SCALAR_PTR_LITERAL(74, 169, 4, 72, 62, 21, 91, 24)}};
static const lean_ctor_object lp_vampireReplay_Vampire_translateFormula___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__20_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__19_value),LEAN_SCALAR_PTR_LITERAL(71, 88, 92, 156, 129, 215, 23, 77)}};
static const lean_object* lp_vampireReplay_Vampire_translateFormula___closed__20 = (const lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__20_value;
static const lean_string_object lp_vampireReplay_Vampire_translateFormula___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "gt"};
static const lean_object* lp_vampireReplay_Vampire_translateFormula___closed__22 = (const lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__22_value;
static const lean_string_object lp_vampireReplay_Vampire_translateFormula___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "GT"};
static const lean_object* lp_vampireReplay_Vampire_translateFormula___closed__21 = (const lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__21_value;
static const lean_ctor_object lp_vampireReplay_Vampire_translateFormula___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__21_value),LEAN_SCALAR_PTR_LITERAL(240, 16, 15, 58, 66, 186, 138, 31)}};
static const lean_ctor_object lp_vampireReplay_Vampire_translateFormula___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__23_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__22_value),LEAN_SCALAR_PTR_LITERAL(239, 75, 137, 103, 59, 22, 209, 130)}};
static const lean_object* lp_vampireReplay_Vampire_translateFormula___closed__23 = (const lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__23_value;
static const lean_string_object lp_vampireReplay_Vampire_translateFormula___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "le"};
static const lean_object* lp_vampireReplay_Vampire_translateFormula___closed__25 = (const lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__25_value;
static const lean_string_object lp_vampireReplay_Vampire_translateFormula___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "LE"};
static const lean_object* lp_vampireReplay_Vampire_translateFormula___closed__24 = (const lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__24_value;
static const lean_ctor_object lp_vampireReplay_Vampire_translateFormula___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__24_value),LEAN_SCALAR_PTR_LITERAL(216, 149, 183, 186, 191, 145, 216, 115)}};
static const lean_ctor_object lp_vampireReplay_Vampire_translateFormula___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__26_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__25_value),LEAN_SCALAR_PTR_LITERAL(109, 14, 90, 172, 72, 170, 136, 101)}};
static const lean_object* lp_vampireReplay_Vampire_translateFormula___closed__26 = (const lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__26_value;
static const lean_string_object lp_vampireReplay_Vampire_translateFormula___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "lt"};
static const lean_object* lp_vampireReplay_Vampire_translateFormula___closed__28 = (const lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__28_value;
static const lean_string_object lp_vampireReplay_Vampire_translateFormula___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "LT"};
static const lean_object* lp_vampireReplay_Vampire_translateFormula___closed__27 = (const lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__27_value;
static const lean_ctor_object lp_vampireReplay_Vampire_translateFormula___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__27_value),LEAN_SCALAR_PTR_LITERAL(71, 235, 154, 184, 62, 135, 30, 248)}};
static const lean_ctor_object lp_vampireReplay_Vampire_translateFormula___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__29_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__28_value),LEAN_SCALAR_PTR_LITERAL(54, 235, 251, 9, 4, 74, 57, 164)}};
static const lean_object* lp_vampireReplay_Vampire_translateFormula___closed__29 = (const lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__29_value;
static const lean_string_object lp_vampireReplay_Vampire_translateFormula___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "$less"};
static const lean_object* lp_vampireReplay_Vampire_translateFormula___closed__30 = (const lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__30_value;
static const lean_string_object lp_vampireReplay_Vampire_translateFormula___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "$lesseq"};
static const lean_object* lp_vampireReplay_Vampire_translateFormula___closed__31 = (const lean_object*)&lp_vampireReplay_Vampire_translateFormula___closed__31_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_junctionArgs_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_junctionArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_vampireReplay_Vampire_translateFormula___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_vampireReplay_Vampire_translateFormula___lam__2___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_translateFormula___lam__2___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_translateFormula___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_translateFormula___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_translateFormula(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_translateFormula___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_junctionArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_junctionArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_translateFormula___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Vampire_translateFormula_spec__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Vampire_translateFormula_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_lambdaTelescope___at___00Vampire_translateFormula_spec__4(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_lambdaTelescope___at___00Vampire_translateFormula_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_translateFormula_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_translateFormula_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Role_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Role_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Role_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Role_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Role_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Role_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Role_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Role_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Role_axiom_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Role_axiom_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Role_axiom_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Role_axiom_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Role_negatedConjecture_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Role_negatedConjecture_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Role_negatedConjecture_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Role_negatedConjecture_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_vampireReplay_Vampire_instInhabitedRole_default;
LEAN_EXPORT uint8_t lp_vampireReplay_Vampire_instInhabitedRole;
static const lean_string_object lp_vampireReplay_Vampire_instReprRole_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Vampire.Role.axiom"};
static const lean_object* lp_vampireReplay_Vampire_instReprRole_repr___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_instReprRole_repr___closed__0_value;
static const lean_ctor_object lp_vampireReplay_Vampire_instReprRole_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_instReprRole_repr___closed__0_value)}};
static const lean_object* lp_vampireReplay_Vampire_instReprRole_repr___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_instReprRole_repr___closed__1_value;
static const lean_string_object lp_vampireReplay_Vampire_instReprRole_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Vampire.Role.negatedConjecture"};
static const lean_object* lp_vampireReplay_Vampire_instReprRole_repr___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_instReprRole_repr___closed__2_value;
static const lean_ctor_object lp_vampireReplay_Vampire_instReprRole_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_instReprRole_repr___closed__2_value)}};
static const lean_object* lp_vampireReplay_Vampire_instReprRole_repr___closed__3 = (const lean_object*)&lp_vampireReplay_Vampire_instReprRole_repr___closed__3_value;
static lean_once_cell_t lp_vampireReplay_Vampire_instReprRole_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_instReprRole_repr___closed__4;
static lean_once_cell_t lp_vampireReplay_Vampire_instReprRole_repr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_instReprRole_repr___closed__5;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_instReprRole_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_instReprRole_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_vampireReplay_Vampire_instReprRole___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_vampireReplay_Vampire_instReprRole_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_vampireReplay_Vampire_instReprRole___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_instReprRole___closed__0_value;
LEAN_EXPORT const lean_object* lp_vampireReplay_Vampire_instReprRole = (const lean_object*)&lp_vampireReplay_Vampire_instReprRole___closed__0_value;
LEAN_EXPORT uint8_t lp_vampireReplay_Vampire_instBEqRole_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_instBEqRole_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_vampireReplay_Vampire_instBEqRole___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_vampireReplay_Vampire_instBEqRole_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_vampireReplay_Vampire_instBEqRole___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_instBEqRole___closed__0_value;
LEAN_EXPORT const lean_object* lp_vampireReplay_Vampire_instBEqRole = (const lean_object*)&lp_vampireReplay_Vampire_instBEqRole___closed__0_value;
static const lean_string_object lp_vampireReplay_Vampire_Role_render___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "axiom"};
static const lean_object* lp_vampireReplay_Vampire_Role_render___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Role_render___closed__0_value;
static const lean_string_object lp_vampireReplay_Vampire_Role_render___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "negated_conjecture"};
static const lean_object* lp_vampireReplay_Vampire_Role_render___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Role_render___closed__1_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Role_render(uint8_t);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Role_render___boxed(lean_object*);
static lean_once_cell_t lp_vampireReplay_Vampire_instInhabitedSymbols_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_instInhabitedSymbols_default___closed__0;
static lean_once_cell_t lp_vampireReplay_Vampire_instInhabitedSymbols_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_instInhabitedSymbols_default___closed__1;
static lean_once_cell_t lp_vampireReplay_Vampire_instInhabitedSymbols_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_instInhabitedSymbols_default___closed__2;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_instInhabitedSymbols_default;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_instInhabitedSymbols;
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_AssocList_foldlM___at___00Vampire_problemOf_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_problemOf_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_problemOf_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_problemOf___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_problemOf_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_problemOf_spec__3___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_problemOf_spec__3___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_problemOf_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_problemOf_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_problemOf_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "tff(h"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_problemOf_spec__2___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_problemOf_spec__2___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_problemOf_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_problemOf_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_problemOf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* lp_vampireReplay_Vampire_problemOf___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_problemOf___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_problemOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_problemOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Tm_ctorIdx(lean_object* v_x_1_){
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
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Tm_ctorIdx___boxed(lean_object* v_x_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = lp_vampireReplay_Vampire_Tm_ctorIdx(v_x_4_);
lean_dec_ref(v_x_4_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Tm_ctorElim___redArg(lean_object* v_t_6_, lean_object* v_k_7_){
_start:
{
if (lean_obj_tag(v_t_6_) == 0)
{
lean_object* v_name_8_; lean_object* v___x_9_; 
v_name_8_ = lean_ctor_get(v_t_6_, 0);
lean_inc_ref(v_name_8_);
lean_dec_ref_known(v_t_6_, 1);
v___x_9_ = lean_apply_1(v_k_7_, v_name_8_);
return v___x_9_;
}
else
{
lean_object* v_fn_10_; lean_object* v_args_11_; lean_object* v___x_12_; 
v_fn_10_ = lean_ctor_get(v_t_6_, 0);
lean_inc_ref(v_fn_10_);
v_args_11_ = lean_ctor_get(v_t_6_, 1);
lean_inc_ref(v_args_11_);
lean_dec_ref_known(v_t_6_, 2);
v___x_12_ = lean_apply_2(v_k_7_, v_fn_10_, v_args_11_);
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Tm_ctorElim(lean_object* v_motive__1_13_, lean_object* v_ctorIdx_14_, lean_object* v_t_15_, lean_object* v_h_16_, lean_object* v_k_17_){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = lp_vampireReplay_Vampire_Tm_ctorElim___redArg(v_t_15_, v_k_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Tm_ctorElim___boxed(lean_object* v_motive__1_19_, lean_object* v_ctorIdx_20_, lean_object* v_t_21_, lean_object* v_h_22_, lean_object* v_k_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = lp_vampireReplay_Vampire_Tm_ctorElim(v_motive__1_19_, v_ctorIdx_20_, v_t_21_, v_h_22_, v_k_23_);
lean_dec(v_ctorIdx_20_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Tm_var_elim___redArg(lean_object* v_t_25_, lean_object* v_var_26_){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = lp_vampireReplay_Vampire_Tm_ctorElim___redArg(v_t_25_, v_var_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Tm_var_elim(lean_object* v_motive__1_28_, lean_object* v_t_29_, lean_object* v_h_30_, lean_object* v_var_31_){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = lp_vampireReplay_Vampire_Tm_ctorElim___redArg(v_t_29_, v_var_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Tm_app_elim___redArg(lean_object* v_t_33_, lean_object* v_app_34_){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = lp_vampireReplay_Vampire_Tm_ctorElim___redArg(v_t_33_, v_app_34_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Tm_app_elim(lean_object* v_motive__1_36_, lean_object* v_t_37_, lean_object* v_h_38_, lean_object* v_app_39_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = lp_vampireReplay_Vampire_Tm_ctorElim___redArg(v_t_37_, v_app_39_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_ctorIdx(lean_object* v_x_46_){
_start:
{
switch(lean_obj_tag(v_x_46_))
{
case 0:
{
lean_object* v___x_47_; 
v___x_47_ = lean_unsigned_to_nat(0u);
return v___x_47_;
}
case 1:
{
lean_object* v___x_48_; 
v___x_48_ = lean_unsigned_to_nat(1u);
return v___x_48_;
}
case 2:
{
lean_object* v___x_49_; 
v___x_49_ = lean_unsigned_to_nat(2u);
return v___x_49_;
}
case 3:
{
lean_object* v___x_50_; 
v___x_50_ = lean_unsigned_to_nat(3u);
return v___x_50_;
}
case 4:
{
lean_object* v___x_51_; 
v___x_51_ = lean_unsigned_to_nat(4u);
return v___x_51_;
}
case 5:
{
lean_object* v___x_52_; 
v___x_52_ = lean_unsigned_to_nat(5u);
return v___x_52_;
}
case 6:
{
lean_object* v___x_53_; 
v___x_53_ = lean_unsigned_to_nat(6u);
return v___x_53_;
}
case 7:
{
lean_object* v___x_54_; 
v___x_54_ = lean_unsigned_to_nat(7u);
return v___x_54_;
}
case 8:
{
lean_object* v___x_55_; 
v___x_55_ = lean_unsigned_to_nat(8u);
return v___x_55_;
}
case 9:
{
lean_object* v___x_56_; 
v___x_56_ = lean_unsigned_to_nat(9u);
return v___x_56_;
}
default: 
{
lean_object* v___x_57_; 
v___x_57_ = lean_unsigned_to_nat(10u);
return v___x_57_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_ctorIdx___boxed(lean_object* v_x_58_){
_start:
{
lean_object* v_res_59_; 
v_res_59_ = lp_vampireReplay_Vampire_Fm_ctorIdx(v_x_58_);
lean_dec(v_x_58_);
return v_res_59_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_ctorElim___redArg(lean_object* v_t_60_, lean_object* v_k_61_){
_start:
{
switch(lean_obj_tag(v_t_60_))
{
case 2:
{
lean_object* v_tm_62_; lean_object* v___x_63_; 
v_tm_62_ = lean_ctor_get(v_t_60_, 0);
lean_inc_ref(v_tm_62_);
lean_dec_ref_known(v_t_60_, 1);
v___x_63_ = lean_apply_1(v_k_61_, v_tm_62_);
return v___x_63_;
}
case 3:
{
lean_object* v_lhs_64_; lean_object* v_rhs_65_; uint8_t v_positive_66_; lean_object* v___x_67_; lean_object* v___x_68_; 
v_lhs_64_ = lean_ctor_get(v_t_60_, 0);
lean_inc_ref(v_lhs_64_);
v_rhs_65_ = lean_ctor_get(v_t_60_, 1);
lean_inc_ref(v_rhs_65_);
v_positive_66_ = lean_ctor_get_uint8(v_t_60_, sizeof(void*)*2);
lean_dec_ref_known(v_t_60_, 2);
v___x_67_ = lean_box(v_positive_66_);
v___x_68_ = lean_apply_3(v_k_61_, v_lhs_64_, v_rhs_65_, v___x_67_);
return v___x_68_;
}
case 4:
{
lean_object* v_arg_69_; lean_object* v___x_70_; 
v_arg_69_ = lean_ctor_get(v_t_60_, 0);
lean_inc(v_arg_69_);
lean_dec_ref_known(v_t_60_, 1);
v___x_70_ = lean_apply_1(v_k_61_, v_arg_69_);
return v___x_70_;
}
case 5:
{
lean_object* v_args_71_; lean_object* v___x_72_; 
v_args_71_ = lean_ctor_get(v_t_60_, 0);
lean_inc_ref(v_args_71_);
lean_dec_ref_known(v_t_60_, 1);
v___x_72_ = lean_apply_1(v_k_61_, v_args_71_);
return v___x_72_;
}
case 6:
{
lean_object* v_args_73_; lean_object* v___x_74_; 
v_args_73_ = lean_ctor_get(v_t_60_, 0);
lean_inc_ref(v_args_73_);
lean_dec_ref_known(v_t_60_, 1);
v___x_74_ = lean_apply_1(v_k_61_, v_args_73_);
return v___x_74_;
}
case 7:
{
lean_object* v_lhs_75_; lean_object* v_rhs_76_; lean_object* v___x_77_; 
v_lhs_75_ = lean_ctor_get(v_t_60_, 0);
lean_inc(v_lhs_75_);
v_rhs_76_ = lean_ctor_get(v_t_60_, 1);
lean_inc(v_rhs_76_);
lean_dec_ref_known(v_t_60_, 2);
v___x_77_ = lean_apply_2(v_k_61_, v_lhs_75_, v_rhs_76_);
return v___x_77_;
}
case 8:
{
lean_object* v_lhs_78_; lean_object* v_rhs_79_; lean_object* v___x_80_; 
v_lhs_78_ = lean_ctor_get(v_t_60_, 0);
lean_inc(v_lhs_78_);
v_rhs_79_ = lean_ctor_get(v_t_60_, 1);
lean_inc(v_rhs_79_);
lean_dec_ref_known(v_t_60_, 2);
v___x_80_ = lean_apply_2(v_k_61_, v_lhs_78_, v_rhs_79_);
return v___x_80_;
}
case 9:
{
lean_object* v_vars_81_; lean_object* v_body_82_; lean_object* v___x_83_; 
v_vars_81_ = lean_ctor_get(v_t_60_, 0);
lean_inc_ref(v_vars_81_);
v_body_82_ = lean_ctor_get(v_t_60_, 1);
lean_inc(v_body_82_);
lean_dec_ref_known(v_t_60_, 2);
v___x_83_ = lean_apply_2(v_k_61_, v_vars_81_, v_body_82_);
return v___x_83_;
}
case 10:
{
lean_object* v_vars_84_; lean_object* v_body_85_; lean_object* v___x_86_; 
v_vars_84_ = lean_ctor_get(v_t_60_, 0);
lean_inc_ref(v_vars_84_);
v_body_85_ = lean_ctor_get(v_t_60_, 1);
lean_inc(v_body_85_);
lean_dec_ref_known(v_t_60_, 2);
v___x_86_ = lean_apply_2(v_k_61_, v_vars_84_, v_body_85_);
return v___x_86_;
}
default: 
{
lean_dec(v_t_60_);
return v_k_61_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_ctorElim(lean_object* v_motive__1_87_, lean_object* v_ctorIdx_88_, lean_object* v_t_89_, lean_object* v_h_90_, lean_object* v_k_91_){
_start:
{
lean_object* v___x_92_; 
v___x_92_ = lp_vampireReplay_Vampire_Fm_ctorElim___redArg(v_t_89_, v_k_91_);
return v___x_92_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_ctorElim___boxed(lean_object* v_motive__1_93_, lean_object* v_ctorIdx_94_, lean_object* v_t_95_, lean_object* v_h_96_, lean_object* v_k_97_){
_start:
{
lean_object* v_res_98_; 
v_res_98_ = lp_vampireReplay_Vampire_Fm_ctorElim(v_motive__1_93_, v_ctorIdx_94_, v_t_95_, v_h_96_, v_k_97_);
lean_dec(v_ctorIdx_94_);
return v_res_98_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_top_elim___redArg(lean_object* v_t_99_, lean_object* v_top_100_){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = lp_vampireReplay_Vampire_Fm_ctorElim___redArg(v_t_99_, v_top_100_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_top_elim(lean_object* v_motive__1_102_, lean_object* v_t_103_, lean_object* v_h_104_, lean_object* v_top_105_){
_start:
{
lean_object* v___x_106_; 
v___x_106_ = lp_vampireReplay_Vampire_Fm_ctorElim___redArg(v_t_103_, v_top_105_);
return v___x_106_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_bot_elim___redArg(lean_object* v_t_107_, lean_object* v_bot_108_){
_start:
{
lean_object* v___x_109_; 
v___x_109_ = lp_vampireReplay_Vampire_Fm_ctorElim___redArg(v_t_107_, v_bot_108_);
return v___x_109_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_bot_elim(lean_object* v_motive__1_110_, lean_object* v_t_111_, lean_object* v_h_112_, lean_object* v_bot_113_){
_start:
{
lean_object* v___x_114_; 
v___x_114_ = lp_vampireReplay_Vampire_Fm_ctorElim___redArg(v_t_111_, v_bot_113_);
return v___x_114_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_atom_elim___redArg(lean_object* v_t_115_, lean_object* v_atom_116_){
_start:
{
lean_object* v___x_117_; 
v___x_117_ = lp_vampireReplay_Vampire_Fm_ctorElim___redArg(v_t_115_, v_atom_116_);
return v___x_117_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_atom_elim(lean_object* v_motive__1_118_, lean_object* v_t_119_, lean_object* v_h_120_, lean_object* v_atom_121_){
_start:
{
lean_object* v___x_122_; 
v___x_122_ = lp_vampireReplay_Vampire_Fm_ctorElim___redArg(v_t_119_, v_atom_121_);
return v___x_122_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_eq_elim___redArg(lean_object* v_t_123_, lean_object* v_eq_124_){
_start:
{
lean_object* v___x_125_; 
v___x_125_ = lp_vampireReplay_Vampire_Fm_ctorElim___redArg(v_t_123_, v_eq_124_);
return v___x_125_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_eq_elim(lean_object* v_motive__1_126_, lean_object* v_t_127_, lean_object* v_h_128_, lean_object* v_eq_129_){
_start:
{
lean_object* v___x_130_; 
v___x_130_ = lp_vampireReplay_Vampire_Fm_ctorElim___redArg(v_t_127_, v_eq_129_);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_neg_elim___redArg(lean_object* v_t_131_, lean_object* v_neg_132_){
_start:
{
lean_object* v___x_133_; 
v___x_133_ = lp_vampireReplay_Vampire_Fm_ctorElim___redArg(v_t_131_, v_neg_132_);
return v___x_133_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_neg_elim(lean_object* v_motive__1_134_, lean_object* v_t_135_, lean_object* v_h_136_, lean_object* v_neg_137_){
_start:
{
lean_object* v___x_138_; 
v___x_138_ = lp_vampireReplay_Vampire_Fm_ctorElim___redArg(v_t_135_, v_neg_137_);
return v___x_138_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_and_elim___redArg(lean_object* v_t_139_, lean_object* v_and_140_){
_start:
{
lean_object* v___x_141_; 
v___x_141_ = lp_vampireReplay_Vampire_Fm_ctorElim___redArg(v_t_139_, v_and_140_);
return v___x_141_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_and_elim(lean_object* v_motive__1_142_, lean_object* v_t_143_, lean_object* v_h_144_, lean_object* v_and_145_){
_start:
{
lean_object* v___x_146_; 
v___x_146_ = lp_vampireReplay_Vampire_Fm_ctorElim___redArg(v_t_143_, v_and_145_);
return v___x_146_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_or_elim___redArg(lean_object* v_t_147_, lean_object* v_or_148_){
_start:
{
lean_object* v___x_149_; 
v___x_149_ = lp_vampireReplay_Vampire_Fm_ctorElim___redArg(v_t_147_, v_or_148_);
return v___x_149_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_or_elim(lean_object* v_motive__1_150_, lean_object* v_t_151_, lean_object* v_h_152_, lean_object* v_or_153_){
_start:
{
lean_object* v___x_154_; 
v___x_154_ = lp_vampireReplay_Vampire_Fm_ctorElim___redArg(v_t_151_, v_or_153_);
return v___x_154_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_imp_elim___redArg(lean_object* v_t_155_, lean_object* v_imp_156_){
_start:
{
lean_object* v___x_157_; 
v___x_157_ = lp_vampireReplay_Vampire_Fm_ctorElim___redArg(v_t_155_, v_imp_156_);
return v___x_157_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_imp_elim(lean_object* v_motive__1_158_, lean_object* v_t_159_, lean_object* v_h_160_, lean_object* v_imp_161_){
_start:
{
lean_object* v___x_162_; 
v___x_162_ = lp_vampireReplay_Vampire_Fm_ctorElim___redArg(v_t_159_, v_imp_161_);
return v___x_162_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_iff_elim___redArg(lean_object* v_t_163_, lean_object* v_iff_164_){
_start:
{
lean_object* v___x_165_; 
v___x_165_ = lp_vampireReplay_Vampire_Fm_ctorElim___redArg(v_t_163_, v_iff_164_);
return v___x_165_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_iff_elim(lean_object* v_motive__1_166_, lean_object* v_t_167_, lean_object* v_h_168_, lean_object* v_iff_169_){
_start:
{
lean_object* v___x_170_; 
v___x_170_ = lp_vampireReplay_Vampire_Fm_ctorElim___redArg(v_t_167_, v_iff_169_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_all_elim___redArg(lean_object* v_t_171_, lean_object* v_all_172_){
_start:
{
lean_object* v___x_173_; 
v___x_173_ = lp_vampireReplay_Vampire_Fm_ctorElim___redArg(v_t_171_, v_all_172_);
return v___x_173_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_all_elim(lean_object* v_motive__1_174_, lean_object* v_t_175_, lean_object* v_h_176_, lean_object* v_all_177_){
_start:
{
lean_object* v___x_178_; 
v___x_178_ = lp_vampireReplay_Vampire_Fm_ctorElim___redArg(v_t_175_, v_all_177_);
return v___x_178_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_ex_elim___redArg(lean_object* v_t_179_, lean_object* v_ex_180_){
_start:
{
lean_object* v___x_181_; 
v___x_181_ = lp_vampireReplay_Vampire_Fm_ctorElim___redArg(v_t_179_, v_ex_180_);
return v___x_181_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_ex_elim(lean_object* v_motive__1_182_, lean_object* v_t_183_, lean_object* v_h_184_, lean_object* v_ex_185_){
_start:
{
lean_object* v___x_186_; 
v___x_186_ = lp_vampireReplay_Vampire_Fm_ctorElim___redArg(v_t_183_, v_ex_185_);
return v___x_186_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_instInhabitedFm_default(void){
_start:
{
lean_object* v___x_187_; 
v___x_187_ = lean_box(0);
return v___x_187_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_instInhabitedFm(void){
_start:
{
lean_object* v___x_188_; 
v___x_188_ = lean_box(0);
return v___x_188_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Tm_render(lean_object* v_x_192_){
_start:
{
if (lean_obj_tag(v_x_192_) == 0)
{
lean_object* v_name_193_; 
v_name_193_ = lean_ctor_get(v_x_192_, 0);
lean_inc_ref(v_name_193_);
lean_dec_ref_known(v_x_192_, 1);
return v_name_193_;
}
else
{
lean_object* v_fn_194_; lean_object* v_args_195_; lean_object* v___x_196_; lean_object* v___x_197_; uint8_t v___x_198_; 
v_fn_194_ = lean_ctor_get(v_x_192_, 0);
lean_inc_ref(v_fn_194_);
v_args_195_ = lean_ctor_get(v_x_192_, 1);
lean_inc_ref(v_args_195_);
lean_dec_ref_known(v_x_192_, 2);
v___x_196_ = lean_array_get_size(v_args_195_);
v___x_197_ = lean_unsigned_to_nat(0u);
v___x_198_ = lean_nat_dec_eq(v___x_196_, v___x_197_);
if (v___x_198_ == 0)
{
lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; 
v___x_199_ = ((lean_object*)(lp_vampireReplay_Vampire_Tm_render___closed__0));
v___x_200_ = lean_string_append(v_fn_194_, v___x_199_);
v___x_201_ = ((lean_object*)(lp_vampireReplay_Vampire_Tm_render___closed__1));
v___x_202_ = lean_array_to_list(v_args_195_);
v___x_203_ = lean_box(0);
v___x_204_ = lp_vampireReplay_List_mapTR_loop___at___00Vampire_Tm_render_spec__0(v___x_202_, v___x_203_);
v___x_205_ = l_String_intercalate(v___x_201_, v___x_204_);
v___x_206_ = lean_string_append(v___x_200_, v___x_205_);
lean_dec_ref(v___x_205_);
v___x_207_ = ((lean_object*)(lp_vampireReplay_Vampire_Tm_render___closed__2));
v___x_208_ = lean_string_append(v___x_206_, v___x_207_);
return v___x_208_;
}
else
{
lean_dec_ref(v_args_195_);
return v_fn_194_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_mapTR_loop___at___00Vampire_Tm_render_spec__0(lean_object* v_a_209_, lean_object* v_a_210_){
_start:
{
if (lean_obj_tag(v_a_209_) == 0)
{
lean_object* v___x_211_; 
v___x_211_ = l_List_reverse___redArg(v_a_210_);
return v___x_211_;
}
else
{
lean_object* v_head_212_; lean_object* v_tail_213_; lean_object* v___x_215_; uint8_t v_isShared_216_; uint8_t v_isSharedCheck_222_; 
v_head_212_ = lean_ctor_get(v_a_209_, 0);
v_tail_213_ = lean_ctor_get(v_a_209_, 1);
v_isSharedCheck_222_ = !lean_is_exclusive(v_a_209_);
if (v_isSharedCheck_222_ == 0)
{
v___x_215_ = v_a_209_;
v_isShared_216_ = v_isSharedCheck_222_;
goto v_resetjp_214_;
}
else
{
lean_inc(v_tail_213_);
lean_inc(v_head_212_);
lean_dec(v_a_209_);
v___x_215_ = lean_box(0);
v_isShared_216_ = v_isSharedCheck_222_;
goto v_resetjp_214_;
}
v_resetjp_214_:
{
lean_object* v___x_217_; lean_object* v___x_219_; 
v___x_217_ = lp_vampireReplay_Vampire_Tm_render(v_head_212_);
if (v_isShared_216_ == 0)
{
lean_ctor_set(v___x_215_, 1, v_a_210_);
lean_ctor_set(v___x_215_, 0, v___x_217_);
v___x_219_ = v___x_215_;
goto v_reusejp_218_;
}
else
{
lean_object* v_reuseFailAlloc_221_; 
v_reuseFailAlloc_221_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_221_, 0, v___x_217_);
lean_ctor_set(v_reuseFailAlloc_221_, 1, v_a_210_);
v___x_219_ = v_reuseFailAlloc_221_;
goto v_reusejp_218_;
}
v_reusejp_218_:
{
v_a_209_ = v_tail_213_;
v_a_210_ = v___x_219_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_mapTR_loop___at___00__private_VampireReplay_Translate_0__Vampire_Fm_renderVars_spec__0(lean_object* v_a_226_, lean_object* v_a_227_){
_start:
{
if (lean_obj_tag(v_a_226_) == 0)
{
lean_object* v___x_228_; 
v___x_228_ = l_List_reverse___redArg(v_a_227_);
return v___x_228_;
}
else
{
lean_object* v_head_229_; lean_object* v_tail_230_; lean_object* v___x_232_; uint8_t v_isShared_233_; uint8_t v_isSharedCheck_243_; 
v_head_229_ = lean_ctor_get(v_a_226_, 0);
v_tail_230_ = lean_ctor_get(v_a_226_, 1);
v_isSharedCheck_243_ = !lean_is_exclusive(v_a_226_);
if (v_isSharedCheck_243_ == 0)
{
v___x_232_ = v_a_226_;
v_isShared_233_ = v_isSharedCheck_243_;
goto v_resetjp_231_;
}
else
{
lean_inc(v_tail_230_);
lean_inc(v_head_229_);
lean_dec(v_a_226_);
v___x_232_ = lean_box(0);
v_isShared_233_ = v_isSharedCheck_243_;
goto v_resetjp_231_;
}
v_resetjp_231_:
{
lean_object* v_fst_234_; lean_object* v_snd_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_240_; 
v_fst_234_ = lean_ctor_get(v_head_229_, 0);
lean_inc(v_fst_234_);
v_snd_235_ = lean_ctor_get(v_head_229_, 1);
lean_inc(v_snd_235_);
lean_dec(v_head_229_);
v___x_236_ = ((lean_object*)(lp_vampireReplay_List_mapTR_loop___at___00__private_VampireReplay_Translate_0__Vampire_Fm_renderVars_spec__0___closed__0));
v___x_237_ = lean_string_append(v_fst_234_, v___x_236_);
v___x_238_ = lean_string_append(v___x_237_, v_snd_235_);
lean_dec(v_snd_235_);
if (v_isShared_233_ == 0)
{
lean_ctor_set(v___x_232_, 1, v_a_227_);
lean_ctor_set(v___x_232_, 0, v___x_238_);
v___x_240_ = v___x_232_;
goto v_reusejp_239_;
}
else
{
lean_object* v_reuseFailAlloc_242_; 
v_reuseFailAlloc_242_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_242_, 0, v___x_238_);
lean_ctor_set(v_reuseFailAlloc_242_, 1, v_a_227_);
v___x_240_ = v_reuseFailAlloc_242_;
goto v_reusejp_239_;
}
v_reusejp_239_:
{
v_a_226_ = v_tail_230_;
v_a_227_ = v___x_240_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Translate_0__Vampire_Fm_renderVars(lean_object* v_vars_244_){
_start:
{
lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; 
v___x_245_ = ((lean_object*)(lp_vampireReplay_Vampire_Tm_render___closed__1));
v___x_246_ = lean_array_to_list(v_vars_244_);
v___x_247_ = lean_box(0);
v___x_248_ = lp_vampireReplay_List_mapTR_loop___at___00__private_VampireReplay_Translate_0__Vampire_Fm_renderVars_spec__0(v___x_246_, v___x_247_);
v___x_249_ = l_String_intercalate(v___x_245_, v___x_248_);
return v___x_249_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_render_junction(lean_object* v_op_257_, lean_object* v_args_258_){
_start:
{
lean_object* v___x_259_; lean_object* v___x_260_; uint8_t v___x_261_; 
v___x_259_ = lean_array_get_size(v_args_258_);
v___x_260_ = lean_unsigned_to_nat(0u);
v___x_261_ = lean_nat_dec_eq(v___x_259_, v___x_260_);
if (v___x_261_ == 0)
{
lean_object* v___x_262_; uint8_t v___x_263_; 
v___x_262_ = lean_unsigned_to_nat(1u);
v___x_263_ = lean_nat_dec_eq(v___x_259_, v___x_262_);
if (v___x_263_ == 0)
{
lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; 
v___x_264_ = ((lean_object*)(lp_vampireReplay_Vampire_Tm_render___closed__0));
v___x_265_ = ((lean_object*)(lp_vampireReplay_Vampire_Fm_render_junction___closed__0));
v___x_266_ = lean_string_append(v___x_265_, v_op_257_);
v___x_267_ = lean_string_append(v___x_266_, v___x_265_);
v___x_268_ = lean_array_to_list(v_args_258_);
v___x_269_ = lean_box(0);
v___x_270_ = lp_vampireReplay_List_mapTR_loop___at___00Vampire_Fm_render_junction_spec__0(v___x_268_, v___x_269_);
v___x_271_ = l_String_intercalate(v___x_267_, v___x_270_);
lean_dec_ref(v___x_267_);
v___x_272_ = lean_string_append(v___x_264_, v___x_271_);
lean_dec_ref(v___x_271_);
v___x_273_ = ((lean_object*)(lp_vampireReplay_Vampire_Tm_render___closed__2));
v___x_274_ = lean_string_append(v___x_272_, v___x_273_);
return v___x_274_;
}
else
{
lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; 
v___x_275_ = lean_box(0);
v___x_276_ = lean_array_get(v___x_275_, v_args_258_, v___x_260_);
lean_dec_ref(v_args_258_);
v___x_277_ = lp_vampireReplay_Vampire_Fm_render(v___x_276_);
return v___x_277_;
}
}
else
{
lean_object* v___x_278_; uint8_t v___x_279_; 
lean_dec_ref(v_args_258_);
v___x_278_ = ((lean_object*)(lp_vampireReplay_Vampire_Fm_render_junction___closed__1));
v___x_279_ = lean_string_dec_eq(v_op_257_, v___x_278_);
if (v___x_279_ == 0)
{
lean_object* v___x_280_; 
v___x_280_ = ((lean_object*)(lp_vampireReplay_Vampire_Fm_render_junction___closed__2));
return v___x_280_;
}
else
{
lean_object* v___x_281_; 
v___x_281_ = ((lean_object*)(lp_vampireReplay_Vampire_Fm_render_junction___closed__3));
return v___x_281_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_render(lean_object* v_x_288_){
_start:
{
switch(lean_obj_tag(v_x_288_))
{
case 0:
{
lean_object* v___x_289_; 
v___x_289_ = ((lean_object*)(lp_vampireReplay_Vampire_Fm_render_junction___closed__3));
return v___x_289_;
}
case 1:
{
lean_object* v___x_290_; 
v___x_290_ = ((lean_object*)(lp_vampireReplay_Vampire_Fm_render_junction___closed__2));
return v___x_290_;
}
case 2:
{
lean_object* v_tm_291_; lean_object* v___x_292_; 
v_tm_291_ = lean_ctor_get(v_x_288_, 0);
lean_inc_ref(v_tm_291_);
lean_dec_ref_known(v_x_288_, 1);
v___x_292_ = lp_vampireReplay_Vampire_Tm_render(v_tm_291_);
return v___x_292_;
}
case 3:
{
lean_object* v_lhs_293_; lean_object* v_rhs_294_; uint8_t v_positive_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___y_302_; 
v_lhs_293_ = lean_ctor_get(v_x_288_, 0);
lean_inc_ref(v_lhs_293_);
v_rhs_294_ = lean_ctor_get(v_x_288_, 1);
lean_inc_ref(v_rhs_294_);
v_positive_295_ = lean_ctor_get_uint8(v_x_288_, sizeof(void*)*2);
lean_dec_ref_known(v_x_288_, 2);
v___x_296_ = ((lean_object*)(lp_vampireReplay_Vampire_Tm_render___closed__0));
v___x_297_ = lp_vampireReplay_Vampire_Tm_render(v_lhs_293_);
v___x_298_ = lean_string_append(v___x_296_, v___x_297_);
lean_dec_ref(v___x_297_);
v___x_299_ = ((lean_object*)(lp_vampireReplay_Vampire_Fm_render_junction___closed__0));
v___x_300_ = lean_string_append(v___x_298_, v___x_299_);
if (v_positive_295_ == 0)
{
lean_object* v___x_309_; 
v___x_309_ = ((lean_object*)(lp_vampireReplay_Vampire_Fm_render___closed__0));
v___y_302_ = v___x_309_;
goto v___jp_301_;
}
else
{
lean_object* v___x_310_; 
v___x_310_ = ((lean_object*)(lp_vampireReplay_Vampire_Fm_render___closed__1));
v___y_302_ = v___x_310_;
goto v___jp_301_;
}
v___jp_301_:
{
lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_303_ = lean_string_append(v___x_300_, v___y_302_);
v___x_304_ = lean_string_append(v___x_303_, v___x_299_);
v___x_305_ = lp_vampireReplay_Vampire_Tm_render(v_rhs_294_);
v___x_306_ = lean_string_append(v___x_304_, v___x_305_);
lean_dec_ref(v___x_305_);
v___x_307_ = ((lean_object*)(lp_vampireReplay_Vampire_Tm_render___closed__2));
v___x_308_ = lean_string_append(v___x_306_, v___x_307_);
return v___x_308_;
}
}
case 4:
{
lean_object* v_arg_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; 
v_arg_311_ = lean_ctor_get(v_x_288_, 0);
lean_inc(v_arg_311_);
lean_dec_ref_known(v_x_288_, 1);
v___x_312_ = ((lean_object*)(lp_vampireReplay_Vampire_Fm_render___closed__2));
v___x_313_ = lp_vampireReplay_Vampire_Fm_render(v_arg_311_);
v___x_314_ = lean_string_append(v___x_312_, v___x_313_);
lean_dec_ref(v___x_313_);
return v___x_314_;
}
case 5:
{
lean_object* v_args_315_; lean_object* v___x_316_; lean_object* v___x_317_; 
v_args_315_ = lean_ctor_get(v_x_288_, 0);
lean_inc_ref(v_args_315_);
lean_dec_ref_known(v_x_288_, 1);
v___x_316_ = ((lean_object*)(lp_vampireReplay_Vampire_Fm_render_junction___closed__1));
v___x_317_ = lp_vampireReplay_Vampire_Fm_render_junction(v___x_316_, v_args_315_);
return v___x_317_;
}
case 6:
{
lean_object* v_args_318_; lean_object* v___x_319_; lean_object* v___x_320_; 
v_args_318_ = lean_ctor_get(v_x_288_, 0);
lean_inc_ref(v_args_318_);
lean_dec_ref_known(v_x_288_, 1);
v___x_319_ = ((lean_object*)(lp_vampireReplay_Vampire_Fm_render___closed__3));
v___x_320_ = lp_vampireReplay_Vampire_Fm_render_junction(v___x_319_, v_args_318_);
return v___x_320_;
}
case 7:
{
lean_object* v_lhs_321_; lean_object* v_rhs_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; 
v_lhs_321_ = lean_ctor_get(v_x_288_, 0);
lean_inc(v_lhs_321_);
v_rhs_322_ = lean_ctor_get(v_x_288_, 1);
lean_inc(v_rhs_322_);
lean_dec_ref_known(v_x_288_, 2);
v___x_323_ = ((lean_object*)(lp_vampireReplay_Vampire_Tm_render___closed__0));
v___x_324_ = lp_vampireReplay_Vampire_Fm_render(v_lhs_321_);
v___x_325_ = lean_string_append(v___x_323_, v___x_324_);
lean_dec_ref(v___x_324_);
v___x_326_ = ((lean_object*)(lp_vampireReplay_Vampire_Fm_render___closed__4));
v___x_327_ = lean_string_append(v___x_325_, v___x_326_);
v___x_328_ = lp_vampireReplay_Vampire_Fm_render(v_rhs_322_);
v___x_329_ = lean_string_append(v___x_327_, v___x_328_);
lean_dec_ref(v___x_328_);
v___x_330_ = ((lean_object*)(lp_vampireReplay_Vampire_Tm_render___closed__2));
v___x_331_ = lean_string_append(v___x_329_, v___x_330_);
return v___x_331_;
}
case 8:
{
lean_object* v_lhs_332_; lean_object* v_rhs_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; 
v_lhs_332_ = lean_ctor_get(v_x_288_, 0);
lean_inc(v_lhs_332_);
v_rhs_333_ = lean_ctor_get(v_x_288_, 1);
lean_inc(v_rhs_333_);
lean_dec_ref_known(v_x_288_, 2);
v___x_334_ = ((lean_object*)(lp_vampireReplay_Vampire_Tm_render___closed__0));
v___x_335_ = lp_vampireReplay_Vampire_Fm_render(v_lhs_332_);
v___x_336_ = lean_string_append(v___x_334_, v___x_335_);
lean_dec_ref(v___x_335_);
v___x_337_ = ((lean_object*)(lp_vampireReplay_Vampire_Fm_render___closed__5));
v___x_338_ = lean_string_append(v___x_336_, v___x_337_);
v___x_339_ = lp_vampireReplay_Vampire_Fm_render(v_rhs_333_);
v___x_340_ = lean_string_append(v___x_338_, v___x_339_);
lean_dec_ref(v___x_339_);
v___x_341_ = ((lean_object*)(lp_vampireReplay_Vampire_Tm_render___closed__2));
v___x_342_ = lean_string_append(v___x_340_, v___x_341_);
return v___x_342_;
}
case 9:
{
lean_object* v_vars_343_; lean_object* v_body_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; 
v_vars_343_ = lean_ctor_get(v_x_288_, 0);
lean_inc_ref(v_vars_343_);
v_body_344_ = lean_ctor_get(v_x_288_, 1);
lean_inc(v_body_344_);
lean_dec_ref_known(v_x_288_, 2);
v___x_345_ = ((lean_object*)(lp_vampireReplay_Vampire_Fm_render___closed__6));
v___x_346_ = lp_vampireReplay___private_VampireReplay_Translate_0__Vampire_Fm_renderVars(v_vars_343_);
v___x_347_ = lean_string_append(v___x_345_, v___x_346_);
lean_dec_ref(v___x_346_);
v___x_348_ = ((lean_object*)(lp_vampireReplay_Vampire_Fm_render___closed__7));
v___x_349_ = lean_string_append(v___x_347_, v___x_348_);
v___x_350_ = lp_vampireReplay_Vampire_Fm_render(v_body_344_);
v___x_351_ = lean_string_append(v___x_349_, v___x_350_);
lean_dec_ref(v___x_350_);
v___x_352_ = ((lean_object*)(lp_vampireReplay_Vampire_Tm_render___closed__2));
v___x_353_ = lean_string_append(v___x_351_, v___x_352_);
return v___x_353_;
}
default: 
{
lean_object* v_vars_354_; lean_object* v_body_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; 
v_vars_354_ = lean_ctor_get(v_x_288_, 0);
lean_inc_ref(v_vars_354_);
v_body_355_ = lean_ctor_get(v_x_288_, 1);
lean_inc(v_body_355_);
lean_dec_ref_known(v_x_288_, 2);
v___x_356_ = ((lean_object*)(lp_vampireReplay_Vampire_Fm_render___closed__8));
v___x_357_ = lp_vampireReplay___private_VampireReplay_Translate_0__Vampire_Fm_renderVars(v_vars_354_);
v___x_358_ = lean_string_append(v___x_356_, v___x_357_);
lean_dec_ref(v___x_357_);
v___x_359_ = ((lean_object*)(lp_vampireReplay_Vampire_Fm_render___closed__7));
v___x_360_ = lean_string_append(v___x_358_, v___x_359_);
v___x_361_ = lp_vampireReplay_Vampire_Fm_render(v_body_355_);
v___x_362_ = lean_string_append(v___x_360_, v___x_361_);
lean_dec_ref(v___x_361_);
v___x_363_ = ((lean_object*)(lp_vampireReplay_Vampire_Tm_render___closed__2));
v___x_364_ = lean_string_append(v___x_362_, v___x_363_);
return v___x_364_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_mapTR_loop___at___00Vampire_Fm_render_junction_spec__0(lean_object* v_a_365_, lean_object* v_a_366_){
_start:
{
if (lean_obj_tag(v_a_365_) == 0)
{
lean_object* v___x_367_; 
v___x_367_ = l_List_reverse___redArg(v_a_366_);
return v___x_367_;
}
else
{
lean_object* v_head_368_; lean_object* v_tail_369_; lean_object* v___x_371_; uint8_t v_isShared_372_; uint8_t v_isSharedCheck_378_; 
v_head_368_ = lean_ctor_get(v_a_365_, 0);
v_tail_369_ = lean_ctor_get(v_a_365_, 1);
v_isSharedCheck_378_ = !lean_is_exclusive(v_a_365_);
if (v_isSharedCheck_378_ == 0)
{
v___x_371_ = v_a_365_;
v_isShared_372_ = v_isSharedCheck_378_;
goto v_resetjp_370_;
}
else
{
lean_inc(v_tail_369_);
lean_inc(v_head_368_);
lean_dec(v_a_365_);
v___x_371_ = lean_box(0);
v_isShared_372_ = v_isSharedCheck_378_;
goto v_resetjp_370_;
}
v_resetjp_370_:
{
lean_object* v___x_373_; lean_object* v___x_375_; 
v___x_373_ = lp_vampireReplay_Vampire_Fm_render(v_head_368_);
if (v_isShared_372_ == 0)
{
lean_ctor_set(v___x_371_, 1, v_a_366_);
lean_ctor_set(v___x_371_, 0, v___x_373_);
v___x_375_ = v___x_371_;
goto v_reusejp_374_;
}
else
{
lean_object* v_reuseFailAlloc_377_; 
v_reuseFailAlloc_377_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_377_, 0, v___x_373_);
lean_ctor_set(v_reuseFailAlloc_377_, 1, v_a_366_);
v___x_375_ = v_reuseFailAlloc_377_;
goto v_reusejp_374_;
}
v_reusejp_374_:
{
v_a_365_ = v_tail_369_;
v_a_366_ = v___x_375_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Fm_render_junction___boxed(lean_object* v_op_379_, lean_object* v_args_380_){
_start:
{
lean_object* v_res_381_; 
v_res_381_ = lp_vampireReplay_Vampire_Fm_render_junction(v_op_379_, v_args_380_);
lean_dec_ref(v_op_379_);
return v_res_381_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_instInhabitedState_default___closed__0(void){
_start:
{
lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; 
v___x_390_ = lean_box(0);
v___x_391_ = lean_unsigned_to_nat(16u);
v___x_392_ = lean_mk_array(v___x_391_, v___x_390_);
return v___x_392_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_instInhabitedState_default___closed__1(void){
_start:
{
lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_393_ = lean_obj_once(&lp_vampireReplay_Vampire_instInhabitedState_default___closed__0, &lp_vampireReplay_Vampire_instInhabitedState_default___closed__0_once, _init_lp_vampireReplay_Vampire_instInhabitedState_default___closed__0);
v___x_394_ = lean_unsigned_to_nat(0u);
v___x_395_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_395_, 0, v___x_394_);
lean_ctor_set(v___x_395_, 1, v___x_393_);
return v___x_395_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_instInhabitedState_default___closed__2(void){
_start:
{
lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; 
v___x_396_ = lean_unsigned_to_nat(0u);
v___x_397_ = ((lean_object*)(lp_vampireReplay_Vampire_instInhabitedDeclarations_default___closed__1));
v___x_398_ = lean_obj_once(&lp_vampireReplay_Vampire_instInhabitedState_default___closed__1, &lp_vampireReplay_Vampire_instInhabitedState_default___closed__1_once, _init_lp_vampireReplay_Vampire_instInhabitedState_default___closed__1);
v___x_399_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_399_, 0, v___x_398_);
lean_ctor_set(v___x_399_, 1, v___x_398_);
lean_ctor_set(v___x_399_, 2, v___x_398_);
lean_ctor_set(v___x_399_, 3, v___x_397_);
lean_ctor_set(v___x_399_, 4, v___x_398_);
lean_ctor_set(v___x_399_, 5, v___x_396_);
return v___x_399_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_instInhabitedState_default(void){
_start:
{
lean_object* v___x_400_; 
v___x_400_ = lean_obj_once(&lp_vampireReplay_Vampire_instInhabitedState_default___closed__2, &lp_vampireReplay_Vampire_instInhabitedState_default___closed__2_once, _init_lp_vampireReplay_Vampire_instInhabitedState_default___closed__2);
return v___x_400_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_instInhabitedState(void){
_start:
{
lean_object* v___x_401_; 
v___x_401_ = lp_vampireReplay_Vampire_instInhabitedState_default;
return v___x_401_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_dropWhile___at___00Vampire_sanitize_spec__0(lean_object* v_x_402_){
_start:
{
if (lean_obj_tag(v_x_402_) == 0)
{
return v_x_402_;
}
else
{
lean_object* v_head_403_; lean_object* v_tail_404_; uint32_t v___x_405_; uint32_t v___x_406_; uint8_t v___x_407_; 
v_head_403_ = lean_ctor_get(v_x_402_, 0);
v_tail_404_ = lean_ctor_get(v_x_402_, 1);
v___x_405_ = 95;
v___x_406_ = lean_unbox_uint32(v_head_403_);
v___x_407_ = lean_uint32_dec_eq(v___x_406_, v___x_405_);
if (v___x_407_ == 0)
{
lean_inc_ref(v_x_402_);
return v_x_402_;
}
else
{
v_x_402_ = v_tail_404_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_dropWhile___at___00Vampire_sanitize_spec__0___boxed(lean_object* v_x_409_){
_start:
{
lean_object* v_res_410_; 
v_res_410_ = lp_vampireReplay_List_dropWhile___at___00Vampire_sanitize_spec__0(v_x_409_);
lean_dec(v_x_409_);
return v_res_410_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_mapTR_loop___at___00Vampire_sanitize_spec__1(lean_object* v_a_411_, lean_object* v_a_412_){
_start:
{
if (lean_obj_tag(v_a_411_) == 0)
{
lean_object* v___x_413_; 
v___x_413_ = l_List_reverse___redArg(v_a_412_);
return v___x_413_;
}
else
{
lean_object* v_head_414_; lean_object* v_tail_415_; lean_object* v___x_417_; uint8_t v_isShared_418_; uint8_t v_isSharedCheck_456_; 
v_head_414_ = lean_ctor_get(v_a_411_, 0);
v_tail_415_ = lean_ctor_get(v_a_411_, 1);
v_isSharedCheck_456_ = !lean_is_exclusive(v_a_411_);
if (v_isSharedCheck_456_ == 0)
{
v___x_417_ = v_a_411_;
v_isShared_418_ = v_isSharedCheck_456_;
goto v_resetjp_416_;
}
else
{
lean_inc(v_tail_415_);
lean_inc(v_head_414_);
lean_dec(v_a_411_);
v___x_417_ = lean_box(0);
v_isShared_418_ = v_isSharedCheck_456_;
goto v_resetjp_416_;
}
v_resetjp_416_:
{
uint32_t v___y_420_; uint8_t v___y_427_; uint8_t v___y_434_; uint32_t v___x_449_; uint32_t v___x_450_; uint8_t v___x_451_; 
v___x_449_ = 65;
v___x_450_ = lean_unbox_uint32(v_head_414_);
v___x_451_ = lean_uint32_dec_le(v___x_449_, v___x_450_);
if (v___x_451_ == 0)
{
goto v___jp_442_;
}
else
{
uint32_t v___x_452_; uint32_t v___x_453_; uint8_t v___x_454_; 
v___x_452_ = 90;
v___x_453_ = lean_unbox_uint32(v_head_414_);
v___x_454_ = lean_uint32_dec_le(v___x_453_, v___x_452_);
if (v___x_454_ == 0)
{
goto v___jp_442_;
}
else
{
uint32_t v___x_455_; 
v___x_455_ = lean_unbox_uint32(v_head_414_);
lean_dec(v_head_414_);
v___y_420_ = v___x_455_;
goto v___jp_419_;
}
}
v___jp_419_:
{
lean_object* v___x_421_; lean_object* v___x_423_; 
v___x_421_ = lean_box_uint32(v___y_420_);
if (v_isShared_418_ == 0)
{
lean_ctor_set(v___x_417_, 1, v_a_412_);
lean_ctor_set(v___x_417_, 0, v___x_421_);
v___x_423_ = v___x_417_;
goto v_reusejp_422_;
}
else
{
lean_object* v_reuseFailAlloc_425_; 
v_reuseFailAlloc_425_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_425_, 0, v___x_421_);
lean_ctor_set(v_reuseFailAlloc_425_, 1, v_a_412_);
v___x_423_ = v_reuseFailAlloc_425_;
goto v_reusejp_422_;
}
v_reusejp_422_:
{
v_a_411_ = v_tail_415_;
v_a_412_ = v___x_423_;
goto _start;
}
}
v___jp_426_:
{
if (v___y_427_ == 0)
{
uint32_t v___x_428_; uint32_t v___x_429_; uint8_t v___x_430_; 
v___x_428_ = 95;
v___x_429_ = lean_unbox_uint32(v_head_414_);
v___x_430_ = lean_uint32_dec_eq(v___x_429_, v___x_428_);
if (v___x_430_ == 0)
{
lean_dec(v_head_414_);
v___y_420_ = v___x_428_;
goto v___jp_419_;
}
else
{
uint32_t v___x_431_; 
v___x_431_ = lean_unbox_uint32(v_head_414_);
lean_dec(v_head_414_);
v___y_420_ = v___x_431_;
goto v___jp_419_;
}
}
else
{
uint32_t v___x_432_; 
v___x_432_ = lean_unbox_uint32(v_head_414_);
lean_dec(v_head_414_);
v___y_420_ = v___x_432_;
goto v___jp_419_;
}
}
v___jp_433_:
{
if (v___y_434_ == 0)
{
uint32_t v___x_435_; uint32_t v___x_436_; uint8_t v___x_437_; 
v___x_435_ = 48;
v___x_436_ = lean_unbox_uint32(v_head_414_);
v___x_437_ = lean_uint32_dec_le(v___x_435_, v___x_436_);
if (v___x_437_ == 0)
{
v___y_427_ = v___x_437_;
goto v___jp_426_;
}
else
{
uint32_t v___x_438_; uint32_t v___x_439_; uint8_t v___x_440_; 
v___x_438_ = 57;
v___x_439_ = lean_unbox_uint32(v_head_414_);
v___x_440_ = lean_uint32_dec_le(v___x_439_, v___x_438_);
v___y_427_ = v___x_440_;
goto v___jp_426_;
}
}
else
{
uint32_t v___x_441_; 
v___x_441_ = lean_unbox_uint32(v_head_414_);
lean_dec(v_head_414_);
v___y_420_ = v___x_441_;
goto v___jp_419_;
}
}
v___jp_442_:
{
uint32_t v___x_443_; uint32_t v___x_444_; uint8_t v___x_445_; 
v___x_443_ = 97;
v___x_444_ = lean_unbox_uint32(v_head_414_);
v___x_445_ = lean_uint32_dec_le(v___x_443_, v___x_444_);
if (v___x_445_ == 0)
{
v___y_434_ = v___x_445_;
goto v___jp_433_;
}
else
{
uint32_t v___x_446_; uint32_t v___x_447_; uint8_t v___x_448_; 
v___x_446_ = 122;
v___x_447_ = lean_unbox_uint32(v_head_414_);
v___x_448_ = lean_uint32_dec_le(v___x_447_, v___x_446_);
v___y_434_ = v___x_448_;
goto v___jp_433_;
}
}
}
}
}
}
static lean_object* _init_lp_vampireReplay_Vampire_sanitize___boxed__const__1(void){
_start:
{
uint32_t v___x_458_; lean_object* v___x_459_; 
v___x_458_ = 120;
v___x_459_ = lean_box_uint32(v___x_458_);
return v___x_459_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_sanitize(lean_object* v_name_460_, uint8_t v_upper_461_){
_start:
{
lean_object* v___y_463_; uint32_t v___y_464_; lean_object* v___y_469_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v_cs_502_; uint8_t v___y_504_; 
v___x_500_ = lean_string_data(v_name_460_);
v___x_501_ = lean_box(0);
v_cs_502_ = lp_vampireReplay_List_mapTR_loop___at___00Vampire_sanitize_spec__1(v___x_500_, v___x_501_);
if (lean_obj_tag(v_cs_502_) == 0)
{
lean_object* v___x_507_; lean_object* v___x_508_; 
v___x_507_ = lp_vampireReplay_Vampire_sanitize___boxed__const__1;
v___x_508_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_508_, 0, v___x_507_);
lean_ctor_set(v___x_508_, 1, v_cs_502_);
v___y_469_ = v___x_508_;
goto v___jp_468_;
}
else
{
lean_object* v_head_509_; uint32_t v___x_517_; uint32_t v___x_518_; uint8_t v___x_519_; 
v_head_509_ = lean_ctor_get(v_cs_502_, 0);
lean_inc(v_head_509_);
v___x_517_ = 65;
v___x_518_ = lean_unbox_uint32(v_head_509_);
v___x_519_ = lean_uint32_dec_le(v___x_517_, v___x_518_);
if (v___x_519_ == 0)
{
goto v___jp_510_;
}
else
{
uint32_t v___x_520_; uint32_t v___x_521_; uint8_t v___x_522_; 
v___x_520_ = 90;
v___x_521_ = lean_unbox_uint32(v_head_509_);
v___x_522_ = lean_uint32_dec_le(v___x_521_, v___x_520_);
if (v___x_522_ == 0)
{
goto v___jp_510_;
}
else
{
lean_dec(v_head_509_);
v___y_469_ = v_cs_502_;
goto v___jp_468_;
}
}
v___jp_510_:
{
uint32_t v___x_511_; uint32_t v___x_512_; uint8_t v___x_513_; 
v___x_511_ = 97;
v___x_512_ = lean_unbox_uint32(v_head_509_);
v___x_513_ = lean_uint32_dec_le(v___x_511_, v___x_512_);
if (v___x_513_ == 0)
{
lean_dec(v_head_509_);
v___y_504_ = v___x_513_;
goto v___jp_503_;
}
else
{
uint32_t v___x_514_; uint32_t v___x_515_; uint8_t v___x_516_; 
v___x_514_ = 122;
v___x_515_ = lean_unbox_uint32(v_head_509_);
lean_dec(v_head_509_);
v___x_516_ = lean_uint32_dec_le(v___x_515_, v___x_514_);
v___y_504_ = v___x_516_;
goto v___jp_503_;
}
}
}
v___jp_462_:
{
lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; 
v___x_465_ = lean_box_uint32(v___y_464_);
v___x_466_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_466_, 0, v___x_465_);
lean_ctor_set(v___x_466_, 1, v___y_463_);
v___x_467_ = lean_string_mk(v___x_466_);
return v___x_467_;
}
v___jp_468_:
{
lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v_cs_472_; 
v___x_470_ = l_List_reverse___redArg(v___y_469_);
v___x_471_ = lp_vampireReplay_List_dropWhile___at___00Vampire_sanitize_spec__0(v___x_470_);
lean_dec(v___x_470_);
v_cs_472_ = l_List_reverse___redArg(v___x_471_);
if (lean_obj_tag(v_cs_472_) == 0)
{
lean_object* v___x_473_; 
v___x_473_ = ((lean_object*)(lp_vampireReplay_Vampire_sanitize___closed__0));
return v___x_473_;
}
else
{
if (v_upper_461_ == 0)
{
lean_object* v_head_474_; lean_object* v_tail_475_; uint32_t v___x_476_; uint32_t v___x_477_; uint8_t v___x_478_; 
v_head_474_ = lean_ctor_get(v_cs_472_, 0);
lean_inc(v_head_474_);
v_tail_475_ = lean_ctor_get(v_cs_472_, 1);
lean_inc(v_tail_475_);
lean_dec_ref_known(v_cs_472_, 2);
v___x_476_ = 65;
v___x_477_ = lean_unbox_uint32(v_head_474_);
v___x_478_ = lean_uint32_dec_le(v___x_476_, v___x_477_);
if (v___x_478_ == 0)
{
uint32_t v___x_479_; 
v___x_479_ = lean_unbox_uint32(v_head_474_);
lean_dec(v_head_474_);
v___y_463_ = v_tail_475_;
v___y_464_ = v___x_479_;
goto v___jp_462_;
}
else
{
uint32_t v___x_480_; uint32_t v___x_481_; uint8_t v___x_482_; 
v___x_480_ = 90;
v___x_481_ = lean_unbox_uint32(v_head_474_);
v___x_482_ = lean_uint32_dec_le(v___x_481_, v___x_480_);
if (v___x_482_ == 0)
{
uint32_t v___x_483_; 
v___x_483_ = lean_unbox_uint32(v_head_474_);
lean_dec(v_head_474_);
v___y_463_ = v_tail_475_;
v___y_464_ = v___x_483_;
goto v___jp_462_;
}
else
{
uint32_t v___x_484_; uint32_t v___x_485_; uint32_t v___x_486_; 
v___x_484_ = 32;
v___x_485_ = lean_unbox_uint32(v_head_474_);
lean_dec(v_head_474_);
v___x_486_ = lean_uint32_add(v___x_485_, v___x_484_);
v___y_463_ = v_tail_475_;
v___y_464_ = v___x_486_;
goto v___jp_462_;
}
}
}
else
{
lean_object* v_head_487_; lean_object* v_tail_488_; uint32_t v___x_489_; uint32_t v___x_490_; uint8_t v___x_491_; 
v_head_487_ = lean_ctor_get(v_cs_472_, 0);
lean_inc(v_head_487_);
v_tail_488_ = lean_ctor_get(v_cs_472_, 1);
lean_inc(v_tail_488_);
lean_dec_ref_known(v_cs_472_, 2);
v___x_489_ = 97;
v___x_490_ = lean_unbox_uint32(v_head_487_);
v___x_491_ = lean_uint32_dec_le(v___x_489_, v___x_490_);
if (v___x_491_ == 0)
{
uint32_t v___x_492_; 
v___x_492_ = lean_unbox_uint32(v_head_487_);
lean_dec(v_head_487_);
v___y_463_ = v_tail_488_;
v___y_464_ = v___x_492_;
goto v___jp_462_;
}
else
{
uint32_t v___x_493_; uint32_t v___x_494_; uint8_t v___x_495_; 
v___x_493_ = 122;
v___x_494_ = lean_unbox_uint32(v_head_487_);
v___x_495_ = lean_uint32_dec_le(v___x_494_, v___x_493_);
if (v___x_495_ == 0)
{
uint32_t v___x_496_; 
v___x_496_ = lean_unbox_uint32(v_head_487_);
lean_dec(v_head_487_);
v___y_463_ = v_tail_488_;
v___y_464_ = v___x_496_;
goto v___jp_462_;
}
else
{
uint32_t v___x_497_; uint32_t v___x_498_; uint32_t v___x_499_; 
v___x_497_ = 4294967264;
v___x_498_ = lean_unbox_uint32(v_head_487_);
lean_dec(v_head_487_);
v___x_499_ = lean_uint32_add(v___x_498_, v___x_497_);
v___y_463_ = v_tail_488_;
v___y_464_ = v___x_499_;
goto v___jp_462_;
}
}
}
}
}
v___jp_503_:
{
if (v___y_504_ == 0)
{
lean_object* v___x_505_; lean_object* v___x_506_; 
v___x_505_ = lp_vampireReplay_Vampire_sanitize___boxed__const__1;
v___x_506_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_506_, 0, v___x_505_);
lean_ctor_set(v___x_506_, 1, v_cs_502_);
v___y_469_ = v___x_506_;
goto v___jp_468_;
}
else
{
v___y_469_ = v_cs_502_;
goto v___jp_468_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_sanitize___boxed(lean_object* v_name_523_, lean_object* v_upper_524_){
_start:
{
uint8_t v_upper_boxed_525_; lean_object* v_res_526_; 
v_upper_boxed_525_ = lean_unbox(v_upper_524_);
v_res_526_ = lp_vampireReplay_Vampire_sanitize(v_name_523_, v_upper_boxed_525_);
return v_res_526_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_freshName_attempt(lean_object* v_name_528_, lean_object* v_taken_529_, lean_object* v_i_530_){
_start:
{
lean_object* v_zero_531_; uint8_t v_isZero_532_; 
v_zero_531_ = lean_unsigned_to_nat(0u);
v_isZero_532_ = lean_nat_dec_eq(v_i_530_, v_zero_531_);
if (v_isZero_532_ == 1)
{
lean_dec(v_i_530_);
return v_name_528_;
}
else
{
lean_object* v_size_533_; lean_object* v_one_534_; lean_object* v_n_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v_candidate_540_; uint8_t v___x_541_; 
v_size_533_ = lean_ctor_get(v_taken_529_, 0);
v_one_534_ = lean_unsigned_to_nat(1u);
v_n_535_ = lean_nat_sub(v_i_530_, v_one_534_);
lean_dec(v_i_530_);
v___x_536_ = ((lean_object*)(lp_vampireReplay_Vampire_freshName_attempt___closed__0));
lean_inc_ref(v_name_528_);
v___x_537_ = lean_string_append(v_name_528_, v___x_536_);
v___x_538_ = lean_nat_sub(v_size_533_, v_n_535_);
v___x_539_ = l_Nat_reprFast(v___x_538_);
v_candidate_540_ = lean_string_append(v___x_537_, v___x_539_);
lean_dec_ref(v___x_539_);
v___x_541_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Server_Test_Cancel_mkTestTask_spec__0___redArg(v_taken_529_, v_candidate_540_);
if (v___x_541_ == 0)
{
lean_dec(v_n_535_);
lean_dec_ref(v_name_528_);
return v_candidate_540_;
}
else
{
lean_dec_ref(v_candidate_540_);
v_i_530_ = v_n_535_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_freshName_attempt___boxed(lean_object* v_name_543_, lean_object* v_taken_544_, lean_object* v_i_545_){
_start:
{
lean_object* v_res_546_; 
v_res_546_ = lp_vampireReplay_Vampire_freshName_attempt(v_name_543_, v_taken_544_, v_i_545_);
lean_dec_ref(v_taken_544_);
return v_res_546_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_freshName___redArg(lean_object* v_name_547_, lean_object* v_a_548_){
_start:
{
lean_object* v___x_550_; lean_object* v___y_552_; lean_object* v_taken_571_; uint8_t v___x_572_; 
v___x_550_ = lean_st_ref_get(v_a_548_);
v_taken_571_ = lean_ctor_get(v___x_550_, 4);
lean_inc_ref(v_taken_571_);
lean_dec(v___x_550_);
v___x_572_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Server_Test_Cancel_mkTestTask_spec__0___redArg(v_taken_571_, v_name_547_);
if (v___x_572_ == 0)
{
lean_dec_ref(v_taken_571_);
v___y_552_ = v_name_547_;
goto v___jp_551_;
}
else
{
lean_object* v_size_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; 
v_size_573_ = lean_ctor_get(v_taken_571_, 0);
v___x_574_ = lean_unsigned_to_nat(1u);
v___x_575_ = lean_nat_add(v_size_573_, v___x_574_);
v___x_576_ = lp_vampireReplay_Vampire_freshName_attempt(v_name_547_, v_taken_571_, v___x_575_);
lean_dec_ref(v_taken_571_);
v___y_552_ = v___x_576_;
goto v___jp_551_;
}
v___jp_551_:
{
lean_object* v___x_553_; lean_object* v_sorts_554_; lean_object* v_symbols_555_; lean_object* v_vars_556_; lean_object* v_decls_557_; lean_object* v_taken_558_; lean_object* v_varCount_559_; lean_object* v___x_561_; uint8_t v_isShared_562_; uint8_t v_isSharedCheck_570_; 
v___x_553_ = lean_st_ref_take(v_a_548_);
v_sorts_554_ = lean_ctor_get(v___x_553_, 0);
v_symbols_555_ = lean_ctor_get(v___x_553_, 1);
v_vars_556_ = lean_ctor_get(v___x_553_, 2);
v_decls_557_ = lean_ctor_get(v___x_553_, 3);
v_taken_558_ = lean_ctor_get(v___x_553_, 4);
v_varCount_559_ = lean_ctor_get(v___x_553_, 5);
v_isSharedCheck_570_ = !lean_is_exclusive(v___x_553_);
if (v_isSharedCheck_570_ == 0)
{
v___x_561_ = v___x_553_;
v_isShared_562_ = v_isSharedCheck_570_;
goto v_resetjp_560_;
}
else
{
lean_inc(v_varCount_559_);
lean_inc(v_taken_558_);
lean_inc(v_decls_557_);
lean_inc(v_vars_556_);
lean_inc(v_symbols_555_);
lean_inc(v_sorts_554_);
lean_dec(v___x_553_);
v___x_561_ = lean_box(0);
v_isShared_562_ = v_isSharedCheck_570_;
goto v_resetjp_560_;
}
v_resetjp_560_:
{
lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_566_; 
v___x_563_ = lean_box(0);
lean_inc_ref(v___y_552_);
v___x_564_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLogConfig_fromJson_spec__1_spec__2_spec__4_spec__5___redArg(v_taken_558_, v___y_552_, v___x_563_);
if (v_isShared_562_ == 0)
{
lean_ctor_set(v___x_561_, 4, v___x_564_);
v___x_566_ = v___x_561_;
goto v_reusejp_565_;
}
else
{
lean_object* v_reuseFailAlloc_569_; 
v_reuseFailAlloc_569_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_569_, 0, v_sorts_554_);
lean_ctor_set(v_reuseFailAlloc_569_, 1, v_symbols_555_);
lean_ctor_set(v_reuseFailAlloc_569_, 2, v_vars_556_);
lean_ctor_set(v_reuseFailAlloc_569_, 3, v_decls_557_);
lean_ctor_set(v_reuseFailAlloc_569_, 4, v___x_564_);
lean_ctor_set(v_reuseFailAlloc_569_, 5, v_varCount_559_);
v___x_566_ = v_reuseFailAlloc_569_;
goto v_reusejp_565_;
}
v_reusejp_565_:
{
lean_object* v___x_567_; lean_object* v___x_568_; 
v___x_567_ = lean_st_ref_set(v_a_548_, v___x_566_);
v___x_568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_568_, 0, v___y_552_);
return v___x_568_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_freshName___redArg___boxed(lean_object* v_name_577_, lean_object* v_a_578_, lean_object* v_a_579_){
_start:
{
lean_object* v_res_580_; 
v_res_580_ = lp_vampireReplay_Vampire_freshName___redArg(v_name_577_, v_a_578_);
lean_dec(v_a_578_);
return v_res_580_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_freshName(lean_object* v_name_581_, lean_object* v_a_582_, lean_object* v_a_583_, lean_object* v_a_584_, lean_object* v_a_585_, lean_object* v_a_586_){
_start:
{
lean_object* v___x_588_; 
v___x_588_ = lp_vampireReplay_Vampire_freshName___redArg(v_name_581_, v_a_582_);
return v___x_588_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_freshName___boxed(lean_object* v_name_589_, lean_object* v_a_590_, lean_object* v_a_591_, lean_object* v_a_592_, lean_object* v_a_593_, lean_object* v_a_594_, lean_object* v_a_595_){
_start:
{
lean_object* v_res_596_; 
v_res_596_ = lp_vampireReplay_Vampire_freshName(v_name_589_, v_a_590_, v_a_591_, v_a_592_, v_a_593_, v_a_594_);
lean_dec(v_a_594_);
lean_dec_ref(v_a_593_);
lean_dec(v_a_592_);
lean_dec_ref(v_a_591_);
lean_dec(v_a_590_);
return v_res_596_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_arithmeticSort(lean_object* v_00_u03c4_615_){
_start:
{
if (lean_obj_tag(v_00_u03c4_615_) == 4)
{
lean_object* v_declName_616_; lean_object* v___x_617_; uint8_t v___x_618_; 
v_declName_616_ = lean_ctor_get(v_00_u03c4_615_, 0);
v___x_617_ = ((lean_object*)(lp_vampireReplay_Vampire_arithmeticSort___closed__1));
v___x_618_ = lean_name_eq(v_declName_616_, v___x_617_);
if (v___x_618_ == 0)
{
lean_object* v___x_619_; uint8_t v___x_620_; 
v___x_619_ = ((lean_object*)(lp_vampireReplay_Vampire_arithmeticSort___closed__3));
v___x_620_ = lean_name_eq(v_declName_616_, v___x_619_);
if (v___x_620_ == 0)
{
lean_object* v___x_621_; uint8_t v___x_622_; 
v___x_621_ = ((lean_object*)(lp_vampireReplay_Vampire_arithmeticSort___closed__5));
v___x_622_ = lean_name_eq(v_declName_616_, v___x_621_);
if (v___x_622_ == 0)
{
lean_object* v___x_623_; 
v___x_623_ = lean_box(0);
return v___x_623_;
}
else
{
lean_object* v___x_624_; 
v___x_624_ = ((lean_object*)(lp_vampireReplay_Vampire_arithmeticSort___closed__7));
return v___x_624_;
}
}
else
{
lean_object* v___x_625_; 
v___x_625_ = ((lean_object*)(lp_vampireReplay_Vampire_arithmeticSort___closed__9));
return v___x_625_;
}
}
else
{
lean_object* v___x_626_; 
v___x_626_ = ((lean_object*)(lp_vampireReplay_Vampire_arithmeticSort___closed__11));
return v___x_626_;
}
}
else
{
lean_object* v___x_627_; 
v___x_627_ = lean_box(0);
return v___x_627_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_arithmeticSort___boxed(lean_object* v_00_u03c4_628_){
_start:
{
lean_object* v_res_629_; 
v_res_629_ = lp_vampireReplay_Vampire_arithmeticSort(v_00_u03c4_628_);
lean_dec_ref(v_00_u03c4_628_);
return v_res_629_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_numeral_x3f_numeralNat_x3f(lean_object* v_e_635_){
_start:
{
lean_object* v___x_636_; uint8_t v___x_637_; 
v___x_636_ = l_Lean_Expr_cleanupAnnotations(v_e_635_);
v___x_637_ = l_Lean_Expr_isApp(v___x_636_);
if (v___x_637_ == 0)
{
lean_object* v___x_638_; 
lean_dec_ref(v___x_636_);
v___x_638_ = lean_box(0);
return v___x_638_;
}
else
{
lean_object* v___x_639_; uint8_t v___x_640_; 
v___x_639_ = l_Lean_Expr_appFnCleanup___redArg(v___x_636_);
v___x_640_ = l_Lean_Expr_isApp(v___x_639_);
if (v___x_640_ == 0)
{
lean_object* v___x_641_; 
lean_dec_ref(v___x_639_);
v___x_641_ = lean_box(0);
return v___x_641_;
}
else
{
lean_object* v_arg_642_; lean_object* v___x_643_; uint8_t v___x_644_; 
v_arg_642_ = lean_ctor_get(v___x_639_, 1);
lean_inc_ref(v_arg_642_);
v___x_643_ = l_Lean_Expr_appFnCleanup___redArg(v___x_639_);
v___x_644_ = l_Lean_Expr_isApp(v___x_643_);
if (v___x_644_ == 0)
{
lean_object* v___x_645_; 
lean_dec_ref(v___x_643_);
lean_dec_ref(v_arg_642_);
v___x_645_ = lean_box(0);
return v___x_645_;
}
else
{
lean_object* v___x_646_; lean_object* v___x_647_; uint8_t v___x_648_; 
v___x_646_ = l_Lean_Expr_appFnCleanup___redArg(v___x_643_);
v___x_647_ = ((lean_object*)(lp_vampireReplay_Vampire_numeral_x3f_numeralNat_x3f___closed__2));
v___x_648_ = l_Lean_Expr_isConstOf(v___x_646_, v___x_647_);
lean_dec_ref(v___x_646_);
if (v___x_648_ == 0)
{
lean_object* v___x_649_; 
lean_dec_ref(v_arg_642_);
v___x_649_ = lean_box(0);
return v___x_649_;
}
else
{
lean_object* v___x_650_; 
v___x_650_ = l_Lean_Expr_consumeMData(v_arg_642_);
lean_dec_ref(v_arg_642_);
if (lean_obj_tag(v___x_650_) == 9)
{
lean_object* v_a_651_; 
v_a_651_ = lean_ctor_get(v___x_650_, 0);
lean_inc_ref(v_a_651_);
lean_dec_ref_known(v___x_650_, 1);
if (lean_obj_tag(v_a_651_) == 0)
{
lean_object* v_val_652_; lean_object* v___x_654_; uint8_t v_isShared_655_; uint8_t v_isSharedCheck_659_; 
v_val_652_ = lean_ctor_get(v_a_651_, 0);
v_isSharedCheck_659_ = !lean_is_exclusive(v_a_651_);
if (v_isSharedCheck_659_ == 0)
{
v___x_654_ = v_a_651_;
v_isShared_655_ = v_isSharedCheck_659_;
goto v_resetjp_653_;
}
else
{
lean_inc(v_val_652_);
lean_dec(v_a_651_);
v___x_654_ = lean_box(0);
v_isShared_655_ = v_isSharedCheck_659_;
goto v_resetjp_653_;
}
v_resetjp_653_:
{
lean_object* v___x_657_; 
if (v_isShared_655_ == 0)
{
lean_ctor_set_tag(v___x_654_, 1);
v___x_657_ = v___x_654_;
goto v_reusejp_656_;
}
else
{
lean_object* v_reuseFailAlloc_658_; 
v_reuseFailAlloc_658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_658_, 0, v_val_652_);
v___x_657_ = v_reuseFailAlloc_658_;
goto v_reusejp_656_;
}
v_reusejp_656_:
{
return v___x_657_;
}
}
}
else
{
lean_object* v___x_660_; 
lean_dec_ref(v_a_651_);
v___x_660_ = lean_box(0);
return v___x_660_;
}
}
else
{
lean_object* v___x_661_; 
lean_dec_ref(v___x_650_);
v___x_661_ = lean_box(0);
return v___x_661_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_numeral_x3f(lean_object* v_e_667_){
_start:
{
lean_object* v___x_680_; uint8_t v___x_681_; 
lean_inc_ref(v_e_667_);
v___x_680_ = l_Lean_Expr_cleanupAnnotations(v_e_667_);
v___x_681_ = l_Lean_Expr_isApp(v___x_680_);
if (v___x_681_ == 0)
{
lean_dec_ref(v___x_680_);
goto v___jp_668_;
}
else
{
lean_object* v_arg_682_; lean_object* v___x_683_; uint8_t v___x_684_; 
v_arg_682_ = lean_ctor_get(v___x_680_, 1);
lean_inc_ref(v_arg_682_);
v___x_683_ = l_Lean_Expr_appFnCleanup___redArg(v___x_680_);
v___x_684_ = l_Lean_Expr_isApp(v___x_683_);
if (v___x_684_ == 0)
{
lean_dec_ref(v___x_683_);
lean_dec_ref(v_arg_682_);
goto v___jp_668_;
}
else
{
lean_object* v___x_685_; uint8_t v___x_686_; 
v___x_685_ = l_Lean_Expr_appFnCleanup___redArg(v___x_683_);
v___x_686_ = l_Lean_Expr_isApp(v___x_685_);
if (v___x_686_ == 0)
{
lean_dec_ref(v___x_685_);
lean_dec_ref(v_arg_682_);
goto v___jp_668_;
}
else
{
lean_object* v___x_687_; lean_object* v___x_688_; uint8_t v___x_689_; 
v___x_687_ = l_Lean_Expr_appFnCleanup___redArg(v___x_685_);
v___x_688_ = ((lean_object*)(lp_vampireReplay_Vampire_numeral_x3f___closed__2));
v___x_689_ = l_Lean_Expr_isConstOf(v___x_687_, v___x_688_);
lean_dec_ref(v___x_687_);
if (v___x_689_ == 0)
{
lean_dec_ref(v_arg_682_);
goto v___jp_668_;
}
else
{
lean_object* v___x_690_; 
lean_dec_ref(v_e_667_);
v___x_690_ = lp_vampireReplay_Vampire_numeral_x3f_numeralNat_x3f(v_arg_682_);
if (lean_obj_tag(v___x_690_) == 0)
{
lean_object* v___x_691_; 
v___x_691_ = lean_box(0);
return v___x_691_;
}
else
{
lean_object* v_val_692_; lean_object* v___x_694_; uint8_t v_isShared_695_; uint8_t v_isSharedCheck_701_; 
v_val_692_ = lean_ctor_get(v___x_690_, 0);
v_isSharedCheck_701_ = !lean_is_exclusive(v___x_690_);
if (v_isSharedCheck_701_ == 0)
{
v___x_694_ = v___x_690_;
v_isShared_695_ = v_isSharedCheck_701_;
goto v_resetjp_693_;
}
else
{
lean_inc(v_val_692_);
lean_dec(v___x_690_);
v___x_694_ = lean_box(0);
v_isShared_695_ = v_isSharedCheck_701_;
goto v_resetjp_693_;
}
v_resetjp_693_:
{
lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_699_; 
v___x_696_ = lean_nat_to_int(v_val_692_);
v___x_697_ = lean_int_neg(v___x_696_);
lean_dec(v___x_696_);
if (v_isShared_695_ == 0)
{
lean_ctor_set(v___x_694_, 0, v___x_697_);
v___x_699_ = v___x_694_;
goto v_reusejp_698_;
}
else
{
lean_object* v_reuseFailAlloc_700_; 
v_reuseFailAlloc_700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_700_, 0, v___x_697_);
v___x_699_ = v_reuseFailAlloc_700_;
goto v_reusejp_698_;
}
v_reusejp_698_:
{
return v___x_699_;
}
}
}
}
}
}
}
v___jp_668_:
{
lean_object* v___x_669_; 
v___x_669_ = lp_vampireReplay_Vampire_numeral_x3f_numeralNat_x3f(v_e_667_);
if (lean_obj_tag(v___x_669_) == 0)
{
lean_object* v___x_670_; 
v___x_670_ = lean_box(0);
return v___x_670_;
}
else
{
lean_object* v_val_671_; lean_object* v___x_673_; uint8_t v_isShared_674_; uint8_t v_isSharedCheck_679_; 
v_val_671_ = lean_ctor_get(v___x_669_, 0);
v_isSharedCheck_679_ = !lean_is_exclusive(v___x_669_);
if (v_isSharedCheck_679_ == 0)
{
v___x_673_ = v___x_669_;
v_isShared_674_ = v_isSharedCheck_679_;
goto v_resetjp_672_;
}
else
{
lean_inc(v_val_671_);
lean_dec(v___x_669_);
v___x_673_ = lean_box(0);
v_isShared_674_ = v_isSharedCheck_679_;
goto v_resetjp_672_;
}
v_resetjp_672_:
{
lean_object* v___x_675_; lean_object* v___x_677_; 
v___x_675_ = lean_nat_to_int(v_val_671_);
if (v_isShared_674_ == 0)
{
lean_ctor_set(v___x_673_, 0, v___x_675_);
v___x_677_ = v___x_673_;
goto v_reusejp_676_;
}
else
{
lean_object* v_reuseFailAlloc_678_; 
v_reuseFailAlloc_678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_678_, 0, v___x_675_);
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
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_renderNumeral(lean_object* v_sort_704_, lean_object* v_n_705_){
_start:
{
lean_object* v___x_706_; uint8_t v___x_707_; 
v___x_706_ = ((lean_object*)(lp_vampireReplay_Vampire_arithmeticSort___closed__8));
v___x_707_ = lean_string_dec_eq(v_sort_704_, v___x_706_);
if (v___x_707_ == 0)
{
lean_object* v___x_708_; uint8_t v___x_709_; 
v___x_708_ = ((lean_object*)(lp_vampireReplay_Vampire_arithmeticSort___closed__6));
v___x_709_ = lean_string_dec_eq(v_sort_704_, v___x_708_);
if (v___x_709_ == 0)
{
lean_object* v___x_710_; 
v___x_710_ = l_Int_repr(v_n_705_);
return v___x_710_;
}
else
{
lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; 
v___x_711_ = l_Int_repr(v_n_705_);
v___x_712_ = ((lean_object*)(lp_vampireReplay_Vampire_renderNumeral___closed__0));
v___x_713_ = lean_string_append(v___x_711_, v___x_712_);
return v___x_713_;
}
}
else
{
lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; 
v___x_714_ = l_Int_repr(v_n_705_);
v___x_715_ = ((lean_object*)(lp_vampireReplay_Vampire_renderNumeral___closed__1));
v___x_716_ = lean_string_append(v___x_714_, v___x_715_);
return v___x_716_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_renderNumeral___boxed(lean_object* v_sort_717_, lean_object* v_n_718_){
_start:
{
lean_object* v_res_719_; 
v_res_719_ = lp_vampireReplay_Vampire_renderNumeral(v_sort_717_, v_n_718_);
lean_dec(v_n_718_);
lean_dec_ref(v_sort_717_);
return v_res_719_;
}
}
LEAN_EXPORT uint8_t lp_vampireReplay_Vampire_isPropType(lean_object* v_e_720_){
_start:
{
if (lean_obj_tag(v_e_720_) == 3)
{
lean_object* v_u_721_; 
v_u_721_ = lean_ctor_get(v_e_720_, 0);
if (lean_obj_tag(v_u_721_) == 0)
{
uint8_t v___x_722_; 
v___x_722_ = 1;
return v___x_722_;
}
else
{
uint8_t v___x_723_; 
v___x_723_ = 0;
return v___x_723_;
}
}
else
{
uint8_t v___x_724_; 
v___x_724_ = 0;
return v___x_724_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_isPropType___boxed(lean_object* v_e_725_){
_start:
{
uint8_t v_res_726_; lean_object* v_r_727_; 
v_res_726_ = lp_vampireReplay_Vampire_isPropType(v_e_725_);
lean_dec_ref(v_e_725_);
v_r_727_ = lean_box(v_res_726_);
return v_r_727_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_isSortType(lean_object* v_e_728_, lean_object* v_a_729_, lean_object* v_a_730_, lean_object* v_a_731_, lean_object* v_a_732_){
_start:
{
uint8_t v___x_734_; 
v___x_734_ = lp_vampireReplay_Vampire_isPropType(v_e_728_);
if (v___x_734_ == 0)
{
if (lean_obj_tag(v_e_728_) == 3)
{
lean_object* v___x_735_; lean_object* v___x_736_; 
lean_dec_ref_known(v_e_728_, 1);
v___x_735_ = lean_box(v___x_734_);
v___x_736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_736_, 0, v___x_735_);
return v___x_736_;
}
else
{
if (v___x_734_ == 0)
{
lean_object* v___x_737_; 
lean_inc(v_a_732_);
lean_inc_ref(v_a_731_);
lean_inc(v_a_730_);
lean_inc_ref(v_a_729_);
v___x_737_ = lean_infer_type(v_e_728_, v_a_729_, v_a_730_, v_a_731_, v_a_732_);
if (lean_obj_tag(v___x_737_) == 0)
{
lean_object* v_a_738_; lean_object* v___x_739_; 
v_a_738_ = lean_ctor_get(v___x_737_, 0);
lean_inc(v_a_738_);
lean_dec_ref_known(v___x_737_, 1);
lean_inc(v_a_732_);
lean_inc_ref(v_a_731_);
lean_inc(v_a_730_);
lean_inc_ref(v_a_729_);
v___x_739_ = lean_whnf(v_a_738_, v_a_729_, v_a_730_, v_a_731_, v_a_732_);
if (lean_obj_tag(v___x_739_) == 0)
{
lean_object* v_a_740_; lean_object* v___x_742_; uint8_t v_isShared_743_; uint8_t v_isSharedCheck_753_; 
v_a_740_ = lean_ctor_get(v___x_739_, 0);
v_isSharedCheck_753_ = !lean_is_exclusive(v___x_739_);
if (v_isSharedCheck_753_ == 0)
{
v___x_742_ = v___x_739_;
v_isShared_743_ = v_isSharedCheck_753_;
goto v_resetjp_741_;
}
else
{
lean_inc(v_a_740_);
lean_dec(v___x_739_);
v___x_742_ = lean_box(0);
v_isShared_743_ = v_isSharedCheck_753_;
goto v_resetjp_741_;
}
v_resetjp_741_:
{
if (lean_obj_tag(v_a_740_) == 3)
{
uint8_t v___x_744_; lean_object* v___x_745_; lean_object* v___x_747_; 
lean_dec_ref_known(v_a_740_, 1);
v___x_744_ = 1;
v___x_745_ = lean_box(v___x_744_);
if (v_isShared_743_ == 0)
{
lean_ctor_set(v___x_742_, 0, v___x_745_);
v___x_747_ = v___x_742_;
goto v_reusejp_746_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v___x_745_);
v___x_747_ = v_reuseFailAlloc_748_;
goto v_reusejp_746_;
}
v_reusejp_746_:
{
return v___x_747_;
}
}
else
{
lean_object* v___x_749_; lean_object* v___x_751_; 
lean_dec(v_a_740_);
v___x_749_ = lean_box(v___x_734_);
if (v_isShared_743_ == 0)
{
lean_ctor_set(v___x_742_, 0, v___x_749_);
v___x_751_ = v___x_742_;
goto v_reusejp_750_;
}
else
{
lean_object* v_reuseFailAlloc_752_; 
v_reuseFailAlloc_752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_752_, 0, v___x_749_);
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
else
{
lean_object* v_a_754_; lean_object* v___x_756_; uint8_t v_isShared_757_; uint8_t v_isSharedCheck_761_; 
v_a_754_ = lean_ctor_get(v___x_739_, 0);
v_isSharedCheck_761_ = !lean_is_exclusive(v___x_739_);
if (v_isSharedCheck_761_ == 0)
{
v___x_756_ = v___x_739_;
v_isShared_757_ = v_isSharedCheck_761_;
goto v_resetjp_755_;
}
else
{
lean_inc(v_a_754_);
lean_dec(v___x_739_);
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
v_a_762_ = lean_ctor_get(v___x_737_, 0);
v_isSharedCheck_769_ = !lean_is_exclusive(v___x_737_);
if (v_isSharedCheck_769_ == 0)
{
v___x_764_ = v___x_737_;
v_isShared_765_ = v_isSharedCheck_769_;
goto v_resetjp_763_;
}
else
{
lean_inc(v_a_762_);
lean_dec(v___x_737_);
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
lean_object* v___x_770_; lean_object* v___x_771_; 
lean_dec_ref(v_e_728_);
v___x_770_ = lean_box(v___x_734_);
v___x_771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_771_, 0, v___x_770_);
return v___x_771_;
}
}
}
else
{
uint8_t v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; 
lean_dec_ref(v_e_728_);
v___x_772_ = 0;
v___x_773_ = lean_box(v___x_772_);
v___x_774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_774_, 0, v___x_773_);
return v___x_774_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_isSortType___boxed(lean_object* v_e_775_, lean_object* v_a_776_, lean_object* v_a_777_, lean_object* v_a_778_, lean_object* v_a_779_, lean_object* v_a_780_){
_start:
{
lean_object* v_res_781_; 
v_res_781_ = lp_vampireReplay_Vampire_isSortType(v_e_775_, v_a_776_, v_a_777_, v_a_778_, v_a_779_);
lean_dec(v_a_779_);
lean_dec_ref(v_a_778_);
lean_dec(v_a_777_);
lean_dec_ref(v_a_776_);
return v_res_781_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_sortName___redArg(lean_object* v_e_786_, lean_object* v_a_787_, lean_object* v_a_788_, lean_object* v_a_789_, lean_object* v_a_790_){
_start:
{
lean_object* v_hint_793_; lean_object* v___y_794_; lean_object* v___x_839_; lean_object* v_sorts_840_; lean_object* v___x_841_; 
v___x_839_ = lean_st_ref_get(v_a_787_);
v_sorts_840_ = lean_ctor_get(v___x_839_, 0);
lean_inc_ref(v_sorts_840_);
lean_dec(v___x_839_);
v___x_841_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__1___redArg(v_sorts_840_, v_e_786_);
lean_dec_ref(v_sorts_840_);
if (lean_obj_tag(v___x_841_) == 1)
{
lean_object* v_val_842_; lean_object* v___x_844_; uint8_t v_isShared_845_; uint8_t v_isSharedCheck_849_; 
lean_dec_ref(v_e_786_);
v_val_842_ = lean_ctor_get(v___x_841_, 0);
v_isSharedCheck_849_ = !lean_is_exclusive(v___x_841_);
if (v_isSharedCheck_849_ == 0)
{
v___x_844_ = v___x_841_;
v_isShared_845_ = v_isSharedCheck_849_;
goto v_resetjp_843_;
}
else
{
lean_inc(v_val_842_);
lean_dec(v___x_841_);
v___x_844_ = lean_box(0);
v_isShared_845_ = v_isSharedCheck_849_;
goto v_resetjp_843_;
}
v_resetjp_843_:
{
lean_object* v___x_847_; 
if (v_isShared_845_ == 0)
{
lean_ctor_set_tag(v___x_844_, 0);
v___x_847_ = v___x_844_;
goto v_reusejp_846_;
}
else
{
lean_object* v_reuseFailAlloc_848_; 
v_reuseFailAlloc_848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_848_, 0, v_val_842_);
v___x_847_ = v_reuseFailAlloc_848_;
goto v_reusejp_846_;
}
v_reusejp_846_:
{
return v___x_847_;
}
}
}
else
{
lean_object* v___x_850_; 
lean_dec(v___x_841_);
v___x_850_ = lp_vampireReplay_Vampire_arithmeticSort(v_e_786_);
if (lean_obj_tag(v___x_850_) == 1)
{
lean_object* v_val_851_; lean_object* v___x_853_; uint8_t v_isShared_854_; uint8_t v_isSharedCheck_874_; 
v_val_851_ = lean_ctor_get(v___x_850_, 0);
v_isSharedCheck_874_ = !lean_is_exclusive(v___x_850_);
if (v_isSharedCheck_874_ == 0)
{
v___x_853_ = v___x_850_;
v_isShared_854_ = v_isSharedCheck_874_;
goto v_resetjp_852_;
}
else
{
lean_inc(v_val_851_);
lean_dec(v___x_850_);
v___x_853_ = lean_box(0);
v_isShared_854_ = v_isSharedCheck_874_;
goto v_resetjp_852_;
}
v_resetjp_852_:
{
lean_object* v___x_855_; lean_object* v_sorts_856_; lean_object* v_symbols_857_; lean_object* v_vars_858_; lean_object* v_decls_859_; lean_object* v_taken_860_; lean_object* v_varCount_861_; lean_object* v___x_863_; uint8_t v_isShared_864_; uint8_t v_isSharedCheck_873_; 
v___x_855_ = lean_st_ref_take(v_a_787_);
v_sorts_856_ = lean_ctor_get(v___x_855_, 0);
v_symbols_857_ = lean_ctor_get(v___x_855_, 1);
v_vars_858_ = lean_ctor_get(v___x_855_, 2);
v_decls_859_ = lean_ctor_get(v___x_855_, 3);
v_taken_860_ = lean_ctor_get(v___x_855_, 4);
v_varCount_861_ = lean_ctor_get(v___x_855_, 5);
v_isSharedCheck_873_ = !lean_is_exclusive(v___x_855_);
if (v_isSharedCheck_873_ == 0)
{
v___x_863_ = v___x_855_;
v_isShared_864_ = v_isSharedCheck_873_;
goto v_resetjp_862_;
}
else
{
lean_inc(v_varCount_861_);
lean_inc(v_taken_860_);
lean_inc(v_decls_859_);
lean_inc(v_vars_858_);
lean_inc(v_symbols_857_);
lean_inc(v_sorts_856_);
lean_dec(v___x_855_);
v___x_863_ = lean_box(0);
v_isShared_864_ = v_isSharedCheck_873_;
goto v_resetjp_862_;
}
v_resetjp_862_:
{
lean_object* v___x_865_; lean_object* v___x_867_; 
lean_inc(v_val_851_);
v___x_865_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2___redArg(v_sorts_856_, v_e_786_, v_val_851_);
if (v_isShared_864_ == 0)
{
lean_ctor_set(v___x_863_, 0, v___x_865_);
v___x_867_ = v___x_863_;
goto v_reusejp_866_;
}
else
{
lean_object* v_reuseFailAlloc_872_; 
v_reuseFailAlloc_872_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_872_, 0, v___x_865_);
lean_ctor_set(v_reuseFailAlloc_872_, 1, v_symbols_857_);
lean_ctor_set(v_reuseFailAlloc_872_, 2, v_vars_858_);
lean_ctor_set(v_reuseFailAlloc_872_, 3, v_decls_859_);
lean_ctor_set(v_reuseFailAlloc_872_, 4, v_taken_860_);
lean_ctor_set(v_reuseFailAlloc_872_, 5, v_varCount_861_);
v___x_867_ = v_reuseFailAlloc_872_;
goto v_reusejp_866_;
}
v_reusejp_866_:
{
lean_object* v___x_868_; lean_object* v___x_870_; 
v___x_868_ = lean_st_ref_set(v_a_787_, v___x_867_);
if (v_isShared_854_ == 0)
{
lean_ctor_set_tag(v___x_853_, 0);
v___x_870_ = v___x_853_;
goto v_reusejp_869_;
}
else
{
lean_object* v_reuseFailAlloc_871_; 
v_reuseFailAlloc_871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_871_, 0, v_val_851_);
v___x_870_ = v_reuseFailAlloc_871_;
goto v_reusejp_869_;
}
v_reusejp_869_:
{
return v___x_870_;
}
}
}
}
}
else
{
lean_dec(v___x_850_);
switch(lean_obj_tag(v_e_786_))
{
case 1:
{
lean_object* v_fvarId_875_; lean_object* v___x_876_; 
v_fvarId_875_ = lean_ctor_get(v_e_786_, 0);
lean_inc(v_fvarId_875_);
v___x_876_ = l_Lean_FVarId_getUserName___redArg(v_fvarId_875_, v_a_788_, v_a_789_, v_a_790_);
if (lean_obj_tag(v___x_876_) == 0)
{
lean_object* v_a_877_; uint8_t v___x_878_; lean_object* v___x_879_; 
v_a_877_ = lean_ctor_get(v___x_876_, 0);
lean_inc(v_a_877_);
lean_dec_ref_known(v___x_876_, 1);
v___x_878_ = 1;
v___x_879_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_a_877_, v___x_878_);
v_hint_793_ = v___x_879_;
v___y_794_ = v_a_787_;
goto v___jp_792_;
}
else
{
lean_object* v_a_880_; lean_object* v___x_882_; uint8_t v_isShared_883_; uint8_t v_isSharedCheck_887_; 
lean_dec_ref_known(v_e_786_, 1);
v_a_880_ = lean_ctor_get(v___x_876_, 0);
v_isSharedCheck_887_ = !lean_is_exclusive(v___x_876_);
if (v_isSharedCheck_887_ == 0)
{
v___x_882_ = v___x_876_;
v_isShared_883_ = v_isSharedCheck_887_;
goto v_resetjp_881_;
}
else
{
lean_inc(v_a_880_);
lean_dec(v___x_876_);
v___x_882_ = lean_box(0);
v_isShared_883_ = v_isSharedCheck_887_;
goto v_resetjp_881_;
}
v_resetjp_881_:
{
lean_object* v___x_885_; 
if (v_isShared_883_ == 0)
{
v___x_885_ = v___x_882_;
goto v_reusejp_884_;
}
else
{
lean_object* v_reuseFailAlloc_886_; 
v_reuseFailAlloc_886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_886_, 0, v_a_880_);
v___x_885_ = v_reuseFailAlloc_886_;
goto v_reusejp_884_;
}
v_reusejp_884_:
{
return v___x_885_;
}
}
}
}
case 4:
{
lean_object* v_declName_888_; lean_object* v___x_889_; 
v_declName_888_ = lean_ctor_get(v_e_786_, 0);
v___x_889_ = l_Lean_Name_getString_x21(v_declName_888_);
v_hint_793_ = v___x_889_;
v___y_794_ = v_a_787_;
goto v___jp_792_;
}
default: 
{
lean_object* v___x_890_; 
v___x_890_ = ((lean_object*)(lp_vampireReplay_Vampire_sortName___redArg___closed__3));
v_hint_793_ = v___x_890_;
v___y_794_ = v_a_787_;
goto v___jp_792_;
}
}
}
}
v___jp_792_:
{
uint8_t v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v_a_798_; lean_object* v___x_800_; uint8_t v_isShared_801_; uint8_t v_isSharedCheck_838_; 
v___x_795_ = 0;
v___x_796_ = lp_vampireReplay_Vampire_sanitize(v_hint_793_, v___x_795_);
v___x_797_ = lp_vampireReplay_Vampire_freshName___redArg(v___x_796_, v___y_794_);
v_a_798_ = lean_ctor_get(v___x_797_, 0);
v_isSharedCheck_838_ = !lean_is_exclusive(v___x_797_);
if (v_isSharedCheck_838_ == 0)
{
v___x_800_ = v___x_797_;
v_isShared_801_ = v_isSharedCheck_838_;
goto v_resetjp_799_;
}
else
{
lean_inc(v_a_798_);
lean_dec(v___x_797_);
v___x_800_ = lean_box(0);
v_isShared_801_ = v_isSharedCheck_838_;
goto v_resetjp_799_;
}
v_resetjp_799_:
{
lean_object* v___x_802_; lean_object* v_decls_803_; lean_object* v_sorts_804_; lean_object* v_symbols_805_; lean_object* v_vars_806_; lean_object* v_taken_807_; lean_object* v_varCount_808_; lean_object* v___x_810_; uint8_t v_isShared_811_; uint8_t v_isSharedCheck_837_; 
v___x_802_ = lean_st_ref_take(v___y_794_);
v_decls_803_ = lean_ctor_get(v___x_802_, 3);
v_sorts_804_ = lean_ctor_get(v___x_802_, 0);
v_symbols_805_ = lean_ctor_get(v___x_802_, 1);
v_vars_806_ = lean_ctor_get(v___x_802_, 2);
v_taken_807_ = lean_ctor_get(v___x_802_, 4);
v_varCount_808_ = lean_ctor_get(v___x_802_, 5);
v_isSharedCheck_837_ = !lean_is_exclusive(v___x_802_);
if (v_isSharedCheck_837_ == 0)
{
v___x_810_ = v___x_802_;
v_isShared_811_ = v_isSharedCheck_837_;
goto v_resetjp_809_;
}
else
{
lean_inc(v_varCount_808_);
lean_inc(v_taken_807_);
lean_inc(v_decls_803_);
lean_inc(v_vars_806_);
lean_inc(v_symbols_805_);
lean_inc(v_sorts_804_);
lean_dec(v___x_802_);
v___x_810_ = lean_box(0);
v_isShared_811_ = v_isSharedCheck_837_;
goto v_resetjp_809_;
}
v_resetjp_809_:
{
lean_object* v_types_812_; lean_object* v_symbols_813_; lean_object* v___x_815_; uint8_t v_isShared_816_; uint8_t v_isSharedCheck_836_; 
v_types_812_ = lean_ctor_get(v_decls_803_, 0);
v_symbols_813_ = lean_ctor_get(v_decls_803_, 1);
v_isSharedCheck_836_ = !lean_is_exclusive(v_decls_803_);
if (v_isSharedCheck_836_ == 0)
{
v___x_815_ = v_decls_803_;
v_isShared_816_ = v_isSharedCheck_836_;
goto v_resetjp_814_;
}
else
{
lean_inc(v_symbols_813_);
lean_inc(v_types_812_);
lean_dec(v_decls_803_);
v___x_815_ = lean_box(0);
v_isShared_816_ = v_isSharedCheck_836_;
goto v_resetjp_814_;
}
v_resetjp_814_:
{
lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_827_; 
lean_inc(v_a_798_);
v___x_817_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2___redArg(v_sorts_804_, v_e_786_, v_a_798_);
v___x_818_ = ((lean_object*)(lp_vampireReplay_Vampire_sortName___redArg___closed__0));
v___x_819_ = lean_string_append(v___x_818_, v_a_798_);
v___x_820_ = ((lean_object*)(lp_vampireReplay_Vampire_sortName___redArg___closed__1));
v___x_821_ = lean_string_append(v___x_819_, v___x_820_);
v___x_822_ = lean_string_append(v___x_821_, v_a_798_);
v___x_823_ = ((lean_object*)(lp_vampireReplay_Vampire_sortName___redArg___closed__2));
v___x_824_ = lean_string_append(v___x_822_, v___x_823_);
v___x_825_ = lean_array_push(v_types_812_, v___x_824_);
if (v_isShared_816_ == 0)
{
lean_ctor_set(v___x_815_, 0, v___x_825_);
v___x_827_ = v___x_815_;
goto v_reusejp_826_;
}
else
{
lean_object* v_reuseFailAlloc_835_; 
v_reuseFailAlloc_835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_835_, 0, v___x_825_);
lean_ctor_set(v_reuseFailAlloc_835_, 1, v_symbols_813_);
v___x_827_ = v_reuseFailAlloc_835_;
goto v_reusejp_826_;
}
v_reusejp_826_:
{
lean_object* v___x_829_; 
if (v_isShared_811_ == 0)
{
lean_ctor_set(v___x_810_, 3, v___x_827_);
lean_ctor_set(v___x_810_, 0, v___x_817_);
v___x_829_ = v___x_810_;
goto v_reusejp_828_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v___x_817_);
lean_ctor_set(v_reuseFailAlloc_834_, 1, v_symbols_805_);
lean_ctor_set(v_reuseFailAlloc_834_, 2, v_vars_806_);
lean_ctor_set(v_reuseFailAlloc_834_, 3, v___x_827_);
lean_ctor_set(v_reuseFailAlloc_834_, 4, v_taken_807_);
lean_ctor_set(v_reuseFailAlloc_834_, 5, v_varCount_808_);
v___x_829_ = v_reuseFailAlloc_834_;
goto v_reusejp_828_;
}
v_reusejp_828_:
{
lean_object* v___x_830_; lean_object* v___x_832_; 
v___x_830_ = lean_st_ref_set(v___y_794_, v___x_829_);
if (v_isShared_801_ == 0)
{
v___x_832_ = v___x_800_;
goto v_reusejp_831_;
}
else
{
lean_object* v_reuseFailAlloc_833_; 
v_reuseFailAlloc_833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_833_, 0, v_a_798_);
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
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_sortName___redArg___boxed(lean_object* v_e_891_, lean_object* v_a_892_, lean_object* v_a_893_, lean_object* v_a_894_, lean_object* v_a_895_, lean_object* v_a_896_){
_start:
{
lean_object* v_res_897_; 
v_res_897_ = lp_vampireReplay_Vampire_sortName___redArg(v_e_891_, v_a_892_, v_a_893_, v_a_894_, v_a_895_);
lean_dec(v_a_895_);
lean_dec_ref(v_a_894_);
lean_dec_ref(v_a_893_);
lean_dec(v_a_892_);
return v_res_897_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_sortName(lean_object* v_e_898_, lean_object* v_a_899_, lean_object* v_a_900_, lean_object* v_a_901_, lean_object* v_a_902_, lean_object* v_a_903_){
_start:
{
lean_object* v___x_905_; 
v___x_905_ = lp_vampireReplay_Vampire_sortName___redArg(v_e_898_, v_a_899_, v_a_900_, v_a_902_, v_a_903_);
return v___x_905_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_sortName___boxed(lean_object* v_e_906_, lean_object* v_a_907_, lean_object* v_a_908_, lean_object* v_a_909_, lean_object* v_a_910_, lean_object* v_a_911_, lean_object* v_a_912_){
_start:
{
lean_object* v_res_913_; 
v_res_913_ = lp_vampireReplay_Vampire_sortName(v_e_906_, v_a_907_, v_a_908_, v_a_909_, v_a_910_, v_a_911_);
lean_dec(v_a_911_);
lean_dec_ref(v_a_910_);
lean_dec(v_a_909_);
lean_dec_ref(v_a_908_);
lean_dec(v_a_907_);
return v_res_913_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_forallTelescopeReducing___at___00Vampire_signatureOf_spec__3___redArg___lam__0(lean_object* v_k_914_, lean_object* v___y_915_, lean_object* v_b_916_, lean_object* v_c_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_){
_start:
{
lean_object* v___x_923_; 
lean_inc(v___y_921_);
lean_inc_ref(v___y_920_);
lean_inc(v___y_919_);
lean_inc_ref(v___y_918_);
lean_inc(v___y_915_);
v___x_923_ = lean_apply_8(v_k_914_, v_b_916_, v_c_917_, v___y_915_, v___y_918_, v___y_919_, v___y_920_, v___y_921_, lean_box(0));
return v___x_923_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_forallTelescopeReducing___at___00Vampire_signatureOf_spec__3___redArg___lam__0___boxed(lean_object* v_k_924_, lean_object* v___y_925_, lean_object* v_b_926_, lean_object* v_c_927_, lean_object* v___y_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_){
_start:
{
lean_object* v_res_933_; 
v_res_933_ = lp_vampireReplay_Lean_Meta_forallTelescopeReducing___at___00Vampire_signatureOf_spec__3___redArg___lam__0(v_k_924_, v___y_925_, v_b_926_, v_c_927_, v___y_928_, v___y_929_, v___y_930_, v___y_931_);
lean_dec(v___y_931_);
lean_dec_ref(v___y_930_);
lean_dec(v___y_929_);
lean_dec_ref(v___y_928_);
lean_dec(v___y_925_);
return v_res_933_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_forallTelescopeReducing___at___00Vampire_signatureOf_spec__3___redArg(lean_object* v_type_934_, lean_object* v_k_935_, uint8_t v_cleanupAnnotations_936_, uint8_t v_whnfType_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_, lean_object* v___y_942_){
_start:
{
lean_object* v___f_944_; lean_object* v___x_945_; 
lean_inc(v___y_938_);
v___f_944_ = lean_alloc_closure((void*)(lp_vampireReplay_Lean_Meta_forallTelescopeReducing___at___00Vampire_signatureOf_spec__3___redArg___lam__0___boxed), 9, 2);
lean_closure_set(v___f_944_, 0, v_k_935_);
lean_closure_set(v___f_944_, 1, v___y_938_);
v___x_945_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp___redArg(v_type_934_, v___f_944_, v_cleanupAnnotations_936_, v_whnfType_937_, v___y_939_, v___y_940_, v___y_941_, v___y_942_);
if (lean_obj_tag(v___x_945_) == 0)
{
return v___x_945_;
}
else
{
lean_object* v_a_946_; lean_object* v___x_948_; uint8_t v_isShared_949_; uint8_t v_isSharedCheck_953_; 
v_a_946_ = lean_ctor_get(v___x_945_, 0);
v_isSharedCheck_953_ = !lean_is_exclusive(v___x_945_);
if (v_isSharedCheck_953_ == 0)
{
v___x_948_ = v___x_945_;
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
else
{
lean_inc(v_a_946_);
lean_dec(v___x_945_);
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
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_forallTelescopeReducing___at___00Vampire_signatureOf_spec__3___redArg___boxed(lean_object* v_type_954_, lean_object* v_k_955_, lean_object* v_cleanupAnnotations_956_, lean_object* v_whnfType_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_964_; uint8_t v_whnfType_boxed_965_; lean_object* v_res_966_; 
v_cleanupAnnotations_boxed_964_ = lean_unbox(v_cleanupAnnotations_956_);
v_whnfType_boxed_965_ = lean_unbox(v_whnfType_957_);
v_res_966_ = lp_vampireReplay_Lean_Meta_forallTelescopeReducing___at___00Vampire_signatureOf_spec__3___redArg(v_type_954_, v_k_955_, v_cleanupAnnotations_boxed_964_, v_whnfType_boxed_965_, v___y_958_, v___y_959_, v___y_960_, v___y_961_, v___y_962_);
lean_dec(v___y_962_);
lean_dec_ref(v___y_961_);
lean_dec(v___y_960_);
lean_dec_ref(v___y_959_);
lean_dec(v___y_958_);
return v_res_966_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_forallTelescopeReducing___at___00Vampire_signatureOf_spec__3(lean_object* v_00_u03b1_967_, lean_object* v_type_968_, lean_object* v_k_969_, uint8_t v_cleanupAnnotations_970_, uint8_t v_whnfType_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_){
_start:
{
lean_object* v___x_978_; 
v___x_978_ = lp_vampireReplay_Lean_Meta_forallTelescopeReducing___at___00Vampire_signatureOf_spec__3___redArg(v_type_968_, v_k_969_, v_cleanupAnnotations_970_, v_whnfType_971_, v___y_972_, v___y_973_, v___y_974_, v___y_975_, v___y_976_);
return v___x_978_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_forallTelescopeReducing___at___00Vampire_signatureOf_spec__3___boxed(lean_object* v_00_u03b1_979_, lean_object* v_type_980_, lean_object* v_k_981_, lean_object* v_cleanupAnnotations_982_, lean_object* v_whnfType_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_990_; uint8_t v_whnfType_boxed_991_; lean_object* v_res_992_; 
v_cleanupAnnotations_boxed_990_ = lean_unbox(v_cleanupAnnotations_982_);
v_whnfType_boxed_991_ = lean_unbox(v_whnfType_983_);
v_res_992_ = lp_vampireReplay_Lean_Meta_forallTelescopeReducing___at___00Vampire_signatureOf_spec__3(v_00_u03b1_979_, v_type_980_, v_k_981_, v_cleanupAnnotations_boxed_990_, v_whnfType_boxed_991_, v___y_984_, v___y_985_, v___y_986_, v___y_987_, v___y_988_);
lean_dec(v___y_988_);
lean_dec_ref(v___y_987_);
lean_dec(v___y_986_);
lean_dec_ref(v___y_985_);
lean_dec(v___y_984_);
return v_res_992_;
}
}
LEAN_EXPORT uint8_t lp_vampireReplay___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Vampire_signatureOf_spec__0(lean_object* v_locals_993_, lean_object* v_e_994_){
_start:
{
uint8_t v___x_995_; lean_object* v_d_997_; lean_object* v_b_998_; 
v___x_995_ = l_Lean_Expr_hasFVar(v_e_994_);
if (v___x_995_ == 0)
{
return v___x_995_;
}
else
{
switch(lean_obj_tag(v_e_994_))
{
case 7:
{
lean_object* v_binderType_1001_; lean_object* v_body_1002_; 
v_binderType_1001_ = lean_ctor_get(v_e_994_, 1);
v_body_1002_ = lean_ctor_get(v_e_994_, 2);
v_d_997_ = v_binderType_1001_;
v_b_998_ = v_body_1002_;
goto v___jp_996_;
}
case 6:
{
lean_object* v_binderType_1003_; lean_object* v_body_1004_; 
v_binderType_1003_ = lean_ctor_get(v_e_994_, 1);
v_body_1004_ = lean_ctor_get(v_e_994_, 2);
v_d_997_ = v_binderType_1003_;
v_b_998_ = v_body_1004_;
goto v___jp_996_;
}
case 10:
{
lean_object* v_expr_1005_; 
v_expr_1005_ = lean_ctor_get(v_e_994_, 1);
v_e_994_ = v_expr_1005_;
goto _start;
}
case 8:
{
lean_object* v_type_1007_; lean_object* v_value_1008_; lean_object* v_body_1009_; uint8_t v___x_1010_; 
v_type_1007_ = lean_ctor_get(v_e_994_, 1);
v_value_1008_ = lean_ctor_get(v_e_994_, 2);
v_body_1009_ = lean_ctor_get(v_e_994_, 3);
v___x_1010_ = lp_vampireReplay___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Vampire_signatureOf_spec__0(v_locals_993_, v_type_1007_);
if (v___x_1010_ == 0)
{
uint8_t v___x_1011_; 
v___x_1011_ = lp_vampireReplay___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Vampire_signatureOf_spec__0(v_locals_993_, v_value_1008_);
if (v___x_1011_ == 0)
{
v_e_994_ = v_body_1009_;
goto _start;
}
else
{
return v___x_995_;
}
}
else
{
return v___x_995_;
}
}
case 5:
{
lean_object* v_fn_1013_; lean_object* v_arg_1014_; uint8_t v___x_1015_; 
v_fn_1013_ = lean_ctor_get(v_e_994_, 0);
v_arg_1014_ = lean_ctor_get(v_e_994_, 1);
v___x_1015_ = lp_vampireReplay___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Vampire_signatureOf_spec__0(v_locals_993_, v_fn_1013_);
if (v___x_1015_ == 0)
{
v_e_994_ = v_arg_1014_;
goto _start;
}
else
{
return v___x_995_;
}
}
case 11:
{
lean_object* v_struct_1017_; 
v_struct_1017_ = lean_ctor_get(v_e_994_, 2);
v_e_994_ = v_struct_1017_;
goto _start;
}
case 1:
{
lean_object* v_fvarId_1019_; uint8_t v___x_1020_; 
v_fvarId_1019_ = lean_ctor_get(v_e_994_, 0);
v___x_1020_ = l_Array_contains___at___00Lean_Meta_CheckAssignment_checkMVar_spec__14(v_locals_993_, v_fvarId_1019_);
return v___x_1020_;
}
default: 
{
uint8_t v___x_1021_; 
v___x_1021_ = 0;
return v___x_1021_;
}
}
}
v___jp_996_:
{
uint8_t v___x_999_; 
v___x_999_ = lp_vampireReplay___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Vampire_signatureOf_spec__0(v_locals_993_, v_d_997_);
if (v___x_999_ == 0)
{
v_e_994_ = v_b_998_;
goto _start;
}
else
{
return v___x_995_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Vampire_signatureOf_spec__0___boxed(lean_object* v_locals_1022_, lean_object* v_e_1023_){
_start:
{
uint8_t v_res_1024_; lean_object* v_r_1025_; 
v_res_1024_ = lp_vampireReplay___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Vampire_signatureOf_spec__0(v_locals_1022_, v_e_1023_);
lean_dec_ref(v_e_1023_);
lean_dec_ref(v_locals_1022_);
v_r_1025_ = lean_box(v_res_1024_);
return v_r_1025_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_signatureOf_spec__1_spec__1___redArg(lean_object* v_locals_1028_, lean_object* v_as_1029_, size_t v_sz_1030_, size_t v_i_1031_, lean_object* v_b_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_){
_start:
{
uint8_t v___x_1038_; 
v___x_1038_ = lean_usize_dec_lt(v_i_1031_, v_sz_1030_);
if (v___x_1038_ == 0)
{
lean_object* v___x_1039_; 
v___x_1039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1039_, 0, v_b_1032_);
return v___x_1039_;
}
else
{
lean_object* v_a_1040_; lean_object* v___x_1041_; 
v_a_1040_ = lean_array_uget_borrowed(v_as_1029_, v_i_1031_);
lean_inc(v___y_1036_);
lean_inc_ref(v___y_1035_);
lean_inc(v___y_1034_);
lean_inc_ref(v___y_1033_);
lean_inc(v_a_1040_);
v___x_1041_ = lean_infer_type(v_a_1040_, v___y_1033_, v___y_1034_, v___y_1035_, v___y_1036_);
if (lean_obj_tag(v___x_1041_) == 0)
{
lean_object* v_a_1042_; lean_object* v___x_1044_; uint8_t v_isShared_1045_; uint8_t v_isSharedCheck_1090_; 
v_a_1042_ = lean_ctor_get(v___x_1041_, 0);
v_isSharedCheck_1090_ = !lean_is_exclusive(v___x_1041_);
if (v_isSharedCheck_1090_ == 0)
{
v___x_1044_ = v___x_1041_;
v_isShared_1045_ = v_isSharedCheck_1090_;
goto v_resetjp_1043_;
}
else
{
lean_inc(v_a_1042_);
lean_dec(v___x_1041_);
v___x_1044_ = lean_box(0);
v_isShared_1045_ = v_isSharedCheck_1090_;
goto v_resetjp_1043_;
}
v_resetjp_1043_:
{
lean_object* v_snd_1046_; lean_object* v___x_1048_; uint8_t v_isShared_1049_; uint8_t v_isSharedCheck_1088_; 
v_snd_1046_ = lean_ctor_get(v_b_1032_, 1);
v_isSharedCheck_1088_ = !lean_is_exclusive(v_b_1032_);
if (v_isSharedCheck_1088_ == 0)
{
lean_object* v_unused_1089_; 
v_unused_1089_ = lean_ctor_get(v_b_1032_, 0);
lean_dec(v_unused_1089_);
v___x_1048_ = v_b_1032_;
v_isShared_1049_ = v_isSharedCheck_1088_;
goto v_resetjp_1047_;
}
else
{
lean_inc(v_snd_1046_);
lean_dec(v_b_1032_);
v___x_1048_ = lean_box(0);
v_isShared_1049_ = v_isSharedCheck_1088_;
goto v_resetjp_1047_;
}
v_resetjp_1047_:
{
uint8_t v___x_1050_; 
v___x_1050_ = lp_vampireReplay___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Vampire_signatureOf_spec__0(v_locals_1028_, v_a_1042_);
if (v___x_1050_ == 0)
{
lean_object* v___x_1051_; 
lean_del_object(v___x_1044_);
lean_inc(v_a_1042_);
v___x_1051_ = lp_vampireReplay_Vampire_isSortType(v_a_1042_, v___y_1033_, v___y_1034_, v___y_1035_, v___y_1036_);
if (lean_obj_tag(v___x_1051_) == 0)
{
lean_object* v_a_1052_; lean_object* v___x_1054_; uint8_t v_isShared_1055_; uint8_t v_isSharedCheck_1072_; 
v_a_1052_ = lean_ctor_get(v___x_1051_, 0);
v_isSharedCheck_1072_ = !lean_is_exclusive(v___x_1051_);
if (v_isSharedCheck_1072_ == 0)
{
v___x_1054_ = v___x_1051_;
v_isShared_1055_ = v_isSharedCheck_1072_;
goto v_resetjp_1053_;
}
else
{
lean_inc(v_a_1052_);
lean_dec(v___x_1051_);
v___x_1054_ = lean_box(0);
v_isShared_1055_ = v_isSharedCheck_1072_;
goto v_resetjp_1053_;
}
v_resetjp_1053_:
{
uint8_t v___x_1056_; 
v___x_1056_ = lean_unbox(v_a_1052_);
lean_dec(v_a_1052_);
if (v___x_1056_ == 0)
{
lean_object* v___x_1057_; lean_object* v___x_1059_; 
lean_dec(v_a_1042_);
v___x_1057_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_signatureOf_spec__1_spec__1___redArg___closed__0));
if (v_isShared_1049_ == 0)
{
lean_ctor_set(v___x_1048_, 0, v___x_1057_);
v___x_1059_ = v___x_1048_;
goto v_reusejp_1058_;
}
else
{
lean_object* v_reuseFailAlloc_1063_; 
v_reuseFailAlloc_1063_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1063_, 0, v___x_1057_);
lean_ctor_set(v_reuseFailAlloc_1063_, 1, v_snd_1046_);
v___x_1059_ = v_reuseFailAlloc_1063_;
goto v_reusejp_1058_;
}
v_reusejp_1058_:
{
lean_object* v___x_1061_; 
if (v_isShared_1055_ == 0)
{
lean_ctor_set(v___x_1054_, 0, v___x_1059_);
v___x_1061_ = v___x_1054_;
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
else
{
lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1067_; 
lean_del_object(v___x_1054_);
v___x_1064_ = lean_box(0);
v___x_1065_ = lean_array_push(v_snd_1046_, v_a_1042_);
if (v_isShared_1049_ == 0)
{
lean_ctor_set(v___x_1048_, 1, v___x_1065_);
lean_ctor_set(v___x_1048_, 0, v___x_1064_);
v___x_1067_ = v___x_1048_;
goto v_reusejp_1066_;
}
else
{
lean_object* v_reuseFailAlloc_1071_; 
v_reuseFailAlloc_1071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1071_, 0, v___x_1064_);
lean_ctor_set(v_reuseFailAlloc_1071_, 1, v___x_1065_);
v___x_1067_ = v_reuseFailAlloc_1071_;
goto v_reusejp_1066_;
}
v_reusejp_1066_:
{
size_t v___x_1068_; size_t v___x_1069_; 
v___x_1068_ = ((size_t)1ULL);
v___x_1069_ = lean_usize_add(v_i_1031_, v___x_1068_);
v_i_1031_ = v___x_1069_;
v_b_1032_ = v___x_1067_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_1073_; lean_object* v___x_1075_; uint8_t v_isShared_1076_; uint8_t v_isSharedCheck_1080_; 
lean_del_object(v___x_1048_);
lean_dec(v_snd_1046_);
lean_dec(v_a_1042_);
v_a_1073_ = lean_ctor_get(v___x_1051_, 0);
v_isSharedCheck_1080_ = !lean_is_exclusive(v___x_1051_);
if (v_isSharedCheck_1080_ == 0)
{
v___x_1075_ = v___x_1051_;
v_isShared_1076_ = v_isSharedCheck_1080_;
goto v_resetjp_1074_;
}
else
{
lean_inc(v_a_1073_);
lean_dec(v___x_1051_);
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
else
{
lean_object* v___x_1081_; lean_object* v___x_1083_; 
lean_dec(v_a_1042_);
v___x_1081_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_signatureOf_spec__1_spec__1___redArg___closed__0));
if (v_isShared_1049_ == 0)
{
lean_ctor_set(v___x_1048_, 0, v___x_1081_);
v___x_1083_ = v___x_1048_;
goto v_reusejp_1082_;
}
else
{
lean_object* v_reuseFailAlloc_1087_; 
v_reuseFailAlloc_1087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1087_, 0, v___x_1081_);
lean_ctor_set(v_reuseFailAlloc_1087_, 1, v_snd_1046_);
v___x_1083_ = v_reuseFailAlloc_1087_;
goto v_reusejp_1082_;
}
v_reusejp_1082_:
{
lean_object* v___x_1085_; 
if (v_isShared_1045_ == 0)
{
lean_ctor_set(v___x_1044_, 0, v___x_1083_);
v___x_1085_ = v___x_1044_;
goto v_reusejp_1084_;
}
else
{
lean_object* v_reuseFailAlloc_1086_; 
v_reuseFailAlloc_1086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1086_, 0, v___x_1083_);
v___x_1085_ = v_reuseFailAlloc_1086_;
goto v_reusejp_1084_;
}
v_reusejp_1084_:
{
return v___x_1085_;
}
}
}
}
}
}
else
{
lean_object* v_a_1091_; lean_object* v___x_1093_; uint8_t v_isShared_1094_; uint8_t v_isSharedCheck_1098_; 
lean_dec_ref(v_b_1032_);
v_a_1091_ = lean_ctor_get(v___x_1041_, 0);
v_isSharedCheck_1098_ = !lean_is_exclusive(v___x_1041_);
if (v_isSharedCheck_1098_ == 0)
{
v___x_1093_ = v___x_1041_;
v_isShared_1094_ = v_isSharedCheck_1098_;
goto v_resetjp_1092_;
}
else
{
lean_inc(v_a_1091_);
lean_dec(v___x_1041_);
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
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_signatureOf_spec__1_spec__1___redArg___boxed(lean_object* v_locals_1099_, lean_object* v_as_1100_, lean_object* v_sz_1101_, lean_object* v_i_1102_, lean_object* v_b_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_){
_start:
{
size_t v_sz_boxed_1109_; size_t v_i_boxed_1110_; lean_object* v_res_1111_; 
v_sz_boxed_1109_ = lean_unbox_usize(v_sz_1101_);
lean_dec(v_sz_1101_);
v_i_boxed_1110_ = lean_unbox_usize(v_i_1102_);
lean_dec(v_i_1102_);
v_res_1111_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_signatureOf_spec__1_spec__1___redArg(v_locals_1099_, v_as_1100_, v_sz_boxed_1109_, v_i_boxed_1110_, v_b_1103_, v___y_1104_, v___y_1105_, v___y_1106_, v___y_1107_);
lean_dec(v___y_1107_);
lean_dec_ref(v___y_1106_);
lean_dec(v___y_1105_);
lean_dec_ref(v___y_1104_);
lean_dec_ref(v_as_1100_);
lean_dec_ref(v_locals_1099_);
return v_res_1111_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_signatureOf_spec__1(lean_object* v_locals_1112_, lean_object* v_as_1113_, size_t v_sz_1114_, size_t v_i_1115_, lean_object* v_b_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_){
_start:
{
uint8_t v___x_1123_; 
v___x_1123_ = lean_usize_dec_lt(v_i_1115_, v_sz_1114_);
if (v___x_1123_ == 0)
{
lean_object* v___x_1124_; 
v___x_1124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1124_, 0, v_b_1116_);
return v___x_1124_;
}
else
{
lean_object* v_a_1125_; lean_object* v___x_1126_; 
v_a_1125_ = lean_array_uget_borrowed(v_as_1113_, v_i_1115_);
lean_inc(v___y_1121_);
lean_inc_ref(v___y_1120_);
lean_inc(v___y_1119_);
lean_inc_ref(v___y_1118_);
lean_inc(v_a_1125_);
v___x_1126_ = lean_infer_type(v_a_1125_, v___y_1118_, v___y_1119_, v___y_1120_, v___y_1121_);
if (lean_obj_tag(v___x_1126_) == 0)
{
lean_object* v_a_1127_; lean_object* v___x_1129_; uint8_t v_isShared_1130_; uint8_t v_isSharedCheck_1175_; 
v_a_1127_ = lean_ctor_get(v___x_1126_, 0);
v_isSharedCheck_1175_ = !lean_is_exclusive(v___x_1126_);
if (v_isSharedCheck_1175_ == 0)
{
v___x_1129_ = v___x_1126_;
v_isShared_1130_ = v_isSharedCheck_1175_;
goto v_resetjp_1128_;
}
else
{
lean_inc(v_a_1127_);
lean_dec(v___x_1126_);
v___x_1129_ = lean_box(0);
v_isShared_1130_ = v_isSharedCheck_1175_;
goto v_resetjp_1128_;
}
v_resetjp_1128_:
{
lean_object* v_snd_1131_; lean_object* v___x_1133_; uint8_t v_isShared_1134_; uint8_t v_isSharedCheck_1173_; 
v_snd_1131_ = lean_ctor_get(v_b_1116_, 1);
v_isSharedCheck_1173_ = !lean_is_exclusive(v_b_1116_);
if (v_isSharedCheck_1173_ == 0)
{
lean_object* v_unused_1174_; 
v_unused_1174_ = lean_ctor_get(v_b_1116_, 0);
lean_dec(v_unused_1174_);
v___x_1133_ = v_b_1116_;
v_isShared_1134_ = v_isSharedCheck_1173_;
goto v_resetjp_1132_;
}
else
{
lean_inc(v_snd_1131_);
lean_dec(v_b_1116_);
v___x_1133_ = lean_box(0);
v_isShared_1134_ = v_isSharedCheck_1173_;
goto v_resetjp_1132_;
}
v_resetjp_1132_:
{
uint8_t v___x_1135_; 
v___x_1135_ = lp_vampireReplay___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Vampire_signatureOf_spec__0(v_locals_1112_, v_a_1127_);
if (v___x_1135_ == 0)
{
lean_object* v___x_1136_; 
lean_del_object(v___x_1129_);
lean_inc(v_a_1127_);
v___x_1136_ = lp_vampireReplay_Vampire_isSortType(v_a_1127_, v___y_1118_, v___y_1119_, v___y_1120_, v___y_1121_);
if (lean_obj_tag(v___x_1136_) == 0)
{
lean_object* v_a_1137_; lean_object* v___x_1139_; uint8_t v_isShared_1140_; uint8_t v_isSharedCheck_1157_; 
v_a_1137_ = lean_ctor_get(v___x_1136_, 0);
v_isSharedCheck_1157_ = !lean_is_exclusive(v___x_1136_);
if (v_isSharedCheck_1157_ == 0)
{
v___x_1139_ = v___x_1136_;
v_isShared_1140_ = v_isSharedCheck_1157_;
goto v_resetjp_1138_;
}
else
{
lean_inc(v_a_1137_);
lean_dec(v___x_1136_);
v___x_1139_ = lean_box(0);
v_isShared_1140_ = v_isSharedCheck_1157_;
goto v_resetjp_1138_;
}
v_resetjp_1138_:
{
uint8_t v___x_1141_; 
v___x_1141_ = lean_unbox(v_a_1137_);
lean_dec(v_a_1137_);
if (v___x_1141_ == 0)
{
lean_object* v___x_1142_; lean_object* v___x_1144_; 
lean_dec(v_a_1127_);
v___x_1142_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_signatureOf_spec__1_spec__1___redArg___closed__0));
if (v_isShared_1134_ == 0)
{
lean_ctor_set(v___x_1133_, 0, v___x_1142_);
v___x_1144_ = v___x_1133_;
goto v_reusejp_1143_;
}
else
{
lean_object* v_reuseFailAlloc_1148_; 
v_reuseFailAlloc_1148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1148_, 0, v___x_1142_);
lean_ctor_set(v_reuseFailAlloc_1148_, 1, v_snd_1131_);
v___x_1144_ = v_reuseFailAlloc_1148_;
goto v_reusejp_1143_;
}
v_reusejp_1143_:
{
lean_object* v___x_1146_; 
if (v_isShared_1140_ == 0)
{
lean_ctor_set(v___x_1139_, 0, v___x_1144_);
v___x_1146_ = v___x_1139_;
goto v_reusejp_1145_;
}
else
{
lean_object* v_reuseFailAlloc_1147_; 
v_reuseFailAlloc_1147_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1147_, 0, v___x_1144_);
v___x_1146_ = v_reuseFailAlloc_1147_;
goto v_reusejp_1145_;
}
v_reusejp_1145_:
{
return v___x_1146_;
}
}
}
else
{
lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1152_; 
lean_del_object(v___x_1139_);
v___x_1149_ = lean_box(0);
v___x_1150_ = lean_array_push(v_snd_1131_, v_a_1127_);
if (v_isShared_1134_ == 0)
{
lean_ctor_set(v___x_1133_, 1, v___x_1150_);
lean_ctor_set(v___x_1133_, 0, v___x_1149_);
v___x_1152_ = v___x_1133_;
goto v_reusejp_1151_;
}
else
{
lean_object* v_reuseFailAlloc_1156_; 
v_reuseFailAlloc_1156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1156_, 0, v___x_1149_);
lean_ctor_set(v_reuseFailAlloc_1156_, 1, v___x_1150_);
v___x_1152_ = v_reuseFailAlloc_1156_;
goto v_reusejp_1151_;
}
v_reusejp_1151_:
{
size_t v___x_1153_; size_t v___x_1154_; lean_object* v___x_1155_; 
v___x_1153_ = ((size_t)1ULL);
v___x_1154_ = lean_usize_add(v_i_1115_, v___x_1153_);
v___x_1155_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_signatureOf_spec__1_spec__1___redArg(v_locals_1112_, v_as_1113_, v_sz_1114_, v___x_1154_, v___x_1152_, v___y_1118_, v___y_1119_, v___y_1120_, v___y_1121_);
return v___x_1155_;
}
}
}
}
else
{
lean_object* v_a_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1165_; 
lean_del_object(v___x_1133_);
lean_dec(v_snd_1131_);
lean_dec(v_a_1127_);
v_a_1158_ = lean_ctor_get(v___x_1136_, 0);
v_isSharedCheck_1165_ = !lean_is_exclusive(v___x_1136_);
if (v_isSharedCheck_1165_ == 0)
{
v___x_1160_ = v___x_1136_;
v_isShared_1161_ = v_isSharedCheck_1165_;
goto v_resetjp_1159_;
}
else
{
lean_inc(v_a_1158_);
lean_dec(v___x_1136_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1165_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
lean_object* v___x_1163_; 
if (v_isShared_1161_ == 0)
{
v___x_1163_ = v___x_1160_;
goto v_reusejp_1162_;
}
else
{
lean_object* v_reuseFailAlloc_1164_; 
v_reuseFailAlloc_1164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1164_, 0, v_a_1158_);
v___x_1163_ = v_reuseFailAlloc_1164_;
goto v_reusejp_1162_;
}
v_reusejp_1162_:
{
return v___x_1163_;
}
}
}
}
else
{
lean_object* v___x_1166_; lean_object* v___x_1168_; 
lean_dec(v_a_1127_);
v___x_1166_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_signatureOf_spec__1_spec__1___redArg___closed__0));
if (v_isShared_1134_ == 0)
{
lean_ctor_set(v___x_1133_, 0, v___x_1166_);
v___x_1168_ = v___x_1133_;
goto v_reusejp_1167_;
}
else
{
lean_object* v_reuseFailAlloc_1172_; 
v_reuseFailAlloc_1172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1172_, 0, v___x_1166_);
lean_ctor_set(v_reuseFailAlloc_1172_, 1, v_snd_1131_);
v___x_1168_ = v_reuseFailAlloc_1172_;
goto v_reusejp_1167_;
}
v_reusejp_1167_:
{
lean_object* v___x_1170_; 
if (v_isShared_1130_ == 0)
{
lean_ctor_set(v___x_1129_, 0, v___x_1168_);
v___x_1170_ = v___x_1129_;
goto v_reusejp_1169_;
}
else
{
lean_object* v_reuseFailAlloc_1171_; 
v_reuseFailAlloc_1171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1171_, 0, v___x_1168_);
v___x_1170_ = v_reuseFailAlloc_1171_;
goto v_reusejp_1169_;
}
v_reusejp_1169_:
{
return v___x_1170_;
}
}
}
}
}
}
else
{
lean_object* v_a_1176_; lean_object* v___x_1178_; uint8_t v_isShared_1179_; uint8_t v_isSharedCheck_1183_; 
lean_dec_ref(v_b_1116_);
v_a_1176_ = lean_ctor_get(v___x_1126_, 0);
v_isSharedCheck_1183_ = !lean_is_exclusive(v___x_1126_);
if (v_isSharedCheck_1183_ == 0)
{
v___x_1178_ = v___x_1126_;
v_isShared_1179_ = v_isSharedCheck_1183_;
goto v_resetjp_1177_;
}
else
{
lean_inc(v_a_1176_);
lean_dec(v___x_1126_);
v___x_1178_ = lean_box(0);
v_isShared_1179_ = v_isSharedCheck_1183_;
goto v_resetjp_1177_;
}
v_resetjp_1177_:
{
lean_object* v___x_1181_; 
if (v_isShared_1179_ == 0)
{
v___x_1181_ = v___x_1178_;
goto v_reusejp_1180_;
}
else
{
lean_object* v_reuseFailAlloc_1182_; 
v_reuseFailAlloc_1182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1182_, 0, v_a_1176_);
v___x_1181_ = v_reuseFailAlloc_1182_;
goto v_reusejp_1180_;
}
v_reusejp_1180_:
{
return v___x_1181_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_signatureOf_spec__1___boxed(lean_object* v_locals_1184_, lean_object* v_as_1185_, lean_object* v_sz_1186_, lean_object* v_i_1187_, lean_object* v_b_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_){
_start:
{
size_t v_sz_boxed_1195_; size_t v_i_boxed_1196_; lean_object* v_res_1197_; 
v_sz_boxed_1195_ = lean_unbox_usize(v_sz_1186_);
lean_dec(v_sz_1186_);
v_i_boxed_1196_ = lean_unbox_usize(v_i_1187_);
lean_dec(v_i_1187_);
v_res_1197_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_signatureOf_spec__1(v_locals_1184_, v_as_1185_, v_sz_boxed_1195_, v_i_boxed_1196_, v_b_1188_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_, v___y_1193_);
lean_dec(v___y_1193_);
lean_dec_ref(v___y_1192_);
lean_dec(v___y_1191_);
lean_dec_ref(v___y_1190_);
lean_dec(v___y_1189_);
lean_dec_ref(v_as_1185_);
lean_dec_ref(v_locals_1184_);
return v_res_1197_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_signatureOf_spec__2___redArg(size_t v_sz_1198_, size_t v_i_1199_, lean_object* v_bs_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_){
_start:
{
uint8_t v___x_1206_; 
v___x_1206_ = lean_usize_dec_lt(v_i_1199_, v_sz_1198_);
if (v___x_1206_ == 0)
{
lean_object* v___x_1207_; 
v___x_1207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1207_, 0, v_bs_1200_);
return v___x_1207_;
}
else
{
lean_object* v_v_1208_; lean_object* v___x_1209_; 
v_v_1208_ = lean_array_uget_borrowed(v_bs_1200_, v_i_1199_);
lean_inc(v_v_1208_);
v___x_1209_ = lp_vampireReplay_Vampire_sortName___redArg(v_v_1208_, v___y_1201_, v___y_1202_, v___y_1203_, v___y_1204_);
if (lean_obj_tag(v___x_1209_) == 0)
{
lean_object* v_a_1210_; lean_object* v___x_1211_; lean_object* v_bs_x27_1212_; size_t v___x_1213_; size_t v___x_1214_; lean_object* v___x_1215_; 
v_a_1210_ = lean_ctor_get(v___x_1209_, 0);
lean_inc(v_a_1210_);
lean_dec_ref_known(v___x_1209_, 1);
v___x_1211_ = lean_unsigned_to_nat(0u);
v_bs_x27_1212_ = lean_array_uset(v_bs_1200_, v_i_1199_, v___x_1211_);
v___x_1213_ = ((size_t)1ULL);
v___x_1214_ = lean_usize_add(v_i_1199_, v___x_1213_);
v___x_1215_ = lean_array_uset(v_bs_x27_1212_, v_i_1199_, v_a_1210_);
v_i_1199_ = v___x_1214_;
v_bs_1200_ = v___x_1215_;
goto _start;
}
else
{
lean_object* v_a_1217_; lean_object* v___x_1219_; uint8_t v_isShared_1220_; uint8_t v_isSharedCheck_1224_; 
lean_dec_ref(v_bs_1200_);
v_a_1217_ = lean_ctor_get(v___x_1209_, 0);
v_isSharedCheck_1224_ = !lean_is_exclusive(v___x_1209_);
if (v_isSharedCheck_1224_ == 0)
{
v___x_1219_ = v___x_1209_;
v_isShared_1220_ = v_isSharedCheck_1224_;
goto v_resetjp_1218_;
}
else
{
lean_inc(v_a_1217_);
lean_dec(v___x_1209_);
v___x_1219_ = lean_box(0);
v_isShared_1220_ = v_isSharedCheck_1224_;
goto v_resetjp_1218_;
}
v_resetjp_1218_:
{
lean_object* v___x_1222_; 
if (v_isShared_1220_ == 0)
{
v___x_1222_ = v___x_1219_;
goto v_reusejp_1221_;
}
else
{
lean_object* v_reuseFailAlloc_1223_; 
v_reuseFailAlloc_1223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1223_, 0, v_a_1217_);
v___x_1222_ = v_reuseFailAlloc_1223_;
goto v_reusejp_1221_;
}
v_reusejp_1221_:
{
return v___x_1222_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_signatureOf_spec__2___redArg___boxed(lean_object* v_sz_1225_, lean_object* v_i_1226_, lean_object* v_bs_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_){
_start:
{
size_t v_sz_boxed_1233_; size_t v_i_boxed_1234_; lean_object* v_res_1235_; 
v_sz_boxed_1233_ = lean_unbox_usize(v_sz_1225_);
lean_dec(v_sz_1225_);
v_i_boxed_1234_ = lean_unbox_usize(v_i_1226_);
lean_dec(v_i_1226_);
v_res_1235_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_signatureOf_spec__2___redArg(v_sz_boxed_1233_, v_i_boxed_1234_, v_bs_1227_, v___y_1228_, v___y_1229_, v___y_1230_, v___y_1231_);
lean_dec(v___y_1231_);
lean_dec_ref(v___y_1230_);
lean_dec_ref(v___y_1229_);
lean_dec(v___y_1228_);
return v_res_1235_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_signatureOf___lam__0(lean_object* v_args_1242_, lean_object* v_result_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_){
_start:
{
lean_object* v___y_1251_; lean_object* v_resultName_1252_; size_t v_sz_1256_; size_t v___x_1257_; lean_object* v_locals_1258_; uint8_t v___x_1259_; 
v_sz_1256_ = lean_array_size(v_args_1242_);
v___x_1257_ = ((size_t)0ULL);
lean_inc_ref(v_args_1242_);
v_locals_1258_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Structure_0__Lean_Elab_Command_Structure_elabStructFieldDefaults_spec__0(v_sz_1256_, v___x_1257_, v_args_1242_);
v___x_1259_ = lp_vampireReplay___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Vampire_signatureOf_spec__0(v_locals_1258_, v_result_1243_);
if (v___x_1259_ == 0)
{
lean_object* v___x_1260_; 
lean_inc_ref(v_result_1243_);
v___x_1260_ = lp_vampireReplay_Vampire_isSortType(v_result_1243_, v___y_1245_, v___y_1246_, v___y_1247_, v___y_1248_);
if (lean_obj_tag(v___x_1260_) == 0)
{
lean_object* v_a_1261_; lean_object* v___x_1263_; uint8_t v_isShared_1264_; uint8_t v_isSharedCheck_1316_; 
v_a_1261_ = lean_ctor_get(v___x_1260_, 0);
v_isSharedCheck_1316_ = !lean_is_exclusive(v___x_1260_);
if (v_isSharedCheck_1316_ == 0)
{
v___x_1263_ = v___x_1260_;
v_isShared_1264_ = v_isSharedCheck_1316_;
goto v_resetjp_1262_;
}
else
{
lean_inc(v_a_1261_);
lean_dec(v___x_1260_);
v___x_1263_ = lean_box(0);
v_isShared_1264_ = v_isSharedCheck_1316_;
goto v_resetjp_1262_;
}
v_resetjp_1262_:
{
uint8_t v___x_1265_; 
v___x_1265_ = lp_vampireReplay_Vampire_isPropType(v_result_1243_);
if (v___x_1265_ == 0)
{
uint8_t v___x_1311_; 
v___x_1311_ = lean_unbox(v_a_1261_);
lean_dec(v_a_1261_);
if (v___x_1311_ == 0)
{
lean_object* v___x_1312_; lean_object* v___x_1314_; 
lean_dec_ref(v_locals_1258_);
lean_dec_ref(v_result_1243_);
lean_dec_ref(v_args_1242_);
v___x_1312_ = lean_box(0);
if (v_isShared_1264_ == 0)
{
lean_ctor_set(v___x_1263_, 0, v___x_1312_);
v___x_1314_ = v___x_1263_;
goto v_reusejp_1313_;
}
else
{
lean_object* v_reuseFailAlloc_1315_; 
v_reuseFailAlloc_1315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1315_, 0, v___x_1312_);
v___x_1314_ = v_reuseFailAlloc_1315_;
goto v_reusejp_1313_;
}
v_reusejp_1313_:
{
return v___x_1314_;
}
}
else
{
lean_del_object(v___x_1263_);
goto v___jp_1266_;
}
}
else
{
lean_del_object(v___x_1263_);
lean_dec(v_a_1261_);
goto v___jp_1266_;
}
v___jp_1266_:
{
lean_object* v___x_1267_; lean_object* v___x_1268_; 
v___x_1267_ = ((lean_object*)(lp_vampireReplay_Vampire_signatureOf___lam__0___closed__1));
v___x_1268_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_signatureOf_spec__1(v_locals_1258_, v_args_1242_, v_sz_1256_, v___x_1257_, v___x_1267_, v___y_1244_, v___y_1245_, v___y_1246_, v___y_1247_, v___y_1248_);
lean_dec_ref(v_args_1242_);
lean_dec_ref(v_locals_1258_);
if (lean_obj_tag(v___x_1268_) == 0)
{
lean_object* v_a_1269_; lean_object* v___x_1271_; uint8_t v_isShared_1272_; uint8_t v_isSharedCheck_1302_; 
v_a_1269_ = lean_ctor_get(v___x_1268_, 0);
v_isSharedCheck_1302_ = !lean_is_exclusive(v___x_1268_);
if (v_isSharedCheck_1302_ == 0)
{
v___x_1271_ = v___x_1268_;
v_isShared_1272_ = v_isSharedCheck_1302_;
goto v_resetjp_1270_;
}
else
{
lean_inc(v_a_1269_);
lean_dec(v___x_1268_);
v___x_1271_ = lean_box(0);
v_isShared_1272_ = v_isSharedCheck_1302_;
goto v_resetjp_1270_;
}
v_resetjp_1270_:
{
lean_object* v_fst_1273_; 
v_fst_1273_ = lean_ctor_get(v_a_1269_, 0);
if (lean_obj_tag(v_fst_1273_) == 0)
{
lean_object* v_snd_1274_; size_t v_sz_1275_; lean_object* v___x_1276_; 
lean_del_object(v___x_1271_);
v_snd_1274_ = lean_ctor_get(v_a_1269_, 1);
lean_inc(v_snd_1274_);
lean_dec(v_a_1269_);
v_sz_1275_ = lean_array_size(v_snd_1274_);
v___x_1276_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_signatureOf_spec__2___redArg(v_sz_1275_, v___x_1257_, v_snd_1274_, v___y_1244_, v___y_1245_, v___y_1247_, v___y_1248_);
if (lean_obj_tag(v___x_1276_) == 0)
{
if (v___x_1265_ == 0)
{
lean_object* v_a_1277_; lean_object* v___x_1278_; 
v_a_1277_ = lean_ctor_get(v___x_1276_, 0);
lean_inc(v_a_1277_);
lean_dec_ref_known(v___x_1276_, 1);
v___x_1278_ = lp_vampireReplay_Vampire_sortName___redArg(v_result_1243_, v___y_1244_, v___y_1245_, v___y_1247_, v___y_1248_);
if (lean_obj_tag(v___x_1278_) == 0)
{
lean_object* v_a_1279_; 
v_a_1279_ = lean_ctor_get(v___x_1278_, 0);
lean_inc(v_a_1279_);
lean_dec_ref_known(v___x_1278_, 1);
v___y_1251_ = v_a_1277_;
v_resultName_1252_ = v_a_1279_;
goto v___jp_1250_;
}
else
{
lean_object* v_a_1280_; lean_object* v___x_1282_; uint8_t v_isShared_1283_; uint8_t v_isSharedCheck_1287_; 
lean_dec(v_a_1277_);
v_a_1280_ = lean_ctor_get(v___x_1278_, 0);
v_isSharedCheck_1287_ = !lean_is_exclusive(v___x_1278_);
if (v_isSharedCheck_1287_ == 0)
{
v___x_1282_ = v___x_1278_;
v_isShared_1283_ = v_isSharedCheck_1287_;
goto v_resetjp_1281_;
}
else
{
lean_inc(v_a_1280_);
lean_dec(v___x_1278_);
v___x_1282_ = lean_box(0);
v_isShared_1283_ = v_isSharedCheck_1287_;
goto v_resetjp_1281_;
}
v_resetjp_1281_:
{
lean_object* v___x_1285_; 
if (v_isShared_1283_ == 0)
{
v___x_1285_ = v___x_1282_;
goto v_reusejp_1284_;
}
else
{
lean_object* v_reuseFailAlloc_1286_; 
v_reuseFailAlloc_1286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1286_, 0, v_a_1280_);
v___x_1285_ = v_reuseFailAlloc_1286_;
goto v_reusejp_1284_;
}
v_reusejp_1284_:
{
return v___x_1285_;
}
}
}
}
else
{
lean_object* v_a_1288_; lean_object* v___x_1289_; 
lean_dec_ref(v_result_1243_);
v_a_1288_ = lean_ctor_get(v___x_1276_, 0);
lean_inc(v_a_1288_);
lean_dec_ref_known(v___x_1276_, 1);
v___x_1289_ = ((lean_object*)(lp_vampireReplay_Vampire_signatureOf___lam__0___closed__2));
v___y_1251_ = v_a_1288_;
v_resultName_1252_ = v___x_1289_;
goto v___jp_1250_;
}
}
else
{
lean_object* v_a_1290_; lean_object* v___x_1292_; uint8_t v_isShared_1293_; uint8_t v_isSharedCheck_1297_; 
lean_dec_ref(v_result_1243_);
v_a_1290_ = lean_ctor_get(v___x_1276_, 0);
v_isSharedCheck_1297_ = !lean_is_exclusive(v___x_1276_);
if (v_isSharedCheck_1297_ == 0)
{
v___x_1292_ = v___x_1276_;
v_isShared_1293_ = v_isSharedCheck_1297_;
goto v_resetjp_1291_;
}
else
{
lean_inc(v_a_1290_);
lean_dec(v___x_1276_);
v___x_1292_ = lean_box(0);
v_isShared_1293_ = v_isSharedCheck_1297_;
goto v_resetjp_1291_;
}
v_resetjp_1291_:
{
lean_object* v___x_1295_; 
if (v_isShared_1293_ == 0)
{
v___x_1295_ = v___x_1292_;
goto v_reusejp_1294_;
}
else
{
lean_object* v_reuseFailAlloc_1296_; 
v_reuseFailAlloc_1296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1296_, 0, v_a_1290_);
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
else
{
lean_object* v_val_1298_; lean_object* v___x_1300_; 
lean_inc_ref(v_fst_1273_);
lean_dec(v_a_1269_);
lean_dec_ref(v_result_1243_);
v_val_1298_ = lean_ctor_get(v_fst_1273_, 0);
lean_inc(v_val_1298_);
lean_dec_ref_known(v_fst_1273_, 1);
if (v_isShared_1272_ == 0)
{
lean_ctor_set(v___x_1271_, 0, v_val_1298_);
v___x_1300_ = v___x_1271_;
goto v_reusejp_1299_;
}
else
{
lean_object* v_reuseFailAlloc_1301_; 
v_reuseFailAlloc_1301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1301_, 0, v_val_1298_);
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
else
{
lean_object* v_a_1303_; lean_object* v___x_1305_; uint8_t v_isShared_1306_; uint8_t v_isSharedCheck_1310_; 
lean_dec_ref(v_result_1243_);
v_a_1303_ = lean_ctor_get(v___x_1268_, 0);
v_isSharedCheck_1310_ = !lean_is_exclusive(v___x_1268_);
if (v_isSharedCheck_1310_ == 0)
{
v___x_1305_ = v___x_1268_;
v_isShared_1306_ = v_isSharedCheck_1310_;
goto v_resetjp_1304_;
}
else
{
lean_inc(v_a_1303_);
lean_dec(v___x_1268_);
v___x_1305_ = lean_box(0);
v_isShared_1306_ = v_isSharedCheck_1310_;
goto v_resetjp_1304_;
}
v_resetjp_1304_:
{
lean_object* v___x_1308_; 
if (v_isShared_1306_ == 0)
{
v___x_1308_ = v___x_1305_;
goto v_reusejp_1307_;
}
else
{
lean_object* v_reuseFailAlloc_1309_; 
v_reuseFailAlloc_1309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1309_, 0, v_a_1303_);
v___x_1308_ = v_reuseFailAlloc_1309_;
goto v_reusejp_1307_;
}
v_reusejp_1307_:
{
return v___x_1308_;
}
}
}
}
}
}
else
{
lean_object* v_a_1317_; lean_object* v___x_1319_; uint8_t v_isShared_1320_; uint8_t v_isSharedCheck_1324_; 
lean_dec_ref(v_locals_1258_);
lean_dec_ref(v_result_1243_);
lean_dec_ref(v_args_1242_);
v_a_1317_ = lean_ctor_get(v___x_1260_, 0);
v_isSharedCheck_1324_ = !lean_is_exclusive(v___x_1260_);
if (v_isSharedCheck_1324_ == 0)
{
v___x_1319_ = v___x_1260_;
v_isShared_1320_ = v_isSharedCheck_1324_;
goto v_resetjp_1318_;
}
else
{
lean_inc(v_a_1317_);
lean_dec(v___x_1260_);
v___x_1319_ = lean_box(0);
v_isShared_1320_ = v_isSharedCheck_1324_;
goto v_resetjp_1318_;
}
v_resetjp_1318_:
{
lean_object* v___x_1322_; 
if (v_isShared_1320_ == 0)
{
v___x_1322_ = v___x_1319_;
goto v_reusejp_1321_;
}
else
{
lean_object* v_reuseFailAlloc_1323_; 
v_reuseFailAlloc_1323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1323_, 0, v_a_1317_);
v___x_1322_ = v_reuseFailAlloc_1323_;
goto v_reusejp_1321_;
}
v_reusejp_1321_:
{
return v___x_1322_;
}
}
}
}
else
{
lean_object* v___x_1325_; lean_object* v___x_1326_; 
lean_dec_ref(v_locals_1258_);
lean_dec_ref(v_result_1243_);
lean_dec_ref(v_args_1242_);
v___x_1325_ = lean_box(0);
v___x_1326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1326_, 0, v___x_1325_);
return v___x_1326_;
}
v___jp_1250_:
{
lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; 
v___x_1253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1253_, 0, v___y_1251_);
lean_ctor_set(v___x_1253_, 1, v_resultName_1252_);
v___x_1254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1254_, 0, v___x_1253_);
v___x_1255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1255_, 0, v___x_1254_);
return v___x_1255_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_signatureOf___lam__0___boxed(lean_object* v_args_1327_, lean_object* v_result_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_){
_start:
{
lean_object* v_res_1335_; 
v_res_1335_ = lp_vampireReplay_Vampire_signatureOf___lam__0(v_args_1327_, v_result_1328_, v___y_1329_, v___y_1330_, v___y_1331_, v___y_1332_, v___y_1333_);
lean_dec(v___y_1333_);
lean_dec_ref(v___y_1332_);
lean_dec(v___y_1331_);
lean_dec_ref(v___y_1330_);
lean_dec(v___y_1329_);
return v_res_1335_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_signatureOf(lean_object* v_type_1337_, lean_object* v_a_1338_, lean_object* v_a_1339_, lean_object* v_a_1340_, lean_object* v_a_1341_, lean_object* v_a_1342_){
_start:
{
lean_object* v___f_1344_; uint8_t v___x_1345_; lean_object* v___x_1346_; 
v___f_1344_ = ((lean_object*)(lp_vampireReplay_Vampire_signatureOf___closed__0));
v___x_1345_ = 0;
v___x_1346_ = lp_vampireReplay_Lean_Meta_forallTelescopeReducing___at___00Vampire_signatureOf_spec__3___redArg(v_type_1337_, v___f_1344_, v___x_1345_, v___x_1345_, v_a_1338_, v_a_1339_, v_a_1340_, v_a_1341_, v_a_1342_);
return v___x_1346_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_signatureOf___boxed(lean_object* v_type_1347_, lean_object* v_a_1348_, lean_object* v_a_1349_, lean_object* v_a_1350_, lean_object* v_a_1351_, lean_object* v_a_1352_, lean_object* v_a_1353_){
_start:
{
lean_object* v_res_1354_; 
v_res_1354_ = lp_vampireReplay_Vampire_signatureOf(v_type_1347_, v_a_1348_, v_a_1349_, v_a_1350_, v_a_1351_, v_a_1352_);
lean_dec(v_a_1352_);
lean_dec_ref(v_a_1351_);
lean_dec(v_a_1350_);
lean_dec_ref(v_a_1349_);
lean_dec(v_a_1348_);
return v_res_1354_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_signatureOf_spec__2(size_t v_sz_1355_, size_t v_i_1356_, lean_object* v_bs_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_){
_start:
{
lean_object* v___x_1364_; 
v___x_1364_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_signatureOf_spec__2___redArg(v_sz_1355_, v_i_1356_, v_bs_1357_, v___y_1358_, v___y_1359_, v___y_1361_, v___y_1362_);
return v___x_1364_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_signatureOf_spec__2___boxed(lean_object* v_sz_1365_, lean_object* v_i_1366_, lean_object* v_bs_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_){
_start:
{
size_t v_sz_boxed_1374_; size_t v_i_boxed_1375_; lean_object* v_res_1376_; 
v_sz_boxed_1374_ = lean_unbox_usize(v_sz_1365_);
lean_dec(v_sz_1365_);
v_i_boxed_1375_ = lean_unbox_usize(v_i_1366_);
lean_dec(v_i_1366_);
v_res_1376_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_signatureOf_spec__2(v_sz_boxed_1374_, v_i_boxed_1375_, v_bs_1367_, v___y_1368_, v___y_1369_, v___y_1370_, v___y_1371_, v___y_1372_);
lean_dec(v___y_1372_);
lean_dec_ref(v___y_1371_);
lean_dec(v___y_1370_);
lean_dec_ref(v___y_1369_);
lean_dec(v___y_1368_);
return v_res_1376_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_signatureOf_spec__1_spec__1(lean_object* v_locals_1377_, lean_object* v_as_1378_, size_t v_sz_1379_, size_t v_i_1380_, lean_object* v_b_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_){
_start:
{
lean_object* v___x_1388_; 
v___x_1388_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_signatureOf_spec__1_spec__1___redArg(v_locals_1377_, v_as_1378_, v_sz_1379_, v_i_1380_, v_b_1381_, v___y_1383_, v___y_1384_, v___y_1385_, v___y_1386_);
return v___x_1388_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_signatureOf_spec__1_spec__1___boxed(lean_object* v_locals_1389_, lean_object* v_as_1390_, lean_object* v_sz_1391_, lean_object* v_i_1392_, lean_object* v_b_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_){
_start:
{
size_t v_sz_boxed_1400_; size_t v_i_boxed_1401_; lean_object* v_res_1402_; 
v_sz_boxed_1400_ = lean_unbox_usize(v_sz_1391_);
lean_dec(v_sz_1391_);
v_i_boxed_1401_ = lean_unbox_usize(v_i_1392_);
lean_dec(v_i_1392_);
v_res_1402_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_signatureOf_spec__1_spec__1(v_locals_1389_, v_as_1390_, v_sz_boxed_1400_, v_i_boxed_1401_, v_b_1393_, v___y_1394_, v___y_1395_, v___y_1396_, v___y_1397_, v___y_1398_);
lean_dec(v___y_1398_);
lean_dec_ref(v___y_1397_);
lean_dec(v___y_1396_);
lean_dec_ref(v___y_1395_);
lean_dec(v___y_1394_);
lean_dec_ref(v_as_1390_);
lean_dec_ref(v_locals_1389_);
return v_res_1402_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_symbolName(lean_object* v_e_1409_, lean_object* v_type_1410_, lean_object* v_a_1411_, lean_object* v_a_1412_, lean_object* v_a_1413_, lean_object* v_a_1414_, lean_object* v_a_1415_){
_start:
{
lean_object* v___y_1418_; lean_object* v___y_1419_; lean_object* v___y_1420_; lean_object* v___x_1459_; lean_object* v_symbols_1460_; lean_object* v___x_1461_; 
v___x_1459_ = lean_st_ref_get(v_a_1411_);
v_symbols_1460_ = lean_ctor_get(v___x_1459_, 1);
lean_inc_ref(v_symbols_1460_);
lean_dec(v___x_1459_);
v___x_1461_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__1___redArg(v_symbols_1460_, v_e_1409_);
lean_dec_ref(v_symbols_1460_);
if (lean_obj_tag(v___x_1461_) == 1)
{
lean_object* v___x_1462_; 
lean_dec_ref(v_type_1410_);
lean_dec_ref(v_e_1409_);
v___x_1462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1462_, 0, v___x_1461_);
return v___x_1462_;
}
else
{
lean_object* v___x_1463_; 
lean_dec(v___x_1461_);
v___x_1463_ = lp_vampireReplay_Vampire_signatureOf(v_type_1410_, v_a_1411_, v_a_1412_, v_a_1413_, v_a_1414_, v_a_1415_);
if (lean_obj_tag(v___x_1463_) == 0)
{
lean_object* v_a_1464_; lean_object* v___x_1466_; uint8_t v_isShared_1467_; uint8_t v_isSharedCheck_1517_; 
v_a_1464_ = lean_ctor_get(v___x_1463_, 0);
v_isSharedCheck_1517_ = !lean_is_exclusive(v___x_1463_);
if (v_isSharedCheck_1517_ == 0)
{
v___x_1466_ = v___x_1463_;
v_isShared_1467_ = v_isSharedCheck_1517_;
goto v_resetjp_1465_;
}
else
{
lean_inc(v_a_1464_);
lean_dec(v___x_1463_);
v___x_1466_ = lean_box(0);
v_isShared_1467_ = v_isSharedCheck_1517_;
goto v_resetjp_1465_;
}
v_resetjp_1465_:
{
if (lean_obj_tag(v_a_1464_) == 1)
{
lean_object* v_val_1468_; lean_object* v_fst_1469_; lean_object* v_snd_1470_; lean_object* v_hint_1472_; lean_object* v___y_1473_; 
lean_del_object(v___x_1466_);
v_val_1468_ = lean_ctor_get(v_a_1464_, 0);
lean_inc(v_val_1468_);
lean_dec_ref_known(v_a_1464_, 1);
v_fst_1469_ = lean_ctor_get(v_val_1468_, 0);
lean_inc(v_fst_1469_);
v_snd_1470_ = lean_ctor_get(v_val_1468_, 1);
lean_inc(v_snd_1470_);
lean_dec(v_val_1468_);
switch(lean_obj_tag(v_e_1409_))
{
case 1:
{
lean_object* v_fvarId_1496_; lean_object* v___x_1497_; 
v_fvarId_1496_ = lean_ctor_get(v_e_1409_, 0);
lean_inc(v_fvarId_1496_);
v___x_1497_ = l_Lean_FVarId_getUserName___redArg(v_fvarId_1496_, v_a_1412_, v_a_1414_, v_a_1415_);
if (lean_obj_tag(v___x_1497_) == 0)
{
lean_object* v_a_1498_; uint8_t v___x_1499_; lean_object* v___x_1500_; 
v_a_1498_ = lean_ctor_get(v___x_1497_, 0);
lean_inc(v_a_1498_);
lean_dec_ref_known(v___x_1497_, 1);
v___x_1499_ = 1;
v___x_1500_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_a_1498_, v___x_1499_);
v_hint_1472_ = v___x_1500_;
v___y_1473_ = v_a_1411_;
goto v___jp_1471_;
}
else
{
lean_object* v_a_1501_; lean_object* v___x_1503_; uint8_t v_isShared_1504_; uint8_t v_isSharedCheck_1508_; 
lean_dec_ref_known(v_e_1409_, 1);
lean_dec(v_snd_1470_);
lean_dec(v_fst_1469_);
v_a_1501_ = lean_ctor_get(v___x_1497_, 0);
v_isSharedCheck_1508_ = !lean_is_exclusive(v___x_1497_);
if (v_isSharedCheck_1508_ == 0)
{
v___x_1503_ = v___x_1497_;
v_isShared_1504_ = v_isSharedCheck_1508_;
goto v_resetjp_1502_;
}
else
{
lean_inc(v_a_1501_);
lean_dec(v___x_1497_);
v___x_1503_ = lean_box(0);
v_isShared_1504_ = v_isSharedCheck_1508_;
goto v_resetjp_1502_;
}
v_resetjp_1502_:
{
lean_object* v___x_1506_; 
if (v_isShared_1504_ == 0)
{
v___x_1506_ = v___x_1503_;
goto v_reusejp_1505_;
}
else
{
lean_object* v_reuseFailAlloc_1507_; 
v_reuseFailAlloc_1507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1507_, 0, v_a_1501_);
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
case 4:
{
lean_object* v_declName_1509_; uint8_t v___x_1510_; lean_object* v___x_1511_; 
v_declName_1509_ = lean_ctor_get(v_e_1409_, 0);
v___x_1510_ = 1;
lean_inc(v_declName_1509_);
v___x_1511_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_declName_1509_, v___x_1510_);
v_hint_1472_ = v___x_1511_;
v___y_1473_ = v_a_1411_;
goto v___jp_1471_;
}
default: 
{
lean_object* v___x_1512_; 
v___x_1512_ = ((lean_object*)(lp_vampireReplay_Vampire_symbolName___closed__5));
v_hint_1472_ = v___x_1512_;
v___y_1473_ = v_a_1411_;
goto v___jp_1471_;
}
}
v___jp_1471_:
{
uint8_t v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v_a_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; uint8_t v___x_1480_; 
v___x_1474_ = 0;
v___x_1475_ = lp_vampireReplay_Vampire_sanitize(v_hint_1472_, v___x_1474_);
v___x_1476_ = lp_vampireReplay_Vampire_freshName___redArg(v___x_1475_, v___y_1473_);
v_a_1477_ = lean_ctor_get(v___x_1476_, 0);
lean_inc(v_a_1477_);
lean_dec_ref(v___x_1476_);
v___x_1478_ = lean_array_get_size(v_fst_1469_);
v___x_1479_ = lean_unsigned_to_nat(0u);
v___x_1480_ = lean_nat_dec_eq(v___x_1478_, v___x_1479_);
if (v___x_1480_ == 0)
{
lean_object* v___x_1481_; uint8_t v___x_1482_; 
v___x_1481_ = lean_unsigned_to_nat(1u);
v___x_1482_ = lean_nat_dec_eq(v___x_1478_, v___x_1481_);
if (v___x_1482_ == 0)
{
lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; 
v___x_1483_ = ((lean_object*)(lp_vampireReplay_Vampire_Tm_render___closed__0));
v___x_1484_ = ((lean_object*)(lp_vampireReplay_Vampire_symbolName___closed__2));
v___x_1485_ = lean_array_to_list(v_fst_1469_);
v___x_1486_ = l_String_intercalate(v___x_1484_, v___x_1485_);
v___x_1487_ = lean_string_append(v___x_1483_, v___x_1486_);
lean_dec_ref(v___x_1486_);
v___x_1488_ = ((lean_object*)(lp_vampireReplay_Vampire_symbolName___closed__3));
v___x_1489_ = lean_string_append(v___x_1487_, v___x_1488_);
v___x_1490_ = lean_string_append(v___x_1489_, v_snd_1470_);
lean_dec(v_snd_1470_);
v___y_1418_ = v___y_1473_;
v___y_1419_ = v_a_1477_;
v___y_1420_ = v___x_1490_;
goto v___jp_1417_;
}
else
{
lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; 
v___x_1491_ = ((lean_object*)(lp_vampireReplay_Vampire_instInhabitedTm_default___closed__0));
v___x_1492_ = lean_array_get(v___x_1491_, v_fst_1469_, v___x_1479_);
lean_dec(v_fst_1469_);
v___x_1493_ = ((lean_object*)(lp_vampireReplay_Vampire_symbolName___closed__4));
v___x_1494_ = lean_string_append(v___x_1492_, v___x_1493_);
v___x_1495_ = lean_string_append(v___x_1494_, v_snd_1470_);
lean_dec(v_snd_1470_);
v___y_1418_ = v___y_1473_;
v___y_1419_ = v_a_1477_;
v___y_1420_ = v___x_1495_;
goto v___jp_1417_;
}
}
else
{
lean_dec(v_fst_1469_);
v___y_1418_ = v___y_1473_;
v___y_1419_ = v_a_1477_;
v___y_1420_ = v_snd_1470_;
goto v___jp_1417_;
}
}
}
else
{
lean_object* v___x_1513_; lean_object* v___x_1515_; 
lean_dec(v_a_1464_);
lean_dec_ref(v_e_1409_);
v___x_1513_ = lean_box(0);
if (v_isShared_1467_ == 0)
{
lean_ctor_set(v___x_1466_, 0, v___x_1513_);
v___x_1515_ = v___x_1466_;
goto v_reusejp_1514_;
}
else
{
lean_object* v_reuseFailAlloc_1516_; 
v_reuseFailAlloc_1516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1516_, 0, v___x_1513_);
v___x_1515_ = v_reuseFailAlloc_1516_;
goto v_reusejp_1514_;
}
v_reusejp_1514_:
{
return v___x_1515_;
}
}
}
}
else
{
lean_object* v_a_1518_; lean_object* v___x_1520_; uint8_t v_isShared_1521_; uint8_t v_isSharedCheck_1525_; 
lean_dec_ref(v_e_1409_);
v_a_1518_ = lean_ctor_get(v___x_1463_, 0);
v_isSharedCheck_1525_ = !lean_is_exclusive(v___x_1463_);
if (v_isSharedCheck_1525_ == 0)
{
v___x_1520_ = v___x_1463_;
v_isShared_1521_ = v_isSharedCheck_1525_;
goto v_resetjp_1519_;
}
else
{
lean_inc(v_a_1518_);
lean_dec(v___x_1463_);
v___x_1520_ = lean_box(0);
v_isShared_1521_ = v_isSharedCheck_1525_;
goto v_resetjp_1519_;
}
v_resetjp_1519_:
{
lean_object* v___x_1523_; 
if (v_isShared_1521_ == 0)
{
v___x_1523_ = v___x_1520_;
goto v_reusejp_1522_;
}
else
{
lean_object* v_reuseFailAlloc_1524_; 
v_reuseFailAlloc_1524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1524_, 0, v_a_1518_);
v___x_1523_ = v_reuseFailAlloc_1524_;
goto v_reusejp_1522_;
}
v_reusejp_1522_:
{
return v___x_1523_;
}
}
}
}
v___jp_1417_:
{
lean_object* v___x_1421_; lean_object* v_decls_1422_; lean_object* v_sorts_1423_; lean_object* v_symbols_1424_; lean_object* v_vars_1425_; lean_object* v_taken_1426_; lean_object* v_varCount_1427_; lean_object* v___x_1429_; uint8_t v_isShared_1430_; uint8_t v_isSharedCheck_1458_; 
v___x_1421_ = lean_st_ref_take(v___y_1418_);
v_decls_1422_ = lean_ctor_get(v___x_1421_, 3);
v_sorts_1423_ = lean_ctor_get(v___x_1421_, 0);
v_symbols_1424_ = lean_ctor_get(v___x_1421_, 1);
v_vars_1425_ = lean_ctor_get(v___x_1421_, 2);
v_taken_1426_ = lean_ctor_get(v___x_1421_, 4);
v_varCount_1427_ = lean_ctor_get(v___x_1421_, 5);
v_isSharedCheck_1458_ = !lean_is_exclusive(v___x_1421_);
if (v_isSharedCheck_1458_ == 0)
{
v___x_1429_ = v___x_1421_;
v_isShared_1430_ = v_isSharedCheck_1458_;
goto v_resetjp_1428_;
}
else
{
lean_inc(v_varCount_1427_);
lean_inc(v_taken_1426_);
lean_inc(v_decls_1422_);
lean_inc(v_vars_1425_);
lean_inc(v_symbols_1424_);
lean_inc(v_sorts_1423_);
lean_dec(v___x_1421_);
v___x_1429_ = lean_box(0);
v_isShared_1430_ = v_isSharedCheck_1458_;
goto v_resetjp_1428_;
}
v_resetjp_1428_:
{
lean_object* v_types_1431_; lean_object* v_symbols_1432_; lean_object* v___x_1434_; uint8_t v_isShared_1435_; uint8_t v_isSharedCheck_1457_; 
v_types_1431_ = lean_ctor_get(v_decls_1422_, 0);
v_symbols_1432_ = lean_ctor_get(v_decls_1422_, 1);
v_isSharedCheck_1457_ = !lean_is_exclusive(v_decls_1422_);
if (v_isSharedCheck_1457_ == 0)
{
v___x_1434_ = v_decls_1422_;
v_isShared_1435_ = v_isSharedCheck_1457_;
goto v_resetjp_1433_;
}
else
{
lean_inc(v_symbols_1432_);
lean_inc(v_types_1431_);
lean_dec(v_decls_1422_);
v___x_1434_ = lean_box(0);
v_isShared_1435_ = v_isSharedCheck_1457_;
goto v_resetjp_1433_;
}
v_resetjp_1433_:
{
lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1449_; 
lean_inc_ref(v___y_1419_);
v___x_1436_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2___redArg(v_symbols_1424_, v_e_1409_, v___y_1419_);
v___x_1437_ = ((lean_object*)(lp_vampireReplay_Vampire_sortName___redArg___closed__0));
v___x_1438_ = lean_string_append(v___x_1437_, v___y_1419_);
v___x_1439_ = ((lean_object*)(lp_vampireReplay_Vampire_symbolName___closed__0));
v___x_1440_ = lean_string_append(v___x_1438_, v___x_1439_);
v___x_1441_ = lean_string_append(v___x_1440_, v___y_1419_);
v___x_1442_ = ((lean_object*)(lp_vampireReplay_List_mapTR_loop___at___00__private_VampireReplay_Translate_0__Vampire_Fm_renderVars_spec__0___closed__0));
v___x_1443_ = lean_string_append(v___x_1441_, v___x_1442_);
v___x_1444_ = lean_string_append(v___x_1443_, v___y_1420_);
lean_dec_ref(v___y_1420_);
v___x_1445_ = ((lean_object*)(lp_vampireReplay_Vampire_symbolName___closed__1));
v___x_1446_ = lean_string_append(v___x_1444_, v___x_1445_);
v___x_1447_ = lean_array_push(v_symbols_1432_, v___x_1446_);
if (v_isShared_1435_ == 0)
{
lean_ctor_set(v___x_1434_, 1, v___x_1447_);
v___x_1449_ = v___x_1434_;
goto v_reusejp_1448_;
}
else
{
lean_object* v_reuseFailAlloc_1456_; 
v_reuseFailAlloc_1456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1456_, 0, v_types_1431_);
lean_ctor_set(v_reuseFailAlloc_1456_, 1, v___x_1447_);
v___x_1449_ = v_reuseFailAlloc_1456_;
goto v_reusejp_1448_;
}
v_reusejp_1448_:
{
lean_object* v___x_1451_; 
if (v_isShared_1430_ == 0)
{
lean_ctor_set(v___x_1429_, 3, v___x_1449_);
lean_ctor_set(v___x_1429_, 1, v___x_1436_);
v___x_1451_ = v___x_1429_;
goto v_reusejp_1450_;
}
else
{
lean_object* v_reuseFailAlloc_1455_; 
v_reuseFailAlloc_1455_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1455_, 0, v_sorts_1423_);
lean_ctor_set(v_reuseFailAlloc_1455_, 1, v___x_1436_);
lean_ctor_set(v_reuseFailAlloc_1455_, 2, v_vars_1425_);
lean_ctor_set(v_reuseFailAlloc_1455_, 3, v___x_1449_);
lean_ctor_set(v_reuseFailAlloc_1455_, 4, v_taken_1426_);
lean_ctor_set(v_reuseFailAlloc_1455_, 5, v_varCount_1427_);
v___x_1451_ = v_reuseFailAlloc_1455_;
goto v_reusejp_1450_;
}
v_reusejp_1450_:
{
lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; 
v___x_1452_ = lean_st_ref_set(v___y_1418_, v___x_1451_);
v___x_1453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1453_, 0, v___y_1419_);
v___x_1454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1454_, 0, v___x_1453_);
return v___x_1454_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_symbolName___boxed(lean_object* v_e_1526_, lean_object* v_type_1527_, lean_object* v_a_1528_, lean_object* v_a_1529_, lean_object* v_a_1530_, lean_object* v_a_1531_, lean_object* v_a_1532_, lean_object* v_a_1533_){
_start:
{
lean_object* v_res_1534_; 
v_res_1534_ = lp_vampireReplay_Vampire_symbolName(v_e_1526_, v_type_1527_, v_a_1528_, v_a_1529_, v_a_1530_, v_a_1531_, v_a_1532_);
lean_dec(v_a_1532_);
lean_dec_ref(v_a_1531_);
lean_dec(v_a_1530_);
lean_dec_ref(v_a_1529_);
lean_dec(v_a_1528_);
return v_res_1534_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_bindVar___redArg(lean_object* v_fvarId_1535_, lean_object* v_a_1536_, lean_object* v_a_1537_, lean_object* v_a_1538_, lean_object* v_a_1539_){
_start:
{
lean_object* v___x_1541_; 
lean_inc(v_fvarId_1535_);
v___x_1541_ = l_Lean_FVarId_getUserName___redArg(v_fvarId_1535_, v_a_1537_, v_a_1538_, v_a_1539_);
if (lean_obj_tag(v___x_1541_) == 0)
{
lean_object* v_a_1542_; uint8_t v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v_a_1547_; lean_object* v___x_1548_; 
v_a_1542_ = lean_ctor_get(v___x_1541_, 0);
lean_inc(v_a_1542_);
lean_dec_ref_known(v___x_1541_, 1);
v___x_1543_ = 1;
v___x_1544_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_a_1542_, v___x_1543_);
v___x_1545_ = lp_vampireReplay_Vampire_sanitize(v___x_1544_, v___x_1543_);
v___x_1546_ = lp_vampireReplay_Vampire_freshName___redArg(v___x_1545_, v_a_1536_);
v_a_1547_ = lean_ctor_get(v___x_1546_, 0);
lean_inc(v_a_1547_);
lean_dec_ref(v___x_1546_);
lean_inc(v_fvarId_1535_);
v___x_1548_ = l_Lean_FVarId_getType___redArg(v_fvarId_1535_, v_a_1537_, v_a_1538_, v_a_1539_);
if (lean_obj_tag(v___x_1548_) == 0)
{
lean_object* v_a_1549_; lean_object* v___x_1550_; 
v_a_1549_ = lean_ctor_get(v___x_1548_, 0);
lean_inc(v_a_1549_);
lean_dec_ref_known(v___x_1548_, 1);
v___x_1550_ = lp_vampireReplay_Vampire_sortName___redArg(v_a_1549_, v_a_1536_, v_a_1537_, v_a_1538_, v_a_1539_);
if (lean_obj_tag(v___x_1550_) == 0)
{
lean_object* v_a_1551_; lean_object* v___x_1553_; uint8_t v_isShared_1554_; uint8_t v_isSharedCheck_1575_; 
v_a_1551_ = lean_ctor_get(v___x_1550_, 0);
v_isSharedCheck_1575_ = !lean_is_exclusive(v___x_1550_);
if (v_isSharedCheck_1575_ == 0)
{
v___x_1553_ = v___x_1550_;
v_isShared_1554_ = v_isSharedCheck_1575_;
goto v_resetjp_1552_;
}
else
{
lean_inc(v_a_1551_);
lean_dec(v___x_1550_);
v___x_1553_ = lean_box(0);
v_isShared_1554_ = v_isSharedCheck_1575_;
goto v_resetjp_1552_;
}
v_resetjp_1552_:
{
lean_object* v___x_1555_; lean_object* v_sorts_1556_; lean_object* v_symbols_1557_; lean_object* v_vars_1558_; lean_object* v_decls_1559_; lean_object* v_taken_1560_; lean_object* v_varCount_1561_; lean_object* v___x_1563_; uint8_t v_isShared_1564_; uint8_t v_isSharedCheck_1574_; 
v___x_1555_ = lean_st_ref_take(v_a_1536_);
v_sorts_1556_ = lean_ctor_get(v___x_1555_, 0);
v_symbols_1557_ = lean_ctor_get(v___x_1555_, 1);
v_vars_1558_ = lean_ctor_get(v___x_1555_, 2);
v_decls_1559_ = lean_ctor_get(v___x_1555_, 3);
v_taken_1560_ = lean_ctor_get(v___x_1555_, 4);
v_varCount_1561_ = lean_ctor_get(v___x_1555_, 5);
v_isSharedCheck_1574_ = !lean_is_exclusive(v___x_1555_);
if (v_isSharedCheck_1574_ == 0)
{
v___x_1563_ = v___x_1555_;
v_isShared_1564_ = v_isSharedCheck_1574_;
goto v_resetjp_1562_;
}
else
{
lean_inc(v_varCount_1561_);
lean_inc(v_taken_1560_);
lean_inc(v_decls_1559_);
lean_inc(v_vars_1558_);
lean_inc(v_symbols_1557_);
lean_inc(v_sorts_1556_);
lean_dec(v___x_1555_);
v___x_1563_ = lean_box(0);
v_isShared_1564_ = v_isSharedCheck_1574_;
goto v_resetjp_1562_;
}
v_resetjp_1562_:
{
lean_object* v___x_1565_; lean_object* v___x_1567_; 
lean_inc(v_a_1547_);
v___x_1565_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabOmit_spec__3___redArg(v_vars_1558_, v_fvarId_1535_, v_a_1547_);
if (v_isShared_1564_ == 0)
{
lean_ctor_set(v___x_1563_, 2, v___x_1565_);
v___x_1567_ = v___x_1563_;
goto v_reusejp_1566_;
}
else
{
lean_object* v_reuseFailAlloc_1573_; 
v_reuseFailAlloc_1573_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1573_, 0, v_sorts_1556_);
lean_ctor_set(v_reuseFailAlloc_1573_, 1, v_symbols_1557_);
lean_ctor_set(v_reuseFailAlloc_1573_, 2, v___x_1565_);
lean_ctor_set(v_reuseFailAlloc_1573_, 3, v_decls_1559_);
lean_ctor_set(v_reuseFailAlloc_1573_, 4, v_taken_1560_);
lean_ctor_set(v_reuseFailAlloc_1573_, 5, v_varCount_1561_);
v___x_1567_ = v_reuseFailAlloc_1573_;
goto v_reusejp_1566_;
}
v_reusejp_1566_:
{
lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1571_; 
v___x_1568_ = lean_st_ref_set(v_a_1536_, v___x_1567_);
v___x_1569_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1569_, 0, v_a_1547_);
lean_ctor_set(v___x_1569_, 1, v_a_1551_);
if (v_isShared_1554_ == 0)
{
lean_ctor_set(v___x_1553_, 0, v___x_1569_);
v___x_1571_ = v___x_1553_;
goto v_reusejp_1570_;
}
else
{
lean_object* v_reuseFailAlloc_1572_; 
v_reuseFailAlloc_1572_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1572_, 0, v___x_1569_);
v___x_1571_ = v_reuseFailAlloc_1572_;
goto v_reusejp_1570_;
}
v_reusejp_1570_:
{
return v___x_1571_;
}
}
}
}
}
else
{
lean_object* v_a_1576_; lean_object* v___x_1578_; uint8_t v_isShared_1579_; uint8_t v_isSharedCheck_1583_; 
lean_dec(v_a_1547_);
lean_dec(v_fvarId_1535_);
v_a_1576_ = lean_ctor_get(v___x_1550_, 0);
v_isSharedCheck_1583_ = !lean_is_exclusive(v___x_1550_);
if (v_isSharedCheck_1583_ == 0)
{
v___x_1578_ = v___x_1550_;
v_isShared_1579_ = v_isSharedCheck_1583_;
goto v_resetjp_1577_;
}
else
{
lean_inc(v_a_1576_);
lean_dec(v___x_1550_);
v___x_1578_ = lean_box(0);
v_isShared_1579_ = v_isSharedCheck_1583_;
goto v_resetjp_1577_;
}
v_resetjp_1577_:
{
lean_object* v___x_1581_; 
if (v_isShared_1579_ == 0)
{
v___x_1581_ = v___x_1578_;
goto v_reusejp_1580_;
}
else
{
lean_object* v_reuseFailAlloc_1582_; 
v_reuseFailAlloc_1582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1582_, 0, v_a_1576_);
v___x_1581_ = v_reuseFailAlloc_1582_;
goto v_reusejp_1580_;
}
v_reusejp_1580_:
{
return v___x_1581_;
}
}
}
}
else
{
lean_object* v_a_1584_; lean_object* v___x_1586_; uint8_t v_isShared_1587_; uint8_t v_isSharedCheck_1591_; 
lean_dec(v_a_1547_);
lean_dec(v_fvarId_1535_);
v_a_1584_ = lean_ctor_get(v___x_1548_, 0);
v_isSharedCheck_1591_ = !lean_is_exclusive(v___x_1548_);
if (v_isSharedCheck_1591_ == 0)
{
v___x_1586_ = v___x_1548_;
v_isShared_1587_ = v_isSharedCheck_1591_;
goto v_resetjp_1585_;
}
else
{
lean_inc(v_a_1584_);
lean_dec(v___x_1548_);
v___x_1586_ = lean_box(0);
v_isShared_1587_ = v_isSharedCheck_1591_;
goto v_resetjp_1585_;
}
v_resetjp_1585_:
{
lean_object* v___x_1589_; 
if (v_isShared_1587_ == 0)
{
v___x_1589_ = v___x_1586_;
goto v_reusejp_1588_;
}
else
{
lean_object* v_reuseFailAlloc_1590_; 
v_reuseFailAlloc_1590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1590_, 0, v_a_1584_);
v___x_1589_ = v_reuseFailAlloc_1590_;
goto v_reusejp_1588_;
}
v_reusejp_1588_:
{
return v___x_1589_;
}
}
}
}
else
{
lean_object* v_a_1592_; lean_object* v___x_1594_; uint8_t v_isShared_1595_; uint8_t v_isSharedCheck_1599_; 
lean_dec(v_fvarId_1535_);
v_a_1592_ = lean_ctor_get(v___x_1541_, 0);
v_isSharedCheck_1599_ = !lean_is_exclusive(v___x_1541_);
if (v_isSharedCheck_1599_ == 0)
{
v___x_1594_ = v___x_1541_;
v_isShared_1595_ = v_isSharedCheck_1599_;
goto v_resetjp_1593_;
}
else
{
lean_inc(v_a_1592_);
lean_dec(v___x_1541_);
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
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_bindVar___redArg___boxed(lean_object* v_fvarId_1600_, lean_object* v_a_1601_, lean_object* v_a_1602_, lean_object* v_a_1603_, lean_object* v_a_1604_, lean_object* v_a_1605_){
_start:
{
lean_object* v_res_1606_; 
v_res_1606_ = lp_vampireReplay_Vampire_bindVar___redArg(v_fvarId_1600_, v_a_1601_, v_a_1602_, v_a_1603_, v_a_1604_);
lean_dec(v_a_1604_);
lean_dec_ref(v_a_1603_);
lean_dec_ref(v_a_1602_);
lean_dec(v_a_1601_);
return v_res_1606_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_bindVar(lean_object* v_fvarId_1607_, lean_object* v_a_1608_, lean_object* v_a_1609_, lean_object* v_a_1610_, lean_object* v_a_1611_, lean_object* v_a_1612_){
_start:
{
lean_object* v___x_1614_; 
v___x_1614_ = lp_vampireReplay_Vampire_bindVar___redArg(v_fvarId_1607_, v_a_1608_, v_a_1609_, v_a_1611_, v_a_1612_);
return v___x_1614_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_bindVar___boxed(lean_object* v_fvarId_1615_, lean_object* v_a_1616_, lean_object* v_a_1617_, lean_object* v_a_1618_, lean_object* v_a_1619_, lean_object* v_a_1620_, lean_object* v_a_1621_){
_start:
{
lean_object* v_res_1622_; 
v_res_1622_ = lp_vampireReplay_Vampire_bindVar(v_fvarId_1615_, v_a_1616_, v_a_1617_, v_a_1618_, v_a_1619_, v_a_1620_);
lean_dec(v_a_1620_);
lean_dec_ref(v_a_1619_);
lean_dec(v_a_1618_);
lean_dec_ref(v_a_1617_);
lean_dec(v_a_1616_);
return v_res_1622_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_castInto(lean_object* v_sort_1626_){
_start:
{
lean_object* v___x_1627_; uint8_t v___x_1628_; 
v___x_1627_ = ((lean_object*)(lp_vampireReplay_Vampire_arithmeticSort___closed__6));
v___x_1628_ = lean_string_dec_eq(v_sort_1626_, v___x_1627_);
if (v___x_1628_ == 0)
{
lean_object* v___x_1629_; uint8_t v___x_1630_; 
v___x_1629_ = ((lean_object*)(lp_vampireReplay_Vampire_arithmeticSort___closed__8));
v___x_1630_ = lean_string_dec_eq(v_sort_1626_, v___x_1629_);
if (v___x_1630_ == 0)
{
lean_object* v___x_1631_; 
v___x_1631_ = ((lean_object*)(lp_vampireReplay_Vampire_castInto___closed__0));
return v___x_1631_;
}
else
{
lean_object* v___x_1632_; 
v___x_1632_ = ((lean_object*)(lp_vampireReplay_Vampire_castInto___closed__1));
return v___x_1632_;
}
}
else
{
lean_object* v___x_1633_; 
v___x_1633_ = ((lean_object*)(lp_vampireReplay_Vampire_castInto___closed__2));
return v___x_1633_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_castInto___boxed(lean_object* v_sort_1634_){
_start:
{
lean_object* v_res_1635_; 
v_res_1635_ = lp_vampireReplay_Vampire_castInto(v_sort_1634_);
lean_dec_ref(v_sort_1634_);
return v_res_1635_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_junctionArgs_parts(lean_object* v_fn_1636_, lean_object* v_e_1637_){
_start:
{
lean_object* v___x_1638_; uint8_t v___x_1639_; 
v___x_1638_ = lean_unsigned_to_nat(2u);
v___x_1639_ = l_Lean_Expr_isAppOfArity(v_e_1637_, v_fn_1636_, v___x_1638_);
if (v___x_1639_ == 0)
{
lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; 
v___x_1640_ = lean_unsigned_to_nat(1u);
v___x_1641_ = lean_mk_empty_array_with_capacity(v___x_1640_);
v___x_1642_ = lean_array_push(v___x_1641_, v_e_1637_);
return v___x_1642_;
}
else
{
lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; 
v___x_1643_ = l_Lean_Expr_appFn_x21(v_e_1637_);
v___x_1644_ = l_Lean_Expr_appArg_x21(v___x_1643_);
lean_dec_ref(v___x_1643_);
v___x_1645_ = lp_vampireReplay_Vampire_junctionArgs_parts(v_fn_1636_, v___x_1644_);
v___x_1646_ = l_Lean_Expr_appArg_x21(v_e_1637_);
lean_dec_ref(v_e_1637_);
v___x_1647_ = lp_vampireReplay_Vampire_junctionArgs_parts(v_fn_1636_, v___x_1646_);
v___x_1648_ = l_Array_append___redArg(v___x_1645_, v___x_1647_);
lean_dec_ref(v___x_1647_);
return v___x_1648_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_junctionArgs_parts___boxed(lean_object* v_fn_1649_, lean_object* v_e_1650_){
_start:
{
lean_object* v_res_1651_; 
v_res_1651_ = lp_vampireReplay_Vampire_junctionArgs_parts(v_fn_1649_, v_e_1650_);
lean_dec(v_fn_1649_);
return v_res_1651_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_translateTerm_spec__3___redArg(lean_object* v_as_1652_, size_t v_i_1653_, size_t v_stop_1654_, lean_object* v_b_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_){
_start:
{
lean_object* v_a_1662_; uint8_t v___x_1666_; 
v___x_1666_ = lean_usize_dec_eq(v_i_1653_, v_stop_1654_);
if (v___x_1666_ == 0)
{
lean_object* v___x_1667_; lean_object* v___x_1670_; 
v___x_1667_ = lean_array_uget_borrowed(v_as_1652_, v_i_1653_);
lean_inc(v___x_1667_);
v___x_1670_ = lp_vampireReplay_Vampire_isSortType(v___x_1667_, v___y_1656_, v___y_1657_, v___y_1658_, v___y_1659_);
if (lean_obj_tag(v___x_1670_) == 0)
{
lean_object* v_a_1671_; uint8_t v___x_1672_; 
v_a_1671_ = lean_ctor_get(v___x_1670_, 0);
lean_inc(v_a_1671_);
lean_dec_ref_known(v___x_1670_, 1);
v___x_1672_ = lean_unbox(v_a_1671_);
lean_dec(v_a_1671_);
if (v___x_1672_ == 0)
{
goto v___jp_1668_;
}
else
{
v_a_1662_ = v_b_1655_;
goto v___jp_1661_;
}
}
else
{
if (lean_obj_tag(v___x_1670_) == 0)
{
lean_object* v_a_1673_; uint8_t v___x_1674_; 
v_a_1673_ = lean_ctor_get(v___x_1670_, 0);
lean_inc(v_a_1673_);
lean_dec_ref_known(v___x_1670_, 1);
v___x_1674_ = lean_unbox(v_a_1673_);
lean_dec(v_a_1673_);
if (v___x_1674_ == 0)
{
v_a_1662_ = v_b_1655_;
goto v___jp_1661_;
}
else
{
goto v___jp_1668_;
}
}
else
{
lean_object* v_a_1675_; lean_object* v___x_1677_; uint8_t v_isShared_1678_; uint8_t v_isSharedCheck_1682_; 
lean_dec_ref(v_b_1655_);
v_a_1675_ = lean_ctor_get(v___x_1670_, 0);
v_isSharedCheck_1682_ = !lean_is_exclusive(v___x_1670_);
if (v_isSharedCheck_1682_ == 0)
{
v___x_1677_ = v___x_1670_;
v_isShared_1678_ = v_isSharedCheck_1682_;
goto v_resetjp_1676_;
}
else
{
lean_inc(v_a_1675_);
lean_dec(v___x_1670_);
v___x_1677_ = lean_box(0);
v_isShared_1678_ = v_isSharedCheck_1682_;
goto v_resetjp_1676_;
}
v_resetjp_1676_:
{
lean_object* v___x_1680_; 
if (v_isShared_1678_ == 0)
{
v___x_1680_ = v___x_1677_;
goto v_reusejp_1679_;
}
else
{
lean_object* v_reuseFailAlloc_1681_; 
v_reuseFailAlloc_1681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1681_, 0, v_a_1675_);
v___x_1680_ = v_reuseFailAlloc_1681_;
goto v_reusejp_1679_;
}
v_reusejp_1679_:
{
return v___x_1680_;
}
}
}
}
v___jp_1668_:
{
lean_object* v___x_1669_; 
lean_inc(v___x_1667_);
v___x_1669_ = lean_array_push(v_b_1655_, v___x_1667_);
v_a_1662_ = v___x_1669_;
goto v___jp_1661_;
}
}
else
{
lean_object* v___x_1683_; 
v___x_1683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1683_, 0, v_b_1655_);
return v___x_1683_;
}
v___jp_1661_:
{
size_t v___x_1663_; size_t v___x_1664_; 
v___x_1663_ = ((size_t)1ULL);
v___x_1664_ = lean_usize_add(v_i_1653_, v___x_1663_);
v_i_1653_ = v___x_1664_;
v_b_1655_ = v_a_1662_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_translateTerm_spec__3___redArg___boxed(lean_object* v_as_1684_, lean_object* v_i_1685_, lean_object* v_stop_1686_, lean_object* v_b_1687_, lean_object* v___y_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_){
_start:
{
size_t v_i_boxed_1693_; size_t v_stop_boxed_1694_; lean_object* v_res_1695_; 
v_i_boxed_1693_ = lean_unbox_usize(v_i_1685_);
lean_dec(v_i_1685_);
v_stop_boxed_1694_ = lean_unbox_usize(v_stop_1686_);
lean_dec(v_stop_1686_);
v_res_1695_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_translateTerm_spec__3___redArg(v_as_1684_, v_i_boxed_1693_, v_stop_boxed_1694_, v_b_1687_, v___y_1688_, v___y_1689_, v___y_1690_, v___y_1691_);
lean_dec(v___y_1691_);
lean_dec_ref(v___y_1690_);
lean_dec(v___y_1689_);
lean_dec_ref(v___y_1688_);
lean_dec_ref(v_as_1684_);
return v_res_1695_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_throwError___at___00Vampire_translateTerm_spec__1___redArg(lean_object* v_msg_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_){
_start:
{
lean_object* v_ref_1702_; lean_object* v___x_1703_; lean_object* v_a_1704_; lean_object* v___x_1706_; uint8_t v_isShared_1707_; uint8_t v_isSharedCheck_1712_; 
v_ref_1702_ = lean_ctor_get(v___y_1699_, 5);
v___x_1703_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__7_spec__9_spec__10(v_msg_1696_, v___y_1697_, v___y_1698_, v___y_1699_, v___y_1700_);
v_a_1704_ = lean_ctor_get(v___x_1703_, 0);
v_isSharedCheck_1712_ = !lean_is_exclusive(v___x_1703_);
if (v_isSharedCheck_1712_ == 0)
{
v___x_1706_ = v___x_1703_;
v_isShared_1707_ = v_isSharedCheck_1712_;
goto v_resetjp_1705_;
}
else
{
lean_inc(v_a_1704_);
lean_dec(v___x_1703_);
v___x_1706_ = lean_box(0);
v_isShared_1707_ = v_isSharedCheck_1712_;
goto v_resetjp_1705_;
}
v_resetjp_1705_:
{
lean_object* v___x_1708_; lean_object* v___x_1710_; 
lean_inc(v_ref_1702_);
v___x_1708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1708_, 0, v_ref_1702_);
lean_ctor_set(v___x_1708_, 1, v_a_1704_);
if (v_isShared_1707_ == 0)
{
lean_ctor_set_tag(v___x_1706_, 1);
lean_ctor_set(v___x_1706_, 0, v___x_1708_);
v___x_1710_ = v___x_1706_;
goto v_reusejp_1709_;
}
else
{
lean_object* v_reuseFailAlloc_1711_; 
v_reuseFailAlloc_1711_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1711_, 0, v___x_1708_);
v___x_1710_ = v_reuseFailAlloc_1711_;
goto v_reusejp_1709_;
}
v_reusejp_1709_:
{
return v___x_1710_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_throwError___at___00Vampire_translateTerm_spec__1___redArg___boxed(lean_object* v_msg_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_){
_start:
{
lean_object* v_res_1719_; 
v_res_1719_ = lp_vampireReplay_Lean_throwError___at___00Vampire_translateTerm_spec__1___redArg(v_msg_1713_, v___y_1714_, v___y_1715_, v___y_1716_, v___y_1717_);
lean_dec(v___y_1717_);
lean_dec_ref(v___y_1716_);
lean_dec(v___y_1715_);
lean_dec_ref(v___y_1714_);
return v_res_1719_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_translateTerm_spec__0___redArg(lean_object* v_e_1720_, lean_object* v___y_1721_){
_start:
{
uint8_t v___x_1723_; 
v___x_1723_ = l_Lean_Expr_hasMVar(v_e_1720_);
if (v___x_1723_ == 0)
{
lean_object* v___x_1724_; 
v___x_1724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1724_, 0, v_e_1720_);
return v___x_1724_;
}
else
{
lean_object* v___x_1725_; lean_object* v_mctx_1726_; lean_object* v___x_1727_; lean_object* v_fst_1728_; lean_object* v_snd_1729_; lean_object* v___x_1730_; lean_object* v_cache_1731_; lean_object* v_zetaDeltaFVarIds_1732_; lean_object* v_postponed_1733_; lean_object* v_diag_1734_; lean_object* v___x_1736_; uint8_t v_isShared_1737_; uint8_t v_isSharedCheck_1743_; 
v___x_1725_ = lean_st_ref_get(v___y_1721_);
v_mctx_1726_ = lean_ctor_get(v___x_1725_, 0);
lean_inc_ref(v_mctx_1726_);
lean_dec(v___x_1725_);
v___x_1727_ = l_Lean_instantiateMVarsCore(v_mctx_1726_, v_e_1720_);
v_fst_1728_ = lean_ctor_get(v___x_1727_, 0);
lean_inc(v_fst_1728_);
v_snd_1729_ = lean_ctor_get(v___x_1727_, 1);
lean_inc(v_snd_1729_);
lean_dec_ref(v___x_1727_);
v___x_1730_ = lean_st_ref_take(v___y_1721_);
v_cache_1731_ = lean_ctor_get(v___x_1730_, 1);
v_zetaDeltaFVarIds_1732_ = lean_ctor_get(v___x_1730_, 2);
v_postponed_1733_ = lean_ctor_get(v___x_1730_, 3);
v_diag_1734_ = lean_ctor_get(v___x_1730_, 4);
v_isSharedCheck_1743_ = !lean_is_exclusive(v___x_1730_);
if (v_isSharedCheck_1743_ == 0)
{
lean_object* v_unused_1744_; 
v_unused_1744_ = lean_ctor_get(v___x_1730_, 0);
lean_dec(v_unused_1744_);
v___x_1736_ = v___x_1730_;
v_isShared_1737_ = v_isSharedCheck_1743_;
goto v_resetjp_1735_;
}
else
{
lean_inc(v_diag_1734_);
lean_inc(v_postponed_1733_);
lean_inc(v_zetaDeltaFVarIds_1732_);
lean_inc(v_cache_1731_);
lean_dec(v___x_1730_);
v___x_1736_ = lean_box(0);
v_isShared_1737_ = v_isSharedCheck_1743_;
goto v_resetjp_1735_;
}
v_resetjp_1735_:
{
lean_object* v___x_1739_; 
if (v_isShared_1737_ == 0)
{
lean_ctor_set(v___x_1736_, 0, v_snd_1729_);
v___x_1739_ = v___x_1736_;
goto v_reusejp_1738_;
}
else
{
lean_object* v_reuseFailAlloc_1742_; 
v_reuseFailAlloc_1742_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1742_, 0, v_snd_1729_);
lean_ctor_set(v_reuseFailAlloc_1742_, 1, v_cache_1731_);
lean_ctor_set(v_reuseFailAlloc_1742_, 2, v_zetaDeltaFVarIds_1732_);
lean_ctor_set(v_reuseFailAlloc_1742_, 3, v_postponed_1733_);
lean_ctor_set(v_reuseFailAlloc_1742_, 4, v_diag_1734_);
v___x_1739_ = v_reuseFailAlloc_1742_;
goto v_reusejp_1738_;
}
v_reusejp_1738_:
{
lean_object* v___x_1740_; lean_object* v___x_1741_; 
v___x_1740_ = lean_st_ref_set(v___y_1721_, v___x_1739_);
v___x_1741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1741_, 0, v_fst_1728_);
return v___x_1741_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_translateTerm_spec__0___redArg___boxed(lean_object* v_e_1745_, lean_object* v___y_1746_, lean_object* v___y_1747_){
_start:
{
lean_object* v_res_1748_; 
v_res_1748_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_translateTerm_spec__0___redArg(v_e_1745_, v___y_1746_);
lean_dec(v___y_1746_);
return v_res_1748_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_arithmeticTerm_x3f(lean_object* v_e_1791_, lean_object* v_a_1792_, lean_object* v_a_1793_, lean_object* v_a_1794_, lean_object* v_a_1795_, lean_object* v_a_1796_){
_start:
{
lean_object* v_fn_1799_; lean_object* v_a_1800_; lean_object* v_b_1801_; lean_object* v___y_1802_; lean_object* v___y_1803_; lean_object* v___y_1804_; lean_object* v___y_1805_; lean_object* v___y_1806_; lean_object* v___x_1840_; 
lean_inc(v_a_1796_);
lean_inc_ref(v_a_1795_);
lean_inc(v_a_1794_);
lean_inc_ref(v_a_1793_);
lean_inc_ref(v_e_1791_);
v___x_1840_ = lean_infer_type(v_e_1791_, v_a_1793_, v_a_1794_, v_a_1795_, v_a_1796_);
if (lean_obj_tag(v___x_1840_) == 0)
{
lean_object* v_a_1841_; lean_object* v___x_1842_; 
v_a_1841_ = lean_ctor_get(v___x_1840_, 0);
lean_inc(v_a_1841_);
lean_dec_ref_known(v___x_1840_, 1);
lean_inc(v_a_1796_);
lean_inc_ref(v_a_1795_);
lean_inc(v_a_1794_);
lean_inc_ref(v_a_1793_);
v___x_1842_ = lean_whnf(v_a_1841_, v_a_1793_, v_a_1794_, v_a_1795_, v_a_1796_);
if (lean_obj_tag(v___x_1842_) == 0)
{
lean_object* v_a_1843_; lean_object* v___x_1845_; uint8_t v_isShared_1846_; uint8_t v_isSharedCheck_1985_; 
v_a_1843_ = lean_ctor_get(v___x_1842_, 0);
v_isSharedCheck_1985_ = !lean_is_exclusive(v___x_1842_);
if (v_isSharedCheck_1985_ == 0)
{
v___x_1845_ = v___x_1842_;
v_isShared_1846_ = v_isSharedCheck_1985_;
goto v_resetjp_1844_;
}
else
{
lean_inc(v_a_1843_);
lean_dec(v___x_1842_);
v___x_1845_ = lean_box(0);
v_isShared_1846_ = v_isSharedCheck_1985_;
goto v_resetjp_1844_;
}
v_resetjp_1844_:
{
lean_object* v___x_1847_; 
v___x_1847_ = lp_vampireReplay_Vampire_arithmeticSort(v_a_1843_);
lean_dec(v_a_1843_);
if (lean_obj_tag(v___x_1847_) == 1)
{
lean_object* v_val_1848_; lean_object* v___x_1850_; uint8_t v_isShared_1851_; uint8_t v_isSharedCheck_1980_; 
v_val_1848_ = lean_ctor_get(v___x_1847_, 0);
v_isSharedCheck_1980_ = !lean_is_exclusive(v___x_1847_);
if (v_isSharedCheck_1980_ == 0)
{
v___x_1850_ = v___x_1847_;
v_isShared_1851_ = v_isSharedCheck_1980_;
goto v_resetjp_1849_;
}
else
{
lean_inc(v_val_1848_);
lean_dec(v___x_1847_);
v___x_1850_ = lean_box(0);
v_isShared_1851_ = v_isSharedCheck_1980_;
goto v_resetjp_1849_;
}
v_resetjp_1849_:
{
lean_object* v_a_1853_; lean_object* v___y_1854_; lean_object* v___y_1855_; lean_object* v___y_1856_; lean_object* v___y_1857_; lean_object* v___y_1858_; lean_object* v___x_1884_; 
lean_inc_ref(v_e_1791_);
v___x_1884_ = lp_vampireReplay_Vampire_numeral_x3f(v_e_1791_);
if (lean_obj_tag(v___x_1884_) == 1)
{
lean_object* v_val_1885_; lean_object* v___x_1887_; uint8_t v_isShared_1888_; uint8_t v_isSharedCheck_1898_; 
lean_del_object(v___x_1850_);
lean_dec_ref(v_e_1791_);
v_val_1885_ = lean_ctor_get(v___x_1884_, 0);
v_isSharedCheck_1898_ = !lean_is_exclusive(v___x_1884_);
if (v_isSharedCheck_1898_ == 0)
{
v___x_1887_ = v___x_1884_;
v_isShared_1888_ = v_isSharedCheck_1898_;
goto v_resetjp_1886_;
}
else
{
lean_inc(v_val_1885_);
lean_dec(v___x_1884_);
v___x_1887_ = lean_box(0);
v_isShared_1888_ = v_isSharedCheck_1898_;
goto v_resetjp_1886_;
}
v_resetjp_1886_:
{
lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1893_; 
v___x_1889_ = lp_vampireReplay_Vampire_renderNumeral(v_val_1848_, v_val_1885_);
lean_dec(v_val_1885_);
lean_dec(v_val_1848_);
v___x_1890_ = ((lean_object*)(lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__0));
v___x_1891_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1891_, 0, v___x_1889_);
lean_ctor_set(v___x_1891_, 1, v___x_1890_);
if (v_isShared_1888_ == 0)
{
lean_ctor_set(v___x_1887_, 0, v___x_1891_);
v___x_1893_ = v___x_1887_;
goto v_reusejp_1892_;
}
else
{
lean_object* v_reuseFailAlloc_1897_; 
v_reuseFailAlloc_1897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1897_, 0, v___x_1891_);
v___x_1893_ = v_reuseFailAlloc_1897_;
goto v_reusejp_1892_;
}
v_reusejp_1892_:
{
lean_object* v___x_1895_; 
if (v_isShared_1846_ == 0)
{
lean_ctor_set(v___x_1845_, 0, v___x_1893_);
v___x_1895_ = v___x_1845_;
goto v_reusejp_1894_;
}
else
{
lean_object* v_reuseFailAlloc_1896_; 
v_reuseFailAlloc_1896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1896_, 0, v___x_1893_);
v___x_1895_ = v_reuseFailAlloc_1896_;
goto v_reusejp_1894_;
}
v_reusejp_1894_:
{
return v___x_1895_;
}
}
}
}
else
{
lean_object* v___x_1899_; 
lean_dec(v___x_1884_);
lean_del_object(v___x_1845_);
v___x_1899_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_1791_, v_a_1794_);
if (lean_obj_tag(v___x_1899_) == 0)
{
lean_object* v_a_1900_; lean_object* v___x_1902_; uint8_t v_isShared_1903_; uint8_t v_isSharedCheck_1971_; 
v_a_1900_ = lean_ctor_get(v___x_1899_, 0);
v_isSharedCheck_1971_ = !lean_is_exclusive(v___x_1899_);
if (v_isSharedCheck_1971_ == 0)
{
v___x_1902_ = v___x_1899_;
v_isShared_1903_ = v_isSharedCheck_1971_;
goto v_resetjp_1901_;
}
else
{
lean_inc(v_a_1900_);
lean_dec(v___x_1899_);
v___x_1902_ = lean_box(0);
v_isShared_1903_ = v_isSharedCheck_1971_;
goto v_resetjp_1901_;
}
v_resetjp_1901_:
{
lean_object* v___x_1909_; uint8_t v___x_1910_; 
v___x_1909_ = l_Lean_Expr_cleanupAnnotations(v_a_1900_);
v___x_1910_ = l_Lean_Expr_isApp(v___x_1909_);
if (v___x_1910_ == 0)
{
lean_dec_ref(v___x_1909_);
lean_del_object(v___x_1850_);
lean_dec(v_val_1848_);
goto v___jp_1904_;
}
else
{
lean_object* v_arg_1911_; lean_object* v___x_1912_; uint8_t v___x_1913_; 
v_arg_1911_ = lean_ctor_get(v___x_1909_, 1);
lean_inc_ref(v_arg_1911_);
v___x_1912_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1909_);
v___x_1913_ = l_Lean_Expr_isApp(v___x_1912_);
if (v___x_1913_ == 0)
{
lean_dec_ref(v___x_1912_);
lean_dec_ref(v_arg_1911_);
lean_del_object(v___x_1850_);
lean_dec(v_val_1848_);
goto v___jp_1904_;
}
else
{
lean_object* v_arg_1914_; lean_object* v___x_1915_; uint8_t v___x_1916_; 
v_arg_1914_ = lean_ctor_get(v___x_1912_, 1);
lean_inc_ref(v_arg_1914_);
v___x_1915_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1912_);
v___x_1916_ = l_Lean_Expr_isApp(v___x_1915_);
if (v___x_1916_ == 0)
{
lean_dec_ref(v___x_1915_);
lean_dec_ref(v_arg_1914_);
lean_dec_ref(v_arg_1911_);
lean_del_object(v___x_1850_);
lean_dec(v_val_1848_);
goto v___jp_1904_;
}
else
{
lean_object* v___x_1917_; lean_object* v___x_1918_; uint8_t v___x_1919_; 
v___x_1917_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1915_);
v___x_1918_ = ((lean_object*)(lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__3));
v___x_1919_ = l_Lean_Expr_isConstOf(v___x_1917_, v___x_1918_);
if (v___x_1919_ == 0)
{
lean_object* v___x_1920_; uint8_t v___x_1921_; 
v___x_1920_ = ((lean_object*)(lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__4));
v___x_1921_ = l_Lean_Expr_isConstOf(v___x_1917_, v___x_1920_);
if (v___x_1921_ == 0)
{
lean_object* v___x_1922_; uint8_t v___x_1923_; 
lean_del_object(v___x_1850_);
v___x_1922_ = ((lean_object*)(lp_vampireReplay_Vampire_numeral_x3f___closed__2));
v___x_1923_ = l_Lean_Expr_isConstOf(v___x_1917_, v___x_1922_);
if (v___x_1923_ == 0)
{
uint8_t v___x_1924_; 
v___x_1924_ = l_Lean_Expr_isApp(v___x_1917_);
if (v___x_1924_ == 0)
{
lean_dec_ref(v___x_1917_);
lean_dec_ref(v_arg_1914_);
lean_dec_ref(v_arg_1911_);
lean_dec(v_val_1848_);
goto v___jp_1904_;
}
else
{
lean_object* v___x_1925_; uint8_t v___x_1926_; 
v___x_1925_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1917_);
v___x_1926_ = l_Lean_Expr_isApp(v___x_1925_);
if (v___x_1926_ == 0)
{
lean_dec_ref(v___x_1925_);
lean_dec_ref(v_arg_1914_);
lean_dec_ref(v_arg_1911_);
lean_dec(v_val_1848_);
goto v___jp_1904_;
}
else
{
lean_object* v___x_1927_; uint8_t v___x_1928_; 
v___x_1927_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1925_);
v___x_1928_ = l_Lean_Expr_isApp(v___x_1927_);
if (v___x_1928_ == 0)
{
lean_dec_ref(v___x_1927_);
lean_dec_ref(v_arg_1914_);
lean_dec_ref(v_arg_1911_);
lean_dec(v_val_1848_);
goto v___jp_1904_;
}
else
{
lean_object* v___x_1929_; lean_object* v___x_1930_; uint8_t v___x_1931_; 
v___x_1929_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1927_);
v___x_1930_ = ((lean_object*)(lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__7));
v___x_1931_ = l_Lean_Expr_isConstOf(v___x_1929_, v___x_1930_);
if (v___x_1931_ == 0)
{
lean_object* v___x_1932_; uint8_t v___x_1933_; 
v___x_1932_ = ((lean_object*)(lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__10));
v___x_1933_ = l_Lean_Expr_isConstOf(v___x_1929_, v___x_1932_);
if (v___x_1933_ == 0)
{
lean_object* v___x_1934_; uint8_t v___x_1935_; 
lean_dec(v_val_1848_);
v___x_1934_ = ((lean_object*)(lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__13));
v___x_1935_ = l_Lean_Expr_isConstOf(v___x_1929_, v___x_1934_);
if (v___x_1935_ == 0)
{
lean_object* v___x_1936_; uint8_t v___x_1937_; 
v___x_1936_ = ((lean_object*)(lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__16));
v___x_1937_ = l_Lean_Expr_isConstOf(v___x_1929_, v___x_1936_);
if (v___x_1937_ == 0)
{
lean_object* v___x_1938_; uint8_t v___x_1939_; 
v___x_1938_ = ((lean_object*)(lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__19));
v___x_1939_ = l_Lean_Expr_isConstOf(v___x_1929_, v___x_1938_);
lean_dec_ref(v___x_1929_);
if (v___x_1939_ == 0)
{
lean_dec_ref(v_arg_1914_);
lean_dec_ref(v_arg_1911_);
goto v___jp_1904_;
}
else
{
lean_object* v___x_1940_; 
lean_del_object(v___x_1902_);
v___x_1940_ = ((lean_object*)(lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__20));
v_fn_1799_ = v___x_1940_;
v_a_1800_ = v_arg_1914_;
v_b_1801_ = v_arg_1911_;
v___y_1802_ = v_a_1792_;
v___y_1803_ = v_a_1793_;
v___y_1804_ = v_a_1794_;
v___y_1805_ = v_a_1795_;
v___y_1806_ = v_a_1796_;
goto v___jp_1798_;
}
}
else
{
lean_object* v___x_1941_; 
lean_dec_ref(v___x_1929_);
lean_del_object(v___x_1902_);
v___x_1941_ = ((lean_object*)(lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__21));
v_fn_1799_ = v___x_1941_;
v_a_1800_ = v_arg_1914_;
v_b_1801_ = v_arg_1911_;
v___y_1802_ = v_a_1792_;
v___y_1803_ = v_a_1793_;
v___y_1804_ = v_a_1794_;
v___y_1805_ = v_a_1795_;
v___y_1806_ = v_a_1796_;
goto v___jp_1798_;
}
}
else
{
lean_object* v___x_1942_; 
lean_dec_ref(v___x_1929_);
lean_del_object(v___x_1902_);
v___x_1942_ = ((lean_object*)(lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__22));
v_fn_1799_ = v___x_1942_;
v_a_1800_ = v_arg_1914_;
v_b_1801_ = v_arg_1911_;
v___y_1802_ = v_a_1792_;
v___y_1803_ = v_a_1793_;
v___y_1804_ = v_a_1794_;
v___y_1805_ = v_a_1795_;
v___y_1806_ = v_a_1796_;
goto v___jp_1798_;
}
}
else
{
lean_object* v___x_1943_; uint8_t v___x_1944_; 
lean_dec_ref(v___x_1929_);
lean_del_object(v___x_1902_);
v___x_1943_ = ((lean_object*)(lp_vampireReplay_Vampire_arithmeticSort___closed__10));
v___x_1944_ = lean_string_dec_eq(v_val_1848_, v___x_1943_);
lean_dec(v_val_1848_);
if (v___x_1944_ == 0)
{
lean_object* v___x_1945_; 
v___x_1945_ = ((lean_object*)(lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__23));
v_fn_1799_ = v___x_1945_;
v_a_1800_ = v_arg_1914_;
v_b_1801_ = v_arg_1911_;
v___y_1802_ = v_a_1792_;
v___y_1803_ = v_a_1793_;
v___y_1804_ = v_a_1794_;
v___y_1805_ = v_a_1795_;
v___y_1806_ = v_a_1796_;
goto v___jp_1798_;
}
else
{
lean_object* v___x_1946_; 
v___x_1946_ = ((lean_object*)(lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__24));
v_fn_1799_ = v___x_1946_;
v_a_1800_ = v_arg_1914_;
v_b_1801_ = v_arg_1911_;
v___y_1802_ = v_a_1792_;
v___y_1803_ = v_a_1793_;
v___y_1804_ = v_a_1794_;
v___y_1805_ = v_a_1795_;
v___y_1806_ = v_a_1796_;
goto v___jp_1798_;
}
}
}
else
{
lean_object* v___x_1947_; 
lean_dec_ref(v___x_1929_);
lean_del_object(v___x_1902_);
lean_dec(v_val_1848_);
v___x_1947_ = ((lean_object*)(lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__25));
v_fn_1799_ = v___x_1947_;
v_a_1800_ = v_arg_1914_;
v_b_1801_ = v_arg_1911_;
v___y_1802_ = v_a_1792_;
v___y_1803_ = v_a_1793_;
v___y_1804_ = v_a_1794_;
v___y_1805_ = v_a_1795_;
v___y_1806_ = v_a_1796_;
goto v___jp_1798_;
}
}
}
}
}
else
{
lean_object* v___x_1948_; 
lean_dec_ref(v___x_1917_);
lean_dec_ref(v_arg_1914_);
lean_del_object(v___x_1902_);
lean_dec(v_val_1848_);
v___x_1948_ = lp_vampireReplay_Vampire_translateTerm(v_arg_1911_, v_a_1792_, v_a_1793_, v_a_1794_, v_a_1795_, v_a_1796_);
if (lean_obj_tag(v___x_1948_) == 0)
{
lean_object* v_a_1949_; lean_object* v___x_1951_; uint8_t v_isShared_1952_; uint8_t v_isSharedCheck_1962_; 
v_a_1949_ = lean_ctor_get(v___x_1948_, 0);
v_isSharedCheck_1962_ = !lean_is_exclusive(v___x_1948_);
if (v_isSharedCheck_1962_ == 0)
{
v___x_1951_ = v___x_1948_;
v_isShared_1952_ = v_isSharedCheck_1962_;
goto v_resetjp_1950_;
}
else
{
lean_inc(v_a_1949_);
lean_dec(v___x_1948_);
v___x_1951_ = lean_box(0);
v_isShared_1952_ = v_isSharedCheck_1962_;
goto v_resetjp_1950_;
}
v_resetjp_1950_:
{
lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1960_; 
v___x_1953_ = ((lean_object*)(lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__26));
v___x_1954_ = lean_unsigned_to_nat(1u);
v___x_1955_ = lean_mk_empty_array_with_capacity(v___x_1954_);
v___x_1956_ = lean_array_push(v___x_1955_, v_a_1949_);
v___x_1957_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1957_, 0, v___x_1953_);
lean_ctor_set(v___x_1957_, 1, v___x_1956_);
v___x_1958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1958_, 0, v___x_1957_);
if (v_isShared_1952_ == 0)
{
lean_ctor_set(v___x_1951_, 0, v___x_1958_);
v___x_1960_ = v___x_1951_;
goto v_reusejp_1959_;
}
else
{
lean_object* v_reuseFailAlloc_1961_; 
v_reuseFailAlloc_1961_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1961_, 0, v___x_1958_);
v___x_1960_ = v_reuseFailAlloc_1961_;
goto v_reusejp_1959_;
}
v_reusejp_1959_:
{
return v___x_1960_;
}
}
}
else
{
lean_object* v_a_1963_; lean_object* v___x_1965_; uint8_t v_isShared_1966_; uint8_t v_isSharedCheck_1970_; 
v_a_1963_ = lean_ctor_get(v___x_1948_, 0);
v_isSharedCheck_1970_ = !lean_is_exclusive(v___x_1948_);
if (v_isSharedCheck_1970_ == 0)
{
v___x_1965_ = v___x_1948_;
v_isShared_1966_ = v_isSharedCheck_1970_;
goto v_resetjp_1964_;
}
else
{
lean_inc(v_a_1963_);
lean_dec(v___x_1948_);
v___x_1965_ = lean_box(0);
v_isShared_1966_ = v_isSharedCheck_1970_;
goto v_resetjp_1964_;
}
v_resetjp_1964_:
{
lean_object* v___x_1968_; 
if (v_isShared_1966_ == 0)
{
v___x_1968_ = v___x_1965_;
goto v_reusejp_1967_;
}
else
{
lean_object* v_reuseFailAlloc_1969_; 
v_reuseFailAlloc_1969_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1969_, 0, v_a_1963_);
v___x_1968_ = v_reuseFailAlloc_1969_;
goto v_reusejp_1967_;
}
v_reusejp_1967_:
{
return v___x_1968_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_1917_);
lean_dec_ref(v_arg_1914_);
lean_del_object(v___x_1902_);
v_a_1853_ = v_arg_1911_;
v___y_1854_ = v_a_1792_;
v___y_1855_ = v_a_1793_;
v___y_1856_ = v_a_1794_;
v___y_1857_ = v_a_1795_;
v___y_1858_ = v_a_1796_;
goto v___jp_1852_;
}
}
else
{
lean_dec_ref(v___x_1917_);
lean_dec_ref(v_arg_1914_);
lean_del_object(v___x_1902_);
v_a_1853_ = v_arg_1911_;
v___y_1854_ = v_a_1792_;
v___y_1855_ = v_a_1793_;
v___y_1856_ = v_a_1794_;
v___y_1857_ = v_a_1795_;
v___y_1858_ = v_a_1796_;
goto v___jp_1852_;
}
}
}
}
v___jp_1904_:
{
lean_object* v___x_1905_; lean_object* v___x_1907_; 
v___x_1905_ = lean_box(0);
if (v_isShared_1903_ == 0)
{
lean_ctor_set(v___x_1902_, 0, v___x_1905_);
v___x_1907_ = v___x_1902_;
goto v_reusejp_1906_;
}
else
{
lean_object* v_reuseFailAlloc_1908_; 
v_reuseFailAlloc_1908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1908_, 0, v___x_1905_);
v___x_1907_ = v_reuseFailAlloc_1908_;
goto v_reusejp_1906_;
}
v_reusejp_1906_:
{
return v___x_1907_;
}
}
}
}
else
{
lean_object* v_a_1972_; lean_object* v___x_1974_; uint8_t v_isShared_1975_; uint8_t v_isSharedCheck_1979_; 
lean_del_object(v___x_1850_);
lean_dec(v_val_1848_);
v_a_1972_ = lean_ctor_get(v___x_1899_, 0);
v_isSharedCheck_1979_ = !lean_is_exclusive(v___x_1899_);
if (v_isSharedCheck_1979_ == 0)
{
v___x_1974_ = v___x_1899_;
v_isShared_1975_ = v_isSharedCheck_1979_;
goto v_resetjp_1973_;
}
else
{
lean_inc(v_a_1972_);
lean_dec(v___x_1899_);
v___x_1974_ = lean_box(0);
v_isShared_1975_ = v_isSharedCheck_1979_;
goto v_resetjp_1973_;
}
v_resetjp_1973_:
{
lean_object* v___x_1977_; 
if (v_isShared_1975_ == 0)
{
v___x_1977_ = v___x_1974_;
goto v_reusejp_1976_;
}
else
{
lean_object* v_reuseFailAlloc_1978_; 
v_reuseFailAlloc_1978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1978_, 0, v_a_1972_);
v___x_1977_ = v_reuseFailAlloc_1978_;
goto v_reusejp_1976_;
}
v_reusejp_1976_:
{
return v___x_1977_;
}
}
}
}
v___jp_1852_:
{
lean_object* v___x_1859_; 
v___x_1859_ = lp_vampireReplay_Vampire_translateTerm(v_a_1853_, v___y_1854_, v___y_1855_, v___y_1856_, v___y_1857_, v___y_1858_);
if (lean_obj_tag(v___x_1859_) == 0)
{
lean_object* v_a_1860_; lean_object* v___x_1862_; uint8_t v_isShared_1863_; uint8_t v_isSharedCheck_1875_; 
v_a_1860_ = lean_ctor_get(v___x_1859_, 0);
v_isSharedCheck_1875_ = !lean_is_exclusive(v___x_1859_);
if (v_isSharedCheck_1875_ == 0)
{
v___x_1862_ = v___x_1859_;
v_isShared_1863_ = v_isSharedCheck_1875_;
goto v_resetjp_1861_;
}
else
{
lean_inc(v_a_1860_);
lean_dec(v___x_1859_);
v___x_1862_ = lean_box(0);
v_isShared_1863_ = v_isSharedCheck_1875_;
goto v_resetjp_1861_;
}
v_resetjp_1861_:
{
lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1870_; 
v___x_1864_ = lp_vampireReplay_Vampire_castInto(v_val_1848_);
lean_dec(v_val_1848_);
v___x_1865_ = lean_unsigned_to_nat(1u);
v___x_1866_ = lean_mk_empty_array_with_capacity(v___x_1865_);
v___x_1867_ = lean_array_push(v___x_1866_, v_a_1860_);
v___x_1868_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1868_, 0, v___x_1864_);
lean_ctor_set(v___x_1868_, 1, v___x_1867_);
if (v_isShared_1851_ == 0)
{
lean_ctor_set(v___x_1850_, 0, v___x_1868_);
v___x_1870_ = v___x_1850_;
goto v_reusejp_1869_;
}
else
{
lean_object* v_reuseFailAlloc_1874_; 
v_reuseFailAlloc_1874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1874_, 0, v___x_1868_);
v___x_1870_ = v_reuseFailAlloc_1874_;
goto v_reusejp_1869_;
}
v_reusejp_1869_:
{
lean_object* v___x_1872_; 
if (v_isShared_1863_ == 0)
{
lean_ctor_set(v___x_1862_, 0, v___x_1870_);
v___x_1872_ = v___x_1862_;
goto v_reusejp_1871_;
}
else
{
lean_object* v_reuseFailAlloc_1873_; 
v_reuseFailAlloc_1873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1873_, 0, v___x_1870_);
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
else
{
lean_object* v_a_1876_; lean_object* v___x_1878_; uint8_t v_isShared_1879_; uint8_t v_isSharedCheck_1883_; 
lean_del_object(v___x_1850_);
lean_dec(v_val_1848_);
v_a_1876_ = lean_ctor_get(v___x_1859_, 0);
v_isSharedCheck_1883_ = !lean_is_exclusive(v___x_1859_);
if (v_isSharedCheck_1883_ == 0)
{
v___x_1878_ = v___x_1859_;
v_isShared_1879_ = v_isSharedCheck_1883_;
goto v_resetjp_1877_;
}
else
{
lean_inc(v_a_1876_);
lean_dec(v___x_1859_);
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
}
else
{
lean_object* v___x_1981_; lean_object* v___x_1983_; 
lean_dec(v___x_1847_);
lean_dec_ref(v_e_1791_);
v___x_1981_ = lean_box(0);
if (v_isShared_1846_ == 0)
{
lean_ctor_set(v___x_1845_, 0, v___x_1981_);
v___x_1983_ = v___x_1845_;
goto v_reusejp_1982_;
}
else
{
lean_object* v_reuseFailAlloc_1984_; 
v_reuseFailAlloc_1984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1984_, 0, v___x_1981_);
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
lean_dec_ref(v_e_1791_);
v_a_1986_ = lean_ctor_get(v___x_1842_, 0);
v_isSharedCheck_1993_ = !lean_is_exclusive(v___x_1842_);
if (v_isSharedCheck_1993_ == 0)
{
v___x_1988_ = v___x_1842_;
v_isShared_1989_ = v_isSharedCheck_1993_;
goto v_resetjp_1987_;
}
else
{
lean_inc(v_a_1986_);
lean_dec(v___x_1842_);
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
lean_dec_ref(v_e_1791_);
v_a_1994_ = lean_ctor_get(v___x_1840_, 0);
v_isSharedCheck_2001_ = !lean_is_exclusive(v___x_1840_);
if (v_isSharedCheck_2001_ == 0)
{
v___x_1996_ = v___x_1840_;
v_isShared_1997_ = v_isSharedCheck_2001_;
goto v_resetjp_1995_;
}
else
{
lean_inc(v_a_1994_);
lean_dec(v___x_1840_);
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
v___jp_1798_:
{
lean_object* v___x_1807_; 
v___x_1807_ = lp_vampireReplay_Vampire_translateTerm(v_a_1800_, v___y_1802_, v___y_1803_, v___y_1804_, v___y_1805_, v___y_1806_);
if (lean_obj_tag(v___x_1807_) == 0)
{
lean_object* v_a_1808_; lean_object* v___x_1809_; 
v_a_1808_ = lean_ctor_get(v___x_1807_, 0);
lean_inc(v_a_1808_);
lean_dec_ref_known(v___x_1807_, 1);
v___x_1809_ = lp_vampireReplay_Vampire_translateTerm(v_b_1801_, v___y_1802_, v___y_1803_, v___y_1804_, v___y_1805_, v___y_1806_);
if (lean_obj_tag(v___x_1809_) == 0)
{
lean_object* v_a_1810_; lean_object* v___x_1812_; uint8_t v_isShared_1813_; uint8_t v_isSharedCheck_1823_; 
v_a_1810_ = lean_ctor_get(v___x_1809_, 0);
v_isSharedCheck_1823_ = !lean_is_exclusive(v___x_1809_);
if (v_isSharedCheck_1823_ == 0)
{
v___x_1812_ = v___x_1809_;
v_isShared_1813_ = v_isSharedCheck_1823_;
goto v_resetjp_1811_;
}
else
{
lean_inc(v_a_1810_);
lean_dec(v___x_1809_);
v___x_1812_ = lean_box(0);
v_isShared_1813_ = v_isSharedCheck_1823_;
goto v_resetjp_1811_;
}
v_resetjp_1811_:
{
lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1821_; 
v___x_1814_ = lean_unsigned_to_nat(2u);
v___x_1815_ = lean_mk_empty_array_with_capacity(v___x_1814_);
v___x_1816_ = lean_array_push(v___x_1815_, v_a_1808_);
v___x_1817_ = lean_array_push(v___x_1816_, v_a_1810_);
lean_inc_ref(v_fn_1799_);
v___x_1818_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1818_, 0, v_fn_1799_);
lean_ctor_set(v___x_1818_, 1, v___x_1817_);
v___x_1819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1819_, 0, v___x_1818_);
if (v_isShared_1813_ == 0)
{
lean_ctor_set(v___x_1812_, 0, v___x_1819_);
v___x_1821_ = v___x_1812_;
goto v_reusejp_1820_;
}
else
{
lean_object* v_reuseFailAlloc_1822_; 
v_reuseFailAlloc_1822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1822_, 0, v___x_1819_);
v___x_1821_ = v_reuseFailAlloc_1822_;
goto v_reusejp_1820_;
}
v_reusejp_1820_:
{
return v___x_1821_;
}
}
}
else
{
lean_object* v_a_1824_; lean_object* v___x_1826_; uint8_t v_isShared_1827_; uint8_t v_isSharedCheck_1831_; 
lean_dec(v_a_1808_);
v_a_1824_ = lean_ctor_get(v___x_1809_, 0);
v_isSharedCheck_1831_ = !lean_is_exclusive(v___x_1809_);
if (v_isSharedCheck_1831_ == 0)
{
v___x_1826_ = v___x_1809_;
v_isShared_1827_ = v_isSharedCheck_1831_;
goto v_resetjp_1825_;
}
else
{
lean_inc(v_a_1824_);
lean_dec(v___x_1809_);
v___x_1826_ = lean_box(0);
v_isShared_1827_ = v_isSharedCheck_1831_;
goto v_resetjp_1825_;
}
v_resetjp_1825_:
{
lean_object* v___x_1829_; 
if (v_isShared_1827_ == 0)
{
v___x_1829_ = v___x_1826_;
goto v_reusejp_1828_;
}
else
{
lean_object* v_reuseFailAlloc_1830_; 
v_reuseFailAlloc_1830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1830_, 0, v_a_1824_);
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
else
{
lean_object* v_a_1832_; lean_object* v___x_1834_; uint8_t v_isShared_1835_; uint8_t v_isSharedCheck_1839_; 
lean_dec_ref(v_b_1801_);
v_a_1832_ = lean_ctor_get(v___x_1807_, 0);
v_isSharedCheck_1839_ = !lean_is_exclusive(v___x_1807_);
if (v_isSharedCheck_1839_ == 0)
{
v___x_1834_ = v___x_1807_;
v_isShared_1835_ = v_isSharedCheck_1839_;
goto v_resetjp_1833_;
}
else
{
lean_inc(v_a_1832_);
lean_dec(v___x_1807_);
v___x_1834_ = lean_box(0);
v_isShared_1835_ = v_isSharedCheck_1839_;
goto v_resetjp_1833_;
}
v_resetjp_1833_:
{
lean_object* v___x_1837_; 
if (v_isShared_1835_ == 0)
{
v___x_1837_ = v___x_1834_;
goto v_reusejp_1836_;
}
else
{
lean_object* v_reuseFailAlloc_1838_; 
v_reuseFailAlloc_1838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1838_, 0, v_a_1832_);
v___x_1837_ = v_reuseFailAlloc_1838_;
goto v_reusejp_1836_;
}
v_reusejp_1836_:
{
return v___x_1837_;
}
}
}
}
}
}
static lean_object* _init_lp_vampireReplay_Vampire_translateTerm___closed__1(void){
_start:
{
lean_object* v___x_2003_; lean_object* v___x_2004_; 
v___x_2003_ = ((lean_object*)(lp_vampireReplay_Vampire_translateTerm___closed__0));
v___x_2004_ = l_Lean_stringToMessageData(v___x_2003_);
return v___x_2004_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_translateTerm___closed__3(void){
_start:
{
lean_object* v___x_2006_; lean_object* v___x_2007_; 
v___x_2006_ = ((lean_object*)(lp_vampireReplay_Vampire_translateTerm___closed__2));
v___x_2007_ = l_Lean_stringToMessageData(v___x_2006_);
return v___x_2007_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_translateTerm___closed__5(void){
_start:
{
lean_object* v___x_2009_; lean_object* v___x_2010_; 
v___x_2009_ = ((lean_object*)(lp_vampireReplay_Vampire_translateTerm___closed__4));
v___x_2010_ = l_Lean_stringToMessageData(v___x_2009_);
return v___x_2010_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_translateTerm___closed__7(void){
_start:
{
lean_object* v___x_2012_; lean_object* v___x_2013_; 
v___x_2012_ = ((lean_object*)(lp_vampireReplay_Vampire_translateTerm___closed__6));
v___x_2013_ = l_Lean_stringToMessageData(v___x_2012_);
return v___x_2013_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_translateTerm___closed__8(void){
_start:
{
lean_object* v___x_2014_; lean_object* v_dummy_2015_; 
v___x_2014_ = lean_box(0);
v_dummy_2015_ = l_Lean_Expr_sort___override(v___x_2014_);
return v_dummy_2015_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_translateTerm(lean_object* v_e_2016_, lean_object* v_a_2017_, lean_object* v_a_2018_, lean_object* v_a_2019_, lean_object* v_a_2020_, lean_object* v_a_2021_){
_start:
{
lean_object* v___x_2023_; 
v___x_2023_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_translateTerm_spec__0___redArg(v_e_2016_, v_a_2019_);
if (lean_obj_tag(v___x_2023_) == 0)
{
lean_object* v_a_2024_; lean_object* v___x_2025_; 
v_a_2024_ = lean_ctor_get(v___x_2023_, 0);
lean_inc_n(v_a_2024_, 2);
lean_dec_ref_known(v___x_2023_, 1);
v___x_2025_ = lp_vampireReplay_Vampire_arithmeticTerm_x3f(v_a_2024_, v_a_2017_, v_a_2018_, v_a_2019_, v_a_2020_, v_a_2021_);
if (lean_obj_tag(v___x_2025_) == 0)
{
lean_object* v_a_2026_; lean_object* v___x_2028_; uint8_t v_isShared_2029_; uint8_t v_isSharedCheck_2270_; 
v_a_2026_ = lean_ctor_get(v___x_2025_, 0);
v_isSharedCheck_2270_ = !lean_is_exclusive(v___x_2025_);
if (v_isSharedCheck_2270_ == 0)
{
v___x_2028_ = v___x_2025_;
v_isShared_2029_ = v_isSharedCheck_2270_;
goto v_resetjp_2027_;
}
else
{
lean_inc(v_a_2026_);
lean_dec(v___x_2025_);
v___x_2028_ = lean_box(0);
v_isShared_2029_ = v_isSharedCheck_2270_;
goto v_resetjp_2027_;
}
v_resetjp_2027_:
{
if (lean_obj_tag(v_a_2026_) == 1)
{
lean_object* v_val_2030_; lean_object* v___x_2032_; 
lean_dec(v_a_2024_);
v_val_2030_ = lean_ctor_get(v_a_2026_, 0);
lean_inc(v_val_2030_);
lean_dec_ref_known(v_a_2026_, 1);
if (v_isShared_2029_ == 0)
{
lean_ctor_set(v___x_2028_, 0, v_val_2030_);
v___x_2032_ = v___x_2028_;
goto v_reusejp_2031_;
}
else
{
lean_object* v_reuseFailAlloc_2033_; 
v_reuseFailAlloc_2033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2033_, 0, v_val_2030_);
v___x_2032_ = v_reuseFailAlloc_2033_;
goto v_reusejp_2031_;
}
v_reusejp_2031_:
{
return v___x_2032_;
}
}
else
{
lean_dec(v_a_2026_);
switch(lean_obj_tag(v_a_2024_))
{
case 1:
{
lean_object* v_fvarId_2034_; lean_object* v___x_2035_; lean_object* v_vars_2036_; lean_object* v___x_2037_; 
v_fvarId_2034_ = lean_ctor_get(v_a_2024_, 0);
v___x_2035_ = lean_st_ref_get(v_a_2017_);
v_vars_2036_ = lean_ctor_get(v___x_2035_, 2);
lean_inc_ref(v_vars_2036_);
lean_dec(v___x_2035_);
v___x_2037_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Command_elabOmit_spec__7___redArg(v_vars_2036_, v_fvarId_2034_);
lean_dec_ref(v_vars_2036_);
if (lean_obj_tag(v___x_2037_) == 1)
{
lean_object* v_val_2038_; lean_object* v___x_2040_; uint8_t v_isShared_2041_; uint8_t v_isSharedCheck_2048_; 
lean_dec_ref_known(v_a_2024_, 1);
v_val_2038_ = lean_ctor_get(v___x_2037_, 0);
v_isSharedCheck_2048_ = !lean_is_exclusive(v___x_2037_);
if (v_isSharedCheck_2048_ == 0)
{
v___x_2040_ = v___x_2037_;
v_isShared_2041_ = v_isSharedCheck_2048_;
goto v_resetjp_2039_;
}
else
{
lean_inc(v_val_2038_);
lean_dec(v___x_2037_);
v___x_2040_ = lean_box(0);
v_isShared_2041_ = v_isSharedCheck_2048_;
goto v_resetjp_2039_;
}
v_resetjp_2039_:
{
lean_object* v___x_2043_; 
if (v_isShared_2041_ == 0)
{
lean_ctor_set_tag(v___x_2040_, 0);
v___x_2043_ = v___x_2040_;
goto v_reusejp_2042_;
}
else
{
lean_object* v_reuseFailAlloc_2047_; 
v_reuseFailAlloc_2047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2047_, 0, v_val_2038_);
v___x_2043_ = v_reuseFailAlloc_2047_;
goto v_reusejp_2042_;
}
v_reusejp_2042_:
{
lean_object* v___x_2045_; 
if (v_isShared_2029_ == 0)
{
lean_ctor_set(v___x_2028_, 0, v___x_2043_);
v___x_2045_ = v___x_2028_;
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
}
else
{
lean_object* v___x_2049_; 
lean_dec(v___x_2037_);
lean_del_object(v___x_2028_);
lean_inc(v_fvarId_2034_);
v___x_2049_ = l_Lean_FVarId_getType___redArg(v_fvarId_2034_, v_a_2018_, v_a_2020_, v_a_2021_);
if (lean_obj_tag(v___x_2049_) == 0)
{
lean_object* v_a_2050_; lean_object* v___x_2051_; 
v_a_2050_ = lean_ctor_get(v___x_2049_, 0);
lean_inc(v_a_2050_);
lean_dec_ref_known(v___x_2049_, 1);
lean_inc_ref(v_a_2024_);
v___x_2051_ = lp_vampireReplay_Vampire_symbolName(v_a_2024_, v_a_2050_, v_a_2017_, v_a_2018_, v_a_2019_, v_a_2020_, v_a_2021_);
if (lean_obj_tag(v___x_2051_) == 0)
{
lean_object* v_a_2052_; lean_object* v___x_2054_; uint8_t v_isShared_2055_; uint8_t v_isSharedCheck_2082_; 
v_a_2052_ = lean_ctor_get(v___x_2051_, 0);
v_isSharedCheck_2082_ = !lean_is_exclusive(v___x_2051_);
if (v_isSharedCheck_2082_ == 0)
{
v___x_2054_ = v___x_2051_;
v_isShared_2055_ = v_isSharedCheck_2082_;
goto v_resetjp_2053_;
}
else
{
lean_inc(v_a_2052_);
lean_dec(v___x_2051_);
v___x_2054_ = lean_box(0);
v_isShared_2055_ = v_isSharedCheck_2082_;
goto v_resetjp_2053_;
}
v_resetjp_2053_:
{
if (lean_obj_tag(v_a_2052_) == 1)
{
lean_object* v_val_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2060_; 
lean_dec_ref_known(v_a_2024_, 1);
v_val_2056_ = lean_ctor_get(v_a_2052_, 0);
lean_inc(v_val_2056_);
lean_dec_ref_known(v_a_2052_, 1);
v___x_2057_ = ((lean_object*)(lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__0));
v___x_2058_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2058_, 0, v_val_2056_);
lean_ctor_set(v___x_2058_, 1, v___x_2057_);
if (v_isShared_2055_ == 0)
{
lean_ctor_set(v___x_2054_, 0, v___x_2058_);
v___x_2060_ = v___x_2054_;
goto v_reusejp_2059_;
}
else
{
lean_object* v_reuseFailAlloc_2061_; 
v_reuseFailAlloc_2061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2061_, 0, v___x_2058_);
v___x_2060_ = v_reuseFailAlloc_2061_;
goto v_reusejp_2059_;
}
v_reusejp_2059_:
{
return v___x_2060_;
}
}
else
{
lean_object* v___x_2062_; 
lean_del_object(v___x_2054_);
lean_dec(v_a_2052_);
lean_inc(v_a_2021_);
lean_inc_ref(v_a_2020_);
lean_inc(v_a_2019_);
lean_inc_ref(v_a_2018_);
lean_inc_ref(v_a_2024_);
v___x_2062_ = lean_infer_type(v_a_2024_, v_a_2018_, v_a_2019_, v_a_2020_, v_a_2021_);
if (lean_obj_tag(v___x_2062_) == 0)
{
lean_object* v_a_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; 
v_a_2063_ = lean_ctor_get(v___x_2062_, 0);
lean_inc(v_a_2063_);
lean_dec_ref_known(v___x_2062_, 1);
v___x_2064_ = lean_obj_once(&lp_vampireReplay_Vampire_translateTerm___closed__1, &lp_vampireReplay_Vampire_translateTerm___closed__1_once, _init_lp_vampireReplay_Vampire_translateTerm___closed__1);
v___x_2065_ = l_Lean_MessageData_ofExpr(v_a_2024_);
v___x_2066_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2066_, 0, v___x_2064_);
lean_ctor_set(v___x_2066_, 1, v___x_2065_);
v___x_2067_ = lean_obj_once(&lp_vampireReplay_Vampire_translateTerm___closed__3, &lp_vampireReplay_Vampire_translateTerm___closed__3_once, _init_lp_vampireReplay_Vampire_translateTerm___closed__3);
v___x_2068_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2068_, 0, v___x_2066_);
lean_ctor_set(v___x_2068_, 1, v___x_2067_);
v___x_2069_ = l_Lean_MessageData_ofExpr(v_a_2063_);
v___x_2070_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2070_, 0, v___x_2068_);
lean_ctor_set(v___x_2070_, 1, v___x_2069_);
v___x_2071_ = lean_obj_once(&lp_vampireReplay_Vampire_translateTerm___closed__5, &lp_vampireReplay_Vampire_translateTerm___closed__5_once, _init_lp_vampireReplay_Vampire_translateTerm___closed__5);
v___x_2072_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2072_, 0, v___x_2070_);
lean_ctor_set(v___x_2072_, 1, v___x_2071_);
v___x_2073_ = lp_vampireReplay_Lean_throwError___at___00Vampire_translateTerm_spec__1___redArg(v___x_2072_, v_a_2018_, v_a_2019_, v_a_2020_, v_a_2021_);
return v___x_2073_;
}
else
{
lean_object* v_a_2074_; lean_object* v___x_2076_; uint8_t v_isShared_2077_; uint8_t v_isSharedCheck_2081_; 
lean_dec_ref_known(v_a_2024_, 1);
v_a_2074_ = lean_ctor_get(v___x_2062_, 0);
v_isSharedCheck_2081_ = !lean_is_exclusive(v___x_2062_);
if (v_isSharedCheck_2081_ == 0)
{
v___x_2076_ = v___x_2062_;
v_isShared_2077_ = v_isSharedCheck_2081_;
goto v_resetjp_2075_;
}
else
{
lean_inc(v_a_2074_);
lean_dec(v___x_2062_);
v___x_2076_ = lean_box(0);
v_isShared_2077_ = v_isSharedCheck_2081_;
goto v_resetjp_2075_;
}
v_resetjp_2075_:
{
lean_object* v___x_2079_; 
if (v_isShared_2077_ == 0)
{
v___x_2079_ = v___x_2076_;
goto v_reusejp_2078_;
}
else
{
lean_object* v_reuseFailAlloc_2080_; 
v_reuseFailAlloc_2080_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2080_, 0, v_a_2074_);
v___x_2079_ = v_reuseFailAlloc_2080_;
goto v_reusejp_2078_;
}
v_reusejp_2078_:
{
return v___x_2079_;
}
}
}
}
}
}
else
{
lean_object* v_a_2083_; lean_object* v___x_2085_; uint8_t v_isShared_2086_; uint8_t v_isSharedCheck_2090_; 
lean_dec_ref_known(v_a_2024_, 1);
v_a_2083_ = lean_ctor_get(v___x_2051_, 0);
v_isSharedCheck_2090_ = !lean_is_exclusive(v___x_2051_);
if (v_isSharedCheck_2090_ == 0)
{
v___x_2085_ = v___x_2051_;
v_isShared_2086_ = v_isSharedCheck_2090_;
goto v_resetjp_2084_;
}
else
{
lean_inc(v_a_2083_);
lean_dec(v___x_2051_);
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
else
{
lean_object* v_a_2091_; lean_object* v___x_2093_; uint8_t v_isShared_2094_; uint8_t v_isSharedCheck_2098_; 
lean_dec_ref_known(v_a_2024_, 1);
v_a_2091_ = lean_ctor_get(v___x_2049_, 0);
v_isSharedCheck_2098_ = !lean_is_exclusive(v___x_2049_);
if (v_isSharedCheck_2098_ == 0)
{
v___x_2093_ = v___x_2049_;
v_isShared_2094_ = v_isSharedCheck_2098_;
goto v_resetjp_2092_;
}
else
{
lean_inc(v_a_2091_);
lean_dec(v___x_2049_);
v___x_2093_ = lean_box(0);
v_isShared_2094_ = v_isSharedCheck_2098_;
goto v_resetjp_2092_;
}
v_resetjp_2092_:
{
lean_object* v___x_2096_; 
if (v_isShared_2094_ == 0)
{
v___x_2096_ = v___x_2093_;
goto v_reusejp_2095_;
}
else
{
lean_object* v_reuseFailAlloc_2097_; 
v_reuseFailAlloc_2097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2097_, 0, v_a_2091_);
v___x_2096_ = v_reuseFailAlloc_2097_;
goto v_reusejp_2095_;
}
v_reusejp_2095_:
{
return v___x_2096_;
}
}
}
}
}
case 4:
{
lean_object* v___x_2099_; 
lean_del_object(v___x_2028_);
lean_inc(v_a_2021_);
lean_inc_ref(v_a_2020_);
lean_inc(v_a_2019_);
lean_inc_ref(v_a_2018_);
lean_inc_ref(v_a_2024_);
v___x_2099_ = lean_infer_type(v_a_2024_, v_a_2018_, v_a_2019_, v_a_2020_, v_a_2021_);
if (lean_obj_tag(v___x_2099_) == 0)
{
lean_object* v_a_2100_; lean_object* v___x_2101_; 
v_a_2100_ = lean_ctor_get(v___x_2099_, 0);
lean_inc(v_a_2100_);
lean_dec_ref_known(v___x_2099_, 1);
lean_inc_ref(v_a_2024_);
v___x_2101_ = lp_vampireReplay_Vampire_symbolName(v_a_2024_, v_a_2100_, v_a_2017_, v_a_2018_, v_a_2019_, v_a_2020_, v_a_2021_);
if (lean_obj_tag(v___x_2101_) == 0)
{
lean_object* v_a_2102_; lean_object* v___x_2104_; uint8_t v_isShared_2105_; uint8_t v_isSharedCheck_2132_; 
v_a_2102_ = lean_ctor_get(v___x_2101_, 0);
v_isSharedCheck_2132_ = !lean_is_exclusive(v___x_2101_);
if (v_isSharedCheck_2132_ == 0)
{
v___x_2104_ = v___x_2101_;
v_isShared_2105_ = v_isSharedCheck_2132_;
goto v_resetjp_2103_;
}
else
{
lean_inc(v_a_2102_);
lean_dec(v___x_2101_);
v___x_2104_ = lean_box(0);
v_isShared_2105_ = v_isSharedCheck_2132_;
goto v_resetjp_2103_;
}
v_resetjp_2103_:
{
if (lean_obj_tag(v_a_2102_) == 1)
{
lean_object* v_val_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2110_; 
lean_dec_ref_known(v_a_2024_, 2);
v_val_2106_ = lean_ctor_get(v_a_2102_, 0);
lean_inc(v_val_2106_);
lean_dec_ref_known(v_a_2102_, 1);
v___x_2107_ = ((lean_object*)(lp_vampireReplay_Vampire_arithmeticTerm_x3f___closed__0));
v___x_2108_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2108_, 0, v_val_2106_);
lean_ctor_set(v___x_2108_, 1, v___x_2107_);
if (v_isShared_2105_ == 0)
{
lean_ctor_set(v___x_2104_, 0, v___x_2108_);
v___x_2110_ = v___x_2104_;
goto v_reusejp_2109_;
}
else
{
lean_object* v_reuseFailAlloc_2111_; 
v_reuseFailAlloc_2111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2111_, 0, v___x_2108_);
v___x_2110_ = v_reuseFailAlloc_2111_;
goto v_reusejp_2109_;
}
v_reusejp_2109_:
{
return v___x_2110_;
}
}
else
{
lean_object* v___x_2112_; 
lean_del_object(v___x_2104_);
lean_dec(v_a_2102_);
lean_inc(v_a_2021_);
lean_inc_ref(v_a_2020_);
lean_inc(v_a_2019_);
lean_inc_ref(v_a_2018_);
lean_inc_ref(v_a_2024_);
v___x_2112_ = lean_infer_type(v_a_2024_, v_a_2018_, v_a_2019_, v_a_2020_, v_a_2021_);
if (lean_obj_tag(v___x_2112_) == 0)
{
lean_object* v_a_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; 
v_a_2113_ = lean_ctor_get(v___x_2112_, 0);
lean_inc(v_a_2113_);
lean_dec_ref_known(v___x_2112_, 1);
v___x_2114_ = lean_obj_once(&lp_vampireReplay_Vampire_translateTerm___closed__1, &lp_vampireReplay_Vampire_translateTerm___closed__1_once, _init_lp_vampireReplay_Vampire_translateTerm___closed__1);
v___x_2115_ = l_Lean_MessageData_ofExpr(v_a_2024_);
v___x_2116_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2116_, 0, v___x_2114_);
lean_ctor_set(v___x_2116_, 1, v___x_2115_);
v___x_2117_ = lean_obj_once(&lp_vampireReplay_Vampire_translateTerm___closed__3, &lp_vampireReplay_Vampire_translateTerm___closed__3_once, _init_lp_vampireReplay_Vampire_translateTerm___closed__3);
v___x_2118_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2118_, 0, v___x_2116_);
lean_ctor_set(v___x_2118_, 1, v___x_2117_);
v___x_2119_ = l_Lean_MessageData_ofExpr(v_a_2113_);
v___x_2120_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2120_, 0, v___x_2118_);
lean_ctor_set(v___x_2120_, 1, v___x_2119_);
v___x_2121_ = lean_obj_once(&lp_vampireReplay_Vampire_translateTerm___closed__5, &lp_vampireReplay_Vampire_translateTerm___closed__5_once, _init_lp_vampireReplay_Vampire_translateTerm___closed__5);
v___x_2122_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2122_, 0, v___x_2120_);
lean_ctor_set(v___x_2122_, 1, v___x_2121_);
v___x_2123_ = lp_vampireReplay_Lean_throwError___at___00Vampire_translateTerm_spec__1___redArg(v___x_2122_, v_a_2018_, v_a_2019_, v_a_2020_, v_a_2021_);
return v___x_2123_;
}
else
{
lean_object* v_a_2124_; lean_object* v___x_2126_; uint8_t v_isShared_2127_; uint8_t v_isSharedCheck_2131_; 
lean_dec_ref_known(v_a_2024_, 2);
v_a_2124_ = lean_ctor_get(v___x_2112_, 0);
v_isSharedCheck_2131_ = !lean_is_exclusive(v___x_2112_);
if (v_isSharedCheck_2131_ == 0)
{
v___x_2126_ = v___x_2112_;
v_isShared_2127_ = v_isSharedCheck_2131_;
goto v_resetjp_2125_;
}
else
{
lean_inc(v_a_2124_);
lean_dec(v___x_2112_);
v___x_2126_ = lean_box(0);
v_isShared_2127_ = v_isSharedCheck_2131_;
goto v_resetjp_2125_;
}
v_resetjp_2125_:
{
lean_object* v___x_2129_; 
if (v_isShared_2127_ == 0)
{
v___x_2129_ = v___x_2126_;
goto v_reusejp_2128_;
}
else
{
lean_object* v_reuseFailAlloc_2130_; 
v_reuseFailAlloc_2130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2130_, 0, v_a_2124_);
v___x_2129_ = v_reuseFailAlloc_2130_;
goto v_reusejp_2128_;
}
v_reusejp_2128_:
{
return v___x_2129_;
}
}
}
}
}
}
else
{
lean_object* v_a_2133_; lean_object* v___x_2135_; uint8_t v_isShared_2136_; uint8_t v_isSharedCheck_2140_; 
lean_dec_ref_known(v_a_2024_, 2);
v_a_2133_ = lean_ctor_get(v___x_2101_, 0);
v_isSharedCheck_2140_ = !lean_is_exclusive(v___x_2101_);
if (v_isSharedCheck_2140_ == 0)
{
v___x_2135_ = v___x_2101_;
v_isShared_2136_ = v_isSharedCheck_2140_;
goto v_resetjp_2134_;
}
else
{
lean_inc(v_a_2133_);
lean_dec(v___x_2101_);
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
else
{
lean_object* v_a_2141_; lean_object* v___x_2143_; uint8_t v_isShared_2144_; uint8_t v_isSharedCheck_2148_; 
lean_dec_ref_known(v_a_2024_, 2);
v_a_2141_ = lean_ctor_get(v___x_2099_, 0);
v_isSharedCheck_2148_ = !lean_is_exclusive(v___x_2099_);
if (v_isSharedCheck_2148_ == 0)
{
v___x_2143_ = v___x_2099_;
v_isShared_2144_ = v_isSharedCheck_2148_;
goto v_resetjp_2142_;
}
else
{
lean_inc(v_a_2141_);
lean_dec(v___x_2099_);
v___x_2143_ = lean_box(0);
v_isShared_2144_ = v_isSharedCheck_2148_;
goto v_resetjp_2142_;
}
v_resetjp_2142_:
{
lean_object* v___x_2146_; 
if (v_isShared_2144_ == 0)
{
v___x_2146_ = v___x_2143_;
goto v_reusejp_2145_;
}
else
{
lean_object* v_reuseFailAlloc_2147_; 
v_reuseFailAlloc_2147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2147_, 0, v_a_2141_);
v___x_2146_ = v_reuseFailAlloc_2147_;
goto v_reusejp_2145_;
}
v_reusejp_2145_:
{
return v___x_2146_;
}
}
}
}
case 5:
{
lean_object* v___x_2149_; lean_object* v___y_2151_; lean_object* v___y_2152_; lean_object* v___y_2153_; lean_object* v___y_2154_; lean_object* v___y_2155_; lean_object* v___y_2163_; lean_object* v_head_2164_; lean_object* v___y_2165_; lean_object* v___y_2166_; lean_object* v___y_2167_; lean_object* v___y_2168_; lean_object* v___y_2169_; lean_object* v_a_2192_; lean_object* v___y_2235_; lean_object* v_dummy_2245_; lean_object* v_nargs_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; uint8_t v___x_2254_; 
lean_del_object(v___x_2028_);
v___x_2149_ = l_Lean_Expr_getAppFn(v_a_2024_);
v_dummy_2245_ = lean_obj_once(&lp_vampireReplay_Vampire_translateTerm___closed__8, &lp_vampireReplay_Vampire_translateTerm___closed__8_once, _init_lp_vampireReplay_Vampire_translateTerm___closed__8);
v_nargs_2246_ = l_Lean_Expr_getAppNumArgs(v_a_2024_);
lean_inc(v_nargs_2246_);
v___x_2247_ = lean_mk_array(v_nargs_2246_, v_dummy_2245_);
v___x_2248_ = lean_unsigned_to_nat(1u);
v___x_2249_ = lean_nat_sub(v_nargs_2246_, v___x_2248_);
lean_dec(v_nargs_2246_);
v___x_2250_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_2024_, v___x_2247_, v___x_2249_);
v___x_2251_ = lean_unsigned_to_nat(0u);
v___x_2252_ = lean_array_get_size(v___x_2250_);
v___x_2253_ = ((lean_object*)(lp_vampireReplay_Vampire_signatureOf___lam__0___closed__0));
v___x_2254_ = lean_nat_dec_lt(v___x_2251_, v___x_2252_);
if (v___x_2254_ == 0)
{
lean_dec_ref(v___x_2250_);
v_a_2192_ = v___x_2253_;
goto v___jp_2191_;
}
else
{
uint8_t v___x_2255_; 
v___x_2255_ = lean_nat_dec_le(v___x_2252_, v___x_2252_);
if (v___x_2255_ == 0)
{
if (v___x_2254_ == 0)
{
lean_dec_ref(v___x_2250_);
v_a_2192_ = v___x_2253_;
goto v___jp_2191_;
}
else
{
size_t v___x_2256_; size_t v___x_2257_; lean_object* v___x_2258_; 
v___x_2256_ = ((size_t)0ULL);
v___x_2257_ = lean_usize_of_nat(v___x_2252_);
v___x_2258_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_translateTerm_spec__3___redArg(v___x_2250_, v___x_2256_, v___x_2257_, v___x_2253_, v_a_2018_, v_a_2019_, v_a_2020_, v_a_2021_);
lean_dec_ref(v___x_2250_);
v___y_2235_ = v___x_2258_;
goto v___jp_2234_;
}
}
else
{
size_t v___x_2259_; size_t v___x_2260_; lean_object* v___x_2261_; 
v___x_2259_ = ((size_t)0ULL);
v___x_2260_ = lean_usize_of_nat(v___x_2252_);
v___x_2261_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_translateTerm_spec__3___redArg(v___x_2250_, v___x_2259_, v___x_2260_, v___x_2253_, v_a_2018_, v_a_2019_, v_a_2020_, v_a_2021_);
lean_dec_ref(v___x_2250_);
v___y_2235_ = v___x_2261_;
goto v___jp_2234_;
}
}
v___jp_2150_:
{
lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; 
v___x_2156_ = lean_obj_once(&lp_vampireReplay_Vampire_translateTerm___closed__7, &lp_vampireReplay_Vampire_translateTerm___closed__7_once, _init_lp_vampireReplay_Vampire_translateTerm___closed__7);
v___x_2157_ = l_Lean_MessageData_ofExpr(v___x_2149_);
v___x_2158_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2158_, 0, v___x_2156_);
lean_ctor_set(v___x_2158_, 1, v___x_2157_);
v___x_2159_ = lean_obj_once(&lp_vampireReplay_Vampire_translateTerm___closed__5, &lp_vampireReplay_Vampire_translateTerm___closed__5_once, _init_lp_vampireReplay_Vampire_translateTerm___closed__5);
v___x_2160_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2160_, 0, v___x_2158_);
lean_ctor_set(v___x_2160_, 1, v___x_2159_);
v___x_2161_ = lp_vampireReplay_Lean_throwError___at___00Vampire_translateTerm_spec__1___redArg(v___x_2160_, v___y_2152_, v___y_2153_, v___y_2154_, v___y_2155_);
return v___x_2161_;
}
v___jp_2162_:
{
if (lean_obj_tag(v_head_2164_) == 1)
{
lean_object* v_val_2170_; size_t v_sz_2171_; size_t v___x_2172_; lean_object* v___x_2173_; 
lean_dec_ref(v___x_2149_);
v_val_2170_ = lean_ctor_get(v_head_2164_, 0);
lean_inc(v_val_2170_);
lean_dec_ref_known(v_head_2164_, 1);
v_sz_2171_ = lean_array_size(v___y_2163_);
v___x_2172_ = ((size_t)0ULL);
v___x_2173_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_translateTerm_spec__2(v_sz_2171_, v___x_2172_, v___y_2163_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_, v___y_2169_);
if (lean_obj_tag(v___x_2173_) == 0)
{
lean_object* v_a_2174_; lean_object* v___x_2176_; uint8_t v_isShared_2177_; uint8_t v_isSharedCheck_2182_; 
v_a_2174_ = lean_ctor_get(v___x_2173_, 0);
v_isSharedCheck_2182_ = !lean_is_exclusive(v___x_2173_);
if (v_isSharedCheck_2182_ == 0)
{
v___x_2176_ = v___x_2173_;
v_isShared_2177_ = v_isSharedCheck_2182_;
goto v_resetjp_2175_;
}
else
{
lean_inc(v_a_2174_);
lean_dec(v___x_2173_);
v___x_2176_ = lean_box(0);
v_isShared_2177_ = v_isSharedCheck_2182_;
goto v_resetjp_2175_;
}
v_resetjp_2175_:
{
lean_object* v___x_2178_; lean_object* v___x_2180_; 
v___x_2178_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2178_, 0, v_val_2170_);
lean_ctor_set(v___x_2178_, 1, v_a_2174_);
if (v_isShared_2177_ == 0)
{
lean_ctor_set(v___x_2176_, 0, v___x_2178_);
v___x_2180_ = v___x_2176_;
goto v_reusejp_2179_;
}
else
{
lean_object* v_reuseFailAlloc_2181_; 
v_reuseFailAlloc_2181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2181_, 0, v___x_2178_);
v___x_2180_ = v_reuseFailAlloc_2181_;
goto v_reusejp_2179_;
}
v_reusejp_2179_:
{
return v___x_2180_;
}
}
}
else
{
lean_object* v_a_2183_; lean_object* v___x_2185_; uint8_t v_isShared_2186_; uint8_t v_isSharedCheck_2190_; 
lean_dec(v_val_2170_);
v_a_2183_ = lean_ctor_get(v___x_2173_, 0);
v_isSharedCheck_2190_ = !lean_is_exclusive(v___x_2173_);
if (v_isSharedCheck_2190_ == 0)
{
v___x_2185_ = v___x_2173_;
v_isShared_2186_ = v_isSharedCheck_2190_;
goto v_resetjp_2184_;
}
else
{
lean_inc(v_a_2183_);
lean_dec(v___x_2173_);
v___x_2185_ = lean_box(0);
v_isShared_2186_ = v_isSharedCheck_2190_;
goto v_resetjp_2184_;
}
v_resetjp_2184_:
{
lean_object* v___x_2188_; 
if (v_isShared_2186_ == 0)
{
v___x_2188_ = v___x_2185_;
goto v_reusejp_2187_;
}
else
{
lean_object* v_reuseFailAlloc_2189_; 
v_reuseFailAlloc_2189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2189_, 0, v_a_2183_);
v___x_2188_ = v_reuseFailAlloc_2189_;
goto v_reusejp_2187_;
}
v_reusejp_2187_:
{
return v___x_2188_;
}
}
}
}
else
{
lean_dec(v_head_2164_);
lean_dec_ref(v___y_2163_);
v___y_2151_ = v___y_2165_;
v___y_2152_ = v___y_2166_;
v___y_2153_ = v___y_2167_;
v___y_2154_ = v___y_2168_;
v___y_2155_ = v___y_2169_;
goto v___jp_2150_;
}
}
v___jp_2191_:
{
switch(lean_obj_tag(v___x_2149_))
{
case 1:
{
lean_object* v_fvarId_2193_; lean_object* v___x_2194_; 
v_fvarId_2193_ = lean_ctor_get(v___x_2149_, 0);
lean_inc(v_fvarId_2193_);
v___x_2194_ = l_Lean_FVarId_getType___redArg(v_fvarId_2193_, v_a_2018_, v_a_2020_, v_a_2021_);
if (lean_obj_tag(v___x_2194_) == 0)
{
lean_object* v_a_2195_; lean_object* v___x_2196_; 
v_a_2195_ = lean_ctor_get(v___x_2194_, 0);
lean_inc(v_a_2195_);
lean_dec_ref_known(v___x_2194_, 1);
lean_inc_ref(v___x_2149_);
v___x_2196_ = lp_vampireReplay_Vampire_symbolName(v___x_2149_, v_a_2195_, v_a_2017_, v_a_2018_, v_a_2019_, v_a_2020_, v_a_2021_);
if (lean_obj_tag(v___x_2196_) == 0)
{
lean_object* v_a_2197_; 
v_a_2197_ = lean_ctor_get(v___x_2196_, 0);
lean_inc(v_a_2197_);
lean_dec_ref_known(v___x_2196_, 1);
v___y_2163_ = v_a_2192_;
v_head_2164_ = v_a_2197_;
v___y_2165_ = v_a_2017_;
v___y_2166_ = v_a_2018_;
v___y_2167_ = v_a_2019_;
v___y_2168_ = v_a_2020_;
v___y_2169_ = v_a_2021_;
goto v___jp_2162_;
}
else
{
lean_object* v_a_2198_; lean_object* v___x_2200_; uint8_t v_isShared_2201_; uint8_t v_isSharedCheck_2205_; 
lean_dec_ref_known(v___x_2149_, 1);
lean_dec_ref(v_a_2192_);
v_a_2198_ = lean_ctor_get(v___x_2196_, 0);
v_isSharedCheck_2205_ = !lean_is_exclusive(v___x_2196_);
if (v_isSharedCheck_2205_ == 0)
{
v___x_2200_ = v___x_2196_;
v_isShared_2201_ = v_isSharedCheck_2205_;
goto v_resetjp_2199_;
}
else
{
lean_inc(v_a_2198_);
lean_dec(v___x_2196_);
v___x_2200_ = lean_box(0);
v_isShared_2201_ = v_isSharedCheck_2205_;
goto v_resetjp_2199_;
}
v_resetjp_2199_:
{
lean_object* v___x_2203_; 
if (v_isShared_2201_ == 0)
{
v___x_2203_ = v___x_2200_;
goto v_reusejp_2202_;
}
else
{
lean_object* v_reuseFailAlloc_2204_; 
v_reuseFailAlloc_2204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2204_, 0, v_a_2198_);
v___x_2203_ = v_reuseFailAlloc_2204_;
goto v_reusejp_2202_;
}
v_reusejp_2202_:
{
return v___x_2203_;
}
}
}
}
else
{
lean_object* v_a_2206_; lean_object* v___x_2208_; uint8_t v_isShared_2209_; uint8_t v_isSharedCheck_2213_; 
lean_dec_ref_known(v___x_2149_, 1);
lean_dec_ref(v_a_2192_);
v_a_2206_ = lean_ctor_get(v___x_2194_, 0);
v_isSharedCheck_2213_ = !lean_is_exclusive(v___x_2194_);
if (v_isSharedCheck_2213_ == 0)
{
v___x_2208_ = v___x_2194_;
v_isShared_2209_ = v_isSharedCheck_2213_;
goto v_resetjp_2207_;
}
else
{
lean_inc(v_a_2206_);
lean_dec(v___x_2194_);
v___x_2208_ = lean_box(0);
v_isShared_2209_ = v_isSharedCheck_2213_;
goto v_resetjp_2207_;
}
v_resetjp_2207_:
{
lean_object* v___x_2211_; 
if (v_isShared_2209_ == 0)
{
v___x_2211_ = v___x_2208_;
goto v_reusejp_2210_;
}
else
{
lean_object* v_reuseFailAlloc_2212_; 
v_reuseFailAlloc_2212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2212_, 0, v_a_2206_);
v___x_2211_ = v_reuseFailAlloc_2212_;
goto v_reusejp_2210_;
}
v_reusejp_2210_:
{
return v___x_2211_;
}
}
}
}
case 4:
{
lean_object* v___x_2214_; 
lean_inc(v_a_2021_);
lean_inc_ref(v_a_2020_);
lean_inc(v_a_2019_);
lean_inc_ref(v_a_2018_);
lean_inc_ref(v___x_2149_);
v___x_2214_ = lean_infer_type(v___x_2149_, v_a_2018_, v_a_2019_, v_a_2020_, v_a_2021_);
if (lean_obj_tag(v___x_2214_) == 0)
{
lean_object* v_a_2215_; lean_object* v___x_2216_; 
v_a_2215_ = lean_ctor_get(v___x_2214_, 0);
lean_inc(v_a_2215_);
lean_dec_ref_known(v___x_2214_, 1);
lean_inc_ref(v___x_2149_);
v___x_2216_ = lp_vampireReplay_Vampire_symbolName(v___x_2149_, v_a_2215_, v_a_2017_, v_a_2018_, v_a_2019_, v_a_2020_, v_a_2021_);
if (lean_obj_tag(v___x_2216_) == 0)
{
lean_object* v_a_2217_; 
v_a_2217_ = lean_ctor_get(v___x_2216_, 0);
lean_inc(v_a_2217_);
lean_dec_ref_known(v___x_2216_, 1);
v___y_2163_ = v_a_2192_;
v_head_2164_ = v_a_2217_;
v___y_2165_ = v_a_2017_;
v___y_2166_ = v_a_2018_;
v___y_2167_ = v_a_2019_;
v___y_2168_ = v_a_2020_;
v___y_2169_ = v_a_2021_;
goto v___jp_2162_;
}
else
{
lean_object* v_a_2218_; lean_object* v___x_2220_; uint8_t v_isShared_2221_; uint8_t v_isSharedCheck_2225_; 
lean_dec_ref_known(v___x_2149_, 2);
lean_dec_ref(v_a_2192_);
v_a_2218_ = lean_ctor_get(v___x_2216_, 0);
v_isSharedCheck_2225_ = !lean_is_exclusive(v___x_2216_);
if (v_isSharedCheck_2225_ == 0)
{
v___x_2220_ = v___x_2216_;
v_isShared_2221_ = v_isSharedCheck_2225_;
goto v_resetjp_2219_;
}
else
{
lean_inc(v_a_2218_);
lean_dec(v___x_2216_);
v___x_2220_ = lean_box(0);
v_isShared_2221_ = v_isSharedCheck_2225_;
goto v_resetjp_2219_;
}
v_resetjp_2219_:
{
lean_object* v___x_2223_; 
if (v_isShared_2221_ == 0)
{
v___x_2223_ = v___x_2220_;
goto v_reusejp_2222_;
}
else
{
lean_object* v_reuseFailAlloc_2224_; 
v_reuseFailAlloc_2224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2224_, 0, v_a_2218_);
v___x_2223_ = v_reuseFailAlloc_2224_;
goto v_reusejp_2222_;
}
v_reusejp_2222_:
{
return v___x_2223_;
}
}
}
}
else
{
lean_object* v_a_2226_; lean_object* v___x_2228_; uint8_t v_isShared_2229_; uint8_t v_isSharedCheck_2233_; 
lean_dec_ref_known(v___x_2149_, 2);
lean_dec_ref(v_a_2192_);
v_a_2226_ = lean_ctor_get(v___x_2214_, 0);
v_isSharedCheck_2233_ = !lean_is_exclusive(v___x_2214_);
if (v_isSharedCheck_2233_ == 0)
{
v___x_2228_ = v___x_2214_;
v_isShared_2229_ = v_isSharedCheck_2233_;
goto v_resetjp_2227_;
}
else
{
lean_inc(v_a_2226_);
lean_dec(v___x_2214_);
v___x_2228_ = lean_box(0);
v_isShared_2229_ = v_isSharedCheck_2233_;
goto v_resetjp_2227_;
}
v_resetjp_2227_:
{
lean_object* v___x_2231_; 
if (v_isShared_2229_ == 0)
{
v___x_2231_ = v___x_2228_;
goto v_reusejp_2230_;
}
else
{
lean_object* v_reuseFailAlloc_2232_; 
v_reuseFailAlloc_2232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2232_, 0, v_a_2226_);
v___x_2231_ = v_reuseFailAlloc_2232_;
goto v_reusejp_2230_;
}
v_reusejp_2230_:
{
return v___x_2231_;
}
}
}
}
default: 
{
lean_dec_ref(v_a_2192_);
v___y_2151_ = v_a_2017_;
v___y_2152_ = v_a_2018_;
v___y_2153_ = v_a_2019_;
v___y_2154_ = v_a_2020_;
v___y_2155_ = v_a_2021_;
goto v___jp_2150_;
}
}
}
v___jp_2234_:
{
if (lean_obj_tag(v___y_2235_) == 0)
{
lean_object* v_a_2236_; 
v_a_2236_ = lean_ctor_get(v___y_2235_, 0);
lean_inc(v_a_2236_);
lean_dec_ref_known(v___y_2235_, 1);
v_a_2192_ = v_a_2236_;
goto v___jp_2191_;
}
else
{
lean_object* v_a_2237_; lean_object* v___x_2239_; uint8_t v_isShared_2240_; uint8_t v_isSharedCheck_2244_; 
lean_dec_ref(v___x_2149_);
v_a_2237_ = lean_ctor_get(v___y_2235_, 0);
v_isSharedCheck_2244_ = !lean_is_exclusive(v___y_2235_);
if (v_isSharedCheck_2244_ == 0)
{
v___x_2239_ = v___y_2235_;
v_isShared_2240_ = v_isSharedCheck_2244_;
goto v_resetjp_2238_;
}
else
{
lean_inc(v_a_2237_);
lean_dec(v___y_2235_);
v___x_2239_ = lean_box(0);
v_isShared_2240_ = v_isSharedCheck_2244_;
goto v_resetjp_2238_;
}
v_resetjp_2238_:
{
lean_object* v___x_2242_; 
if (v_isShared_2240_ == 0)
{
v___x_2242_ = v___x_2239_;
goto v_reusejp_2241_;
}
else
{
lean_object* v_reuseFailAlloc_2243_; 
v_reuseFailAlloc_2243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2243_, 0, v_a_2237_);
v___x_2242_ = v_reuseFailAlloc_2243_;
goto v_reusejp_2241_;
}
v_reusejp_2241_:
{
return v___x_2242_;
}
}
}
}
}
case 10:
{
lean_object* v_expr_2262_; 
lean_del_object(v___x_2028_);
v_expr_2262_ = lean_ctor_get(v_a_2024_, 1);
lean_inc_ref(v_expr_2262_);
lean_dec_ref_known(v_a_2024_, 2);
v_e_2016_ = v_expr_2262_;
goto _start;
}
default: 
{
lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; 
lean_del_object(v___x_2028_);
v___x_2264_ = lean_obj_once(&lp_vampireReplay_Vampire_translateTerm___closed__1, &lp_vampireReplay_Vampire_translateTerm___closed__1_once, _init_lp_vampireReplay_Vampire_translateTerm___closed__1);
v___x_2265_ = l_Lean_MessageData_ofExpr(v_a_2024_);
v___x_2266_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2266_, 0, v___x_2264_);
lean_ctor_set(v___x_2266_, 1, v___x_2265_);
v___x_2267_ = lean_obj_once(&lp_vampireReplay_Vampire_translateTerm___closed__5, &lp_vampireReplay_Vampire_translateTerm___closed__5_once, _init_lp_vampireReplay_Vampire_translateTerm___closed__5);
v___x_2268_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2268_, 0, v___x_2266_);
lean_ctor_set(v___x_2268_, 1, v___x_2267_);
v___x_2269_ = lp_vampireReplay_Lean_throwError___at___00Vampire_translateTerm_spec__1___redArg(v___x_2268_, v_a_2018_, v_a_2019_, v_a_2020_, v_a_2021_);
return v___x_2269_;
}
}
}
}
}
else
{
lean_object* v_a_2271_; lean_object* v___x_2273_; uint8_t v_isShared_2274_; uint8_t v_isSharedCheck_2278_; 
lean_dec(v_a_2024_);
v_a_2271_ = lean_ctor_get(v___x_2025_, 0);
v_isSharedCheck_2278_ = !lean_is_exclusive(v___x_2025_);
if (v_isSharedCheck_2278_ == 0)
{
v___x_2273_ = v___x_2025_;
v_isShared_2274_ = v_isSharedCheck_2278_;
goto v_resetjp_2272_;
}
else
{
lean_inc(v_a_2271_);
lean_dec(v___x_2025_);
v___x_2273_ = lean_box(0);
v_isShared_2274_ = v_isSharedCheck_2278_;
goto v_resetjp_2272_;
}
v_resetjp_2272_:
{
lean_object* v___x_2276_; 
if (v_isShared_2274_ == 0)
{
v___x_2276_ = v___x_2273_;
goto v_reusejp_2275_;
}
else
{
lean_object* v_reuseFailAlloc_2277_; 
v_reuseFailAlloc_2277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2277_, 0, v_a_2271_);
v___x_2276_ = v_reuseFailAlloc_2277_;
goto v_reusejp_2275_;
}
v_reusejp_2275_:
{
return v___x_2276_;
}
}
}
}
else
{
lean_object* v_a_2279_; lean_object* v___x_2281_; uint8_t v_isShared_2282_; uint8_t v_isSharedCheck_2286_; 
v_a_2279_ = lean_ctor_get(v___x_2023_, 0);
v_isSharedCheck_2286_ = !lean_is_exclusive(v___x_2023_);
if (v_isSharedCheck_2286_ == 0)
{
v___x_2281_ = v___x_2023_;
v_isShared_2282_ = v_isSharedCheck_2286_;
goto v_resetjp_2280_;
}
else
{
lean_inc(v_a_2279_);
lean_dec(v___x_2023_);
v___x_2281_ = lean_box(0);
v_isShared_2282_ = v_isSharedCheck_2286_;
goto v_resetjp_2280_;
}
v_resetjp_2280_:
{
lean_object* v___x_2284_; 
if (v_isShared_2282_ == 0)
{
v___x_2284_ = v___x_2281_;
goto v_reusejp_2283_;
}
else
{
lean_object* v_reuseFailAlloc_2285_; 
v_reuseFailAlloc_2285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2285_, 0, v_a_2279_);
v___x_2284_ = v_reuseFailAlloc_2285_;
goto v_reusejp_2283_;
}
v_reusejp_2283_:
{
return v___x_2284_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_translateTerm_spec__2(size_t v_sz_2287_, size_t v_i_2288_, lean_object* v_bs_2289_, lean_object* v___y_2290_, lean_object* v___y_2291_, lean_object* v___y_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_){
_start:
{
uint8_t v___x_2296_; 
v___x_2296_ = lean_usize_dec_lt(v_i_2288_, v_sz_2287_);
if (v___x_2296_ == 0)
{
lean_object* v___x_2297_; 
v___x_2297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2297_, 0, v_bs_2289_);
return v___x_2297_;
}
else
{
lean_object* v_v_2298_; lean_object* v___x_2299_; 
v_v_2298_ = lean_array_uget_borrowed(v_bs_2289_, v_i_2288_);
lean_inc(v_v_2298_);
v___x_2299_ = lp_vampireReplay_Vampire_translateTerm(v_v_2298_, v___y_2290_, v___y_2291_, v___y_2292_, v___y_2293_, v___y_2294_);
if (lean_obj_tag(v___x_2299_) == 0)
{
lean_object* v_a_2300_; lean_object* v___x_2301_; lean_object* v_bs_x27_2302_; size_t v___x_2303_; size_t v___x_2304_; lean_object* v___x_2305_; 
v_a_2300_ = lean_ctor_get(v___x_2299_, 0);
lean_inc(v_a_2300_);
lean_dec_ref_known(v___x_2299_, 1);
v___x_2301_ = lean_unsigned_to_nat(0u);
v_bs_x27_2302_ = lean_array_uset(v_bs_2289_, v_i_2288_, v___x_2301_);
v___x_2303_ = ((size_t)1ULL);
v___x_2304_ = lean_usize_add(v_i_2288_, v___x_2303_);
v___x_2305_ = lean_array_uset(v_bs_x27_2302_, v_i_2288_, v_a_2300_);
v_i_2288_ = v___x_2304_;
v_bs_2289_ = v___x_2305_;
goto _start;
}
else
{
lean_object* v_a_2307_; lean_object* v___x_2309_; uint8_t v_isShared_2310_; uint8_t v_isSharedCheck_2314_; 
lean_dec_ref(v_bs_2289_);
v_a_2307_ = lean_ctor_get(v___x_2299_, 0);
v_isSharedCheck_2314_ = !lean_is_exclusive(v___x_2299_);
if (v_isSharedCheck_2314_ == 0)
{
v___x_2309_ = v___x_2299_;
v_isShared_2310_ = v_isSharedCheck_2314_;
goto v_resetjp_2308_;
}
else
{
lean_inc(v_a_2307_);
lean_dec(v___x_2299_);
v___x_2309_ = lean_box(0);
v_isShared_2310_ = v_isSharedCheck_2314_;
goto v_resetjp_2308_;
}
v_resetjp_2308_:
{
lean_object* v___x_2312_; 
if (v_isShared_2310_ == 0)
{
v___x_2312_ = v___x_2309_;
goto v_reusejp_2311_;
}
else
{
lean_object* v_reuseFailAlloc_2313_; 
v_reuseFailAlloc_2313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2313_, 0, v_a_2307_);
v___x_2312_ = v_reuseFailAlloc_2313_;
goto v_reusejp_2311_;
}
v_reusejp_2311_:
{
return v___x_2312_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_translateTerm_spec__2___boxed(lean_object* v_sz_2315_, lean_object* v_i_2316_, lean_object* v_bs_2317_, lean_object* v___y_2318_, lean_object* v___y_2319_, lean_object* v___y_2320_, lean_object* v___y_2321_, lean_object* v___y_2322_, lean_object* v___y_2323_){
_start:
{
size_t v_sz_boxed_2324_; size_t v_i_boxed_2325_; lean_object* v_res_2326_; 
v_sz_boxed_2324_ = lean_unbox_usize(v_sz_2315_);
lean_dec(v_sz_2315_);
v_i_boxed_2325_ = lean_unbox_usize(v_i_2316_);
lean_dec(v_i_2316_);
v_res_2326_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_translateTerm_spec__2(v_sz_boxed_2324_, v_i_boxed_2325_, v_bs_2317_, v___y_2318_, v___y_2319_, v___y_2320_, v___y_2321_, v___y_2322_);
lean_dec(v___y_2322_);
lean_dec_ref(v___y_2321_);
lean_dec(v___y_2320_);
lean_dec_ref(v___y_2319_);
lean_dec(v___y_2318_);
return v_res_2326_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_arithmeticTerm_x3f___boxed(lean_object* v_e_2327_, lean_object* v_a_2328_, lean_object* v_a_2329_, lean_object* v_a_2330_, lean_object* v_a_2331_, lean_object* v_a_2332_, lean_object* v_a_2333_){
_start:
{
lean_object* v_res_2334_; 
v_res_2334_ = lp_vampireReplay_Vampire_arithmeticTerm_x3f(v_e_2327_, v_a_2328_, v_a_2329_, v_a_2330_, v_a_2331_, v_a_2332_);
lean_dec(v_a_2332_);
lean_dec_ref(v_a_2331_);
lean_dec(v_a_2330_);
lean_dec_ref(v_a_2329_);
lean_dec(v_a_2328_);
return v_res_2334_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_translateTerm___boxed(lean_object* v_e_2335_, lean_object* v_a_2336_, lean_object* v_a_2337_, lean_object* v_a_2338_, lean_object* v_a_2339_, lean_object* v_a_2340_, lean_object* v_a_2341_){
_start:
{
lean_object* v_res_2342_; 
v_res_2342_ = lp_vampireReplay_Vampire_translateTerm(v_e_2335_, v_a_2336_, v_a_2337_, v_a_2338_, v_a_2339_, v_a_2340_);
lean_dec(v_a_2340_);
lean_dec_ref(v_a_2339_);
lean_dec(v_a_2338_);
lean_dec_ref(v_a_2337_);
lean_dec(v_a_2336_);
return v_res_2342_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_translateTerm_spec__0(lean_object* v_e_2343_, lean_object* v___y_2344_, lean_object* v___y_2345_, lean_object* v___y_2346_, lean_object* v___y_2347_, lean_object* v___y_2348_){
_start:
{
lean_object* v___x_2350_; 
v___x_2350_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_translateTerm_spec__0___redArg(v_e_2343_, v___y_2346_);
return v___x_2350_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_translateTerm_spec__0___boxed(lean_object* v_e_2351_, lean_object* v___y_2352_, lean_object* v___y_2353_, lean_object* v___y_2354_, lean_object* v___y_2355_, lean_object* v___y_2356_, lean_object* v___y_2357_){
_start:
{
lean_object* v_res_2358_; 
v_res_2358_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_translateTerm_spec__0(v_e_2351_, v___y_2352_, v___y_2353_, v___y_2354_, v___y_2355_, v___y_2356_);
lean_dec(v___y_2356_);
lean_dec_ref(v___y_2355_);
lean_dec(v___y_2354_);
lean_dec_ref(v___y_2353_);
lean_dec(v___y_2352_);
return v_res_2358_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_throwError___at___00Vampire_translateTerm_spec__1(lean_object* v_00_u03b1_2359_, lean_object* v_msg_2360_, lean_object* v___y_2361_, lean_object* v___y_2362_, lean_object* v___y_2363_, lean_object* v___y_2364_, lean_object* v___y_2365_){
_start:
{
lean_object* v___x_2367_; 
v___x_2367_ = lp_vampireReplay_Lean_throwError___at___00Vampire_translateTerm_spec__1___redArg(v_msg_2360_, v___y_2362_, v___y_2363_, v___y_2364_, v___y_2365_);
return v___x_2367_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_throwError___at___00Vampire_translateTerm_spec__1___boxed(lean_object* v_00_u03b1_2368_, lean_object* v_msg_2369_, lean_object* v___y_2370_, lean_object* v___y_2371_, lean_object* v___y_2372_, lean_object* v___y_2373_, lean_object* v___y_2374_, lean_object* v___y_2375_){
_start:
{
lean_object* v_res_2376_; 
v_res_2376_ = lp_vampireReplay_Lean_throwError___at___00Vampire_translateTerm_spec__1(v_00_u03b1_2368_, v_msg_2369_, v___y_2370_, v___y_2371_, v___y_2372_, v___y_2373_, v___y_2374_);
lean_dec(v___y_2374_);
lean_dec_ref(v___y_2373_);
lean_dec(v___y_2372_);
lean_dec_ref(v___y_2371_);
lean_dec(v___y_2370_);
return v_res_2376_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_translateTerm_spec__3(lean_object* v_as_2377_, size_t v_i_2378_, size_t v_stop_2379_, lean_object* v_b_2380_, lean_object* v___y_2381_, lean_object* v___y_2382_, lean_object* v___y_2383_, lean_object* v___y_2384_, lean_object* v___y_2385_){
_start:
{
lean_object* v___x_2387_; 
v___x_2387_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_translateTerm_spec__3___redArg(v_as_2377_, v_i_2378_, v_stop_2379_, v_b_2380_, v___y_2382_, v___y_2383_, v___y_2384_, v___y_2385_);
return v___x_2387_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_translateTerm_spec__3___boxed(lean_object* v_as_2388_, lean_object* v_i_2389_, lean_object* v_stop_2390_, lean_object* v_b_2391_, lean_object* v___y_2392_, lean_object* v___y_2393_, lean_object* v___y_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_){
_start:
{
size_t v_i_boxed_2398_; size_t v_stop_boxed_2399_; lean_object* v_res_2400_; 
v_i_boxed_2398_ = lean_unbox_usize(v_i_2389_);
lean_dec(v_i_2389_);
v_stop_boxed_2399_ = lean_unbox_usize(v_stop_2390_);
lean_dec(v_stop_2390_);
v_res_2400_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_translateTerm_spec__3(v_as_2388_, v_i_boxed_2398_, v_stop_boxed_2399_, v_b_2391_, v___y_2392_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_);
lean_dec(v___y_2396_);
lean_dec_ref(v___y_2395_);
lean_dec(v___y_2394_);
lean_dec_ref(v___y_2393_);
lean_dec(v___y_2392_);
lean_dec_ref(v_as_2388_);
return v_res_2400_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_arithmeticAtom(lean_object* v_fn_2401_, lean_object* v_a_2402_, lean_object* v_b_2403_, lean_object* v_whole_2404_, lean_object* v_a_2405_, lean_object* v_a_2406_, lean_object* v_a_2407_, lean_object* v_a_2408_, lean_object* v_a_2409_){
_start:
{
lean_object* v___x_2411_; 
lean_inc(v_a_2409_);
lean_inc_ref(v_a_2408_);
lean_inc(v_a_2407_);
lean_inc_ref(v_a_2406_);
lean_inc_ref(v_a_2402_);
v___x_2411_ = lean_infer_type(v_a_2402_, v_a_2406_, v_a_2407_, v_a_2408_, v_a_2409_);
if (lean_obj_tag(v___x_2411_) == 0)
{
lean_object* v_a_2412_; lean_object* v___x_2413_; 
v_a_2412_ = lean_ctor_get(v___x_2411_, 0);
lean_inc(v_a_2412_);
lean_dec_ref_known(v___x_2411_, 1);
lean_inc(v_a_2409_);
lean_inc_ref(v_a_2408_);
lean_inc(v_a_2407_);
lean_inc_ref(v_a_2406_);
v___x_2413_ = lean_whnf(v_a_2412_, v_a_2406_, v_a_2407_, v_a_2408_, v_a_2409_);
if (lean_obj_tag(v___x_2413_) == 0)
{
lean_object* v_a_2414_; lean_object* v___x_2415_; 
v_a_2414_ = lean_ctor_get(v___x_2413_, 0);
lean_inc(v_a_2414_);
lean_dec_ref_known(v___x_2413_, 1);
v___x_2415_ = lp_vampireReplay_Vampire_arithmeticSort(v_a_2414_);
lean_dec(v_a_2414_);
if (lean_obj_tag(v___x_2415_) == 0)
{
lean_object* v___x_2416_; 
lean_dec_ref(v_b_2403_);
lean_dec_ref(v_a_2402_);
lean_dec_ref(v_fn_2401_);
v___x_2416_ = lp_vampireReplay_Vampire_translateTerm(v_whole_2404_, v_a_2405_, v_a_2406_, v_a_2407_, v_a_2408_, v_a_2409_);
if (lean_obj_tag(v___x_2416_) == 0)
{
lean_object* v_a_2417_; lean_object* v___x_2419_; uint8_t v_isShared_2420_; uint8_t v_isSharedCheck_2425_; 
v_a_2417_ = lean_ctor_get(v___x_2416_, 0);
v_isSharedCheck_2425_ = !lean_is_exclusive(v___x_2416_);
if (v_isSharedCheck_2425_ == 0)
{
v___x_2419_ = v___x_2416_;
v_isShared_2420_ = v_isSharedCheck_2425_;
goto v_resetjp_2418_;
}
else
{
lean_inc(v_a_2417_);
lean_dec(v___x_2416_);
v___x_2419_ = lean_box(0);
v_isShared_2420_ = v_isSharedCheck_2425_;
goto v_resetjp_2418_;
}
v_resetjp_2418_:
{
lean_object* v___x_2421_; lean_object* v___x_2423_; 
v___x_2421_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2421_, 0, v_a_2417_);
if (v_isShared_2420_ == 0)
{
lean_ctor_set(v___x_2419_, 0, v___x_2421_);
v___x_2423_ = v___x_2419_;
goto v_reusejp_2422_;
}
else
{
lean_object* v_reuseFailAlloc_2424_; 
v_reuseFailAlloc_2424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2424_, 0, v___x_2421_);
v___x_2423_ = v_reuseFailAlloc_2424_;
goto v_reusejp_2422_;
}
v_reusejp_2422_:
{
return v___x_2423_;
}
}
}
else
{
lean_object* v_a_2426_; lean_object* v___x_2428_; uint8_t v_isShared_2429_; uint8_t v_isSharedCheck_2433_; 
v_a_2426_ = lean_ctor_get(v___x_2416_, 0);
v_isSharedCheck_2433_ = !lean_is_exclusive(v___x_2416_);
if (v_isSharedCheck_2433_ == 0)
{
v___x_2428_ = v___x_2416_;
v_isShared_2429_ = v_isSharedCheck_2433_;
goto v_resetjp_2427_;
}
else
{
lean_inc(v_a_2426_);
lean_dec(v___x_2416_);
v___x_2428_ = lean_box(0);
v_isShared_2429_ = v_isSharedCheck_2433_;
goto v_resetjp_2427_;
}
v_resetjp_2427_:
{
lean_object* v___x_2431_; 
if (v_isShared_2429_ == 0)
{
v___x_2431_ = v___x_2428_;
goto v_reusejp_2430_;
}
else
{
lean_object* v_reuseFailAlloc_2432_; 
v_reuseFailAlloc_2432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2432_, 0, v_a_2426_);
v___x_2431_ = v_reuseFailAlloc_2432_;
goto v_reusejp_2430_;
}
v_reusejp_2430_:
{
return v___x_2431_;
}
}
}
}
else
{
lean_object* v___x_2435_; uint8_t v_isShared_2436_; uint8_t v_isSharedCheck_2472_; 
lean_dec_ref(v_whole_2404_);
v_isSharedCheck_2472_ = !lean_is_exclusive(v___x_2415_);
if (v_isSharedCheck_2472_ == 0)
{
lean_object* v_unused_2473_; 
v_unused_2473_ = lean_ctor_get(v___x_2415_, 0);
lean_dec(v_unused_2473_);
v___x_2435_ = v___x_2415_;
v_isShared_2436_ = v_isSharedCheck_2472_;
goto v_resetjp_2434_;
}
else
{
lean_dec(v___x_2415_);
v___x_2435_ = lean_box(0);
v_isShared_2436_ = v_isSharedCheck_2472_;
goto v_resetjp_2434_;
}
v_resetjp_2434_:
{
lean_object* v___x_2437_; 
v___x_2437_ = lp_vampireReplay_Vampire_translateTerm(v_a_2402_, v_a_2405_, v_a_2406_, v_a_2407_, v_a_2408_, v_a_2409_);
if (lean_obj_tag(v___x_2437_) == 0)
{
lean_object* v_a_2438_; lean_object* v___x_2439_; 
v_a_2438_ = lean_ctor_get(v___x_2437_, 0);
lean_inc(v_a_2438_);
lean_dec_ref_known(v___x_2437_, 1);
v___x_2439_ = lp_vampireReplay_Vampire_translateTerm(v_b_2403_, v_a_2405_, v_a_2406_, v_a_2407_, v_a_2408_, v_a_2409_);
if (lean_obj_tag(v___x_2439_) == 0)
{
lean_object* v_a_2440_; lean_object* v___x_2442_; uint8_t v_isShared_2443_; uint8_t v_isSharedCheck_2455_; 
v_a_2440_ = lean_ctor_get(v___x_2439_, 0);
v_isSharedCheck_2455_ = !lean_is_exclusive(v___x_2439_);
if (v_isSharedCheck_2455_ == 0)
{
v___x_2442_ = v___x_2439_;
v_isShared_2443_ = v_isSharedCheck_2455_;
goto v_resetjp_2441_;
}
else
{
lean_inc(v_a_2440_);
lean_dec(v___x_2439_);
v___x_2442_ = lean_box(0);
v_isShared_2443_ = v_isSharedCheck_2455_;
goto v_resetjp_2441_;
}
v_resetjp_2441_:
{
lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2450_; 
v___x_2444_ = lean_unsigned_to_nat(2u);
v___x_2445_ = lean_mk_empty_array_with_capacity(v___x_2444_);
v___x_2446_ = lean_array_push(v___x_2445_, v_a_2438_);
v___x_2447_ = lean_array_push(v___x_2446_, v_a_2440_);
v___x_2448_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2448_, 0, v_fn_2401_);
lean_ctor_set(v___x_2448_, 1, v___x_2447_);
if (v_isShared_2436_ == 0)
{
lean_ctor_set_tag(v___x_2435_, 2);
lean_ctor_set(v___x_2435_, 0, v___x_2448_);
v___x_2450_ = v___x_2435_;
goto v_reusejp_2449_;
}
else
{
lean_object* v_reuseFailAlloc_2454_; 
v_reuseFailAlloc_2454_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2454_, 0, v___x_2448_);
v___x_2450_ = v_reuseFailAlloc_2454_;
goto v_reusejp_2449_;
}
v_reusejp_2449_:
{
lean_object* v___x_2452_; 
if (v_isShared_2443_ == 0)
{
lean_ctor_set(v___x_2442_, 0, v___x_2450_);
v___x_2452_ = v___x_2442_;
goto v_reusejp_2451_;
}
else
{
lean_object* v_reuseFailAlloc_2453_; 
v_reuseFailAlloc_2453_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2453_, 0, v___x_2450_);
v___x_2452_ = v_reuseFailAlloc_2453_;
goto v_reusejp_2451_;
}
v_reusejp_2451_:
{
return v___x_2452_;
}
}
}
}
else
{
lean_object* v_a_2456_; lean_object* v___x_2458_; uint8_t v_isShared_2459_; uint8_t v_isSharedCheck_2463_; 
lean_dec(v_a_2438_);
lean_del_object(v___x_2435_);
lean_dec_ref(v_fn_2401_);
v_a_2456_ = lean_ctor_get(v___x_2439_, 0);
v_isSharedCheck_2463_ = !lean_is_exclusive(v___x_2439_);
if (v_isSharedCheck_2463_ == 0)
{
v___x_2458_ = v___x_2439_;
v_isShared_2459_ = v_isSharedCheck_2463_;
goto v_resetjp_2457_;
}
else
{
lean_inc(v_a_2456_);
lean_dec(v___x_2439_);
v___x_2458_ = lean_box(0);
v_isShared_2459_ = v_isSharedCheck_2463_;
goto v_resetjp_2457_;
}
v_resetjp_2457_:
{
lean_object* v___x_2461_; 
if (v_isShared_2459_ == 0)
{
v___x_2461_ = v___x_2458_;
goto v_reusejp_2460_;
}
else
{
lean_object* v_reuseFailAlloc_2462_; 
v_reuseFailAlloc_2462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2462_, 0, v_a_2456_);
v___x_2461_ = v_reuseFailAlloc_2462_;
goto v_reusejp_2460_;
}
v_reusejp_2460_:
{
return v___x_2461_;
}
}
}
}
else
{
lean_object* v_a_2464_; lean_object* v___x_2466_; uint8_t v_isShared_2467_; uint8_t v_isSharedCheck_2471_; 
lean_del_object(v___x_2435_);
lean_dec_ref(v_b_2403_);
lean_dec_ref(v_fn_2401_);
v_a_2464_ = lean_ctor_get(v___x_2437_, 0);
v_isSharedCheck_2471_ = !lean_is_exclusive(v___x_2437_);
if (v_isSharedCheck_2471_ == 0)
{
v___x_2466_ = v___x_2437_;
v_isShared_2467_ = v_isSharedCheck_2471_;
goto v_resetjp_2465_;
}
else
{
lean_inc(v_a_2464_);
lean_dec(v___x_2437_);
v___x_2466_ = lean_box(0);
v_isShared_2467_ = v_isSharedCheck_2471_;
goto v_resetjp_2465_;
}
v_resetjp_2465_:
{
lean_object* v___x_2469_; 
if (v_isShared_2467_ == 0)
{
v___x_2469_ = v___x_2466_;
goto v_reusejp_2468_;
}
else
{
lean_object* v_reuseFailAlloc_2470_; 
v_reuseFailAlloc_2470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2470_, 0, v_a_2464_);
v___x_2469_ = v_reuseFailAlloc_2470_;
goto v_reusejp_2468_;
}
v_reusejp_2468_:
{
return v___x_2469_;
}
}
}
}
}
}
else
{
lean_object* v_a_2474_; lean_object* v___x_2476_; uint8_t v_isShared_2477_; uint8_t v_isSharedCheck_2481_; 
lean_dec_ref(v_whole_2404_);
lean_dec_ref(v_b_2403_);
lean_dec_ref(v_a_2402_);
lean_dec_ref(v_fn_2401_);
v_a_2474_ = lean_ctor_get(v___x_2413_, 0);
v_isSharedCheck_2481_ = !lean_is_exclusive(v___x_2413_);
if (v_isSharedCheck_2481_ == 0)
{
v___x_2476_ = v___x_2413_;
v_isShared_2477_ = v_isSharedCheck_2481_;
goto v_resetjp_2475_;
}
else
{
lean_inc(v_a_2474_);
lean_dec(v___x_2413_);
v___x_2476_ = lean_box(0);
v_isShared_2477_ = v_isSharedCheck_2481_;
goto v_resetjp_2475_;
}
v_resetjp_2475_:
{
lean_object* v___x_2479_; 
if (v_isShared_2477_ == 0)
{
v___x_2479_ = v___x_2476_;
goto v_reusejp_2478_;
}
else
{
lean_object* v_reuseFailAlloc_2480_; 
v_reuseFailAlloc_2480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2480_, 0, v_a_2474_);
v___x_2479_ = v_reuseFailAlloc_2480_;
goto v_reusejp_2478_;
}
v_reusejp_2478_:
{
return v___x_2479_;
}
}
}
}
else
{
lean_object* v_a_2482_; lean_object* v___x_2484_; uint8_t v_isShared_2485_; uint8_t v_isSharedCheck_2489_; 
lean_dec_ref(v_whole_2404_);
lean_dec_ref(v_b_2403_);
lean_dec_ref(v_a_2402_);
lean_dec_ref(v_fn_2401_);
v_a_2482_ = lean_ctor_get(v___x_2411_, 0);
v_isSharedCheck_2489_ = !lean_is_exclusive(v___x_2411_);
if (v_isSharedCheck_2489_ == 0)
{
v___x_2484_ = v___x_2411_;
v_isShared_2485_ = v_isSharedCheck_2489_;
goto v_resetjp_2483_;
}
else
{
lean_inc(v_a_2482_);
lean_dec(v___x_2411_);
v___x_2484_ = lean_box(0);
v_isShared_2485_ = v_isSharedCheck_2489_;
goto v_resetjp_2483_;
}
v_resetjp_2483_:
{
lean_object* v___x_2487_; 
if (v_isShared_2485_ == 0)
{
v___x_2487_ = v___x_2484_;
goto v_reusejp_2486_;
}
else
{
lean_object* v_reuseFailAlloc_2488_; 
v_reuseFailAlloc_2488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2488_, 0, v_a_2482_);
v___x_2487_ = v_reuseFailAlloc_2488_;
goto v_reusejp_2486_;
}
v_reusejp_2486_:
{
return v___x_2487_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_arithmeticAtom___boxed(lean_object* v_fn_2490_, lean_object* v_a_2491_, lean_object* v_b_2492_, lean_object* v_whole_2493_, lean_object* v_a_2494_, lean_object* v_a_2495_, lean_object* v_a_2496_, lean_object* v_a_2497_, lean_object* v_a_2498_, lean_object* v_a_2499_){
_start:
{
lean_object* v_res_2500_; 
v_res_2500_ = lp_vampireReplay_Vampire_arithmeticAtom(v_fn_2490_, v_a_2491_, v_b_2492_, v_whole_2493_, v_a_2494_, v_a_2495_, v_a_2496_, v_a_2497_, v_a_2498_);
lean_dec(v_a_2498_);
lean_dec_ref(v_a_2497_);
lean_dec(v_a_2496_);
lean_dec_ref(v_a_2495_);
lean_dec(v_a_2494_);
return v_res_2500_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_translateFormula_spec__2___redArg(lean_object* v_as_2501_, size_t v_sz_2502_, size_t v_i_2503_, lean_object* v_b_2504_, lean_object* v___y_2505_, lean_object* v___y_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_){
_start:
{
uint8_t v___x_2510_; 
v___x_2510_ = lean_usize_dec_lt(v_i_2503_, v_sz_2502_);
if (v___x_2510_ == 0)
{
lean_object* v___x_2511_; 
v___x_2511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2511_, 0, v_b_2504_);
return v___x_2511_;
}
else
{
lean_object* v_a_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; 
v_a_2512_ = lean_array_uget_borrowed(v_as_2501_, v_i_2503_);
v___x_2513_ = l_Lean_Expr_fvarId_x21(v_a_2512_);
v___x_2514_ = lp_vampireReplay_Vampire_bindVar___redArg(v___x_2513_, v___y_2505_, v___y_2506_, v___y_2507_, v___y_2508_);
if (lean_obj_tag(v___x_2514_) == 0)
{
lean_object* v_a_2515_; lean_object* v___x_2516_; size_t v___x_2517_; size_t v___x_2518_; 
v_a_2515_ = lean_ctor_get(v___x_2514_, 0);
lean_inc(v_a_2515_);
lean_dec_ref_known(v___x_2514_, 1);
v___x_2516_ = lean_array_push(v_b_2504_, v_a_2515_);
v___x_2517_ = ((size_t)1ULL);
v___x_2518_ = lean_usize_add(v_i_2503_, v___x_2517_);
v_i_2503_ = v___x_2518_;
v_b_2504_ = v___x_2516_;
goto _start;
}
else
{
lean_object* v_a_2520_; lean_object* v___x_2522_; uint8_t v_isShared_2523_; uint8_t v_isSharedCheck_2527_; 
lean_dec_ref(v_b_2504_);
v_a_2520_ = lean_ctor_get(v___x_2514_, 0);
v_isSharedCheck_2527_ = !lean_is_exclusive(v___x_2514_);
if (v_isSharedCheck_2527_ == 0)
{
v___x_2522_ = v___x_2514_;
v_isShared_2523_ = v_isSharedCheck_2527_;
goto v_resetjp_2521_;
}
else
{
lean_inc(v_a_2520_);
lean_dec(v___x_2514_);
v___x_2522_ = lean_box(0);
v_isShared_2523_ = v_isSharedCheck_2527_;
goto v_resetjp_2521_;
}
v_resetjp_2521_:
{
lean_object* v___x_2525_; 
if (v_isShared_2523_ == 0)
{
v___x_2525_ = v___x_2522_;
goto v_reusejp_2524_;
}
else
{
lean_object* v_reuseFailAlloc_2526_; 
v_reuseFailAlloc_2526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2526_, 0, v_a_2520_);
v___x_2525_ = v_reuseFailAlloc_2526_;
goto v_reusejp_2524_;
}
v_reusejp_2524_:
{
return v___x_2525_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_translateFormula_spec__2___redArg___boxed(lean_object* v_as_2528_, lean_object* v_sz_2529_, lean_object* v_i_2530_, lean_object* v_b_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_){
_start:
{
size_t v_sz_boxed_2537_; size_t v_i_boxed_2538_; lean_object* v_res_2539_; 
v_sz_boxed_2537_ = lean_unbox_usize(v_sz_2529_);
lean_dec(v_sz_2529_);
v_i_boxed_2538_ = lean_unbox_usize(v_i_2530_);
lean_dec(v_i_2530_);
v_res_2539_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_translateFormula_spec__2___redArg(v_as_2528_, v_sz_boxed_2537_, v_i_boxed_2538_, v_b_2531_, v___y_2532_, v___y_2533_, v___y_2534_, v___y_2535_);
lean_dec(v___y_2535_);
lean_dec_ref(v___y_2534_);
lean_dec_ref(v___y_2533_);
lean_dec(v___y_2532_);
lean_dec_ref(v_as_2528_);
return v_res_2539_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_lambdaTelescope___at___00Vampire_translateFormula_spec__4___redArg(lean_object* v_e_2540_, lean_object* v_k_2541_, uint8_t v_cleanupAnnotations_2542_, lean_object* v___y_2543_, lean_object* v___y_2544_, lean_object* v___y_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_){
_start:
{
lean_object* v___f_2549_; uint8_t v___x_2550_; uint8_t v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; 
lean_inc(v___y_2543_);
v___f_2549_ = lean_alloc_closure((void*)(lp_vampireReplay_Lean_Meta_forallTelescopeReducing___at___00Vampire_signatureOf_spec__3___redArg___lam__0___boxed), 9, 2);
lean_closure_set(v___f_2549_, 0, v_k_2541_);
lean_closure_set(v___f_2549_, 1, v___y_2543_);
v___x_2550_ = 1;
v___x_2551_ = 0;
v___x_2552_ = lean_box(0);
v___x_2553_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp___redArg(v_e_2540_, v___x_2550_, v___x_2551_, v___x_2550_, v___x_2551_, v___x_2552_, v___f_2549_, v_cleanupAnnotations_2542_, v___y_2544_, v___y_2545_, v___y_2546_, v___y_2547_);
if (lean_obj_tag(v___x_2553_) == 0)
{
return v___x_2553_;
}
else
{
lean_object* v_a_2554_; lean_object* v___x_2556_; uint8_t v_isShared_2557_; uint8_t v_isSharedCheck_2561_; 
v_a_2554_ = lean_ctor_get(v___x_2553_, 0);
v_isSharedCheck_2561_ = !lean_is_exclusive(v___x_2553_);
if (v_isSharedCheck_2561_ == 0)
{
v___x_2556_ = v___x_2553_;
v_isShared_2557_ = v_isSharedCheck_2561_;
goto v_resetjp_2555_;
}
else
{
lean_inc(v_a_2554_);
lean_dec(v___x_2553_);
v___x_2556_ = lean_box(0);
v_isShared_2557_ = v_isSharedCheck_2561_;
goto v_resetjp_2555_;
}
v_resetjp_2555_:
{
lean_object* v___x_2559_; 
if (v_isShared_2557_ == 0)
{
v___x_2559_ = v___x_2556_;
goto v_reusejp_2558_;
}
else
{
lean_object* v_reuseFailAlloc_2560_; 
v_reuseFailAlloc_2560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2560_, 0, v_a_2554_);
v___x_2559_ = v_reuseFailAlloc_2560_;
goto v_reusejp_2558_;
}
v_reusejp_2558_:
{
return v___x_2559_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_lambdaTelescope___at___00Vampire_translateFormula_spec__4___redArg___boxed(lean_object* v_e_2562_, lean_object* v_k_2563_, lean_object* v_cleanupAnnotations_2564_, lean_object* v___y_2565_, lean_object* v___y_2566_, lean_object* v___y_2567_, lean_object* v___y_2568_, lean_object* v___y_2569_, lean_object* v___y_2570_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2571_; lean_object* v_res_2572_; 
v_cleanupAnnotations_boxed_2571_ = lean_unbox(v_cleanupAnnotations_2564_);
v_res_2572_ = lp_vampireReplay_Lean_Meta_lambdaTelescope___at___00Vampire_translateFormula_spec__4___redArg(v_e_2562_, v_k_2563_, v_cleanupAnnotations_boxed_2571_, v___y_2565_, v___y_2566_, v___y_2567_, v___y_2568_, v___y_2569_);
lean_dec(v___y_2569_);
lean_dec_ref(v___y_2568_);
lean_dec(v___y_2567_);
lean_dec_ref(v___y_2566_);
lean_dec(v___y_2565_);
return v_res_2572_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Vampire_translateFormula_spec__3___redArg___lam__0(lean_object* v_k_2573_, lean_object* v___y_2574_, lean_object* v_b_2575_, lean_object* v___y_2576_, lean_object* v___y_2577_, lean_object* v___y_2578_, lean_object* v___y_2579_){
_start:
{
lean_object* v___x_2581_; 
lean_inc(v___y_2579_);
lean_inc_ref(v___y_2578_);
lean_inc(v___y_2577_);
lean_inc_ref(v___y_2576_);
lean_inc(v___y_2574_);
v___x_2581_ = lean_apply_7(v_k_2573_, v_b_2575_, v___y_2574_, v___y_2576_, v___y_2577_, v___y_2578_, v___y_2579_, lean_box(0));
return v___x_2581_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Vampire_translateFormula_spec__3___redArg___lam__0___boxed(lean_object* v_k_2582_, lean_object* v___y_2583_, lean_object* v_b_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_, lean_object* v___y_2588_, lean_object* v___y_2589_){
_start:
{
lean_object* v_res_2590_; 
v_res_2590_ = lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Vampire_translateFormula_spec__3___redArg___lam__0(v_k_2582_, v___y_2583_, v_b_2584_, v___y_2585_, v___y_2586_, v___y_2587_, v___y_2588_);
lean_dec(v___y_2588_);
lean_dec_ref(v___y_2587_);
lean_dec(v___y_2586_);
lean_dec_ref(v___y_2585_);
lean_dec(v___y_2583_);
return v_res_2590_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Vampire_translateFormula_spec__3___redArg(lean_object* v_name_2591_, uint8_t v_bi_2592_, lean_object* v_type_2593_, lean_object* v_k_2594_, uint8_t v_kind_2595_, lean_object* v___y_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_, lean_object* v___y_2599_, lean_object* v___y_2600_){
_start:
{
lean_object* v___f_2602_; lean_object* v___x_2603_; 
lean_inc(v___y_2596_);
v___f_2602_ = lean_alloc_closure((void*)(lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Vampire_translateFormula_spec__3___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_2602_, 0, v_k_2594_);
lean_closure_set(v___f_2602_, 1, v___y_2596_);
v___x_2603_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp___redArg(v_name_2591_, v_bi_2592_, v_type_2593_, v___f_2602_, v_kind_2595_, v___y_2597_, v___y_2598_, v___y_2599_, v___y_2600_);
if (lean_obj_tag(v___x_2603_) == 0)
{
return v___x_2603_;
}
else
{
lean_object* v_a_2604_; lean_object* v___x_2606_; uint8_t v_isShared_2607_; uint8_t v_isSharedCheck_2611_; 
v_a_2604_ = lean_ctor_get(v___x_2603_, 0);
v_isSharedCheck_2611_ = !lean_is_exclusive(v___x_2603_);
if (v_isSharedCheck_2611_ == 0)
{
v___x_2606_ = v___x_2603_;
v_isShared_2607_ = v_isSharedCheck_2611_;
goto v_resetjp_2605_;
}
else
{
lean_inc(v_a_2604_);
lean_dec(v___x_2603_);
v___x_2606_ = lean_box(0);
v_isShared_2607_ = v_isSharedCheck_2611_;
goto v_resetjp_2605_;
}
v_resetjp_2605_:
{
lean_object* v___x_2609_; 
if (v_isShared_2607_ == 0)
{
v___x_2609_ = v___x_2606_;
goto v_reusejp_2608_;
}
else
{
lean_object* v_reuseFailAlloc_2610_; 
v_reuseFailAlloc_2610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2610_, 0, v_a_2604_);
v___x_2609_ = v_reuseFailAlloc_2610_;
goto v_reusejp_2608_;
}
v_reusejp_2608_:
{
return v___x_2609_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Vampire_translateFormula_spec__3___redArg___boxed(lean_object* v_name_2612_, lean_object* v_bi_2613_, lean_object* v_type_2614_, lean_object* v_k_2615_, lean_object* v_kind_2616_, lean_object* v___y_2617_, lean_object* v___y_2618_, lean_object* v___y_2619_, lean_object* v___y_2620_, lean_object* v___y_2621_, lean_object* v___y_2622_){
_start:
{
uint8_t v_bi_boxed_2623_; uint8_t v_kind_boxed_2624_; lean_object* v_res_2625_; 
v_bi_boxed_2623_ = lean_unbox(v_bi_2613_);
v_kind_boxed_2624_ = lean_unbox(v_kind_2616_);
v_res_2625_ = lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Vampire_translateFormula_spec__3___redArg(v_name_2612_, v_bi_boxed_2623_, v_type_2614_, v_k_2615_, v_kind_boxed_2624_, v___y_2617_, v___y_2618_, v___y_2619_, v___y_2620_, v___y_2621_);
lean_dec(v___y_2621_);
lean_dec_ref(v___y_2620_);
lean_dec(v___y_2619_);
lean_dec_ref(v___y_2618_);
lean_dec(v___y_2617_);
return v_res_2625_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_translateFormula___lam__0___boxed(lean_object* v_body_2626_, lean_object* v_x_2627_, lean_object* v___y_2628_, lean_object* v___y_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_){
_start:
{
lean_object* v_res_2634_; 
v_res_2634_ = lp_vampireReplay_Vampire_translateFormula___lam__0(v_body_2626_, v_x_2627_, v___y_2628_, v___y_2629_, v___y_2630_, v___y_2631_, v___y_2632_);
lean_dec(v___y_2632_);
lean_dec_ref(v___y_2631_);
lean_dec(v___y_2630_);
lean_dec_ref(v___y_2629_);
lean_dec(v___y_2628_);
lean_dec_ref(v_x_2627_);
lean_dec_ref(v_body_2626_);
return v_res_2634_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_translateFormula___lam__1(lean_object* v_body_2635_, lean_object* v_x_2636_, lean_object* v___y_2637_, lean_object* v___y_2638_, lean_object* v___y_2639_, lean_object* v___y_2640_, lean_object* v___y_2641_){
_start:
{
lean_object* v___x_2643_; lean_object* v___x_2644_; 
v___x_2643_ = l_Lean_Expr_fvarId_x21(v_x_2636_);
v___x_2644_ = lp_vampireReplay_Vampire_bindVar___redArg(v___x_2643_, v___y_2637_, v___y_2638_, v___y_2640_, v___y_2641_);
if (lean_obj_tag(v___x_2644_) == 0)
{
lean_object* v_a_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; 
v_a_2645_ = lean_ctor_get(v___x_2644_, 0);
lean_inc(v_a_2645_);
lean_dec_ref_known(v___x_2644_, 1);
v___x_2646_ = lean_expr_instantiate1(v_body_2635_, v_x_2636_);
v___x_2647_ = lp_vampireReplay_Vampire_translateFormula(v___x_2646_, v___y_2637_, v___y_2638_, v___y_2639_, v___y_2640_, v___y_2641_);
if (lean_obj_tag(v___x_2647_) == 0)
{
lean_object* v_a_2648_; lean_object* v___x_2650_; uint8_t v_isShared_2651_; uint8_t v_isSharedCheck_2675_; 
v_a_2648_ = lean_ctor_get(v___x_2647_, 0);
v_isSharedCheck_2675_ = !lean_is_exclusive(v___x_2647_);
if (v_isSharedCheck_2675_ == 0)
{
v___x_2650_ = v___x_2647_;
v_isShared_2651_ = v_isSharedCheck_2675_;
goto v_resetjp_2649_;
}
else
{
lean_inc(v_a_2648_);
lean_dec(v___x_2647_);
v___x_2650_ = lean_box(0);
v_isShared_2651_ = v_isSharedCheck_2675_;
goto v_resetjp_2649_;
}
v_resetjp_2649_:
{
if (lean_obj_tag(v_a_2648_) == 9)
{
lean_object* v_vars_2652_; lean_object* v_body_2653_; lean_object* v___x_2655_; uint8_t v_isShared_2656_; uint8_t v_isSharedCheck_2667_; 
v_vars_2652_ = lean_ctor_get(v_a_2648_, 0);
v_body_2653_ = lean_ctor_get(v_a_2648_, 1);
v_isSharedCheck_2667_ = !lean_is_exclusive(v_a_2648_);
if (v_isSharedCheck_2667_ == 0)
{
v___x_2655_ = v_a_2648_;
v_isShared_2656_ = v_isSharedCheck_2667_;
goto v_resetjp_2654_;
}
else
{
lean_inc(v_body_2653_);
lean_inc(v_vars_2652_);
lean_dec(v_a_2648_);
v___x_2655_ = lean_box(0);
v_isShared_2656_ = v_isSharedCheck_2667_;
goto v_resetjp_2654_;
}
v_resetjp_2654_:
{
lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2662_; 
v___x_2657_ = lean_unsigned_to_nat(1u);
v___x_2658_ = lean_mk_empty_array_with_capacity(v___x_2657_);
v___x_2659_ = lean_array_push(v___x_2658_, v_a_2645_);
v___x_2660_ = l_Array_append___redArg(v___x_2659_, v_vars_2652_);
lean_dec_ref(v_vars_2652_);
if (v_isShared_2656_ == 0)
{
lean_ctor_set(v___x_2655_, 0, v___x_2660_);
v___x_2662_ = v___x_2655_;
goto v_reusejp_2661_;
}
else
{
lean_object* v_reuseFailAlloc_2666_; 
v_reuseFailAlloc_2666_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2666_, 0, v___x_2660_);
lean_ctor_set(v_reuseFailAlloc_2666_, 1, v_body_2653_);
v___x_2662_ = v_reuseFailAlloc_2666_;
goto v_reusejp_2661_;
}
v_reusejp_2661_:
{
lean_object* v___x_2664_; 
if (v_isShared_2651_ == 0)
{
lean_ctor_set(v___x_2650_, 0, v___x_2662_);
v___x_2664_ = v___x_2650_;
goto v_reusejp_2663_;
}
else
{
lean_object* v_reuseFailAlloc_2665_; 
v_reuseFailAlloc_2665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2665_, 0, v___x_2662_);
v___x_2664_ = v_reuseFailAlloc_2665_;
goto v_reusejp_2663_;
}
v_reusejp_2663_:
{
return v___x_2664_;
}
}
}
}
else
{
lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2673_; 
v___x_2668_ = lean_unsigned_to_nat(1u);
v___x_2669_ = lean_mk_empty_array_with_capacity(v___x_2668_);
v___x_2670_ = lean_array_push(v___x_2669_, v_a_2645_);
v___x_2671_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2671_, 0, v___x_2670_);
lean_ctor_set(v___x_2671_, 1, v_a_2648_);
if (v_isShared_2651_ == 0)
{
lean_ctor_set(v___x_2650_, 0, v___x_2671_);
v___x_2673_ = v___x_2650_;
goto v_reusejp_2672_;
}
else
{
lean_object* v_reuseFailAlloc_2674_; 
v_reuseFailAlloc_2674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2674_, 0, v___x_2671_);
v___x_2673_ = v_reuseFailAlloc_2674_;
goto v_reusejp_2672_;
}
v_reusejp_2672_:
{
return v___x_2673_;
}
}
}
}
else
{
lean_dec(v_a_2645_);
return v___x_2647_;
}
}
else
{
lean_object* v_a_2676_; lean_object* v___x_2678_; uint8_t v_isShared_2679_; uint8_t v_isSharedCheck_2683_; 
v_a_2676_ = lean_ctor_get(v___x_2644_, 0);
v_isSharedCheck_2683_ = !lean_is_exclusive(v___x_2644_);
if (v_isSharedCheck_2683_ == 0)
{
v___x_2678_ = v___x_2644_;
v_isShared_2679_ = v_isSharedCheck_2683_;
goto v_resetjp_2677_;
}
else
{
lean_inc(v_a_2676_);
lean_dec(v___x_2644_);
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
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_translateFormula___lam__1___boxed(lean_object* v_body_2684_, lean_object* v_x_2685_, lean_object* v___y_2686_, lean_object* v___y_2687_, lean_object* v___y_2688_, lean_object* v___y_2689_, lean_object* v___y_2690_, lean_object* v___y_2691_){
_start:
{
lean_object* v_res_2692_; 
v_res_2692_ = lp_vampireReplay_Vampire_translateFormula___lam__1(v_body_2684_, v_x_2685_, v___y_2686_, v___y_2687_, v___y_2688_, v___y_2689_, v___y_2690_);
lean_dec(v___y_2690_);
lean_dec_ref(v___y_2689_);
lean_dec(v___y_2688_);
lean_dec_ref(v___y_2687_);
lean_dec(v___y_2686_);
lean_dec_ref(v_x_2685_);
lean_dec_ref(v_body_2684_);
return v_res_2692_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_junctionArgs_spec__0(size_t v_sz_2742_, size_t v_i_2743_, lean_object* v_bs_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_, lean_object* v___y_2747_, lean_object* v___y_2748_, lean_object* v___y_2749_){
_start:
{
uint8_t v___x_2751_; 
v___x_2751_ = lean_usize_dec_lt(v_i_2743_, v_sz_2742_);
if (v___x_2751_ == 0)
{
lean_object* v___x_2752_; 
v___x_2752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2752_, 0, v_bs_2744_);
return v___x_2752_;
}
else
{
lean_object* v_v_2753_; lean_object* v___x_2754_; 
v_v_2753_ = lean_array_uget_borrowed(v_bs_2744_, v_i_2743_);
lean_inc(v_v_2753_);
v___x_2754_ = lp_vampireReplay_Vampire_translateFormula(v_v_2753_, v___y_2745_, v___y_2746_, v___y_2747_, v___y_2748_, v___y_2749_);
if (lean_obj_tag(v___x_2754_) == 0)
{
lean_object* v_a_2755_; lean_object* v___x_2756_; lean_object* v_bs_x27_2757_; size_t v___x_2758_; size_t v___x_2759_; lean_object* v___x_2760_; 
v_a_2755_ = lean_ctor_get(v___x_2754_, 0);
lean_inc(v_a_2755_);
lean_dec_ref_known(v___x_2754_, 1);
v___x_2756_ = lean_unsigned_to_nat(0u);
v_bs_x27_2757_ = lean_array_uset(v_bs_2744_, v_i_2743_, v___x_2756_);
v___x_2758_ = ((size_t)1ULL);
v___x_2759_ = lean_usize_add(v_i_2743_, v___x_2758_);
v___x_2760_ = lean_array_uset(v_bs_x27_2757_, v_i_2743_, v_a_2755_);
v_i_2743_ = v___x_2759_;
v_bs_2744_ = v___x_2760_;
goto _start;
}
else
{
lean_object* v_a_2762_; lean_object* v___x_2764_; uint8_t v_isShared_2765_; uint8_t v_isSharedCheck_2769_; 
lean_dec_ref(v_bs_2744_);
v_a_2762_ = lean_ctor_get(v___x_2754_, 0);
v_isSharedCheck_2769_ = !lean_is_exclusive(v___x_2754_);
if (v_isSharedCheck_2769_ == 0)
{
v___x_2764_ = v___x_2754_;
v_isShared_2765_ = v_isSharedCheck_2769_;
goto v_resetjp_2763_;
}
else
{
lean_inc(v_a_2762_);
lean_dec(v___x_2754_);
v___x_2764_ = lean_box(0);
v_isShared_2765_ = v_isSharedCheck_2769_;
goto v_resetjp_2763_;
}
v_resetjp_2763_:
{
lean_object* v___x_2767_; 
if (v_isShared_2765_ == 0)
{
v___x_2767_ = v___x_2764_;
goto v_reusejp_2766_;
}
else
{
lean_object* v_reuseFailAlloc_2768_; 
v_reuseFailAlloc_2768_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2768_, 0, v_a_2762_);
v___x_2767_ = v_reuseFailAlloc_2768_;
goto v_reusejp_2766_;
}
v_reusejp_2766_:
{
return v___x_2767_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_junctionArgs(lean_object* v_fn_2770_, lean_object* v_e_2771_, lean_object* v_a_2772_, lean_object* v_a_2773_, lean_object* v_a_2774_, lean_object* v_a_2775_, lean_object* v_a_2776_){
_start:
{
lean_object* v___x_2778_; size_t v_sz_2779_; size_t v___x_2780_; lean_object* v___x_2781_; 
v___x_2778_ = lp_vampireReplay_Vampire_junctionArgs_parts(v_fn_2770_, v_e_2771_);
v_sz_2779_ = lean_array_size(v___x_2778_);
v___x_2780_ = ((size_t)0ULL);
v___x_2781_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_junctionArgs_spec__0(v_sz_2779_, v___x_2780_, v___x_2778_, v_a_2772_, v_a_2773_, v_a_2774_, v_a_2775_, v_a_2776_);
return v___x_2781_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_translateFormula___lam__2(lean_object* v_xs_2784_, lean_object* v_body_2785_, lean_object* v___y_2786_, lean_object* v___y_2787_, lean_object* v___y_2788_, lean_object* v___y_2789_, lean_object* v___y_2790_){
_start:
{
lean_object* v___x_2792_; size_t v_sz_2793_; size_t v___x_2794_; lean_object* v___x_2795_; 
v___x_2792_ = ((lean_object*)(lp_vampireReplay_Vampire_translateFormula___lam__2___closed__0));
v_sz_2793_ = lean_array_size(v_xs_2784_);
v___x_2794_ = ((size_t)0ULL);
v___x_2795_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_translateFormula_spec__2___redArg(v_xs_2784_, v_sz_2793_, v___x_2794_, v___x_2792_, v___y_2786_, v___y_2787_, v___y_2789_, v___y_2790_);
if (lean_obj_tag(v___x_2795_) == 0)
{
lean_object* v_a_2796_; lean_object* v___x_2797_; 
v_a_2796_ = lean_ctor_get(v___x_2795_, 0);
lean_inc(v_a_2796_);
lean_dec_ref_known(v___x_2795_, 1);
v___x_2797_ = lp_vampireReplay_Vampire_translateFormula(v_body_2785_, v___y_2786_, v___y_2787_, v___y_2788_, v___y_2789_, v___y_2790_);
if (lean_obj_tag(v___x_2797_) == 0)
{
lean_object* v_a_2798_; lean_object* v___x_2800_; uint8_t v_isShared_2801_; uint8_t v_isSharedCheck_2819_; 
v_a_2798_ = lean_ctor_get(v___x_2797_, 0);
v_isSharedCheck_2819_ = !lean_is_exclusive(v___x_2797_);
if (v_isSharedCheck_2819_ == 0)
{
v___x_2800_ = v___x_2797_;
v_isShared_2801_ = v_isSharedCheck_2819_;
goto v_resetjp_2799_;
}
else
{
lean_inc(v_a_2798_);
lean_dec(v___x_2797_);
v___x_2800_ = lean_box(0);
v_isShared_2801_ = v_isSharedCheck_2819_;
goto v_resetjp_2799_;
}
v_resetjp_2799_:
{
if (lean_obj_tag(v_a_2798_) == 10)
{
lean_object* v_vars_2802_; lean_object* v_body_2803_; lean_object* v___x_2805_; uint8_t v_isShared_2806_; uint8_t v_isSharedCheck_2814_; 
v_vars_2802_ = lean_ctor_get(v_a_2798_, 0);
v_body_2803_ = lean_ctor_get(v_a_2798_, 1);
v_isSharedCheck_2814_ = !lean_is_exclusive(v_a_2798_);
if (v_isSharedCheck_2814_ == 0)
{
v___x_2805_ = v_a_2798_;
v_isShared_2806_ = v_isSharedCheck_2814_;
goto v_resetjp_2804_;
}
else
{
lean_inc(v_body_2803_);
lean_inc(v_vars_2802_);
lean_dec(v_a_2798_);
v___x_2805_ = lean_box(0);
v_isShared_2806_ = v_isSharedCheck_2814_;
goto v_resetjp_2804_;
}
v_resetjp_2804_:
{
lean_object* v___x_2807_; lean_object* v___x_2809_; 
v___x_2807_ = l_Array_append___redArg(v_a_2796_, v_vars_2802_);
lean_dec_ref(v_vars_2802_);
if (v_isShared_2806_ == 0)
{
lean_ctor_set(v___x_2805_, 0, v___x_2807_);
v___x_2809_ = v___x_2805_;
goto v_reusejp_2808_;
}
else
{
lean_object* v_reuseFailAlloc_2813_; 
v_reuseFailAlloc_2813_ = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2813_, 0, v___x_2807_);
lean_ctor_set(v_reuseFailAlloc_2813_, 1, v_body_2803_);
v___x_2809_ = v_reuseFailAlloc_2813_;
goto v_reusejp_2808_;
}
v_reusejp_2808_:
{
lean_object* v___x_2811_; 
if (v_isShared_2801_ == 0)
{
lean_ctor_set(v___x_2800_, 0, v___x_2809_);
v___x_2811_ = v___x_2800_;
goto v_reusejp_2810_;
}
else
{
lean_object* v_reuseFailAlloc_2812_; 
v_reuseFailAlloc_2812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2812_, 0, v___x_2809_);
v___x_2811_ = v_reuseFailAlloc_2812_;
goto v_reusejp_2810_;
}
v_reusejp_2810_:
{
return v___x_2811_;
}
}
}
}
else
{
lean_object* v___x_2815_; lean_object* v___x_2817_; 
v___x_2815_ = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(v___x_2815_, 0, v_a_2796_);
lean_ctor_set(v___x_2815_, 1, v_a_2798_);
if (v_isShared_2801_ == 0)
{
lean_ctor_set(v___x_2800_, 0, v___x_2815_);
v___x_2817_ = v___x_2800_;
goto v_reusejp_2816_;
}
else
{
lean_object* v_reuseFailAlloc_2818_; 
v_reuseFailAlloc_2818_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2818_, 0, v___x_2815_);
v___x_2817_ = v_reuseFailAlloc_2818_;
goto v_reusejp_2816_;
}
v_reusejp_2816_:
{
return v___x_2817_;
}
}
}
}
else
{
lean_dec(v_a_2796_);
return v___x_2797_;
}
}
else
{
lean_object* v_a_2820_; lean_object* v___x_2822_; uint8_t v_isShared_2823_; uint8_t v_isSharedCheck_2827_; 
lean_dec_ref(v_body_2785_);
v_a_2820_ = lean_ctor_get(v___x_2795_, 0);
v_isSharedCheck_2827_ = !lean_is_exclusive(v___x_2795_);
if (v_isSharedCheck_2827_ == 0)
{
v___x_2822_ = v___x_2795_;
v_isShared_2823_ = v_isSharedCheck_2827_;
goto v_resetjp_2821_;
}
else
{
lean_inc(v_a_2820_);
lean_dec(v___x_2795_);
v___x_2822_ = lean_box(0);
v_isShared_2823_ = v_isSharedCheck_2827_;
goto v_resetjp_2821_;
}
v_resetjp_2821_:
{
lean_object* v___x_2825_; 
if (v_isShared_2823_ == 0)
{
v___x_2825_ = v___x_2822_;
goto v_reusejp_2824_;
}
else
{
lean_object* v_reuseFailAlloc_2826_; 
v_reuseFailAlloc_2826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2826_, 0, v_a_2820_);
v___x_2825_ = v_reuseFailAlloc_2826_;
goto v_reusejp_2824_;
}
v_reusejp_2824_:
{
return v___x_2825_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_translateFormula___lam__2___boxed(lean_object* v_xs_2828_, lean_object* v_body_2829_, lean_object* v___y_2830_, lean_object* v___y_2831_, lean_object* v___y_2832_, lean_object* v___y_2833_, lean_object* v___y_2834_, lean_object* v___y_2835_){
_start:
{
lean_object* v_res_2836_; 
v_res_2836_ = lp_vampireReplay_Vampire_translateFormula___lam__2(v_xs_2828_, v_body_2829_, v___y_2830_, v___y_2831_, v___y_2832_, v___y_2833_, v___y_2834_);
lean_dec(v___y_2834_);
lean_dec_ref(v___y_2833_);
lean_dec(v___y_2832_);
lean_dec_ref(v___y_2831_);
lean_dec(v___y_2830_);
lean_dec_ref(v_xs_2828_);
return v_res_2836_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_translateFormula(lean_object* v_e_2837_, lean_object* v_a_2838_, lean_object* v_a_2839_, lean_object* v_a_2840_, lean_object* v_a_2841_, lean_object* v_a_2842_){
_start:
{
lean_object* v___x_2844_; 
v___x_2844_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_translateTerm_spec__0___redArg(v_e_2837_, v_a_2840_);
if (lean_obj_tag(v___x_2844_) == 0)
{
lean_object* v_a_2845_; lean_object* v___y_2847_; lean_object* v___y_2848_; lean_object* v___y_2849_; lean_object* v___y_2850_; lean_object* v___y_2851_; 
v_a_2845_ = lean_ctor_get(v___x_2844_, 0);
lean_inc(v_a_2845_);
lean_dec_ref_known(v___x_2844_, 1);
switch(lean_obj_tag(v_a_2845_))
{
case 10:
{
lean_object* v_expr_2870_; 
v_expr_2870_ = lean_ctor_get(v_a_2845_, 1);
lean_inc_ref(v_expr_2870_);
lean_dec_ref_known(v_a_2845_, 2);
v_e_2837_ = v_expr_2870_;
goto _start;
}
case 7:
{
lean_object* v_binderName_2872_; lean_object* v_binderType_2873_; lean_object* v_body_2874_; uint8_t v_binderInfo_2875_; lean_object* v___x_2876_; 
v_binderName_2872_ = lean_ctor_get(v_a_2845_, 0);
lean_inc(v_binderName_2872_);
v_binderType_2873_ = lean_ctor_get(v_a_2845_, 1);
lean_inc_ref_n(v_binderType_2873_, 2);
v_body_2874_ = lean_ctor_get(v_a_2845_, 2);
lean_inc_ref(v_body_2874_);
v_binderInfo_2875_ = lean_ctor_get_uint8(v_a_2845_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_a_2845_, 3);
v___x_2876_ = l_Lean_Meta_isProp(v_binderType_2873_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_);
if (lean_obj_tag(v___x_2876_) == 0)
{
lean_object* v_a_2877_; lean_object* v___f_2878_; lean_object* v___f_2879_; uint8_t v___x_2896_; 
v_a_2877_ = lean_ctor_get(v___x_2876_, 0);
lean_inc(v_a_2877_);
lean_dec_ref_known(v___x_2876_, 1);
lean_inc_ref_n(v_body_2874_, 2);
v___f_2878_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_translateFormula___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2878_, 0, v_body_2874_);
v___f_2879_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_translateFormula___lam__1___boxed), 8, 1);
lean_closure_set(v___f_2879_, 0, v_body_2874_);
v___x_2896_ = lean_unbox(v_a_2877_);
lean_dec(v_a_2877_);
if (v___x_2896_ == 0)
{
lean_dec_ref(v_body_2874_);
goto v___jp_2880_;
}
else
{
uint8_t v___x_2897_; 
v___x_2897_ = l_Lean_Expr_hasLooseBVars(v_body_2874_);
if (v___x_2897_ == 0)
{
lean_object* v___x_2898_; 
lean_dec_ref(v___f_2879_);
lean_dec_ref(v___f_2878_);
lean_dec(v_binderName_2872_);
v___x_2898_ = lp_vampireReplay_Vampire_translateFormula(v_binderType_2873_, v_a_2838_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_);
if (lean_obj_tag(v___x_2898_) == 0)
{
lean_object* v_a_2899_; lean_object* v___x_2900_; 
v_a_2899_ = lean_ctor_get(v___x_2898_, 0);
lean_inc(v_a_2899_);
lean_dec_ref_known(v___x_2898_, 1);
v___x_2900_ = lp_vampireReplay_Vampire_translateFormula(v_body_2874_, v_a_2838_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_);
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
v___x_2905_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2905_, 0, v_a_2899_);
lean_ctor_set(v___x_2905_, 1, v_a_2901_);
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
lean_dec(v_a_2899_);
return v___x_2900_;
}
}
else
{
lean_dec_ref(v_body_2874_);
return v___x_2898_;
}
}
else
{
lean_dec_ref(v_body_2874_);
goto v___jp_2880_;
}
}
v___jp_2880_:
{
lean_object* v___x_2881_; 
lean_inc_ref(v_binderType_2873_);
v___x_2881_ = lp_vampireReplay_Vampire_isSortType(v_binderType_2873_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_);
if (lean_obj_tag(v___x_2881_) == 0)
{
lean_object* v_a_2882_; uint8_t v___x_2883_; 
v_a_2882_ = lean_ctor_get(v___x_2881_, 0);
lean_inc(v_a_2882_);
lean_dec_ref_known(v___x_2881_, 1);
v___x_2883_ = lean_unbox(v_a_2882_);
lean_dec(v_a_2882_);
if (v___x_2883_ == 0)
{
uint8_t v___x_2884_; lean_object* v___x_2885_; 
lean_dec_ref(v___f_2879_);
v___x_2884_ = 0;
v___x_2885_ = lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Vampire_translateFormula_spec__3___redArg(v_binderName_2872_, v_binderInfo_2875_, v_binderType_2873_, v___f_2878_, v___x_2884_, v_a_2838_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_);
return v___x_2885_;
}
else
{
uint8_t v___x_2886_; lean_object* v___x_2887_; 
lean_dec_ref(v___f_2878_);
v___x_2886_ = 0;
v___x_2887_ = lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Vampire_translateFormula_spec__3___redArg(v_binderName_2872_, v_binderInfo_2875_, v_binderType_2873_, v___f_2879_, v___x_2886_, v_a_2838_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_);
return v___x_2887_;
}
}
else
{
lean_object* v_a_2888_; lean_object* v___x_2890_; uint8_t v_isShared_2891_; uint8_t v_isSharedCheck_2895_; 
lean_dec_ref(v___f_2879_);
lean_dec_ref(v___f_2878_);
lean_dec_ref(v_binderType_2873_);
lean_dec(v_binderName_2872_);
v_a_2888_ = lean_ctor_get(v___x_2881_, 0);
v_isSharedCheck_2895_ = !lean_is_exclusive(v___x_2881_);
if (v_isSharedCheck_2895_ == 0)
{
v___x_2890_ = v___x_2881_;
v_isShared_2891_ = v_isSharedCheck_2895_;
goto v_resetjp_2889_;
}
else
{
lean_inc(v_a_2888_);
lean_dec(v___x_2881_);
v___x_2890_ = lean_box(0);
v_isShared_2891_ = v_isSharedCheck_2895_;
goto v_resetjp_2889_;
}
v_resetjp_2889_:
{
lean_object* v___x_2893_; 
if (v_isShared_2891_ == 0)
{
v___x_2893_ = v___x_2890_;
goto v_reusejp_2892_;
}
else
{
lean_object* v_reuseFailAlloc_2894_; 
v_reuseFailAlloc_2894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2894_, 0, v_a_2888_);
v___x_2893_ = v_reuseFailAlloc_2894_;
goto v_reusejp_2892_;
}
v_reusejp_2892_:
{
return v___x_2893_;
}
}
}
}
}
else
{
lean_object* v_a_2910_; lean_object* v___x_2912_; uint8_t v_isShared_2913_; uint8_t v_isSharedCheck_2917_; 
lean_dec_ref(v_body_2874_);
lean_dec_ref(v_binderType_2873_);
lean_dec(v_binderName_2872_);
v_a_2910_ = lean_ctor_get(v___x_2876_, 0);
v_isSharedCheck_2917_ = !lean_is_exclusive(v___x_2876_);
if (v_isSharedCheck_2917_ == 0)
{
v___x_2912_ = v___x_2876_;
v_isShared_2913_ = v_isSharedCheck_2917_;
goto v_resetjp_2911_;
}
else
{
lean_inc(v_a_2910_);
lean_dec(v___x_2876_);
v___x_2912_ = lean_box(0);
v_isShared_2913_ = v_isSharedCheck_2917_;
goto v_resetjp_2911_;
}
v_resetjp_2911_:
{
lean_object* v___x_2915_; 
if (v_isShared_2913_ == 0)
{
v___x_2915_ = v___x_2912_;
goto v_reusejp_2914_;
}
else
{
lean_object* v_reuseFailAlloc_2916_; 
v_reuseFailAlloc_2916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2916_, 0, v_a_2910_);
v___x_2915_ = v_reuseFailAlloc_2916_;
goto v_reusejp_2914_;
}
v_reusejp_2914_:
{
return v___x_2915_;
}
}
}
}
default: 
{
lean_object* v___x_2918_; 
lean_inc(v_a_2845_);
v___x_2918_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_a_2845_, v_a_2840_);
if (lean_obj_tag(v___x_2918_) == 0)
{
lean_object* v_a_2919_; lean_object* v___x_2921_; uint8_t v_isShared_2922_; uint8_t v_isSharedCheck_3126_; 
v_a_2919_ = lean_ctor_get(v___x_2918_, 0);
v_isSharedCheck_3126_ = !lean_is_exclusive(v___x_2918_);
if (v_isSharedCheck_3126_ == 0)
{
v___x_2921_ = v___x_2918_;
v_isShared_2922_ = v_isSharedCheck_3126_;
goto v_resetjp_2920_;
}
else
{
lean_inc(v_a_2919_);
lean_dec(v___x_2918_);
v___x_2921_ = lean_box(0);
v_isShared_2922_ = v_isSharedCheck_3126_;
goto v_resetjp_2920_;
}
v_resetjp_2920_:
{
lean_object* v___x_2923_; lean_object* v___x_2924_; uint8_t v___x_2925_; 
v___x_2923_ = l_Lean_Expr_cleanupAnnotations(v_a_2919_);
v___x_2924_ = ((lean_object*)(lp_vampireReplay_Vampire_translateFormula___closed__1));
v___x_2925_ = l_Lean_Expr_isConstOf(v___x_2923_, v___x_2924_);
if (v___x_2925_ == 0)
{
lean_object* v___x_2926_; uint8_t v___x_2927_; 
v___x_2926_ = ((lean_object*)(lp_vampireReplay_Vampire_translateFormula___closed__3));
v___x_2927_ = l_Lean_Expr_isConstOf(v___x_2923_, v___x_2926_);
if (v___x_2927_ == 0)
{
uint8_t v___x_2928_; 
lean_del_object(v___x_2921_);
v___x_2928_ = l_Lean_Expr_isApp(v___x_2923_);
if (v___x_2928_ == 0)
{
lean_dec_ref(v___x_2923_);
v___y_2847_ = v_a_2838_;
v___y_2848_ = v_a_2839_;
v___y_2849_ = v_a_2840_;
v___y_2850_ = v_a_2841_;
v___y_2851_ = v_a_2842_;
goto v___jp_2846_;
}
else
{
lean_object* v_arg_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; uint8_t v___x_2932_; 
v_arg_2929_ = lean_ctor_get(v___x_2923_, 1);
lean_inc_ref(v_arg_2929_);
v___x_2930_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2923_);
v___x_2931_ = ((lean_object*)(lp_vampireReplay_Vampire_translateFormula___closed__5));
v___x_2932_ = l_Lean_Expr_isConstOf(v___x_2930_, v___x_2931_);
if (v___x_2932_ == 0)
{
uint8_t v___x_2933_; 
v___x_2933_ = l_Lean_Expr_isApp(v___x_2930_);
if (v___x_2933_ == 0)
{
lean_dec_ref(v___x_2930_);
lean_dec_ref(v_arg_2929_);
v___y_2847_ = v_a_2838_;
v___y_2848_ = v_a_2839_;
v___y_2849_ = v_a_2840_;
v___y_2850_ = v_a_2841_;
v___y_2851_ = v_a_2842_;
goto v___jp_2846_;
}
else
{
lean_object* v_arg_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; uint8_t v___x_2937_; 
v_arg_2934_ = lean_ctor_get(v___x_2930_, 1);
lean_inc_ref(v_arg_2934_);
v___x_2935_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2930_);
v___x_2936_ = ((lean_object*)(lp_vampireReplay_Vampire_translateFormula___closed__7));
v___x_2937_ = l_Lean_Expr_isConstOf(v___x_2935_, v___x_2936_);
if (v___x_2937_ == 0)
{
lean_object* v___x_2938_; uint8_t v___x_2939_; 
v___x_2938_ = ((lean_object*)(lp_vampireReplay_Vampire_translateFormula___closed__9));
v___x_2939_ = l_Lean_Expr_isConstOf(v___x_2935_, v___x_2938_);
if (v___x_2939_ == 0)
{
lean_object* v___x_2940_; uint8_t v___x_2941_; 
v___x_2940_ = ((lean_object*)(lp_vampireReplay_Vampire_translateFormula___closed__11));
v___x_2941_ = l_Lean_Expr_isConstOf(v___x_2935_, v___x_2940_);
if (v___x_2941_ == 0)
{
lean_object* v___x_2942_; uint8_t v___x_2943_; 
v___x_2942_ = ((lean_object*)(lp_vampireReplay_Vampire_translateFormula___closed__13));
v___x_2943_ = l_Lean_Expr_isConstOf(v___x_2935_, v___x_2942_);
if (v___x_2943_ == 0)
{
uint8_t v___x_2944_; 
v___x_2944_ = l_Lean_Expr_isApp(v___x_2935_);
if (v___x_2944_ == 0)
{
lean_dec_ref(v___x_2935_);
lean_dec_ref(v_arg_2934_);
lean_dec_ref(v_arg_2929_);
v___y_2847_ = v_a_2838_;
v___y_2848_ = v_a_2839_;
v___y_2849_ = v_a_2840_;
v___y_2850_ = v_a_2841_;
v___y_2851_ = v_a_2842_;
goto v___jp_2846_;
}
else
{
lean_object* v_arg_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; uint8_t v___x_2948_; 
v_arg_2945_ = lean_ctor_get(v___x_2935_, 1);
lean_inc_ref(v_arg_2945_);
v___x_2946_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2935_);
v___x_2947_ = ((lean_object*)(lp_vampireReplay_Vampire_translateFormula___closed__15));
v___x_2948_ = l_Lean_Expr_isConstOf(v___x_2946_, v___x_2947_);
if (v___x_2948_ == 0)
{
lean_object* v___x_2949_; uint8_t v___x_2950_; 
v___x_2949_ = ((lean_object*)(lp_vampireReplay_Vampire_translateFormula___closed__17));
v___x_2950_ = l_Lean_Expr_isConstOf(v___x_2946_, v___x_2949_);
if (v___x_2950_ == 0)
{
uint8_t v___x_2951_; 
lean_dec_ref(v_arg_2945_);
v___x_2951_ = l_Lean_Expr_isApp(v___x_2946_);
if (v___x_2951_ == 0)
{
lean_dec_ref(v___x_2946_);
lean_dec_ref(v_arg_2934_);
lean_dec_ref(v_arg_2929_);
v___y_2847_ = v_a_2838_;
v___y_2848_ = v_a_2839_;
v___y_2849_ = v_a_2840_;
v___y_2850_ = v_a_2841_;
v___y_2851_ = v_a_2842_;
goto v___jp_2846_;
}
else
{
lean_object* v___x_2952_; lean_object* v___x_2953_; uint8_t v___x_2954_; 
v___x_2952_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2946_);
v___x_2953_ = ((lean_object*)(lp_vampireReplay_Vampire_translateFormula___closed__20));
v___x_2954_ = l_Lean_Expr_isConstOf(v___x_2952_, v___x_2953_);
if (v___x_2954_ == 0)
{
lean_object* v___x_2955_; uint8_t v___x_2956_; 
v___x_2955_ = ((lean_object*)(lp_vampireReplay_Vampire_translateFormula___closed__23));
v___x_2956_ = l_Lean_Expr_isConstOf(v___x_2952_, v___x_2955_);
if (v___x_2956_ == 0)
{
lean_object* v___x_2957_; uint8_t v___x_2958_; 
v___x_2957_ = ((lean_object*)(lp_vampireReplay_Vampire_translateFormula___closed__26));
v___x_2958_ = l_Lean_Expr_isConstOf(v___x_2952_, v___x_2957_);
if (v___x_2958_ == 0)
{
lean_object* v___x_2959_; uint8_t v___x_2960_; 
v___x_2959_ = ((lean_object*)(lp_vampireReplay_Vampire_translateFormula___closed__29));
v___x_2960_ = l_Lean_Expr_isConstOf(v___x_2952_, v___x_2959_);
lean_dec_ref(v___x_2952_);
if (v___x_2960_ == 0)
{
lean_dec_ref(v_arg_2934_);
lean_dec_ref(v_arg_2929_);
v___y_2847_ = v_a_2838_;
v___y_2848_ = v_a_2839_;
v___y_2849_ = v_a_2840_;
v___y_2850_ = v_a_2841_;
v___y_2851_ = v_a_2842_;
goto v___jp_2846_;
}
else
{
lean_object* v___x_2961_; lean_object* v___x_2962_; 
v___x_2961_ = ((lean_object*)(lp_vampireReplay_Vampire_translateFormula___closed__30));
v___x_2962_ = lp_vampireReplay_Vampire_arithmeticAtom(v___x_2961_, v_arg_2934_, v_arg_2929_, v_a_2845_, v_a_2838_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_);
return v___x_2962_;
}
}
else
{
lean_object* v___x_2963_; lean_object* v___x_2964_; 
lean_dec_ref(v___x_2952_);
v___x_2963_ = ((lean_object*)(lp_vampireReplay_Vampire_translateFormula___closed__31));
v___x_2964_ = lp_vampireReplay_Vampire_arithmeticAtom(v___x_2963_, v_arg_2934_, v_arg_2929_, v_a_2845_, v_a_2838_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_);
return v___x_2964_;
}
}
else
{
lean_object* v___x_2965_; lean_object* v___x_2966_; 
lean_dec_ref(v___x_2952_);
v___x_2965_ = ((lean_object*)(lp_vampireReplay_Vampire_translateFormula___closed__30));
v___x_2966_ = lp_vampireReplay_Vampire_arithmeticAtom(v___x_2965_, v_arg_2929_, v_arg_2934_, v_a_2845_, v_a_2838_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_);
return v___x_2966_;
}
}
else
{
lean_object* v___x_2967_; lean_object* v___x_2968_; 
lean_dec_ref(v___x_2952_);
v___x_2967_ = ((lean_object*)(lp_vampireReplay_Vampire_translateFormula___closed__31));
v___x_2968_ = lp_vampireReplay_Vampire_arithmeticAtom(v___x_2967_, v_arg_2929_, v_arg_2934_, v_a_2845_, v_a_2838_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_);
return v___x_2968_;
}
}
}
else
{
uint8_t v___x_2969_; 
lean_dec_ref(v___x_2946_);
lean_dec(v_a_2845_);
v___x_2969_ = lp_vampireReplay_Vampire_isPropType(v_arg_2945_);
lean_dec_ref(v_arg_2945_);
if (v___x_2969_ == 0)
{
lean_object* v___x_2970_; 
v___x_2970_ = lp_vampireReplay_Vampire_translateTerm(v_arg_2934_, v_a_2838_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_);
if (lean_obj_tag(v___x_2970_) == 0)
{
lean_object* v_a_2971_; lean_object* v___x_2972_; 
v_a_2971_ = lean_ctor_get(v___x_2970_, 0);
lean_inc(v_a_2971_);
lean_dec_ref_known(v___x_2970_, 1);
v___x_2972_ = lp_vampireReplay_Vampire_translateTerm(v_arg_2929_, v_a_2838_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_);
if (lean_obj_tag(v___x_2972_) == 0)
{
lean_object* v_a_2973_; lean_object* v___x_2975_; uint8_t v_isShared_2976_; uint8_t v_isSharedCheck_2981_; 
v_a_2973_ = lean_ctor_get(v___x_2972_, 0);
v_isSharedCheck_2981_ = !lean_is_exclusive(v___x_2972_);
if (v_isSharedCheck_2981_ == 0)
{
v___x_2975_ = v___x_2972_;
v_isShared_2976_ = v_isSharedCheck_2981_;
goto v_resetjp_2974_;
}
else
{
lean_inc(v_a_2973_);
lean_dec(v___x_2972_);
v___x_2975_ = lean_box(0);
v_isShared_2976_ = v_isSharedCheck_2981_;
goto v_resetjp_2974_;
}
v_resetjp_2974_:
{
lean_object* v___x_2977_; lean_object* v___x_2979_; 
v___x_2977_ = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(v___x_2977_, 0, v_a_2971_);
lean_ctor_set(v___x_2977_, 1, v_a_2973_);
lean_ctor_set_uint8(v___x_2977_, sizeof(void*)*2, v___x_2950_);
if (v_isShared_2976_ == 0)
{
lean_ctor_set(v___x_2975_, 0, v___x_2977_);
v___x_2979_ = v___x_2975_;
goto v_reusejp_2978_;
}
else
{
lean_object* v_reuseFailAlloc_2980_; 
v_reuseFailAlloc_2980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2980_, 0, v___x_2977_);
v___x_2979_ = v_reuseFailAlloc_2980_;
goto v_reusejp_2978_;
}
v_reusejp_2978_:
{
return v___x_2979_;
}
}
}
else
{
lean_object* v_a_2982_; lean_object* v___x_2984_; uint8_t v_isShared_2985_; uint8_t v_isSharedCheck_2989_; 
lean_dec(v_a_2971_);
v_a_2982_ = lean_ctor_get(v___x_2972_, 0);
v_isSharedCheck_2989_ = !lean_is_exclusive(v___x_2972_);
if (v_isSharedCheck_2989_ == 0)
{
v___x_2984_ = v___x_2972_;
v_isShared_2985_ = v_isSharedCheck_2989_;
goto v_resetjp_2983_;
}
else
{
lean_inc(v_a_2982_);
lean_dec(v___x_2972_);
v___x_2984_ = lean_box(0);
v_isShared_2985_ = v_isSharedCheck_2989_;
goto v_resetjp_2983_;
}
v_resetjp_2983_:
{
lean_object* v___x_2987_; 
if (v_isShared_2985_ == 0)
{
v___x_2987_ = v___x_2984_;
goto v_reusejp_2986_;
}
else
{
lean_object* v_reuseFailAlloc_2988_; 
v_reuseFailAlloc_2988_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2988_, 0, v_a_2982_);
v___x_2987_ = v_reuseFailAlloc_2988_;
goto v_reusejp_2986_;
}
v_reusejp_2986_:
{
return v___x_2987_;
}
}
}
}
else
{
lean_object* v_a_2990_; lean_object* v___x_2992_; uint8_t v_isShared_2993_; uint8_t v_isSharedCheck_2997_; 
lean_dec_ref(v_arg_2929_);
v_a_2990_ = lean_ctor_get(v___x_2970_, 0);
v_isSharedCheck_2997_ = !lean_is_exclusive(v___x_2970_);
if (v_isSharedCheck_2997_ == 0)
{
v___x_2992_ = v___x_2970_;
v_isShared_2993_ = v_isSharedCheck_2997_;
goto v_resetjp_2991_;
}
else
{
lean_inc(v_a_2990_);
lean_dec(v___x_2970_);
v___x_2992_ = lean_box(0);
v_isShared_2993_ = v_isSharedCheck_2997_;
goto v_resetjp_2991_;
}
v_resetjp_2991_:
{
lean_object* v___x_2995_; 
if (v_isShared_2993_ == 0)
{
v___x_2995_ = v___x_2992_;
goto v_reusejp_2994_;
}
else
{
lean_object* v_reuseFailAlloc_2996_; 
v_reuseFailAlloc_2996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2996_, 0, v_a_2990_);
v___x_2995_ = v_reuseFailAlloc_2996_;
goto v_reusejp_2994_;
}
v_reusejp_2994_:
{
return v___x_2995_;
}
}
}
}
else
{
lean_object* v___x_2998_; 
v___x_2998_ = lp_vampireReplay_Vampire_translateFormula(v_arg_2934_, v_a_2838_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_);
if (lean_obj_tag(v___x_2998_) == 0)
{
lean_object* v_a_2999_; lean_object* v___x_3000_; 
v_a_2999_ = lean_ctor_get(v___x_2998_, 0);
lean_inc(v_a_2999_);
lean_dec_ref_known(v___x_2998_, 1);
v___x_3000_ = lp_vampireReplay_Vampire_translateFormula(v_arg_2929_, v_a_2838_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_);
if (lean_obj_tag(v___x_3000_) == 0)
{
lean_object* v_a_3001_; lean_object* v___x_3003_; uint8_t v_isShared_3004_; uint8_t v_isSharedCheck_3009_; 
v_a_3001_ = lean_ctor_get(v___x_3000_, 0);
v_isSharedCheck_3009_ = !lean_is_exclusive(v___x_3000_);
if (v_isSharedCheck_3009_ == 0)
{
v___x_3003_ = v___x_3000_;
v_isShared_3004_ = v_isSharedCheck_3009_;
goto v_resetjp_3002_;
}
else
{
lean_inc(v_a_3001_);
lean_dec(v___x_3000_);
v___x_3003_ = lean_box(0);
v_isShared_3004_ = v_isSharedCheck_3009_;
goto v_resetjp_3002_;
}
v_resetjp_3002_:
{
lean_object* v___x_3005_; lean_object* v___x_3007_; 
v___x_3005_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_3005_, 0, v_a_2999_);
lean_ctor_set(v___x_3005_, 1, v_a_3001_);
if (v_isShared_3004_ == 0)
{
lean_ctor_set(v___x_3003_, 0, v___x_3005_);
v___x_3007_ = v___x_3003_;
goto v_reusejp_3006_;
}
else
{
lean_object* v_reuseFailAlloc_3008_; 
v_reuseFailAlloc_3008_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3008_, 0, v___x_3005_);
v___x_3007_ = v_reuseFailAlloc_3008_;
goto v_reusejp_3006_;
}
v_reusejp_3006_:
{
return v___x_3007_;
}
}
}
else
{
lean_dec(v_a_2999_);
return v___x_3000_;
}
}
else
{
lean_dec_ref(v_arg_2929_);
return v___x_2998_;
}
}
}
}
else
{
uint8_t v___x_3010_; 
lean_dec_ref(v___x_2946_);
lean_dec(v_a_2845_);
v___x_3010_ = lp_vampireReplay_Vampire_isPropType(v_arg_2945_);
lean_dec_ref(v_arg_2945_);
if (v___x_3010_ == 0)
{
lean_object* v___x_3011_; 
v___x_3011_ = lp_vampireReplay_Vampire_translateTerm(v_arg_2934_, v_a_2838_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_);
if (lean_obj_tag(v___x_3011_) == 0)
{
lean_object* v_a_3012_; lean_object* v___x_3013_; 
v_a_3012_ = lean_ctor_get(v___x_3011_, 0);
lean_inc(v_a_3012_);
lean_dec_ref_known(v___x_3011_, 1);
v___x_3013_ = lp_vampireReplay_Vampire_translateTerm(v_arg_2929_, v_a_2838_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_);
if (lean_obj_tag(v___x_3013_) == 0)
{
lean_object* v_a_3014_; lean_object* v___x_3016_; uint8_t v_isShared_3017_; uint8_t v_isSharedCheck_3022_; 
v_a_3014_ = lean_ctor_get(v___x_3013_, 0);
v_isSharedCheck_3022_ = !lean_is_exclusive(v___x_3013_);
if (v_isSharedCheck_3022_ == 0)
{
v___x_3016_ = v___x_3013_;
v_isShared_3017_ = v_isSharedCheck_3022_;
goto v_resetjp_3015_;
}
else
{
lean_inc(v_a_3014_);
lean_dec(v___x_3013_);
v___x_3016_ = lean_box(0);
v_isShared_3017_ = v_isSharedCheck_3022_;
goto v_resetjp_3015_;
}
v_resetjp_3015_:
{
lean_object* v___x_3018_; lean_object* v___x_3020_; 
v___x_3018_ = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(v___x_3018_, 0, v_a_3012_);
lean_ctor_set(v___x_3018_, 1, v_a_3014_);
lean_ctor_set_uint8(v___x_3018_, sizeof(void*)*2, v___x_3010_);
if (v_isShared_3017_ == 0)
{
lean_ctor_set(v___x_3016_, 0, v___x_3018_);
v___x_3020_ = v___x_3016_;
goto v_reusejp_3019_;
}
else
{
lean_object* v_reuseFailAlloc_3021_; 
v_reuseFailAlloc_3021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3021_, 0, v___x_3018_);
v___x_3020_ = v_reuseFailAlloc_3021_;
goto v_reusejp_3019_;
}
v_reusejp_3019_:
{
return v___x_3020_;
}
}
}
else
{
lean_object* v_a_3023_; lean_object* v___x_3025_; uint8_t v_isShared_3026_; uint8_t v_isSharedCheck_3030_; 
lean_dec(v_a_3012_);
v_a_3023_ = lean_ctor_get(v___x_3013_, 0);
v_isSharedCheck_3030_ = !lean_is_exclusive(v___x_3013_);
if (v_isSharedCheck_3030_ == 0)
{
v___x_3025_ = v___x_3013_;
v_isShared_3026_ = v_isSharedCheck_3030_;
goto v_resetjp_3024_;
}
else
{
lean_inc(v_a_3023_);
lean_dec(v___x_3013_);
v___x_3025_ = lean_box(0);
v_isShared_3026_ = v_isSharedCheck_3030_;
goto v_resetjp_3024_;
}
v_resetjp_3024_:
{
lean_object* v___x_3028_; 
if (v_isShared_3026_ == 0)
{
v___x_3028_ = v___x_3025_;
goto v_reusejp_3027_;
}
else
{
lean_object* v_reuseFailAlloc_3029_; 
v_reuseFailAlloc_3029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3029_, 0, v_a_3023_);
v___x_3028_ = v_reuseFailAlloc_3029_;
goto v_reusejp_3027_;
}
v_reusejp_3027_:
{
return v___x_3028_;
}
}
}
}
else
{
lean_object* v_a_3031_; lean_object* v___x_3033_; uint8_t v_isShared_3034_; uint8_t v_isSharedCheck_3038_; 
lean_dec_ref(v_arg_2929_);
v_a_3031_ = lean_ctor_get(v___x_3011_, 0);
v_isSharedCheck_3038_ = !lean_is_exclusive(v___x_3011_);
if (v_isSharedCheck_3038_ == 0)
{
v___x_3033_ = v___x_3011_;
v_isShared_3034_ = v_isSharedCheck_3038_;
goto v_resetjp_3032_;
}
else
{
lean_inc(v_a_3031_);
lean_dec(v___x_3011_);
v___x_3033_ = lean_box(0);
v_isShared_3034_ = v_isSharedCheck_3038_;
goto v_resetjp_3032_;
}
v_resetjp_3032_:
{
lean_object* v___x_3036_; 
if (v_isShared_3034_ == 0)
{
v___x_3036_ = v___x_3033_;
goto v_reusejp_3035_;
}
else
{
lean_object* v_reuseFailAlloc_3037_; 
v_reuseFailAlloc_3037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3037_, 0, v_a_3031_);
v___x_3036_ = v_reuseFailAlloc_3037_;
goto v_reusejp_3035_;
}
v_reusejp_3035_:
{
return v___x_3036_;
}
}
}
}
else
{
lean_object* v___x_3039_; 
v___x_3039_ = lp_vampireReplay_Vampire_translateFormula(v_arg_2934_, v_a_2838_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_);
if (lean_obj_tag(v___x_3039_) == 0)
{
lean_object* v_a_3040_; lean_object* v___x_3042_; uint8_t v_isShared_3043_; uint8_t v_isSharedCheck_3057_; 
v_a_3040_ = lean_ctor_get(v___x_3039_, 0);
v_isSharedCheck_3057_ = !lean_is_exclusive(v___x_3039_);
if (v_isSharedCheck_3057_ == 0)
{
v___x_3042_ = v___x_3039_;
v_isShared_3043_ = v_isSharedCheck_3057_;
goto v_resetjp_3041_;
}
else
{
lean_inc(v_a_3040_);
lean_dec(v___x_3039_);
v___x_3042_ = lean_box(0);
v_isShared_3043_ = v_isSharedCheck_3057_;
goto v_resetjp_3041_;
}
v_resetjp_3041_:
{
lean_object* v___x_3044_; 
v___x_3044_ = lp_vampireReplay_Vampire_translateFormula(v_arg_2929_, v_a_2838_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_);
if (lean_obj_tag(v___x_3044_) == 0)
{
lean_object* v_a_3045_; lean_object* v___x_3047_; uint8_t v_isShared_3048_; uint8_t v_isSharedCheck_3056_; 
v_a_3045_ = lean_ctor_get(v___x_3044_, 0);
v_isSharedCheck_3056_ = !lean_is_exclusive(v___x_3044_);
if (v_isSharedCheck_3056_ == 0)
{
v___x_3047_ = v___x_3044_;
v_isShared_3048_ = v_isSharedCheck_3056_;
goto v_resetjp_3046_;
}
else
{
lean_inc(v_a_3045_);
lean_dec(v___x_3044_);
v___x_3047_ = lean_box(0);
v_isShared_3048_ = v_isSharedCheck_3056_;
goto v_resetjp_3046_;
}
v_resetjp_3046_:
{
lean_object* v___x_3049_; lean_object* v___x_3051_; 
v___x_3049_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_3049_, 0, v_a_3040_);
lean_ctor_set(v___x_3049_, 1, v_a_3045_);
if (v_isShared_3043_ == 0)
{
lean_ctor_set_tag(v___x_3042_, 4);
lean_ctor_set(v___x_3042_, 0, v___x_3049_);
v___x_3051_ = v___x_3042_;
goto v_reusejp_3050_;
}
else
{
lean_object* v_reuseFailAlloc_3055_; 
v_reuseFailAlloc_3055_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3055_, 0, v___x_3049_);
v___x_3051_ = v_reuseFailAlloc_3055_;
goto v_reusejp_3050_;
}
v_reusejp_3050_:
{
lean_object* v___x_3053_; 
if (v_isShared_3048_ == 0)
{
lean_ctor_set(v___x_3047_, 0, v___x_3051_);
v___x_3053_ = v___x_3047_;
goto v_reusejp_3052_;
}
else
{
lean_object* v_reuseFailAlloc_3054_; 
v_reuseFailAlloc_3054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3054_, 0, v___x_3051_);
v___x_3053_ = v_reuseFailAlloc_3054_;
goto v_reusejp_3052_;
}
v_reusejp_3052_:
{
return v___x_3053_;
}
}
}
}
else
{
lean_del_object(v___x_3042_);
lean_dec(v_a_3040_);
return v___x_3044_;
}
}
}
else
{
lean_dec_ref(v_arg_2929_);
return v___x_3039_;
}
}
}
}
}
else
{
lean_object* v___x_3058_; 
lean_dec_ref(v___x_2935_);
lean_dec_ref(v_arg_2934_);
lean_dec_ref(v_arg_2929_);
v___x_3058_ = lp_vampireReplay_Vampire_junctionArgs(v___x_2942_, v_a_2845_, v_a_2838_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_);
if (lean_obj_tag(v___x_3058_) == 0)
{
lean_object* v_a_3059_; lean_object* v___x_3061_; uint8_t v_isShared_3062_; uint8_t v_isSharedCheck_3067_; 
v_a_3059_ = lean_ctor_get(v___x_3058_, 0);
v_isSharedCheck_3067_ = !lean_is_exclusive(v___x_3058_);
if (v_isSharedCheck_3067_ == 0)
{
v___x_3061_ = v___x_3058_;
v_isShared_3062_ = v_isSharedCheck_3067_;
goto v_resetjp_3060_;
}
else
{
lean_inc(v_a_3059_);
lean_dec(v___x_3058_);
v___x_3061_ = lean_box(0);
v_isShared_3062_ = v_isSharedCheck_3067_;
goto v_resetjp_3060_;
}
v_resetjp_3060_:
{
lean_object* v___x_3063_; lean_object* v___x_3065_; 
v___x_3063_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3063_, 0, v_a_3059_);
if (v_isShared_3062_ == 0)
{
lean_ctor_set(v___x_3061_, 0, v___x_3063_);
v___x_3065_ = v___x_3061_;
goto v_reusejp_3064_;
}
else
{
lean_object* v_reuseFailAlloc_3066_; 
v_reuseFailAlloc_3066_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3066_, 0, v___x_3063_);
v___x_3065_ = v_reuseFailAlloc_3066_;
goto v_reusejp_3064_;
}
v_reusejp_3064_:
{
return v___x_3065_;
}
}
}
else
{
lean_object* v_a_3068_; lean_object* v___x_3070_; uint8_t v_isShared_3071_; uint8_t v_isSharedCheck_3075_; 
v_a_3068_ = lean_ctor_get(v___x_3058_, 0);
v_isSharedCheck_3075_ = !lean_is_exclusive(v___x_3058_);
if (v_isSharedCheck_3075_ == 0)
{
v___x_3070_ = v___x_3058_;
v_isShared_3071_ = v_isSharedCheck_3075_;
goto v_resetjp_3069_;
}
else
{
lean_inc(v_a_3068_);
lean_dec(v___x_3058_);
v___x_3070_ = lean_box(0);
v_isShared_3071_ = v_isSharedCheck_3075_;
goto v_resetjp_3069_;
}
v_resetjp_3069_:
{
lean_object* v___x_3073_; 
if (v_isShared_3071_ == 0)
{
v___x_3073_ = v___x_3070_;
goto v_reusejp_3072_;
}
else
{
lean_object* v_reuseFailAlloc_3074_; 
v_reuseFailAlloc_3074_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3074_, 0, v_a_3068_);
v___x_3073_ = v_reuseFailAlloc_3074_;
goto v_reusejp_3072_;
}
v_reusejp_3072_:
{
return v___x_3073_;
}
}
}
}
}
else
{
lean_object* v___x_3076_; 
lean_dec_ref(v___x_2935_);
lean_dec_ref(v_arg_2934_);
lean_dec_ref(v_arg_2929_);
v___x_3076_ = lp_vampireReplay_Vampire_junctionArgs(v___x_2940_, v_a_2845_, v_a_2838_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_);
if (lean_obj_tag(v___x_3076_) == 0)
{
lean_object* v_a_3077_; lean_object* v___x_3079_; uint8_t v_isShared_3080_; uint8_t v_isSharedCheck_3085_; 
v_a_3077_ = lean_ctor_get(v___x_3076_, 0);
v_isSharedCheck_3085_ = !lean_is_exclusive(v___x_3076_);
if (v_isSharedCheck_3085_ == 0)
{
v___x_3079_ = v___x_3076_;
v_isShared_3080_ = v_isSharedCheck_3085_;
goto v_resetjp_3078_;
}
else
{
lean_inc(v_a_3077_);
lean_dec(v___x_3076_);
v___x_3079_ = lean_box(0);
v_isShared_3080_ = v_isSharedCheck_3085_;
goto v_resetjp_3078_;
}
v_resetjp_3078_:
{
lean_object* v___x_3081_; lean_object* v___x_3083_; 
v___x_3081_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_3081_, 0, v_a_3077_);
if (v_isShared_3080_ == 0)
{
lean_ctor_set(v___x_3079_, 0, v___x_3081_);
v___x_3083_ = v___x_3079_;
goto v_reusejp_3082_;
}
else
{
lean_object* v_reuseFailAlloc_3084_; 
v_reuseFailAlloc_3084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3084_, 0, v___x_3081_);
v___x_3083_ = v_reuseFailAlloc_3084_;
goto v_reusejp_3082_;
}
v_reusejp_3082_:
{
return v___x_3083_;
}
}
}
else
{
lean_object* v_a_3086_; lean_object* v___x_3088_; uint8_t v_isShared_3089_; uint8_t v_isSharedCheck_3093_; 
v_a_3086_ = lean_ctor_get(v___x_3076_, 0);
v_isSharedCheck_3093_ = !lean_is_exclusive(v___x_3076_);
if (v_isSharedCheck_3093_ == 0)
{
v___x_3088_ = v___x_3076_;
v_isShared_3089_ = v_isSharedCheck_3093_;
goto v_resetjp_3087_;
}
else
{
lean_inc(v_a_3086_);
lean_dec(v___x_3076_);
v___x_3088_ = lean_box(0);
v_isShared_3089_ = v_isSharedCheck_3093_;
goto v_resetjp_3087_;
}
v_resetjp_3087_:
{
lean_object* v___x_3091_; 
if (v_isShared_3089_ == 0)
{
v___x_3091_ = v___x_3088_;
goto v_reusejp_3090_;
}
else
{
lean_object* v_reuseFailAlloc_3092_; 
v_reuseFailAlloc_3092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3092_, 0, v_a_3086_);
v___x_3091_ = v_reuseFailAlloc_3092_;
goto v_reusejp_3090_;
}
v_reusejp_3090_:
{
return v___x_3091_;
}
}
}
}
}
else
{
lean_object* v___x_3094_; 
lean_dec_ref(v___x_2935_);
lean_dec(v_a_2845_);
v___x_3094_ = lp_vampireReplay_Vampire_translateFormula(v_arg_2934_, v_a_2838_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_);
if (lean_obj_tag(v___x_3094_) == 0)
{
lean_object* v_a_3095_; lean_object* v___x_3096_; 
v_a_3095_ = lean_ctor_get(v___x_3094_, 0);
lean_inc(v_a_3095_);
lean_dec_ref_known(v___x_3094_, 1);
v___x_3096_ = lp_vampireReplay_Vampire_translateFormula(v_arg_2929_, v_a_2838_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_);
if (lean_obj_tag(v___x_3096_) == 0)
{
lean_object* v_a_3097_; lean_object* v___x_3099_; uint8_t v_isShared_3100_; uint8_t v_isSharedCheck_3105_; 
v_a_3097_ = lean_ctor_get(v___x_3096_, 0);
v_isSharedCheck_3105_ = !lean_is_exclusive(v___x_3096_);
if (v_isSharedCheck_3105_ == 0)
{
v___x_3099_ = v___x_3096_;
v_isShared_3100_ = v_isSharedCheck_3105_;
goto v_resetjp_3098_;
}
else
{
lean_inc(v_a_3097_);
lean_dec(v___x_3096_);
v___x_3099_ = lean_box(0);
v_isShared_3100_ = v_isSharedCheck_3105_;
goto v_resetjp_3098_;
}
v_resetjp_3098_:
{
lean_object* v___x_3101_; lean_object* v___x_3103_; 
v___x_3101_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_3101_, 0, v_a_3095_);
lean_ctor_set(v___x_3101_, 1, v_a_3097_);
if (v_isShared_3100_ == 0)
{
lean_ctor_set(v___x_3099_, 0, v___x_3101_);
v___x_3103_ = v___x_3099_;
goto v_reusejp_3102_;
}
else
{
lean_object* v_reuseFailAlloc_3104_; 
v_reuseFailAlloc_3104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3104_, 0, v___x_3101_);
v___x_3103_ = v_reuseFailAlloc_3104_;
goto v_reusejp_3102_;
}
v_reusejp_3102_:
{
return v___x_3103_;
}
}
}
else
{
lean_dec(v_a_3095_);
return v___x_3096_;
}
}
else
{
lean_dec_ref(v_arg_2929_);
return v___x_3094_;
}
}
}
else
{
lean_object* v___f_3106_; lean_object* v___x_3107_; 
lean_dec_ref(v___x_2935_);
lean_dec_ref(v_arg_2934_);
lean_dec(v_a_2845_);
v___f_3106_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_translateFormula___lam__2___boxed), 8, 0);
v___x_3107_ = lp_vampireReplay_Lean_Meta_lambdaTelescope___at___00Vampire_translateFormula_spec__4___redArg(v_arg_2929_, v___f_3106_, v___x_2932_, v_a_2838_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_);
return v___x_3107_;
}
}
}
else
{
lean_object* v___x_3108_; 
lean_dec_ref(v___x_2930_);
lean_dec(v_a_2845_);
v___x_3108_ = lp_vampireReplay_Vampire_translateFormula(v_arg_2929_, v_a_2838_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_);
if (lean_obj_tag(v___x_3108_) == 0)
{
lean_object* v_a_3109_; lean_object* v___x_3111_; uint8_t v_isShared_3112_; uint8_t v_isSharedCheck_3117_; 
v_a_3109_ = lean_ctor_get(v___x_3108_, 0);
v_isSharedCheck_3117_ = !lean_is_exclusive(v___x_3108_);
if (v_isSharedCheck_3117_ == 0)
{
v___x_3111_ = v___x_3108_;
v_isShared_3112_ = v_isSharedCheck_3117_;
goto v_resetjp_3110_;
}
else
{
lean_inc(v_a_3109_);
lean_dec(v___x_3108_);
v___x_3111_ = lean_box(0);
v_isShared_3112_ = v_isSharedCheck_3117_;
goto v_resetjp_3110_;
}
v_resetjp_3110_:
{
lean_object* v___x_3113_; lean_object* v___x_3115_; 
v___x_3113_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3113_, 0, v_a_3109_);
if (v_isShared_3112_ == 0)
{
lean_ctor_set(v___x_3111_, 0, v___x_3113_);
v___x_3115_ = v___x_3111_;
goto v_reusejp_3114_;
}
else
{
lean_object* v_reuseFailAlloc_3116_; 
v_reuseFailAlloc_3116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3116_, 0, v___x_3113_);
v___x_3115_ = v_reuseFailAlloc_3116_;
goto v_reusejp_3114_;
}
v_reusejp_3114_:
{
return v___x_3115_;
}
}
}
else
{
return v___x_3108_;
}
}
}
}
else
{
lean_object* v___x_3118_; lean_object* v___x_3120_; 
lean_dec_ref(v___x_2923_);
lean_dec(v_a_2845_);
v___x_3118_ = lean_box(0);
if (v_isShared_2922_ == 0)
{
lean_ctor_set(v___x_2921_, 0, v___x_3118_);
v___x_3120_ = v___x_2921_;
goto v_reusejp_3119_;
}
else
{
lean_object* v_reuseFailAlloc_3121_; 
v_reuseFailAlloc_3121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3121_, 0, v___x_3118_);
v___x_3120_ = v_reuseFailAlloc_3121_;
goto v_reusejp_3119_;
}
v_reusejp_3119_:
{
return v___x_3120_;
}
}
}
else
{
lean_object* v___x_3122_; lean_object* v___x_3124_; 
lean_dec_ref(v___x_2923_);
lean_dec(v_a_2845_);
v___x_3122_ = lean_box(1);
if (v_isShared_2922_ == 0)
{
lean_ctor_set(v___x_2921_, 0, v___x_3122_);
v___x_3124_ = v___x_2921_;
goto v_reusejp_3123_;
}
else
{
lean_object* v_reuseFailAlloc_3125_; 
v_reuseFailAlloc_3125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3125_, 0, v___x_3122_);
v___x_3124_ = v_reuseFailAlloc_3125_;
goto v_reusejp_3123_;
}
v_reusejp_3123_:
{
return v___x_3124_;
}
}
}
}
else
{
lean_object* v_a_3127_; lean_object* v___x_3129_; uint8_t v_isShared_3130_; uint8_t v_isSharedCheck_3134_; 
lean_dec(v_a_2845_);
v_a_3127_ = lean_ctor_get(v___x_2918_, 0);
v_isSharedCheck_3134_ = !lean_is_exclusive(v___x_2918_);
if (v_isSharedCheck_3134_ == 0)
{
v___x_3129_ = v___x_2918_;
v_isShared_3130_ = v_isSharedCheck_3134_;
goto v_resetjp_3128_;
}
else
{
lean_inc(v_a_3127_);
lean_dec(v___x_2918_);
v___x_3129_ = lean_box(0);
v_isShared_3130_ = v_isSharedCheck_3134_;
goto v_resetjp_3128_;
}
v_resetjp_3128_:
{
lean_object* v___x_3132_; 
if (v_isShared_3130_ == 0)
{
v___x_3132_ = v___x_3129_;
goto v_reusejp_3131_;
}
else
{
lean_object* v_reuseFailAlloc_3133_; 
v_reuseFailAlloc_3133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3133_, 0, v_a_3127_);
v___x_3132_ = v_reuseFailAlloc_3133_;
goto v_reusejp_3131_;
}
v_reusejp_3131_:
{
return v___x_3132_;
}
}
}
}
}
v___jp_2846_:
{
lean_object* v___x_2852_; 
v___x_2852_ = lp_vampireReplay_Vampire_translateTerm(v_a_2845_, v___y_2847_, v___y_2848_, v___y_2849_, v___y_2850_, v___y_2851_);
if (lean_obj_tag(v___x_2852_) == 0)
{
lean_object* v_a_2853_; lean_object* v___x_2855_; uint8_t v_isShared_2856_; uint8_t v_isSharedCheck_2861_; 
v_a_2853_ = lean_ctor_get(v___x_2852_, 0);
v_isSharedCheck_2861_ = !lean_is_exclusive(v___x_2852_);
if (v_isSharedCheck_2861_ == 0)
{
v___x_2855_ = v___x_2852_;
v_isShared_2856_ = v_isSharedCheck_2861_;
goto v_resetjp_2854_;
}
else
{
lean_inc(v_a_2853_);
lean_dec(v___x_2852_);
v___x_2855_ = lean_box(0);
v_isShared_2856_ = v_isSharedCheck_2861_;
goto v_resetjp_2854_;
}
v_resetjp_2854_:
{
lean_object* v___x_2857_; lean_object* v___x_2859_; 
v___x_2857_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2857_, 0, v_a_2853_);
if (v_isShared_2856_ == 0)
{
lean_ctor_set(v___x_2855_, 0, v___x_2857_);
v___x_2859_ = v___x_2855_;
goto v_reusejp_2858_;
}
else
{
lean_object* v_reuseFailAlloc_2860_; 
v_reuseFailAlloc_2860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2860_, 0, v___x_2857_);
v___x_2859_ = v_reuseFailAlloc_2860_;
goto v_reusejp_2858_;
}
v_reusejp_2858_:
{
return v___x_2859_;
}
}
}
else
{
lean_object* v_a_2862_; lean_object* v___x_2864_; uint8_t v_isShared_2865_; uint8_t v_isSharedCheck_2869_; 
v_a_2862_ = lean_ctor_get(v___x_2852_, 0);
v_isSharedCheck_2869_ = !lean_is_exclusive(v___x_2852_);
if (v_isSharedCheck_2869_ == 0)
{
v___x_2864_ = v___x_2852_;
v_isShared_2865_ = v_isSharedCheck_2869_;
goto v_resetjp_2863_;
}
else
{
lean_inc(v_a_2862_);
lean_dec(v___x_2852_);
v___x_2864_ = lean_box(0);
v_isShared_2865_ = v_isSharedCheck_2869_;
goto v_resetjp_2863_;
}
v_resetjp_2863_:
{
lean_object* v___x_2867_; 
if (v_isShared_2865_ == 0)
{
v___x_2867_ = v___x_2864_;
goto v_reusejp_2866_;
}
else
{
lean_object* v_reuseFailAlloc_2868_; 
v_reuseFailAlloc_2868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2868_, 0, v_a_2862_);
v___x_2867_ = v_reuseFailAlloc_2868_;
goto v_reusejp_2866_;
}
v_reusejp_2866_:
{
return v___x_2867_;
}
}
}
}
}
else
{
lean_object* v_a_3135_; lean_object* v___x_3137_; uint8_t v_isShared_3138_; uint8_t v_isSharedCheck_3142_; 
v_a_3135_ = lean_ctor_get(v___x_2844_, 0);
v_isSharedCheck_3142_ = !lean_is_exclusive(v___x_2844_);
if (v_isSharedCheck_3142_ == 0)
{
v___x_3137_ = v___x_2844_;
v_isShared_3138_ = v_isSharedCheck_3142_;
goto v_resetjp_3136_;
}
else
{
lean_inc(v_a_3135_);
lean_dec(v___x_2844_);
v___x_3137_ = lean_box(0);
v_isShared_3138_ = v_isSharedCheck_3142_;
goto v_resetjp_3136_;
}
v_resetjp_3136_:
{
lean_object* v___x_3140_; 
if (v_isShared_3138_ == 0)
{
v___x_3140_ = v___x_3137_;
goto v_reusejp_3139_;
}
else
{
lean_object* v_reuseFailAlloc_3141_; 
v_reuseFailAlloc_3141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3141_, 0, v_a_3135_);
v___x_3140_ = v_reuseFailAlloc_3141_;
goto v_reusejp_3139_;
}
v_reusejp_3139_:
{
return v___x_3140_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_translateFormula___lam__0(lean_object* v_body_3143_, lean_object* v_x_3144_, lean_object* v___y_3145_, lean_object* v___y_3146_, lean_object* v___y_3147_, lean_object* v___y_3148_, lean_object* v___y_3149_){
_start:
{
lean_object* v___x_3151_; lean_object* v___x_3152_; 
v___x_3151_ = lean_expr_instantiate1(v_body_3143_, v_x_3144_);
v___x_3152_ = lp_vampireReplay_Vampire_translateFormula(v___x_3151_, v___y_3145_, v___y_3146_, v___y_3147_, v___y_3148_, v___y_3149_);
return v___x_3152_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_junctionArgs___boxed(lean_object* v_fn_3153_, lean_object* v_e_3154_, lean_object* v_a_3155_, lean_object* v_a_3156_, lean_object* v_a_3157_, lean_object* v_a_3158_, lean_object* v_a_3159_, lean_object* v_a_3160_){
_start:
{
lean_object* v_res_3161_; 
v_res_3161_ = lp_vampireReplay_Vampire_junctionArgs(v_fn_3153_, v_e_3154_, v_a_3155_, v_a_3156_, v_a_3157_, v_a_3158_, v_a_3159_);
lean_dec(v_a_3159_);
lean_dec_ref(v_a_3158_);
lean_dec(v_a_3157_);
lean_dec_ref(v_a_3156_);
lean_dec(v_a_3155_);
lean_dec(v_fn_3153_);
return v_res_3161_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_junctionArgs_spec__0___boxed(lean_object* v_sz_3162_, lean_object* v_i_3163_, lean_object* v_bs_3164_, lean_object* v___y_3165_, lean_object* v___y_3166_, lean_object* v___y_3167_, lean_object* v___y_3168_, lean_object* v___y_3169_, lean_object* v___y_3170_){
_start:
{
size_t v_sz_boxed_3171_; size_t v_i_boxed_3172_; lean_object* v_res_3173_; 
v_sz_boxed_3171_ = lean_unbox_usize(v_sz_3162_);
lean_dec(v_sz_3162_);
v_i_boxed_3172_ = lean_unbox_usize(v_i_3163_);
lean_dec(v_i_3163_);
v_res_3173_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_junctionArgs_spec__0(v_sz_boxed_3171_, v_i_boxed_3172_, v_bs_3164_, v___y_3165_, v___y_3166_, v___y_3167_, v___y_3168_, v___y_3169_);
lean_dec(v___y_3169_);
lean_dec_ref(v___y_3168_);
lean_dec(v___y_3167_);
lean_dec_ref(v___y_3166_);
lean_dec(v___y_3165_);
return v_res_3173_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_translateFormula___boxed(lean_object* v_e_3174_, lean_object* v_a_3175_, lean_object* v_a_3176_, lean_object* v_a_3177_, lean_object* v_a_3178_, lean_object* v_a_3179_, lean_object* v_a_3180_){
_start:
{
lean_object* v_res_3181_; 
v_res_3181_ = lp_vampireReplay_Vampire_translateFormula(v_e_3174_, v_a_3175_, v_a_3176_, v_a_3177_, v_a_3178_, v_a_3179_);
lean_dec(v_a_3179_);
lean_dec_ref(v_a_3178_);
lean_dec(v_a_3177_);
lean_dec_ref(v_a_3176_);
lean_dec(v_a_3175_);
return v_res_3181_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Vampire_translateFormula_spec__3(lean_object* v_00_u03b1_3182_, lean_object* v_name_3183_, uint8_t v_bi_3184_, lean_object* v_type_3185_, lean_object* v_k_3186_, uint8_t v_kind_3187_, lean_object* v___y_3188_, lean_object* v___y_3189_, lean_object* v___y_3190_, lean_object* v___y_3191_, lean_object* v___y_3192_){
_start:
{
lean_object* v___x_3194_; 
v___x_3194_ = lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Vampire_translateFormula_spec__3___redArg(v_name_3183_, v_bi_3184_, v_type_3185_, v_k_3186_, v_kind_3187_, v___y_3188_, v___y_3189_, v___y_3190_, v___y_3191_, v___y_3192_);
return v___x_3194_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Vampire_translateFormula_spec__3___boxed(lean_object* v_00_u03b1_3195_, lean_object* v_name_3196_, lean_object* v_bi_3197_, lean_object* v_type_3198_, lean_object* v_k_3199_, lean_object* v_kind_3200_, lean_object* v___y_3201_, lean_object* v___y_3202_, lean_object* v___y_3203_, lean_object* v___y_3204_, lean_object* v___y_3205_, lean_object* v___y_3206_){
_start:
{
uint8_t v_bi_boxed_3207_; uint8_t v_kind_boxed_3208_; lean_object* v_res_3209_; 
v_bi_boxed_3207_ = lean_unbox(v_bi_3197_);
v_kind_boxed_3208_ = lean_unbox(v_kind_3200_);
v_res_3209_ = lp_vampireReplay_Lean_Meta_withLocalDecl___at___00Vampire_translateFormula_spec__3(v_00_u03b1_3195_, v_name_3196_, v_bi_boxed_3207_, v_type_3198_, v_k_3199_, v_kind_boxed_3208_, v___y_3201_, v___y_3202_, v___y_3203_, v___y_3204_, v___y_3205_);
lean_dec(v___y_3205_);
lean_dec_ref(v___y_3204_);
lean_dec(v___y_3203_);
lean_dec_ref(v___y_3202_);
lean_dec(v___y_3201_);
return v_res_3209_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_lambdaTelescope___at___00Vampire_translateFormula_spec__4(lean_object* v_00_u03b1_3210_, lean_object* v_e_3211_, lean_object* v_k_3212_, uint8_t v_cleanupAnnotations_3213_, lean_object* v___y_3214_, lean_object* v___y_3215_, lean_object* v___y_3216_, lean_object* v___y_3217_, lean_object* v___y_3218_){
_start:
{
lean_object* v___x_3220_; 
v___x_3220_ = lp_vampireReplay_Lean_Meta_lambdaTelescope___at___00Vampire_translateFormula_spec__4___redArg(v_e_3211_, v_k_3212_, v_cleanupAnnotations_3213_, v___y_3214_, v___y_3215_, v___y_3216_, v___y_3217_, v___y_3218_);
return v___x_3220_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_lambdaTelescope___at___00Vampire_translateFormula_spec__4___boxed(lean_object* v_00_u03b1_3221_, lean_object* v_e_3222_, lean_object* v_k_3223_, lean_object* v_cleanupAnnotations_3224_, lean_object* v___y_3225_, lean_object* v___y_3226_, lean_object* v___y_3227_, lean_object* v___y_3228_, lean_object* v___y_3229_, lean_object* v___y_3230_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_3231_; lean_object* v_res_3232_; 
v_cleanupAnnotations_boxed_3231_ = lean_unbox(v_cleanupAnnotations_3224_);
v_res_3232_ = lp_vampireReplay_Lean_Meta_lambdaTelescope___at___00Vampire_translateFormula_spec__4(v_00_u03b1_3221_, v_e_3222_, v_k_3223_, v_cleanupAnnotations_boxed_3231_, v___y_3225_, v___y_3226_, v___y_3227_, v___y_3228_, v___y_3229_);
lean_dec(v___y_3229_);
lean_dec_ref(v___y_3228_);
lean_dec(v___y_3227_);
lean_dec_ref(v___y_3226_);
lean_dec(v___y_3225_);
return v_res_3232_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_translateFormula_spec__2(lean_object* v_as_3233_, size_t v_sz_3234_, size_t v_i_3235_, lean_object* v_b_3236_, lean_object* v___y_3237_, lean_object* v___y_3238_, lean_object* v___y_3239_, lean_object* v___y_3240_, lean_object* v___y_3241_){
_start:
{
lean_object* v___x_3243_; 
v___x_3243_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_translateFormula_spec__2___redArg(v_as_3233_, v_sz_3234_, v_i_3235_, v_b_3236_, v___y_3237_, v___y_3238_, v___y_3240_, v___y_3241_);
return v___x_3243_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_translateFormula_spec__2___boxed(lean_object* v_as_3244_, lean_object* v_sz_3245_, lean_object* v_i_3246_, lean_object* v_b_3247_, lean_object* v___y_3248_, lean_object* v___y_3249_, lean_object* v___y_3250_, lean_object* v___y_3251_, lean_object* v___y_3252_, lean_object* v___y_3253_){
_start:
{
size_t v_sz_boxed_3254_; size_t v_i_boxed_3255_; lean_object* v_res_3256_; 
v_sz_boxed_3254_ = lean_unbox_usize(v_sz_3245_);
lean_dec(v_sz_3245_);
v_i_boxed_3255_ = lean_unbox_usize(v_i_3246_);
lean_dec(v_i_3246_);
v_res_3256_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_translateFormula_spec__2(v_as_3244_, v_sz_boxed_3254_, v_i_boxed_3255_, v_b_3247_, v___y_3248_, v___y_3249_, v___y_3250_, v___y_3251_, v___y_3252_);
lean_dec(v___y_3252_);
lean_dec_ref(v___y_3251_);
lean_dec(v___y_3250_);
lean_dec_ref(v___y_3249_);
lean_dec(v___y_3248_);
lean_dec_ref(v_as_3244_);
return v_res_3256_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Role_ctorIdx(uint8_t v_x_3257_){
_start:
{
if (v_x_3257_ == 0)
{
lean_object* v___x_3258_; 
v___x_3258_ = lean_unsigned_to_nat(0u);
return v___x_3258_;
}
else
{
lean_object* v___x_3259_; 
v___x_3259_ = lean_unsigned_to_nat(1u);
return v___x_3259_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Role_ctorIdx___boxed(lean_object* v_x_3260_){
_start:
{
uint8_t v_x_boxed_3261_; lean_object* v_res_3262_; 
v_x_boxed_3261_ = lean_unbox(v_x_3260_);
v_res_3262_ = lp_vampireReplay_Vampire_Role_ctorIdx(v_x_boxed_3261_);
return v_res_3262_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Role_toCtorIdx(uint8_t v_x_3263_){
_start:
{
lean_object* v___x_3264_; 
v___x_3264_ = lp_vampireReplay_Vampire_Role_ctorIdx(v_x_3263_);
return v___x_3264_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Role_toCtorIdx___boxed(lean_object* v_x_3265_){
_start:
{
uint8_t v_x_4__boxed_3266_; lean_object* v_res_3267_; 
v_x_4__boxed_3266_ = lean_unbox(v_x_3265_);
v_res_3267_ = lp_vampireReplay_Vampire_Role_toCtorIdx(v_x_4__boxed_3266_);
return v_res_3267_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Role_ctorElim___redArg(lean_object* v_k_3268_){
_start:
{
lean_inc(v_k_3268_);
return v_k_3268_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Role_ctorElim___redArg___boxed(lean_object* v_k_3269_){
_start:
{
lean_object* v_res_3270_; 
v_res_3270_ = lp_vampireReplay_Vampire_Role_ctorElim___redArg(v_k_3269_);
lean_dec(v_k_3269_);
return v_res_3270_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Role_ctorElim(lean_object* v_motive_3271_, lean_object* v_ctorIdx_3272_, uint8_t v_t_3273_, lean_object* v_h_3274_, lean_object* v_k_3275_){
_start:
{
lean_inc(v_k_3275_);
return v_k_3275_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Role_ctorElim___boxed(lean_object* v_motive_3276_, lean_object* v_ctorIdx_3277_, lean_object* v_t_3278_, lean_object* v_h_3279_, lean_object* v_k_3280_){
_start:
{
uint8_t v_t_boxed_3281_; lean_object* v_res_3282_; 
v_t_boxed_3281_ = lean_unbox(v_t_3278_);
v_res_3282_ = lp_vampireReplay_Vampire_Role_ctorElim(v_motive_3276_, v_ctorIdx_3277_, v_t_boxed_3281_, v_h_3279_, v_k_3280_);
lean_dec(v_k_3280_);
lean_dec(v_ctorIdx_3277_);
return v_res_3282_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Role_axiom_elim___redArg(lean_object* v_axiom_3283_){
_start:
{
lean_inc(v_axiom_3283_);
return v_axiom_3283_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Role_axiom_elim___redArg___boxed(lean_object* v_axiom_3284_){
_start:
{
lean_object* v_res_3285_; 
v_res_3285_ = lp_vampireReplay_Vampire_Role_axiom_elim___redArg(v_axiom_3284_);
lean_dec(v_axiom_3284_);
return v_res_3285_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Role_axiom_elim(lean_object* v_motive_3286_, uint8_t v_t_3287_, lean_object* v_h_3288_, lean_object* v_axiom_3289_){
_start:
{
lean_inc(v_axiom_3289_);
return v_axiom_3289_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Role_axiom_elim___boxed(lean_object* v_motive_3290_, lean_object* v_t_3291_, lean_object* v_h_3292_, lean_object* v_axiom_3293_){
_start:
{
uint8_t v_t_boxed_3294_; lean_object* v_res_3295_; 
v_t_boxed_3294_ = lean_unbox(v_t_3291_);
v_res_3295_ = lp_vampireReplay_Vampire_Role_axiom_elim(v_motive_3290_, v_t_boxed_3294_, v_h_3292_, v_axiom_3293_);
lean_dec(v_axiom_3293_);
return v_res_3295_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Role_negatedConjecture_elim___redArg(lean_object* v_negatedConjecture_3296_){
_start:
{
lean_inc(v_negatedConjecture_3296_);
return v_negatedConjecture_3296_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Role_negatedConjecture_elim___redArg___boxed(lean_object* v_negatedConjecture_3297_){
_start:
{
lean_object* v_res_3298_; 
v_res_3298_ = lp_vampireReplay_Vampire_Role_negatedConjecture_elim___redArg(v_negatedConjecture_3297_);
lean_dec(v_negatedConjecture_3297_);
return v_res_3298_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Role_negatedConjecture_elim(lean_object* v_motive_3299_, uint8_t v_t_3300_, lean_object* v_h_3301_, lean_object* v_negatedConjecture_3302_){
_start:
{
lean_inc(v_negatedConjecture_3302_);
return v_negatedConjecture_3302_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Role_negatedConjecture_elim___boxed(lean_object* v_motive_3303_, lean_object* v_t_3304_, lean_object* v_h_3305_, lean_object* v_negatedConjecture_3306_){
_start:
{
uint8_t v_t_boxed_3307_; lean_object* v_res_3308_; 
v_t_boxed_3307_ = lean_unbox(v_t_3304_);
v_res_3308_ = lp_vampireReplay_Vampire_Role_negatedConjecture_elim(v_motive_3303_, v_t_boxed_3307_, v_h_3305_, v_negatedConjecture_3306_);
lean_dec(v_negatedConjecture_3306_);
return v_res_3308_;
}
}
static uint8_t _init_lp_vampireReplay_Vampire_instInhabitedRole_default(void){
_start:
{
uint8_t v___x_3309_; 
v___x_3309_ = 0;
return v___x_3309_;
}
}
static uint8_t _init_lp_vampireReplay_Vampire_instInhabitedRole(void){
_start:
{
uint8_t v___x_3310_; 
v___x_3310_ = 0;
return v___x_3310_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_instReprRole_repr___closed__4(void){
_start:
{
lean_object* v___x_3317_; lean_object* v___x_3318_; 
v___x_3317_ = lean_unsigned_to_nat(2u);
v___x_3318_ = lean_nat_to_int(v___x_3317_);
return v___x_3318_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_instReprRole_repr___closed__5(void){
_start:
{
lean_object* v___x_3319_; lean_object* v___x_3320_; 
v___x_3319_ = lean_unsigned_to_nat(1u);
v___x_3320_ = lean_nat_to_int(v___x_3319_);
return v___x_3320_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_instReprRole_repr(uint8_t v_x_3321_, lean_object* v_prec_3322_){
_start:
{
lean_object* v___y_3324_; lean_object* v___y_3331_; 
if (v_x_3321_ == 0)
{
lean_object* v___x_3337_; uint8_t v___x_3338_; 
v___x_3337_ = lean_unsigned_to_nat(1024u);
v___x_3338_ = lean_nat_dec_le(v___x_3337_, v_prec_3322_);
if (v___x_3338_ == 0)
{
lean_object* v___x_3339_; 
v___x_3339_ = lean_obj_once(&lp_vampireReplay_Vampire_instReprRole_repr___closed__4, &lp_vampireReplay_Vampire_instReprRole_repr___closed__4_once, _init_lp_vampireReplay_Vampire_instReprRole_repr___closed__4);
v___y_3324_ = v___x_3339_;
goto v___jp_3323_;
}
else
{
lean_object* v___x_3340_; 
v___x_3340_ = lean_obj_once(&lp_vampireReplay_Vampire_instReprRole_repr___closed__5, &lp_vampireReplay_Vampire_instReprRole_repr___closed__5_once, _init_lp_vampireReplay_Vampire_instReprRole_repr___closed__5);
v___y_3324_ = v___x_3340_;
goto v___jp_3323_;
}
}
else
{
lean_object* v___x_3341_; uint8_t v___x_3342_; 
v___x_3341_ = lean_unsigned_to_nat(1024u);
v___x_3342_ = lean_nat_dec_le(v___x_3341_, v_prec_3322_);
if (v___x_3342_ == 0)
{
lean_object* v___x_3343_; 
v___x_3343_ = lean_obj_once(&lp_vampireReplay_Vampire_instReprRole_repr___closed__4, &lp_vampireReplay_Vampire_instReprRole_repr___closed__4_once, _init_lp_vampireReplay_Vampire_instReprRole_repr___closed__4);
v___y_3331_ = v___x_3343_;
goto v___jp_3330_;
}
else
{
lean_object* v___x_3344_; 
v___x_3344_ = lean_obj_once(&lp_vampireReplay_Vampire_instReprRole_repr___closed__5, &lp_vampireReplay_Vampire_instReprRole_repr___closed__5_once, _init_lp_vampireReplay_Vampire_instReprRole_repr___closed__5);
v___y_3331_ = v___x_3344_;
goto v___jp_3330_;
}
}
v___jp_3323_:
{
lean_object* v___x_3325_; lean_object* v___x_3326_; uint8_t v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; 
v___x_3325_ = ((lean_object*)(lp_vampireReplay_Vampire_instReprRole_repr___closed__1));
lean_inc(v___y_3324_);
v___x_3326_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3326_, 0, v___y_3324_);
lean_ctor_set(v___x_3326_, 1, v___x_3325_);
v___x_3327_ = 0;
v___x_3328_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3328_, 0, v___x_3326_);
lean_ctor_set_uint8(v___x_3328_, sizeof(void*)*1, v___x_3327_);
v___x_3329_ = l_Repr_addAppParen(v___x_3328_, v_prec_3322_);
return v___x_3329_;
}
v___jp_3330_:
{
lean_object* v___x_3332_; lean_object* v___x_3333_; uint8_t v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; 
v___x_3332_ = ((lean_object*)(lp_vampireReplay_Vampire_instReprRole_repr___closed__3));
lean_inc(v___y_3331_);
v___x_3333_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3333_, 0, v___y_3331_);
lean_ctor_set(v___x_3333_, 1, v___x_3332_);
v___x_3334_ = 0;
v___x_3335_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3335_, 0, v___x_3333_);
lean_ctor_set_uint8(v___x_3335_, sizeof(void*)*1, v___x_3334_);
v___x_3336_ = l_Repr_addAppParen(v___x_3335_, v_prec_3322_);
return v___x_3336_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_instReprRole_repr___boxed(lean_object* v_x_3345_, lean_object* v_prec_3346_){
_start:
{
uint8_t v_x_121__boxed_3347_; lean_object* v_res_3348_; 
v_x_121__boxed_3347_ = lean_unbox(v_x_3345_);
v_res_3348_ = lp_vampireReplay_Vampire_instReprRole_repr(v_x_121__boxed_3347_, v_prec_3346_);
lean_dec(v_prec_3346_);
return v_res_3348_;
}
}
LEAN_EXPORT uint8_t lp_vampireReplay_Vampire_instBEqRole_beq(uint8_t v_x_3351_, uint8_t v_y_3352_){
_start:
{
lean_object* v___x_3353_; lean_object* v___x_3354_; uint8_t v___x_3355_; 
v___x_3353_ = lp_vampireReplay_Vampire_Role_ctorIdx(v_x_3351_);
v___x_3354_ = lp_vampireReplay_Vampire_Role_ctorIdx(v_y_3352_);
v___x_3355_ = lean_nat_dec_eq(v___x_3353_, v___x_3354_);
lean_dec(v___x_3354_);
lean_dec(v___x_3353_);
return v___x_3355_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_instBEqRole_beq___boxed(lean_object* v_x_3356_, lean_object* v_y_3357_){
_start:
{
uint8_t v_x_17__boxed_3358_; uint8_t v_y_18__boxed_3359_; uint8_t v_res_3360_; lean_object* v_r_3361_; 
v_x_17__boxed_3358_ = lean_unbox(v_x_3356_);
v_y_18__boxed_3359_ = lean_unbox(v_y_3357_);
v_res_3360_ = lp_vampireReplay_Vampire_instBEqRole_beq(v_x_17__boxed_3358_, v_y_18__boxed_3359_);
v_r_3361_ = lean_box(v_res_3360_);
return v_r_3361_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Role_render(uint8_t v_x_3366_){
_start:
{
if (v_x_3366_ == 0)
{
lean_object* v___x_3367_; 
v___x_3367_ = ((lean_object*)(lp_vampireReplay_Vampire_Role_render___closed__0));
return v___x_3367_;
}
else
{
lean_object* v___x_3368_; 
v___x_3368_ = ((lean_object*)(lp_vampireReplay_Vampire_Role_render___closed__1));
return v___x_3368_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Role_render___boxed(lean_object* v_x_3369_){
_start:
{
uint8_t v_x_22__boxed_3370_; lean_object* v_res_3371_; 
v_x_22__boxed_3370_ = lean_unbox(v_x_3369_);
v_res_3371_ = lp_vampireReplay_Vampire_Role_render(v_x_22__boxed_3370_);
return v_res_3371_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_instInhabitedSymbols_default___closed__0(void){
_start:
{
lean_object* v___x_3372_; lean_object* v___x_3373_; lean_object* v___x_3374_; 
v___x_3372_ = lean_box(0);
v___x_3373_ = lean_unsigned_to_nat(16u);
v___x_3374_ = lean_mk_array(v___x_3373_, v___x_3372_);
return v___x_3374_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_instInhabitedSymbols_default___closed__1(void){
_start:
{
lean_object* v___x_3375_; lean_object* v___x_3376_; lean_object* v___x_3377_; 
v___x_3375_ = lean_obj_once(&lp_vampireReplay_Vampire_instInhabitedSymbols_default___closed__0, &lp_vampireReplay_Vampire_instInhabitedSymbols_default___closed__0_once, _init_lp_vampireReplay_Vampire_instInhabitedSymbols_default___closed__0);
v___x_3376_ = lean_unsigned_to_nat(0u);
v___x_3377_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3377_, 0, v___x_3376_);
lean_ctor_set(v___x_3377_, 1, v___x_3375_);
return v___x_3377_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_instInhabitedSymbols_default___closed__2(void){
_start:
{
lean_object* v___x_3378_; lean_object* v___x_3379_; 
v___x_3378_ = lean_obj_once(&lp_vampireReplay_Vampire_instInhabitedSymbols_default___closed__1, &lp_vampireReplay_Vampire_instInhabitedSymbols_default___closed__1_once, _init_lp_vampireReplay_Vampire_instInhabitedSymbols_default___closed__1);
v___x_3379_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3379_, 0, v___x_3378_);
lean_ctor_set(v___x_3379_, 1, v___x_3378_);
lean_ctor_set(v___x_3379_, 2, v___x_3378_);
return v___x_3379_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_instInhabitedSymbols_default(void){
_start:
{
lean_object* v___x_3380_; 
v___x_3380_ = lean_obj_once(&lp_vampireReplay_Vampire_instInhabitedSymbols_default___closed__2, &lp_vampireReplay_Vampire_instInhabitedSymbols_default___closed__2_once, _init_lp_vampireReplay_Vampire_instInhabitedSymbols_default___closed__2);
return v___x_3380_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_instInhabitedSymbols(void){
_start:
{
lean_object* v___x_3381_; 
v___x_3381_ = lp_vampireReplay_Vampire_instInhabitedSymbols_default;
return v___x_3381_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_AssocList_foldlM___at___00Vampire_problemOf_spec__0(lean_object* v_x_3382_, lean_object* v_x_3383_){
_start:
{
if (lean_obj_tag(v_x_3383_) == 0)
{
return v_x_3382_;
}
else
{
lean_object* v_key_3384_; lean_object* v_value_3385_; lean_object* v_tail_3386_; lean_object* v___x_3387_; 
v_key_3384_ = lean_ctor_get(v_x_3383_, 0);
lean_inc(v_key_3384_);
v_value_3385_ = lean_ctor_get(v_x_3383_, 1);
lean_inc(v_value_3385_);
v_tail_3386_ = lean_ctor_get(v_x_3383_, 2);
lean_inc(v_tail_3386_);
lean_dec_ref_known(v_x_3383_, 3);
v___x_3387_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1___redArg(v_x_3382_, v_value_3385_, v_key_3384_);
v_x_3382_ = v___x_3387_;
v_x_3383_ = v_tail_3386_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_problemOf_spec__1(lean_object* v_as_3389_, size_t v_i_3390_, size_t v_stop_3391_, lean_object* v_b_3392_){
_start:
{
uint8_t v___x_3393_; 
v___x_3393_ = lean_usize_dec_eq(v_i_3390_, v_stop_3391_);
if (v___x_3393_ == 0)
{
lean_object* v___x_3394_; lean_object* v___x_3395_; size_t v___x_3396_; size_t v___x_3397_; 
v___x_3394_ = lean_array_uget_borrowed(v_as_3389_, v_i_3390_);
lean_inc(v___x_3394_);
v___x_3395_ = lp_vampireReplay_Std_DHashMap_Internal_AssocList_foldlM___at___00Vampire_problemOf_spec__0(v_b_3392_, v___x_3394_);
v___x_3396_ = ((size_t)1ULL);
v___x_3397_ = lean_usize_add(v_i_3390_, v___x_3396_);
v_i_3390_ = v___x_3397_;
v_b_3392_ = v___x_3395_;
goto _start;
}
else
{
return v_b_3392_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_problemOf_spec__1___boxed(lean_object* v_as_3399_, lean_object* v_i_3400_, lean_object* v_stop_3401_, lean_object* v_b_3402_){
_start:
{
size_t v_i_boxed_3403_; size_t v_stop_boxed_3404_; lean_object* v_res_3405_; 
v_i_boxed_3403_ = lean_unbox_usize(v_i_3400_);
lean_dec(v_i_3400_);
v_stop_boxed_3404_ = lean_unbox_usize(v_stop_3401_);
lean_dec(v_stop_3401_);
v_res_3405_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_problemOf_spec__1(v_as_3399_, v_i_boxed_3403_, v_stop_boxed_3404_, v_b_3402_);
lean_dec_ref(v_as_3399_);
return v_res_3405_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_problemOf___lam__0(lean_object* v___x_3406_, lean_object* v___x_3407_, lean_object* v_m_3408_){
_start:
{
lean_object* v_buckets_3409_; lean_object* v___x_3411_; uint8_t v_isShared_3412_; uint8_t v_isSharedCheck_3427_; 
v_buckets_3409_ = lean_ctor_get(v_m_3408_, 1);
v_isSharedCheck_3427_ = !lean_is_exclusive(v_m_3408_);
if (v_isSharedCheck_3427_ == 0)
{
lean_object* v_unused_3428_; 
v_unused_3428_ = lean_ctor_get(v_m_3408_, 0);
lean_dec(v_unused_3428_);
v___x_3411_ = v_m_3408_;
v_isShared_3412_ = v_isSharedCheck_3427_;
goto v_resetjp_3410_;
}
else
{
lean_inc(v_buckets_3409_);
lean_dec(v_m_3408_);
v___x_3411_ = lean_box(0);
v_isShared_3412_ = v_isSharedCheck_3427_;
goto v_resetjp_3410_;
}
v_resetjp_3410_:
{
lean_object* v___x_3413_; lean_object* v___x_3414_; lean_object* v___x_3416_; 
v___x_3413_ = lean_box(0);
v___x_3414_ = lean_mk_array(v___x_3406_, v___x_3413_);
lean_inc(v___x_3407_);
if (v_isShared_3412_ == 0)
{
lean_ctor_set(v___x_3411_, 1, v___x_3414_);
lean_ctor_set(v___x_3411_, 0, v___x_3407_);
v___x_3416_ = v___x_3411_;
goto v_reusejp_3415_;
}
else
{
lean_object* v_reuseFailAlloc_3426_; 
v_reuseFailAlloc_3426_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3426_, 0, v___x_3407_);
lean_ctor_set(v_reuseFailAlloc_3426_, 1, v___x_3414_);
v___x_3416_ = v_reuseFailAlloc_3426_;
goto v_reusejp_3415_;
}
v_reusejp_3415_:
{
lean_object* v___x_3417_; uint8_t v___x_3418_; 
v___x_3417_ = lean_array_get_size(v_buckets_3409_);
v___x_3418_ = lean_nat_dec_lt(v___x_3407_, v___x_3417_);
lean_dec(v___x_3407_);
if (v___x_3418_ == 0)
{
lean_dec_ref(v_buckets_3409_);
return v___x_3416_;
}
else
{
uint8_t v___x_3419_; 
v___x_3419_ = lean_nat_dec_le(v___x_3417_, v___x_3417_);
if (v___x_3419_ == 0)
{
if (v___x_3418_ == 0)
{
lean_dec_ref(v_buckets_3409_);
return v___x_3416_;
}
else
{
size_t v___x_3420_; size_t v___x_3421_; lean_object* v___x_3422_; 
v___x_3420_ = ((size_t)0ULL);
v___x_3421_ = lean_usize_of_nat(v___x_3417_);
v___x_3422_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_problemOf_spec__1(v_buckets_3409_, v___x_3420_, v___x_3421_, v___x_3416_);
lean_dec_ref(v_buckets_3409_);
return v___x_3422_;
}
}
else
{
size_t v___x_3423_; size_t v___x_3424_; lean_object* v___x_3425_; 
v___x_3423_ = ((size_t)0ULL);
v___x_3424_ = lean_usize_of_nat(v___x_3417_);
v___x_3425_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_problemOf_spec__1(v_buckets_3409_, v___x_3423_, v___x_3424_, v___x_3416_);
lean_dec_ref(v_buckets_3409_);
return v___x_3425_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_problemOf_spec__3(lean_object* v_as_3430_, size_t v_i_3431_, size_t v_stop_3432_, lean_object* v_b_3433_){
_start:
{
uint8_t v___x_3434_; 
v___x_3434_ = lean_usize_dec_eq(v_i_3431_, v_stop_3432_);
if (v___x_3434_ == 0)
{
lean_object* v___x_3435_; lean_object* v_fst_3436_; lean_object* v_snd_3437_; lean_object* v_fst_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; size_t v___x_3443_; size_t v___x_3444_; 
v___x_3435_ = lean_array_uget_borrowed(v_as_3430_, v_i_3431_);
v_fst_3436_ = lean_ctor_get(v___x_3435_, 0);
v_snd_3437_ = lean_ctor_get(v___x_3435_, 1);
v_fst_3438_ = lean_ctor_get(v_fst_3436_, 0);
v___x_3439_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_problemOf_spec__3___closed__0));
lean_inc(v_snd_3437_);
v___x_3440_ = l_Nat_reprFast(v_snd_3437_);
v___x_3441_ = lean_string_append(v___x_3439_, v___x_3440_);
lean_dec_ref(v___x_3440_);
lean_inc(v_fst_3438_);
v___x_3442_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1___redArg(v_b_3433_, v___x_3441_, v_fst_3438_);
v___x_3443_ = ((size_t)1ULL);
v___x_3444_ = lean_usize_add(v_i_3431_, v___x_3443_);
v_i_3431_ = v___x_3444_;
v_b_3433_ = v___x_3442_;
goto _start;
}
else
{
return v_b_3433_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_problemOf_spec__3___boxed(lean_object* v_as_3446_, lean_object* v_i_3447_, lean_object* v_stop_3448_, lean_object* v_b_3449_){
_start:
{
size_t v_i_boxed_3450_; size_t v_stop_boxed_3451_; lean_object* v_res_3452_; 
v_i_boxed_3450_ = lean_unbox_usize(v_i_3447_);
lean_dec(v_i_3447_);
v_stop_boxed_3451_ = lean_unbox_usize(v_stop_3448_);
lean_dec(v_stop_3448_);
v_res_3452_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_problemOf_spec__3(v_as_3446_, v_i_boxed_3450_, v_stop_boxed_3451_, v_b_3449_);
lean_dec_ref(v_as_3446_);
return v_res_3452_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_problemOf_spec__2(lean_object* v_as_3454_, size_t v_sz_3455_, size_t v_i_3456_, lean_object* v_b_3457_, lean_object* v___y_3458_, lean_object* v___y_3459_, lean_object* v___y_3460_, lean_object* v___y_3461_, lean_object* v___y_3462_){
_start:
{
uint8_t v___x_3464_; 
v___x_3464_ = lean_usize_dec_lt(v_i_3456_, v_sz_3455_);
if (v___x_3464_ == 0)
{
lean_object* v___x_3465_; 
v___x_3465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3465_, 0, v_b_3457_);
return v___x_3465_;
}
else
{
lean_object* v_a_3466_; lean_object* v_fst_3467_; lean_object* v_snd_3468_; lean_object* v_fst_3469_; lean_object* v_snd_3470_; lean_object* v___x_3471_; 
v_a_3466_ = lean_array_uget_borrowed(v_as_3454_, v_i_3456_);
v_fst_3467_ = lean_ctor_get(v_a_3466_, 0);
v_snd_3468_ = lean_ctor_get(v_a_3466_, 1);
v_fst_3469_ = lean_ctor_get(v_fst_3467_, 0);
v_snd_3470_ = lean_ctor_get(v_fst_3467_, 1);
lean_inc(v___y_3462_);
lean_inc_ref(v___y_3461_);
lean_inc(v___y_3460_);
lean_inc_ref(v___y_3459_);
lean_inc(v_fst_3469_);
v___x_3471_ = lean_infer_type(v_fst_3469_, v___y_3459_, v___y_3460_, v___y_3461_, v___y_3462_);
if (lean_obj_tag(v___x_3471_) == 0)
{
lean_object* v_a_3472_; lean_object* v___x_3473_; 
v_a_3472_ = lean_ctor_get(v___x_3471_, 0);
lean_inc(v_a_3472_);
lean_dec_ref_known(v___x_3471_, 1);
v___x_3473_ = lp_vampireReplay_Vampire_translateFormula(v_a_3472_, v___y_3458_, v___y_3459_, v___y_3460_, v___y_3461_, v___y_3462_);
if (lean_obj_tag(v___x_3473_) == 0)
{
lean_object* v_a_3474_; lean_object* v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; lean_object* v___x_3479_; uint8_t v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; size_t v___x_3489_; size_t v___x_3490_; 
v_a_3474_ = lean_ctor_get(v___x_3473_, 0);
lean_inc(v_a_3474_);
lean_dec_ref_known(v___x_3473_, 1);
v___x_3475_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_problemOf_spec__2___closed__0));
lean_inc(v_snd_3468_);
v___x_3476_ = l_Nat_reprFast(v_snd_3468_);
v___x_3477_ = lean_string_append(v___x_3475_, v___x_3476_);
lean_dec_ref(v___x_3476_);
v___x_3478_ = ((lean_object*)(lp_vampireReplay_Vampire_Tm_render___closed__1));
v___x_3479_ = lean_string_append(v___x_3477_, v___x_3478_);
v___x_3480_ = lean_unbox(v_snd_3470_);
v___x_3481_ = lp_vampireReplay_Vampire_Role_render(v___x_3480_);
v___x_3482_ = lean_string_append(v___x_3479_, v___x_3481_);
lean_dec_ref(v___x_3481_);
v___x_3483_ = lean_string_append(v___x_3482_, v___x_3478_);
v___x_3484_ = lp_vampireReplay_Vampire_Fm_render(v_a_3474_);
v___x_3485_ = lean_string_append(v___x_3483_, v___x_3484_);
lean_dec_ref(v___x_3484_);
v___x_3486_ = ((lean_object*)(lp_vampireReplay_Vampire_symbolName___closed__1));
v___x_3487_ = lean_string_append(v___x_3485_, v___x_3486_);
v___x_3488_ = lean_array_push(v_b_3457_, v___x_3487_);
v___x_3489_ = ((size_t)1ULL);
v___x_3490_ = lean_usize_add(v_i_3456_, v___x_3489_);
v_i_3456_ = v___x_3490_;
v_b_3457_ = v___x_3488_;
goto _start;
}
else
{
lean_object* v_a_3492_; lean_object* v___x_3494_; uint8_t v_isShared_3495_; uint8_t v_isSharedCheck_3499_; 
lean_dec_ref(v_b_3457_);
v_a_3492_ = lean_ctor_get(v___x_3473_, 0);
v_isSharedCheck_3499_ = !lean_is_exclusive(v___x_3473_);
if (v_isSharedCheck_3499_ == 0)
{
v___x_3494_ = v___x_3473_;
v_isShared_3495_ = v_isSharedCheck_3499_;
goto v_resetjp_3493_;
}
else
{
lean_inc(v_a_3492_);
lean_dec(v___x_3473_);
v___x_3494_ = lean_box(0);
v_isShared_3495_ = v_isSharedCheck_3499_;
goto v_resetjp_3493_;
}
v_resetjp_3493_:
{
lean_object* v___x_3497_; 
if (v_isShared_3495_ == 0)
{
v___x_3497_ = v___x_3494_;
goto v_reusejp_3496_;
}
else
{
lean_object* v_reuseFailAlloc_3498_; 
v_reuseFailAlloc_3498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3498_, 0, v_a_3492_);
v___x_3497_ = v_reuseFailAlloc_3498_;
goto v_reusejp_3496_;
}
v_reusejp_3496_:
{
return v___x_3497_;
}
}
}
}
else
{
lean_object* v_a_3500_; lean_object* v___x_3502_; uint8_t v_isShared_3503_; uint8_t v_isSharedCheck_3507_; 
lean_dec_ref(v_b_3457_);
v_a_3500_ = lean_ctor_get(v___x_3471_, 0);
v_isSharedCheck_3507_ = !lean_is_exclusive(v___x_3471_);
if (v_isSharedCheck_3507_ == 0)
{
v___x_3502_ = v___x_3471_;
v_isShared_3503_ = v_isSharedCheck_3507_;
goto v_resetjp_3501_;
}
else
{
lean_inc(v_a_3500_);
lean_dec(v___x_3471_);
v___x_3502_ = lean_box(0);
v_isShared_3503_ = v_isSharedCheck_3507_;
goto v_resetjp_3501_;
}
v_resetjp_3501_:
{
lean_object* v___x_3505_; 
if (v_isShared_3503_ == 0)
{
v___x_3505_ = v___x_3502_;
goto v_reusejp_3504_;
}
else
{
lean_object* v_reuseFailAlloc_3506_; 
v_reuseFailAlloc_3506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3506_, 0, v_a_3500_);
v___x_3505_ = v_reuseFailAlloc_3506_;
goto v_reusejp_3504_;
}
v_reusejp_3504_:
{
return v___x_3505_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_problemOf_spec__2___boxed(lean_object* v_as_3508_, lean_object* v_sz_3509_, lean_object* v_i_3510_, lean_object* v_b_3511_, lean_object* v___y_3512_, lean_object* v___y_3513_, lean_object* v___y_3514_, lean_object* v___y_3515_, lean_object* v___y_3516_, lean_object* v___y_3517_){
_start:
{
size_t v_sz_boxed_3518_; size_t v_i_boxed_3519_; lean_object* v_res_3520_; 
v_sz_boxed_3518_ = lean_unbox_usize(v_sz_3509_);
lean_dec(v_sz_3509_);
v_i_boxed_3519_ = lean_unbox_usize(v_i_3510_);
lean_dec(v_i_3510_);
v_res_3520_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_problemOf_spec__2(v_as_3508_, v_sz_boxed_3518_, v_i_boxed_3519_, v_b_3511_, v___y_3512_, v___y_3513_, v___y_3514_, v___y_3515_, v___y_3516_);
lean_dec(v___y_3516_);
lean_dec_ref(v___y_3515_);
lean_dec(v___y_3514_);
lean_dec_ref(v___y_3513_);
lean_dec(v___y_3512_);
lean_dec_ref(v_as_3508_);
return v_res_3520_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_problemOf(lean_object* v_hypotheses_3522_, lean_object* v_a_3523_, lean_object* v_a_3524_, lean_object* v_a_3525_, lean_object* v_a_3526_){
_start:
{
lean_object* v___x_3528_; lean_object* v_formulas_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; size_t v_sz_3535_; size_t v___x_3536_; lean_object* v___x_3537_; 
v___x_3528_ = lean_unsigned_to_nat(0u);
v_formulas_3529_ = ((lean_object*)(lp_vampireReplay_Vampire_instInhabitedDeclarations_default___closed__0));
v___x_3530_ = l_Array_zipIdx___redArg(v_hypotheses_3522_, v___x_3528_);
v___x_3531_ = lean_unsigned_to_nat(16u);
v___x_3532_ = lean_obj_once(&lp_vampireReplay_Vampire_instInhabitedState_default___closed__1, &lp_vampireReplay_Vampire_instInhabitedState_default___closed__1_once, _init_lp_vampireReplay_Vampire_instInhabitedState_default___closed__1);
v___x_3533_ = lean_obj_once(&lp_vampireReplay_Vampire_instInhabitedState_default___closed__2, &lp_vampireReplay_Vampire_instInhabitedState_default___closed__2_once, _init_lp_vampireReplay_Vampire_instInhabitedState_default___closed__2);
v___x_3534_ = lean_st_mk_ref(v___x_3533_);
v_sz_3535_ = lean_array_size(v___x_3530_);
v___x_3536_ = ((size_t)0ULL);
v___x_3537_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_problemOf_spec__2(v___x_3530_, v_sz_3535_, v___x_3536_, v_formulas_3529_, v___x_3534_, v_a_3523_, v_a_3524_, v_a_3525_, v_a_3526_);
if (lean_obj_tag(v___x_3537_) == 0)
{
lean_object* v_a_3538_; lean_object* v___x_3540_; uint8_t v_isShared_3541_; uint8_t v_isSharedCheck_3576_; 
v_a_3538_ = lean_ctor_get(v___x_3537_, 0);
v_isSharedCheck_3576_ = !lean_is_exclusive(v___x_3537_);
if (v_isSharedCheck_3576_ == 0)
{
v___x_3540_ = v___x_3537_;
v_isShared_3541_ = v_isSharedCheck_3576_;
goto v_resetjp_3539_;
}
else
{
lean_inc(v_a_3538_);
lean_dec(v___x_3537_);
v___x_3540_ = lean_box(0);
v_isShared_3541_ = v_isSharedCheck_3576_;
goto v_resetjp_3539_;
}
v_resetjp_3539_:
{
lean_object* v___x_3542_; lean_object* v_decls_3543_; lean_object* v_sorts_3544_; lean_object* v_symbols_3545_; lean_object* v_types_3546_; lean_object* v_symbols_3547_; lean_object* v___x_3549_; uint8_t v_isShared_3550_; uint8_t v_isSharedCheck_3575_; 
v___x_3542_ = lean_st_ref_get(v___x_3534_);
lean_dec(v___x_3534_);
v_decls_3543_ = lean_ctor_get(v___x_3542_, 3);
lean_inc_ref(v_decls_3543_);
v_sorts_3544_ = lean_ctor_get(v___x_3542_, 0);
lean_inc_ref(v_sorts_3544_);
v_symbols_3545_ = lean_ctor_get(v___x_3542_, 1);
lean_inc_ref(v_symbols_3545_);
lean_dec(v___x_3542_);
v_types_3546_ = lean_ctor_get(v_decls_3543_, 0);
v_symbols_3547_ = lean_ctor_get(v_decls_3543_, 1);
v_isSharedCheck_3575_ = !lean_is_exclusive(v_decls_3543_);
if (v_isSharedCheck_3575_ == 0)
{
v___x_3549_ = v_decls_3543_;
v_isShared_3550_ = v_isSharedCheck_3575_;
goto v_resetjp_3548_;
}
else
{
lean_inc(v_symbols_3547_);
lean_inc(v_types_3546_);
lean_dec(v_decls_3543_);
v___x_3549_ = lean_box(0);
v_isShared_3550_ = v_isSharedCheck_3575_;
goto v_resetjp_3548_;
}
v_resetjp_3548_:
{
lean_object* v___x_3551_; lean_object* v___x_3552_; lean_object* v___y_3554_; lean_object* v___x_3568_; uint8_t v___x_3569_; 
v___x_3551_ = l_Array_append___redArg(v_types_3546_, v_symbols_3547_);
lean_dec_ref(v_symbols_3547_);
v___x_3552_ = l_Array_append___redArg(v___x_3551_, v_a_3538_);
lean_dec(v_a_3538_);
v___x_3568_ = lean_array_get_size(v___x_3530_);
v___x_3569_ = lean_nat_dec_lt(v___x_3528_, v___x_3568_);
if (v___x_3569_ == 0)
{
lean_dec_ref(v___x_3530_);
v___y_3554_ = v___x_3532_;
goto v___jp_3553_;
}
else
{
uint8_t v___x_3570_; 
v___x_3570_ = lean_nat_dec_le(v___x_3568_, v___x_3568_);
if (v___x_3570_ == 0)
{
if (v___x_3569_ == 0)
{
lean_dec_ref(v___x_3530_);
v___y_3554_ = v___x_3532_;
goto v___jp_3553_;
}
else
{
size_t v___x_3571_; lean_object* v___x_3572_; 
v___x_3571_ = lean_usize_of_nat(v___x_3568_);
v___x_3572_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_problemOf_spec__3(v___x_3530_, v___x_3536_, v___x_3571_, v___x_3532_);
lean_dec_ref(v___x_3530_);
v___y_3554_ = v___x_3572_;
goto v___jp_3553_;
}
}
else
{
size_t v___x_3573_; lean_object* v___x_3574_; 
v___x_3573_ = lean_usize_of_nat(v___x_3568_);
v___x_3574_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_problemOf_spec__3(v___x_3530_, v___x_3536_, v___x_3573_, v___x_3532_);
lean_dec_ref(v___x_3530_);
v___y_3554_ = v___x_3574_;
goto v___jp_3553_;
}
}
v___jp_3553_:
{
lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; lean_object* v___x_3563_; 
v___x_3555_ = lp_vampireReplay_Vampire_problemOf___lam__0(v___x_3531_, v___x_3528_, v_sorts_3544_);
v___x_3556_ = lp_vampireReplay_Vampire_problemOf___lam__0(v___x_3531_, v___x_3528_, v_symbols_3545_);
v___x_3557_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3557_, 0, v___x_3555_);
lean_ctor_set(v___x_3557_, 1, v___x_3556_);
lean_ctor_set(v___x_3557_, 2, v___y_3554_);
v___x_3558_ = ((lean_object*)(lp_vampireReplay_Vampire_problemOf___closed__0));
v___x_3559_ = lean_array_to_list(v___x_3552_);
v___x_3560_ = l_String_intercalate(v___x_3558_, v___x_3559_);
v___x_3561_ = lean_string_append(v___x_3560_, v___x_3558_);
if (v_isShared_3550_ == 0)
{
lean_ctor_set(v___x_3549_, 1, v___x_3557_);
lean_ctor_set(v___x_3549_, 0, v___x_3561_);
v___x_3563_ = v___x_3549_;
goto v_reusejp_3562_;
}
else
{
lean_object* v_reuseFailAlloc_3567_; 
v_reuseFailAlloc_3567_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3567_, 0, v___x_3561_);
lean_ctor_set(v_reuseFailAlloc_3567_, 1, v___x_3557_);
v___x_3563_ = v_reuseFailAlloc_3567_;
goto v_reusejp_3562_;
}
v_reusejp_3562_:
{
lean_object* v___x_3565_; 
if (v_isShared_3541_ == 0)
{
lean_ctor_set(v___x_3540_, 0, v___x_3563_);
v___x_3565_ = v___x_3540_;
goto v_reusejp_3564_;
}
else
{
lean_object* v_reuseFailAlloc_3566_; 
v_reuseFailAlloc_3566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3566_, 0, v___x_3563_);
v___x_3565_ = v_reuseFailAlloc_3566_;
goto v_reusejp_3564_;
}
v_reusejp_3564_:
{
return v___x_3565_;
}
}
}
}
}
}
else
{
lean_object* v_a_3577_; lean_object* v___x_3579_; uint8_t v_isShared_3580_; uint8_t v_isSharedCheck_3584_; 
lean_dec(v___x_3534_);
lean_dec_ref(v___x_3530_);
v_a_3577_ = lean_ctor_get(v___x_3537_, 0);
v_isSharedCheck_3584_ = !lean_is_exclusive(v___x_3537_);
if (v_isSharedCheck_3584_ == 0)
{
v___x_3579_ = v___x_3537_;
v_isShared_3580_ = v_isSharedCheck_3584_;
goto v_resetjp_3578_;
}
else
{
lean_inc(v_a_3577_);
lean_dec(v___x_3537_);
v___x_3579_ = lean_box(0);
v_isShared_3580_ = v_isSharedCheck_3584_;
goto v_resetjp_3578_;
}
v_resetjp_3578_:
{
lean_object* v___x_3582_; 
if (v_isShared_3580_ == 0)
{
v___x_3582_ = v___x_3579_;
goto v_reusejp_3581_;
}
else
{
lean_object* v_reuseFailAlloc_3583_; 
v_reuseFailAlloc_3583_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3583_, 0, v_a_3577_);
v___x_3582_ = v_reuseFailAlloc_3583_;
goto v_reusejp_3581_;
}
v_reusejp_3581_:
{
return v___x_3582_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_problemOf___boxed(lean_object* v_hypotheses_3585_, lean_object* v_a_3586_, lean_object* v_a_3587_, lean_object* v_a_3588_, lean_object* v_a_3589_, lean_object* v_a_3590_){
_start:
{
lean_object* v_res_3591_; 
v_res_3591_ = lp_vampireReplay_Vampire_problemOf(v_hypotheses_3585_, v_a_3586_, v_a_3587_, v_a_3588_, v_a_3589_);
lean_dec(v_a_3589_);
lean_dec_ref(v_a_3588_);
lean_dec(v_a_3587_);
lean_dec_ref(v_a_3586_);
return v_res_3591_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lean(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_vampireReplay_VampireReplay_Translate(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_vampireReplay_Vampire_instInhabitedFm_default = _init_lp_vampireReplay_Vampire_instInhabitedFm_default();
lean_mark_persistent(lp_vampireReplay_Vampire_instInhabitedFm_default);
lp_vampireReplay_Vampire_instInhabitedFm = _init_lp_vampireReplay_Vampire_instInhabitedFm();
lean_mark_persistent(lp_vampireReplay_Vampire_instInhabitedFm);
lp_vampireReplay_Vampire_instInhabitedState_default = _init_lp_vampireReplay_Vampire_instInhabitedState_default();
lean_mark_persistent(lp_vampireReplay_Vampire_instInhabitedState_default);
lp_vampireReplay_Vampire_instInhabitedState = _init_lp_vampireReplay_Vampire_instInhabitedState();
lean_mark_persistent(lp_vampireReplay_Vampire_instInhabitedState);
lp_vampireReplay_Vampire_sanitize___boxed__const__1 = _init_lp_vampireReplay_Vampire_sanitize___boxed__const__1();
lean_mark_persistent(lp_vampireReplay_Vampire_sanitize___boxed__const__1);
lp_vampireReplay_Vampire_instInhabitedRole_default = _init_lp_vampireReplay_Vampire_instInhabitedRole_default();
lp_vampireReplay_Vampire_instInhabitedRole = _init_lp_vampireReplay_Vampire_instInhabitedRole();
lp_vampireReplay_Vampire_instInhabitedSymbols_default = _init_lp_vampireReplay_Vampire_instInhabitedSymbols_default();
lean_mark_persistent(lp_vampireReplay_Vampire_instInhabitedSymbols_default);
lp_vampireReplay_Vampire_instInhabitedSymbols = _init_lp_vampireReplay_Vampire_instInhabitedSymbols();
lean_mark_persistent(lp_vampireReplay_Vampire_instInhabitedSymbols);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
