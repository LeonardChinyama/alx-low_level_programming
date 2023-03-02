#include "main.h"

/**
* Function to copy a string
*
*/

char *_strcat(char *dest, char *src)
{
    int i, t;
    for(t = 0; dest[t] != '\0'; t++)
    {

    }
    for(i = 0; src[i] != '\0'; i++)
    {
        dest[t] = src[i];
        t++;
    }
    dest[t] = '\0';

    return (dest);

}
