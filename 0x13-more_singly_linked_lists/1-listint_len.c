#include "lists.h"
#include <stdlib>

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
		h = h->next;
		nodes = nodes + 1;
	}
	return (nodes);
}
