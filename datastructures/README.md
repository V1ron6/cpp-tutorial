# Lesson: Arrays — Store Related Values Together

## The idea

A variable usually stores one value. An **array** stores several values of the same type under one name. Each value has a numbered position called an *index*. In C++, array indexes start at `0`, not `1`.

For example, in an array containing four car names, `cars[0]` is the first car and `cars[3]` is the fourth. Trying to use an index outside the array's valid range is an error in your program's logic and can cause undefined behaviour.

## Follow the lessons in order

| File | What to learn |
|---|---|
| [`array.cpp`](array/array.cpp) | Declare an array with initial values and access elements by index |
| [`arrayDeclareAssign.cpp`](array/arrayDeclareAssign.cpp) | Declare an array first, then assign values to individual positions |
| [`arrayAcceptUserInput.cpp`](array/arrayAcceptUserInput.cpp) | Read values from the user and store them in an array |
| [`arrayFill.cpp`](array/arrayFill.cpp) | Fill array elements using a loop |
| [`arrayIterateFor.cpp`](array/arrayIterateFor.cpp) | Visit each element with an indexed `for` loop |
| [`arrayIterateForEach.cpp`](array/arrayIterateForEach.cpp) | Use a range-based `for` loop when the index is not needed |
| [`arraySearch.cpp`](array/arraySearch.cpp) | Search for a value and report its index or that it was not found |
| [`arrayAsAParam.cpp`](array/arrayAsAParam.cpp) | Pass an array to a function and work with its elements |
| [`multidimentionalArray.cpp`](array/multidimentionalArray.cpp) | Represent data in rows and columns |
| [`arrayExtra.cpp`](array/arrayExtra.cpp) | Review and experiment with additional array examples |

## How to read an array declaration

Consider this example:

```cpp
std::string cars[] = {"Volvo", "BMW", "Koenigsegg", "Benz"};
```

- `std::string` is the type of each element.
- `cars` is the array's name.
- The square brackets indicate an array declaration.
- The braces contain the initial values.
- Because four values are provided, C++ can determine the number of elements.

Access one element with `cars[0]`. Change the index to see how the selected value changes. Remember that the last valid index is one less than the number of elements.

## Indexes and loops

An indexed loop is useful when the position matters:

```cpp
for (int i = 0; i < SIZE; ++i) {
    std::cout << numbers[i] << '\n';
}
```

The loop starts at index `0`, continues while `i < SIZE`, and increases `i` after each iteration. The condition is `< SIZE`, not `<= SIZE`, because `SIZE` itself is not a valid index.

A range-based loop is simpler when only the values are needed:

```cpp
for (int number : numbers) {
    std::cout << number << '\n';
}
```

Compare the two loop examples and ask whether each needs to know the element's position.

## Build and run

Run commands from the repository root. For example:

```sh
g++ -std=c++17 -Wall -Wextra -Wpedantic -o arrays datastructures/array/array.cpp
./arrays
```

Use a different output name for each program you compile, or compile and run one example at a time.

## Practice

1. Create an array of five integers and print the first and last values.
2. Change one element and print the array again.
3. Use a loop to print every element instead of writing a separate output statement for each one.
4. Ask the user for several values and store them in an array.
5. Search for a name that exists, then try a name that does not exist.
6. Explain why a loop condition such as `i <= SIZE` is dangerous when accessing `numbers[i]`.

**Challenge:** Store five quiz scores in an array, print them, calculate their total, and determine the highest score. Keep the solution inside the existing array topic.

## Important limitation

These examples use built-in C++ arrays. The array's size is fixed, and the code must keep track of how many elements it contains. In particular, when an array is passed to a function, the function does not automatically receive its length as part of the array parameter. The examples use a separate size value for that reason.

Do not confuse an array's number of elements with its final index: an array of size `5` has valid indexes `0` through `4`.
