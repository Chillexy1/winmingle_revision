#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: returns 1 if the given number is a prime number or return 0 if
 * otherwise
 */

int is_prime_number(int n) {
  if (n <= 1)
    return 0;

  return prime_checker(n, 2);
}
