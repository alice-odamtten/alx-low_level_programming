
#include "main.h"

/**
 * print_last_digit - Entry point
 * @n: The number
 * Return:  the value of last digit
 */
int print_last_digit(int n)
{
	int n = n % 10;

	if (n < 0)
		n = -1 * n;

	_putchar('0' + n);
	return (n);
}

