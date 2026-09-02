import VampLean
import Vampire.Ffi

/-!
# The `vampire` tactic

Frontend for discharging a Lean goal with the Vampire theorem prover.

The intended pipeline, once implemented:

1. collect the goal and the hypotheses it may use;
2. translate them into Vampire's term representation — directly, over an FFI
   boundary, rather than by printing and reparsing a text format;
3. run saturation and, on success, get back the proof;
4. replay that proof as a Lean term, checked by the kernel.

Right now step 1 onwards is unimplemented and the tactic admits its goal, so
anything proved with it carries `sorryAx`. `#print axioms` will show that.
-/

namespace Vampire

open Lean Elab Tactic Meta

/-- Configuration for the `vampire` tactic. Empty until there is something to configure. -/
structure Config where
  deriving Inhabited

/--
Discharge the goal with Vampire.

**Not implemented.** The goal is admitted, so the resulting proof depends on
`sorryAx`. It exists so the frontend, the build, and the test suite can be
developed ahead of the translation and replay layers.
-/
syntax (name := vampire) "vampire" : tactic

elab_rules : tactic
  | `(tactic| vampire) => do
    let g ← getMainGoal
    g.withContext do
      -- Step 1: confirm the embedded prover is reachable. Goal translation comes next.
      let status ← Ffi.init
      unless status == .ok do
        throwError m!"vampire: FFI unavailable: {status}"
      let funs ← Ffi.signatureFunctions
      let sorts ← Ffi.signatureTypeCons
      logInfo m!"vampire: embedded prover live \
        (signature: {funs} function symbols, {sorts} sorts)"
      logWarning m!"`vampire` does not translate the goal yet: admitting it.\n\
        The proof will depend on `sorryAx`."
      admitGoal g

end Vampire
