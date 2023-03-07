#include "main.h"

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

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}

	if (s[i] != accept[j])
	{
		return (NULL);
	}
}
