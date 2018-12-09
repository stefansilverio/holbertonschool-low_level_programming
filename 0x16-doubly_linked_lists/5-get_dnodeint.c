#include "lists.h"

/**
 * get_dnodeint_at_index - return the node at index
 * @head: head of list
 * @index: index to get node
 * Return: address of node
 */
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
	if ((curr == NULL) && (count < index))
	{
		return (NULL);
	}

	return (curr);
}
