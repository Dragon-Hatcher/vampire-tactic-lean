import Lean
import Vampire.Proof

/-!
# What Vampire's arithmetic means in Lean

Two jobs, both about the way *back*.

`meanings` reads the symbol table of an exported refutation and says what each of
Vampire's interpreted symbols and numerals denotes in Lean: `$sum` at `$real` is
`fun a b : ℝ => a + b`, `$to_real(3/2)` is `(3 : ℝ) / 2`, `$less` is `<`. The
translation went the other way through `Translate/Arith.lean`, and a symbol that came
from there comes back through here.

`arithScript` is the tactic a step whose content is arithmetic is closed by. Vampire
introduces theory axioms for itself — commutativity of `$sum`, `$uminus($uminus(X)) = X`
— and `LeanChecker` writes each as a Lean `axiom`, which a tactic cannot do. It does not
need to: every one of them is a true statement about `ℝ`, `ℚ` or `ℤ` and Mathlib proves
it. The same cascade closes an `evaluation` step, whose conclusion is its premise with
the arithmetic worked out.

## Why the tactics are parsed from strings

`ring`, `linarith` and `norm_num` are Mathlib's, and this package does not depend on
Mathlib — deliberately, since the whole first-order fragment needs none of it and a
Mathlib dependency is not a small thing to hand a downstream project. A tactic
*quotation* would have to parse at compile time and so would need the import.

So the cascade is parsed in the environment the tactic is *running* in, with
`Parser.runParserCategory`. A goal with `ℝ` in it has imported Mathlib by construction —
`ℝ` is Mathlib's — so the tactics resolve exactly when there is arithmetic to do, and a
package that has no arithmetic in it never asks. Where they genuinely are missing the
parse fails, and the error says which tactic and why rather than reporting the step as
unprovable.
-/

namespace Vampire.Arith

open Lean Meta Elab

/-- Which of the three arithmetics a symbol belongs to.

Its own enumeration rather than `Translate/Build.lean`'s `NumKind`: that one is paired
with the opcodes `ffi/vampire_build.cpp` reads and lives beside the translation's `Term`,
which would shadow `Lean.Term` here. The two directions do not have to share a type for
three constructors. -/
inductive Kind where
  | int | rat | real
  deriving Repr, DecidableEq, Inhabited

/-- Vampire's TPTP name for each of the three numeric sorts. -/
def kindOfSortName? (nm : String) : Option Kind :=
  match nm with
  | "$int" => some .int | "$rat" => some .rat | "$real" => some .real
  | _ => none

/-- The Lean type a numeric sort denotes.

`Rat` and `Real` are named rather than referred to with `` `` ``, for the reason given in
`Translate/Arith.lean`: they are Mathlib's. A refutation that mentions them arrived from
a goal that mentions them, so the constant exists by the time this is asked. -/
def kindType : Kind → Expr
  | .int  => .const ``Int []
  | .rat  => .const (.str .anonymous "Rat") []
  | .real => .const (.str .anonymous "Real") []

/-- Check that the type a sort denotes actually exists, so that a missing Mathlib is a
message about Mathlib rather than an unknown-constant error from deep inside a replay. -/
def checkKindType (k : Kind) : MetaM Expr := do
  let ty := kindType k
  let .const nm _ := ty | throwError "vampire: internal: {ty} is not a constant"
  unless (← getEnv).contains nm do
    throwError "vampire: the refutation uses {nm}, which is not in scope. Arithmetic \
      reaches the prover as Lean's `ℤ`, `ℚ` and `ℝ`, and the last two are Mathlib's — \
      `import Mathlib` (or the part of it defining {nm}) to replay a proof about them."
  return ty

/-- `p/q` and `-p/q`, and a bare integer, as Vampire writes a numeral.

