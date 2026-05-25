#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this is s program that prints every minutes of the day of jack
 * bauer
 */

void jack_bauer(void) {
  int hours = 0;
  int minutes;

  while (hours < 24) {
    minutes = 0;
    while (minutes < 60) {
      _putchar('0' + (hours / 10));
      _putchar('0' + (hours % 10));

      _putchar(':');

      _putchar('0' + (minutes / 10));
      _putchar('0' + (minutes % 10));

      _putchar('\n');
      minutes++;
    }
    hours++;
  }
}
