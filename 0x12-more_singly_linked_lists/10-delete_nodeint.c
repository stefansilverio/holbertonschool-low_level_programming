#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	unsigned int move = 1;
	listint_t *tmp = NULL;
	listint_t *jump = NULL;

	if (*head == NULL)
		return (-1);

	jump = *head;

	tmp = *head;

	if (index == 0)
	{
		tmp = tmp->next;
		free(*head);
		*head = tmp;
		return (1);
	}

	while ((count < index) && (tmp->next))
	{
		count++;
		tmp = tmp->next;
	}

	while (move < count)
	{
		move++;
		jump = jump->next; /* jump should stop one short of tmp */
	}

	if (count == index)
	{
		tmp = tmp->next; /* tmp is sitting one ahead of index */
		free(jump->next);
		jump->next = tmp;
	}
	return (1);
}