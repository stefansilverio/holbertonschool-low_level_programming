#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - return number of elements in linked list
 * @h: current node
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	if (h == NULL)
		return (-1);

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
