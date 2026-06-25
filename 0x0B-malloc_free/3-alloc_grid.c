#include "main.h"
#include <stdlib.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: allocates a height x width grid of integers to the heap and
 * initiallize all cells to 0.
 */

int **alloc_grid(int width, int height) {
  int **array;
  int i, j, k;

  if (width <= 0)
    return (0);

  if (height <= 0)
    return (0);

  array = malloc(width * sizeof(*array));

  if (array == NULL) // checks if alloacation failed
    return (NULL);

  for (i = 0; i < width; i++) {
    array[i] = malloc(height * sizeof(*array[i]));

    if (array[i] == NULL) {
      for (k = 0; k < i; k++) // free any partial allocation to avoid leaks
        free(array[k]);

      free(array);
      return NULL;
    }

    for (j = 0; j < height; j++) { // set the integers of grid to 0
      array[i][j] = 0;
    }
  }

  return (array);
}
