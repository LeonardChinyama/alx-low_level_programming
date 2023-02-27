#include "main.h"

/*
* function to print the second half of a string
*/
void puts_half(char *str)
{
    int i, t, k;

    for(i = 0; str[i] != '\0'; i++)
    {
    }

    if(i % 2 == 0)
    {
        k = i / 2;
    } else
    {
        k = (i - 1) / 2;
    }

    for(t = k; str[t] != '\0'; t++)
    {
        _putchar(str[t]);
    }


    _putchar('\n');

}
