# nestedloops

A loop inside another loop — the outer loop runs once per "row", the inner
loop runs fully for each row. Corresponds to the "Nested Loops" section of
Chapter 12 in *The Rook's Guide to C++*.

| File | What it demonstrates |
|---|---|
| `nestedforloop.cpp` | Two nested `for` loops drawing a `posX`-by-`posY` rectangle of `*` characters. |
| `nestedwhileloop.cpp` | A `while` loop (keep playing) wrapped around another `while` loop (keep asking for a name), plus `rand()`/`srand()` for a number-guessing game. |

## Build & run
```sh
g++ -std=c++17 -Wall -Wextra -o nestedforloop nestedforloop.cpp && ./nestedforloop
```

## Bugs fixed
- **`nestedforloop.cpp`**: each row ended with `std::cout << "* \n";` —
  an *extra* `*` on top of the `posY` already printed by the inner loop,
  so every row came out one character wider than the user asked for.
  Fixed to just print the newline.
- **`nestedwhileloop.cpp`**: used `srand()`, `rand()`, and `time()` without
  `#include <cstdlib>` / `#include <ctime>`. It only compiled because the
  standard library implementation happened to pull those in transitively
  through another header — not something to rely on. Added both includes.
