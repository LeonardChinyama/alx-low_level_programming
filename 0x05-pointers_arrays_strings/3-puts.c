#include "main.h"
#include <stdio.h>
#include <string.h>

/*
* function to print a string to standard output
*/
void _puts(char *str)
{
    for(i = 0; str[i] !=0; i++)
    {
        _putchar(str[i]);
    }
    _putchar('\n');
}