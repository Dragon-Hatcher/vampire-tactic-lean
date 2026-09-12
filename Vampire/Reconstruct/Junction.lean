import Vampire.Reconstruct.Stated

namespace Vampire.Reconstruct

open Lean Meta

/--
The `i`th part of a junction, from a proof of the whole.

Indices count parts left to right, whatever the nesting: flattening merges a
nested junction into a wider one, leaving the parts in place but not the shape,
so neither side can be taken to associate one way.
-/
partial def projectPart (fn : Name) (chain : Expr) (i : Nat) (h : Expr) :
    ReconstructM Expr := do
  if !chain.isAppOfArity fn 2 then
    return h
  let left := chain.appFn!.appArg!
  let right := chain.appArg!
  let n := (junctionParts fn left).size
  if i < n then
    projectPart fn left i (mkApp3 (mkConst ``And.left) left right h)
  else
    projectPart fn right (i - n) (mkApp3 (mkConst ``And.right) left right h)

/-- A proof of a whole disjunction from a proof of its `i`th part. -/
partial def injectPart (fn : Name) (chain : Expr) (i : Nat) (h : Expr) :
    ReconstructM Expr := do
  if !chain.isAppOfArity fn 2 then
    return h
  let left := chain.appFn!.appArg!
  let right := chain.appArg!
  let n := (junctionParts fn left).size
  if i < n then
    return mkApp3 (mkConst ``Or.inl) left right (← injectPart fn left i h)
  else
    return mkApp3 (mkConst ``Or.inr) left right (← injectPart fn right (i - n) h)

/--
A closed `chain → motive` sending each part of `chain` to `handler`, along with
the motive, which the leftmost part's proof settles.

The bound variable is put in place as the elimination is built rather than
abstracted into it afterwards: abstracting at every level of a right-nested
chain walks the whole of what has been built so far each time.
-/
partial def elimFunction (chain : Expr) (offset : Nat)
    (handler : Nat → Expr → ReconstructM Expr) (motive? : Option Expr) :
    ReconstructM (Expr × Expr) := do
  if !chain.isAppOfArity ``Or 2 then
    return ← withLocalDeclD `a chain fun a => do
      let body ← handler offset a
      let motive ← match motive? with
        | some motive => pure motive
        | none => inferType body
      return (← mkLambdaFVars #[a] body, motive)
  let left := chain.appFn!.appArg!
  let right := chain.appArg!
  let n := (junctionParts ``Or left).size
  let (onLeft, motive) ← elimFunction left offset handler motive?
  let (onRight, _) ← elimFunction right (offset + n) handler (some motive)
  return (.lam `x chain
    (mkApp6 (mkConst ``Or.elim) left right motive (.bvar 0) onLeft onRight)
    .default, motive)

/-- Eliminates a disjunction, sending its `i`th part to `handler i`. -/
partial def elimParts (chain : Expr) (offset : Nat)
    (handler : Nat → Expr → ReconstructM Expr) (h : Expr) : ReconstructM Expr := do
  if !chain.isAppOfArity ``Or 2 then
    return ← handler offset h
  let left := chain.appFn!.appArg!
  let right := chain.appArg!
  let n := (junctionParts ``Or left).size
  let (onLeft, motive) ← elimFunction left offset handler none
  let (onRight, _) ← elimFunction right (offset + n) handler (some motive)
  return mkApp6 (mkConst ``Or.elim) left right motive h onLeft onRight

/-!
The helpers above take a junction apart by its shape, which is right for a
formula, whose shape is what it says. A generalised clause is different: its
parts are subformulas, and a part can be a junction in its own right, so its
parts have to be given rather than found.
-/

/-- A proof of `junction fn unit parts` from a proof of its `i`th part. -/
partial def injectGiven (parts : Array Expr) (i : Nat) (h : Expr) :
    ReconstructM Expr := do
  if parts.size <= 1 then return h
  let rest := parts.extract 1 parts.size
  let tail := junction ``Or ``False rest
  if i == 0 then
    return mkApp3 (mkConst ``Or.inl) parts[0]! tail h
  else
    return mkApp3 (mkConst ``Or.inr) parts[0]! tail (← injectGiven rest (i - 1) h)


