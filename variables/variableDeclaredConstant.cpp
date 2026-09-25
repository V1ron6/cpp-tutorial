#include <iostream>
// BUG FIX: dropped `using namespace std;` in favor of explicit std::

int main() {
    const float pi = 3.14f;

    float radius = 5, area, perimeter;

    area = (radius * radius) * pi;
    perimeter = 2 * (pi * radius);

    std::cout << "area :" << area << std::endl;
    std::cout << "perimeter :" << perimeter << std::endl;
    return 0;
}
