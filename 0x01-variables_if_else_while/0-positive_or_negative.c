#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
*Author: Chillexy Steven
*Program: WinMingle Community C Training
*Description: Positive Anything is Better Than Negative Nothing
Mandatory.
            -----------
Write a program that assigns a random number to the variable n each time it runs
and prints whether the number is positive, negative, or zero.

*/

int main(void) {
  int n;

  srand(time(NULL));

  n = (rand() - (RAND_MAX / 2));

  if (n > 0)
    printf("%d is positive\n", n);
  else if (n < 0)
    printf("%d is negative\n", n);
  else
    printf("%d is zero\n", n);

  return 0;
}
