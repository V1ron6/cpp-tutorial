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

## License
AGPL-3.0 — see [LICENSE](LICENSE).
