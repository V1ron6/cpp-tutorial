#include <iostream>
#include <string>


int main() {

    /*
      do-while = is a control structure that performs an initial
      action and illiterate until a specific condition is met

      do{
        action
        }
        while(condition);



    */
   int number;
   do{ 
     std::cout<<"guess a number between 1-10 \n";
     std::cin>>number;
     std::cout<<"try again!!! \n";
     }while(number != 7);
     
   std::cout<<"hurray you got the number";
   return 0;
};








