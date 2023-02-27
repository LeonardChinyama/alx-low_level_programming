#include "main.h"

/*
* function to print the second half of a string
*/
void puts_half(char *str)
{
    int i, t;
	char c;

	for (i = 0; str[i] != 0; i++)
	{
	}
	if (i % 2 == 0)
	{
		for ((t = i / 2); str[t] != 0; t++)
		{
			c = str[t];
			_putchar(c);
		}
	}
	else
        {
                for ((t = (i - 1) / 2); str[t] != 0; t++)
                {
                        c = str[t];
                        _putchar(c);
                }
        }
	_putchar('\n');

}
