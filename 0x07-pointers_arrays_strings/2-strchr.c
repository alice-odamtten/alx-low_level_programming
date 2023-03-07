#include "main.h"

/**
 * _strchr - It is used to searh for marching chars
 *
 * @s: Char pointer for marching char
 * @c: Source char
 *
 * Return: Always a char
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}

	return (NULL);
}
