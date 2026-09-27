# controlStructures

Directing which code runs, based on a condition. Corresponds to Chapter 10
("Conditionals") of *The Rook's Guide to C++*.

Three subfolders, three ways to branch:

| Subfolder | README | What it's for |
|---|---|---|
| `if/` | [if-README.md](if/if-README.md) | `if`, `if/else`, `if/else if/else` |
| `switch/` | [switch-README.md](switch/switch-README.md) | `switch` — a menu-style alternative to a long `if/else if` chain |
| `ternary/` | [ternary-README.md](ternary/ternary-README.md) | `?:` — the conditional *expression* |

## Build & run any file
```sh
g++ -std=c++17 -Wall -Wextra -o out <subfolder>/<file>.cpp
./out
```
