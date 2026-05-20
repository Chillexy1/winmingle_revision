#include <stdio.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: with this program we prints out the numeric numbers of base 10
 * starting from 0
 */

int main(void) {
  int i = '0';

  while (i <= '9') {
    putchar(i);
    i++;
  }
  putchar('\n');

  return 0;
}
