#include "main.h"

/**
* Function to change lowercase letters to upper
*/
char *string_toupper(char *f)
{
    int i;
    for(i = 0; f[i] != '\0'; i++)
    {
        if(f[i] >= 'a' && f[i] <= 'z')
        {
            f[i] = f[i] - 32;
        }
    }
    return (f);
}
