#include <stdio.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: printing all possible combinations of three digit numbers
 */

int main(void) {
  int i = 0;

  while (i < 1000) {
    if (i)
      printf(", ");

    printf("%03d", i);

    i++;
  }
  printf("\n");

  return 0;
}
