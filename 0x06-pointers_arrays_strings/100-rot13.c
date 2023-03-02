#include "main.h"

/**
* Function to rotate letters based on rot13
*/
char *rot13(char *f)
{
	int i = 0;

	for (i = 0; f[i] != '\0'; i++)
	{
		for (; (f[i] >= 'a' && f[i] <= 'z') || (f[i] >= 'A' && f[i] <= 'Z'); )
		{
			if ((f[i] > 'm' && f[i] <= 'z') || (f[i] > 'M' && f[i] <= 'Z'))
			{
				f[i] -= 13;
				break;
			}

			f[i] += 13;
			break;
		}
	}

	return (f);
}
