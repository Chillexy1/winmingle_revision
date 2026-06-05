#include "main.h"
#include <unistd.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this function copies a string from src to dest
 */

char *_strcpy(char *dest, char *src) {
  int count;

  count = 0;
  while (src[count]) {
    dest[count] = src[count];
    write(1, &src[count], 1);
    count++;
  }
  write(1, "\n", 1);
  dest[count] = '\0';
  dest[count] = '\n';

  return dest;
}
