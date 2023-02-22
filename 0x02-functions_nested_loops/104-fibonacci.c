#include <stdio.h>

/**
  * a function that prints the first 98 fibonacci numbers
  */
int main(void)
{
	int i;
	float p = 1, s = 1;

	for (i = 0; i < 98; i++)
	{
		if (i == 0)
			printf("%.0f", s);

		else
		{
            		float t = s;
			s += p;
			p = t;
			printf(", %.0f", s);
		}
	}

	printf("\n");
	return (0);
}
