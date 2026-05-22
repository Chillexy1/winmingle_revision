#include <stdio.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: printing all possible combinations of two digit numbers
 */

int main(void) {
  int i = 0;

  while (i < 100) {
    if (i) {
      putchar(',');
      putchar(' ');
    }

    putchar((i / 10) + '0');
    putchar((i % 10) + '0');

    i++;
  }
  putchar('\n');

  return 0;
}
