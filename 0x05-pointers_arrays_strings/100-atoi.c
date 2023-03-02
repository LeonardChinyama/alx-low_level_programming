#include "main.h"

/**
 * Function to convert a string into an integer
 */

int _atoi(char *s)

{

	int c = 0;
	unsigned int n = 0;

	int m = 1;

	int t = 0;

	while (s[c])
	{
	if (s[c] == 45)
	{
	m *= -1;
	}
	while (s[c] >= 48 && s[c] <= 57)
	{
	t = 1;
	n = (n * 10) + (s[c] - '0');
	c++;
	}
	if (t == 1)
	{
	break;
	}
	c++;
	}
	n *= m;
	return (n);
}