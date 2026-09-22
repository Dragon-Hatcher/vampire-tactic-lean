import Vampire

-- Each of these must NOT be refutable; the tactic is expected to fail.
/-- error: vampire did not refute the goal: the problem is satisfiable, so the goal does not follow from what was sent. Try passing more hypotheses, raising the timeout, or `+mono`. -/
#guard_msgs in
example (p q : Prop) (hp : p) : q := by vampire (timeout := 5) [*]

/-- error: vampire did not refute the goal: the problem is satisfiable, so the goal does not follow from what was sent. Try passing more hypotheses, raising the timeout, or `+mono`. -/
#guard_msgs in
example {ι : Type} (f : ι → ι) (a : ι) : f a = a := by vampire (timeout := 5) [*]

-- Without hints the query states only the goal, so this is not refutable.
/-- error: vampire did not refute the goal: the problem is satisfiable, so the goal does not follow from what was sent. Try passing more hypotheses, raising the timeout, or `+mono`. -/
#guard_msgs in
example (p q : Prop) (hp : p) (hpq : p → q) : q := by vampire (timeout := 5)

-- The same under `+mono`: monomorphization is sent what `vampire` is, and the
-- local context only when it is named.
/-- error: vampire did not refute the goal: the problem is satisfiable, so the goal does not follow from what was sent. Try passing more hypotheses, raising the timeout, or `+mono`. -/
#guard_msgs in
example (p q : Prop) (hp : p) (hpq : p → q) : q := by vampire +mono (timeout := 5)
