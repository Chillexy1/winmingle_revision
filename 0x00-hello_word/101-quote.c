#include <unistd.h>

/*
*Author: Chillexy Steven  
*Program: WinMingle Community C Training
*Description: without using printf or puts, this program prints out strings to the standard error
*/

int main(void)
{
    int i = 0;
    char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}
