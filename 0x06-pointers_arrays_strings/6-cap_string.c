include "main.h"

/**
* Function to capitalize all first letters of words in a string
*/

char *cap_string(char *f)
{
	int a = 0, i;
	int sp = 13;
	char p[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (f[a])
	{
		i = 0;

		while (i < sp)
		{
			if ((a == 0 || f[a - 1] == p[i]) && (f[a] >= 97 && f[a] <= 122))
				f[a] -= 32;

			i++;
		}

		a++;
	}

	return (f);
}
