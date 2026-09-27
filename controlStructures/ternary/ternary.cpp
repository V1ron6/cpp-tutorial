#include <iostream>

/*
  ternary is a control structure that works similar to if else
  just that ternary is an inline condition. more accurately a 
  short form of ifelse
  
  eg: condition? ifaction:elseaction;



*/
int main()
{
    int age;

    std::cout << "Enter age: ";
    std::cin >> age;

    age >= 18 ? std::cout << "Welcome" << std::endl: std::cout << "Go home" << std::endl;

    return 0;
}
