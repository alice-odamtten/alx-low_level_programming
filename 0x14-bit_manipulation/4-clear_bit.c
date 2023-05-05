#include "main.h"

/**
 * clear_bit - Set value of bit to 0
 * @n: A variable
 * @index: The index
 * Return: Always int
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}
