#include "main.h"
#include <stdio.h>

int main() {
  char board[3][3];
  char currentPlayer = 'X'; // Player starts first
  char computerPlayer = 'O';
  int gameStatus = 0;

  initializeBoard(board);
  printf("Welcome to Tic-Tac-Toe!\n");

  while (gameStatus == 0) {
    printBoard(board);

    if (currentPlayer == 'X') {
      playerMove(board, currentPlayer);
    } else {
      computerMove(board, computerPlayer);
    }

    if (checkWin(board)) {
      gameStatus = 1;
    } else if (checkTie(board)) {
      gameStatus = 2;
    } else {
      currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }
  }

  printBoard(board);
  if (gameStatus == 1) {
    printf("Player %c wins!\n",
           (currentPlayer == 'X') ? currentPlayer : computerPlayer);
  } else {
    printf("It's a tie!\n");
  }

  printf("Thanks for playing!\n");

  return 0;
}
