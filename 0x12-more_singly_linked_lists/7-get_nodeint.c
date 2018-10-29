#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - return nth node of linked list
 * @head: ptr to head node
 * @index: node to return
 * Return: node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *new_node = NULL;

	new_node = head;
	while ((count < index) && (new_node))
	{
		count++;
		new_node = new_node->next;
	}
	return (new_node);
}
