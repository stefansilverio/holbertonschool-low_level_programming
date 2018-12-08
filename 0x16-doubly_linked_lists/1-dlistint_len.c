#include "lists.h"

/**
 * dlistint_len - print number of elements in list
 * @h: ptr to head of list
 * Return: number of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
