#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a node at the end
 * @head: pointer to the first element
 * @n: data value
 *
 * Return: pointer to the new nde
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newHead = NULL;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	
	if (!new)
		return (NULL);

	newHead->n = n;
	newHead->next = NULL;

	if (*head == NULL)
	{
		*head = newHead;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

 return (newHead);
}
