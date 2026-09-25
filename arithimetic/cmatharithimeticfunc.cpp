#include <iostream>
#include <cmath>

int main() {
    // BUG FIX: these were declared as `int`. Every <cmath> function here
    // returns a double, and storing the result straight into an int
    // silently truncates it. It didn't show up for pow/round/ceil/floor
    // because those results happened to be whole numbers, but sqrt(3)
    // was silently cut down from ~1.732 to 1.
    double x = 3;
    double y = 6;
    double z;

    // BUG FIX: fmax/fmin/pow/sqrt/abs/round/ceil/floor were called
    // unqualified. They compiled only because <cmath> also happens to
    // dump C-style names into the global namespace on some compilers --
    // that's not guaranteed. Qualifying with std:: is the portable way.
    z = std::fmax(x, y);
    std::cout << "max : " << z << std::endl;

    z = std::fmin(x, y);
    std::cout << "min : " << z << std::endl;

    z = std::pow(x, y);
    std::cout << "pow : " << z << std::endl;

    z = std::sqrt(x);
    std::cout << "sqr : " << z << std::endl;

    z = std::abs(-y);
    std::cout << "absolute : " << z << std::endl;

    z = std::round(3.87);
    std::cout << "round : " << z << std::endl;

    z = std::ceil(3.87);
    std::cout << "round upwards : " << z << std::endl;

    z = std::floor(3.87);
    std::cout << "round downward : " << z << std::endl;

    return 0;
}
