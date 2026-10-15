# Project Lesson: A Console Banking Simulation

## The goal

This project turns earlier lessons into a menu-driven application. It practises storing a balance, reading menu choices, checking amounts, performing arithmetic, and recording a simple transaction history.

**Important:** This is a learning exercise, not real banking software. It has no authentication, persistent storage, financial safeguards, or connection to a bank. Do not use it to manage real money.

## Explore the program

Open `bankapp.cpp` and trace the program in this order:

1. **State:** where the current balance and transaction history are stored.
2. **Menu:** how the user chooses an operation.
3. **Input:** how the selected operation requests an amount.
4. **Validation:** how the program rejects invalid amounts or unsupported choices.
5. **Update:** how a valid deposit or withdrawal changes the balance.
6. **History:** how the operation is recorded and later displayed.
7. **Exit:** how the menu loop ends.

Try to follow a single deposit from the moment the user types the amount until the updated balance is displayed. Then trace a rejected withdrawal and identify which state should remain unchanged.

## Build and run

```sh
g++ -std=c++17 -Wall -Wextra -Wpedantic -o bankapp milestones/bank/bankapp.cpp
./bankapp
```

## Test the rules, not just the happy path

- Deposit a positive amount.
- Try a zero or negative amount.
- Withdraw less than the balance.
- Try withdrawing more than the balance.
- Enter a menu choice that does not exist.
- Fill or approach the transaction-history limit.
- Exit and restart; observe that the program does not preserve the previous session.

The history has a fixed capacity in this beginner implementation. Think about what should happen when it is full. Do not assume that a transaction is saved permanently just because it appears in the current run's history.

## Practice extensions

1. Add clearer confirmation messages that include the amount and resulting balance.
2. Separate the deposit and withdrawal logic into functions, using the functions lesson as a guide.
3. Add a balance display option if it fits the existing menu design.
4. Sketch how transfer logic would work before implementing it: validate the amount, ensure sufficient funds, update both sides consistently, and record the operation. Transfers are not implemented in the current version.

**Challenge:** Explain the difference between validating input and performing a transaction. Then test whether a failed transaction changes the balance or history incorrectly.

## Trace one transaction

Choose one menu option and follow it through the program. First locate where the starting balance and transaction history are stored. Then find where the menu choice is read, where the amount is validated, and where the balance changes. Finally, find where the action is recorded and displayed.

Do not only test the happy path. Try a zero amount, a negative amount, a non-numeric menu choice, and a withdrawal larger than the balance. For each case, decide what the program should do before running it.

**Extension challenge:** Add a clear message when a transaction is rejected, without changing the balance or adding a successful-transaction record. This is a simulation for learning only, not secure financial software.
