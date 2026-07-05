#include "main.h"
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: a program that multiplies two positive number
 */

int main(int argc, char *argv[]) {
  char error[] = "Error";
  // char msg[] = "each input must be greater than 10 digit number";
  int i, k, j, w, m;
  int pos1;
  int pos2;
  int mul;
  int carry;
  int sum;
  int len1 = 0;
  int len2 = 0;
  int *result;

  if (argc != 3) {
    for (i = 0; error[i]; i++) {
      _putchar(error[i]);
    }
    _putchar('\n');
    exit(98);
  }
  /* get the length of both argv[1] and argv[2] */
  while (argv[1][len1])
    len1++;
  while (argv[2][len2])
    len2++;

  for (j = 1; j < argc; j++) {
    for (k = 0; argv[j][k]; k++) /* loops through a particular argv char */
    {
      if (!(isdigit(argv[j][k]))) /* checks if any character is not a digit*/
      {
        for (w = 0; error[w]; w++) {
          _putchar(error[w]);
        }
        _putchar('\n');
        exit(98); // exit with status 98
      }
    }
  }

  /* allocate result array */
  result = malloc((len1 + len2) * sizeof(*result));
  if (result == NULL)
    return (1);

  /* inialiaze every array */
  for (m = 0; m < (len1 + len2); m++) {
    result[m] = 0;
  }

  /* multiplication */

  for (j = (len1 - 1); j >= 0; j--) {
    carry = 0;
    for (k = (len2 - 1); k >= 0; k--) {
      mul = (argv[1][j] - '0') * (argv[2][k] - '0');
      pos1 = j + k;
      pos2 = j + k + 1;

      sum = mul + result[pos2] + carry;

      result[pos2] = sum % 10;
      carry = sum / 10;
    }

    result[pos1] += carry;
  }
  i = 0;
  while (i < len1 + len2 - 1 && result[i] == 0)
    i++;

  for (; i < len1 + len2; i++)
    _putchar(result[i] + '0');

  _putchar('\n');

  free(result);

  return (0);
}
