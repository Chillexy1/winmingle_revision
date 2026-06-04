#include <stdio.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this is a function that returns the lenght of a string
 */

int _strlen(char *s) {
  int i = 0;
  while (s[i]) {
    i++;
  }
  return i;
}
