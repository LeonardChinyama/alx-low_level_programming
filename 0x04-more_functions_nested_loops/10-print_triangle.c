#include "main.h"

/**
* function to print triangle
**/
void print_triangle(int size)
{
    if(size > 0)
    {
        int i, j;

        for(i = 1; i <= size)
        {
            int f = size - i, t;

            for(t = 0; t < f; t++)
            {
                _putchar(' ');
            }

            for(j = 0; j < i; j++)
            {
                _putchar('#');
            }
            _putchar('\n');
        }

    } else
    {
        _putchar('\n');
    }
}