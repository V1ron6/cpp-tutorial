/*
 * LESSON: Making a decision with if
 *
 * What to learn: An if block runs only when its condition is true. Here, the comparison age <= 18 decides whether the message is printed.
 * Try it: Try ages 17, 18, and 19. Notice that age 18 still satisfies <= 18.
 * Check your understanding: What would change if the condition were age < 18?
 *
 * Learning tip: Read the program once before running it. Predict what it will do,
 * compile and run it, then explain any difference between your prediction and output.
 */

#include <iostream>
#include <string>

typedef std::string str_t;

/*
  if statement is a condition control structure
   with the form
    if(condition){
     action
     }

*/

int main() {
    str_t name;
    int age;

    std::cout << "what is your name \n" << std::endl;
    std::cin >> name;

    std::cout << "how old are you?\n" << std::endl;
    std::cin >> age;

    if (age <= 18) {
        std::cout << "you cannot be a part of this organization Mr." << name << std::endl;
    }

    return 0;
}
