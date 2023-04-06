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

	if (head == NULL)
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
