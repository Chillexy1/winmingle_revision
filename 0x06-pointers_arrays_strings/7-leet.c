#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: encodes a string into 1337(leet)
 */

char *leet(char *str) {
  int i = 0;

  while (str[i]) {
    if (str[i] == 'e' || str[i] == 'E')
      str[i] = '3';
    else if (str[i] == 't' || str[i] == 'T')
      str[i] = '7';
    else if (str[i] == 'a' || str[i] == 'A')
      str[i] = '4';
    else if (str[i] == 'o' || str[i] == 'O')
      str[i] = '0';

    i++;
  }

  return str;
}
