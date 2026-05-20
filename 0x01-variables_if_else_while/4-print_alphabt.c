#include <stdio.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this program prints out the alphabets in a lowercase letter but
 * omits the letter q and e
 */

int main(void) {
  char ch = 'a';

  while (ch <= 'z') {
    if (ch == 'q' || ch == 'e') {
      ch++;
      continue;
    }

    putchar(ch);

    ch++;
  }

  putchar('\n');

  return 0;
}
