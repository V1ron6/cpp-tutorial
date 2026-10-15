# functions

Functions let a program name a reusable operation, accept values through parameters, and optionally return a result. The examples here use small greeting functions so the mechanics stay visible.

| File | What it demonstrates |
|---|---|
| `basic.cpp` | Declaring and calling a `void` function, and comparing repeated code with repeated function calls. |
| `funcwithparameters.cpp` | Passing a string and an integer into a function. |
| `basicStringReturn.cpp` | Returning a `std::string`, storing the result, or using it directly in an output expression. |
| `Overloadedfunc.cpp` | Function overloading: the same function name with different parameter lists. |

## Build and run

Run these commands from the repository root, or change into this folder first.

```sh
g++ -std=c++17 -Wall -Wextra -Wpedantic -o basic functions/basic.cpp && ./basic
g++ -std=c++17 -Wall -Wextra -Wpedantic -o params functions/funcwithparameters.cpp && ./params
g++ -std=c++17 -Wall -Wextra -Wpedantic -o string-return functions/basicStringReturn.cpp && ./string-return
g++ -std=c++17 -Wall -Wextra -Wpedantic -o overloaded functions/Overloadedfunc.cpp && ./overloaded
```

## Notes and improvements

- Removed unused `<vector>` headers from examples that do not use vectors.
- Used `using str_t = std::string;` where a type alias is useful, while keeping explicit standard-library names.
- In `Overloadedfunc.cpp`, the no-argument `greet()` returns a string. Its result is now printed so the example visibly demonstrates that return value instead of silently discarding it.
- Examples intentionally use simple names and small inputs; they demonstrate function concepts rather than a complete application design.
