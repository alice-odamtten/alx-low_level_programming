#include "main.h"

/**
 * _memcpy - Function used to copy a memory
 *
 * @n: Would be size of byte
 * @dest: Destination pointer
 * @src: Source pointer
 *
 * Return: Character dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (*src[n] != '\0')
	{
		dest[n] = sr[n];
		n++;
	}
	dest[n] = '\0';

	return (dest);
}
