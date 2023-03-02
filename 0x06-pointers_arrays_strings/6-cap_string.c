#include "main.h"
#include <stdio.h>

/**
  * cap_string - Entry point
  * @s: Pointer
  *
  * Return: char value
  */
char *cap_string(char *s)
{
	int a = 0, i;
	int c = 13;
	char p[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[a])
	{
		i = 0;

		while (i < c)
		{
			if ((a == 0 || s[a - 1] == p[i]) && (s[a] >= 97 && s[a] <= 122))
				s[a] -= 32;

			i++;
		}

		a++;
	}

	return (s);
}
