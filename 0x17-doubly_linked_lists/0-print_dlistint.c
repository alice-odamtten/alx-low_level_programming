#include "lists.h"
/**
 * print_dlistint - Print elements of linkend list
 * @h: head pointer
 * Return: always int
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (count);
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
