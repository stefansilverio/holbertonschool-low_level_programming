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
	unsigned int pos = 0;
	dlistint_t *new_node = NULL, *curr = NULL, *tmp = NULL;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*h == NULL)
	{
		free(new_node);
		return (add_dnodeint(h, n)); /* creates node with single list */
	}
	if (idx == 0) /* what if curr->next == NULL */
	{
		tmp = *h;
		*h = new_node;
		new_node->prev = NULL;
		new_node->next = tmp;
		return (new_node);
	}
	curr = *h;
	while ((pos + 1 < idx) && (curr->next))
	{
		curr = curr->next;
		pos++;
	}
	if ((pos + 1 == idx) && (curr->next)) /* middle case */
	{
		tmp = curr->next;
		curr->next = new_node;
		new_node->prev = curr;
		new_node->next = tmp;
		tmp->prev = new_node;
		return (new_node);
	}
	else if ((pos + 1 == idx) && (curr->next == NULL))
	{
		tmp = curr->prev;
		tmp->next = new_node;
		new_node->prev = tmp;
		new_node->next = curr;
		curr->prev = new_node;
		return (new_node);
	}
	else
	{
		free(new_node);
		return(add_dnodeint_end(h, n));
	}
	return (NULL); /* if curr->next is null */
}
