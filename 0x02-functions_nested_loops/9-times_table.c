#include "main.h"

/**
* function to print the 9 times table
*/

void times_table(void)
{
    int i, j;

    for(i = 0; i <= 9; i++)
    {
        for(j = 0; j <= 9; j++)
        {
            int m = i * j;

            if(m > 9)
            {
                int d = m / 10;
                int r = m % 10;

                _putchar(d + '0');
                _putchar(r + '0');
            } else
            {
	      if(j >= 1)
	      {
	        _putchar(' ');

	      }
	      _putchar(m + '0');
            }

            if(j == 9)
            {
                _putchar('\n');
            } else
            {
                _putchar(',');
                _putchar(' ');
            }
        }
    }
}
