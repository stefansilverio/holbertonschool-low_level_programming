#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add a node to end of linked list
 * @head: ptr to head of list
 * @n: n data to add to list
 * Return: ptr to new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *store = NULL;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	store = *head;

	while (store)
	{
		if (store->next == NULL)
		{
			store->next = new_node;
			return (new_node);
		}
		store = store->next;
	}
	return (new_node);
}
