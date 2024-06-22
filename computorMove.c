#include "main.h"
#include <stdlib.h>
#include <time.h>

void computerMove(char board[3][3], char computer) {
  int row, col;
  int validMove = 0;

  // Initialize random number generator
  srand(time(NULL));

  while (!validMove) {
    row = rand() % 3;
    col = rand() % 3;

    if (board[row][col] == ' ') {
      board[row][col] = computer;
      validMove = 1;
    }
  }
}
