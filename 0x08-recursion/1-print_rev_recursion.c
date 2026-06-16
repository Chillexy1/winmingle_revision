#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: prints the reverse of a string using recursion
 */

void _print_rev_recursion(char *s) {

  if (*s == '\0') {
    return;
  }

  _print_rev_recursion(s + 1);
  _putchar(*s);
}
