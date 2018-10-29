#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at index
 * @head: ptr to ptr to first node in list
 * @idx: index to insert node
 * @n: value to assign to new node
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *store = NULL;
	listint_t *new_node = NULL;
	listint_t *tmp = NULL;
	unsigned int count = 0;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	tmp = malloc(sizeof(listint_t));

	if (tmp == NULL)
		return (NULL);

	new_node->n = n;

	store = *head;

	while (count < idx)
	{
		count++;
		store = store->next;
	}
	tmp = store->next;
	store->next = new_node;
	new_node->next = tmp;

	return (new_node);
}
