# Lesson 6: Functions — Give a Task a Name

## The idea

A function is a named block of code that performs a task. Functions help avoid repeating the same instructions and let a program be divided into smaller pieces that are easier to understand and test.

## Explore the examples

| File | What to notice |
|---|---|
| `basic.cpp` | Defining and calling a function that returns no value (`void`) |
| `funcwithparameters.cpp` | Passing information into a function through parameters |
| `basicStringReturn.cpp` | Returning a `std::string` to the caller |
| `Overloadedfunc.cpp` | Using the same function name with different parameter lists |

## Read a function like a conversation

A function definition describes the task. A function call asks the program to perform it. Parameters are named inputs; arguments are the actual values passed in the call. A return value is information sent back to the caller.

For example, a function that accepts a name and returns a greeting separates two responsibilities: creating the greeting and deciding where to display it. A `void` function performs its task without returning a value. A non-`void` function should return a value of its declared return type along every relevant path.

## Function overloading

Overloaded functions share a name but have different parameter lists. C++ selects a matching overload based on the arguments. Return type alone is not enough to overload a function: two functions cannot differ only by return type.

## Build and run

```sh
g++ -std=c++17 -Wall -Wextra -Wpedantic -o basic functions/basic.cpp && ./basic
g++ -std=c++17 -Wall -Wextra -Wpedantic -o params functions/funcwithparameters.cpp && ./params
g++ -std=c++17 -Wall -Wextra -Wpedantic -o string-return functions/basicStringReturn.cpp && ./string-return
g++ -std=c++17 -Wall -Wextra -Wpedantic -o overloaded functions/Overloadedfunc.cpp && ./overloaded
```

## Practice

1. Write a `void` function that prints a welcome message.
2. Write a function that accepts two integers and returns their sum.
3. Write a function that accepts a name and returns a greeting string.
4. Add a second overload with a different parameter list. Explain which overload each call selects.

**Challenge:** Create a small conversion helper that takes a value, calculates a result, and returns it. Print the result from `main()` rather than printing inside the helper. This helps separate calculation from presentation.

## Read a function call from start to finish

When you encounter a function, identify four things: its return type, its name, its parameters, and its body. Then find where it is called. For example, `greet("Ama", 20)` passes two arguments into the function's `name` and `age` parameters. The function body uses those local parameter values.

A `void` function performs an action without returning a value. A function returning `std::string` can send text back to the caller, where it can be stored or printed. Overloaded functions use the same name with different parameter lists; the compiler chooses the matching version from the call.

**Practice:** Write a function that accepts two numbers and returns their sum. Call it with two different pairs and print each returned result.
