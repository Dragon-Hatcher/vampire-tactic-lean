/-
Ported essentially verbatim from lean-smt (`Smt/Data/Graph.lean`), Copyright (c)
2021-2022 by the authors listed in that project's AUTHORS file. Released under
Apache 2.0; see `NOTICE`.
-/
import Lean

/-!
# A small directed graph

Used to order declarations: a symbol must be declared to Vampire before anything that
mentions it, and `orderedDfs` visits each vertex after its dependencies.
-/

open Lean

abbrev Vampire.Graph (α) (β) [BEq α] [Hashable α] := Std.HashMap α (Std.HashMap α β)

namespace Vampire.Graph

variable {α β : Type} [BEq α] [Hashable α] (g : Graph α β) (v u : α) (e : β)

def empty : Graph α β := {}

def vertices : List α := g.fold (fun a v _ => v :: a) []

def neighbors? : Option (List α) :=
  g[v]? >>= fun es => some (es.fold (fun a v _ => v :: a) [])

def neighbors! : List α :=
  match g.neighbors? v with
  | some ns => ns
  | none    => panic! "vertex is not in the graph"

def addVertex : Graph α β := g.insert v {}

def addEdge : Graph α β := g.insert v ((g[v]!).insert u e)

def weight? : Option β := g[v]? >>= fun es => es[u]?

/-- Depth-first traversal from `vs`, calling `f` on a vertex after all of its
dependencies. -/
partial def orderedDfs {m : Type → Type} [Monad m] (vs : List α) (f : α → m Unit) : m Unit :=
  StateT.run' (s := ({} : Std.HashSet α)) do
    for v in vs do
      visitVertex v
where
  visitVertex (v : α) : StateT (Std.HashSet α) m Unit := do
    let seen ← get
    if seen.contains v then
      return
    set (seen.insert v)
    for u in g.neighbors! v do
      visitVertex u
    f v

open Lean MessageData in
protected def toMessageData [ToMessageData α] [ToMessageData β] : MessageData :=
  bracket "{" (joinSep (g.vertices.map formatVertex) ("," ++ Format.line)) "}"
where
  formatVertex (v : α) : MessageData :=
    m!"{v} ↦ {formatNeighbors (g.neighbors! v)}"
  formatNeighbors (ns : List α) : MessageData :=
    bracket "{" (joinSep (ns.map toMessageData) ("," ++ Format.line)) "}"

instance [ToMessageData α] [ToMessageData β] : ToMessageData (Graph α β) where
  toMessageData g := Graph.toMessageData g

end Vampire.Graph
