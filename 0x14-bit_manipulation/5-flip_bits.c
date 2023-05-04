#include "main.h"

/**
 * flip_bits - returns number of bit you need  to flip bits
 * @n: A variable
 * @m: A variable
 * Return: Always int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	unsigned int c = 0;

	while (i)
	{
		c += i & 1;
		i >>= 1;
	}
	return (c);
}
