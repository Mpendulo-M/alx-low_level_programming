#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - print elemets of list
 * @h: pointer to list
 * Return: number of nodes
 */


size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->i, h->str);
		h = h->next;
		nodes++;
	}

	return (nodes);
}

