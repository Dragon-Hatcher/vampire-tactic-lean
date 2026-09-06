import Vampire

-- The unused-variable linter cannot see through `vampire [*]`, which takes the whole
-- local context: every hypothesis below *is* used, just not by name in a proof term.
set_option linter.unusedVariables false
set_option linter.unusedSectionVars false

/-!
The embedded prover is reachable, and its global state can be reset.

`#eval` runs in the same process as the elaborator, so this exercises the real linked
Vampire rather than a subprocess.
-/

open Vampire.Ffi

-- Baseline: a freshly initialised environment has the five built-in sorts.
#eval show IO Unit from do
  IO.println s!"init            : {← init}"
  IO.println s!"sorts           : {← signatureTypeCons}   (expect 5: $i $o $int $real $rat)"
  IO.println s!"functions       : {← signatureFunctions}"

-- Dirty the signature, reset, and confirm the environment really came back.
#eval show IO Unit from do
  let before ← signatureFunctions
  let dirty  ← selftestDirty
  let st     ← reset
  let after  ← signatureFunctions
  let sorts  ← signatureTypeCons
  IO.println s!"before={before} after adding a symbol={dirty} reset={st} after reset={after} sorts={sorts}"
  if after == before && sorts == 5 then
    IO.println "reset restored the environment: the library is reusable"
  else
    throw <| IO.userError s!"reset did not restore the environment ({before} -> {dirty} -> {after})"

-- Repeated reset must stay stable, not drift.
#eval show IO Unit from do
  for i in [0:3] do
    let _ ← selftestDirty
    let _ ← reset
    let f ← signatureFunctions
    let s ← signatureTypeCons
    IO.println s!"cycle {i}: functions={f} sorts={s}"
