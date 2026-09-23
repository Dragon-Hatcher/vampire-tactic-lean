import VampireReplay.Reconstruct.Stated

namespace Vampire.Reconstruct

open Lean Meta

/--
The `i`th part of a conjunction, from a proof of the whole.

Indices count parts left to right, whatever the nesting: flattening merges a
nested junction into a wider one, leaving the parts in place but not the shape,
so neither side can be taken to associate one way.

@b fn is what the chain is taken apart by, and has to be ``And``: the proof is
built of `And.left` and `And.right` whatever it is.
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

/--
A proof of a whole disjunction from a proof of its `i`th part.

@b fn is what the chain is taken apart by, and has to be ``Or``: the proof is
built of `Or.inl` and `Or.inr` whatever it is.
-/
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

/--
`junction fn unit parts[k:]`, for every `k` at once.

Each of the helpers below walks a junction's parts one at a time, and every step
needs the junction of the parts it has not reached yet. Rebuilding that at each
step -- and copying the array to do it, which is what `extract` does -- costs
the square of the junction's length, and for a clause of a few hundred literals
that is the whole cost of the step: one AVATAR refutation spent a quarter of an
hour inside these. Built once from the right, they cost its length.

`suffix[parts.size]` is the unit, which only an empty junction reaches.
-/
def suffixJunctions (fn unit : Name) (parts : Array Expr) : Array Expr := Id.run do
  let n := parts.size
  let mut rev : Array Expr := #[mkConst unit]
  for k in [0:n] do
    let i := n - 1 - k
    let tail := rev.back!
    rev := rev.push
      (if i + 1 == n then parts[i]! else mkApp2 (mkConst fn) parts[i]! tail)
  return rev.reverse

/--
A proof of `junction ``Or ``False parts` from a proof of its `i`th part, which
has to be one of them.

@b suffix? is `suffixJunctions ``Or ``False parts`, for a caller injecting into
the same parts again and again: building it is the length of the junction, and
doing that at every injection is its square.
-/
def injectGiven (parts : Array Expr) (i : Nat) (h : Expr)
    (suffix? : Option (Array Expr) := none) : ReconstructM Expr := do
  if parts.size <= 1 then return h
  unless i < parts.size do
    throwError "a disjunction of {parts.size} parts has no part {i}"
  let suffix := suffix?.getD (suffixJunctions ``Or ``False parts)
  let mut acc :=
    if i + 1 == parts.size then h
    else mkApp3 (mkConst ``Or.inl) parts[i]! suffix[i + 1]! h
  for k in [0:i] do
    let j := i - 1 - k
    acc := mkApp3 (mkConst ``Or.inr) parts[j]! suffix[j + 1]! acc
  return acc

/-- One part handled on its own, with the motive the elimination proves. -/
private def elimGivenAt (parts : Array Expr) (k offset : Nat)
    (handler : Nat → Expr → ReconstructM Expr) (motive? : Option Expr) :
    ReconstructM (Expr × Expr) :=
  withLocalDeclD `a parts[k]! fun a => do
    let body ← handler (offset + k) a
    let motive ← match motive? with
      | some motive => pure motive
      | none => inferType body
    return (← mkLambdaFVars #[a] body, motive)

/-- `suffix[k] → motive`, sending the parts from `k` on to `handler`. -/
private partial def elimGivenFrom (parts suffix : Array Expr) (k offset : Nat)
    (handler : Nat → Expr → ReconstructM Expr) (motive? : Option Expr) :
    ReconstructM (Expr × Expr) := do
  if k + 1 >= parts.size then
    return ← elimGivenAt parts k offset handler motive?
  let (onLeft, motive) ← elimGivenAt parts k offset handler motive?
  let (onRight, _) ←
    elimGivenFrom parts suffix (k + 1) offset handler (some motive)
  return (.lam `x suffix[k]!
    (mkApp6 (mkConst ``Or.elim) parts[k]! suffix[k + 1]! motive (.bvar 0)
      onLeft onRight) .default, motive)