`IntegerConstantType` prints as `3` or `-3`, `RationalConstantType` as `3/2`, and
`RealConstantType` wraps its rational in `$to_real(...)` — that wrapper is how the
numeral's *sort* shows up in its name, and it is stripped here because the sort is
already known from the symbol's type. -/
def parseNumeral? (nm : String) : Option (Int × Nat) := do
  let cs := nm.toList
  let body : String :=
    if nm.startsWith "$to_real(" && nm.endsWith ")" then
      String.mk ((cs.drop "$to_real(".length).dropLast)
    else if nm.startsWith "$to_rat(" && nm.endsWith ")" then
      String.mk ((cs.drop "$to_rat(".length).dropLast)
    else nm
  match body.splitOn "/" with
  | [p] => do let n ← toInt? p; return (n, 1)
  | [p, q] => do
    let n ← toInt? p
    let d ← toInt? q
    guard (d > 0)
    return (n, d.toNat)
  | _ => none
where
  toInt? (s : String) : Option Int :=
    match s.trim.toList with
    | '-' :: rest => (String.mk rest).toNat?.map (fun n => -(Int.ofNat n))
    | rest => (String.mk rest).toNat?.map Int.ofNat

/-- A numeral at a numeric type, as `OfNat`/`Neg`/`HDiv` applied to literals.

Built rather than elaborated from syntax: the value can be any size and going through
the parser would mean rendering it and reading it back. -/
def numeralExpr (k : Kind) (n : Int) (d : Nat) : MetaM Expr := do
  let ty ← checkKindType k
  let nat (m : Nat) : MetaM Expr := mkAppOptM ``OfNat.ofNat #[ty, mkRawNatLit m, none]
  let signed ← if n < 0 then mkAppM ``Neg.neg #[← nat n.natAbs] else nat n.toNat
  if d == 1 then return signed
  -- An integer numeral with a denominator is a rounding division in Lean and an exact
  -- one in TPTP, so it is not one this can honestly build; a rational or real numeral
  -- with a denominator is just a division.
  if k == .int then
    throwError "vampire: the integer numeral {n}/{d} is not an integer"
  mkAppM ``HDiv.hDiv #[signed, ← nat d]

/-- `fun (a b : ty) => f a b`, with the instance synthesised. -/
private def binOp (ty : Expr) (f : Name) : MetaM Expr :=
  withLocalDeclD `a ty fun a => withLocalDeclD `b ty fun b => do
    mkLambdaFVars #[a, b] (← mkAppM f #[a, b])

/-- `fun (a : ty) => f a`. -/
private def unOp (ty : Expr) (f : Name) : MetaM Expr :=
  withLocalDeclD `a ty fun a => do mkLambdaFVars #[a] (← mkAppM f #[a])

/-- What each of Vampire's interpreted symbols and numerals means in Lean, by the
number the export gave it. Keyed by number and not by name: Vampire renames a clash, so
`$sum` at `$int` and at `$real` are `$sum` and `$sum0` in some order, and which is which
is not recoverable from the name. The symbol's own argument sorts say it instead. -/
structure Meanings where
  sorts : Std.HashMap Nat Expr := {}
  funs : Std.HashMap Nat Expr := {}
  preds : Std.HashMap Nat Expr := {}
  deriving Inhabited

/-- The Lean meaning of one function symbol, if Vampire interprets it. -/
private def funMeaning? (syms : Symbols) (info : FunInfo) : MetaM (Option Expr) := do
  -- The sort decides which of the three arithmetics this is. For an operation that is
  -- the result sort; for a conversion it is the *argument*, since `$to_real` at `$int`
  -- lands in `$real`.
  let resKind := (syms.sorts[info.resultSort]?).bind kindOfSortName?
  let argKind := (info.argSorts[0]?.bind (syms.sorts[·]?)).bind kindOfSortName?
  match info.name with
  | "$sum"        => opAt resKind ``HAdd.hAdd
  | "$difference" => opAt resKind ``HSub.hSub
  | "$product"    => opAt resKind ``HMul.hMul
  | "$quotient"   => opAt resKind ``HDiv.hDiv
  | "$uminus"     => unAt resKind ``Neg.neg
  -- `abs` is Mathlib's, so it is named rather than quoted, like the types are.
  | "$abs"        => unAt resKind (Name.mkSimple "abs")
  | "$to_real" | "$to_rat" =>
    -- A cast. Lean spells `((x : ℤ) : ℝ)` with `IntCast`, and `$to_rat` out of `$int`
    -- the same way.
    match argKind, resKind with
    | some .int, some k => do
      let ty ← checkKindType k
      let intTy ← checkKindType .int
      let e ← withLocalDeclD `a intTy fun a => do
        mkLambdaFVars #[a] (← mkAppOptM ``IntCast.intCast #[ty, none, a])
      return some e
    | _, _ => return none
  | nm =>
    -- Otherwise a numeral, whose sort is its result sort.
    match resKind, parseNumeral? nm with
    | some k, some (n, d) => return some (← numeralExpr k n d)
    | _, _ => return none
