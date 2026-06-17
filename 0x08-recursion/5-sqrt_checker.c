#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: checkd if a number mutiplies it'self is the square root
 */

int _sqrt_checker(int n, int i) {
  if (i * i > n)
    return -1;
  if (i * i == n)
    return i;

  return _sqrt_checker(n, i + 1);
}
