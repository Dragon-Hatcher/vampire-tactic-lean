import Smt

/-!
What proves a step vampire justified with an SMT solver.

Most of vampire's rules come with everything needed to follow them: which
premises were used, what was substituted, which literal was acted on. The
steps in here do not. When vampire is built with Z3 and told to use it,
AVATAR's contradictions and its theory conflicts are settled inside the SMT
solver, and what reaches the proof is the conclusion alone -- that these
clauses cannot all hold, as an SMT solver sees it.

Nothing in the derivation can be followed to rebuild that, so it is settled
the same way it was found: by an SMT solver. cvc5 is asked for a proof
through `lean-smt`, and what it gives back is checked by Lean like anything
else. Kept apart from the rest for the same reason as `Vampire.Arith`: it is
handed in to the replay rather than imported by it.
-/

namespace Vampire.Smt

open Lean Meta

/--
`goal` from `facts`, as an SMT solver settles it.

`lean-smt` sends the question to cvc5 and rebuilds the proof it answers with,
which may leave side conditions of its own; those are discharged here, and a
step whose side conditions cannot be is a step that failed -- nothing is
admitted.
-/
def prove (facts : Array Expr) (goal : Expr) : MetaM Expr := do
  let mv ← mkFreshExprMVar goal
  let result ←
    -- The goal is `False` already and the facts are named outright, so
    -- there is nothing to introduce; and what they say has been normalised
    -- by the translation that vampire was given, so there is nothing to
    -- normalise either. `lean-smt`'s own normalisation reverts the facts,
    -- simplifies, and puts back as many as it took, which is one fewer when
    -- simplifying settles one of them.
    try _root_.Smt.smt { intros := false, normalize := false } mv.mvarId! facts
    catch e => throwError "cvc5 was asked to settle the step and \
      said: {e.toMessageData}"
  match result with
  | .sat _ => throwError "cvc5 says what this step concludes does not follow"
  | .unknown reason => throwError "cvc5 could not settle the step: {reason}"
  | .unsat remaining _ =>
    -- What rebuilding cvc5's proof left over. They are its own side
    -- conditions rather than anything of vampire's, and they close by
    -- computation where they close at all.
    for side in remaining do
      unless ← side.isAssigned do
        try side.refl
        catch _ =>
          try side.assumption
          catch _ =>
            throwError "cvc5's proof of the step left{indentD (← side.getType)}\n\
              which nothing here could discharge"
    instantiateMVars mv

end Vampire.Smt
