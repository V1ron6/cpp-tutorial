# Mini-lesson: The Ternary Operator

## The idea

The conditional (ternary) operator is a compact way to choose one of two expressions. Its shape is `condition ? resultIfTrue : resultIfFalse`.

For example, `age >= 18 ? "adult" : "minor"` chooses one of two text values. The condition is evaluated first; only the selected result is used. The operator produces a value, so it can be assigned to a variable or printed.

## When should it be used?

Use ternary for a small, readable choice. If the logic becomes long or either branch needs multiple statements, use `if/else`. Shorter code is not automatically clearer code.

Open `ternary.cpp` and identify the condition, the result for `true`, and the result for `false`.

## Practice

1. Change the condition and predict the selected result.
2. Store the ternary result in a variable before printing it.
3. Rewrite a simple ternary expression as `if/else`, then compare which version is easier to read.

**Challenge:** Choose the larger of two numbers using a ternary expression. Then write the same logic with `if/else` and explain when you would prefer each version.
