#include <stdio.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this program prints out the lower and uppercase letters
 */

int main(void) {
  char c = 'a';
  char k = 'A';

  while (c <= 'z') {
    putchar(c);
    if (c == 'z') {
      while (k <= 'Z') {
        putchar(k);
        k++;
      }
    }
    c++;
  }
  putchar('\n');

  return 0;
}