/-- `elimFunction`, for a disjunction whose parts are given rather than found. -/
partial def elimGivenFunction (parts : Array Expr) (offset : Nat)
    (handler : Nat → Expr → ReconstructM Expr) (motive? : Option Expr) :
    ReconstructM (Expr × Expr) := do
  if parts.size <= 1 then
    return ← withLocalDeclD `a parts[0]! fun a => do
      let body ← handler offset a
      let motive ← match motive? with
        | some motive => pure motive
        | none => inferType body
      return (← mkLambdaFVars #[a] body, motive)
  let rest := parts.extract 1 parts.size
  let tail := junction ``Or ``False rest
  let (onLeft, motive) ← elimGivenFunction #[parts[0]!] offset handler motive?
  let (onRight, _) ← elimGivenFunction rest (offset + 1) handler (some motive)
  return (.lam `x (junction ``Or ``False parts)
    (mkApp6 (mkConst ``Or.elim) parts[0]! tail motive (.bvar 0) onLeft onRight)
    .default, motive)

/-- Eliminates a disjunction of the given parts, sending the `i`th to `handler i`. -/
partial def elimGiven (parts : Array Expr)
    (handler : Nat → Expr → ReconstructM Expr) (h : Expr) (offset : Nat := 0) :
    ReconstructM Expr := do
  if parts.size <= 1 then return ← handler offset h
  let rest := parts.extract 1 parts.size
  let tail := junction ``Or ``False rest
  let (onLeft, motive) ← elimGivenFunction #[parts[0]!] offset handler none
  let (onRight, _) ← elimGivenFunction rest (offset + 1) handler (some motive)
  return mkApp6 (mkConst ``Or.elim) parts[0]! tail motive h onLeft onRight

/-- The `i`th part of a conjunction of the given parts, from a proof of the whole. -/
partial def projectGiven (parts : Array Expr) (i : Nat) (h : Expr) :
    ReconstructM Expr := do
  if parts.size <= 1 then return h
  let rest := parts.extract 1 parts.size
  let tail := junction ``And ``True rest
  if i == 0 then
    return mkApp3 (mkConst ``And.left) parts[0]! tail h
  else
    projectGiven rest (i - 1) (mkApp3 (mkConst ``And.right) parts[0]! tail h)

/-- A conjunction of the given parts, from a proof of each. -/
partial def introGiven (parts : Array Expr)
    (component : Nat → ReconstructM Expr) (offset : Nat := 0) :
    ReconstructM Expr := do
  if parts.size == 0 then return mkConst ``True.intro
  if parts.size == 1 then return ← component offset
  let rest := parts.extract 1 parts.size
  return mkApp4 (mkConst ``And.intro) parts[0]! (junction ``And ``True rest)
    (← component offset) (← introGiven rest component (offset + 1))

/-- Builds a conjunction from a proof of each of its parts. -/
partial def introParts (chain : Expr) (offset : Nat)
    (component : Nat → ReconstructM Expr) : ReconstructM Expr := do
  if !chain.isAppOfArity ``And 2 then
    return ← component offset
  let left := chain.appFn!.appArg!
  let right := chain.appArg!
  let n := (junctionParts ``And left).size
  return mkApp4 (mkConst ``And.intro) left right
    (← introParts left offset component) (← introParts right (offset + n) component)

/--
The congruence of a junction's arguments, folded the way `junction` folds them.

`congruence` is `and_congr` or `or_congr`: each takes the congruence of one
argument and that of the rest, so folding them right-nested matches how the
junction itself was built.
-/
partial def congrJunction (congruence : Name) (proofs : Array Expr) (i : Nat := 0) :
    ReconstructM Expr := do
  let some proof := proofs[i]? | throwError "a junction with no arguments"
  if i + 1 == proofs.size then return proof
  mkAppM congruence #[proof, ← congrJunction congruence proofs (i + 1)]

end Vampire.Reconstruct
