#include "main.h"
#include <stdlib.h>

/**
* function to check if input is digit
**/
int _isdigit(int c)
{
    int i;

    if(isdigit(c))
    {
        i = 1;
    } else
    {
        i = 0;
    }
    return (i);
}
