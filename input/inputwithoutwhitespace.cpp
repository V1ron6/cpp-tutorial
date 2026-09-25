#include <iostream>
#include <string>   // BUG FIX: str_t is std::string but <string> was never included
                     // (it happened to compile only because <vector> drags it in transitively)

// alias: str_t behaves exactly like std::string
typedef std::string str_t;

int main() {
    str_t name;

    std::cout << "Hello!\nWhat is your name?" << std::endl;
    std::cin >> name;                     // stops reading at the first whitespace
    std::cout << "Welcome " << name << std::endl;

    return 0;
}
