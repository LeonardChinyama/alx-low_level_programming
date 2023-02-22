#include <stdio.h>

/**
  * a function that prints even terms less than 4000000
  */
int main(void)
{
	int i;
	long p = 1, s = 0, s1 = 0;

	while ((s + p) < 4000000)
	{
        long t = s;
        s += p;
        p = t;

        if(s > 0 && s % 2 == 0)
        {
            s1 += s;
        }
	}

    printf("%ld\n", s1);
	return (0);
}