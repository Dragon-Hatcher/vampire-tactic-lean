-- CSR059+1, from TPTP v9.3.1 (CSR).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `CSR059+1.p`, beside this file. This is its statement in Lean:
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
variable {t_c__basekb t_c__georegion__l4__x56__y47 t_c__georegion__l4__x57__y47 t_c__tptpgeo__member5__mt t_c__tptpgeo__spindlecollectormt t_c__universalvocabularymt : ι}
variable {t_binarypredicate t_collection t_geographicalregion t_microtheory t_mtvisible t_predicate t_thing : ι → Prop}
variable {t_borderson t_disjointwith t_genlinverse t_genlmt t_genlpreds t_genls t_isa : ι → ι → Prop}

theorem T_CSR059p1 : (t_genlmt t_c__tptpgeo__spindlecollectormt t_c__tptpgeo__member5__mt) → ((t_mtvisible t_c__tptpgeo__member5__mt) → (t_borderson t_c__georegion__l4__x56__y47 t_c__georegion__l4__x57__y47)) → (∀ v0 v1 v2 : ι, (¬((t_isa v0 v1) ∧ (t_isa v0 v2) ∧ (t_disjointwith v1 v2)))) → (∀ v3 v4 v5 : ι, (((t_genlinverse v3 v4) ∧ (t_genlinverse v4 v5)) → (t_genlpreds v3 v5))) → (∀ v6 v7 : ι, ((t_genlpreds v6 v7) → (t_predicate v7))) → (∀ v8 v9 : ι, ((t_genlpreds v8 v9) → (t_predicate v9))) → (∀ v10 v11 : ι, ((t_genlpreds v10 v11) → (t_predicate v10))) → (∀ v12 v13 : ι, ((t_genlpreds v12 v13) → (t_predicate v12))) → (∀ v14 v15 v16 : ι, (((t_genlpreds v14 v15) ∧ (t_genlpreds v15 v16)) → (t_genlpreds v14 v16))) → (∀ v17 : ι, ((t_predicate v17) → (t_genlpreds v17 v17))) → (∀ v18 : ι, ((t_predicate v18) → (t_genlpreds v18 v18))) → (∀ v19 v20 : ι, ((t_genlinverse v19 v20) → (t_binarypredicate v20))) → (∀ v21 v22 : ι, ((t_genlinverse v21 v22) → (t_binarypredicate v21))) → (∀ v23 v24 v25 : ι, (((t_genlinverse v23 v24) ∧ (t_genlpreds v25 v23)) → (t_genlinverse v25 v24))) → (∀ v26 v27 v28 : ι, (((t_genlinverse v26 v27) ∧ (t_genlpreds v27 v28)) → (t_genlinverse v26 v28))) → (∀ v29 v30 : ι, ((t_disjointwith v29 v30) → (t_collection v30))) → (∀ v31 v32 : ι, ((t_disjointwith v31 v32) → (t_collection v31))) → (∀ v33 v34 : ι, ((t_disjointwith v33 v34) → (t_disjointwith v34 v33))) → (∀ v35 v36 v37 : ι, (((t_disjointwith v35 v36) ∧ (t_genls v37 v36)) → (t_disjointwith v35 v37))) → (∀ v38 v39 v40 : ι, (((t_disjointwith v38 v39) ∧ (t_genls v40 v38)) → (t_disjointwith v40 v39))) → (∀ v41 v42 : ι, ((t_isa v41 v42) → (t_collection v42))) → (∀ v43 v44 : ι, ((t_isa v43 v44) → (t_collection v44))) → (∀ v45 v46 : ι, ((t_isa v45 v46) → (t_thing v45))) → (∀ v47 v48 : ι, ((t_isa v47 v48) → (t_thing v47))) → (∀ v49 v50 v51 : ι, (((t_isa v49 v50) ∧ (t_genls v50 v51)) → (t_isa v49 v51))) → (t_mtvisible t_c__basekb) → (∀ v52 v53 : ι, ((t_borderson v52 v53) → (t_geographicalregion v53))) → (∀ v54 v55 : ι, ((t_borderson v54 v55) → (t_geographicalregion v54))) → (∀ v56 v57 : ι, ((t_borderson v56 v57) → (t_borderson v57 v56))) → (∀ v58 : ι, (¬(t_borderson v58 v58))) → (∀ v59 v60 : ι, (((t_mtvisible v59) ∧ (t_genlmt v59 v60)) → (t_mtvisible v60))) → (∀ v61 v62 : ι, ((t_genlmt v61 v62) → (t_microtheory v62))) → (∀ v63 v64 : ι, ((t_genlmt v63 v64) → (t_microtheory v64))) → (∀ v65 v66 : ι, ((t_genlmt v65 v66) → (t_microtheory v65))) → (∀ v67 v68 : ι, ((t_genlmt v67 v68) → (t_microtheory v67))) → (∀ v69 v70 v71 : ι, (((t_genlmt v69 v70) ∧ (t_genlmt v70 v71)) → (t_genlmt v69 v71))) → (∀ v72 : ι, ((t_microtheory v72) → (t_genlmt v72 v72))) → (∀ v73 : ι, ((t_microtheory v73) → (t_genlmt v73 v73))) → (t_mtvisible t_c__universalvocabularymt) → ((t_mtvisible t_c__tptpgeo__spindlecollectormt) → (t_borderson t_c__georegion__l4__x57__y47 t_c__georegion__l4__x56__y47)) := by
  vampire
