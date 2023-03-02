#include "main.h"

/**
* Function to print 1337
*/
char *leet(char *l)
{
    int i, f, j = 5;
    char c[] = {'a', 'e', 'o', 'l', 't'};
    char n[] = { '4', '3', '0', '1', '7'};

    for(i = 0; l[i] != '\0'; i++ )
    {
        for(f = 0; f < j ; f++){
            if(c[f] == l[i] || l[i] - 32 == c[f])
            {
                l[i] = n[f];
            }
        }

    }
    return (l);
}
