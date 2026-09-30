#include <iostream>
#include <vector>
#include <string>

typedef std::string str_t;

void displayBoard(const char board[3][3]){
   std::cout << "\n";
   std::cout << " " << board[0][0] << " | "
              << board[0][1] << " | "
              << board[0][2] << "\n";
   std::cout << "---+---+---" << std::endl;
   std::cout << " " << board[1][0] << " | "
              << board[1][1] << " | "
              << board[1][2] << "\n";
   std::cout << "---+---+---" << std::endl;
   std::cout << " " << board[2][0] << " | "
              << board[2][1] << " | "
              << board[2][2] << "\n";
   

};

bool checkWin(const char board[3][3],str_t player,char playerSign){
     //row win
     for(int posX=0;posX<3;posX++){
        if(board[posX][0] ==playerSign 
           && board[posX][1]==playerSign 
           && board[posX][3] ==playerSign){
        return true;
       };
     };
     
     
     //column win
     for(int posY=0;posY<3;posY++){
        if(board[0][posY] ==playerSign
           && board[1][posY] ==playerSign
           && board[2][posY] ==playerSign){
        return true;
        };
     
     };
     
     
     //diagonal left
     if(board[0][2]==playerSign 
        && board[1][1]==playerSign
        && board[2][0]==playerSign ){
          return true;
        
        };
     
     //diagonal right 
     if(board[0][0]==playerSign 
        && board[1][1]==playerSign
        && board[2][2]==playerSign ){
          return true;
        
        };
     
  return false;  
};

bool Move(char board[3][3],str_t player, char playerSign){
  int position;
  bool stillPlaying=true;
  while(stillPlaying){
  std::cout << "select a number between 1-9" << std::endl;
  //remember the values will be uploaded to the array hence you must remove 1 from the position variable 
  std::cin >> position;
   int argumentPOS = position -1;
   int posX=(argumentPOS)/3;
   int posY=(argumentPOS)%3;
   
   if(board[posX][posY] == 'X' | board[posX][posY]=='O'){
    std::cout << "already occupied" << std::endl;
    };
   std::cout << "posX  " <<posX << std::endl;
   std::cout << " posY " <<posY << std::endl;
   board[posX][posY] =playerSign;
   break;
   };
   
 return true;
};

void newgame(char board[3][3]){
std::cout << "wiping database clean :)" << std::endl;
   
}

int main(){
   bool playagain=true;
   char board[3][3]={
     {'1','2','3'},
     {'4','5','6'},
     {'7','8','9'}
   };
   
   char playerSign;
   str_t Cplayer;
   while(playagain){
   
   displayBoard(board);
  if(checkWin(board,Cplayer,playerSign)){
    std::cout << "current player wins" << std::endl;
    char con;
    std::cout << "do you want to play again?(y/n)" << std::endl;
    std::cin >> con;
    con? std::cout << "verifying ..." << std::endl : std::cout << "cannot be empty" << std::endl;
    if(con =='y'){
    //yet to be created 
      newgame(board);
      }else if(con =='n'){
      playagain=false;
      std::cout << "Goodbye , catch you later" << std::endl;
      };
      
  }else{
   Move(board,Cplayer, playerSign);
   };
 };
 return 0;

}
