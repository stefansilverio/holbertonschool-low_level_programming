#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sum all the data in linked list
 * @head: ptr to first list element
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	listint_t *new_head = NULL;
	int sum = 0;

	if (head == NULL)
		return (0);

	new_head = head;

	while (new_head)
	{
		sum += new_head->n;
		new_head = new_head->next;
	}
	return (sum);
}
