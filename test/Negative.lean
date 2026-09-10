import Vampire

-- Each of these must NOT be refutable; the tactic is expected to fail.
/-- error: vampire did not refute the goal (Vampire.TerminationReason.satisfiable). Try passing more hypotheses, raising the timeout, or `+mono`. -/
#guard_msgs in
example (p q : Prop) (hp : p) : q := by vampire (timeout := 5) [*]

/-- error: vampire did not refute the goal (Vampire.TerminationReason.satisfiable). Try passing more hypotheses, raising the timeout, or `+mono`. -/
#guard_msgs in
example {ι : Type} (f : ι → ι) (a : ι) : f a = a := by vampire (timeout := 5) [*]

-- Without hints the query states only the goal, so this is not refutable.
/-- error: vampire did not refute the goal (Vampire.TerminationReason.satisfiable). Try passing more hypotheses, raising the timeout, or `+mono`. -/
#guard_msgs in
example (p q : Prop) (hp : p) (hpq : p → q) : q := by vampire (timeout := 5)
