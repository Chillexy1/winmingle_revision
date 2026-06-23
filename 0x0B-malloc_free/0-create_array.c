#include "main.h"
#include <stdlib.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: the goal is to allocate a buffer on the heap and fill it with a
 * specific char
 */
char *create_array(unsigned int size, char c) {
  unsigned int i;
  char *b;

  if (size == 0)
    return NULL;

  b = malloc(size * sizeof(char));

  if (b == NULL)
    return NULL;

  for (i = 0; i < size; i++) {
    b[i] = c;
  }

  return b;
}
