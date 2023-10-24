#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - free linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp = NULL;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
