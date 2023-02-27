#include "main.h"

/*
* function to reverse a string
*/
void rev_string(char *s)
{
    int i;
    int f = 0;


    for(i = 0; s[i] !=0; i++)
    {
    }

    char c[i];

    for(i = i - 1; i >= 0; i--)
    {
        c[f] = s[i];
        f++;
    }

    for(i = 0; c[i] != 0; i++)
    {
        s[i] = c[i];
    }
}