#include "main.h"

/*
* function to print the second half of a string
*/
void puts_half(char *str)
{
    int i, t;

    for(i = 0; str[i] != 0; i++)
    {
    }

    for(t = i / 2; t < i; t++){
        _putchar(str[t]);
    }
    _putchar('\n');

}
