#include "lists.h"

/**
 * add_dnodeint_end - add a node to end of list
 * @head: address of ptr to head of list
 * @n: data to add to node
 * Return: address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *curr = NULL;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
		new_node->next = NULL;
		return (new_node);
	}
	else
	{
		curr = *head;
		while (curr->next)
		{
			curr = curr->next;
		}
		curr->next = new_node;
		new_node->prev = curr;
		new_node->next = NULL;
	}
	return (new_node);
}
