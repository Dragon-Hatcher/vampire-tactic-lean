#!/usr/bin/env python3
"""Run a sweep of extracted benchmark tests, and serve its progress as a web page.

    ./sweep.py <scratch-dir> <tests-dir> [--jobs N] [--cpu-limit S] [--port P]

`tests-dir` is a directory of `.lean` files as `extract.py` writes them; everything
this produces — logs, results, the resumable record — lives under `scratch-dir`.
Open http://<host>:8080/ to watch. The page polls, so it is live.

Why this rather than `xargs -P` over `one.sh`: a sweep of two hundred problems takes
hours, and `xargs` tells you nothing until a job exits. Running the pool here means the
page can distinguish queued from running, show a live clock on each job, and report the
two numbers that actually decide whether a run is trustworthy —

* **CPU time**, which is what `ulimit -t` bounds and what the pass/fail verdict is
  really about.
* **Peak RSS**, because the replay of a large refutation reached 7.4GB, and two of those
  at once on a 16GB machine puts the box into swap and every timing after that is a
  measurement of paging.
* **Load average**, because neither of the first two is contention-proof. CPU time looks
  like it should be — it is not wall time — but Lean elaborates on several threads and
  time they spend spinning is charged to the process, so a busy machine inflates it.
  Measured: a sweep run beside a game put `SYN472+1` at 43s of CPU against 12s idle, and
  pushed two problems that pass comfortably over a 150s cap. A sweep starting on a
  loaded machine says so, and the page keeps load in view for the same reason: a run
  taken next to other work is measuring the machine, not the tactic.

The verdict rule is `one.sh`'s, so results are comparable: a test passes when `lake
lean` exits 0 and the output does not mention `sorryAx` — a tactic can log an error and
admit its goal, which exits 0 with the proof depending on `sorryAx`.

Results are appended to `<scratch>/results.jsonl` as they finish, and a rerun skips
what is already recorded there unless `--redo` is given, so an interrupted sweep can be
resumed.
"""

import argparse
import html
import json
import os
import platform
import resource
import shutil
import signal
import subprocess
import sys
import threading
import time
from http.server import BaseHTTPRequestHandler, ThreadingHTTPServer
from pathlib import Path

# `ru_maxrss` is bytes on macOS and kilobytes on Linux.
RSS_UNIT = 1 if platform.system() == "Darwin" else 1024

# The repository root, so the sweep can `lake lean` from the package directory.
PKG = Path(__file__).resolve().parent.parent


class Job:
    """One problem: its state, and what running it cost."""

    __slots__ = ("name", "path", "state", "started", "finished", "cpu", "rss",
                 "reason", "pid", "timed_out", "phase")

    def __init__(self, name, path):
        self.name = name
        self.path = path
        self.state = "queued"      # queued | running | passed | failed
        self.started = None
        self.finished = None
        self.cpu = None            # seconds of user+system time, the `ulimit -t` budget
        self.rss = None            # peak resident set, bytes
        self.reason = ""
        self.pid = None
        self.timed_out = False     # hit the CPU limit, so worth retrying uncontended
        self.phase = 1

    def wall(self, now):
        if self.started is None:
            return None
        return (self.finished or now) - self.started

    def as_dict(self, now):
        return {
            "name": self.name,
            "state": self.state,
            "wall": self.wall(now),
            "cpu": self.cpu,
            "rss": self.rss,
            "reason": self.reason,
            "phase": self.phase,
        }


def live_rss(pid):
    """Resident set of a process and its descendants, in bytes.

    `lake` spawns `lean`, and it is the grandchild that holds the proof term, so asking
    about `pid` alone reports a few megabytes while the machine swaps.
    """
    try:
        out = subprocess.run(["ps", "-eo", "pid=,ppid=,rss="],
                             capture_output=True, text=True, timeout=5).stdout
    except (subprocess.SubprocessError, OSError):
        return None
    kids, rss = {}, {}
    for line in out.splitlines():
        parts = line.split()
        if len(parts) != 3:
            continue
        try:
            p, pp, r = int(parts[0]), int(parts[1]), int(parts[2])
        except ValueError:
            continue
        kids.setdefault(pp, []).append(p)
        rss[p] = r * 1024
    total, stack = 0, [pid]
    while stack:
        p = stack.pop()
        total += rss.get(p, 0)
        stack.extend(kids.get(p, ()))
    return total


