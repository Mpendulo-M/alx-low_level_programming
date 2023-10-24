#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - count number of elements
 * @h: link list to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes = nodes + 1;
		h = h->next;
	}
	return (nodes);
}
