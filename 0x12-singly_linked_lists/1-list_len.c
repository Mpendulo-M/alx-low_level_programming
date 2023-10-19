#include <stdlib.h>
#include "lists.h"

/**
 * list_len - number of elements in a linked list
 * @h: pointer to list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
