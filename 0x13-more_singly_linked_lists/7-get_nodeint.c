#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_nodeint_at_index - returns the node at specific place
 * @head: first node
 * @index: index of the node to return
 *
 * Return: pointer to the specific node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *temp = NULL;
	temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i = i + 1;
	}
	if (temp)
		return (temp);

	return (NULL);
}
