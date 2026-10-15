/*
 * LESSON: Reading a single word
 *
 * What to learn: The extraction operator >> reads input until whitespace, so a full name containing a space is split at the first space.
 * Try it: Enter a first name, then try entering a full name and compare the result.
 * Check your understanding: Why does >> stop reading at a space?
 *
 * Learning tip: Read the program once before running it. Predict what it will do,
 * compile and run it, then explain any difference between your prediction and output.
 */

#include <iostream>
#include <string>   // BUG FIX: str_t is std::string but <string> was never included
                     // (it happened to compile only because <vector> drags it in transitively)

// alias: str_t behaves exactly like std::string
typedef std::string str_t;

int main() {
    str_t name;

    std::cout << "Hello!\nWhat is your name?" << std::endl;
    // >> reads one whitespace-separated token, not an entire line.
    std::cin >> name;                     // stops reading at the first whitespace
    std::cout << "Welcome " << name << std::endl;

    return 0;
}
