#include <stdio.h>

/**
  * a function that prints the first 50 fibonacci numbers
  */
int main(void)
{
	int i;
	long p = 1, s = 0;

	for (i = 0; i <= 50; i++)
	{
		if (i == 0)
			printf("%ld", s);

		else
		{
            long t = s;
			s += p;
			p = t;
			printf(", %ld", s);
		}
	}

	printf("\n");
	return (0);
}