#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: using our cutom putchar, we're to print out the word "_putchar"
 * to the screen
 */

int main(void) {
  char word[] = "_putchar";
  int i = 0;
  while (word[i]) {
    _putchar(word[i]);
    i++;
  }
  _putchar('\n');

  return 0;
}
