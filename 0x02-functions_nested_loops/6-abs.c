#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this function computes the absolute value of an integer
 */

int _abs(int n) {
  if (n < 0) {
    n = -n;
    return n;
  }
  return n;
}
