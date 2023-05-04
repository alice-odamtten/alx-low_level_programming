#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: Always an int
 */

int get_endianness(void)
{
	unsigned int n = 1;
	char *k = (char *)&n;

	return ((int) *k);
}
