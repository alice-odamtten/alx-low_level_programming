#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Return: Always
 */
int main(void)
{
	int n;
	int a;

	for (n = '0'; n <= '9'; n++)
	{
		for (a = '0'; a <= '9'; a++)
		{
			if (n < a)
			{
				putchar(n);
				putchar(a);

				if (n != '8' || (n == '8' && a != '9'))
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
