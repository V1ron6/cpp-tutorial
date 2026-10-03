# for

The `for` loop: initialize, test, and step, all in one line, when you know
how many times you want to repeat something. Corresponds to Chapter 12
("Loops") of *The Rook's Guide to C++*.

| File | What it demonstrates |
|---|---|
| `forloop.cpp` | Prints a multiplication table from 1 up to a user-chosen end value: `for(int i = 1; i < end + 1; i++)`. |

## Build & run
```sh
g++ -std=c++17 -Wall -Wextra -o forloop forloop.cpp && ./forloop
```

## Bugs fixed
- `times` was declared `double`, but computed as `number * i` — plain
  `int` multiplication — before ever being assigned to the double. The
  `double` declaration looked like it was guarding against overflow for
  a large table, but it wasn't: the multiplication itself still happened
  in `int` first. Fixed by casting `number` to `double` before the
  multiply, so the arithmetic itself happens in double precision.
- Removed an unused `#include <string>`.
