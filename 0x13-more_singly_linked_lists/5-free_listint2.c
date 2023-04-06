#include <stdlib.h>
#include <stdio.h>
#include "lists_h"

/**
 * free_listint2 - Frees node
 * @head: A pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *last;

	if (*head == NULL)
	{
		return (NULL);
	}
	temp = (listint_t *)malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	last = (listint_t *)malloc(sizeof(listint_t));
	if (last == NULL)
	{
		return (NULL);
	}
	last = head;
	while (last != NULL)
	{
		temp = last->next;
		free(last);
		last = temp;
	}
	*head = NULL;
}
