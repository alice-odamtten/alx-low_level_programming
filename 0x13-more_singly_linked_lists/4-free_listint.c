#include <stdlib.h>
#include <stdio.h>
#include "lists_h"

/**
 * free_listint - Frees all nodes
 * @head: Pointer to node
 */

void free_listint(listint_t *head)
{
	listint_t *last;

	while (head != NULL)
	{
		last = head;
		head = head->next;
		free(last);
	}

}
