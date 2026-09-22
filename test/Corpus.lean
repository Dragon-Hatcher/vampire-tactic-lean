import Vampire

/-!
A sample of the corpus under `problems/`: the quickest problem of each family,
elaborated as the whole corpus is, by `scripts/run-problems.py`. Each problem is
a Lean file of its own that imports Mathlib, so they run as processes of their
own rather than in this file; the whole corpus is `lake run problems`.
-/

open Lean Elab Command

#eval show CommandElabM PUnit from do
  let here : System.FilePath := ← getFileName
  let root := (here.parent.getD ".") / ".."
  let out ← IO.Process.output {
    cmd := "python3"
    args := #["scripts/run-problems.py", "--split", "smoke", "-j", "2"]
    cwd := root.toString }
  unless out.exitCode == 0 do
    throwError "problems of the smoke split failed:\n{out.stdout}{out.stderr}"
