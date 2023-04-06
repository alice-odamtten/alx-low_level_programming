#include <stdlib.h>
#include <stdio.h>
#include "lists_h"

/**
 * add_nodeint_end - Adds new node at end of a list
 * @head: A pointer
 * @n: The data
 *
 * Return: Always a node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *newnode;
	
	if (*head == NULL)
	{
		*head = (listint_t *)malloc(sizeof(listint_t));
		if (*head == NULL)
		{
			return (NULL);
		}
		(*head)->n = n;
		(*head)->next = NULL;

		return (*head);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	temp->next = newnode;

	return (newnode);
}
