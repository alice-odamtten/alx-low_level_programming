#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry points
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
 is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n");
	}
	else
	{
		printf("%d is negative\n");
	}

	return (0);
}
