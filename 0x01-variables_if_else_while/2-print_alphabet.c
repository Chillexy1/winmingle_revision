#include <stdio.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: we're to wrire a program that prints the alphabet letters in
 * lowercase
 */

int main(void) {
  char c = 'a';
  while (c <= 'z') {
    putchar(c);
    c++;
  }
  putchar('\n');

  return 0;
}
