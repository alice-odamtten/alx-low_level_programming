#include "main.h"

/**
 * print_diagsums - Function to sum square matrix
 *
 * @a: Array pointer
 * @size: Arrray size
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + (size - 1 - i));
	}
	_putchar(sum1);
	_putchar(', ');
	_putchar(sum2);
	_putchar('\n')
}
