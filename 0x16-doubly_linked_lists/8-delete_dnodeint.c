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
	dlistint_t *curr = NULL, *tmp = NULL;

	if ((head == NULL) || (*head == NULL))
		return (-1);
	curr = *head;
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}
	while (curr->next)
	{
		if (count == index)
			break;
		count++;
		curr = curr->next;
	}
	if (count == index)
	{
		if (curr->next == NULL)
		{
			curr->prev->next = NULL;
			free(curr);
			return (1);
		}
		curr->prev->next = curr->next;
		curr->next->prev = curr->prev;
		free(curr);
		return (1);
	}
	return (-1);
}