where
  opAt (k : Option Kind) (f : Name) : MetaM (Option Expr) := do
    let some k := k | return none
    return some (← binOp (← checkKindType k) f)
  unAt (k : Option Kind) (f : Name) : MetaM (Option Expr) := do
    let some k := k | return none
    return some (← unOp (← checkKindType k) f)

/-- The Lean meaning of one predicate symbol, if Vampire interprets it. -/
private def predMeaning? (syms : Symbols) (info : PredInfo) : MetaM (Option Expr) := do
  let some k := (info.argSorts[0]?.bind (syms.sorts[·]?)).bind kindOfSortName?
    | return none
  let ty ← checkKindType k
  match info.name with
  | "$less"      => return some (← binOp ty ``LT.lt)
  | "$lesseq"    => return some (← binOp ty ``LE.le)
  | "$greater"   => return some (← binOp ty ``GT.gt)
  | "$greatereq" => return some (← binOp ty ``GE.ge)
  | _ => return none

/-- Everything in the refutation's symbol table that Vampire interprets. -/
def meanings (syms : Symbols) : MetaM Meanings := do
  let mut m : Meanings := {}
  for (n, nm) in syms.sorts do
    if let some k := kindOfSortName? nm then
      m := { m with sorts := m.sorts.insert n (← checkKindType k) }
  for (f, info) in syms.funs do
    if let some e ← funMeaning? syms info then
      m := { m with funs := m.funs.insert f e }
  for (p, info) in syms.preds do
    if let some e ← predMeaning? syms info then
      m := { m with preds := m.preds.insert p e }
  return m

/-! ## The arithmetic a step is closed by -/

/-- Parse one tactic in the environment the replay is running in.

