#include <stdio.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this program is to print all numbers of base 16 in lowercase
 */

int main(void) {
  int i;

  for (i = 0; i < 16; i++) {
    if (i < 10) {
      putchar('0' + i);
    }

    else
      putchar('a' + (i - 10));
  }
  printf("\n");

  return 0;
}
