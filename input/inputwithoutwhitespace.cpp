#include<iostream>
#include <vector>

typedef std::string str_t;

int main()
{
  str_t name;
   
    std::cout << "Hello !,\nwhat is your name?" << std::endl;
    std::cin >>name;
    std::cout << "welcome "<<name << std::endl;
    return 0;
}
