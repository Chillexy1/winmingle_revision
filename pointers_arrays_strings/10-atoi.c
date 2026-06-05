#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this is a function that converts string to an integer
 */

int _atoi(char *s) {
  int i = 0;
  int sign = 1;
  int num = 0;

  while (s[i]) {
    if (s[i] == '-') // checks for negative sign
    {
      sign *= -1;
    }
    if (s[i] >= '0' && s[i] <= '9') // what to do once it sees any string
    {
      while (s[i] >= '0' && s[i] <= '9') // while going through the strings,
      {
        num = (num * 10) + (s[i] - '0');

        i++;
      }
      return (num * sign);
    }

    i++;
  }
  return 0;
}
