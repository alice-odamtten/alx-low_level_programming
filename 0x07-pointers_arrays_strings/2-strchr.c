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
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);
}
