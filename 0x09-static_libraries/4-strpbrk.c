#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strpbrk - Funtion to compare and print the same  character
 *
 * @s: Pointer to searched char
 * @accept: Pointer to source char
 *
 * Return: Always char
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}

	return (0);
}
