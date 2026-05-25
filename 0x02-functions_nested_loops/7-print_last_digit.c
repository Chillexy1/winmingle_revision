#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this function returns the last digit of a given integer
 */

int print_last_digit(int n) {
  int last_digit;

  last_digit = n % 10;
  if (last_digit < 0)
    last_digit = -last_digit;
  _putchar('0' + last_digit);

  return (last_digit);
}
