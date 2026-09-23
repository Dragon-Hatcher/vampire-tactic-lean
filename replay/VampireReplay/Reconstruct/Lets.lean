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
What `bindLets` keeps while it abstracts: which subterms mention a bound local,
for every walk it makes, and what one walk made of each subterm at each depth.
-/
private structure Abstracting where
  mentions : Std.HashMap Expr Bool := {}
  done : Std.HashMap (Expr × Nat) Expr := {}

/--
Whether a term mentions any of `bound`, kept for every subterm asked about.

A step's proof embeds the formulas it reasons about, and those are shared from
one step's proof to the next, but mention none of the locals being bound -- so
asked once per subterm, across every value, most of the proof is walked once.
-/
private partial def mentionsBound (bound : Std.HashSet FVarId) (e : Expr) :
    StateM Abstracting Bool := do
  if !e.hasFVar then return false
  if let some known := (← get).mentions[e]? then return known
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
  modify fun s => { s with mentions := s.mentions.insert e answer }
  return answer

/--
`e` with the `j`th of `bound` replaced by the variable it is under `offset`
binders more than the `n` of the chain: `bvar (n - 1 - j + offset)`. Only what
mentions one of them is descended into.

What it makes of a subterm is kept by the subterm and its depth, as
`abstractHoisted` keeps it: the formulas a proof reasons about are shared
within it, and each would otherwise be rebuilt wherever it recurs. That depends
on `n` too, so `done` is only good for one `n`, and a caller starts it afresh
for each.
-/
private partial def abstractBound (index : Std.HashMap FVarId Nat) (bound : Std.HashSet FVarId)
    (n : Nat) (e : Expr) (offset : Nat) : StateM Abstracting Expr := do
  unless ← mentionsBound bound e do return e
  if let some done := (← get).done[(e, offset)]? then return done
  let go := abstractBound index bound n
  let result ← match e with
    | .fvar id =>
      match index[id]? with
      | some j => pure (.bvar (n - 1 - j + offset))
      | none => pure e
    | .app f a => do pure (e.updateApp! (← go f offset) (← go a offset))
    | .lam _ t b _ => do pure (e.updateLambdaE! (← go t offset) (← go b (offset + 1)))
    | .forallE _ t b _ => do
      pure (e.updateForallE! (← go t offset) (← go b (offset + 1)))
    | .letE name t v b nondep => do
      pure (.letE name (← go t offset) (← go v offset) (← go b (offset + 1)) nondep)
    | .mdata _ b => do pure (e.updateMData! (← go b offset))
    | .proj _ _ b => do pure (e.updateProj! (← go b offset))
    | _ => pure e
  modify fun s => { s with done := s.done.insert (e, offset) result }
  return result

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
  -- Which subterms mention a bound local does not depend on how many of them
  -- a walk abstracts, so that is kept across every walk; what a walk made of
  -- a subterm does, so that is started afresh for each.
  let (abstracted, s) := (abstractBound index set bound.size
    (← instantiateMVars body) 0).run {}
  let mut mentions := s.mentions
  let mut out := abstracted
  for k in [0 : bound.size] do
    let i := bound.size - 1 - k
    let decl ← ids[i]!.getDecl
    let some value := decl.value? | throwError "a let-bound local has no value"
    -- The `i`th local is under the binders of the ones before it, which are
    -- the only ones it mentions.
    let value ← instantiateMVars value
    let type ← instantiateMVars decl.type
    let ((value, type), s) := (do
      pure (← abstractBound index set i value 0, ← abstractBound index set i type 0)).run
        ({ mentions } : Abstracting)
    mentions := s.mentions
    out := .letE decl.userName type value out (nondep := false)
  return out

/-- What `hoistClosed` has bound so far, and what it made of each subterm. -/
private structure Hoisted where
  done : Std.HashMap Expr Expr := {}
  locals : Array FVarId := #[]
  types : Array Expr := #[]
  values : Array Expr := #[]

