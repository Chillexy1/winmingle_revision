#include "main.h"
#include <stdio.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: main function to run our defined largest number function
 */

int main(void) {
  int result;
  int a = 32;
  int b = 45;
  int c = 56;

  result = largest_number(a, b, c);
  printf("%d", result);
  printf("\n");

  return (0);
}
