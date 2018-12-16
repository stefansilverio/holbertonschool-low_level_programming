#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: ptr to head of linked list
 * @idx: index to insert node
 * @n: data to place in node
 * Return: address of new_node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new = NULL, *curr = NULL, *tmp = NULL;

	if (((h == NULL) || (*h == NULL)) && (idx > 0))
		return (NULL);
	curr = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->prev = NULL;
	new->n = n;
	if ((*h == NULL) || (idx == 0))
	{
		tmp = *h;
		*h = new;
		new->next = tmp;
		if (tmp == NULL)
			return (new);
		new->next->prev = new;
		return (new);
	}
	while (curr->next)
	{
		if (count + 1 == idx)
			break;
		count++;
		curr = curr->next;
	}
	if (count + 1 == idx)
	{
		tmp = curr->next;
		curr->next = new;
		new->prev = curr;
		new->next = tmp;
		if (tmp == NULL)
			return (new);
		new->next->prev = NULL;
		return (new);
	}
	return (NULL); }
