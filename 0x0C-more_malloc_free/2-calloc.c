#include "main.h"
#include <stdlib.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: alloacates a memory for an array using malloc
 */

void *_calloc(unsigned int nmemb, unsigned int size) {
  unsigned int i;
  char *memb;

  if (nmemb == 0 || size == 0)
    return NULL;

  memb = malloc(nmemb * size);
  if (memb == NULL)
    return NULL;

  for (i = 0; i < (nmemb * size); i++) {
    memb[i] = 0;
  }

  return (memb);
}
