#include "main.h"
#include <stdlib.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: build a single string consisting of all arguments separated by \n
 */

char *argstostr(int ac, char **av) {
  int i, j, k;
  char *str;
  int total = 0;

  if (ac == 0)
    return NULL;

  if (av == NULL)
    return NULL;
  /*we first of all get the total of all strings in a single arguments before we
   * allocate the total size*/

  for (i = 0; i < ac; i++) {
    j = 0;
    while (av[i][j]) {

      total++; // countc number of characters of strings
      j++;
    }
    total++; // for \n
  }
  total++; // for \0

  str = malloc(total * sizeof(*str));
  if (str == NULL)
    return NULL;

  k = 0;
  for (i = 0; i < ac; i++) {
    j = 0;
    while (av[i][j]) {
      str[k++] = av[i][j++];
    }
    str[k++] = '\n';
  }
  str[k] = '\0';

  return str;
}