class Sweep:
    """The pool, the results, and the state the page reads."""

    def __init__(self, scratch, tests, jobs, cpu_limit, redo, triage_limit=None):
        self.scratch = scratch
        # In two-phase mode the sweep starts at the triage limit and finishes at the
        # full one; `cpu_limit` is whichever is in force now, which is what `run_one`
        # and the page read.
        self.triage_limit = triage_limit
        self.serial_limit = cpu_limit if triage_limit else None
        self.cpu_limit = triage_limit or cpu_limit
        self.phase = 1
        self.jobs = jobs
        self.lock = threading.Lock()
        self.started_at = time.time()
        self.done_event = threading.Event()

        (scratch / "log").mkdir(parents=True, exist_ok=True)
        self.record = scratch / "results.jsonl"

        previous = {}
        if self.record.exists() and not redo:
            for line in self.record.read_text().splitlines():
                try:
                    d = json.loads(line)
                except json.JSONDecodeError:
                    continue
                previous[d["name"]] = d

        self.queue = []
        self.all = []
        for path in sorted(tests.glob("*.lean")):
            job = Job(path.stem, path)
            done = previous.get(job.name)
            if done:
                job.state = done["state"]
                job.cpu, job.rss = done.get("cpu"), done.get("rss")
                job.reason = done.get("reason", "")
                job.timed_out = done.get("timed_out", False)
                job.phase = done.get("phase", 1)
                job.started, job.finished = 0, done.get("wall") or 0
            else:
                self.queue.append(job)
            self.all.append(job)
        self.pending = list(self.queue)

    # -- running ----------------------------------------------------------------

    def run_one(self, job):
        """`lake lean` on one test, under a CPU limit, recording what it cost."""
        limit = self.cpu_limit

        def bound():
            # RLIMIT_CPU counts user+system time and is inherited, so the limit lands
            # on `lean` as well as on `lake`. This is `one.sh`'s `ulimit -t`.
            resource.setrlimit(resource.RLIMIT_CPU, (limit, limit))
            # Own session, so the whole job can be killed as a group. Killing the sweep
            # otherwise leaves `lake` and `lean` running, and they go on burning cores
            # while the next measurement is taken against them.
            os.setsid()

        with self.lock:
            job.state = "running"
            job.started = time.time()

        proc = subprocess.Popen(
            ["lake", "lean", str(job.path)],
            cwd=PKG, stdout=subprocess.PIPE, stderr=subprocess.STDOUT,
            preexec_fn=bound, text=True, errors="replace")
        with self.lock:
            job.pid = proc.pid

        # Poll for resident set while it runs, so the page can show what the sweep is
        # costing in memory before the machine starts swapping rather than after.
        #
        # The watcher waits on an event rather than calling `proc.poll()`: `poll` reaps
        # the child, and then the `wait4` below — which is where the CPU time and the
        # peak RSS come from — has nothing left to wait for.
        peak = [0]
        ended = threading.Event()

        def watch():
            while not ended.wait(2):
                r = live_rss(proc.pid)
                if r:
                    peak[0] = max(peak[0], r)
                    with self.lock:
                        job.rss = peak[0]

        watcher = threading.Thread(target=watch, daemon=True)
        watcher.start()

        out = proc.stdout.read()          # returns at the child's exit
        _, status, usage = os.wait4(proc.pid, 0)
        ended.set()
        watcher.join(timeout=3)

        code = os.waitstatus_to_exitcode(status) if status >= 0 else -1
        # `wait4` did the reaping, so tell `Popen` the child is gone; without this its
        # destructor warns about an abandoned process.
        proc.returncode = code
        cpu = usage.ru_utime + usage.ru_stime
        rss = max(peak[0], usage.ru_maxrss * RSS_UNIT)

        (self.scratch / "log" / f"{job.name}.log").write_text(out)

        passed = code == 0 and "sorryAx" not in out
        reason = ""
        timed_out = False
        if not passed:
            reason = self.explain(out, code, cpu)
            timed_out = reason.startswith("cpu limit")

        with self.lock:
            job.state = "passed" if passed else "failed"
            job.finished = time.time()
            job.cpu, job.rss, job.reason, job.pid = cpu, rss, reason, None
            job.timed_out, job.phase = timed_out, self.phase
            with self.record.open("a") as f:
                f.write(json.dumps({
                    "name": job.name, "state": job.state, "cpu": cpu, "rss": rss,
                    "wall": job.finished - job.started, "reason": reason,
                    "timed_out": timed_out, "phase": self.phase,
                }) + "\n")

    def explain(self, out, code, cpu):
        """One line saying why a test failed, preferring the tactic's own words.

        A CPU-limit kill is SIGXCPU and carries no message of its own, so it has to be
        recognised rather than read. Note that `RLIMIT_CPU` bounds each *process*, not
        the tree: `lake` and the `lean` it spawns each get the full budget, while the
        figure reported here is the total for both. That is exactly what `one.sh`'s
        `ulimit -t` does, so the two harnesses agree — but it means the recorded CPU time
        can exceed the limit with nothing having been killed, which is why the signal is
        checked before the arithmetic and why a thrown error is preferred over both.
        """
        if code in (-signal.SIGXCPU, 128 + signal.SIGXCPU):
            return f"cpu limit ({self.cpu_limit}s)"
        if "sorryAx" in out:
            return "depends on sorryAx"
        for line in out.splitlines():
            if "vampire:" in line:
                return line.split("vampire:", 1)[1].strip()[:160]
        # No message of its own and the budget is gone: the kill landed on `lean`, and
        # `lake` reported only that a child had failed.
        if cpu >= self.cpu_limit * 0.95:
            return f"cpu limit ({self.cpu_limit}s, used {cpu:.0f}s)"
        for line in out.splitlines():
            if "error:" in line:
                return line.split("error:", 1)[1].strip()[:160]
        return f"exit {code}"

    def worker(self):
        while True:
            with self.lock:
                if not self.pending:
                    return
                job = self.pending.pop(0)
            try:
                self.run_one(job)
            except Exception as e:                       # noqa: BLE001
                with self.lock:
                    job.state = "failed"
                    job.finished = time.time()
                    job.reason = f"harness: {e}"

    def run_pool(self, n):
        threads = [threading.Thread(target=self.worker, daemon=True) for _ in range(n)]
        for t in threads:
            t.start()
        for t in threads:
            t.join()

    def start(self):
        """Run the sweep, in one phase or two.

        Two is the useful shape for this benchmark, because the distribution is very
        uneven: most problems replay in a few seconds and a handful take minutes. Phase
        one runs everything in parallel under a short limit, which clears the bulk
        quickly and costs nothing but a timeout on the tail; phase two reruns just that
        tail one at a time under the full limit.

        The point is not only speed. A parallel run inflates its own CPU figures — the
        threads Lean elaborates on spin waiting for cores — so the problems whose timings
        actually matter are exactly the ones that should not be measured under
        contention. This way they are not: they are measured alone.

        Only a timeout is retried. A problem that failed for any other reason failed for
        a reason more time will not fix.
        """
        def drive():
            self.run_pool(self.jobs)
            retry = [j for j in self.all if j.state == "failed" and j.timed_out]
            if self.serial_limit and retry:
                with self.lock:
                    self.phase = 2
                    self.jobs = 1
                    self.cpu_limit = self.serial_limit
                    for j in retry:
                        j.state, j.started, j.finished = "queued", None, None
                        j.cpu = j.rss = None
                        j.reason, j.timed_out = "", False
                    self.pending = list(retry)
                print(f"\nphase 2: {len(retry)} problem(s) over the {self.triage_limit}s "
                      f"triage limit, rerunning one at a time at {self.serial_limit}s")
                self.run_pool(1)
            self.done_event.set()

        threading.Thread(target=drive, daemon=True).start()

    # -- what the page reads ------------------------------------------------------

    def kill_running(self):
        """Kill every job still running, as a process group."""
        with self.lock:
            pids = [j.pid for j in self.all if j.pid]
        for pid in pids:
            try:
                os.killpg(pid, signal.SIGKILL)
            except (ProcessLookupError, PermissionError):
                pass

    def snapshot(self):
        now = time.time()
        with self.lock:
            jobs = [j.as_dict(now) for j in self.all]
            counts = {k: 0 for k in ("queued", "running", "passed", "failed")}
            for j in self.all:
                counts[j.state] += 1
            rss = sum(j.rss or 0 for j in self.all if j.state == "running")
            finished = [j for j in self.all if j.state in ("passed", "failed")
                        and j.finished and j.started]
            # Estimate from throughput actually achieved, not from a per-job mean:
            # jobs run `--jobs` at a time and their costs are wildly uneven.
            elapsed = now - self.started_at
            rate = len(finished) / elapsed if elapsed > 0 and finished else 0
            remaining = counts["queued"] + counts["running"]
            eta = remaining / rate if rate > 0 else None
        # Load average against core count. A sweep sharing the machine with anything
        # substantial is not measuring the tactic: CPU time is not the contention-proof
        # figure it looks like, because Lean elaborates on several threads and their
        # spinning is charged to the process. Measured here — a sweep run beside a game
        # put `SYN472+1` at 43s of CPU against 12s on an idle machine.
        try:
            load = os.getloadavg()[0]
        except OSError:
            load = None
        return {
            "jobs": jobs,
            "counts": counts,
            "elapsed": elapsed,
            "eta": eta,
            "running_rss": rss,
            "parallel": self.jobs,
            "cpu_limit": self.cpu_limit,
            "phase": self.phase,
            "load": load,
            "cores": os.cpu_count(),
            "done": self.done_event.is_set(),
        }


