#include <stdio.h>
#include <stdlib.h>
#include "lists_h"

/**
 * listint_len - Returns number of element
 * @h: Node pointer
 *
 * Return: Always size_t
 */

size_t listint_len(const listint_t *h)
{
const listint_t *m;

unsigned int s = 0;

m = h;
while (m != NULL)
{
	m = m->next;
	s++;
}

return (s);
}
