#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a node at the end of a linked list
 * @head: pointer to pointer to the list
 * @str: string to put in the node
 *
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *holder = *head;
	unsigned int i = 0;

	while (str[i])
		i++;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->i = i;
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}

	while (holder->next)
		holder = holder->next;

	holder->next = n;

	return (n);
}

