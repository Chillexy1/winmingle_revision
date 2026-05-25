#include "main.h"
#include <stdio.h>
/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this is a 9 times table function
 */

void times_table(void) {
  int i = 0;
  int row;
  int result;

  while (i <= 9) {
    row = 0;
    while (row <= 9) {

      result = i * row;
      if (row)
        _putchar(' ');

      if (result < 10) {
        _putchar('0' + result);
        _putchar(',');
        _putchar(' ');

      } else {
        _putchar('0' + (result / 10));
        _putchar('0' + (result % 10));
        _putchar(',');
      }
      row++;
    }
    _putchar('\n');

    i++;
  }
}
