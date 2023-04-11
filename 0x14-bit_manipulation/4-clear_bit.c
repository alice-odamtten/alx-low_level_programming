#include "main.h"

/**
 * clear_bit - Set value of bit to 0
 * @n: The variable
 * @index: The index
 *
 * Return: Always integer
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~(1UL << index);
	return (1);
}
