#include "main.h"
#include <stdlib.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: we're to write a program that duplicates a string to the hrap
 * memory
 */

char *_strdup(char *str) {
  char *new_str;
  int i;
  int len = 0;

  if (str == NULL)
    return NULL;

  while (str[len]) { // get len of str
    len++;
  }

  new_str = malloc(sizeof(char) * len + 1); //+1 allocates memory to '\0'

  if (new_str == NULL) // checks if new_str failed on allocation
    return NULL;

  for (i = 0; i < len; i++) {
    new_str[i] = str[i];
  }

  new_str[i] = '\0';

  return new_str;
}
