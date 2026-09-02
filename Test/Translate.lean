import Vampire

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
  vampire?
  exact hpq hp

example (p q : Prop) (h : p ∨ q) (hp : ¬p) (hq : ¬q) : False := by
  vampire?
  exact h.elim hp hq

end Propositional

section FirstOrder

-- Uninterpreted sort, function and predicate; a quantified hypothesis.
example (α : Type) (f : α → α) (P : α → Prop) (a : α)
    (h₁ : ∀ x, P x → P (f x)) (h₂ : P a) : P (f (f a)) := by
  vampire?
  exact h₁ _ (h₁ _ h₂)

-- Equality between first-order terms.
example (α : Type) (f : α → α) (a : α) (h : ∀ x, f x = x) : f (f a) = a := by
  vampire?
  simp [h]

example (α : Type) (f : α → α) (a b : α) (h : a = b) : f (f a) = f (f b) := by
  vampire?
  subst h; rfl

-- An existential goal, which becomes a negated existential for Vampire to skolemise.
example (α : Type) (P : α → Prop) (h : ∀ x, P x) (a : α) : ∃ y, P y := by
  vampire?
  exact ⟨a, h a⟩

-- A hint pulls in something the local context does not have.
example (α : Type) (r : α → α → Prop) (h : ∀ x y, r x y → r y x) (a b : α) :
    r a b → r b a := by
  vampire? [h]
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
  vampire? [near]
  exact h

noncomputable def twice (p : Point) : Point := dist p p

example (a : Point) (h : dist a a = origin) : twice a = origin := by
  vampire? [twice]
  simp [twice, h]

end Definitions

section NotFirstOrder

/-! A hypothesis with no first-order reading is dropped rather than being fatal — that
is what makes it reasonable to sweep up the whole local context. An explicitly named
hint that fails to translate is still an error. -/

set_option trace.vampire true in
example (α : Type) [Inhabited α] (l : List α) (P : α → Prop) (a : α)
    (_hl : l.length = 0) (h : ∀ x, P x) : P a := by
  vampire?
  exact h a

-- Polymorphic, so it is skipped, and Vampire is left without enough to refute.
example (α : Type) (f : α → α) (a : α) (h : ∀ (β : Type) (g : β → β) (x : β), g x = x) :
    f a = a := by
  vampire?
  exact h α f a

end NotFirstOrder

section Admitted

/-! `vampire` runs the same pipeline and, when the prover refutes the goal, admits it
with a warning: replaying an arbitrary refutation as a Lean proof is not implemented
yet. The dependency on `sorryAx` is the honest record of that. -/

theorem admitted_for_now (p q : Prop) (hp : p) (hpq : p → q) : q := by
  vampire

#print axioms admitted_for_now

end Admitted
