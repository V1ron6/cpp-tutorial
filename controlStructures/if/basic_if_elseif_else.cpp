/*
 * LESSON: Checking several conditions in order
 *
 * What to learn: An if / else if / else chain checks conditions from top to bottom. The first true branch runs, and the remaining branches are skipped.
 * Try it: Try age values -1, 0, 18, and 19. Consider whether age zero should be grouped with negative ages.
 * Check your understanding: Why should the invalid-age condition come before the age limit?
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
     }else if(condition){
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

    // Put the invalid-value check first so it is not mistaken for a valid minor age.
    if (age <= 0) {
        std::cout << name << " are you even human " << std::endl;
    } else if (age <= 18) {
        std::cout << "you cannot be a part of this organization Mr." << name << std::endl;
    } else {
        std::cout << "welcome aboard" << std::endl;
    }

    return 0;
}
