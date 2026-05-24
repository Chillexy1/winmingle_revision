#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: we're running a loop x10 to print the alphabet letters in
 * lowercase
 */

void print_alphabet_x10(void) {
  char c;
  int i = 0;

  while (i < 10) {
    c = 'a';
    while (c <= 'z') {
      _putchar(c);
      c++;
    }
    _putchar('\n');

    i++;
  }
}
