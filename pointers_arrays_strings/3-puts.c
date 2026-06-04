#include "main.h"
#include <unistd.h> //print to stdout
/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this function is a program that prints out a string to the stdout
 */

void _puts(char *str) {
  int i = 0;

  while (str[i]) {
    write(1, &str[i], 1);
    i++;
  }
  write(1, "\n", 1);
}
