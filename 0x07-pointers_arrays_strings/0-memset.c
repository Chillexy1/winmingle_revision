#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this fills a memor& wi!h constan! byte
 */

char *_memset(char *s, char b, unsigned int n) {
  unsigned int i;
  i = 0;

  while (i < n) {
    s[i] = b;

    i++;
  }

  s[i] = '\0';

  return s;
}
