# Mini-lesson: The `for` Loop

## The idea

A `for` loop is often used when the number of repetitions is controlled by a counter. Its header has three parts: initialization, condition, and update.

```cpp
for (int i = 1; i <= 5; ++i) {
    std::cout << i << '\n';
}
```

The counter starts at 1; the condition is checked; the body runs; then `++i` increments the counter before the next check. The loop stops when the condition becomes false. Read `forloop.cpp` and map its parts to this pattern.

## Common mistakes

Check whether the first value should be included (`<` versus `<=`), and make sure the update moves toward the stopping condition. An off-by-one error is when a loop runs one time too many or too few.

## Practice

1. Print the numbers 1 through 20.
2. Print only even numbers from 2 through 20.
3. Count down from 10 to 1.
4. Predict how many times the body runs before executing each version.

**Challenge:** Use a `for` loop to calculate the sum of integers from 1 to 100. Print the final total and explain why the accumulator must be initialized before the loop.
