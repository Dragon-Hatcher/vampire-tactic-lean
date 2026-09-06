import Lean

/-!
# The logic the replay's scripts are written in

Vampire's Lean output is written in a vocabulary: one tactic per preprocessing inference
rule, over a library of propositional and quantifier equivalences. The replay is a port
of that generator, so it needs the same vocabulary, and this is it.

It used to come from [VampLean](https://github.com/vprover/vamplean). That was a bad
dependency in three separate ways: it could only be a *path* dependency, so this package
could not be installed from git; it declares a dozen of these at the root under names
Mathlib also uses, so no file could import both; and it carries no licence, so it could
not be vendored either. Everything here is in `Vampire`, which settles all three.

**The equivalences have to match Vampire, not merely be true.** Each step's script leaves
a formula in the shape the *next* step was generated against, so a lemma set that reaches
a logically equivalent but differently oriented or differently associated form breaks the
chain rather than the step. Where an orientation looks arbitrary below, it is Vampire's.
-/

namespace Vampire

universe u
variable {ι : Sort u} {a b c d : Prop} {p q : ι → Prop}

/-! ## Exclusive or

Vampire has a real xor connective — `<~>` in its output — and the ENNF and NNF rules
rewrite *into* it. Desugaring it to `¬(a ↔ b)` would leave formulas those rules never
fire on, so it is a definition of its own. -/

/-- Vampire's `<~>`. -/
def Xor' (a b : Prop) : Prop := (a ∧ ¬b) ∨ (b ∧ ¬a)

theorem xor_def : Xor' a b ↔ (a ∧ ¬b) ∨ (b ∧ ¬a) := Iff.rfl

theorem xor_self (a : Prop) : Xor' a a ↔ False := by
  simp only [Xor', and_not_self_iff, or_self]

theorem true_xor (a : Prop) : Xor' True a ↔ ¬a := by
  simp only [Xor', true_and, not_true, and_false, or_false]

theorem xor_true (a : Prop) : Xor' a True ↔ ¬a := by
  simp only [Xor', not_true, and_false, true_and, false_or]

theorem false_xor (a : Prop) : Xor' False a ↔ a := by
  simp only [Xor', false_and, not_false_iff, and_true, false_or]

theorem xor_false (a : Prop) : Xor' a False ↔ a := by
  simp only [Xor', not_false_iff, and_true, false_and, or_false]

/-! ## Negation, implication, equivalence

`¬(a ↔ b) ↔ Xor' a b` is what makes the xor connective appear during ENNF; the rest
eliminate `→` and push `¬` inward. -/

theorem not_iff_xor (a b : Prop) : ¬(a ↔ b) ↔ Xor' a b := by
  simp only [Xor']; by_cases ha : a <;> by_cases hb : b <;> simp_all

theorem not_xor_iff (a b : Prop) : ¬Xor' a b ↔ (a ↔ b) := by
  simp only [Xor']; by_cases ha : a <;> by_cases hb : b <;> simp_all

/-- `→` as a disjunction with the *conclusion first*, which is the orientation Vampire's
ENNF leaves behind. -/
theorem imp_iff_or_not : (b → a) ↔ a ∨ ¬b := by
  by_cases hb : b <;> by_cases ha : a <;> simp_all

/-- The same the other way round, for the scripts that want it. -/
theorem imp_iff_not_or : (a → b) ↔ ¬a ∨ b := by
  by_cases ha : a <;> by_cases hb : b <;> simp_all

theorem not_and_or : ¬(a ∧ b) ↔ ¬a ∨ ¬b := by
  by_cases ha : a <;> by_cases hb : b <;> simp_all

theorem not_imp_not : (¬a → ¬b) ↔ (b → a) := by
  by_cases ha : a <;> by_cases hb : b <;> simp_all

theorem imp_congr_eq (h₁ : a = c) (h₂ : b = d) : (a → b) = (c → d) := by
  subst h₁; subst h₂; rfl

theorem by_contradiction (h : ¬a → False) : a := by
  by_cases ha : a
  · exact ha
  · exact (h ha).elim

/-! ## Quantifiers over a trivial body

Vampire drops these during tautology removal. The `∀` cases need the sort inhabited --
over an empty sort `∀ _, False` is vacuously true -- and Vampire assumes its sorts are
inhabited throughout, which is where the instance comes from. -/

theorem forall_true_iff : (∀ _ : ι, True) ↔ True := by simp

theorem forall_false_iff [Nonempty ι] : (∀ _ : ι, False) ↔ False :=
  ⟨fun h => h (Classical.choice inferInstance), False.elim⟩

theorem exists_true_iff [Nonempty ι] : (∃ _ : ι, True) ↔ True :=
  ⟨fun _ => trivial, fun _ => ⟨Classical.choice inferInstance, trivial⟩⟩

theorem exists_false_iff : (∃ _ : ι, False) ↔ False := by simp

/-! ## Prenexing

One quantifier out of one connective, in both argument positions. `simp` applied
repeatedly with these pulls the whole prefix to the front. -/

theorem or_forall_prenex : (a ∨ ∀ v, p v) ↔ ∀ v, a ∨ p v := by
  constructor
  · rintro (ha | hp) v
    · exact Or.inl ha
    · exact Or.inr (hp v)
  · intro h
    by_cases ha : a
    · exact Or.inl ha
    · exact Or.inr fun v => (h v).resolve_left ha

theorem or_forall_prenex_left : ((∀ v, p v) ∨ a) ↔ ∀ v, p v ∨ a := by
  simp only [or_comm (a := ∀ v, p v)]
  simp only [or_forall_prenex, or_comm (b := a)]

theorem and_forall_prenex [Nonempty ι] : (a ∧ ∀ v, p v) ↔ ∀ v, a ∧ p v := by
  constructor
  · rintro ⟨ha, hp⟩ v; exact ⟨ha, hp v⟩
  · intro h
    exact ⟨(h (Classical.choice inferInstance)).1, fun v => (h v).2⟩

theorem and_forall_prenex_left [Nonempty ι] : ((∀ v, p v) ∧ a) ↔ ∀ v, p v ∧ a := by
  simp only [and_comm (a := ∀ v, p v)]
  simp only [and_forall_prenex, and_comm (b := a)]

theorem or_exists_prenex [Nonempty ι] : (a ∨ ∃ v, p v) ↔ ∃ v, a ∨ p v := by
  constructor
  · rintro (ha | ⟨v, hv⟩)
    · exact ⟨Classical.choice inferInstance, Or.inl ha⟩
    · exact ⟨v, Or.inr hv⟩
  · rintro ⟨v, ha | hv⟩
    · exact Or.inl ha
    · exact Or.inr ⟨v, hv⟩

theorem or_exists_prenex_left [Nonempty ι] : ((∃ v, p v) ∨ a) ↔ ∃ v, p v ∨ a := by
  simp only [or_comm (a := ∃ v, p v)]
  simp only [or_exists_prenex, or_comm (b := a)]

theorem and_exists_prenex : (a ∧ ∃ v, p v) ↔ ∃ v, a ∧ p v := by
  constructor
  · rintro ⟨ha, v, hv⟩; exact ⟨v, ha, hv⟩
  · rintro ⟨v, ha, hv⟩; exact ⟨ha, v, hv⟩

theorem and_exists_prenex_left : ((∃ v, p v) ∧ a) ↔ ∃ v, p v ∧ a := by
  simp only [and_comm (a := ∃ v, p v)]
  simp only [and_exists_prenex, and_comm (b := a)]

/-! ## To negation normal form

`↔` and xor become conjunctions of disjunctions. The orientations are Vampire's: its NNF
puts the negated argument second in one conjunct and first in the other, and a later step
is generated against exactly that. -/

theorem our_iff_to_nnf (a b : Prop) : (a ↔ b) ↔ (a ∨ ¬b) ∧ (b ∨ ¬a) := by
  by_cases ha : a <;> by_cases hb : b <;> simp_all

theorem our_not_iff_to_nnf (a b : Prop) : ¬(a ↔ b) ↔ (¬b ∨ ¬a) ∧ (b ∨ a) := by
  by_cases ha : a <;> by_cases hb : b <;> simp_all

theorem our_xor_to_nnf (a b : Prop) : Xor' a b ↔ (¬b ∨ ¬a) ∧ (b ∨ a) := by
  simp only [Xor']; by_cases ha : a <;> by_cases hb : b <;> simp_all

theorem our_not_xor_to_nnf (a b : Prop) : ¬Xor' a b ↔ (a ∨ ¬b) ∧ (b ∨ ¬a) := by
  simp only [Xor']; by_cases ha : a <;> by_cases hb : b <;> simp_all

/-! ## To conjunctive normal form

Distributing `∨` over `∧`, then putting the quantifier prefix back inside each conjunct.
`cnf_prenex1` is the one that needs the sort inhabited: dropping a `∀` whose body does
not mention it is only sound over a non-empty sort. -/

theorem cnf1 : (a ∨ (b ∧ c)) ↔ (a ∨ b) ∧ (a ∨ c) := by
  by_cases ha : a <;> simp_all [and_or_left, or_and_left]

theorem cnf2 : ((a ∧ b) ∨ c) ↔ (a ∨ c) ∧ (b ∨ c) := by
  by_cases hc : c <;> simp_all [and_or_right, or_and_right]

theorem cnf_prenex1 [Nonempty ι] : (∀ _ : ι, a) ↔ a :=
  ⟨fun h => h (Classical.choice inferInstance), fun h _ => h⟩

theorem cnf_prenex2 : (∀ v, p v ∧ q v) ↔ (∀ v, p v) ∧ (∀ v, q v) :=
  ⟨fun h => ⟨fun v => (h v).1, fun v => (h v).2⟩, fun ⟨h₁, h₂⟩ v => ⟨h₁ v, h₂ v⟩⟩

theorem cnf_prenex3 : (∀ v, p v ∧ q v) ↔ (∀ v, p v) ∧ (∀ w, q w) := cnf_prenex2

/-! ## AVATAR's SAT part

The SAT refutation is replayed by unit propagation, and these are the shapes it
normalises the clauses into first. -/

theorem sat_not_norm1 : (¬¬a) ↔ a := Classical.not_not

theorem sat_or_norm1 : (a ∨ b) ↔ (¬a → b) := by
  by_cases ha : a <;> simp_all

theorem sat_or_norm2 : (¬a ∨ b) ↔ (a → b) := by
  by_cases ha : a <;> simp_all

theorem sat_or_norm3 : (a ∨ ¬b) ↔ (b → a) := by
  by_cases hb : b <;> simp_all

theorem sat_or_norm4 : (¬a ∨ ¬b) ↔ (a → ¬b) := by
  by_cases ha : a <;> simp_all

/-! ## The tactics Vampire's proofs are written in

One per preprocessing inference rule, so a step the refutation calls `flattening` is
replayed by a tactic of that name. Each is `simp only` over the sets above.

`maxSteps` is raised throughout. A prenex prefix of ninety binders over an eighty-way
disjunction needs far more rewrite steps than simp's default budget, and exceeding that
budget is a silent partial normalisation rather than an error -- which shows up later as
a step whose premise is the wrong shape, a long way from the cause.

`failIfUnchanged := false` because these run over whatever the previous step produced:
a formula with no implication left in it is a normal case for `ennf_transformation`, not
a failure.
-/

open Lean

syntax "ennf_transformation" "at" ident : tactic
macro_rules
  | `(tactic| ennf_transformation at $h:ident) =>
    `(tactic| simp (config := { maxSteps := 10000000, failIfUnchanged := false }) only
        [imp_iff_or_not, not_and_or, not_or, Classical.not_not, not_iff_xor, not_xor_iff,
         Classical.not_forall, not_exists, xor_self] at $h:ident)

syntax "nnf_transformation" "at" ident : tactic
macro_rules
  | `(tactic| nnf_transformation at $h:ident) =>
    `(tactic| simp (config := { maxSteps := 10000000, failIfUnchanged := false }) only
        [our_iff_to_nnf, our_not_iff_to_nnf, our_xor_to_nnf, our_not_xor_to_nnf]
        at $h:ident)

syntax "flattening" (" at " ident)? : tactic
macro_rules
  | `(tactic| flattening) =>
    `(tactic| simp (config := { maxSteps := 10000000, failIfUnchanged := false }) only
        [and_assoc, or_assoc, Classical.not_not])
  | `(tactic| flattening at $h:ident) =>
    `(tactic| simp (config := { maxSteps := 10000000, failIfUnchanged := false }) only
        [and_assoc, or_assoc, Classical.not_not] at $h:ident)

syntax "remove_tauto" "at" ident : tactic
macro_rules
  | `(tactic| remove_tauto at $h:ident) =>
    `(tactic| simp (config := { maxSteps := 10000000, failIfUnchanged := false }) only
        [true_and, and_true, false_and, and_false, or_true, true_or, false_or, or_false,
         true_iff, iff_true, false_iff, iff_false, true_xor, xor_true, false_xor,
         xor_false, forall_true_iff, forall_false_iff, exists_true_iff, exists_false_iff]
        at $h:ident)

/-- Universals to the front. Two passes, because a quantifier in either argument of
either connective has its own rule and one pass leaves the other position alone. -/
syntax "prenexify" (" at " ident)? : tactic
macro_rules
  | `(tactic| prenexify) =>
    `(tactic| repeat (first
        | simp (config := { maxSteps := 10000000, failIfUnchanged := true }) only
            [or_forall_prenex_left, and_forall_prenex_left]
        | simp (config := { maxSteps := 10000000, failIfUnchanged := true }) only
            [and_forall_prenex, or_forall_prenex]))
  | `(tactic| prenexify at $h:ident) =>
    `(tactic| repeat (first
        | simp (config := { maxSteps := 10000000, failIfUnchanged := true }) only
            [or_forall_prenex_left, and_forall_prenex_left] at $h:ident
        | simp (config := { maxSteps := 10000000, failIfUnchanged := true }) only
            [and_forall_prenex, or_forall_prenex] at $h:ident))

/-- Existentials to the front. `Classical.skolem` is what lifts one out from under a
universal, which is what makes a skolem symbol come back as a function of the universals
it sits under rather than as something buried under binders. -/
syntax "exists_prenex" (" at " ident)? : tactic
macro_rules
  | `(tactic| exists_prenex) =>
    `(tactic| repeat (first
        | simp (config := { maxSteps := 10000000, failIfUnchanged := true }) only
            [or_exists_prenex_left, and_exists_prenex_left, Classical.skolem]
        | simp (config := { maxSteps := 10000000, failIfUnchanged := true }) only
            [and_exists_prenex, or_exists_prenex, Classical.skolem]))
  | `(tactic| exists_prenex at $h:ident) =>
    `(tactic| repeat (first
        | simp (config := { maxSteps := 10000000, failIfUnchanged := true }) only
            [or_exists_prenex_left, and_exists_prenex_left, Classical.skolem] at $h:ident
        | simp (config := { maxSteps := 10000000, failIfUnchanged := true }) only
            [and_exists_prenex, or_exists_prenex, Classical.skolem] at $h:ident))

/-- Distribute to CNF, then put the prefix back inside each conjunct. -/
syntax "cnfify" "at" ident : tactic
macro_rules
  | `(tactic| cnfify at $h:ident) =>
    `(tactic|
        simp (config := { maxSteps := 10000000, failIfUnchanged := false }) only
          [cnf1, cnf2, and_assoc] at $h:ident <;>
        simp (config := { maxSteps := 10000000, failIfUnchanged := false }) only
          [cnf_prenex1, cnf_prenex2, cnf_prenex3] at $h:ident)

/-- Close a goal against a proof that differs from it only in how its equations are
oriented. Vampire orients an equation by its term ordering and Lean's copy need not
agree, so `exact` alone fails on a proof that is otherwise exactly right. -/
syntax "symm_match" "using" term : tactic
macro_rules
  | `(tactic| symm_match using $h:term) =>
    `(tactic| first
        | exact $h
        | exact ($h).symm
        | (have _symm_match := $h; grind))

end Vampire
