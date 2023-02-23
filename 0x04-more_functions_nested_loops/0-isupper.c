#include "main.h"
#include <stdlib.h>

/**
* Functiont to check if number is upper case
**/
int _isupper(int c)
{
    int i;

    if(isupper(c)){
        i = 1;
    } else {
        i = 0;
    }
    return (i);
}
