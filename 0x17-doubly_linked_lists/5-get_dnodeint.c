#include "lists.h"
/**
 * get_dnodeint_at_index - get the nth node of a list
 * @head: the head node
 * @index: is the index of the node, starting from 0
 * Return: always the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		count++;
		head = head->next;
	}
	return (NULL);
}
