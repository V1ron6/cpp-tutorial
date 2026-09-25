#include <iostream>

/*
 namespace allows you to give the same variable name a different
 value depending on the context/purpose it belongs to.
*/

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

int main() {
    int x = 0;

    std::cout << "x first namespace value " << first::x << std::endl;
    std::cout << "x second namespace value " << second::x << std::endl;
    std::cout << "x value without namespace " << x << std::endl;

    return 0;
}
