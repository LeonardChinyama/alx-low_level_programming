#include <stdio.h>

int main(void)
{
	int i = 0;
	int fn;
	int mn;
	int ln;

	for (i = 0; i <= 999; i++)
	{
		fn = (i / 100 + '0');
		mn = (i / 10 % 10 + '0');
		ln = (i % 10 + '0');

		if ((fn < mn) && (mn < ln))
		{
			putchar(fn);
			putchar(mn);
			putchar(ln);

			if (i != 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
    putchar('\n');
    return (0);
}
