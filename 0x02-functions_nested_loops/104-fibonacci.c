#include <stdio.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this a program that prints the first 98 fibonacci numbers
 */

int main(void) {
  int i = 0;
  unsigned long first_num = 0;
  unsigned long next_num = 1;
  unsigned long fibonacci_num;

  while (i < 98) {
    if (i)
      printf(", ");
    fibonacci_num = first_num + next_num;

    first_num = next_num;
    next_num = fibonacci_num;

    printf("%lu", fibonacci_num);

    i++;
  }
  printf("\n");

  return (0);
}
