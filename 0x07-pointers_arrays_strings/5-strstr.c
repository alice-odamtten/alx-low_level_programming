#include "main.h"

/**
 * _strstr - Function to copare two specific string
 *
 * @haystack: String that needs to be compared
 * @needle: Specific string to compare with
 *
 * Return: Always char
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				return (needle);
			}
		}
	}

	return (NULL);
}
