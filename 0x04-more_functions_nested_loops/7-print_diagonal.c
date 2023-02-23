#include "main.h"

/**
* function to print diagonal
**/
void print_diagonal(int n)
{
    if(n > 0)
    {
        int i;
        for(i = 0; i < n; i++)
        {
            if(i > 0)
            {
                int s;

                for(s = 0; s < i; s++)
                {
                    _putchar(' ');
                }
            }

            _putchar('\');
        }
    }

    _putchar('\n');

}