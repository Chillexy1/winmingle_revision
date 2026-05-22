#include <stdio.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this program prints out all possible combination of two
 * two_digits number
 */

int main(void) {
  int i = 0;
  int j;

  while (i < 100) {
    j = i + 1;
    while (j < 100) {
      if (i || j != 1)
        printf(", ");
      printf("%02d %02d", i, j);

      j++;
    }

    i++;
  }

  printf("\n");

  return 0;
}
