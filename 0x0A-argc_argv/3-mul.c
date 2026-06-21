#include <stdio.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this a program that multiplies two integers number
 */
int main(int argc, char *argv[]) {
  int mul;
  int num1;
  int num2;

  if (argc != 3) {
    printf("error\n");
    return 1;
  }
  num1 = atoi(argv[1]);
  num2 = atoi(argv[2]);

  mul = num1 * num2;

  printf("%d\n", mul);

  return 0;
}
