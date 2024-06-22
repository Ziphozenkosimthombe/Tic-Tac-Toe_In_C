#include "main.h"
#include <stdio.h>

void playerMove(char board[3][3], char player) {
  int row, col;
  int validInput = 0;

  while (!validInput) {
    printf("Player %c, enter your move (row and column) between 1 and 3 e.g(1 "
           "2): ",
           player);
    if (scanf("%d %d", &row, &col) != 2) {
      // Clear the input buffer if invalid input is detected
      while (getchar() != '\n')
        ;
      printf("Invalid input. Please enter two numbers separated by a space.\n");
    } else if (row < 1 || row > 3 || col < 1 || col > 3 ||
               board[row - 1][col - 1] != ' ') {
      printf("Invalid move. Please enter a valid row and column.\n");
    } else {
      board[row - 1][col - 1] = player;
      validInput = 1;
    }
  }
}
