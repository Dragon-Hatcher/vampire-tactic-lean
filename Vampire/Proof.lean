import Vampire.Ffi

/-!
# Reading a refutation back from Vampire

The proof is pulled across the boundary as structured data — unit numbers, inference
rules, premise lists and literals — and rebuilt here. No text is parsed.

Literals are propositional for now: an atom (Vampire's predicate number) and a polarity.
First-order terms need a richer encoding, which is the next piece of work.
-/

namespace Vampire

/-- A propositional literal: an atom and whether it occurs positively. -/
structure Lit where
  atom : UInt32
  positive : Bool
  deriving Repr, DecidableEq, Inhabited

/-- One step of a refutation. -/
structure Step where
  number : UInt32
  rule : UInt32
  premises : Array UInt32
  literals : Array Lit
  deriving Repr, Inhabited

/-- A refutation: steps in post-order, so premises precede their conclusions. -/
abbrev Proof := Array Step

namespace Ffi

@[extern "lean_vampire_run_builtin_problem"]
private opaque runBuiltinRaw : BaseIO UInt32
@[extern "lean_vampire_step_number"]
private opaque stepNumberRaw : UInt32 → BaseIO UInt32
@[extern "lean_vampire_step_rule"]
private opaque stepRuleRaw : UInt32 → BaseIO UInt32
@[extern "lean_vampire_step_premise_count"]
private opaque stepPremiseCountRaw : UInt32 → BaseIO UInt32
@[extern "lean_vampire_step_premise"]
private opaque stepPremiseRaw : UInt32 → UInt32 → BaseIO UInt32
@[extern "lean_vampire_step_literal_count"]
private opaque stepLiteralCountRaw : UInt32 → BaseIO UInt32
@[extern "lean_vampire_step_literal_atom"]
private opaque stepLiteralAtomRaw : UInt32 → UInt32 → BaseIO UInt32
@[extern "lean_vampire_step_literal_polarity"]
private opaque stepLiteralPolarityRaw : UInt32 → UInt32 → BaseIO UInt32
@[extern "lean_vampire_atom"]
private opaque atomRaw : UInt32 → BaseIO UInt32

/--
Run the hard-coded problem `(p ∨ q), ¬p, ¬q ⊢ ⊥` and read the refutation back.

Returns `none` if no refutation was found.
-/
def runBuiltinProblem : BaseIO (Option Proof) := do
  let n ← runBuiltinRaw
  if n == 0 then return none
  let mut steps : Proof := #[]
  for i in [0:n.toNat] do
    let i := i.toUInt32
    let np ← stepPremiseCountRaw i
    let mut premises : Array UInt32 := #[]
    for j in [0:np.toNat] do
      premises := premises.push (← stepPremiseRaw i j.toUInt32)
    let nl ← stepLiteralCountRaw i
    let mut literals : Array Lit := #[]
    for j in [0:nl.toNat] do
      let a ← stepLiteralAtomRaw i j.toUInt32
      let pol ← stepLiteralPolarityRaw i j.toUInt32
      literals := literals.push { atom := a, positive := pol == 1 }
    steps := steps.push {
      number := (← stepNumberRaw i), rule := (← stepRuleRaw i), premises, literals }
  return some steps

/-- Predicate number of the `k`th atom of the hard-coded problem. -/
def atom (k : UInt32) : BaseIO UInt32 := atomRaw k

end Ffi

/-- Render a literal against a naming function, for diagnostics. -/
def Lit.pretty (name : UInt32 → String) (l : Lit) : String :=
  if l.positive then name l.atom else s!"¬{name l.atom}"

/-- Render a step's clause, for diagnostics. -/
def Step.clauseString (name : UInt32 → String) (s : Step) : String :=
  if s.literals.isEmpty then "⊥"
  else String.intercalate " ∨ " (s.literals.map (Lit.pretty name)).toList

end Vampire
