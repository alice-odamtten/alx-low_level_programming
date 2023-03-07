#include "main.h"

/**
 *  _strspn - Compare how may characters are the same
 *
 *  @s: Pointer for source char
 *  @accept: Pointer for comparing char
 *
 * Return: Always return char
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}

	return (count);
}
