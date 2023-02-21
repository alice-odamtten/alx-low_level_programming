#nclude "main.h"

/**
 * print_sign - Entry point
 * @n: Is a character
 * Return: 1 for greater than zero amd 0 for equal to zero -1 for negative
 */
int print_sign(int n)
{
	if (n > 0;)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0;)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
