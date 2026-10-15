/*
 * LESSON: Choosing between two paths
 *
 * What to learn: if and else form a two-way decision: one branch runs when the condition is true, the other when it is false. getline lets the name contain spaces.
 * Try it: Test one age on each side of the boundary. Decide whether the rule should use < or <= for your intended policy.
 * Check your understanding: Can both branches run during one execution of this if/else?
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
     }else{
     action
     }

*/

int main() {
    str_t name;
    int age;

    std::cout << "what is your name \n" << std::endl;
    std::getline(std::cin >> std::ws, name);

    std::cout << "how old are you?\n" << std::endl;
    std::cin >> age;

    if (age <= 18) {
        std::cout << "you cannot be a part of this organization Mr." << name << std::endl;
    } else {
        std::cout << "welcome aboard" << std::endl;
    }

    return 0;
}
