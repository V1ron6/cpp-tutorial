#include <iostream>
#include <limits>   // BUG FIX: needed for the input-validation fix in Move() below

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

bool checkWin(const char board[3][3],char Cplayer,char CplayerSign){
     //row win
     for(int posX=0;posX<3;posX++){
        // BUG FIX: was board[posX][3] -- out-of-bounds for a 3x3 board
        // (valid indices are 0-2). Same bug as in ticgame.cpp.
        if(board[posX][0] ==CplayerSign 
           && board[posX][1]==CplayerSign 
           && board[posX][2] ==CplayerSign){
        return true;
       };
     };
     
     
     //column win
     for(int posY=0;posY<3;posY++){
        if(board[0][posY] ==CplayerSign
           && board[1][posY] ==CplayerSign
           && board[2][posY] ==CplayerSign){
        return true;
        };
     
     };
     
     
     //diagonal left
     if(board[0][2]==CplayerSign 
        && board[1][1]==CplayerSign
        && board[2][0]==CplayerSign ){
          return true;
        
        };
     
     //diagonal right 
     if(board[0][0]==CplayerSign 
        && board[1][1]==CplayerSign
        && board[2][2]==CplayerSign ){
          return true;
        
        };
     
     
  return false;  
};



bool Move(char board[3][3],char Cplayer, char CplayerSign){
  int position;
  bool stillPlaying=true;
  while(stillPlaying){
  std::cout << "select a number between 1-9" << std::endl;
  //remember the values will be uploaded to the array hence you must remove 1 from the position variable 
  std::cin >> position;

   // BUG FIX (serious): same unguarded read as in ticgame.cpp -- bad or
   // exhausted input left `position` holding garbage, and posX/posY
   // derived from it could index board[][] out of bounds (reproduced as
   // an actual segfault while testing). Validate before indexing.
   if (std::cin.fail() || position < 1 || position > 9) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "please enter a number between 1 and 9" << std::endl;
    continue;
   }

   int argumentPOS = position -1;
   int posX=(argumentPOS)/3;
   int posY=(argumentPOS)%3;
   
   // BUG FIX: `|` -> `||` (bitwise vs. logical OR; same issue as ticgame.cpp).
   if(board[posX][posY] == 'x' || board[posX][posY]=='o'){
    std::cout << "already occupied" << std::endl;
    }else{
   board[posX][posY] =CplayerSign;
   };
   // KNOWN ISSUE (carried over, not fixed): `break` is unconditional, so
   // an occupied-cell guess still ends the turn instead of letting the
   // player pick again -- same open issue as in ticgame.cpp.
   break;
   };
   
   
   
 return true;
};

char switchPlayer(char Cplayer,char sessPlayerTwo,char sessPlayerOne){
  if(Cplayer == sessPlayerOne){
      Cplayer = sessPlayerTwo;
    }else if(Cplayer == sessPlayerTwo){
      Cplayer = sessPlayerOne;
    }else{
    // NOTE: "500" is a placeholder error message (reads like a leftover
    // HTTP status code) for a branch that shouldn't be reachable given
    // how Cplayer is currently assigned. Left as-is pending real handling.
    std::cout << "500" << std::endl;
    };
      
    return Cplayer;
  };


void newgame(char board[3][3]){
std::cout << "wiping database clean :)" << std::endl;
   
}

char signassign(char Cplayer, char CplayerSign,char sessPlayerTwo,char sessPlayerOne){

  if(Cplayer == sessPlayerOne)
  {
   CplayerSign='x';
  }
  else if(Cplayer== sessPlayerTwo)
  {
   CplayerSign='o';
   }
   else
  {
    // NOTE: same kind of placeholder as switchPlayer's "500" above --
    // reads like a mocked-up error code, not a real diagnostic.
    std::cout << "$ errno 0x78" << std::endl;
  };
  
  return CplayerSign;
};

int main(){
   bool playagain=true;
   char board[3][3]={
     {'1','2','3'},
     {'4','5','6'},
     {'7','8','9'}
   };
   
   char  CplayerSign;
   char Cplayer ='0';
   
   char sessPlayerOne ='0';
   char sessPlayerTwo ='1';

   
   while(playagain){
   CplayerSign = signassign(Cplayer,CplayerSign,sessPlayerTwo,sessPlayerOne);
   
   std::cout << "it's your turn "<<Cplayer << std::endl;
   
   
   
   displayBoard(board);
   if(checkWin(board,Cplayer,CplayerSign)){
    std::cout << "current player wins" << std::endl;
    char con;
    std::cout << "do you want to play again?(y/n)" << std::endl;
    std::cin >> con;
    // KNOWN ISSUE (not fixed, feature incomplete): same as ticgame.cpp --
    // `con` can never actually be empty here, so the false branch is dead.
    con? std::cout << "verifying ..." << std::endl : std::cout << "cannot be empty" << std::endl;
    if(con =='y'){
    //yet to be created 
      newgame(board);
      }else if(con =='n'){
      playagain=false;
      std::cout << "Goodbye , catch you later" << std::endl;
      };
      
   }else{
    Move(board,Cplayer, CplayerSign);
   Cplayer = switchPlayer(Cplayer,sessPlayerTwo,sessPlayerOne);
   };
 };
 return 0;

}
