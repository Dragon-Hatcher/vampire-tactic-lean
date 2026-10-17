import VampireReplay.Fact
import VampireReplay.Translate

/-!
Canonicalization: each constant at its parameters written one way in every fact.

The same type or instance is reached by many paths -- `+` at `ℝ` through
`Real.instAdd`, or through a ring the lemma it was instantiated from asked for
-- and the prover has to see one symbol, and replay one term, for all of them.
The first way met is kept, and every other way of writing it, definitionally
equal at instance transparency, is replaced by it. A fact's proof proves its new
statement as it did the old: the two differ only by unfolding instances.
-/

namespace Vampire.Canonicalize

open Lean Meta

/-- What canonicalization keeps as it goes: the ways met, and each function's parameters. -/
private structure State where
  /--
  The ways met so far of writing each constant at its parameters, grouped by
  `erased`: only ways in one group can be the same, so only they are compared.
  -/
  ways : Std.HashMap Expr (Array Expr) := {}
  parameterPositions : Std.HashMap Expr (Array Bool) := {}

private abbrev M := StateRefT State MetaM

/--
A constant at its parameters with its instance arguments erased: two ways of
writing one constant at one type that differ only by the path to its instances
erase alike.
-/
def erased (key : Expr) : MetaM Expr := do
  let fn := key.getAppFn
  return mkAppN fn (← key.getAppArgs.mapM fun a => do
    if (← isClass? (← inferType a)).isSome then pure (mkSort .zero) else pure a)

/-- `e` with each constant at its parameters written the first way met. -/
private def canonicalized (e : Expr) : M Expr := do
  -- The locals `transform` opens binders as are no locals of the goal's, and a
  -- key mentioning one is a term under a binder, not a constant instance.
  let base ← getLCtx
  Meta.transform e (post := fun e => do
    let fn := e.getAppFn
    unless e.isApp && (fn.isConst || fn.isFVar) do return .continue
    let positions ← match (← get).parameterPositions[fn]? with
      | some p => pure p
      | none => do
        let p ← try parameters (← inferType fn) catch _ => pure #[]
        modify fun s => { s with parameterPositions := s.parameterPositions.insert fn p }
        pure p
    let args := e.getAppArgs
    let mut k := 0
    while k < args.size && (positions[k]?.getD false) do k := k + 1
    if k == 0 then return .continue
    let key := mkAppN fn (args.extract 0 k)
    if key.hasLooseBVars || key.hasExprMVar || key.hasAnyFVar (!base.contains ·) then
      return .continue
    let group ← erased key
    let known := ((← get).ways[group]?).getD #[]
    for way in known do
      if way == key then return .continue
      if ← withNewMCtxDepth <| withTransparency .instances <| isDefEq way key then
        return .done (mkAppN way (args.extract k args.size))
    modify fun s => { s with ways := s.ways.insert group (known.push key) }
    return .continue)

/-- Each fact with every constant at its parameters written one way. -/
def canonicalize (facts : Array Fact) : MetaM (Array Fact) := do
  let (facts, _) ← (facts.mapM fun (f : Fact) => do
    let type ← canonicalized f.type
    if type == f.type then return f
    return { f with type, proof := ← mkExpectedTypeHint f.proof type }).run {}
  return facts

end Vampire.Canonicalize
