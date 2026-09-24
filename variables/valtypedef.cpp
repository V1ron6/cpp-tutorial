#include <iostream>
#include <vector>

typedef std::string str_t;
/*
  the typedef or using works the same way by 
  creating alias for you variable types.
  it doesnot only shorten codes but can maje it more readable 

 for example assuming i want to create a global variable .
 some thing like  a number and we are all aware that number is 
 represented with int but i want to make it readable.
 i can create an alais for the int to number maki g understanding easier for beginnera

using number=int


*/
int main(){
 str_t name="viron oniel";
 
 std::cout<<"string "<<name<<std::endl;


}
