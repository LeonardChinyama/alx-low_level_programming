#include "main.h"

/**
 * function: gets length of prefix substring
 *
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	i = 0;
	while (accept[i] != '\0')
		i++;
	return (++i);
}
