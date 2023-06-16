#include "lists.h"

/**
 * dlistint_len - gets the number of element in a list
 * @h: Head node
 * Return: The number of elemants
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (count);
	}
	while (h != NULL)
	{
		count++;
		h = h->nect;
	}
	return (count)
}
