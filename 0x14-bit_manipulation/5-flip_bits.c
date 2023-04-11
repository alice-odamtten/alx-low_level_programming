#include "main.h"

/**
 * flip_bits - Entry point
 * @n: Varible to be fliped
 * @m: The other variable
 *
 * Return: Always usigned int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int r = n ^ m;
	unsigned int count = 0;

	while (r)
	{
		count += r & 1;
		r >>= 1;
	}

	return (count);
}
