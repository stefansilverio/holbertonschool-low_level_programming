#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - print all elements in the list
 * @h: head node of the list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count;

	if (h == NULL)
		return (-1);

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
