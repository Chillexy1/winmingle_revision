#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: determines the prime number is a success or not
 */

int prime_checker(int n, int i) {
  if (n % i == 0) // not prime
    return 0;

  if (i * i > n)
    return 1;

  return prime_checker(n, i + 1);
}
