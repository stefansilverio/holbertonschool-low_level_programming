#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at given index
 * @head: ptr to address of first node
 * @index: index to delete node
 * Return: exit status
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *tmp = NULL, *curr = NULL;

	if ((*head == NULL) || (head == NULL))
		return (-1);
	curr = *head;
	if (index == 0)
	{
		if (curr->next == NULL) /* if there's only one node */
		{
			free(curr);
			*head = NULL;
			return (1);
		}
		tmp = curr->next; /* multiple nodes */
		free(*head);
		*head = tmp;
		tmp->prev = NULL;
		return (1);
	}
	while (curr->next->next) /* find place to stop */
	{
		if (count + 1 == index)
		{
			tmp = curr->next->next;
			free(curr->next);
			curr->next = tmp;
			tmp->prev = curr;
			return (1);
		}
		else
		{
			curr = curr->next;
			count++; }
	}
	if ((curr->next) && (count + 1 == index))
	{
		free(curr->next);
		curr->next = NULL;
		return (1);
	}
	else if ((curr->next) && (count + 1 != index))
		return (-1);

	return (-1);
}
