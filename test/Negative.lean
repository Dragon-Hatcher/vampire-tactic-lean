import Vampire

-- Each of these must NOT be refutable; the tactic is expected to fail.
/-- error: vampire did not refute the goal: the goal does not follow from the hypotheses that were sent: vampire found a model of them and the negated goal. Try passing more hypotheses or raising the timeout. -/
#guard_msgs in
example (p q : Prop) (hp : p) : q := by vampire (timeout := 5) [*]

/-- error: vampire did not refute the goal: the goal does not follow from the hypotheses that were sent: vampire found a model of them and the negated goal. Try passing more hypotheses or raising the timeout. -/
#guard_msgs in
example {ι : Type} (f : ι → ι) (a : ι) : f a = a := by vampire (timeout := 5) [*]

-- Without hints the query states only the goal, so this is not refutable.
/-- error: vampire did not refute the goal: the goal does not follow from the hypotheses that were sent: vampire found a model of them and the negated goal. Try passing more hypotheses or raising the timeout. -/
#guard_msgs in
example (p q : Prop) (hp : p) (hpq : p → q) : q := by vampire (timeout := 5)

-- A hypothesis named in brackets has to be translatable: one that is not is
-- the error, where gathered by `*` it would be left out.
/--
error: cannot translate
  ↑n
to TPTP: TPTP has no natural numbers, so only a numeral can be cast from ℕ
-/
#guard_msgs in
example (p : Prop) (hp : p) (hq : ∀ n : Nat, (n : Int) ≥ 0) : p := by vampire [hp, hq]

-- A failed search says what was left out.
/-- error: vampire did not refute the goal: the goal does not follow from the hypotheses that were sent: vampire found a model of them and the negated goal. Try passing more hypotheses or raising the timeout. Left out, as they cannot be stated in TPTP: the hypotheses hq. -/
#guard_msgs in
example (p q : Prop) (hp : p) (hq : ∀ n : Nat, (n : Int) ≥ 0) : q := by vampire (timeout := 5) [*]

-- Options that would have vampire take steps replay cannot certify are refused.
/-- error: `virtual_integer_real_arithmetic_substitution=off` makes vampire take steps replay cannot follow; replay needs `virtual_integer_real_arithmetic_substitution=on` -/
#guard_msgs in
example (a b : Int) (h : a < b) : a ≤ b := by
  vampire (options := #[("virtual_integer_real_arithmetic_substitution", "off")]) [*]

/-- error: `alascai=on` makes vampire take steps replay cannot follow; replay needs `alasca_integer_conversion=off` -/
#guard_msgs in
example (a b : Int) (h : a < b) : a ≤ b := by
  vampire (strategy := "lrs+10_1:1_alascai=on:sd=2_100") [*]
