#include "function_pointers.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description:   this's a program that searches for an integer in an array and
 * returns the first element if the action pointer != 0, else it returns -1. if
 * the size is <= 0 it returns -1.
 */
int int_index(int *array, int size, int (*cmp)(int)) {
  int i, j;
  if (array && size > 0 && cmp) {
    for (i = 0; i < size; i++) {
      j = cmp(array[i]); // j stores element from index of 0 to the size inex
      /* so we check if the first element in j is not equal to 0 (!= 0) */
      if (j != 0)
        break;
    }

    if (i < size)
      return (i);
  }
  return (-1);
}
