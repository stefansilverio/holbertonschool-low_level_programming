#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - return the number of elements
 * @h: ptr to head of list
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (-1);

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
