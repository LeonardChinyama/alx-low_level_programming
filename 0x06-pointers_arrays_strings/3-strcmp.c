#include "main.h"

/**
* Function that compares two strings.
*/
int _strcmp(char *s1, char *s2)
{
    int i, t = 0;
    for(i = 0; s1[i] != '\0'; i++)
    {
        if(s1[i] != s2[i])
        {
            t = s1[i] - s2[i];
            break;
        }

    }
    return (t);
}
