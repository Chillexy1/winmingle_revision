#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this is a function that prints out the alphabet letters in
 * lowercase using the custom putchar
 */

void print_alphabet(void) {
  char c = 'a';
  while (c <= 'z') {
    _putchar(c);
    c++;
  }
  _putchar('\n');
}
