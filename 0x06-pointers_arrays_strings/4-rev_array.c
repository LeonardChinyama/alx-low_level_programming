#include "main.h"

/**
* Function to reverse array of string
*/
void reverse_array(int *a, int n)
{
    int i, c, t = 0;
    for(i = n - 1; t <= i; t++)
    {
        c = a[t];
        a[t] = a[i];
        a[i] = c;
        i--;
    }
}
