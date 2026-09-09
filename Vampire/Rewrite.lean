import Lean

/-!
# Demodulation, replayed as the rewrite it is

`Inferences/ForwardDemodulation` finds an oriented equation `l = r` in the index, matches
`l` against a subterm of a clause and replaces it with `r`. The conclusion is the premise
with one subterm rewritten and nothing else changed.

`handlerFor` in `ffi/vampire_proof.cpp` sends both demodulations to `genericSubs`, whose
script instantiates the premises and then offers `vampire_resolve` and
`grind only [cases Or]`. Neither is what the rule did. Propagation cannot see `L[l]` and
`L[r]` as the same literal -- being unable to is exactly what makes a rewrite a rewrite --
so `vampire_resolve` declines and `grind` rediscovers the rewrite by search. On
`LRA_formula_071` that is 40ms a step, measured against 7.3ms for the rewrite written out,
and it is the most expensive rule per step in the whole replay.

So write it out. `Lean.MVarId.rewrite` is the `kabstract` machinery `rw` is built on,
in `MetaM` and without the syntax: it matches the equation's side against the premise,
builds the motive, and hands back `premise = rewritten` for `Eq.mp` to finish. Nothing here
searches -- the equation says where it applies.

Both directions are tried, and both orders of the two premises. Vampire orients its
equations by its own ordering, so the use that turns up in a proof is as often
right-to-left as left-to-right: `LRA_formula_071` step 26 rewrites `a + b + c` back into
`a + (b + c)` under the `tha associativity` axiom. Four `kabstract` matches at worst, each
of which either matches or does not.

The check is `isDefEq` against the conclusion the prover stated, so a match at a position
the rule did not use is rejected rather than believed. This declines and leaves the step to
the cascade whenever the conclusion is not the premise rewritten once.
-/

set_option autoImplicit false

namespace Vampire.Rewrite

open Lean Meta Elab Term

/-- Peel a clause's `∀` prefix, running `k` under the binders.

A clause binds its variables at *sorts*, so a `Prop` domain is a `¬` or an implication
inside a literal and the prefix has ended -- which is why this is a syntactic walk and not
`forallTelescope`, whose `whnf` would unfold `Not` and take the literal apart.

Shared with `Vampire/Alasca.lean`, which needs the same walk for the same reason. It lives
here because a rewrite is the more general thing: the arithmetic replay is one kind of
step whose premise and conclusion are the same clause said differently. -/
partial def clauseBinders (e : Expr) (acc : Array Expr)
    (k : Array Expr → Expr → TermElabM (Option Expr)) : TermElabM (Option Expr) := do
  match e with
  | .forallE n d b _ =>
    -- `←` inside `&&` is hoisted out of it by the `do` elaborator, so the `Prop` test has
    -- to be its own statement.
    if ← isProp d then k acc e
    else withLocalDeclD n d fun x => do
      let some r ← clauseBinders (b.instantiate1 x) (acc.push x) k | return none
      return some r
  | _ => k acc e

/-- `hc : hcTy` rewritten by `heq` into `concl`, under `concl`'s own binders. -/
private def attempt (hc hcTy heq concl : Expr) : TermElabM (Option Expr) :=
  clauseBinders concl #[] fun vs cbody => do
    -- The rewritten premise binds the conclusion's variables, in order: demodulation
    -- replaces a subterm and leaves the prefix alone.
    let mut hp := hc
    let mut pty := hcTy
    for v in vs do
      let .forallE _ d b _ := pty | return none
      unless ← isDefEq d (← inferType v) do return none
      hp := mkApp hp v
      pty := b.instantiate1 v
    if pty.isForall then
      unless ← isProp pty.bindingDomain! do return none
    -- `rewrite` wants a metavariable only for its local context; it does not assign one.
    let ctx ← mkFreshExprMVar (mkConst ``True)
    for symm in [false, true] do
      let r? ← try some <$> ctx.mvarId!.rewrite pty heq (symm := symm) catch _ => pure none
      if let some r := r? then
        -- A side goal means the equation was conditional, which demodulation's is not.
        if r.mvarIds.isEmpty && (← isDefEq r.eNew cbody) then
          return some (← mkLambdaFVars vs (← mkEqMP r.eqProof hp))
    return none

/--
`premise₁ → premise₂ → conclusion` for a demodulation, as a term, or `none`.

Total: a step this declines is replayed by the cascade, while a step it threw on would
discard the whole refutation and send the tactic back to the prover for another one.
-/
def demodProof (ty : Expr) : TermElabM (Option Expr) := do
  try
    let .forallE _ p0 rest _ := ty | return none
    if rest.hasLooseBVars then return none
    let .forallE _ p1 concl _ := rest | return none
    if concl.hasLooseBVars then return none
    withLocalDeclD `h0 p0 fun h0 => withLocalDeclD `h1 p1 fun h1 => do
      -- `identityForFirstPremise` in the shim says the equation is the *second* premise,
      -- so that order is tried first; the other covers a rule that names them the other
      -- way round and costs one failed match to rule out.
      for (hc, hcTy, heq) in [(h0, p0, h1), (h1, p1, h0)] do
        if let some body ← attempt hc hcTy heq concl then
          return some (← mkLambdaFVars #[h0, h1] body)
      return none
  catch e =>
    trace[vampire.replay] "demodulation rewrite declined: {e.toMessageData}"
    return none

end Vampire.Rewrite
