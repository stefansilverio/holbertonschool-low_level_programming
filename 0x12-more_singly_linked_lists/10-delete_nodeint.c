#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node a a given index
 * @head: head node of list
 * @index: index where to delete node
 * Return: exit status
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	unsigned int move = 1;
	listint_t *tmp = NULL;
	listint_t *jump = NULL;

	jump = *head;
	tmp = *head;
	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		tmp = tmp->next;
		free(*head);
		*head = tmp;
		return (1);
	}
	while ((count < index) && (tmp))
	{
		count++;
		tmp = tmp->next; /* sitting on node to delete */
	}
	if (!tmp)
	{
		free(tmp);
		return(1);
	}
	while (move < count)
	{
		move++;
		jump = jump->next; /* one short of tmp */
	}
	if (count == index)
	{
		tmp = tmp->next; /* tmp is sitting one ahead of index */
		free(jump->next);
		jump->next = tmp;
	}
	return (1);
}
