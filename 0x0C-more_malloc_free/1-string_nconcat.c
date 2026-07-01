#include "main.h"
#include <stdlib.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: return sn allocated pointer that contains two concatenated
 * strings with n bytes of s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n) {
  char *str;
  unsigned int len1 = 0;
  unsigned int len2 = 0;
  unsigned int i, j;

  if (s1 == NULL)
    s1 = "";
  if (s2 == NULL)
    s2 = "";

  while (s1[len1])
    len1++; /* get the length of s1 string */
  while (s2[len2])
    len2++; /* get the length of s2 string */

  if (n >= len2) /* use the entire string if n is greater than s2 */
    n = len2;

  str = malloc((len1 + n + 1) * sizeof(*str));
  if (str == NULL)
    return NULL;

  for (i = 0; s1[i]; i++) {
    str[i] = s1[i];
  }

  for (j = 0; j < n; j++) {
    str[i++] = s2[j];
    // i++;
  }
  str[i] = '\0';

  return str;
}
