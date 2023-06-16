#include "lists.h"
/**
 * sum_dlistint - sums the integers of a list
 * @head: head node
 * Return: the sum of integers
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
