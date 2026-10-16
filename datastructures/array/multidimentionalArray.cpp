#include <iostream>



/*
    A multidirectional array=is just an array in an array.
                      or simply,it's just a data table with rows and columns.

    struct:
       2 dimensional array:
       datatype ArrayName [rows][colums]={
                              {},{},...,{}
                                }


3 dimensional array:
datatype ArrayName [][][]= {
                            {{},{},{},...,{}},
                            {{},{},{},...,{}},
                            {{},{},{},...,{}}
}

*/


int main() {

    std::string users[3][3]= {
        {"John","Doe","jdoe@example.com"},
        {"Evans","Tanner","EvanTanner@FDI.org"},
        {"Alexander","Pendel","APendel@gmail.com"}
    };
    int rows=sizeof(users)/sizeof(users[0]);
    int columns= sizeof(users[0])/sizeof(users[0][0]);

    for(int I=0; I<rows; I++) {
    std::cout << "\n" << std::endl;
        for(int j=0; j<columns; j++) {
            std::cout << users[I][j] <<" " ;
        };
    };

    return 0;
}
