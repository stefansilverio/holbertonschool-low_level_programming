#include "sort.h"

/**
 *cocktail_sort_list - sort using cocktail algorithm
 *@list: list of nodes to be sorted in ascending order
 *
 *Return: Void.
 **/
void cocktail_sort_list(listint_t **list)
{
	int sorted = 0;
	listint_t *node = *list;

	while (!sorted)
	{
		sorted = 1;
		while (node)
		{
			if (node->prev && node->n < node->prev->n)
			{
				sorted = 0;
				_swap(node->prev, node, list);
			}
			if (!node->next)
				break;
			node = node->next;
		}
		while (node->prev)
		{
			if (node->next && node->n > node->next->n)
			{
				sorted = 0;
				_swap(node, node->next, list);
			}
			node = node->prev;
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
