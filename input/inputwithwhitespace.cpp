#include <iostream>
#include <string>   // BUG FIX: same missing include as inputwithoutwhitespace.cpp

typedef std::string str_t;

int main() {
    str_t name;
    int age;

    std::cout << "Hello!\nWhat is your full name?" << std::endl;
    std::getline(std::cin >> std::ws, name);   // std::ws skips leading whitespace/newlines
    std::cout << name << " how old are you?" << std::endl;
    std::cin >> age;
    std::cout << age << " nice" << std::endl;

    return 0;
}
