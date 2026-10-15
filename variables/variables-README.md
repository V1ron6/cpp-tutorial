# Lesson 3: Variables, Types, and Constants

## The idea

A variable is a named place for a value. Its type tells C++ what kind of value it stores and which operations make sense for it. A good variable name helps a reader understand the program without guessing.

## Explore the examples

| File | Read it to learn |
|---|---|
| `variables1.cpp` | Common types: `int`, `char`, `double`, `bool`, and `std::string` |
| `variableAssigbed.cpp` | Declaring and initializing several variables |
| `variableCONST.cpp` | A constant used in a circle calculation |
| `variableDeclaredConstant.cpp` | Reusing a constant in more than one calculation |
| `variableWithNamespace.cpp` | How namespaces keep same-named identifiers separate |
| `valtypedef.cpp` | Type aliases using `typedef` and `using` |

## The types in everyday language

- `int`: whole numbers such as `7` or `-2`.
- `double`: numbers that can have a fractional part, such as `3.14`.
- `char`: one character, written with single quotes, such as `'A'`.
- `bool`: either `true` or `false`.
- `std::string`: text, usually written in double quotes.

For example, `int score = 10;` declares an integer named `score` and initializes it to `10`. `const double pi = 3.14159;` declares a value that cannot be reassigned after initialization. Prefer `const` when a value should remain fixed.

## Names and scope

A namespace groups names so that two values can share a name without being confused. In `variableWithNamespace.cpp`, compare the qualified names such as `first::x` and `second::x`. The `::` operator identifies the scope where a name belongs. Type aliases such as `using str_t = std::string;` create an alternate name for a type; they do not create a new kind of string.

## Run and investigate

```sh
g++ -std=c++17 -Wall -Wextra -Wpedantic -o vars variables/variables1.cpp
./vars
```

Repeat with each filename. Before running, predict the output. Then change a value and observe which output changes.

## Practice

1. Declare a variable for a player's name, score, and whether the player is active.
2. Calculate a circle's circumference and area using a constant for pi.
3. Change a `double` to an `int`. What happens to the fractional part, and why might that matter?
4. In the namespace example, explain why `first::x` and `second::x` can be different values.

**Challenge:** Create a tiny profile program that stores a name, age, and a constant for the number of days in a week, then prints a neatly formatted summary.

## Read the source as a data story

Start with `variables1.cpp`. Each declaration follows the pattern `type name = value;`. The type tells C++ what kind of value is stored; the name lets the rest of the program refer to it. The output statements then read those named values and display them.

Next compare the constant examples. `const` means a value cannot be reassigned after initialization. In `variableWithNamespace.cpp`, `first::x` and `second::x` refer to different variables because the namespace is part of each name. In `valtypedef.cpp`, `str_t` and `number` are aliases: they make declarations shorter but do not create new underlying types.

**Practice:** Add an `int` for a quantity, a `double` for a price, and a `const` value for a tax rate. Print them with labels that explain what each value means.
