#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: helpe/ function to our palindrome main function that  iltereates
 * through strings
 */

int palindrome_helper(char *s, int right, int left) {
  if (s[right] != s[left])
    return 0;

  if (right >= left)
    return 1;

  return palindrome_helper(s, right + 1, left - 1);
}
