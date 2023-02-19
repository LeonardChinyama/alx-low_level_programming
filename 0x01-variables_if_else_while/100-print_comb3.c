#include <stdio.h>

int main(void)
{
	int i;
	int fn;
	int ln;

	for (i = 0; i <= 99; i++)
	{
		fn = (i / 10 + '0');
		ln = (i % 10 + '0');

		if (fn < ln)
		{
			putchar(fn);
			putchar(ln);

			if (i != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
    putchar('\n');
    return 0;
}