/--
`e` with each of its subterms that mentions no bound variable -- a formula, a
term, a proof from hypotheses alone -- replaced by a local standing for it,
recorded with its type and value, each over the locals recorded before it.
-/
private partial def hoist (e : Expr) : StateRefT Hoisted MetaM Expr := do
  match e with
  | .bvar .. | .fvar .. | .mvar .. | .sort .. | .const .. | .lit .. => return e
  | _ => pure ()
  if let some done := (← get).done[e]? then return done
  let rebuilt ← match e with
    | .app .. => do
      let args ← e.getAppArgs.mapM hoist
      pure (mkAppN (← hoist e.getAppFn) args)
    | .lam n t b bi => do pure (.lam n (← hoist t) (← hoist b) bi)
    | .forallE n t b bi => do pure (.forallE n (← hoist t) (← hoist b) bi)
    | .letE n t v b nondep => do pure (.letE n (← hoist t) (← hoist v) (← hoist b) nondep)
    | .mdata d b => do pure (.mdata d (← hoist b))
    | .proj s i b => do pure (.proj s i (← hoist b))
    | _ => pure e
  let result ← if e.hasLooseBVars then pure rebuilt else do
    let type ← inferType e
    -- A proof is left where it stands, the formulas in it bound: a proof is
    -- used where it is built, and one bound for every node of a closed proof
    -- tree -- a normalisation's congruences over a large axiom are thousands
    -- -- is a let and a type for each, and nothing shared by it.
    if ← isProp type then pure rebuilt else
    let type ← hoist type
    let id ← mkFreshFVarId
    modify fun s => { s with locals := s.locals.push id, types := s.types.push type,
                             values := s.values.push rebuilt }
    pure (.fvar id)
  modify fun s => { s with done := s.done.insert e result }
  return result

/--
`e` with the `j`th of `index` replaced by `bvar (depth - 1 - j)`, `depth` being
how many of them are bound above where `e` sits, including the binders `e` is
under; what is kept is by subterm and depth.
-/
private partial def abstractHoisted (index : Std.HashMap FVarId Nat) (e : Expr) (depth : Nat) :
    StateM (Std.HashMap (Expr × Nat) Expr) Expr := do
  if !e.hasFVar then return e
  match e with
  | .fvar id => return match index[id]? with
    | some j => .bvar (depth - 1 - j)
    | none => e
  | _ => pure ()
  if let some done := (← get)[(e, depth)]? then return done
  let go := abstractHoisted index
  let result ← match e with
    | .app f a => do pure (e.updateApp! (← go f depth) (← go a depth))
    | .lam _ t b _ => do pure (e.updateLambdaE! (← go t depth) (← go b (depth + 1)))
    | .forallE _ t b _ => do pure (e.updateForallE! (← go t depth) (← go b (depth + 1)))
    | .letE n t v b nondep => do
      pure (.letE n (← go t depth) (← go v depth) (← go b (depth + 1)) nondep)
    | .mdata _ b => do pure (e.updateMData! (← go b depth))
    | .proj _ _ b => do pure (e.updateProj! (← go b depth))
    | _ => pure e
  modify (·.insert (e, depth) result)
  return result

/--
`e`, a closed proof over the context's locals, with every one of its subterms
that mentions no bound variable let-bound once, above the rest.

The locals a replayed proof is over are abstracted when it is made a lemma, and
a local is then a de Bruijn index that counts every let above where it is used:
a formula used under a thousand steps' lets is a thousand different terms, and
the kernel checks each. Bound above them all, it is one local, used by index.
Wants `e` maximally shared, as what it keeps is by subterm.
-/
def hoistClosed (e : Expr) : MetaM Expr := do
  let (body, s) ← (hoist e).run {}
  let index := Std.HashMap.ofList s.locals.toList.zipIdx
  let n := s.locals.size
  let mut out := ((abstractHoisted index body n).run {}).1
  for k in [0 : n] do
    let j := n - 1 - k
    let ((type, value), _) := (do
      pure (← abstractHoisted index s.types[j]! j, ← abstractHoisted index s.values[j]! j)).run {}
    out := .letE `h type value out (nondep := false)
  return out

end Vampire.Reconstruct
