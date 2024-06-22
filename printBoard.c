#include "main.h"
#include <stdio.h>

void printBoard(const char board[3][3]) {
  printf("\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf(" %c ", board[i][j]);
      if (j < 2)
        printf("|");
    }
    printf("\n");
    if (i < 2)
      printf("---|---|---\n");
  }
  printf("\n");
}
