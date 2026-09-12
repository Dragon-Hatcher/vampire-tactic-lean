-- MGT036+3, from TPTP v9.3.1 (MGT).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `MGT036+3.p`, beside this file. This is its statement in Lean:
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
variable {t_efficient__producers t_first__movers t_zero : ι}
variable {t_growth__rate : ι → ι → ι}
variable {t_environment : ι → Prop}
variable {t_greater t_greater__or__equal : ι → ι → Prop}
variable {t_outcompetes : ι → ι → ι → Prop}
variable {t_subpopulations : ι → ι → ι → ι → Prop}

theorem T_MGT036p3 : (∀ v0 v1 v2 v3 : ι, (((t_environment v0) ∧ (t_subpopulations v1 v2 v0 v3)) → (t_subpopulations v2 v1 v0 v3))) → (∀ v4 v5 v6 v7 : ι, (((t_environment v4) ∧ (t_subpopulations v5 v6 v4 v7)) → (((t_greater__or__equal (t_growth__rate v6 v7) t_zero) ∧ (t_greater t_zero (t_growth__rate v5 v7))) ↔ (t_outcompetes v6 v5 v7)))) → (∃ v8 v9 : ι, ((t_environment v8) ∧ (t_subpopulations t_first__movers t_efficient__producers v8 v9) ∧ (t_greater__or__equal (t_growth__rate t_first__movers v9) t_zero) ∧ (t_greater t_zero (t_growth__rate t_efficient__producers v9)))) → (∃ v10 v11 : ι, ((t_environment v10) ∧ (t_subpopulations t_first__movers t_efficient__producers v10 v11) ∧ (t_outcompetes t_first__movers t_efficient__producers v11))) := by
  vampire
