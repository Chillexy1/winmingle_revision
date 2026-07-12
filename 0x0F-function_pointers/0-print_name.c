#include "function_pointers.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this is a function pointr that prints out a name
 */

void print_name(char *name, void (*f)(char *)) {
  if (name && f) {
    f(name);
  }
}
