# bank — Black Box console banking simulation

`bankapp.cpp` is a beginner project that combines functions, namespaces, loops, a `switch` menu, numeric input, and a fixed-size transaction history.

## Features

- View the current demo balance.
- Deposit and withdraw positive amounts, with an insufficient-funds check.
- Review recorded transactions.
- Display a clear notice that this is a local simulation.
- Handle invalid menu input without using an uninitialized option.

Transfers are intentionally marked as under development. The balance and history exist only while the program is running; no real account or persistent storage is involved.

## Build and run

From the repository root:

```sh
g++ -std=c++17 -Wall -Wextra -Wpedantic -o bankapp milestones/bank/bankapp.cpp
./bankapp
```

## Concepts to explore

- `balance_ns` and `history_ns` demonstrate namespaces.
- `withdraw()`, `deposit()`, `translist()`, and `addHistory()` separate tasks into functions.
- `switch` routes the user's menu selection.
- Input validation checks stream state before using a value.
- The fixed array holds at most 20 history entries; additional entries are not recorded once it is full.

## Limitations

This is teaching code, not financial software. Floating-point values are used for simplicity, transaction history is not saved, transfers are not implemented, and the demo has no authentication or real account connection.
