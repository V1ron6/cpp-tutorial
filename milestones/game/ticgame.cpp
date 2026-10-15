#include <iostream>
#include <limits>
#include <string>

// First complete version of the two-player tic-tac-toe exercise.
using str_t = std::string;

void displayBoard(const char board[3][3]) {
    std::cout << '\n';
    for (int row = 0; row < 3; ++row) {
        std::cout << ' ' << board[row][0] << " | " << board[row][1]
                  << " | " << board[row][2] << '\n';
        if (row < 2) std::cout << "---+---+---\n";
    }
    std::cout << '\n';
}

bool checkWin(const char board[3][3], char sign) {
    for (int i = 0; i < 3; ++i) {
        if ((board[i][0] == sign && board[i][1] == sign && board[i][2] == sign) ||
            (board[0][i] == sign && board[1][i] == sign && board[2][i] == sign)) {
            return true;
        }
    }
    return (board[0][0] == sign && board[1][1] == sign && board[2][2] == sign) ||
           (board[0][2] == sign && board[1][1] == sign && board[2][0] == sign);
}

bool makeMove(char board[3][3], const str_t& player, char sign) {
    while (true) {
        std::cout << player << " (" << sign << "), choose a free cell (1-9): ";
        int position = 0;
        if (!(std::cin >> position)) {
            if (std::cin.eof()) return false;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Please enter a whole number from 1 to 9.\n";
            continue;
        }
        if (position < 1 || position > 9) {
            std::cout << "Position must be between 1 and 9.\n";
            continue;
        }
        const int index = position - 1;
        char& cell = board[index / 3][index % 3];
        if (cell == 'X' || cell == 'O') {
            std::cout << "That cell is occupied; choose another.\n";
            continue;
        }
        cell = sign;
        return true;
    }
}

void resetBoard(char board[3][3]) {
    char value = '1';
    for (int row = 0; row < 3; ++row)
        for (int col = 0; col < 3; ++col)
            board[row][col] = value++;
}

int main() {
    char board[3][3];
    bool playAgain = true;
    while (playAgain) {
        resetBoard(board);
        char sign = 'X';
        int moves = 0;
        bool finished = false;
        while (!finished && moves < 9) {
            displayBoard(board);
            const str_t player = (sign == 'X') ? "Player 1" : "Player 2";
            if (!makeMove(board, player, sign)) {
                std::cout << "Input ended. Goodbye!\n";
                return 0;
            }
            ++moves;
            if (checkWin(board, sign)) {
                displayBoard(board);
                std::cout << player << " wins!\n";
                finished = true;
            } else if (moves == 9) {
                displayBoard(board);
                std::cout << "It's a draw!\n";
                finished = true;
            } else {
                sign = (sign == 'X') ? 'O' : 'X';
            }
        }
        char answer;
        std::cout << "Play again? (y/n): ";
        if (!(std::cin >> answer)) break;
        playAgain = (answer == 'y' || answer == 'Y');
    }
    std::cout << "Goodbye!\n";
    return 0;
}
