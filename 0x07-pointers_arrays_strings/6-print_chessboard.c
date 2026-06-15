#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: given a chessboard sample, we're to print out an 8 by 8
 * chessboard from char board[8][8]
 */

void print_chessboard(char (*a)[8]) {
  int i = 0;
  int j;

  while (i < 8) {
    for (j = 0; j < 8; j++) {
      _putchar(a[i][j]);
    }
    _putchar('\n');

    i++;
  }
}
