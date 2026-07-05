#include "main.h"
#include <stdlib.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this function reallocates a memory block using malloc and free
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size) {
  char *p, *pptr;
  unsigned int i, minimum_size;
  /* first handles the special casese */
  if (new_size == old_size)
    return ptr;

  if (ptr == NULL)
    return malloc(new_size);

  if (new_size == 0 && ptr != NULL) {
    free(ptr);
    return (NULL);
  }
  /* get minimun size */
  if (new_size <= old_size)
    minimum_size = new_size;
  else
    minimum_size = old_size;

  /* now allocates new memory */
  p = malloc(new_size);
  if (p == NULL)
    return (NULL);

  pptr = ptr; // cast ptr

  /* copy contents */

  for (i = 0; i < minimum_size; i++) {
    p[i] = pptr[i];
  }

  free(ptr);

  return (p);
}
