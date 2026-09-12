-- LCL035-1, from TPTP v9.3.1 (LCL).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `LCL035-1.p`, beside this file. This is its statement in Lean:
-- one type variable for TPTP's single sort, functors as functions into it, predicates
-- as functions into `Prop`, and the whole problem as `axiom₁ → … → axiomₙ → goal`.
-- `False` as the goal means the problem states no conjecture and asks for a refutation.
--
-- Only `Vampire` is imported, for the `vampire` tactic that closes the goal.
import Vampire
set_option maxHeartbeats 0
set_option maxRecDepth 100000000
set_option linter.all false
universe u
variable {ι : Type u}
variable [inst : Inhabited ι]
variable {t_a t_falsehood : ι}
variable {t_implies : ι → ι → ι}
variable {t_is__a__theorem : ι → Prop}

theorem T_LCL035m1 : (∀ v0 v1 : ι, ((¬(t_is__a__theorem (t_implies v0 v1))) ∨ (¬(t_is__a__theorem v0)) ∨ (t_is__a__theorem v1))) → (∀ v2 v3 v4 v5 v6 : ι, (t_is__a__theorem (t_implies (t_implies (t_implies (t_implies (t_implies v4 v5) (t_implies v6 t_falsehood)) v2) v3) (t_implies (t_implies v3 v4) (t_implies v6 v4))))) → (¬(t_is__a__theorem (t_implies t_falsehood t_a))) → False := by
  vampire
