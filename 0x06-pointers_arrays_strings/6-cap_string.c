include "main.h"

/**
* Function to capitalize all first letters of words in a string
*/
char *cap_string(char *f)
{
   int i;
   int sp = 0;

    for(i = 0; f[i] != '\0'; i++)
    {
        int a = i - 1;
        if( i != 0 && f[a] != '-' && ((f[a] < 'a' && f[a] > 'Z') || f[a] < 'A' || f[a] > 'z'))
        {
            sp = 1;

        } else if(sp == 1 && (f[a] >= 'a' && f[a] <= 'z'))
        {
            f[a] = f[a] - 32;
            sp = 0;
        }else{
            sp = 0;
        }
    }
    return (f);
}
