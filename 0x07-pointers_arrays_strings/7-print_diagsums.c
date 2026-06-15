#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: sum up the total of a two diagonals of a square matrix
 */

void print_diagsums(int *a, int size) {
  int i;
  int sum1 = 0;
  int sum2 = 0;

  for (i = 0; i < size; i++) {
    sum1 += a[i * size + i];
    sum2 += a[i * size + (size - 1 - i)];
  }
  print_numbers(sum1);

  _putchar(',');
  _putchar(' ');

  print_numbers(sum2);

  _putchar('\n');
}
