# if

The `if` statement and its `else` / `else if` extensions, built up one file
at a time.

| File | What it demonstrates |
|---|---|
| `basicIf.cpp` | A bare `if` with no `else` — nothing prints if the condition is false. |
| `basic_if_else.cpp` | Adds `else`, so exactly one of two branches always runs. Also switches to `std::getline(std::cin >> std::ws, name)` so a full name (with a space) can be entered. |
| `basic_if_elseif_else.cpp` | Chains `else if` for a three-way branch: `age <= 0`, `age <= 18`, otherwise. `else if` is checked only when the `if` above it was false — it's not a separate independent check. |

## Build & run
```sh
g++ -std=c++17 -Wall -Wextra -o basicIf basicIf.cpp && ./basicIf
```

## Bugs fixed
- **All three files**: the message read "you cannot be **apart of** this
  organization" — "apart" means *separate from*, the opposite of the
  intended "a part of". Fixed the wording in all three.
- **All three files**: `#include <vector>` was present but nothing in any
  of these files uses a `std::vector`. Removed the dead include — a stray
  include makes a reader wonder what they're missing.
- **`basic_if_elseif_else.cpp`**: the block comment described the syntax as
  `elseif(condition)` (one word). That's not valid C++ — it's two keywords,
  `else if`. Left as a comment it would have taught the wrong syntax; fixed
  to `else if(condition)`.
