import Vampire

-- The unused-variable linter cannot see through `vampire [*]`, which takes the whole
-- local context: every hypothesis below *is* used, just not by name in a proof term.
set_option linter.unusedVariables false
set_option linter.unusedSectionVars false

/-!
Goal translation, end to end.

`vampire?` preprocesses the goal, translates it, builds the problem inside Vampire and
runs the prover — then reports the problem *as Vampire renders it*. That rendering is
the evidence: it is what the prover says it received, so it checks the transfer without
being the medium of it. `vampire?` leaves the goal alone, so every example below is
still proved the ordinary way.
-/

section Propositional

example (p q : Prop) (hp : p) (hpq : p → q) : q := by
  vampire? [*]
  exact hpq hp

example (p q : Prop) (h : p ∨ q) (hp : ¬p) (hq : ¬q) : False := by
  vampire? [*]
  exact h.elim hp hq

end Propositional

section FirstOrder

-- Uninterpreted sort, function and predicate; a quantified hypothesis.
example (α : Type) (f : α → α) (P : α → Prop) (a : α)
    (h₁ : ∀ x, P x → P (f x)) (h₂ : P a) : P (f (f a)) := by
  vampire? [*]
  exact h₁ _ (h₁ _ h₂)

-- Equality between first-order terms.
example (α : Type) (f : α → α) (a : α) (h : ∀ x, f x = x) : f (f a) = a := by
  vampire? [*]
  simp [h]

example (α : Type) (f : α → α) (a b : α) (h : a = b) : f (f a) = f (f b) := by
  vampire? [*]
  subst h; rfl

-- An existential goal, which becomes a negated existential for Vampire to skolemise.
example (α : Type) (P : α → Prop) (h : ∀ x, P x) (a : α) : ∃ y, P y := by
  vampire? [*]
  exact ⟨a, h a⟩

-- A hint pulls in something the local context does not have.
example (α : Type) (r : α → α → Prop) (h : ∀ x y, r x y → r y x) (a b : α) :
    r a b → r b a := by
  vampire? [*, h]
  exact h a b

end FirstOrder

section Definitions

/-! Vampire has no definitions, so one becomes a declaration plus its defining
equation — `<=>` for a proposition, `=` for a term. -/

inductive Point where | mk
axiom origin : Point
axiom dist : Point → Point → Point

def near (p q : Point) : Prop := dist p q = origin

example (a b : Point) (h : dist a b = origin) : near a b := by
  vampire? [*, near]
  exact h

noncomputable def twice (p : Point) : Point := dist p p

example (a : Point) (h : dist a a = origin) : twice a = origin := by
  vampire? [*, twice]
  simp [twice, h]

end Definitions

section NotFirstOrder

/-! A hypothesis with no first-order reading is dropped rather than being fatal — that
is what makes it reasonable to sweep up the whole local context. An explicitly named
hint that fails to translate is still an error. -/

set_option trace.vampire true in
example (α : Type) [Inhabited α] (l : List α) (P : α → Prop) (a : α)
    (_hl : l.length = 0) (h : ∀ x, P x) : P a := by
  vampire? [*]
  exact h a

-- Polymorphic, so it is skipped, and Vampire is left without enough to refute.
example (α : Type) (f : α → α) (a : α) (h : ∀ (β : Type) (g : β → β) (x : β), g x = x) :
    f a = a := by
  vampire? [*]
  exact h α f a

end NotFirstOrder

section Closed

/-! `vampire` runs the same pipeline and replays the refutation as a Lean proof term. -/

theorem modus_ponens (p q : Prop) (hp : p) (hpq : p → q) : q := by
  vampire [*]

theorem chained (α : Type) (f : α → α) (P : α → Prop) (a : α)
    (h₁ : ∀ x, P x → P (f x)) (h₂ : P a) : P (f (f a)) := by
  vampire [*]

theorem by_equality (α : Type) (f : α → α) (a : α) (h : ∀ x, f x = x) : f (f a) = a := by
  vampire [*]

theorem congruence (α : Type) (f : α → α) (a b : α) (h : a = b) : f (f a) = f (f b) := by
  vampire [*]

theorem symmetry_used (α : Type) (r : α → α → Prop) (h : ∀ x y, r x y → r y x) (a b : α) :
    r a b → r b a := by
  vampire [*]

-- Vampire's logic assumes every sort is non-empty and this refutation uses that: it
-- resolves `∀ x, P x` against `∀ x, ¬P x`. The generated file gets its witness from an
-- `[Inhabited ι]` in the preamble, so the replay asks for the same instance.
theorem exists_witness (α : Type) [Inhabited α] (P : α → Prop) (h : ∀ x, P x) : ∃ y, P y := by
  vampire [*]

-- Definitions, unfolded into their defining equations before the prover sees them.
theorem near_of_dist (a b : Point) (h : dist a b = origin) : near a b := by
  vampire [*, near]

-- Several hypotheses, only some of them used.
theorem picks_what_it_needs (α : Type) (r : α → α → Prop) (a b c : α)
    (irrelevant : ∀ x, r x x) (trans : ∀ x y z, r x y → r y z → r x z)
    (h₁ : r a b) (h₂ : r b c) : r a c := by
  vampire [*]

#print axioms modus_ponens
#print axioms chained
#print axioms by_equality
#print axioms congruence
#print axioms symmetry_used
-- AVATAR splits a clause into variable-disjoint components, names each with a
-- proposition, and closes the propositional structure with its SAT solver. The replay
-- follows the solver's own derivation rather than asking Lean to solve it again.
theorem avatar_two_components (α : Type) [Inhabited α] (P Q : α → Prop)
    (h : ∀ x y, P x ∨ Q y) (hp : ∀ x, ¬P x) (hq : ∀ y, ¬Q y) : False := by
  vampire [*]

theorem avatar_three_components (α : Type) [Inhabited α] (P Q R : α → Prop)
    (h : ∀ x y, P x ∨ Q y ∨ R x) (hp : ∀ x, ¬P x) (hq : ∀ y, ¬Q y) (hr : ∀ x, ¬R x) :
    False := by
  vampire [*]

-- Several rounds of superposition over an equational theory.
theorem group_right_identity (G : Type) (op : G → G → G) (e : G) (inv : G → G)
    (assoc : ∀ x y z, op (op x y) z = op x (op y z))
    (left_id : ∀ x, op e x = x)
    (left_inv : ∀ x, op (inv x) x = e) (a : G) : op a e = a := by
  vampire [*]

-- A conjunctive hypothesis clausifies into several clauses at once.
theorem conjunctive_hypothesis (α : Type) (P Q : α → Prop) (a : α)
    (h : (∀ x, P x) ∧ (∀ x, Q x)) : P a ∧ Q a := by
  vampire [*]

-- An existential hypothesis: Vampire skolemises it, and the replay supplies the
-- witnesses with `Classical.choose`.
theorem skolemised (α : Type) (P : α → Prop) (Q : Prop)
    (h : ∃ x, P x) (h2 : ∀ x, P x → Q) : Q := by
  vampire [*]

-- An equivalence, which preprocessing turns into a predicate definition.
theorem through_an_iff (α : Type) (P Q R : α → Prop) (a : α)
    (h : ∀ x, (P x ∧ Q x) ↔ R x) (hr : R a) : P a := by
  vampire [*]

#print axioms exists_witness
#print axioms conjunctive_hypothesis
#print axioms skolemised
#print axioms through_an_iff
#print axioms avatar_two_components
#print axioms avatar_three_components
#print axioms group_right_identity
#print axioms near_of_dist
#print axioms picks_what_it_needs

end Closed
