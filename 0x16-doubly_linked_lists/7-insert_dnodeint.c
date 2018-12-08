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
	unsigned int pos = 1;
	dlistint_t *new_node = NULL;
	dlistint_t *curr = NULL;
	dlistint_t *tmp = NULL;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*h == NULL)
	{
		free(new_node);
		return (add_dnodeint(h, n));
	}

	curr = *h;

	while ((pos < idx) && (curr->next))
	{
		curr = curr->next;
		pos++;
	}
	if (pos == idx)
	{
/* insert middle */
		tmp = curr->next;
		curr->next = new_node;
		new_node->prev = curr;
		new_node->next = tmp;
	}
	else if (pos + 1 == idx)
	{
/* insert end */
		free(new_node);
		return (add_dnodeint_end(h, n));
	}
	return (NULL);
}
