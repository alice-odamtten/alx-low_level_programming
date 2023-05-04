#include "main.h"

/**
 * set_bit - Set value of bit to 1
 * @n: Number to set
 * @index: Index of bit
 * Return: Always an int
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1;

	if (index >= sizeof(unsigned long int) *)
	{
		return (-1);
	}
	m = m << index;
	*n = (*n | m);
	return (1);
}
