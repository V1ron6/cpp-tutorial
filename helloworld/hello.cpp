/*
 * LESSON: Your first C++ program
 *
 * What to learn: A program starts running at main(). The output statement sends text to the console.
 * Try it: Change the message, then add a second output statement.
 * Check your understanding: Why does the program need <iostream>? What does main() represent?
 *
 * Learning tip: Read the program once before running it. Predict what it will do,
 * compile and run it, then explain any difference between your prediction and output.
 */

#include <iostream>

int main() {
    // Execution begins here. The operating system calls main when the program starts.
    // std::cout writes text to the console; \n adds a line break.
    std::cout << "hello world\n";
    return 0;
}
