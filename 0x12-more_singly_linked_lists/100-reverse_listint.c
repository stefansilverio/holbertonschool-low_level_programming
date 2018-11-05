#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: address of head ptr
 * Return: address of head ptr
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *curr = *head;
	listint_t *next = NULL;

	if (head == NULL)
		return (NULL);
	if (*head == NULL)
		return (NULL);

	while (curr)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*head = prev;
	return (*head);
}
