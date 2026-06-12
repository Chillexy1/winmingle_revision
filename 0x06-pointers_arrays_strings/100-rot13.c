#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: encodes a string using rot13
 */

char *rot13(char *s) {
  int i = 0;

  while (s[i]) {
    if (s[i] >= 'a' && s[i] <= 'z') {
      s[i] = 'a' + ((s[i] - 'a' + 13) % 26);
    }

    else if (s[i] >= 'A' && s[i] <= 'Z') {
      (s[i] = 'A' + ((s[i] - 'A' + 13) % 26));
    }

    i++;
  }
  return s;
}
