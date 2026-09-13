-- COM017+1, from TPTP v9.3.1 (COM).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.11s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `COM017+1.p`, beside this file. This is its statement in Lean:
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
variable {t_xR t_xa t_xb t_xc t_xu t_xv : ι}
variable {t_aElement0 t_aRewritingSystem0 t_isConfluent0 t_isLocallyConfluent0 t_isTerminating0 : ι → Prop}
variable {t_iLess0 : ι → ι → Prop}
variable {t_aNormalFormOfIn0 t_aReductOfIn0 t_sdtmndtasgtdt0 t_sdtmndtplgtdt0 : ι → ι → ι → Prop}

theorem T_COM017p1 : (∀ v0 : ι, ((t_aElement0 v0) → True)) → (∀ v1 : ι, ((t_aRewritingSystem0 v1) → True)) → (∀ v2 v3 : ι, (((t_aElement0 v2) ∧ (t_aRewritingSystem0 v3)) → (∀ v4 : ι, ((t_aReductOfIn0 v4 v2 v3) → (t_aElement0 v4))))) → (∀ v5 v6 : ι, (((t_aElement0 v5) ∧ (t_aElement0 v6)) → ((t_iLess0 v5 v6) → True))) → (∀ v7 v8 v9 : ι, (((t_aElement0 v7) ∧ (t_aRewritingSystem0 v8) ∧ (t_aElement0 v9)) → ((t_sdtmndtplgtdt0 v7 v8 v9) → True))) → (∀ v10 v11 v12 : ι, (((t_aElement0 v10) ∧ (t_aRewritingSystem0 v11) ∧ (t_aElement0 v12)) → ((t_sdtmndtplgtdt0 v10 v11 v12) ↔ ((t_aReductOfIn0 v12 v10 v11) ∨ (∃ v13 : ι, ((t_aElement0 v13) ∧ (t_aReductOfIn0 v13 v10 v11) ∧ (t_sdtmndtplgtdt0 v13 v11 v12))))))) → (∀ v14 v15 v16 v17 : ι, (((t_aElement0 v14) ∧ (t_aRewritingSystem0 v15) ∧ (t_aElement0 v16) ∧ (t_aElement0 v17)) → (((t_sdtmndtplgtdt0 v14 v15 v16) ∧ (t_sdtmndtplgtdt0 v16 v15 v17)) → (t_sdtmndtplgtdt0 v14 v15 v17)))) → (∀ v18 v19 v20 : ι, (((t_aElement0 v18) ∧ (t_aRewritingSystem0 v19) ∧ (t_aElement0 v20)) → ((t_sdtmndtasgtdt0 v18 v19 v20) ↔ ((v18 = v20) ∨ (t_sdtmndtplgtdt0 v18 v19 v20))))) → (∀ v21 v22 v23 v24 : ι, (((t_aElement0 v21) ∧ (t_aRewritingSystem0 v22) ∧ (t_aElement0 v23) ∧ (t_aElement0 v24)) → (((t_sdtmndtasgtdt0 v21 v22 v23) ∧ (t_sdtmndtasgtdt0 v23 v22 v24)) → (t_sdtmndtasgtdt0 v21 v22 v24)))) → (∀ v25 : ι, ((t_aRewritingSystem0 v25) → ((t_isConfluent0 v25) ↔ (∀ v26 v27 v28 : ι, (((t_aElement0 v26) ∧ (t_aElement0 v27) ∧ (t_aElement0 v28) ∧ (t_sdtmndtasgtdt0 v26 v25 v27) ∧ (t_sdtmndtasgtdt0 v26 v25 v28)) → (∃ v29 : ι, ((t_aElement0 v29) ∧ (t_sdtmndtasgtdt0 v27 v25 v29) ∧ (t_sdtmndtasgtdt0 v28 v25 v29)))))))) → (∀ v30 : ι, ((t_aRewritingSystem0 v30) → ((t_isLocallyConfluent0 v30) ↔ (∀ v31 v32 v33 : ι, (((t_aElement0 v31) ∧ (t_aElement0 v32) ∧ (t_aElement0 v33) ∧ (t_aReductOfIn0 v32 v31 v30) ∧ (t_aReductOfIn0 v33 v31 v30)) → (∃ v34 : ι, ((t_aElement0 v34) ∧ (t_sdtmndtasgtdt0 v32 v30 v34) ∧ (t_sdtmndtasgtdt0 v33 v30 v34)))))))) → (∀ v35 : ι, ((t_aRewritingSystem0 v35) → ((t_isTerminating0 v35) ↔ (∀ v36 v37 : ι, (((t_aElement0 v36) ∧ (t_aElement0 v37)) → ((t_sdtmndtplgtdt0 v36 v35 v37) → (t_iLess0 v37 v36))))))) → (∀ v38 v39 : ι, (((t_aElement0 v38) ∧ (t_aRewritingSystem0 v39)) → (∀ v40 : ι, ((t_aNormalFormOfIn0 v40 v38 v39) ↔ ((t_aElement0 v40) ∧ (t_sdtmndtasgtdt0 v38 v39 v40) ∧ (¬(∃ v41 : ι, (t_aReductOfIn0 v41 v40 v39)))))))) → (∀ v42 : ι, (((t_aRewritingSystem0 v42) ∧ (t_isTerminating0 v42)) → (∀ v43 : ι, ((t_aElement0 v43) → (∃ v44 : ι, (t_aNormalFormOfIn0 v44 v43 v42)))))) → (t_aRewritingSystem0 t_xR) → ((t_isLocallyConfluent0 t_xR) ∧ (t_isTerminating0 t_xR)) → ((t_aElement0 t_xa) ∧ (t_aElement0 t_xb) ∧ (t_aElement0 t_xc)) → (∀ v45 v46 v47 : ι, (((t_aElement0 v45) ∧ (t_aElement0 v46) ∧ (t_aElement0 v47) ∧ (t_sdtmndtasgtdt0 v45 t_xR v46) ∧ (t_sdtmndtasgtdt0 v45 t_xR v47)) → ((t_iLess0 v45 t_xa) → (∃ v48 : ι, ((t_aElement0 v48) ∧ (t_sdtmndtasgtdt0 v46 t_xR v48) ∧ (t_sdtmndtasgtdt0 v47 t_xR v48)))))) → ((t_sdtmndtplgtdt0 t_xa t_xR t_xb) ∧ (t_sdtmndtplgtdt0 t_xa t_xR t_xc)) → ((t_aElement0 t_xu) ∧ (t_aReductOfIn0 t_xu t_xa t_xR) ∧ (t_sdtmndtasgtdt0 t_xu t_xR t_xb)) → ((t_aElement0 t_xv) ∧ (t_aReductOfIn0 t_xv t_xa t_xR) ∧ (t_sdtmndtasgtdt0 t_xv t_xR t_xc)) → (∃ v49 : ι, ((t_aElement0 v49) ∧ (t_sdtmndtasgtdt0 t_xu t_xR v49) ∧ (t_sdtmndtasgtdt0 t_xv t_xR v49))) := by
  vampire
