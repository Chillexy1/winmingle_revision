#include <stdio.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this program prints out all arguments passed to it
 */

int main(int argc, char *argv[]) {
  int i;

  for (i = 0; i < argc; i++) {
    printf("%s\n", argv[i]);
  }

  return 0;
}
