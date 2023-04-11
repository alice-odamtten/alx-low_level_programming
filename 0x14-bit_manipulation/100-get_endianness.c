#include "main.h"

/**
 * get_endianness - Checks endianness
 *
 * Return: Always integer
 */

int get_endianness(void)
{
	unsigned int t = 1;
	char *c = (char *)&t;

	return ((int)*c);
}
