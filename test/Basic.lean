import Vampire

example : True := by vampire

example (p q : Prop) (hp : p) (h : p → q) : q := by vampire 10
