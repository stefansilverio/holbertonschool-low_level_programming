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
	listint_t *free_head;

	if (*head == NULL)
		return;

	while (*head)
	{
		free_head = *head;
		free(free_head);
		*head = (*head)->next;
	}
}
