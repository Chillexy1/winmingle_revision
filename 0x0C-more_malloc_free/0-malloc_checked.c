#include "main.h"
#include <stdlib.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: allocates a memory using malloc
 */

void *malloc_checked(unsigned int b) {
  void *c;

  c = malloc(b);
  if (c == NULL)
    exit(98);
  return c;
}
