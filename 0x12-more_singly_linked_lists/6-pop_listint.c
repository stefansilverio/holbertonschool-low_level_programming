#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int pop_listint(listint_t **head)
{
	listint_t *tmp = NULL;
	int data = 0;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (data);
}
