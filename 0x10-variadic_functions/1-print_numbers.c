#include "variadic_functions.h"
#include <stdio.h>
/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: a variadic program that prints out numbers seperated by a given
 * seperator
 */
/*
 * printf is allowed
 * */
void print_numbers(const char *separator, const unsigned int n, ...) {
  unsigned int i;
  int j;

  va_list args;
  va_start(args, n);

  for (i = 0; i < n; i++) {
    j = va_arg(args, int);
    printf("%d", j);

    /*prints seperator */
    if (separator && i < n - 1)
      printf("%s", separator);
  }
  printf("\n");

  va_end(args);
}
