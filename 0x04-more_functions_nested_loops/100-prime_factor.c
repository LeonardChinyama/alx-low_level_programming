#include <stdio.h>
#include <math.h>

/**
 * function that prints the largest prime factor of the number 612852475143
 */
int main(void)
{
	int i;
	long d = 612852475143;

	for (i = (int) sqrt(d); i > 2; i++)
	{
		if (d % i == 0)
		{
			printf("%d\n", i);
			break;
		}
	}

	return (0);
}