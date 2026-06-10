#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: prints out an integers number using _putchar
 */
void print_number(int n) {
  if (n < 0) // checks for negative numbers
  {
    _putchar('-');
    n = -n;
  }

  if (n >= 10) // checks if it's two or more digits numbers
  {
    print_number(n / 10);
  }
  _putchar('0' + (n % 10)); // converts to int
}
