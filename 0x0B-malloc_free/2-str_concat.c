#include "main.h"
#include <malloc.h>
#include <stdlib.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this program allocates and return a new string containing s1
 * followed by s2
 */

char *str_concat(char *s1, char *s2) {
  char *str;
  int len1 = 0, len2 = 0;
  int i, j;

  if (s1 == NULL)
    s1 = "";
  if (s2 == NULL)
    s2 = "";

  while (s1[len1]) // get s1 string length
    len1++;

  while (s2[len2]) // get s2 string length
    len2++;

  str = malloc(sizeof(*str) *
               (len1 + len2 + 1)); //+1 allocated for null terminator

  if (str == NULL) // if allocation fails
    return NULL;

  for (i = 0; s1[i]; i++) {
    str[i] = s1[i];
  }
  for (j = 0; s2[j]; j++) {
    str[i + j] = s2[j];
  }

  str[i + j] = '\0';

  return str;
}
