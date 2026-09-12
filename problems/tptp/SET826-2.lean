-- SET826-2, from TPTP v9.3.1 (SET).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SET826-2.p`, beside this file. This is its statement in Lean:
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
variable {t_t__a t_v__V t_v__Y t_v__x : ι}
variable {t_tc__set : ι → ι}
variable {t_c__in t_c__lessequals : ι → ι → ι → Prop}

theorem T_SET826m2 : (∀ v0 v1 v2 v3 : ι, ((¬(t_c__in v3 v1 v0)) ∨ (¬(t_c__lessequals v1 v2 (t_tc__set v0))) ∨ (t_c__in v3 v2 v0))) → (t_c__in t_v__x t_v__V t_t__a) → (t_c__lessequals t_v__V t_v__Y (t_tc__set t_t__a)) → (¬(t_c__in t_v__x t_v__Y t_t__a)) → False := by
  vampire
