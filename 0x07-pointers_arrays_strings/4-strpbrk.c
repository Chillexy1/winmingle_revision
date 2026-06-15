#include "main.h"
#include <string.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: find first occurrence in s of any bytes any accept
 */

char *_strpbrk(char *s, char *accept) {
  int i = 0;
  int j;

  while (s[i]) {
    j = 0;
    while (accept[j]) {
      if (s[i] == accept[j]) {
        return &s[i];
      }

      j++;
    }

    i++;
  }

  return NULL;
}
