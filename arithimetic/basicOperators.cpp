#include <iostream>

/*making use of +,-,* and / */

namespace sub{
 int students=20;
}

namespace add{
 int students=0;
}

namespace mul{
 int students=4;
}

namespace div{
  int students=10;
}

int main(){


//addition
 add::students =add::students +1;
 add::students+=1;
 //increments increase by 1 (++)
 add::students++;

std::cout<<"students sum "<<add::students<<std::endl;

//subtraction
 sub::students =sub::students -1;
 sub::students-=1;
 //decrements reduces  by 1 (--)
 sub::students--;
std::cout<<"students sub "<<sub::students<<std::endl;

//multiplication
 mul::students =mul::students * 2;
std::cout<<"students product "<<mul::students<<std::endl;
//division
 div::students=(double) div::students/2;
std::cout<<"students quotient "<<div::students<<std::endl;
return 0;
}
