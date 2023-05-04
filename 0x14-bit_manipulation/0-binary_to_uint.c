#include "main.h"

/**
 * binary_to_uint - Convert binary to integer
 * @b: The binary to convert
 * Return: Always binary
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b)
	{
		if (*b == '0')
		{
			n = n << 1;
		}
		else if (*b == '1')
		{
			n = (n << 1) | 1;
		}
		else
		{
			return (0);
		}
		b++;
	}
	return (n);
}
