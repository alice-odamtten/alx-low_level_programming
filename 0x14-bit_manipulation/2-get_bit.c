#include "main.h"

/**
 * get_bit - Entry point
 * @n: The bit
 * @index: The index of the bit
 * Return: Always int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m = 1;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	m = m << index;
	return ((n & m) != 0);
}
