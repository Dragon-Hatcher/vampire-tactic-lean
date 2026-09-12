-- LRA_keymaera_intersection_example_simple_proof_node679744, from SMT-LIB (LRA, status unsat).
-- The vampire binary refutes it in 0.01s
-- (`--input_syntax smtlib2 --mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `LRA_keymaera_intersection_example_simple_proof_node679744.smt2`, beside this file. An SMT problem is a
-- conjunction of assertions asked for satisfiability, so an `unsat` one becomes: take
-- the assertions as hypotheses, derive `False`. One hypothesis per `assert`, in order;
-- `let` is inlined, because neither this tactic nor a first-order prover has one.
--
-- Arithmetic is over ℚ.  The source is linear real arithmetic, and ℚ and ℝ are
-- elementarily equivalent for it -- both are dense ordered divisible abelian
-- groups and that theory is complete -- so `unsat` transfers from the `Real`
-- the problem is written over to the ℚ it is stated over here.
import Mathlib
import Vampire
set_option maxHeartbeats 0
set_option maxRecDepth 1000000
set_option linter.all false

theorem T_intersection_x2dexample_x2dsimple_x2eproof_x2dnode679744 (v1 : ℚ) (v2uscore1dollarskuscore826 : ℚ) (x1uscore1dollarskuscore565 : ℚ) (A : ℚ) (B : ℚ) (v2 : ℚ) (I1 : ℚ) (I2 : ℚ) (x2 : ℚ) (v1uscore1dollarskuscore826 : ℚ) (x1 : ℚ) (xI1 : ℚ) (V : ℚ) (xI2 : ℚ) (t3249uscore0 : ℚ) (ts3249uscore0 : ℚ) (ep : ℚ) (I2uscore1dollarskuscore826 : ℚ) (x2uscore1dollarskuscore592 : ℚ) (I1uscore1dollarskuscore826 : ℚ) (a1 : (¬(∃ (ts3249uscore0 : ℚ), (((((((((((((((((((((v2uscore1dollarskuscore826 = V) ∧ (xI2 = x2uscore1dollarskuscore592)) ∧ (v1uscore1dollarskuscore826 = V)) ∧ (xI1 = x1uscore1dollarskuscore565)) ∧ (I2uscore1dollarskuscore826 = 1)) ∧ (xI2 < x2uscore1dollarskuscore592)) ∧ (I1uscore1dollarskuscore826 = 0)) ∧ (I2uscore1dollarskuscore826 = 2)) ∧ (I1 = 2)) ∧ (xI1 < x1)) ∧ (I2 = 2)) ∧ (xI2 < x2)) ∧ (B > 0)) ∧ (v1 ≥ 0)) ∧ (v1 ≤ V)) ∧ (v2 ≥ 0)) ∧ (v2 ≤ V)) ∧ (A ≥ 0)) ∧ (V > 0)) ∧ (ep > 0)) → ((t3249uscore0 ≥ 0) → ((((0 ≤ ts3249uscore0) ∧ (ts3249uscore0 ≤ t3249uscore0)) → (((((v1uscore1dollarskuscore826 ≥ 0) ∧ (v1uscore1dollarskuscore826 ≤ V)) ∧ (v2uscore1dollarskuscore826 ≥ 0)) ∧ (v2uscore1dollarskuscore826 ≤ V)) ∧ ((ts3249uscore0 + 0) ≤ ep))) → (((1 : ℤ) = 2) ∨ ((2 : ℤ) = 2)))))))) :
    False := by
  vampire [*]
