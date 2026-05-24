#include "main.h"
#include <ctype.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this is a function that checks if a particular input is a
 * lowercase letter or not, it returns 1 if true and 0 if not trur
 */
int _islower(int c) {
  if (islower(c))
    return 1;
  else
    return 0;
}
