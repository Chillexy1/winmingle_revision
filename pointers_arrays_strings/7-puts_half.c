#include "main.h"
#include <unistd.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: creates a functuin that prints half of a string
 */

void puts_half(char *str) {
  int half_len; // to get half of the string
  int len = 0;  // the full lenght identifier
  while (str[len]) {
    len++;
  }
  half_len =
      len / 2; // divide the full lenght by half(2) to get half of it's lenght

  while (str[half_len]) {
    write(1, &str[half_len], 1); // prints out the remaining string
    half_len++;
  }

  write(1, "\n", 1);
}
