#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free a linked list
 * @head: ptr to first node
 * Return: none
 */
void free_listint(listint_t *head)
{
	listint_t *tmp = NULL;

	if (head == NULL)
		return;

	while (head)
	{
		tmp = head;
		head = tmp->next;
		free(tmp);
	}
}
