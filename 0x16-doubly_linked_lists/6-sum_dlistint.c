#include "lists.h"

/**
 * sum_dlistint - sum all elements in list
 * @head: ptr to first node
 * Return: sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *curr = NULL;
	int sum = 0;

	if (head == NULL)
		return (0);

	curr = head;
	while (curr)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
