#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: pointer to pointer to the list
 * @str: string to add to node
 *
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *node;

	while (str[i])
		i = i + 1;

	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);

	node->str = strdup(str);
	node->i = i;
	node->next = (*head);
	(*head) = node;

	return (*head);
}

