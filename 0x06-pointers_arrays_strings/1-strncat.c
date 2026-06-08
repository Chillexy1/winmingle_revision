#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: concatenates  two strings using at most n bytes of src
 */

char *_strncat(char *dest, char *src, int n) {
  int i = 0;
  int j = 0;

  // gets the end of dest
  while (dest[i]) {
    i++;
  }

  while (j < n && src[j]) {
    dest[i] = src[j];

    i++;
    j++;
  }

  dest[i] = '\0';

  return dest;
}
