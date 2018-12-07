#include "lists.h"

/**
 * free_dlistint - free a linked list
 * @head: ptr to first node
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	if (head == NULL)
		return;

	while (head)
	{
		tmp = head;
		free(tmp);
		head = head->next;
	}
}
