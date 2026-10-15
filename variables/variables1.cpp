/*
 * LESSON: Choosing a data type
 *
 * What to learn: Variables name values so a program can store and use information. int stores whole numbers, double stores decimal values, char stores one character, bool stores true/false, and std::string stores text.
 * Try it: Change the sample values and add a variable for your favourite number. Predict the output before running it.
 * Check your understanding: Why is a character written with single quotes but a string with double quotes?
 *
 * Learning tip: Read the program once before running it. Predict what it will do,
 * compile and run it, then explain any difference between your prediction and output.
 */

#include <iostream>
#include <string>

// Declaring a Variable - declared variable

int main() {
    // integers
    int age = 21; // int: a whole-number type
    int year = 2026;
    int day = 6;

    // character
    char grade = 'A'; // char holds one character, written with single quotes
    char initial = 'E';
    char currency = '$';

    // double
    double temperature = 15.6; // double can represent fractional values
    double gpa = 5.2;
    double price = 12.34;

    // boolean
    // BUG FIX: renamed `free` -> `isFree`. `free` is the name of a
    // C standard library function (from <cstdlib>); shadowing it is
    // legal here but a bad habit worth breaking early.
    bool isFree = true; // bool is either true or false
    bool student = false;
    bool poweredOn = true;

    // string
    std::string fullname = "byte bro"; // string stores a sequence of characters
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
