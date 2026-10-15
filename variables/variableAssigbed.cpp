/*
 * LESSON: Initializing variables
 *
 * What to learn: Initialization gives a variable its first value at the moment it is declared. Different types represent different kinds of data.
 * Try it: Change the float and double values. Notice that 3.14f uses f to mark a float literal.
 * Check your understanding: What could go wrong if a variable is used before it has a meaningful value?
 *
 * Learning tip: Read the program once before running it. Predict what it will do,
 * compile and run it, then explain any difference between your prediction and output.
 */

#include <iostream>
#include <string>

// BUG FIX: dropped `using namespace std;` in favor of explicit std::
// (kept consistent with the rest of the tutorial; see root README).

// assigned on declaration
int main() {
    int number = 1;
    std::string letter = "a word string";   // typo fix: "sting" -> "string"
    float pie = 3.14f;
    double pieV = 3.1459;

    std::cout << "-----------------------" << std::endl;
    std::cout << "___Declared variables___" << std::endl;
    std::cout << "int :" << number << std::endl;
    std::cout << "string :" << letter << std::endl;
    std::cout << "float :" << pie << std::endl;
    std::cout << "Double :" << pieV << std::endl;

    return 0;
}
