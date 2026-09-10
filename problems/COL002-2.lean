-- COL002-2, from TPTP v9.3.1 (COL).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.29s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `COL002-2.p`, beside this file. This is its statement in Lean:
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
variable {t_b t_c t_fixed__pt t_i t_s : ι}
variable {t_apply : ι → ι → ι}
variable {t_fixed__point : ι → Prop}

theorem T_COL002m2 : (∀ v0 v1 v2 : ι, ((t_apply (t_apply (t_apply t_s v0) v1) v2) = (t_apply (t_apply v0 v2) (t_apply v1 v2)))) → (∀ v3 v4 v5 : ι, ((t_apply (t_apply (t_apply t_b v3) v4) v5) = (t_apply v3 (t_apply v4 v5)))) → (∀ v6 v7 v8 : ι, ((t_apply (t_apply (t_apply t_c v6) v7) v8) = (t_apply (t_apply v6 v8) v7))) → (∀ v9 : ι, ((t_apply t_i v9) = v9)) → (∀ v10 : ι, ((¬(v10 = (t_apply t_fixed__pt v10))) ∨ (t_fixed__point v10))) → (∀ v11 : ι, (¬(t_fixed__point (t_apply (t_apply (t_apply t_s (t_apply t_b v11)) t_i) (t_apply (t_apply t_s (t_apply t_b v11)) t_i))))) → False := by
  vampire
