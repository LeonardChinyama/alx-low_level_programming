#include "main.h"

/**
 * simple_print_buffer - replaces buffer in hexa
 * @buffer: the address of memory to replace
 * @n: the size of the memory to replace
 *
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
