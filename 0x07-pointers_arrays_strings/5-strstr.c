#include "main.h"

/**
 * function: locates a substring
 *
 * Return: pointer to the beginning of the located substring, or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *p;
	p = '\0';
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] == haystack[i] && needle[j] != '\0'; j++)
		{
			p = &haystack[i];
		}
	}
	return (p);
}
