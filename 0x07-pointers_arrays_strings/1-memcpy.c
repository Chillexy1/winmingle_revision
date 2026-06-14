#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this function copies a memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n) {
  unsigned int i;
  i = 0;

  while (i < n) {
    dest[i] = src[i];

    i++;
  }

  dest[i] = '\0';

  return 0;
}
