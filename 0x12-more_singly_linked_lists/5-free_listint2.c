#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

void free_listint2(listint_t **head)
{
	listint_t *free_head;

	if (*head == NULL)
		return;
	while (*head)
	{
		free_head = *head;
		*head = free_head->next;
		free(free_head);
	}
}
