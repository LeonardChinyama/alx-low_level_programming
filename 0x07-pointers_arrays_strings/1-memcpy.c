#include "main.h"

/**
 * simple_print_buffer - copies buffer in hexa
 * @src: the address of memory to copy
 * @dest: address of memory to which to copy
 *
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
