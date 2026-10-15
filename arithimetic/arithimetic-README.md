# Lesson 4: Arithmetic and Expressions

## The idea

An expression combines values and operators to produce a result. Arithmetic is more than knowing the symbols: the types of the values and the order of operations affect the answer.

Open `basicOperators.cpp` to explore the arithmetic operators. Open `cmatharithimeticfunc.cpp` to see examples from the standard `<cmath>` library.

## The core operators

| Operator | Meaning | Example |
|---|---|---|
| `+` | Addition | `4 + 3` gives `7` |
| `-` | Subtraction | `4 - 3` gives `1` |
| `*` | Multiplication | `4 * 3` gives `12` |
| `/` | Division | `7.0 / 2.0` gives `3.5` |
| `%` | Remainder for integers | `7 % 2` gives `1` |

Be especially careful with integer division: `7 / 2` evaluates to `3`, because both operands are integers. Use a floating-point operand when a fractional result is required. Parentheses make the intended order explicit, as in `(a + b) * c`.

## Using `<cmath>`

The `<cmath>` header provides common mathematical functions. Read the function call in `cmatharithimeticfunc.cpp` and identify the input passed into the function and the returned result. Check each function's expected input; for example, square-root calculations need a non-negative real input for an ordinary real result.

## Run it

```sh
g++ -std=c++17 -Wall -Wextra -Wpedantic -o operators arithimetic/basicOperators.cpp
./operators

g++ -std=c++17 -Wall -Wextra -Wpedantic -o math arithimetic/cmatharithimeticfunc.cpp
./math
```

## Practice

1. Store two numbers and print their sum, difference, product, and quotient.
2. Predict the difference between `9 / 2` and `9.0 / 2` before running either expression.
3. Use `%` to determine whether an integer is even or odd.
4. Add parentheses to make a longer calculation easier to read.

**Challenge:** Build a simple circle calculator using a radius and a constant for pi. Print circumference and area, and explain why the radius is stored as a floating-point type.

## Trace a calculation

In `basicOperators.cpp`, follow each variable from its initial value, through the update, to the printed result. For example, `add::students += 1;` adds one to the value already stored in that namespace. The namespace prefix identifies which `students` variable is being changed.

The quotient demonstrates a crucial type rule: `9 / 2` performs integer division and produces `4`, while converting one operand to `double` before division preserves `4.5`. In `cmatharithimeticfunc.cpp`, `std::sqrt`, `std::pow`, `std::ceil`, and `std::floor` are named operations supplied by `<cmath>`.

**Practice:** Before running the file, calculate the values by hand. Then try `9 / 2`, `9.0 / 2`, and `static_cast<double>(9) / 2` in separate expressions and compare them.
