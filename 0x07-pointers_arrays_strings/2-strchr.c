#include "main.h"

/**
 * function to locate a character in a string
 *
 * Return: Pointer to the character or null.
 */
char *_strchr(char *s, char c)
{
	unsigned int i;
	char *p;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			p = &s[i];
			return (p);
		}
		i++;
	}
	return ('\0');
}
