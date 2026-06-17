#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: returns the natural square root of a number
 */

int _sqrt_recursion(int n) {

  if (n < 0)
    return -1;

  return _sqrt_checker(n, 0);
}
