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
