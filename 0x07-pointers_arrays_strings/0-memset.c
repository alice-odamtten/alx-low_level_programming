#include "main.h"

/**
 * _memset - Funtion that fills a memory
 *
 * @s: Pointer to n
 * @b: value
 * @n: Size of byte
 *
 * Return: Character must be returrned
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}

	return (s);
}
