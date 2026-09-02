import Vampire

/-!
`vampire_replay`: a refutation coming back across the FFI becomes a real Lean proof
term.

The problem is hard-coded, so only this shape works, and reconstruction only handles
binary propositional resolution. What it establishes is the last arrow of the pipeline —
`#print axioms` shows no `sorryAx`. Goal translation, which feeds the other end, is
exercised in `Test/Translate.lean`.
-/

theorem resolution_two_step (p q : Prop) (h : p ∨ q) (hp : ¬p) (hq : ¬q) : False := by
  vampire_replay

#print axioms resolution_two_step
