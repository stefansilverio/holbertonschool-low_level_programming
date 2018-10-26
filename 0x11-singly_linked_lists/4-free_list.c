#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - free all nodes
 * @head: current node
 */
void free_list(list_t *head)
{
	list_t *tmp = 0;

	while (head)
	{
		tmp = head;
		free(tmp->str);
		free(tmp);
		head = head->next;
	}
}
