#include <stdio.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: prints out the number of arguments passed into the terminla
 */

int main(int argc, char *argv[]) {
  (void)argv;

  printf("%d\n", argc - 1);
  return 0;
}
