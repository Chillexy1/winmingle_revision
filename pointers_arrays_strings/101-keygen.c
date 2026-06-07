#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this is a program that generates a random password strings
 */

int main(void) {
  int words_set = 33;
  int i = 0;
  int len = 0;
  int lenght_of_password;
  int count = 0;
  char words[1024];

  // generates words before we randomly select from it......
  while (words_set <= 126) {
    words[i] = words_set;
    i++;
    words_set++;
  }

  words[i] = '\0';

  // the codes above is to generate the words/strings which we can then randomly
  // selct from using the code BELOW....

  srand(time(
      NULL)); // this makes sure that no words are generated more than once.

  printf("enter the lenght of your password: ");
  scanf("%d", &lenght_of_password);

  char password[lenght_of_password];

  while (words[len]) // lenght of the words from the start
    len++;

  while (count < lenght_of_password) { // randomly selects words
    password[count] = words[rand() % len];

    count++;
  }

  password[count] = '\0';

  printf("%s Congrats\n", password);

  return (0);
}
