#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this is a function that concatenates two strings
 */

char *_strcat(char *dest, char *src) {
  int i = 0;
  int j = 0;

  while (dest[i]) {
    i++;
  }

  while (src[j]) {
    dest[i] = src[j];
    i++;

    j++;
  }

  dest[i] = '\0';

  return dest;
}
