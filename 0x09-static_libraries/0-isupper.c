#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _isupper - Entry point
 * @c: Integer
 * Return: Always integer
 */

int _isupper(int c)
{

if (c >= 'A' && c <= 'Z')
{
	return (1);
}
else
{
	return (0);
}

}
