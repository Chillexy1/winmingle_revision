#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this is a function that checks for alphabetical letters
 */

int _isalpha(int c) {
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    return 1;
  else
    return 0;
}
