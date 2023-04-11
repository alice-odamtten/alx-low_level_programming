#include "main.h"

/**
 * print_binary - A function to print out the binary of a number
 * @n: The number
 *
 * Return: Void
 */

void print_binary(unsigned long int n)
{
unsigned long int t = 1UL << (sizeof(unsigned long int) * 8 - 1);
int s = 0;
while (t != 0)
{
	if ((n & t) == 0)
	{
		if (s)
		{
			printf("0");
		}
	}
	else
	{
		s = 1;
		printf("1");
	}
	t >>= 1;
}
if (!s)
{
	printf("0");
}
}
