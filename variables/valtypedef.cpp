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
