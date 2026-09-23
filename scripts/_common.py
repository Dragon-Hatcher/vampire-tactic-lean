"""What the scripts that elaborate problems share.

    python3 scripts/_common.py dynlibs     # the --load-dynlib flags, one per line

`run-problems.py` and `measure-replay.py` import this; `trace-problem.sh` runs it
for the flags.
"""
import json
import subprocess
import sys
from pathlib import Path

HERE = Path(__file__).resolve().parent.parent
PROBLEMS = HERE / "problems"
SPLITS = HERE / "scripts" / "splits"
SETUP = HERE / ".lake" / "build" / "ir" / "Vampire" / "Frontend.setup.json"

# `lean` exits 0 on a proof that holds a `sorry`, and an admitted inference rule is
# exactly that: the tactic warns and closes the goal. So a pass is the exit code *and*
# the absence of any line that says the proof is incomplete. "admitted" is the word the
# tactic's warning about admitted steps uses.
INCOMPLETE = ("error:", "declaration uses 'sorry'", "admitted")


def incomplete(out: str) -> str | None:
    """The first line of `lean`'s output saying the proof is incomplete, if any."""
    for line in out.split("\n"):
        if any(mark in line for mark in INCOMPLETE):
            return line.strip()
    return None


def lean_path() -> str:
    """`LEAN_PATH` as `lake` sets it, which is where the built `Vampire` lives."""
    p = subprocess.run(["lake", "env", "printenv", "LEAN_PATH"], cwd=HERE,
                       capture_output=True, text=True, check=True)
    return p.stdout.strip()


def dynlibs() -> list[str]:
    """The `--load-dynlib` flags Lake passes when it elaborates a file importing `Vampire`.

    The worker is started by a native function, which `lean` can only call out of a
    library it has been given, and the replay core is precompiled, so without its
    library the tactic runs in the interpreter. Lake names the libraries in each
    module's setup, so they are read from there rather than guessed at.
    """
    if not SETUP.exists():
        sys.exit(f"{SETUP.relative_to(HERE)} is missing: run `lake build` first")
    libs = json.loads(SETUP.read_text()).get("dynlibs", [])
    return [f"--load-dynlib={x['path'] if isinstance(x, dict) else x}" for x in libs]


def read_split(name: str) -> list[str]:
    """The problem stems a file under scripts/splits/ names, one per line.

    Blank lines and lines starting with `#` are skipped.
    """
    path = SPLITS / name
    if not path.exists():
        sys.exit(f"no such split: {name} (the files are in {SPLITS.relative_to(HERE)})")
    stems = []
    for line in path.read_text().split("\n"):
        line = line.strip()
        if line and not line.startswith("#"):
            stems.append(line)
    return stems


def find_problem(stem: str) -> list[Path]:
    """The problem files named `stem`, in any directory of `problems/`."""
    return sorted(PROBLEMS.glob(f"*/{stem}.lean"))


if __name__ == "__main__":
    if sys.argv[1:] == ["dynlibs"]:
        print("\n".join(dynlibs()))
    else:
        sys.exit("usage: _common.py dynlibs")
