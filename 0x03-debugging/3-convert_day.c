#include "main.h"

/*
 *Authour: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this function fetchess the month of yhe year.
 */

int convert_days(int month, int day, int year) {
  int months_of_the_year[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  int total = 0;
  int i = 0;

  if ((year % 4 == 0 && year % 100 != 0) ||
      (year % 400 == 0)) // checks if year is leap year
  {
    months_of_the_year[1] = 29;
  }
  while (i < month - 1) // goes through the specified month
  {
    total += months_of_the_year[i]; // fetches the correct month

    i++;
  }
  return total + day;
}
