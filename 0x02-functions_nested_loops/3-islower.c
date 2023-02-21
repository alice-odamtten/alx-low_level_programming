#include "main.h"

/**
 * _islower - checks if character is lower or not
 * @c: the character
 * Return: 1 if lowercase and if not 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
