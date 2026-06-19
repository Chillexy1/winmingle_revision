#!/bin/bash

#this is a simple shell script that creates a standard library

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c

ar rcs liball.a *.o


