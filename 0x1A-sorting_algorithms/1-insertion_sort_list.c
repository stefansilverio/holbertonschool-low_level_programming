#include "sort.h"
#include <stdio.h>

/**
 *insertion_sort_list - sorting algorithm for nodes of linked list
 *@list: list to be sorted
 *
 *Return: Void.
 **/
void insertion_sort_list(listint_t **list)
{
	listint_t *back = NULL, *curr;

	curr = *list;
	if (curr || curr->next == NULL)
		return;
	for (curr = *list; curr; curr = curr->next)
	{
/*		printf("current is %d\n", curr->n); */
		back = curr; /* save position in outer loop */
		while (back->prev && back->prev->n > back->n)
		{
			_swap(back->prev, back, list);
/*			printf("back is %d\n", back->n); */
		}
	}
}
/**
 *_swap - swap nodes of a linked list
 *@head: head of the list
 *@bigger: first node to be swapped
 *@smaller: second node to be swapped
 *
 *Return: Void.
 */
void _swap(listint_t *bigger, listint_t *smaller, listint_t **head)
{
	if (smaller->next != NULL) /* not end of list */
		smaller->next->prev = bigger;

	bigger->next = smaller->next;
	smaller->next = bigger;
	smaller->prev = bigger->prev;

	if (bigger->prev == NULL)
		*head = smaller;
	else
		bigger->prev->next = smaller;

	bigger->prev = smaller;

	print_list(*head);
}
