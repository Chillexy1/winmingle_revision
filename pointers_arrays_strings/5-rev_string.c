#include "main.h"
#include <unistd.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this function reverse a string output
 */

void rev_string(char *s) {
  int i;
  int len;
  i = 0;

  while (s[i]) {
    i++;
  }

  len = i - 1;
  while (s[len] > 0) {
    write(1, &s[len], 1);
    len--;
  }
  write(1, "\n", 1);
}
