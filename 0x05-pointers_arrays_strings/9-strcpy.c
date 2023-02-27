#include "main.h"

/*
* function to copy a string using pointers
*/

char *_strcpy(char *dest, char *src)
{
    int a;

    for(a = 0; src[a] != 0; a++ )
    {
        dest[a] = src[a];
    }
    return (dest);
}