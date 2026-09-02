import Vampire

/-!
Smoke tests for the `vampire` frontend.

These pin current behaviour, not correctness: the tactic admits its goal, so every
theorem here depends on `sorryAx`. When the translation and replay layers land,
the `#print axioms` output below should drop `sorryAx`, and these become real tests.
-/

set_option linter.unusedVariables false

-- The paper's running example: a group of exponent two is commutative.
theorem exponent_two_comm {G : Type} (mul : G → G → G) (e : G)
    (assoc : ∀ x y z : G, mul (mul x y) z = mul x (mul y z))
    (idl : ∀ x : G, mul e x = x)
    (sq : ∀ x : G, e = mul x x) :
    ∀ x y : G, mul x y = mul y x := by
  vampire

-- Propositional.
theorem prop_triv (a b : Prop) (h : a) (hab : a → b) : b := by
  vampire

-- Equality with an uninterpreted function.
theorem congr_triv {α : Type} (f : α → α) (a b : α) (h : a = b) : f a = f b := by
  vampire

#print axioms exponent_two_comm
#print axioms prop_triv
#print axioms congr_triv
