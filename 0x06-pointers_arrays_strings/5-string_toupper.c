#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: changes all lowercase letters of a string to uppercase
 */

char *string_toupper(char *str) {
  int i = 0;

  while (str[i]) {
    if (str[i] >= 'a' && str[i] <= 'z') {
      str[i] -= 32;
    } else if (str[i] >= 'A' && str[i] <= 'Z') {
      str[i] += 32;
    }

    i++;
  }

  return str;
}
