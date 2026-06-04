#include "main.h"
#include <unistd.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this function prints a string in it's reversed format
 */

void print_rev(char *s) {
  int i;

  i = _strlen(s) - 1; // gets the lenght of the string to reverae

  while (s[i] > 0) {
    write(1, &s[i], 1); // prints out the string in reverse format

    i--;
  }
  write(1, "\n", 1);
}
