#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: capitalizes all first words of a string
 */

char *cap_string(char *str) {
  int i = 0;

  if (str[i] >= 'a' && str[i] <= 'z')
    str[i] -= 32;

  while (str[i]) {
    if ((str[i - 1] == ' ' || str[i - 1] == '\n') &&
        (str[i] >= 'a' && str[i] <= 'z')) {
      str[i] -= 32;
    }

    i++;
  }
  str[i] = '\n';

  return str;
}
