#!/usr/bin/env python3
"""Compare two sweeps as they run, on the problems both have finished.

    ./compare.py <a.jsonl> <b.jsonl> [--labels vampire,smt] [--port 8090] [--once]

Both arguments are `sweep.py` results files. The page it serves polls, so it is
usable while one or both sweeps are still going — and it only ever counts problems
that *both* runs have recorded, because a run that is halfway through has finished
the easy problems and not the hard ones, and a partial denominator flatters it.
The header says how far each has got so the reader can see what the comparison is
still missing.

There is no chart here on purpose. Four numbers and a list of disagreements is a
KPI row and a table; a grouped bar of two categories would be decoration. What is
worth looking at is not the totals — those are one line each — but *which*
problems the two disagree about, which is the table.
"""

import argparse
import html
import json
import sys
from http.server import BaseHTTPRequestHandler, ThreadingHTTPServer
from pathlib import Path

# The skill's fixed status palette. These four are never themed and never reused as
# series colors; each is paired with a word in the markup, so no cell means anything
# by its color alone.
STATUS = {"good": "#0ca30c", "critical": "#d03b3b", "warning": "#fab219"}


def read(path: Path) -> dict[str, dict]:
    """The last record for each problem, keyed by name. A resumed sweep appends."""
    out: dict[str, dict] = {}
    if not path.is_file():
        return out
    for line in path.read_text().splitlines():
        line = line.strip()
        if not line:
            continue
        try:
            r = json.loads(line)
        except json.JSONDecodeError:
            continue  # a record still being written
        out[r["name"]] = r
    return out


def reason(r: dict) -> str:
    """One phrase for why a run failed, short enough for a table cell."""
    if r["state"] == "passed":
        return ""
    text = str(r.get("reason") or "")
    if text.startswith("cpu limit"):
        return "ran out of CPU"
    if text == "depends on sorryAx":
        return "did not prove it"
    return text[:60] or "failed"


def compare(a: dict, b: dict, labels: tuple[str, str]) -> dict:
    both = sorted(set(a) & set(b))
    apass = {n for n in both if a[n]["state"] == "passed"}
    bpass = {n for n in both if b[n]["state"] == "passed"}
    only_a = sorted(apass - bpass)
    only_b = sorted(bpass - apass)
    # Time is only comparable on the problems *both* prove. A tool that fails a hard
    # problem spends its whole budget failing, so putting that in a total rewards
    # giving up early; and a tool that proves something the other does not is being
    # timed on work the other never did.
    shared = sorted(apass & bpass)
    cpu_a = sum((a[n].get("cpu") or 0) for n in shared)
    cpu_b = sum((b[n].get("cpu") or 0) for n in shared)
    rows = [
        {
            "name": n,
            "winner": labels[0] if n in only_a else labels[1],
            "why": reason(b[n]) if n in only_a else reason(a[n]),
            "loser": labels[1] if n in only_a else labels[0],
            "seconds": round((a[n] if n in only_a else b[n]).get("cpu") or 0),
        }
        for n in sorted(only_a + only_b)
    ]
    return {
        "labels": labels,
        "done": [len(a), len(b)],
        "common": len(both),
        "bothPass": len(apass & bpass),
        "onlyA": len(only_a),
        "onlyB": len(only_b),
        "neither": len(both) - len(apass | bpass),
        "passA": len(apass),
        "passB": len(bpass),
        "cpuA": round(cpu_a),
        "cpuB": round(cpu_b),
        "rows": rows,
    }


