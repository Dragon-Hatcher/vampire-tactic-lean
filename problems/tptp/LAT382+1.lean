-- LAT382+1, from TPTP v9.3.1 (LAT).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.11s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `LAT382+1.p`, beside this file. This is its statement in Lean:
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
variable {t_xS t_xT t_xu t_xv : ι}
variable {t_aElement0 t_aSet0 t_isEmpty0 : ι → Prop}
variable {t_aElementOf0 t_aSubsetOf0 t_sdtlseqdt0 : ι → ι → Prop}
variable {t_aInfimumOfIn0 t_aLowerBoundOfIn0 t_aSupremumOfIn0 t_aUpperBoundOfIn0 : ι → ι → ι → Prop}

theorem T_LAT382p1 : (∀ v0 : ι, ((t_aSet0 v0) → True)) → (∀ v1 : ι, ((t_aElement0 v1) → True)) → (∀ v2 : ι, ((t_aSet0 v2) → (∀ v3 : ι, ((t_aElementOf0 v3 v2) → (t_aElement0 v3))))) → (∀ v4 : ι, ((t_aSet0 v4) → ((t_isEmpty0 v4) ↔ (¬(∃ v5 : ι, (t_aElementOf0 v5 v4)))))) → (∀ v6 : ι, ((t_aSet0 v6) → (∀ v7 : ι, ((t_aSubsetOf0 v7 v6) ↔ ((t_aSet0 v7) ∧ (∀ v8 : ι, ((t_aElementOf0 v8 v7) → (t_aElementOf0 v8 v6)))))))) → (∀ v9 v10 : ι, (((t_aElement0 v9) ∧ (t_aElement0 v10)) → ((t_sdtlseqdt0 v9 v10) → True))) → (∀ v11 : ι, ((t_aElement0 v11) → (t_sdtlseqdt0 v11 v11))) → (∀ v12 v13 : ι, (((t_aElement0 v12) ∧ (t_aElement0 v13)) → (((t_sdtlseqdt0 v12 v13) ∧ (t_sdtlseqdt0 v13 v12)) → (v12 = v13)))) → (∀ v14 v15 v16 : ι, (((t_aElement0 v14) ∧ (t_aElement0 v15) ∧ (t_aElement0 v16)) → (((t_sdtlseqdt0 v14 v15) ∧ (t_sdtlseqdt0 v15 v16)) → (t_sdtlseqdt0 v14 v16)))) → (∀ v17 : ι, ((t_aSet0 v17) → (∀ v18 : ι, ((t_aSubsetOf0 v18 v17) → (∀ v19 : ι, ((t_aLowerBoundOfIn0 v19 v18 v17) ↔ ((t_aElementOf0 v19 v17) ∧ (∀ v20 : ι, ((t_aElementOf0 v20 v18) → (t_sdtlseqdt0 v19 v20)))))))))) → (∀ v21 : ι, ((t_aSet0 v21) → (∀ v22 : ι, ((t_aSubsetOf0 v22 v21) → (∀ v23 : ι, ((t_aUpperBoundOfIn0 v23 v22 v21) ↔ ((t_aElementOf0 v23 v21) ∧ (∀ v24 : ι, ((t_aElementOf0 v24 v22) → (t_sdtlseqdt0 v24 v23)))))))))) → (∀ v25 : ι, ((t_aSet0 v25) → (∀ v26 : ι, ((t_aSubsetOf0 v26 v25) → (∀ v27 : ι, ((t_aInfimumOfIn0 v27 v26 v25) ↔ ((t_aElementOf0 v27 v25) ∧ (t_aLowerBoundOfIn0 v27 v26 v25) ∧ (∀ v28 : ι, ((t_aLowerBoundOfIn0 v28 v26 v25) → (t_sdtlseqdt0 v28 v27)))))))))) → (∀ v29 : ι, ((t_aSet0 v29) → (∀ v30 : ι, ((t_aSubsetOf0 v30 v29) → (∀ v31 : ι, ((t_aSupremumOfIn0 v31 v30 v29) ↔ ((t_aElementOf0 v31 v29) ∧ (t_aUpperBoundOfIn0 v31 v30 v29) ∧ (∀ v32 : ι, ((t_aUpperBoundOfIn0 v32 v30 v29) → (t_sdtlseqdt0 v31 v32)))))))))) → (∀ v33 : ι, ((t_aSet0 v33) → (∀ v34 : ι, ((t_aSubsetOf0 v34 v33) → (∀ v35 v36 : ι, (((t_aSupremumOfIn0 v35 v34 v33) ∧ (t_aSupremumOfIn0 v36 v34 v33)) → (v35 = v36))))))) → (t_aSet0 t_xT) → (t_aSubsetOf0 t_xS t_xT) → ((t_aInfimumOfIn0 t_xu t_xS t_xT) ∧ (t_aInfimumOfIn0 t_xv t_xS t_xT)) → (t_xu = t_xv) := by
  vampire
