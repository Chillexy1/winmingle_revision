#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: reverses the contents of an array integers
 */

void reverse_array(int *a, int n) {
  int size;

  size = n - 1;
  while (size >= 0) {
    if (size != n - 1) {
      _putchar(',');
      _putchar(' ');
    }

    print_numbers(a[size]);

    size--;
  }

  _putchar('\n');
}
