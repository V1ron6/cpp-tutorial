#include<iostream>
/* 
   switch is an alternative to if else .
   a switch control structure can map one variable
   against other things without making the code look
   un organized.
   
   switch(parameter){
     case condition:
      action ;
      break;
     
     case condition:
      action ;
      break;
      
     ...
     
     default:
      action;
      break;
      
     }
     
     the default case is just like an else .it executes
     if none of the above cases are true 



*/

int main(){
   
    int day;
    std::cout << "enter a number from (1-7)" << std::endl;
    std::cin >> day;
    
    switch(day){
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
