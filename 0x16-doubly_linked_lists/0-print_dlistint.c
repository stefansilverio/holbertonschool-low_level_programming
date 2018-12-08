#include "lists.h"

/**
 * print_dlistint - print number of elements in list
 * @h: ptr to head of list
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
