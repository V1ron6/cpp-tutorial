# Mini-lesson: Nested Loops

## The idea

A nested loop is a loop inside another loop. Each time the outer loop runs once, the inner loop runs through its own repetitions. This is useful for grids, tables, patterns, and board games.

Open `nestedforloop.cpp` and `nestedwhileloop.cpp`. Trace the outer loop separately from the inner loop. If the outer loop runs 3 times and the inner loop runs 4 times on every outer pass, the inner body runs `3 × 4 = 12` times in total.

## Trace a pattern

When printing rows and columns, the outer loop often represents rows and the inner loop represents columns. A newline usually belongs after the inner loop finishes; otherwise, every character may appear on its own line.

## Practice

1. Print a 3-by-4 rectangle of `*` characters.
2. Change the row count without changing the column count.
3. Predict the total number of inner-loop executions before running the program.
4. Try a triangle pattern where the inner loop limit depends on the outer loop counter.

**Challenge:** Print a multiplication table from 1 to 5. Label the row and column counters so you can explain which loop controls each dimension.
