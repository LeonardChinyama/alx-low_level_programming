#include "main.h"
#include <stdio.h>

/**
* Function to capitalize all first letters of words in a string
*/

char *cap_string(char *f)
{
	int a, i;
	int sp = 13;
	char p[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	for (a = 0; f[a] != '\0'; a++)
	{

		while (i = 0; i < sp; i++)
		{
			if ((a == 0 || f[a - 1] == p[i]) && (f[a] >= 97 && f[a] <= 122))
            {
                f[a] -= 32;
            }
		}
	}

	return (f);
}
