#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete node
 * @head: pointer to the first element
 * @index: index of the node to delete
 *
 * Return: 1 successful
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = NULL;
	listint_t *current = NULL;
	unsigned int i = 0;

	temp = *head;
	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i = i + 1;
	}
	current = temp->next;
	temp->next = current->next;
	free(current);
	return (1);
}

