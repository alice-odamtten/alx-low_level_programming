#include "lists.h"


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

	size_t counte = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counte++;
	}

	return (counte);
}
