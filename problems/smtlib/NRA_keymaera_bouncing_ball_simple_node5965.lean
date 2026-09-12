-- NRA_keymaera_bouncing_ball_simple_node5965, from SMT-LIB (NRA, status unsat).
-- The vampire binary refutes it in 0.63s
-- (`--input_syntax smtlib2 --mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `NRA_keymaera_bouncing_ball_simple_node5965.smt2`, beside this file. An SMT problem is a
-- conjunction of assertions asked for satisfiability, so an `unsat` one becomes: take
-- the assertions as hypotheses, derive `False`. One hypothesis per `assert`, in order;
-- `let` is inlined, because neither this tactic nor a first-order prover has one.
--
-- Arithmetic is over ℝ.  This is *nonlinear* real arithmetic, the one fragment
-- that needs ℝ rather than ℚ: `x * x = 2` is satisfiable over the reals and
-- not over the rationals.
import Mathlib
import Vampire
set_option maxHeartbeats 0
set_option maxRecDepth 1000000
set_option linter.all false

theorem T_bouncing_x2dball_x2dsimple_x2dnode5965 (v : ℝ) (tuscore2dollarskuscore8 : ℝ) (ts1uscore8 : ℝ) (vuscore2dollarskuscore8 : ℝ) (huscore2dollarskuscore8 : ℝ) (h : ℝ) (t1uscore0dollarskuscore8 : ℝ) (a1 : (¬(∃ (ts1uscore8 : ℝ), ((((((((((((0 ≤ ts1uscore8) ∧ (ts1uscore8 ≤ t1uscore0dollarskuscore8)) → (((huscore2dollarskuscore8 + ((-5) * (ts1uscore8 * ts1uscore8))) + (ts1uscore8 * vuscore2dollarskuscore8)) ≥ 0)) ∧ (t1uscore0dollarskuscore8 ≥ 0)) ∧ (huscore2dollarskuscore8 = ((5 * (tuscore2dollarskuscore8 * tuscore2dollarskuscore8)) + (vuscore2dollarskuscore8 * tuscore2dollarskuscore8)))) ∧ (huscore2dollarskuscore8 ≥ 0)) ∧ (tuscore2dollarskuscore8 ≥ 0)) ∧ (vuscore2dollarskuscore8 ≤ (((-10) * tuscore2dollarskuscore8) + 16))) ∧ (tuscore2dollarskuscore8 ≤ ((16 : ℤ) / 5))) ∧ (h = 0)) ∧ (v = 16)) → ((((huscore2dollarskuscore8 + ((-5) * (t1uscore0dollarskuscore8 * t1uscore0dollarskuscore8))) + (t1uscore0dollarskuscore8 * vuscore2dollarskuscore8)) = 0) ∨ ((((-10) * t1uscore0dollarskuscore8) + vuscore2dollarskuscore8) ≤ (((-10) * (t1uscore0dollarskuscore8 + tuscore2dollarskuscore8)) + 16))))))) :
    False := by
  vampire [*]