See the note at the top: the tactics are Mathlib's and this package does not import it,
so they are resolved here rather than in a quotation. -/
def parseTactic (src : String) : MetaM (TSyntax `tactic) := do
  match Parser.runParserCategory (← getEnv) `tactic src (fileName := "<vampire.arith>") with
  | .ok stx => return ⟨stx⟩
  | .error e =>
    throwError "vampire: this step is arithmetic and needs Mathlib's `{src}`, which \
      does not parse here: {e}. Arithmetic replay needs `import Mathlib`."

/-- The cascade a theory axiom or an evaluation is closed by, cheapest first.

`ring` for the equational axioms, which is most of them — commutativity, associativity,
distributivity, `$uminus($uminus(X)) = X`. `linarith` for the order axioms, `omega` for
the integer ones, `nlinarith` where a product of unknowns is involved, `norm_num` for a
claim about literals alone, and `positivity` for the sign facts. Each is tried under
`intros`, since every one of these is universally quantified over its variables —
and an axiom like non-reflexivity, `¬(X < X)`, has its hypothesis introduced by the same
`intros`, which is what leaves `linarith` something to work with.

The order is by cost and by how often it fires, not by strength: `ring` closes the
majority and is the cheapest.

**Every alternative ends in `done`.** Without it the cascade silently half-works:
`norm_num` and `simp_arith` *succeed* on a goal they only partially simplify, so they
win the `first` and leave a goal behind, and `proveBy` then reports the step as
unproved with no indication that a later alternative would have closed it. That is how
`tha non-reflexivity` failed. `t <;> done` fails when `t` leaves anything, so the
cascade moves on. -/
def arithTactics : List String :=
  -- `ring` and `linarith` first: they close the great majority and are the cheapest.
  -- The `simp`-based ones last, because they are the ones that run away.
  ["intros <;> ring",
   "intros <;> norm_num",
   "intros <;> linarith",
   "intros <;> omega",
   "intros; by_contra hc; push_neg at hc; casesm* _ ∧ _; linarith",
   "intros; by_contra hc; push_neg at hc; casesm* _ ∧ _; omega",
   "intros; norm_num at *",
   "intros <;> nlinarith",
   "intros <;> positivity",
   "intros <;> tauto",
   "intros; simp_arith at *",
   "intros <;> simp_all",
   "intros; ring_nf at *; linarith",
   "intros; ring_nf at *; simp_all",
   "intros; by_contra hc; push_neg at hc; casesm* _ ∧ _; nlinarith",
   "intros <;> field_simp <;> ring",
   -- `theory normalization` rewrites a whole *formula*: `A ≥ 0` becomes `¬A < 0`,
   -- `n * ep * vo` becomes `ep * vo * n`, and the conjunctions come back reassociated.
   -- So the premise and the conclusion are logically equivalent with ring-equal atoms,
   -- and what closes it is normalising both sides the same way rather than proving
   -- either. `ring_nf at *` settles the atoms and the `simp only` set settles the
   -- comparisons; `tauto` or `grind` then matches the propositional skeletons.
   "intros; simp only [ge_iff_le, gt_iff_lt, not_lt, not_le] at *; ring_nf at *; tauto",
   "intros; simp only [ge_iff_le, gt_iff_lt, not_lt, not_le] at *; ring_nf at *; grind",
   "intros; ring_nf at *; grind",
   "intros <;> grind"]

/-- Heartbeats one alternative of the cascade may spend before it is abandoned.

Every alternative is wrapped in `set_option maxHeartbeats … in`, and that is not a
nicety. `first | A | B` moves on when `A` *fails*, and a `simp` that runs away does not
fail -- it exhausts the whole declaration's budget and takes the replay down with it. On
`p15_NRA`, an NRA problem of thirty steps, one `simp_all` inside a `theory normalization`
step used the entire 400000 heartbeats, so the step reported a `simp` timeout and the
theorem came out resting on `sorryAx` -- with `ring_nf; linarith`, three alternatives
later, able to close it in a fraction of that.

A per-alternative bound turns "the cascade hangs" into "this alternative failed, try the
next", which is what a cascade is for. It is deliberately generous: the point is to stop
a runaway, not to make a slow proof fail. -/
def arithHeartbeats : Nat := 40000

/-- The cascade for a step that *rewrites a formula* rather than computing a value.

`theory normalization` and the ALASCA normalisations restate a unit over the same
numbers: `A ≥ 0` becomes `¬A < 0`, `n * ep * vo` becomes `ep * vo * n`, and the
conjunctions come back reassociated. Premise and conclusion are logically equivalent with
ring-equal atoms, so what closes them is normalising both sides the same way -- not
proving either, which is what `ring` and `linarith` try to do.

Sharing `arithTactics` cost 8.5 seconds a step. That list is ordered for a theory
*axiom*, where `ring` closes the majority, so the alternative that settles a formula
rewrite sat seventeenth and every step paid for sixteen failures first -- on
`NRA_intersection-example-simple_proof-node9729`, one `theory normalization` step was
8537ms of an 8677ms replay. Ordering the same alternatives for what this rule actually is
is the whole fix; nothing here is new machinery. -/
def normTactics : List String :=
  [-- The structural bridge first, exactly as `.flatten` uses it: where a normalisation
   -- is only a reassociation or a reorientation -- which many of them are -- it walks the
   -- premise and the conclusion together and builds the proof from the correspondence,
   -- in a fraction of a millisecond. `h0` is what `intros` named the premise; a step with
   -- no premise has no `h0`, the alternative fails to elaborate, and the cascade moves
   -- on, which is the same fallback every other line here relies on.
   "vampire_bridge h0",
   -- The same walk, with the atoms `Vampire/Bridge/Poly.lean` recognised as the *same*
   -- comparison left as goals for `linarith`.
   --
   -- This is the line a normalisation that is not purely structural needs, which is most
   -- of them: `theory normalization` restates `A ≥ 0` as `¬ A < 0` and reassociates the
   -- sum inside it, so premise and conclusion agree formula-for-formula and disagree in
   -- every atom. `vampire_bridge h0` above walks the shape and misses at the first such
   -- atom; this one hands each one over on its own, already decided to be provable.
   --
   -- Why the goals being small is the whole point. On `LRA_formula_040` the step-2
   -- obligation is a 200-atom `∃∀∃`-quantified tree, and the lines below ask `ring_nf at
   -- *` and `grind` to take it whole -- which is both why the step failed and where the
   -- time went. Split, each goal is two comparisons over the same numbers and `linarith`
   -- settles it outright, while the quantifier prefix, the junction tree and the
   -- reassociation are the bridge's own rules and cost a walk.
   -- `linarith only [hb]`, and the restriction is the whole cost of this line.
   --
   -- Each goal `vampire_bridge_arith` hands back is one comparison implying another, and
   -- `Poly` has already decided they are the same comparison -- so the *only* hypothesis
   -- that can matter is the antecedent, which is what `rename_i hb` names. Left
   -- unrestricted, `linarith` collects every hypothesis in scope, and at a leaf that scope
   -- is everything `transport` opened on the way down: the premise, one hypothesis per
   -- `Exists.elim`, and the enclosing quantified formulas themselves. It preprocesses all
   -- of them, per leaf, to prove something that needs one.
   --
   -- Measured on `NRA_intersection-example-simple_proof-node715350` step 2, a `theory
   -- normalization` over a formula wide enough to have a great many leaves.
   -- The fallback is *inside* the `<;>`, per goal, and that placement is the point.
   --
   -- As a separate alternative behind this one it is a pessimisation: `proveBy` wraps each
   -- line in `<;> done`, so one leaf needing more than its antecedent fails the whole line,
   -- and the next line then walks the formula again and re-runs `linarith` on every leaf --
   -- including the ones already closed. Measured that way, `LRA_formula_071` went from 7.2s
   -- to over the 15s wall. Per goal, an awkward leaf costs one extra `linarith` on itself
   -- and nothing anywhere else.
   --
   -- `first` also covers `rename_i` failing outright on a goal with no inaccessible name to
   -- rename, which would otherwise take the whole line down with it.
   "vampire_bridge_arith h0 <;> (first | (rename_i hb; linarith only [hb]) | linarith)",
   -- `nlinarith` behind those for the NRA problems, where a normalised atom can differ by
   -- a product of unknowns and the goal is no longer linear.
   "vampire_bridge_arith h0 <;> nlinarith",
   -- `grind` before `tauto`, and the order is measured rather than a preference. On
   -- `NRA_intersection-example-simple_proof-node9729`'s `theory normalization` step the
   -- `tauto` line spends 3197ms and *fails*; the `grind` line that follows it closes the
   -- same goal in 122ms. `tauto` stays, behind it, because it costs nothing when `grind`
   -- has already succeeded -- `proveBy` stops feeding lines to a closed goal.
   "simp only [ge_iff_le, gt_iff_lt, not_lt, not_le] at *; ring_nf at *; grind",
   "ring_nf at *; grind",
   "simp only [ge_iff_le, gt_iff_lt, not_lt, not_le] at *; ring_nf at *; tauto",
   "ring_nf at *; tauto",
   "intros <;> ring",
   "intros <;> linarith",
   "intros; norm_num at *",
   "intros <;> simp_all",
   "intros <;> grind",
   "intros; by_contra hc; push_neg at hc; casesm* _ ∧ _; linarith"]

/-- The script for a step whose whole content is arithmetic. -/
def scriptFrom (tactics : List String) : MetaM (Array (TSyntax `tactic)) := do
  -- One `try` per alternative, on its own line, rather than one nested `first`.
  --
  -- Semantically the same: `proveBy` stops feeding lines to the script once the goal is
  -- closed, so the first alternative that closes it is the last one that runs, and
  -- `<;> done` makes a partial success count as a failure so `try` backtracks it. What
  -- the separate lines buy is that `trace.vampire.timing.tactic` then times each
  -- alternative *individually*. Inside a `first` the whole cascade is one line and one
  -- number, which is how a step that spent 8.5 seconds looked exactly like a step that
  -- spent one millisecond -- there was no way to see which alternative was winning, or
  -- how much the ones before it cost, without rebuilding with the list cut down.
  tactics.toArray.mapM fun t =>
    parseTactic s!"try (set_option maxHeartbeats {arithHeartbeats} in (({t}) <;> done))"

/-- The bridge's lines, for any rule whose conclusion *restates* its premise.

`theory normalization` is the obvious such rule and `normTactics` puts these first, but
`evaluation` is one too: its conclusion is its premise with the arithmetic worked out, so
premise and conclusion agree formula-for-formula and differ inside the atoms, which is what
the bridge walks and `Vampire/Bridge/Poly.lean` decides.

Shared rather than repeated because `evaluation` did *not* have them, and the cost of that
was not a slow step but a **discarded refutation**. On

    theorem int_bound (n m : ℤ) (h : 2 * n ≤ m) (h₂ : 0 < n) : 2 ≤ m := by vampire [*]

the probe finds a refutation in 968ms whose step 11655 asks for

    (∀ v0 : ℤ, 0 < v0 + -0 ∨ ¬n < v0) → ∀ v0 : ℤ, ¬n < v0 ∨ 0 < v0

-- a reordered disjunction over an atom that lost a `+ -0`. Nothing in `arithTactics`
closes it, and it cannot: the conclusion is *false* on its own (`v0 = -5`, `n = -10`), so
it has to be got from the premise, and neither `omega` nor `linarith` instantiates a
premise's `∀`. The bridge introduces the conclusion's binder, instantiates the premise's at
it, matches the disjuncts by permutation and the atoms by normal form. Without these two
lines the whole refutation was thrown away and the tactic escalated through 42 portfolio
strategies to find another -- 5.7s of a 7.2s run spent on proofs it had already found. -/
def bridgeTactics : List String :=
  ["vampire_bridge h0",
   "vampire_bridge_arith h0 <;> (first | (rename_i hb; linarith only [hb]) | linarith)"]

/-- The script for a theory axiom or an evaluation. -/
def arithScript : MetaM (Array (TSyntax `tactic)) := scriptFrom arithTactics

/-- The script for an `evaluation`: the bridge first, then the theory-axiom cascade.

The bridge lines go first because an evaluation's conclusion restates its premise, and the
cascade stays behind them because an evaluation that really is a *computation* -- `2 * 3`
becoming `6` with no premise to walk from -- is what that cascade is ordered for. A theory
axiom keeps `arithScript` unchanged: it has no premise, so `h0` does not exist and the
bridge lines could only fail to elaborate. -/
def evalScript : MetaM (Array (TSyntax `tactic)) :=
  scriptFrom (bridgeTactics ++ arithTactics)

/-- The script for a formula-level arithmetic rewrite. -/
def normScript : MetaM (Array (TSyntax `tactic)) := scriptFrom normTactics

end Vampire.Arith
