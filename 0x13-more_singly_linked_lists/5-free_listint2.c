#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - free linked list
 * @head: pointer to the list
 */
void free_listint2(listint_t **head)
{
	listint_t *current = NULL;

	if (head == NULL)
		return;
	while (*head)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
	*head = NULL;
}
