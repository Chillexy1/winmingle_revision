#include <stdio.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: printing all single digits of  numbet seperated by commasand
 * space
 */

int main(void) {
  int i = 0;
  while (i < 10) {
    if (i)
      printf(", ");
    printf("%d", i);
    i++;
  }
  printf("\n");

  return 0;
}
