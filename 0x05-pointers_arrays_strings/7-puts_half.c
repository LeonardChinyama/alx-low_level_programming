#include "main.h"

/*
* function to print the second half of a string
*/
void puts_half(char *str)
{
    int i, t, k;

    for(i = 0; str[i] != 0; i++)
    {
    }

<<<<<<< HEAD
    if(i % 2 == 0)
    {
        k = i / 2
    } else
    {
        k = (i - 1) / 2;
    }

    for(t = k; t < i; t++)
=======
    for(t =  (i / 2); t < i; t++)
>>>>>>> f0221763bc678b187f4d1e399dff1ab7caeb9c7f
    {
        _putchar(str[t]);
    }

<<<<<<< HEAD
    
=======

>>>>>>> f0221763bc678b187f4d1e399dff1ab7caeb9c7f
    _putchar('\n');

}
