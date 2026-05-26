#include "main.h"
#include <stdio.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this function prints the times table of a given ineger provided
 * its not 15 nd aove or less thn 0
 */

void print_times_table(int n) {
  int start = 0;
  int second_row;
  int result;

  while (start <= n) {
    if (n < 0 || n >= 15) {
      return;
    }

    else {
      second_row = 0;
      while (second_row <= n) {
        result = start * second_row;

        if (result < 10) // prints results of only one digit
        {
          _putchar('0' + result);
        }

        else if (result < 100) // prints results of two digits only
        {
          _putchar('0' + (result / 10));
          _putchar('0' + (result % 10));

        } else if (result < 1000) // prints results of three digits only
        {
          _putchar('0' + (result / 100));
          _putchar('0' + (result / 10 % 10));
          _putchar('0' + (result % 10));
        }

        if (second_row != n) // checks where to put comma and space for the
                             // newline action to take place
        {
          _putchar(',');
          _putchar(' ');
        }

        if (result <
            10) // alligning our results to be a straight line accordance
        {
          _putchar(' ');
        }

        second_row++;
      }
    }
    _putchar('\n');

    start++;
  }
}
