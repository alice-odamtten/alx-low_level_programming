#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * print_listint - Prints number of node
 *
 * @h: The node
 * Description: prints all node values
 *
 * listint_t: A node data type
 * Return: Always size_t
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *s
	int count = 0;

	s = h;

	while (s != NULL)
	{
		printf("%d\n", s->n);
		s = s->next;
		count++;
	}

	return (count);
}
