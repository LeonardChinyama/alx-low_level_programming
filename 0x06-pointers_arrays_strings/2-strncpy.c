#include "main.h"

/**
* task 2
*/
char *_strncpy(char *dest, char *src, int n)
{
    int i, t;
    for(i = 0; i < n; i++)
    {
        dest[i] = src[i];
        t++;
        if(src[i] == '\0')
        {
            break;
        }
    }

    for(; i < n; i++)
    {
        dest[i] = '\0';
    }

    return (dest);

}
