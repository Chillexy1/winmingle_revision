#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: using _putchar only, this function prints any intger digits
 */

void print_numbers(int n) {
  if (n < 0) {
    _putchar('-');
    n = -n;
  }
  if (n >= 10) {
    print_numbers(n / 10);
  }
  _putchar('0' + (n % 10));
}
