#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this a function that returns the right largest number of any 3
 * numbers
 */
int largest_number(int a, int b, int c) {
  int largest;

  if (a > b && a > c)
    largest = a;
  else if (b > a && b > c)
    largest = b;
  else
    largest = c;

  return (largest);
}
