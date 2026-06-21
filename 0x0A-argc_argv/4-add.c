#include <ctype.h>
#include <stdio.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this a program that add up two positive integers number
 */
int main(int argc, char *argv[]) {
  int sum = 0; // if no arguments is provided then sum is automatically 0 and 0
               // is printed to the terminal.
  int i;
  int j;

  for (i = 1; i < argc; i++) {
    for (j = 0; argv[i][j]; j++) // this loop checks if the entire arguments is
                                 // a digit if more than one single input
    {

      if (!(isdigit(argv[i][j]))) {
        printf("error\n");
        return (1);
      }
    }

    /* if (!(*argv[i] >= '0') || (!(*argv[i] <= '9'))) {
       printf("error\n");
       return (1);
     }*/

    sum += atoi(argv[i]);
  }

  printf("%d\n", sum);

  return (0);
}
