# ternary

The conditional operator `?:` — C++'s only ternary (three-operand) operator,
and the closest thing it has to an inline `if/else`.

| File | What it demonstrates |
|---|---|
| `ternary.cpp` | `condition ? a : b`, shown two ways: once picking between two whole statements (works, but is a style smell), and once picking between two *values* passed to a single `std::cout` (the idiomatic form). |

## Build & run
```sh
g++ -std=c++17 -Wall -Wextra -o ternary ternary.cpp && ./ternary
```

## Notes
- A ternary is an **expression** — it produces a value. The original file
  used it to pick between two entire `std::cout << ... << std::endl`
  statements. That compiles (because `<<` returns the stream, so both
  branches are the same type), but it's using an expression as if it were
  an `if/else` statement. Added a second line showing the idiomatic form:
  `std::cout << (age >= 18 ? "Welcome" : "Go home") << std::endl;` — one
  `cout` call, the ternary only chooses the string.
