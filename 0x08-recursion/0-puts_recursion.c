#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: prints out a line of string flowed by a newline using recursion
 * only
 */

void _puts_recursion(char *s) {
  if (*s == '\0') {
    _putchar('\n');
    return;
  }

  _putchar(*s);

  _puts_recursion(s + 1);
}
