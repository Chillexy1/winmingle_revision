#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: compares two string and return 1 if the two can be consider
 * identical otherwise returns 0
 */

int wildcmp(char *s1, char *s2) {
  if (*s1 == '\0' && *s2 == '\0')
    return 1;

  if (*s2 == '*') {
    return wildcmp(s1, s2 + 1) || (*s1 && wildcmp(s1 + 1, s2));
  }

  if (*s1 == *s2)
    return wildcmp(s1 + 1, s2 + 1);

  return 0;
}
