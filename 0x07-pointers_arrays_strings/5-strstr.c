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
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
			return (haystack);
	}

	return (NULL);
}
