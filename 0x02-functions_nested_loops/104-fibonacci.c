#include <stdio.h>

/**
  * a function that prints the first 98 fibonacci numbers
  */
int main(void)
{
	int i;
	float p = 0, s = 1;

	for (i = 0; i < 98; i++)
	{
		if (i == 0)
			printf("%f", s);

		else
		{
            float t = s;
			s += p;
			p = t;
			printf(", %f", s);
		}
	}

	printf("\n");
	return (0);
}
