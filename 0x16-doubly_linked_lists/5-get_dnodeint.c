#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr = NULL;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	curr = head;
	while ((count < index) && (curr))
	{
		curr = curr->next;
		count++;
	}
	return (curr);
}
