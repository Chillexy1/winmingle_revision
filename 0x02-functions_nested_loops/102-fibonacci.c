#include <stdio.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this a program that prints the first 50 fibonacci numbers
 * starting with 1 nand 2
 */

int main(void) {
  unsigned long first_num = 0;
  unsigned long second_num = 1;
  unsigned long fibonacci_num;
  int count = 0;

  while (count < 50) {
    fibonacci_num = first_num + second_num;

    // update the series
    first_num = second_num;
    second_num = fibonacci_num;

    if (count)
      printf(", ");

    printf("%lu", fibonacci_num);
    count++;
  }
  printf("\n");

  return 0;
}
