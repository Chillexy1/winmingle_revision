#include <stdio.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this program conputes the sum of all multiples of 3 or 5  elow
 * 1024
 */

int main(void) {
  int i = 0;
  int sum = 0;
  while (i < 1024) {
    if ((i % 3 == 0) || (i % 5 == 0)) {
      sum += i;
    }

    i++;
  }
  printf("%d", sum);
  printf("\n");
  return 0;
}
