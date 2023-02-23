#include "main.h"

/**
 *  print_most_numbers - Entry point
 *
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		while (i != '2' && i != '4')
			_putchar('0' + i);
		i++;
	}

	_putchar('\n');
}
