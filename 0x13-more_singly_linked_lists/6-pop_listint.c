#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - deletes the head
 * @head: pointer to the first element
 *
 * Return: the data inside the element
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (!head || !*head)
		return (0);


	i = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (i);
}
