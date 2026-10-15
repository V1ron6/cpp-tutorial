/*
 * LESSON: Selecting an option with switch
 *
 * What to learn: switch compares one expression against fixed case labels. break exits the switch so execution does not continue into the next case. default handles values that match no case.
 * Try it: Add a case for a special input only if you can give it a sensible meaning; also test 0 and 8.
 * Check your understanding: What might happen if break were removed from a case?
 *
 * Learning tip: Read the program once before running it. Predict what it will do,
 * compile and run it, then explain any difference between your prediction and output.
 */

#include <iostream>

/*
   switch is an alternative to if/else.
   a switch control structure can map one variable
   against several fixed values without making the
   code look disorganized.

   switch(parameter){
     case condition:
      action;
      break;

     case condition:
      action;
      break;

     ...

     default:
      action;
      break;
     }

     the default case is just like an else. It executes
     if none of the above cases match.
*/

int main() {

    int day;
    std::cout << "enter a number from (1-7)" << std::endl;
    std::cin >> day;

    // Only the case matching day is entered. Each break prevents fall-through.
    switch (day) {
        case 1:
            std::cout << "Sunday" << std::endl;
            break;

        case 2:
            std::cout << "Monday" << std::endl;
            break;

        case 3:
            std::cout << "Tuesday" << std::endl;
            break;

        case 4:
            std::cout << "Wednesday" << std::endl;
            break;

        case 5:
            std::cout << "Thursday" << std::endl;
            break;

        case 6:
            std::cout << "Friday" << std::endl;
            break;

        case 7:
            std::cout << "Saturday" << std::endl;
            break;

        default:
            std::cout << "enter a valid number (1-7)" << std::endl;
            break;
    }

    return 0;
}
