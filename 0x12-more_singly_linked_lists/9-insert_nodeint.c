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
	listint_t *tmp = NULL; /* one ahead of node to insert */
	listint_t *new_node = NULL; /* node to insert */
	listint_t *early = NULL; /* stop one short of node to insert */
	unsigned int count = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	tmp = *head;
	early = *head;
	new_node->n = n;
	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		return (new_node);
	}
	if (idx == 0)
	{
		*head = new_node;
		new_node->next = tmp;
		return (new_node);
	}
	while ((tmp) && (count < (idx - 1)))
	{
		count++;
		tmp = tmp->next;
		early = early->next;
	}
	if (!tmp)
	{
		if (idx > (count + 2))
			return (NULL);
		tmp->next = new_node;
		new_node->next = tmp;
		return (new_node);
	}
	early = early->next;
	tmp->next = new_node;
	new_node->next = early;
	return (new_node); }
