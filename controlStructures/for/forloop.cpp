#include <iostream>
#include <string>


int main() {
    /*
      for loop= is a control structure that performs
      an action for a certain number of times.

      for(start;stop;step){
         action

      }


    */

    int number;
    int end;

    std::cout << "*****multiplication table****\n";
    std::cout<<"enter the number\n";
    std::cin>>number;
    std::cout<<"enter the number to end on\n";
    std::cin>>end;

    for(int i=1; i<(end+1); i++) {

        double times= (number*i);

        std::cout<<number<<"x"<<i<<"= "<<times<<std::endl;



    };
    return 0;
};