PAGE = """<!doctype html>
<meta charset="utf-8"><meta name="viewport" content="width=device-width,initial-scale=1">
<title>vampire sweep</title>
<style>
  :root {
    color-scheme: light dark;
    --bg:#fbfbfa; --fg:#1a1a19; --dim:#6b6b66; --line:#e2e2dd; --card:#fff;
    --pass:#2f7d47; --fail:#b3261e; --run:#1a63c4; --queue:#8a8a84;
  }
  @media (prefers-color-scheme: dark) {
    :root { --bg:#161614; --fg:#eceae5; --dim:#96938c; --line:#2e2c28; --card:#1e1d1a;
            --pass:#67c98a; --fail:#f2857c; --run:#7cb0f5; --queue:#77746e; }
  }
  * { box-sizing: border-box }
  body { margin:0; background:var(--bg); color:var(--fg); font:14px/1.5 ui-sans-serif,
         -apple-system, "Segoe UI", system-ui, sans-serif; }
  header { padding:18px 22px 12px; border-bottom:1px solid var(--line) }
  h1 { margin:0 0 10px; font-size:15px; font-weight:600; letter-spacing:.01em }
  h1 small { font-weight:400; color:var(--dim); margin-left:8px }
  .tiles { display:flex; flex-wrap:wrap; gap:10px }
  .tile { background:var(--card); border:1px solid var(--line); border-radius:8px;
          padding:8px 14px; min-width:96px }
  .tile b { display:block; font-size:20px; font-weight:600; font-variant-numeric:tabular-nums }
  .tile span { font-size:11px; color:var(--dim); text-transform:uppercase; letter-spacing:.06em }
  .pass b{color:var(--pass)} .fail b{color:var(--fail)} .run b{color:var(--run)}
  .bar { height:6px; margin-top:12px; border-radius:3px; overflow:hidden;
         background:var(--line); display:flex }
  .bar i { display:block; height:100% }
  main { padding:0 22px 40px; overflow-x:auto }
  table { border-collapse:collapse; width:100%; min-width:640px; margin-top:14px }
  th { text-align:left; font-size:11px; text-transform:uppercase; letter-spacing:.06em;
       color:var(--dim); font-weight:500; padding:8px 10px; position:sticky; top:0;
       background:var(--bg); border-bottom:1px solid var(--line) }
  td { padding:6px 10px; border-bottom:1px solid var(--line); font-variant-numeric:tabular-nums }
  td.name { font-family:ui-monospace,SFMono-Regular,Menlo,monospace; font-size:13px }
  td.reason { color:var(--dim); font-size:12px; max-width:38ch; overflow:hidden;
              text-overflow:ellipsis; white-space:nowrap }
  .pill { font-size:11px; font-weight:600; letter-spacing:.03em; text-transform:uppercase }
  .s-passed{color:var(--pass)} .s-failed{color:var(--fail)}
  .s-running{color:var(--run)} .s-queued{color:var(--queue)}
  tr.queued td { color:var(--queue) }
  .filters { display:flex; gap:6px; margin-top:14px; flex-wrap:wrap }
  button { font:inherit; font-size:12px; padding:4px 11px; border-radius:999px;
           border:1px solid var(--line); background:var(--card); color:var(--fg); cursor:pointer }
  button[aria-pressed=true] { background:var(--fg); color:var(--bg); border-color:var(--fg) }
  .warn { color:var(--fail); font-weight:600 }
</style>
<header>
  <h1>vampire sweep <small id="sub"></small></h1>
  <div class="tiles">
    <div class="tile pass"><b id="c-passed">0</b><span>passed</span></div>
    <div class="tile fail"><b id="c-failed">0</b><span>failed</span></div>
    <div class="tile run"><b id="c-running">0</b><span>running</span></div>
    <div class="tile"><b id="c-queued">0</b><span>queued</span></div>
    <div class="tile"><b id="elapsed">–</b><span>elapsed</span></div>
    <div class="tile"><b id="eta">–</b><span>eta</span></div>
    <div class="tile"><b id="rss">–</b><span>sweep rss</span></div>
    <div class="tile"><b id="load">–</b><span>load / cores</span></div>
  </div>
  <div class="bar"><i id="b-pass"></i><i id="b-fail"></i><i id="b-run"></i></div>
  <div class="filters">
    <button data-f="all" aria-pressed="true">all</button>
    <button data-f="running" aria-pressed="false">running</button>
    <button data-f="failed" aria-pressed="false">failed</button>
    <button data-f="slow" aria-pressed="false">slowest</button>
  </div>
</header>
<main>
  <table>
    <thead><tr><th>problem</th><th>state</th><th>wall</th><th>cpu</th><th>peak rss</th>
      <th>reason</th></tr></thead>
    <tbody id="rows"></tbody>
  </table>
</main>
<script>
const ORDER = {running:0, failed:1, queued:2, passed:3};
let filter = "all";

function dur(s) {
  if (s === null || s === undefined) return "";
  if (s < 60) return s.toFixed(s < 10 ? 1 : 0) + "s";
  const m = Math.floor(s / 60);
  return m + "m" + String(Math.round(s - m * 60)).padStart(2, "0") + "s";
}
function gb(b) {
  if (!b) return "";
  return b >= 1e9 ? (b / 1e9).toFixed(1) + " GB" : Math.round(b / 1e6) + " MB";
}

document.querySelectorAll("button[data-f]").forEach(b => b.onclick = () => {
  filter = b.dataset.f;
  document.querySelectorAll("button[data-f]").forEach(o =>
    o.setAttribute("aria-pressed", String(o === b)));
  render(window.__last);
});

function render(d) {
  if (!d) return;
  window.__last = d;
  for (const k of ["passed", "failed", "running", "queued"])
    document.getElementById("c-" + k).textContent = d.counts[k];
  document.getElementById("elapsed").textContent = dur(d.elapsed);
  document.getElementById("eta").textContent = d.done ? "done" : (d.eta ? dur(d.eta) : "–");
  const loadEl = document.getElementById("load");
  loadEl.textContent = d.load === null ? "–" : `${d.load.toFixed(1)} / ${d.cores}`;
  // Above half the cores, something other than the sweep is running and the CPU
  // figures stop being comparable with an idle-machine run.
  loadEl.className = d.load > 0.5 * d.cores + d.parallel ? "warn" : "";
  const rssEl = document.getElementById("rss");
  rssEl.textContent = gb(d.running_rss) || "–";
  rssEl.className = d.running_rss > 10e9 ? "warn" : "";
  document.getElementById("sub").textContent =
    `${d.jobs.length} problems · phase ${d.phase} · ${d.parallel} at a time · ` +
    `${d.cpu_limit}s cpu limit`;

  const n = d.jobs.length || 1;
  document.getElementById("b-pass").style.cssText =
    `width:${100 * d.counts.passed / n}%;background:var(--pass)`;
  document.getElementById("b-fail").style.cssText =
    `width:${100 * d.counts.failed / n}%;background:var(--fail)`;
  document.getElementById("b-run").style.cssText =
    `width:${100 * d.counts.running / n}%;background:var(--run)`;

  let rows = d.jobs.slice();
  if (filter === "running") rows = rows.filter(j => j.state === "running");
  else if (filter === "failed") rows = rows.filter(j => j.state === "failed");
  if (filter === "slow") rows.sort((a, b) => (b.cpu || b.wall || 0) - (a.cpu || a.wall || 0));
  else rows.sort((a, b) => ORDER[a.state] - ORDER[b.state] ||
                           (b.wall || 0) - (a.wall || 0) ||
                           a.name.localeCompare(b.name));

  document.getElementById("rows").innerHTML = rows.map(j => `
    <tr class="${j.state}">
      <td class="name">${j.name}</td>
      <td class="pill s-${j.state}">${j.state}</td>
      <td>${dur(j.wall)}</td>
      <td>${dur(j.cpu)}</td>
      <td>${gb(j.rss)}</td>
      <td class="reason" title="${j.reason.replace(/"/g, "&quot;")}">${j.reason}</td>
    </tr>`).join("");
}

async function poll() {
  try { render(await (await fetch("api")).json()); } catch (e) {}
  setTimeout(poll, 1000);
}
poll();
</script>
"""


