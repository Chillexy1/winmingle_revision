#include "variadic_functions.h"
#include <stdio.h>
/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this a variadic function program that prints out any arguments
 * passed into it
 */

/*
 * RULES REQUIRED:
 *
 * ou may use:
 * max 2 while loops
 * max 2 if
 * max 9 vars
 * printf allowed
 * Print newline at end

 * */
void print_all(const char *const format, ...) {
  int i, j;
  char *sep = "";
  print_types data_types[] = {{"i", print_int},
                              {"c", print_char},
                              {"f", print_float},
                              {"s", print_str},
                              {NULL, NULL}};

  va_list args;
  va_start(args, format);

  i = 0;
  while (format && format[i]) /*loop through the given format E.G "ceis" */
  {
    j = 0;
    while (data_types[j].types) /* loop through data_types to compare with the
                                   given format*/
    {
      if (format[i] == *data_types[j].types) {
        printf("%s", sep);
        data_types[j].f(&args);

        sep = ", ";
        break;
      }
      j++;
    }

    i++;
  }

  printf("\n");

  va_end(args);
}
