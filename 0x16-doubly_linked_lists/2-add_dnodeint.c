#include "lists.h"

/**
 * add_dnodeint - add node to front of list
 * @head: address of ptr to head of list
 * @n: data to be placed in node
 * Return: address of new_node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = NULL;
	dlistint_t *new_node = NULL;

	new_node  = malloc(sizeof(dlistint_t));

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
		tmp = *head;
		*head = new_node;
		new_node->prev = NULL;
		new_node->next = tmp;
		tmp->prev = new_node;
	}
	return (new_node);
}
