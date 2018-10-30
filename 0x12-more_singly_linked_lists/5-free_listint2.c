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
	listint_t *tmp = NULL;
	listint_t *new_head = NULL;

	if (head == NULL)
		return;

	if (*head == NULL)
		return;

	new_head = *head;

	while (new_head)
	{
		tmp = new_head;
		new_head = new_head->next;
		free(tmp);
	}
	*head = NULL;
}
