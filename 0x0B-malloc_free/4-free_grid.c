#include "main.h"
#include <stdlib.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: free memory allocated by the alloc_grid function we defined
 */

void free_grid(int **grid, int height) {
  int i;
  if (grid == NULL)
    return;

  for (i = 0; i < height; i++)
    free(grid[i]);

  free(grid);
}
