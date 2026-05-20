#include <stdio.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: we're to print out a reversed alphbet letters in lowercaase
 */

int main(void) {
  char ch = 'z';

  while (ch >= 'a') {
    printf("%c", ch);
    ch--;
  }
  printf("\n");

  return 0;
}