/--
Eliminates a disjunction of the given parts, sending the `i`th to `handler i`.

@b motive? is what the elimination proves, for a caller that already knows: it
is otherwise read off the first part's proof, and that proof can be the whole of
what the walk goes on to build. `propagate` refutes a clause, so what it proves
is `False` and there is nothing to read.
-/
def elimGiven (parts : Array Expr)
    (handler : Nat → Expr → ReconstructM Expr) (h : Expr) (offset : Nat := 0)
    (motive? : Option Expr := none) : ReconstructM Expr := do
  if parts.size <= 1 then return ← handler offset h
  let suffix := suffixJunctions ``Or ``False parts
  let (onLeft, motive) ← elimGivenAt parts 0 offset handler motive?
  let (onRight, _) ← elimGivenFrom parts suffix 1 offset handler (some motive)
  return mkApp6 (mkConst ``Or.elim) parts[0]! suffix[1]! motive h onLeft onRight

/--
The `i`th part of a conjunction of the given parts, from a proof of the whole;
it has to be one of them.

@b suffix? is `suffixJunctions ``And ``True parts`, as for `injectGiven`.
-/
def projectGiven (parts : Array Expr) (i : Nat) (h : Expr)
    (suffix? : Option (Array Expr) := none) : ReconstructM Expr := do
  if parts.size <= 1 then return h
  unless i < parts.size do
    throwError "a conjunction of {parts.size} parts has no part {i}"
  let suffix := suffix?.getD (suffixJunctions ``And ``True parts)
  let mut acc := h
  for k in [0:i] do
    acc := mkApp3 (mkConst ``And.right) parts[k]! suffix[k + 1]! acc
  if i + 1 == parts.size then return acc
  return mkApp3 (mkConst ``And.left) parts[i]! suffix[i + 1]! acc

/-- A conjunction of the given parts, from a proof of each. -/
def introGiven (parts : Array Expr)
    (component : Nat → ReconstructM Expr) (offset : Nat := 0) :
    ReconstructM Expr := do
  if parts.isEmpty then return mkConst ``True.intro
  let suffix := suffixJunctions ``And ``True parts
  let mut proofs := #[]
  for i in [0:parts.size] do
    proofs := proofs.push (← component (offset + i))
  let mut acc := proofs.back!
  for k in [0:parts.size - 1] do
    let i := parts.size - 2 - k
    acc := mkApp4 (mkConst ``And.intro) parts[i]! suffix[i + 1]! proofs[i]! acc
  return acc

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

/-!
Equivalences where `none` stands for "unchanged", as `Simp.Result` has it: a
walk over a formula mostly leaves what it walks alone, and writing
`Iff.refl` there, and `Iff.trans` around it, is most of the term it builds.
-/

/-- `a ↔ a` where nothing changed, and the equivalence itself otherwise. -/
def iffOrRefl (a : Expr) (proof? : Option Expr) : ReconstructM Expr :=
  match proof? with
  | some proof => pure proof
  | none => mkAppOptM ``Iff.refl #[some a]

/-- One equivalence and then the other, either of which may be no change. -/
def iffTrans? (first second : Option Expr) : ReconstructM (Option Expr) :=
  match first, second with
  | none, q => pure q
  | p, none => pure p
  | some p, some q => some <$> mkAppM ``Iff.trans #[p, q]

/--
A congruence lemma over two parts -- `and_congr`, `imp_congr` and the like --
applied where either part changed, and no change where neither did.
-/
def congr2? (lemma_ : Name) (a b : Expr) (pa pb : Option Expr) :
    ReconstructM (Option Expr) := do
  if pa.isNone && pb.isNone then return none
  some <$> mkAppM lemma_ #[← iffOrRefl a pa, ← iffOrRefl b pb]

/--
A congruence lemma over one part -- `not_congr`, `forall_congr'`,
`exists_congr` -- applied where it changed.
-/
def congr1? (lemma_ : Name) (proof? : Option Expr) : ReconstructM (Option Expr) :=
  proof?.mapM fun proof => mkAppM lemma_ #[proof]

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
