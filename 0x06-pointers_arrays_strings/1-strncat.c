#include "main.h"

/**
* function to copy a give number of characters to another string
*/

char *_strncat(char *dest, char *src, int n)
{
    int i, t;
    for(t = 0; dest[t] != '\0'; t++)
    {

    }
    for(i = 0; src[i] != '\0' && i < n; i++)
    {
        dest[t] = src[i];
        t++;
    }

    return (dest);

}
