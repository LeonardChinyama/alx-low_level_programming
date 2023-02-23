#include "main.h"

/**
* function to print triangle
**/
void print_triangle(int size)
{
    int c, i, j;

	for (c = 0; c < size; c++)
	{
		for (i = (size - 1 - c); i > 0; i--)
		{
			_putchar(' ');
		}
		for (j = c + 1; j > 0; j--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}