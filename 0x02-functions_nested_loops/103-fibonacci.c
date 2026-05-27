#include <stdio.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this's a program that prints out the sum of even valued-terms of
 * a fibonacci sequence
 */

int main(void) {
  unsigned long current;
  unsigned long first = 0;
  unsigned long second = 1;

  unsigned long sum = 0;

  int ISLESS = 1;

  while (ISLESS) {
    current = first + second;

    // update fibonacci sequence
    first = second;
    second = current;

    // check for the 4,000,000 condition
    if (current <= 4000000) {
      if (current % 2 == 0) {
        sum += current;
      }
    } else
      ISLESS = 0;
  }
  printf("%lu", sum);
  printf("\n");
  return (0);
}
