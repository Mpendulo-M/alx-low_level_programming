#include <stdlib.h>
#include "lists.h"
#include <stddef.h>

/**
 * free_list - frees  linked list
 * @head: list to be freed
 */
void free_list(list_t *head)
{
	list_t *holder;

	while (head)
	{
		holder = head->next;
		free(head->str);
		free(head);
		head = holder;
	}
}

