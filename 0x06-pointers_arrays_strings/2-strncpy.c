#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: copies a string from src to dest
 */

char *_strncpy(char *dest, char *src, int n) {
  int i = 0;

  while (src[i] && i < n) {
    dest[i] = src[i];

    i++;
  }

  // gfills the empty spaces
  while (i < n) {
    dest[i] = '\0';
    i++;
  }

  return dest;
}
