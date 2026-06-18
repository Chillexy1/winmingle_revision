#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: checks if a string is palindrome and returns 1, returns 0 if not
 *A PALINDROME IS A STRING THAT READS THE SAME WHEN SPELT BACKWARDS AND FORWARDS
 */

int is_palindrome(char *s) {

  return palindrome_helper(s, 0, _strlen_recursion(s) - 1);
}
