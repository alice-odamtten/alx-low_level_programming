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
const listint_t *m;
size_t s = 0;
if (h == NULL)
{
	return (0);
}

for (m = h; m != NULL; m = m->next)
{
	s++;
}
return (s);
}
