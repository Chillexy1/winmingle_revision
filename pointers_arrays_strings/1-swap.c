#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this function is   program that swaps the value of two intgers
 */

void swap_int(int *a, int *b) {
  int c;

  c = *a;
  *a = *b;
  *b = c;
}
