import Vampire

/-! Run the hard-coded problem and show the refutation Vampire found. -/

open Vampire Vampire.Ffi

#eval show IO Unit from do
  match ← runBuiltinProblem with
  | none => throw <| IO.userError "no refutation found"
  | some proof =>
    let p ← atom 0
    let q ← atom 1
    let name := fun (a : UInt32) => if a == p then "p" else if a == q then "q" else s!"?{a}"
    IO.println s!"refutation with {proof.size} steps:"
    for s in proof do
      let prem := if s.premises.isEmpty then "input"
                  else "from " ++ String.intercalate "," (s.premises.map toString).toList
      IO.println s!"  [{s.number}] {s.clauseString name}   ({prem}, rule {s.rule})"
