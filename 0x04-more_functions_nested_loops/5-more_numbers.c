#include "main.h"
#include <stdio.h>

/**
* function that prints 10 times
**/
void more_numbers(void)
{
    int i, j;

    for(i = 0; i < 10; i++)
    {
        for(j = 0; j <= 14; j++)
        {
            int f = j / 10;
            int l = j % 10;

            if(f > 0)
            {
                _putchar(f + '0');
            }

            _putchar(l + '0');
        }
        _putchar('\n');
    }
}