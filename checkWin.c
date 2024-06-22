#include "main.h"

int checkWin(const char board[3][3]) {
  // Check rows and columns
  for (int i = 0; i < 3; i++) {
    if ((board[i][0] == board[i][1] && board[i][1] == board[i][2] &&
         board[i][0] != ' ') ||
        (board[0][i] == board[1][i] && board[1][i] == board[2][i] &&
         board[0][i] != ' ')) {
      return 1;
    }
  }
  // Check diagonals
  if ((board[0][0] == board[1][1] && board[1][1] == board[2][2] &&
       board[0][0] != ' ') ||
      (board[0][2] == board[1][1] && board[1][1] == board[2][0] &&
       board[0][2] != ' ')) {
    return 1;
  }
  return 0;
}
