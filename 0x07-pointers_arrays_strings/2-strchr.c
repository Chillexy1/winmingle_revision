#include "main.h"
#include <string.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: locates a character in a string anf returs a pointer to it's
 * first occurrence of that string or a null if none
 */

char *_strchr(char *s, char c) {
  int i = 0;

  while (s[i]) {
    if (c == s[i]) {
      return &s[i];
    }

    i++;
  }

  return NULL;
}
