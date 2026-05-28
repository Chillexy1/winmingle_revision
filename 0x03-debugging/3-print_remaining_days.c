
/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this function prints the remaining days of the year
 */

#include "main.h"
#include <stdio.h>

void print_remaining_days(int month, int day, int year) {
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) /* BUG #1 */
  {
    if (month > 2) /* BUG #2 */
      day++;       /* BUG #3 */

    printf("Day of the year: %d\n", day);
    printf("Remaining days: %d\n", 366 - day); /* BUG #4 */
  } else {
    if (month == 2 && day == 60)
      printf("Invalid date: %02d/%02d/%04d\n", month, day - 31,
             year); /* BUG #5 */
    else {
      printf("Day of the year: %d\n", day);
      printf("Remaining days: %d\n", 365 - day); /* BUG #6 */
    }
  }
}
