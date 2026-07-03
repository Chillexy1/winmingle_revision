#include "main.h"
#include <stdlib.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this function  creates an array of integers
 */

int *array_range(int min, int max) {
  int i, size;
  int *range;

  if (min > max)
    return NULL;

  size = max - min;

  range = malloc((size + 1) * sizeof(int));
  if (range == NULL)
    return NULL;

  for (i = 0; i <= size; i++) {
    range[i] = min++;
  }

  return (range);
}
