#include <stdio.h>

/**
  * function to print the sum of all multiples of 3 or 5 up to 1024
  *
  */
int main(void)
{
	int i, s = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			s += i;
		}
	}

	printf("%d\n", s);
	return (0);
}