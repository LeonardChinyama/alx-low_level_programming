#include <stdio.h>

int main(void)
{
	int i = 0;
	int fn;
	int mn;
	int ln;
    	int ll;

	for (i = 0; i <= 9999; i++)
	{
		fn = (i / 1000 + '0');
		mn = (i / 100 % 10 + '0');
		ln = (i / 10 % 10);
        ll = (i % 10);

		if ((ln + ll) > 0)
		{
			putchar(fn);
			putchar(mn);
			putchar(' ');
			putchar(ln + '0');
			putchar(ll + '0');

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
