#include <iostream>
#include <vector>
#include <string>
#include <limits>   // BUG FIX: needed for the input-validation fix in Move() below

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

// NOTE: `player` is accepted but never used in this function body -- kept
// here rather than removed, since ticgameUpdate.cpp carries the same
// parameter through its equivalent functions.
bool checkWin(const char board[3][3],str_t player,char playerSign){
     //row win
     for(int posX=0;posX<3;posX++){
        // BUG FIX: was board[posX][3] -- valid indices are 0, 1, 2 for a
        // 3x3 board. Index 3 reads one element past the row (undefined
        // behavior / out-of-bounds read), and it meant this row-win check
        // could never actually trigger correctly.
        if(board[posX][0] ==playerSign 
           && board[posX][1]==playerSign 
           && board[posX][2] ==playerSign){
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

   // BUG FIX (serious): there was no validation here at all. If the read
   // fails (non-numeric input, or the stream already hit EOF/fail from an
   // earlier bad read) `position` is left holding an indeterminate value;
   // posX/posY computed from it can then land outside the board's 0-2
   // range and board[posX][posY] reads/writes out of bounds. This
   // reproduced as an actual segfault while testing this file. Reject
   // anything outside 1-9 and ask again instead of indexing with it.
   if (std::cin.fail() || position < 1 || position > 9) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "please enter a number between 1 and 9" << std::endl;
    continue;
   }

   int argumentPOS = position -1;
   int posX=(argumentPOS)/3;
   int posY=(argumentPOS)%3;
   
   // BUG FIX: `|` is bitwise OR (no short-circuit); `||` is the logical OR
   // this comparison actually needs.
   if(board[posX][posY] == 'X' || board[posX][posY]=='O'){
    std::cout << "already occupied" << std::endl;
    // BUG FIX: there was no `else` here, so the board was overwritten with
    // the new sign even when the cell was already occupied -- the check
    // above detected the conflict but nothing stopped the assignment.
    }else{
   std::cout << "posX  " <<posX << std::endl;
   std::cout << " posY " <<posY << std::endl;
   board[posX][posY] =playerSign;
    };
   // KNOWN ISSUE (carried over, not fixed): `break` runs unconditionally
   // here, so this `while(stillPlaying)` loop never actually repeats --
   // an occupied-cell guess still consumes the player's turn instead of
   // asking them to pick again. Leaving as-is since retry handling is
   // still being designed (see milestones-README.md).
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
   
   // BUG FIX: both were declared with no initial value and then read
   // (via checkWin) before anything ever assigned them -- reading an
   // uninitialized char/string here is undefined behavior. Giving them
   // a starting value makes the first loop iteration well-defined.
   char playerSign = 'X';
   str_t Cplayer = "Player 1";
   while(playagain){
   
   displayBoard(board);
  if(checkWin(board,Cplayer,playerSign)){
    std::cout << "current player wins" << std::endl;
    char con;
    std::cout << "do you want to play again?(y/n)" << std::endl;
    std::cin >> con;
    // KNOWN ISSUE (not fixed, feature incomplete): `con` is a char read by
    // `cin >> con`, which skips whitespace and always lands on some
    // non-null character or leaves the stream in a fail state -- it can
    // never actually be the empty/0 value this ternary is checking for,
    // so the "cannot be empty" branch is effectively dead code.
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
