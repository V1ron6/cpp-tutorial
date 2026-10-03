# cpp-tutorial

A small, hand-written collection of C++ example programs, one topic per
folder, working through core language features in roughly the order used by
*The Rook's Guide to C++*. Every file is self-contained, compiles cleanly
with `-Wall -Wextra`, and is meant to be read, built, and run — not copied
into a real project.

## Folders

| Folder | Topic | README |
|---|---|---|
| `helloworld/` | The minimal C++ program: `main()`, `std::cout` | [helloworld-README.md](helloworld/helloworld-README.md) |
| `input/` | Reading from the user with `std::cin` / `std::getline` | [input-README.md](input/input-README.md) |
| `arithimetic/` | Operators (`+ - * /`, `++`, `--`) and `<cmath>` | [arithimetic-README.md](arithimetic/arithimetic-README.md) |
| `variables/` | Declaring, initializing, typing, `const`, namespaces, `typedef`/`using` | [variables-README.md](variables/variables-README.md) |
| `controlStructures/` | Branching and looping: `if`/`else`/`else if`, `switch`, ternary `?:`, `for`, `while`/`do-while`, nested loops | [controlStructures-README.md](controlStructures/controlStructures-README.md) |
| `milestones/` | Small projects combining several concepts at once (currently: a tic-tac-toe game, still in progress) | [milestones-README.md](milestones/milestones-README.md) |

Each folder's own README lists every file in it, what it teaches, and any
bug that was fixed in it — see below for the general kinds of fixes applied
across the whole repo.

## Build & run any file
```sh
g++ -std=c++17 -Wall -Wextra -o <name> <folder>/<file>.cpp
./<name>
```
No file depends on another, so each one builds and runs on its own.

## What changed in this pass
This repo previously had compiled ARM64 binaries checked in alongside the
source (`hello`, `a.out`, `with`, `without`, `bscop`, `cmarthimetic`,
`varconst`, `valtypedef`, `valnamespace`, `vartype`). Those were removed and
a `.gitignore` was added so build output stops getting committed by
accident — they're not source, they don't belong in version control, and
they made the repo look bigger and more cluttered than the ~12 files it
actually is.

Beyond that, three kinds of real bugs were fixed across the source files
(details are in each folder's own README):

1. **Missing `#include <string>`** in three files that use `std::string`
   through a `typedef` — they only compiled because another header
   transitively pulled it in, which isn't something to rely on.
2. **Silent precision loss** in `cmatharithimeticfunc.cpp` — `<cmath>`
   functions return `double`, but results were stored in `int`, quietly
   truncating `sqrt(3)` from `1.73205` to `1`.
3. **A cast that did nothing** in `basicOperators.cpp` — a `double` cast
   was thrown away by immediately reassigning the result back into an
   `int`, defeating the point of the example.

Plus smaller consistency fixes: unqualified `<cmath>` calls given explicit
`std::` prefixes, `using namespace std;` replaced with explicit `std::`
throughout (one convention, everywhere), a namespace named `div` renamed
(it collided with `std::div()`), a variable named `free` renamed (it
shadowed `std::free()`), a declared-but-never-printed variable given its
missing output line, and a few comment/string typos. No topic or file was
added beyond what the original four folders already covered.

## Pass 2: `controlStructures/`
A new category was added upstream (`controlStructures/if`, `.../switch`,
`.../ternary`) — the fixes below stayed inside it, same as pass 1 stayed
inside its four folders.

- Removed 3 more committed ARM64 binaries (`baseif`, `baseifelse`,
  `baseifelseif`), and fixed `.gitignore` itself: its `*/*.out`-style
  patterns only match one folder deep, so they silently missed anything
  under a nested folder like `controlStructures/if/`. Switched to `**/*.out`
  (matches any depth) and kept an explicit list of extension-less binaries
  as a safety net, since a binary compiled without `.out`/`.exe`/`.o`
  matches no wildcard pattern at all.
- **`if/basicIf.cpp`, `if/basic_if_else.cpp`, `if/basic_if_elseif_else.cpp`**:
  fixed "you cannot be **apart of** this organization" → "a part of" —
  "apart" means separate/away, the opposite of what the sentence intended.
- Removed an unused `#include <vector>` from all three `if/` files —
  nothing in them touches a `std::vector`.
- **`if/basic_if_elseif_else.cpp`**: its own doc comment showed the syntax
  as `elseif(condition)` (one word, not valid C++) — fixed to `else if`.
- **`ternary/ternary.cpp`**: the original used the ternary to select between
  two entire `std::cout` *statements* — legal (both branches are the same
  stream type) but not what a ternary is for. Added a second line showing
  the idiomatic form, where the ternary picks a *value* passed to one
  `std::cout` call, and commented on the difference.
- `switch/switch.cpp`: no functional bug; normalized `#include<iostream>`
  spacing and a comment typo.

## Pass 3: `controlStructures/{for,while,nestedloops}` + `milestones/`
Two more loop-related subfolders were added under `controlStructures/`,
plus a brand-new `milestones/` category containing a tic-tac-toe game.

- **`for/forloop.cpp`**: `times` was declared `double` but computed as
  plain `int` multiplication (`number * i`) before being assigned —
  the `double` type didn't actually prevent the overflow it looked like
  it was guarding against. Cast before multiplying instead.
- **`while/do-while.cpp`**: `"try again!!!"` printed even when the guess
  was correct, right before the success message. Now conditional on a
  wrong guess.
- **`nestedloops/nestedforloop.cpp`**: every row of the rectangle printed
  one `*` too many (`"* \n"` instead of `"\n"` after the inner loop).
- **`nestedloops/nestedwhileloop.cpp`**: used `srand`/`rand`/`time`
  without `#include <cstdlib>`/`<ctime>` — same accidental-transitive-
  include issue as earlier passes.
- **`milestones/game/{ticgame,ticgameUpdate}.cpp`** (both files, same
  bugs in each — full detail in `milestones/game/game-README.md`):
  - Out-of-bounds board read (`board[posX][3]` on a 3x3 board).
  - A real **segfault**, reproduced while testing: `std::cin >> position`
    was never validated, so bad/exhausted input flowed straight into an
    array index. Added a range + stream-state check.
  - `|` used where `||` was meant (happened to work, wasn't correct).
  - `ticgame.cpp` only: two variables read before being initialized
    (undefined behavior), and an occupied board cell got silently
    overwritten instead of rejected (already fixed in `ticgameUpdate.cpp`,
    mirrored back).
  - Several genuinely unfinished parts of the game (a turn that doesn't
    actually retry on an invalid move, a dead input-validation branch,
    two placeholder error messages) were left alone and documented as
    known issues rather than redesigned, since the project's own
    `.progess.txt` says it's still in progress.
- Removed 2 more committed binaries (`tic2.1`, `tic2.2`).

## License
AGPL-3.0 — see [LICENSE](LICENSE).
