#include "main.h"
#include <unistd.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this is a function that prints the n element of an array of
 * integers
 */

void print_array(int *a, int n) {
  int i = 0;

  while (i < n) {
    if (i != 0) {
      write(1, ", ", 1);
      write(1, " ", 1);
    }
    print_numbers(a[i]);

    i++;
  }
  write(1, "\n", 1);
}
