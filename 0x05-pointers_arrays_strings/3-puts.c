#include "main.h"

/*
* function to print a string to standard output
*/
void _puts(char *str)
{
    int i;
    for(i = 0; str[i] !=0; i++)
    {
        putchar(str[i]);
    }
    putchar('\n');
}
