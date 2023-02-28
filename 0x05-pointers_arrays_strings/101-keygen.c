#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* function that creates a password
*/

int main(void)
{
    char psswrd[84];

    /**
    * i = index, s = sum, h1 = first half, and h2 = second half
    */
	int i = 0, s = 0, h1, h2;

	srand(time(0));

	while (s < 2772)

	{
		psswrd[i] = 33 + rand() % 94;
		s += psswrd[i++];
	}

	psswrd[i] = '\0';

	if (s != 2772)
	{
		h1 = (s - 2772) / 2;
		h2 = (s - 2772) / 2;

		if ((s - 2772) % 2 != 0)
        h1++;

		for (i = 0; psswrd[i]; i++)
        {
            if (psswrd[i] >= (33 + h1))
            {
                psswrd[i] -= h1;
                break;
            }
        }
        for (i = 0; psswrd[i]; i++)
        {
            if (psswrd[i] >= (33 + h2))
            {
                psswrd[i] -= h2;
                break;
            }
        }
	}

	printf("%s", psswrd);
	return (0);
}
