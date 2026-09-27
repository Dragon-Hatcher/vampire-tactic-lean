import Vampire

/-!
Replay is precompiled without Mathlib, so it names the lemmas it certifies
steps by (`Vampire.Lemmas`) rather than referring to them, and a lemma renamed
or removed would otherwise go unnoticed until a proof needed it. Every name its
sources spell out is looked up here: as `` `Vampire.Lemmas.name ``, or as a
string of one of the lemmas' prefixes. The floor bounds' `fb_{variant}` is
built from a number, so its six are named here.
-/

open Lean Elab Command

/-- The lemma names `text` spells out. -/
private def namesIn (text : String) : Array String := Id.run do
  let prefixes := ["tha_", "fm_", "lf_", "fb_", "viras_", "ifm_", "isint_", "fe_", "coh_", "eq_"]
  let isNameChar (c : Char) : Bool := c.isAlphanum || c == '_' || c == '\''
  let mut found := #[]
  -- `` `Vampire.Lemmas.name ``, but for a family, `fm_*`, which prose names.
  for piece in (text.splitOn "`Vampire.Lemmas.").drop 1 do
    let name := (piece.takeWhile isNameChar).toString
    unless name.endsWith "_" do found := found.push name
  -- `"prefix_…"`
  for piece in (text.splitOn "\"").drop 1 do
    let name := (piece.takeWhile isNameChar).toString
    -- A bare prefix is the start of a name built from its parts, each of
    -- which is spelled out where it is chosen.
    if prefixes.any (fun p => name.startsWith p && name != p)
        && (piece.drop name.length).startsWith "\"" then
      found := found.push name
  return found

#eval show CommandElabM PUnit from do
  let here : System.FilePath := ← getFileName
  let root := (here.parent.getD ".") / ".." / "replay" / "VampireReplay" / "Reconstruct"
  let files ← root.walkDir
  let mut names : Std.HashSet String := {}
  for file in files do
    if file.extension == some "lean" then
      for name in namesIn (← IO.FS.readFile file) do
        names := names.insert name
  for i in [0:6] do names := names.insert s!"fb_{i}"
  let env ← getEnv
  let missing := names.toArray.filter fun n => !env.contains (`Vampire.Lemmas ++ n.toName)
  unless missing.isEmpty do
    throwError "replay names lemmas that `Vampire.Lemmas` does not have: {missing.qsort (· < ·)}"
