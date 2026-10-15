# while

`while` (pretest) and `do-while` (post-test) loops: repeat an action until
a condition is no longer met. Corresponds to Chapter 12 ("Loops") of
*The Rook's Guide to C++*.

| File | What it demonstrates |
|---|---|
| `while.cpp` | A pretest loop that keeps asking for a name until `std::getline` actually returns a non-empty one. |
| `do-while.cpp` | A post-test loop: the body runs at least once before the condition (`number != 7`) is checked — a number-guessing loop. |

## Build & run
```sh
g++ -std=c++17 -Wall -Wextra -o do-while do-while.cpp && ./do-while
```

## Bugs fixed
- **`do-while.cpp`**: `"try again!!!"` printed unconditionally on every
  pass through the loop — including the pass where the guess was
  *correct*, right before the "hurray" message. Now it only prints when
  the guess was wrong.
