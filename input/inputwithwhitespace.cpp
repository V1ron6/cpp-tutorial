/*
 * LESSON: Reading a complete line
 *
 * What to learn: // getline reads the whole line, including spaces, until Enter is pressed.
    // Reads the complete line, unlike operator >> for a string.
    std::getline reads characters until the user presses Enter, including spaces. std::ws consumes leading whitespace left in the input stream before getline begins.
 * Try it: Try a name with multiple words. If you read another value before getline, think about the leftover newline.
 * Check your understanding: When is getline a better choice than >>?
 *
 * Learning tip: Read the program once before running it. Predict what it will do,
 * compile and run it, then explain any difference between your prediction and output.
 */

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
