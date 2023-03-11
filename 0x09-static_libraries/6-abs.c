#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 *  _abs - Entry point
 *  @a: integer
 *  Return: Always o
 */
int _abs(int a)
{
	if (a >= 0)
		return (a);
	else
		return (-a);
}
