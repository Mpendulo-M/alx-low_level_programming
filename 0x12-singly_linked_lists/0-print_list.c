#include "lists.h"
#include <stdio.h>
/**
 * print_list - print elemets of list
 * @h: pointer to list
 * Return: number of nodes
 */


size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		printf("[0] (nil)\n");

	while (h != NULL)
	{
	if (h->str != NULL)
		printf("[%u} %s\n", h->len, h->str);
	else
		printf("[0] (nil)\n");

	h = h->next;
	nodes++;
	}

	return (nodes);



}
