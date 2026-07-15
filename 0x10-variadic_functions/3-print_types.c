#include "variadic_functions.h"
#include <stdio.h>
/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: define function that carry out the type of data to print out
 */
void print_int(va_list *args) {
  int num = va_arg(*args, int);
  printf("%d", num);
}
void print_char(va_list *args) {
  int chr = va_arg(*args, int);
  printf("%c", chr);
}
void print_float(va_list *args) {
  double num = va_arg(*args, double);
  printf("%lf", num);
}
void print_str(va_list *args) {
  char *str = va_arg(*args, char *);
  if (str == NULL)
    printf("(nill)");
  printf("%s", str);
}
