-- MGT030+1, from TPTP v9.3.1 (MGT).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `MGT030+1.p`, beside this file. This is its statement in Lean:
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
variable {t_efficient__producers t_first__movers : ι}
variable {t_growth__rate : ι → ι → ι}
variable {t_environment t_stable : ι → Prop}
variable {t_greater t_greater__or__equal t_in__environment : ι → ι → Prop}
variable {t_subpopulations : ι → ι → ι → ι → Prop}

theorem T_MGT030p1 : (∀ v0 : ι, (((t_environment v0) ∧ (∃ v1 : ι, ((t_in__environment v0 v1) ∧ (∀ v2 : ι, (((t_subpopulations t_first__movers t_efficient__producers v0 v2) ∧ (t_greater__or__equal v2 v1)) → (t_greater (t_growth__rate t_efficient__producers v2) (t_growth__rate t_first__movers v2))))))) → (∃ v3 : ι, ((t_in__environment v0 v3) ∧ (¬(t_greater (t_growth__rate t_efficient__producers v3) (t_growth__rate t_first__movers v3))) ∧ (∀ v4 : ι, (((t_subpopulations t_first__movers t_efficient__producers v0 v4) ∧ (t_greater v4 v3)) → (t_greater (t_growth__rate t_efficient__producers v4) (t_growth__rate t_first__movers v4)))))))) → (∀ v5 : ι, (((t_environment v5) ∧ (t_stable v5)) → (∃ v6 : ι, ((t_in__environment v5 v6) ∧ (∀ v7 : ι, (((t_subpopulations t_first__movers t_efficient__producers v5 v7) ∧ (t_greater__or__equal v7 v6)) → (t_greater (t_growth__rate t_efficient__producers v7) (t_growth__rate t_first__movers v7)))))))) → (∀ v8 : ι, (((t_environment v8) ∧ (t_stable v8)) → (∃ v9 : ι, ((t_in__environment v8 v9) ∧ (¬(t_greater (t_growth__rate t_efficient__producers v9) (t_growth__rate t_first__movers v9))) ∧ (∀ v10 : ι, (((t_subpopulations t_first__movers t_efficient__producers v8 v10) ∧ (t_greater v10 v9)) → (t_greater (t_growth__rate t_efficient__producers v10) (t_growth__rate t_first__movers v10)))))))) := by
  vampire
