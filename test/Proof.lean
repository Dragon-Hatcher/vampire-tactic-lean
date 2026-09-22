import Vampire

/-!
The worker and the decoder, without the tactic: each problem is handed to
vampire as TPTP and has to come back refuted, with a proof that decodes.

The problems are found beside this file rather than in whatever directory the
test happens to run from.
-/

open Lean Elab Command Vampire

private def problems : List String :=
  ["COL002-4", "COM003-1", "GEO280+1", "GRP604-1", "LAT327+1",
   "LCL642+1.015", "NUM556+1", "SET827-2", "SEU328+1", "SWV866-1"]

#eval show CommandElabM PUnit from do
  let here : System.FilePath := ← getFileName
  let dir := (here.parent.getD ".") / ".." / "problems" / "tptp"
  for name in problems do
    let problem ← IO.FS.readFile (dir / s!"{name}.p")
    match ← prove problem { timeout := 30 } (searchFrom := here.parent.getD ".") with
    | .error e => throwError "{name}: the worker failed: {e}"
    | .ok (p, _) =>
      let some r := p.refutation?
        | throwError "{name}: not refuted: {p.terminationReason.describe}"
      unless r.clause?.any (·.isEmpty) do
        throwError "{name}: the refutation [{r.number}] is not the empty clause"
