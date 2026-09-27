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
| `controlStructures/` | Branching: `if`/`else`/`else if`, `switch`, ternary `?:` | [controlStructures-README.md](controlStructures/controlStructures-README.md) |

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

## License
AGPL-3.0 — see [LICENSE](LICENSE).
