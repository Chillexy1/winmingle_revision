#include "main.h"
#include <stdlib.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: we're to write a program that splits words into a string
 * (tokenizef by spaces)
 */

char **strtow(char *str) {
  char **s;
  int i = 0, k = 0;
  int j, w, m;
  int len;
  int space;
  int found = 0;

  if (str == NULL || *str == '\0')
    return NULL;

  for (j = 0; str[j]; j++) /* counts every availble char in the string */
  {
    if (str[j] != ' ' && (j == 0 || str[j - 1] == ' '))
      found++;
  }

  if (found == 0) /* if nothing was found, return nothing */
    return NULL;

  s = malloc((found + 1) *
             sizeof(*s)); /* allocates memory for array of pointers */
  if (s == NULL)          /* checks if allocation failed */
    return NULL;

  while (str[i]) {
    while (str[i] == ' ') /* counts only spaces */
      i++;

    if (str[i] == '\0')
      break;

    space = i;

    while (str[i] && str[i] != ' ') /* loop through worsd */
      i++;

    len = i - space;

    s[k] =
        malloc((len + 1) * sizeof(*s[k])); /* allocate words to each memory */
    if (s[k] == NULL) {
      for (w = 0; w < k; w++)
        free(s[k]);

      free(s);
      return NULL;
    }
    /* move each words */
    for (m = 0; m < len; m++) {
      s[k][m] = str[space + m];
    }
    s[k][len] = '\0';

    k++; /* makaes s[k] to loop forward */
  }
  s[k] = NULL; /* final elememt */

  return s;
}
