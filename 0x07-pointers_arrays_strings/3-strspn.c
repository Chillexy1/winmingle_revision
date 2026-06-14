#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: returns the length of a prefix substring matching bytes from
 * accept
 */

unsigned int _strspn(char *s, char *accept) {
  int i = 0;
  int j;
  int found;
  unsigned count = 0;

  while (s[i]) {
    found = 0;
    j = 0;
    while (accept[j]) {
      if (s[i] == accept[j]) {
        found = 1;
        break;
      }

      j++;
    }

    if (!(found))
      break;

    count++;

    i++;
  }

  return count;
}
