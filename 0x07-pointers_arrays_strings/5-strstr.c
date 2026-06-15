#include "main.h"
#include <string.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: we're to locate the substring needle in haystack
 */

char *_strstr(char *haystack, char *needle) {
  int i = 0;
  int j;
  while (haystack[i]) {
    j = 0;
    while (needle[j] && haystack[i + j] == needle[j]) {
      j++;
    }
    if (needle[j] == '\0')
      return &haystack[i];

    i++;
  }

  return NULL;
}
