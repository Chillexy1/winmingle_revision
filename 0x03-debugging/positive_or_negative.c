#include "main.h"
#include <stdio.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this function checks if a given integer number is positive,zero
 * or negative
 */

void positive_or_negative(int i) {
  if (i < 0) {
    printf("%d is negative", i);
    printf("\n");
  }

  else if (i == 0) {
    printf("%d is zero", i);
    printf("\n");
  }

  else {
    printf("%d is positive", i);
    printf("\n");
  }
}
