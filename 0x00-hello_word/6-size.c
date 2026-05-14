#include <stdio.h>

/*
*Author: Chillexy Steven                                                           
*Program: WinMingle Community C Training
*Description: this program prints the various size of data types
*/

int main(void)
{
    char c;
    int i;
    long int j;
    long long int k;
    float b;
    
    printf("Size of char: %zu byte(s)\n", sizeof(c));
    printf("Size of int: %zu byte(s)\n", sizeof(i));
    printf("Size of long int: %zu byte(s)\n", sizeof(j));
    printf("Size of long long int: %zu byte(s)\n", sizeof(k));
    printf("Size of float: %zu byte(s)\n", sizeof(b));
    

    return 0;
}
