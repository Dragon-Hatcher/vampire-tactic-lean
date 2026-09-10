import Mathlib
import Vampire

example : True := by vampire

example (p q : Prop) (hp : p) (h : p → q) : q := by vampire 10

example (x : ℝ) (h : 0 < x) : 0 < x + x := by vampire
