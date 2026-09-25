# input

Reading data from the user with `std::cin`. Corresponds to Chapter 6 ("Input")
of *The Rook's Guide to C++*.

| File | What it demonstrates |
|---|---|
| `inputwithoutwhitespace.cpp` | `std::cin >> name` — the extraction operator, which stops reading at the **first whitespace character**. Typing "Ada Lovelace" only captures "Ada". |
| `inputwithwhitespace.cpp` | `std::getline(std::cin >> std::ws, name)` — reads a full line including spaces. `std::ws` first discards any leftover whitespace/newline sitting in the input buffer. Also mixes `cin >>` for a second value (`age`) after the `getline`, showing both styles side by side. |

## Build & run
```sh
g++ -std=c++17 -Wall -Wextra -o with inputwithwhitespace.cpp
./with
```

## Bugs fixed
- **Both files** used `typedef std::string str_t;` without `#include <string>`.
  They happened to compile only because `<vector>` transitively pulls in
  `<string>` on most standard library implementations — that's an accident,
  not a guarantee. Added the explicit include.
