#include <iostream>
#include <string>

// Declaring a Variable - declared variable

int main() {
    // integers
    int age = 21;
    int year = 2026;
    int day = 6;

    // character
    char grade = 'A';
    char initial = 'E';
    char currency = '$';

    // double
    double temperature = 15.6;
    double gpa = 5.2;
    double price = 12.34;

    // boolean
    // BUG FIX: renamed `free` -> `isFree`. `free` is the name of a
    // C standard library function (from <cstdlib>); shadowing it is
    // legal here but a bad habit worth breaking early.
    bool isFree = true;
    bool student = false;
    bool poweredOn = true;

    // string
    std::string fullname = "byte bro";
    std::string greeting = "good morning";
    std::string food = "pizza";

    std::cout << "----integers--" << std::endl;
    std::cout << "int age " << age << std::endl;
    std::cout << "int year " << year << std::endl;
    std::cout << "int day " << day << std::endl;

    std::cout << "----character-- " << std::endl;
    std::cout << "char grade " << grade << std::endl;
    std::cout << "char initial " << initial << std::endl;
    std::cout << "char currency " << currency << std::endl;

    std::cout << "----double-- " << std::endl;
    std::cout << "double temperature " << temperature << std::endl;
    std::cout << "double gpa " << gpa << std::endl;
    std::cout << "double price " << price << std::endl;

    std::cout << "----boolean-- " << std::endl;
    std::cout << "bool isFree " << isFree << std::endl;
    std::cout << "bool student " << student << std::endl;
    // BUG FIX: poweredOn was declared and never printed - dead variable.
    std::cout << "bool poweredOn " << poweredOn << std::endl;

    std::cout << "I'm tired of printing them" << std::endl;
    return 0;
}
