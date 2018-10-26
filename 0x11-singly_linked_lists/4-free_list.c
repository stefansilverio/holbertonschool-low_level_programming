#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	else if (head->next)
		free_list(head->next);
	free(head->str);
	free(head);
}
