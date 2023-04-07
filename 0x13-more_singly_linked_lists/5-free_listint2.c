#include "lists.h"

/**
 * free_listint2 - Frees node
 * @head: A pointer
 */

void free_listint2(listint_t **head)
{
	listint_t last;

	while (head != NULL)
	{
		last = head;
		head = head->next;
		free(last);
	}
	head = NULL;
}
