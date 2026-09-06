import Vampire

-- The unused-variable linter cannot see through `vampire [*]`, which takes the whole
-- local context: every hypothesis below *is* used, just not by name in a proof term.
set_option linter.unusedVariables false
set_option linter.unusedSectionVars false

/-!
A goal, translated to Vampire and closed by replaying the refutation it found.

The replay is a port of Vampire's Lean code generator: one lemma per inference, proved
by the tactic script the generator would have written, chained together. `#print axioms`
says what the result rests on.
-/

theorem resolution_two_step (p q : Prop) (h : p ∨ q) (hp : ¬p) (hq : ¬q) : False := by
  vampire [*]

theorem index_two_subgroup_normal
    {α : Type} [Inhabited α]
    -- α is a group
    (mul : α → α → α) (inv : α → α) (one : α) (H : α → Prop) (a : α)
    (mul_assoc : ∀ x y z, mul (mul x y) z = mul x (mul y z))
    (one_mul : ∀ x, mul one x = x)
    (mul_left_inv : ∀ x, mul (inv x) x = one)
    -- H is a subgroup
    (H_mul : ∀ x y, H x → H y → H (mul x y))
    (H_inv : ∀ x, H x → H (inv x))
    -- H has index 2:
    (a_not_H : ¬ H a)
    (index_two : ∀ x, H x ∨ H (mul x (inv a)))
    -- therefore it is normal
    : ∀ g h, H h → H (mul (mul g h) (inv g)) := by
  vampire [*]

theorem squares_in_subgroup_implies_normal
    {α : Type}
    (mul : α → α → α) (inv : α → α) (one : α) (H : α → Prop)
    -- α is a group
    (mul_assoc : ∀ x y z, mul (mul x y) z = mul x (mul y z))
    (one_mul : ∀ x, mul one x = x)
    (mul_left_inv : ∀ x, mul (inv x) x = one)
    -- H is a subgroup
    (H_one : H one)
    (H_mul : ∀ x y, H x → H y → H (mul x y))
    (H_inv : ∀ x, H x → H (inv x))
    -- every square is in H
    (square_mem : ∀ x, H (mul x x))
    : ∀ g h, H h → H (mul (mul g h) (inv g)) := by
  vampire [*]

theorem commutator_mem_implies_normal
    {α : Type}
    (mul : α → α → α)
    (inv : α → α)
    (one : α)
    (H : α → Prop)

    (mul_assoc :
      ∀ x y z, mul (mul x y) z = mul x (mul y z))
    (one_mul :
      ∀ x, mul one x = x)
    (mul_left_inv :
      ∀ x, mul (inv x) x = one)

    (H_one :
      H one)
    (H_mul :
      ∀ x y, H x → H y → H (mul x y))
    (H_inv :
      ∀ x, H x → H (inv x))

    -- Every commutator lies in H:
    (commutator_mem :
      ∀ x y,
        H (mul
            (mul (mul x y) (inv x))
            (inv y)))

    : ∀ g h, H h → H (mul (mul g h) (inv g)) := by
  vampire [*]

#print axioms resolution_two_step

theorem coset_commutation_implies_normal
    {α : Type}
    (mul : α → α → α)
    (inv : α → α)
    (one : α)
    (H : α → Prop)

    (mul_assoc :
      ∀ x y z, mul (mul x y) z = mul x (mul y z))

    (one_mul :
      ∀ x, mul one x = x)

    (mul_left_inv :
      ∀ x, mul (inv x) x = one)

    (H_one :
      H one)

    (H_mul :
      ∀ x y, H x → H y → H (mul x y))

    (H_inv :
      ∀ x, H x → H (inv x))

    -- Every left coset is some right coset.
    (cosets :
      ∀ g,
        ∃ k,
          ∀ h,
            H h →
            ∃ h',
              H h' ∧
              mul g h = mul h' k)

    : ∀ g h, H h → H (mul (mul g h) (inv g)) := by
  vampire [*]

-- Arithmetic reaches the translator as its elaborated form: `a + b` is
-- `@HAdd.hAdd Nat Nat Nat instHAdd a b`, whose first three arguments are types in term
-- position. Plain `vampire` therefore cannot take this goal, trivial though it is, and
-- says so; `+mono` abstracts the operation into an uninterpreted symbol and it goes
-- through. Kept as a test because the diagnostic and this remedy are what a user hitting
-- arithmetic will meet.
theorem add_refl (a b : Nat) : a + b = a + b := by
  vampire +mono [*]
