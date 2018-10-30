#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free a linked list
 * @head: ptr to ptr to first node
 * Return: none
 */
void free_listint2(listint_t **head)
{
	listint_t *free_head = NULL;
	listint_t *tmp = NULL;

	if (*head == NULL)
		return;

	tmp = *head;
	*head = NULL;

	while (tmp)
	{
		free_head = tmp;
		free(free_head);
		tmp = (tmp)->next;
	}
}
