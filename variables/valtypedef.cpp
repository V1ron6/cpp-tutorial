/*
 * LESSON: Type aliases with typedef and using
 *
 * What to learn: A type alias gives an existing type another name. It does not create a new distinct type. Modern C++ commonly uses using because the syntax is straightforward.
 * Try it: Add `using score = int;` and declare a score variable.
 * Check your understanding: Does str_t store a different kind of data from std::string?
 *
 * Learning tip: Read the program once before running it. Predict what it will do,
 * compile and run it, then explain any difference between your prediction and output.
 */

#include <iostream>
#include <string>   // BUG FIX: str_t is std::string but <string> was never included

// typedef (and, in modern C++, `using`) creates an alias for a type.
// It doesn't just shorten code, it can make it more readable too.
//
// For example, a variable meant to store a count doesn't say so if it's
// just `int`. Aliasing it as `number` makes the intent clearer to anyone
// reading the code.

typedef std::string str_t;
using number = int;   // `using` is the modern, preferred alternative to typedef
                       // BUG FIX: the original file only talked about this in a
                       // comment and never actually demonstrated it.

int main() {
    str_t name = "viron oniel";
    number age = 21;

    std::cout << "string " << name << std::endl;
    std::cout << "number " << age << std::endl;

    return 0;
}
