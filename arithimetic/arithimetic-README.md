# arithimetic

Math in C++: the basic operators (`+ - * /`, `++`, `--`, compound assignment)
and the `<cmath>` library. Corresponds to Chapters 7 ("Arithmetic") and 17
("Advanced Arithmetic") of *The Rook's Guide to C++*.

(Folder name keeps the original spelling from the source repo — "arithimetic"
instead of "arithmetic" — so nothing that references this path breaks.)

| File | What it demonstrates |
|---|---|
| `basicOperators.cpp` | `+`, `-`, `*`, `/`, `+=`, `-=`, `++`, `--`, one `namespace` per operator so each keeps its own `students` variable, and integer vs. floating-point division. |
| `cmatharithimeticfunc.cpp` | `<cmath>` functions: `fmax`, `fmin`, `pow`, `sqrt`, `abs`, `round`, `ceil`, `floor`. |

## Build & run
```sh
g++ -std=c++17 -Wall -Wextra -o basicOperators basicOperators.cpp && ./basicOperators
g++ -std=c++17 -Wall -Wextra -o cmatharithimeticfunc cmatharithimeticfunc.cpp && ./cmatharithimeticfunc
```

## Bugs fixed
- **`cmatharithimeticfunc.cpp`**: every `<cmath>` function returns a `double`,
  but the result was stored in an `int z`. This silently truncated
  `sqrt(3)` from `1.73205` down to `1`. Changed `x`, `y`, `z` to `double`.
- **`cmatharithimeticfunc.cpp`**: `fmax`, `fmin`, `pow`, `sqrt`, `abs`,
  `round`, `ceil`, `floor` were called unqualified. They only resolved
  because some toolchains leak C-style math names into the global
  namespace via `<cmath>`; that's not portable. Qualified all of them
  with `std::`.
- **`basicOperators.cpp`**: the namespace was named `div`, which collides
  with `std::div()` from `<cstdlib>` (returns a quotient/remainder pair).
  Renamed to `division`.
- **`basicOperators.cpp`**: the division example cast to `double` and then
  immediately assigned the result *back into the int* `students`, throwing
  the fraction away again — the cast did nothing observable. `9 / 2` now
  correctly lands in a `double quotient` and prints `4.5` instead of `4`.
