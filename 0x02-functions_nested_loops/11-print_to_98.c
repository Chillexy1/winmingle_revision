#include "main.h"
#include <stdio.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: we're to write a function that prints all the natural numbers of
 * 98
 */
void print_to_98(int n) {
  if (n == 98) {
    printf("%d", n);
    printf("\n\n");
  }

  else if (n < 98) {
    while (n <= 98) {
      printf("%d", n);
      if (n != 98)
        printf(", ");
      n++;
    }
    printf("\n\n");
  }

  else {
    while (n >= 98) {
      printf("%d", n);
      if (n != 98)
        printf(", ");
      n--;
    }
    printf("\n\n");
  }
}
