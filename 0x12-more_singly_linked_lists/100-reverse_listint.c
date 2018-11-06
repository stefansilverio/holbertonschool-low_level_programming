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
	listint_t *next = NULL;

	if (head == NULL)
		return (NULL);
	if (*head == NULL)
		return (NULL);

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		(*head) = next;
	}
	*head = prev;
	return (*head);

}
