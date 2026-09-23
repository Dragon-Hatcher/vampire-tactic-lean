import VampireReplay.Reconstruct.Monad

/-!
Closing a term over a chain of let-bound locals.

Replay binds each step of a refutation, and each clause of a propositional one,
to a local, so that what a dozen later steps stand on is proved once; the
finished proof is then those locals let-bound around what they prove.
-/

namespace Vampire.Reconstruct

open Lean Meta

/--
Whether a term mentions any of `bound`, kept for every subterm asked about.

A step's proof embeds the formulas it reasons about, and those are shared from
one step's proof to the next, but mention none of the locals being bound -- so
asked once per subterm, across every value, most of the proof is walked once.
-/
private partial def mentionsBound (bound : Std.HashSet FVarId) (e : Expr) :
    StateM (Std.HashMap Expr Bool) Bool := do
  if !e.hasFVar then return false
  if let some known := (← get)[e]? then return known
  let answer ← match e with
    | .fvar id => pure (bound.contains id)
    | .app f a => do pure ((← mentionsBound bound f) || (← mentionsBound bound a))
    | .lam _ t b _ | .forallE _ t b _ => do
      pure ((← mentionsBound bound t) || (← mentionsBound bound b))
    | .letE _ t v b _ => do
      pure ((← mentionsBound bound t) || (← mentionsBound bound v)
        || (← mentionsBound bound b))
    | .mdata _ b | .proj _ _ b => mentionsBound bound b
    | _ => pure false
  modify (·.insert e answer)
  return answer

/--
`e` with the `j`th of `bound` replaced by the variable it is under `offset`
binders more than the `n` of the chain: `bvar (n - 1 - j + offset)`. Only what
mentions one of them is descended into.
-/
private partial def abstractBound (index : Std.HashMap FVarId Nat) (bound : Std.HashSet FVarId)
    (n : Nat) (e : Expr) (offset : Nat) : StateM (Std.HashMap Expr Bool) Expr := do
  unless ← mentionsBound bound e do return e
  let go := abstractBound index bound n
  match e with
  | .fvar id =>
    match index[id]? with
    | some j => return .bvar (n - 1 - j + offset)
    | none => return e
  | .app f a => return e.updateApp! (← go f offset) (← go a offset)
  | .lam _ t b _ => return e.updateLambdaE! (← go t offset) (← go b (offset + 1))
  | .forallE _ t b _ => return e.updateForallE! (← go t offset) (← go b (offset + 1))
  | .letE name t v b nondep =>
    return .letE name (← go t offset) (← go v offset) (← go b (offset + 1)) nondep
  | .mdata _ b => return e.updateMData! (← go b offset)
  | .proj _ _ b => return e.updateProj! (← go b offset)
  | _ => return e

/--
`let x₀ := v₀; …; let xₙ := vₙ; body`, over let-bound locals `bound`, each of
whose values and types mentions only the locals before it.

What `mkLetFVars` does, less the walking. It abstracts each local's type and
value over the locals before it by walking them in full, since all of them
mention the goal's own locals and `hasFVar` cannot cut the walk short. Over a
refutation of ten thousand steps that was most of what replaying it cost: the
formulas a step's proof reasons about are shared with the next step's, and each
was walked again. Here which subterms mention a bound local is worked out once
for the whole term, and only those are rebuilt.
-/
def bindLets (bound : Array Expr) (body : Expr) : ReconstructM Expr := do
  let ids := bound.map (·.fvarId!)
  let set := Std.HashSet.ofArray ids
  let index := Std.HashMap.ofList ids.toList.zipIdx
  let mut cache : Std.HashMap Expr Bool := {}
  let (abstracted, cache') := (abstractBound index set bound.size
    (← instantiateMVars body) 0).run cache
  cache := cache'
  let mut out := abstracted
  for k in [0 : bound.size] do
    let i := bound.size - 1 - k
    let decl ← ids[i]!.getDecl
    let some value := decl.value? | throwError "a let-bound local has no value"
    -- The `i`th local is under the binders of the ones before it, which are
    -- the only ones it mentions.
    let (value, c₁) := (abstractBound index set i (← instantiateMVars value) 0).run cache
    let (type, c₂) := (abstractBound index set i (← instantiateMVars decl.type) 0).run c₁
    cache := c₂
    out := .letE decl.userName type value out (nondep := false)
  return out

end Vampire.Reconstruct
