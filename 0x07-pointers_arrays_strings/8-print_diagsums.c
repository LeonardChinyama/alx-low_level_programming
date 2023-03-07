#include "main.h"

/**
 * function: prints the sum of the two diagonals of a square matrix of integers
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	unsigned int i, j, s1, s2;
	s1 = 0;
	s2 = 0;
	for (i = 0; i < size; i++)
		s1 += a[(i * size + i)];
	for (j = size - 1; j <= (size * size) - size; j = j + size - 1)
		s2 += a[j];
	printf("%d, %d\n", s1, s2);
}
