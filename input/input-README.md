# Lesson 2: Let the User Enter Information

## The idea

Output lets a program speak; input lets a person provide information. The examples in this folder demonstrate two common ways to read text.

- `inputwithoutwhitespace.cpp` uses `std::cin`. Reading a string this way stops at whitespace, so `Sly Owusu` is read as `Sly` when stored in a single string.
- `inputwithwhitespace.cpp` uses `std::getline`. It reads the whole line, including spaces, until Enter is pressed.

Both approaches are useful. Choose based on the shape of the data: a single word or token, or a complete line such as a name or sentence.

## Follow the data

When you see `std::cin >> value`, think: “take the next input token and store it in `value`.” When you see `std::getline(std::cin, value)`, think: “read the rest of this line into `value`.” The variable must exist before the value can be stored in it.

## Run the examples

```sh
g++ -std=c++17 -Wall -Wextra -Wpedantic -o token input/inputwithoutwhitespace.cpp
./token

g++ -std=c++17 -Wall -Wextra -Wpedantic -o line input/inputwithwhitespace.cpp
./line
```

Try entering `Elvin Owusu` in both programs and compare the results.

## A common surprise

If `std::cin >> age` is followed immediately by `std::getline`, the newline left after the number may be consumed as an empty line. This is not `getline` randomly failing; it is reading the newline that is still waiting in the input stream. A common fix is `std::getline(std::cin >> std::ws, line)` when intentionally reading a line after formatted input. Learn why the newline is there rather than memorizing the fix.

For numeric input, check whether extraction succeeded before using the value. A user may type text where a number is expected.

## Practice

1. Read a first name using `std::cin`.
2. Read a full name using `std::getline`.
3. Add a prompt before each input so the user knows what to type.
4. Explain why the first example cannot capture a multi-word name as one string.

**Challenge:** Ask for a full name and favourite activity, then print both in one friendly sentence.

## Walk through both versions

In `inputwithoutwhitespace.cpp`, `std::string name;` creates an empty string. `std::cin >> name;` stores only the next token, so typing `Ama Mensah` stores `Ama`. In `inputwithwhitespace.cpp`, `std::getline(...)` reads the complete line, including the space.

A common trap occurs when `>>` is used before `getline`: the newline left behind in the input stream may be read as an empty line. `std::ws` can consume leading whitespace before the next line is read.

**Practice:** Ask for a first name and age, then print a sentence containing both. Decide which input method is appropriate for each value.
