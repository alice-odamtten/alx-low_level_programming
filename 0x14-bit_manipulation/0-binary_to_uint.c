#include "main.h"

int pow_(int x, int y);

/**
 * binary_to_uint - A function that convert binary
 * @b: The binary in strig form
 *
 * Return: Always converted number
 **/

unsigned int binary_to_uint(const char *b)
{
	unsigned int t = 0;
	int count, power, i, no;

	if (b == NULL)
	{
		return (0);
	}

	count = 0;
	while (b[count] != '\0')
	{
		count++;
	}
	power = count - 1;
	for (i = 0; i < count; i++)
	{
		no = b[i] - '0';
		if (no < 0 || no > 1)
		{
			return (0);
		}
		t += no * pow_t(2, power);
		power--;
	}

	return (t);
}
/**
 * pow_t - Calculate thepower of a number
 * @x: A variable
 * @y: Avariable
 * Return: alays int
 */

int pow_t(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}

	return (x * pow_(x, y - 1));
}
