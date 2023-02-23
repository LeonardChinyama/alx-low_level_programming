#include "main.h"

/**
* function to print diagonal
**/
void print_diagonal(int n)
{
    int c, i, j;

	c = 0;

	for (j = n; j > 0; j--)
	{
		for (i = c; i > 0; i--)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		c++;
	}
	if (c < 1)
    {
        _putchar('\n');
    }
}