#include <iostream>

// this code focuses on making use of variables that remain fixed (constants)

int main() {
    const double PI = 3.14159;
    double radius = 7;
    double circumference = 2 * PI * radius;

    std::cout << "circumference " << circumference << " cm" << std::endl;

    return 0;
}
