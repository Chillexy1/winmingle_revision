#include "main.h"
#include <unistd.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this function prints out every other character of a
 */

void puts2(char *str) {
  int i = 0;

  while (str[i]) {
    write(1, &str[i], 1);
    i += 2;
  }
  write(1, "\n", 1);
}
