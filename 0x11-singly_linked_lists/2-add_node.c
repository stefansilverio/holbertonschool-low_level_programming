#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - insert node at head of list
 * @head: address of ptr HEAD
 * @str: string to be inserted in new_node
 * Return: address of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->next = (*head);
	(*head) = new_node;
	return (new_node);
}
