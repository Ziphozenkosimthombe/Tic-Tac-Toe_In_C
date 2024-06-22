#ifndef MAIN_H
#define MAIN_H

void initializeBoard(char board[3][3]);
void printBoard(const char board[3][3]);
int checkWin(const char board[3][3]);
int checkTie(const char board[3][3]);
void playerMove(char board[3][3], char player);
void computerMove(char board[3][3], char computer);
#endif // MAIN_H
