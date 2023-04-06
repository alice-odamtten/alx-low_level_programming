#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists_h"

/**
 * listint_len - Returns number of element
 * @h: Node pointer
 *
 * Return: Always size_t
 */

size_t listint_len(const listint_t *h)
{

unsigned int s = 0;

while (h != NULL)
{
	h = h->next;
	s++;
}

return (s);
}