PAGE = """<!doctype html>
<meta charset="utf-8"><title>%(ta)s vs %(tb)s</title>
<style>
  .viz-root {
    color-scheme: light;
    --surface-1: #fcfcfb; --surface-2: #f2f2f0; --rule: #dededa;
    --text-primary: #0b0b0b; --text-secondary: #52514e;
    --good: %(good)s; --critical: %(critical)s; --warning: %(warning)s;
  }
  @media (prefers-color-scheme: dark) { :root:where(:not([data-theme="light"])) .viz-root {
    color-scheme: dark;
    --surface-1: #1a1a19; --surface-2: #232322; --rule: #3a3a38;
    --text-primary: #ffffff; --text-secondary: #c3c2b7;
  } }
  body { margin:0; background:var(--surface-1); }
  .viz-root { font:14px/1.5 ui-sans-serif,-apple-system,"Segoe UI",sans-serif;
              color:var(--text-primary); padding:28px 32px; max-width:1100px; }
  h1 { font-size:19px; font-weight:600; margin:0 0 2px; }
  .sub { color:var(--text-secondary); margin:0 0 22px; }
  .tiles { display:flex; gap:12px; flex-wrap:wrap; margin-bottom:26px; }
  .tile { background:var(--surface-2); border:1px solid var(--rule); border-radius:8px;
          padding:12px 16px; min-width:132px; }
  .tile .label { color:var(--text-secondary); font-size:12px; }
  .tile .value { font-size:26px; font-weight:600; font-variant-numeric:tabular-nums; }
  .tile .note  { color:var(--text-secondary); font-size:12px; }
  table { border-collapse:collapse; width:100%%; font-variant-numeric:tabular-nums; }
  th { text-align:left; font-weight:600; color:var(--text-secondary); font-size:12px;
       border-bottom:1px solid var(--rule); padding:6px 10px 6px 0; }
  td { padding:5px 10px 5px 0; border-bottom:1px solid var(--rule); }
  .dot { display:inline-block; width:8px; height:8px; border-radius:50%%;
         margin-right:7px; vertical-align:1px; }
  .muted { color:var(--text-secondary); }
  .empty { color:var(--text-secondary); padding:18px 0; }
</style>
<body><div class="viz-root">
  <h1>%(ta)s vs %(tb)s</h1>
  <p class="sub" id="sub">loading…</p>
  <div class="tiles" id="tiles"></div>
  <table><thead><tr>
    <th>problem</th><th>solved by</th><th>the other</th><th style="text-align:right">cpu</th>
  </tr></thead><tbody id="rows"></tbody></table>
  <p class="empty" id="empty" hidden>The two agree on every problem both have finished.</p>
  <p class="sub" style="margin-top:18px">CPU is the whole process, so most of it is Lean
  starting up and elaborating the statement — the same floor for both tools, and on this
  corpus larger than either tactic. Only the problems both prove are timed: a failure
  spends the whole budget failing, so counting those would reward giving up early.</p>
</div>
<script>
const tile = (label, value, note, color) =>
  `<div class="tile"><div class="label">${label}</div>` +
  `<div class="value">${color ? `<span class="dot" style="background:${color}"></span>` : ""}${value}</div>` +
  `<div class="note">${note}</div></div>`;

async function poll() {
  const d = await (await fetch("/api")).json();
  const [A, B] = d.labels;
  document.getElementById("sub").textContent =
    `${d.common} problems both runs have finished — ${A} ${d.done[0]}, ${B} ${d.done[1]} recorded so far`;
  document.getElementById("tiles").innerHTML =
      tile("Both prove it", d.bothPass, "agreed", "var(--good)")
    + tile(`Only ${A}`, d.onlyA, `${B} does not`, "var(--warning)")
    + tile(`Only ${B}`, d.onlyB, `${A} does not`, "var(--warning)")
    + tile("Neither", d.neither, "agreed", "var(--critical)")
    + tile(A, `${d.passA}/${d.common}`, "of the common set")
    + tile(B, `${d.passB}/${d.common}`, "of the common set")
    + tile(`${A} cpu`, `${d.cpuA}s`, `on the ${d.bothPass} both prove`)
    + tile(`${B} cpu`, `${d.cpuB}s`, `on the ${d.bothPass} both prove`);
  document.getElementById("rows").innerHTML = d.rows.map(r =>
    `<tr><td>${r.name}</td><td><span class="dot" style="background:var(--good)"></span>${r.winner}</td>` +
    `<td class="muted">${r.loser} ${r.why}</td>` +
    `<td style="text-align:right" class="muted">${r.seconds}s</td></tr>`).join("");
  document.getElementById("empty").hidden = d.rows.length > 0;
  setTimeout(poll, 4000);
}
poll();
</script>
"""


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("a", type=Path)
    ap.add_argument("b", type=Path)
    ap.add_argument("--labels", default="a,b")
    ap.add_argument("--port", type=int, default=8090)
    ap.add_argument("--once", action="store_true", help="print a summary and exit")
    args = ap.parse_args()
    labels = tuple((args.labels.split(",") + ["a", "b"])[:2])

    def state():
        return compare(read(args.a), read(args.b), labels)

    if args.once:
        d = state()
        A, B = d["labels"]
        print(f"{d['common']} problems both runs have finished "
              f"({A} {d['done'][0]} recorded, {B} {d['done'][1]})")
        print(f"  {A}: {d['passA']}    {B}: {d['passB']}")
        print(f"  both {d['bothPass']}   only {A} {d['onlyA']}   "
              f"only {B} {d['onlyB']}   neither {d['neither']}")
        print(f"  cpu on the {d['bothPass']} both prove: "
              f"{A} {d['cpuA']}s, {B} {d['cpuB']}s")
        for r in d["rows"]:
            print(f"    {r['name']:18s} {r['winner']:9s} ({r['loser']} {r['why']})")
        return 0

    page = (PAGE % {"ta": html.escape(labels[0]), "tb": html.escape(labels[1]),
                    **STATUS}).encode()

    class Handler(BaseHTTPRequestHandler):
        def do_GET(self):
            if self.path.startswith("/api"):
                body = json.dumps(state()).encode()
                kind = "application/json"
            else:
                body, kind = page, "text/html; charset=utf-8"
            self.send_response(200)
            self.send_header("Content-Type", kind)
            self.send_header("Content-Length", str(len(body)))
            self.end_headers()
            self.wfile.write(body)

        def log_message(self, *a):
            pass

    print(f"http://localhost:{args.port}/  ({labels[0]} vs {labels[1]}, polling)")
    ThreadingHTTPServer(("", args.port), Handler).serve_forever()
    return 0


if __name__ == "__main__":
    sys.exit(main())
