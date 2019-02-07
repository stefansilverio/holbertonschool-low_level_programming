#include "sort.h"

/**
 *
 *
 *
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr = *list, *tmp = NULL;
	int flag = 0;
	int sorted = 0;

	while (curr && !sorted)
	{
		if ((curr->prev) && (curr->prev->n > curr->n))
		{
			flag = 1;
			if (curr->next)
			{
				curr->prev->next = curr->next;
				curr->next->prev = curr->prev;
			}
			else
			{
				curr->prev->next = NULL;
			}
			tmp = curr;
			while ((curr) && (tmp->n <= curr->n))
			{
				if (curr->prev)
					curr = curr->prev;
				else if (curr->prev == NULL)
					break;
			}
			if (curr->prev == NULL)
			{
				tmp->prev = NULL;
				tmp->next = curr;
				curr->prev = tmp;
				*list = tmp;
			}
			else
			{
				tmp->next = curr->next;
				tmp->prev = curr;
				curr->next->prev = tmp;
				curr->next = tmp;
			}
		}
		if (flag)
		{
			print_list(*list);
			sorted = check_list(*list);
		}
		curr = curr->next;
		flag = 0;
	}
}
int check_list(listint_t *list)
{
	listint_t *tmp = list;

	while (tmp)
	{
		if ((tmp->prev) && tmp->n < tmp->prev->n)
			return (0);
		if (tmp->next)
			tmp = tmp->next;
		else
			break;
	}
	return (1);
}
