#include "variadic_functions.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: using a variadic function, print the sum of all args
 */
int sum_them_all(const unsigned int n, ...) {
  unsigned int i, j, sum = 0;

  va_list args;
  va_start(args, n);

  if (n == 0)
    return (0);

  for (i = 0; i < n; i++) {
    j = va_arg(args, int);
    sum += j;
  }

  va_end(args);

  return (sum);
}
