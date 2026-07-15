#include "variadic_functions.h"
#include <stdio.h>
/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: prints out string in a variadic function with a given separator
 */
/*
 * printf is allowed
 * */
void print_strings(const char *separator, const unsigned int n, ...) {
  char *str;
  unsigned int i;

  va_list args;
  va_start(args, n);

  for (i = 0; i < n; i++) {
    str = va_arg(args, char *);

    if (str == NULL) // if any string is null print "nil"
      printf("(nil)");

    else
      printf("%s", str);

    if (separator && i < n - 1)
      printf("%s", separator);
  }

  printf("\n");

  va_end(args);
}
