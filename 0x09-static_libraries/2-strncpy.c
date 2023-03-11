#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncpy - Entry point
 *
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to copied from src.
 * Return: A pointer to the resulting string dest.
 *
 */

char *_strncpy(char *dest, char *src, int n)

{

	int i = 0, j = 0;

	while (src[i++])
	j++;

	for (i = 0; src[i] && i < n; i++)
	dest[i] = src[i];

	for (i = j;  i < n; i++)
	dest[i] = '\0';

	return (dest);

}
