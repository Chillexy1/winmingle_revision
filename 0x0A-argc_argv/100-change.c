#include <ctype.h>
#include <stdio.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this program prints out the minimum number of coins needed to
 * make change for an amount of money
 */

int main(int argc, char *argv[]) {
  int coins[] = {25, 10, 5, 2, 1};
  int num;
  int i, j;
  int count = 0;
  int length;

  length = sizeof(coins) / sizeof(coins[0]);

  if (argc != 2) {
    printf("Error\n");
    return (1);
  }

  for (j = 0; argv[1][j]; j++) {
    if (!(isdigit(argv[1][j]))) {
      printf("error");
      return (1);
    }
  }

  num = atoi(argv[1]);

  if (num < 0) {
    printf("0\n");
    return (0);
  }

  i = 0;

  while (i < length) {
    if (num >= coins[i]) {
      num -= coins[i];
      count++;
    } else
      i++;
  }

  printf("%d\n", count);

  return (0);
}
