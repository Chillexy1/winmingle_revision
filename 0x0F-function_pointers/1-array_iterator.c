#include "function_pointers.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: we executes a function pointer action on each element of an array
 */
void array_iterator(int *array, size_t size, void (*action)(int)) {
  size_t i;
  if (array && size) {
    /* loop through each array */
    for (i = 0; i < size; i++) {
      action(array[i]); // called acttion pointer on each element of an array
                        // using a loop
    }
  }
}
