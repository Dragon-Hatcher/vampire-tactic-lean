import Vampire

open Vampire

private partial def showTerm (s : Solver) (t : Term) : IO String := do
  if t.isVar then return s!"X{t.var}"
  let name := match s.functionName t.functor with
    | .ok n => n
    | .error e => s!"<{e}>"
  if t.arity == 0 then return name
  let args ← t.args.mapM (showTerm s)
  return s!"{name}({String.intercalate ", " args.toList})"

private def run (path : String) : IO PUnit := do
  let input ← IO.FS.readFile path
  match ← (do
      let s ← Solver.new
      s.setOption "time_limit" "10"
      s.parseTPTP input
      s.solve
      return s).run with
  | .error e => IO.println s!"error: {e}"
  | .ok s =>
    IO.println s!"termination: {repr s.terminationReason}"
    let some r := s.refutation | IO.println "no refutation"
    -- walk to a non-empty ancestor clause and inspect its structure
    let rec find : Nat → Vampire.Unit → Option Clause
      | 0, _ => none
      | d + 1, u =>
        match u.clause? with
        | some c => if c.size > 0 then some c else u.parents.findSome? (find d)
        | none => u.parents.findSome? (find d)
    match find 6 r with
    | none => IO.println "no non-empty ancestor clause found"
    | some c =>
      IO.println s!"clause: {c}  (size {c.size})"
      for l in c.literals do
        let pname := match s.predicateName l.functor with
          | .ok n => n
          | .error e => s!"<{e}>"
        let args ← l.args.mapM (showTerm s)
        IO.println s!"  literal: polarity={l.polarity} equality={l.isEquality} \
          pred={pname} arity={l.arity}"
        for a in args do IO.println s!"    arg: {a}"

#eval run "problems/COL002-4.p"
