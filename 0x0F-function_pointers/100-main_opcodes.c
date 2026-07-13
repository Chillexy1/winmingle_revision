#include <stdio.h>
#include <stdlib.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: prints the opcodes of my main file
 */

int main(int argc, char *argv[]) {
  int bytes;
  int i;
  unsigned char *ptr;

  /* checks for wro.g number of args*/
  if (argc != 2) {
    printf("Error");
    exit(1);
  }

  /* convert byte to number */
  bytes = atoi(argv[1]);

  /* checks if bytes is negative */
  if (bytes < 0) {
    printf("Error");
    exit(2);
  }
  /* points to the address of the main function */
  ptr = (unsigned char *)main;

  /* loop through each bytes now */
  for (i = 0; i < bytes; i++) {
    printf("%02x ", ptr[i]);
    //    if (i != bytes)
    //    printf(" ");
  }
  printf("\n");

  return (0);
}
