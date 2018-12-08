#include "lists.h"

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
