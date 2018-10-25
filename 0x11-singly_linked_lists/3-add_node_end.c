#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - insert a new node at the end of list
 * @head: first node in the list
 * @str: string to be copied over
 * Return: address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *store;
	int i = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;
	if (*head == NULL)
	{
		(*head) = new_node;
		return (new_node);
	}
	else
	{
		store = *head;
		while ((store)->next != NULL)
		{
			(store) = (store)->next;
		}
	}
	(store)->next = new_node; /* old last element pt to new_node */
	return (new_node);
}
