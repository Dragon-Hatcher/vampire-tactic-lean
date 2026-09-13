// Lean compiler output
// Module: VampireReplay.Reconstruct.Basic
// Imports: public import Init public meta import Init public import VampireReplay.Reconstruct.Monad public import VampireReplay.Reconstruct.Stated public import VampireReplay.Reconstruct.Choice public import VampireReplay.Reconstruct.Junction public import VampireReplay.Reconstruct.Literal public import VampireReplay.Reconstruct.Equiv public import VampireReplay.Reconstruct.Carry public import VampireReplay.Reconstruct.Step
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
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_vampireReplay_VampireReplay_Reconstruct_Monad(uint8_t builtin);
lean_object* initialize_vampireReplay_VampireReplay_Reconstruct_Stated(uint8_t builtin);
lean_object* initialize_vampireReplay_VampireReplay_Reconstruct_Choice(uint8_t builtin);
lean_object* initialize_vampireReplay_VampireReplay_Reconstruct_Junction(uint8_t builtin);
lean_object* initialize_vampireReplay_VampireReplay_Reconstruct_Literal(uint8_t builtin);
lean_object* initialize_vampireReplay_VampireReplay_Reconstruct_Equiv(uint8_t builtin);
lean_object* initialize_vampireReplay_VampireReplay_Reconstruct_Carry(uint8_t builtin);
lean_object* initialize_vampireReplay_VampireReplay_Reconstruct_Step(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_vampireReplay_VampireReplay_Reconstruct_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_vampireReplay_VampireReplay_Reconstruct_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_vampireReplay_VampireReplay_Reconstruct_Stated(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_vampireReplay_VampireReplay_Reconstruct_Choice(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_vampireReplay_VampireReplay_Reconstruct_Junction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_vampireReplay_VampireReplay_Reconstruct_Literal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_vampireReplay_VampireReplay_Reconstruct_Equiv(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_vampireReplay_VampireReplay_Reconstruct_Carry(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_vampireReplay_VampireReplay_Reconstruct_Step(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
