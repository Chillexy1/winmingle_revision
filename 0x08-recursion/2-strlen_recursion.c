#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: returns the lenght of a string using recursion
 */

int _strlen_recursion(char *s) {
  if (*s == '\0')
    return 0;

  return 1 + _strlen_recursion(s + 1);
}
