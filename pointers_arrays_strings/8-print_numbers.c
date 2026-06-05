#include "main.h"
#include <unistd.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: function to print out any digits of number using stdout
 */

void print_numbers(int n) {
  char last_digit;
  if (n < 0) {
    write(1, "-", 1);
    n = -n;
  }
  if (n >= 10)
    print_numbers(n / 10);
  last_digit = '0' + (n % 10);
  write(1, &last_digit, 1);
}
