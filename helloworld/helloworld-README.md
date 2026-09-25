# helloworld

The smallest possible C++ program: include a library, write to the console, exit.
Corresponds to Chapter 5 ("Output") of *The Rook's Guide to C++*.

| File | What it demonstrates |
|---|---|
| `hello.cpp` | `#include <iostream>`, the `main()` entry point, `std::cout` with `<<` (the insertion operator), and returning `0` to signal success. |

## Build & run
```sh
g++ -std=c++17 -Wall -Wextra -o hello hello.cpp
./hello
```

## Bugs fixed
- Trimmed ~10 trailing blank lines and stray leading space in the printed string; no functional bug here, just noise.
