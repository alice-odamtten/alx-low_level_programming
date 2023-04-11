#include "main.h"

/**
 * get_bit - A function that returns the bit value
 * @n: THe variable
 * @index: Index
 *
 * Return: An integer
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	n >>= index;

	if (n & 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
