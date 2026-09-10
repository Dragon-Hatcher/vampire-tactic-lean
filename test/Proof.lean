import Vampire

open Vampire

private def problems : List String :=
  ["COL002-4", "COM003-1", "GEO280+1", "GRP604-1", "LAT327+1",
   "LCL642+1.015", "NUM556+1", "SET827-2", "SEU328+1", "SWV866-1"]

private def report (name : String) : IO PUnit := do
  match ← prove (← IO.FS.readFile s!"problems/{name}.p") {timeout := 30} with
  | .error e => IO.println s!"{name}: error: {e}"
  | .ok p =>
    let steps := p.units.size
    match p.refutation? with
    | none => IO.println s!"{name}: {repr p.terminationReason}, no refutation"
    | some r =>
      IO.println s!"{name}: {repr p.terminationReason}, \
        {steps} steps, refutation [{r.number}] = {r}, \
        {(p.proofText.splitOn "\n").length} proof lines"

#eval problems.forM report
