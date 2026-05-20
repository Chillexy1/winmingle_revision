#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this program generates a random number and prints it's last digit
 * only determing if it's 0, greater than 5 or less than 6
 */

int main(void) {
  int n, last_digit;

  srand(time(NULL));

  n = rand(); // random number

  last_digit = n % 10; // to get the last digit of a number, that number has to
                       // be modulosed(%) by 10

  if (last_digit > 5)
    printf("last digit of %d is %d and is greater than 5\n", n, last_digit);

  else if (last_digit == 0)
    printf("last digit of %d is %d and is 0\n", n, last_digit);
  else if (last_digit < 6)
    printf("last digit of %d is %d and is less than 6 and not 0\n", n,
           last_digit);

  return 0;
}
