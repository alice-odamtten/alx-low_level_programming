#include "lists_h"
#include <stdio.h>
#include <stdlib.h>
/**
 * listint_len - Returns number of element
 * @h: Node pointer
 *
 * Return: Always size_t
 */

size_t listint_len(const listint_t *h)
{
size_t s = 0;

while (h != NULL)
{
	h = h->next;
	s++;
}

return (s);
}
