#include "lists_h"

/**
 * add_nodeint - Adds new node to the begining
 * @head: Head pointer
 * @n: The data
 *
 * Return: Always a node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *m;

	if (head == NULL)
	{
		return (NULL);
	}

	m = (listint_t *)malloc(sizeof(listint_t));
	if (m == NULL)
	{
		return (NULL);
	}
	m->n = n;
	m->next = *head;
	*head = m;

	return (m);
}