class Handler(BaseHTTPRequestHandler):
    sweep = None

    def do_GET(self):
        if self.path.rstrip("/") in ("", "/index.html"):
            body, ctype = PAGE.encode(), "text/html; charset=utf-8"
        elif self.path.rstrip("/").endswith("api"):
            body = json.dumps(self.sweep.snapshot()).encode()
            ctype = "application/json"
        else:
            self.send_error(404)
            return
        self.send_response(200)
        self.send_header("Content-Type", ctype)
        self.send_header("Content-Length", str(len(body)))
        self.send_header("Cache-Control", "no-store")
        self.end_headers()
        self.wfile.write(body)

    def log_message(self, *args):
        pass          # the sweep's own output is the interesting thing on this terminal


def main():
    # Line-buffered, so the startup warning and the per-failure lines appear as they
    # happen even when this is redirected to a file or run under nohup. Block buffering
    # is the default there, and it swallowed the load warning the first time.
    try:
        sys.stdout.reconfigure(line_buffering=True)
    except AttributeError:
        pass

    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("scratch", type=Path, help="where logs and results go")
    ap.add_argument("tests", type=Path, help="directory of extracted .lean tests")
    ap.add_argument("--jobs", "-j", type=int, default=4,
                    help="tests to run at once (default 4; bounded by RAM, not cores — "
                         "a large replay can hold 7GB)")
    ap.add_argument("--cpu-limit", type=int, default=150,
                    help="per-test CPU seconds, as `one.sh` (default 150)")
    ap.add_argument("--triage", type=int, metavar="S",
                    help="two-phase: run everything in parallel under an S-second limit "
                         "first, then rerun whatever hit it one at a time under "
                         "--cpu-limit. Most problems replay in a few seconds, so this "
                         "clears the bulk fast and leaves the slow tail — the only "
                         "timings that matter — measured without contention")
    ap.add_argument("--port", "-p", type=int, default=8080)
    ap.add_argument("--redo", action="store_true",
                    help="rerun tests already recorded in results.jsonl")
    args = ap.parse_args()

    if not args.tests.is_dir():
        sys.exit(f"no such directory: {args.tests}")
    if not shutil.which("lake"):
        sys.exit("lake is not on PATH")

    args.scratch.mkdir(parents=True, exist_ok=True)
    sweep = Sweep(args.scratch, args.tests, args.jobs, args.cpu_limit, args.redo,
                  args.triage)
    if not sweep.all:
        sys.exit(f"no .lean files in {args.tests}")

    Handler.sweep = sweep
    server = ThreadingHTTPServer(("0.0.0.0", args.port), Handler)
    threading.Thread(target=server.serve_forever, daemon=True).start()

    skipped = len(sweep.all) - len(sweep.queue)
    plan = (f"{args.jobs} at a time at {args.triage}s, then the slow ones "
            f"one at a time at {args.cpu_limit}s"
            if args.triage else
            f"{args.jobs} at a time, {args.cpu_limit}s cpu limit")
    print(f"{len(sweep.all)} problems, {len(sweep.queue)} to run"
          f"{f' ({skipped} already recorded)' if skipped else ''}, {plan}")
    print(f"watch: http://{os.uname().nodename}:{args.port}/  "
          f"(or http://<this host>:{args.port}/)")

    # A sweep that shares the machine measures the machine, not the tactic.
    try:
        load, cores = os.getloadavg()[0], (os.cpu_count() or 1)
        if load > 0.5 * cores:
            print(f"\n  WARNING: load average is {load:.1f} on {cores} cores before the "
                  f"sweep has started.\n  Something else is using this machine; the "
                  f"timings will not be comparable.\n")
    except OSError:
        pass

    sweep.start()
    try:
        while not sweep.done_event.wait(timeout=1):
            pass
    except KeyboardInterrupt:
        sweep.kill_running()
        print("\ninterrupted; results so far are in", sweep.record)
        return

    s = sweep.snapshot()
    print(f"\ndone in {s['elapsed']:.0f}s: "
          f"{s['counts']['passed']} passed, {s['counts']['failed']} failed")
    for j in s["jobs"]:
        if j["state"] == "failed":
            print(f"  FAIL {j['name']:<24} {j['reason']}")
    print(f"\npage still serving on :{args.port}; ctrl-c to stop")
    try:
        while True:
            time.sleep(3600)
    except KeyboardInterrupt:
        pass


if __name__ == "__main__":
    main()
