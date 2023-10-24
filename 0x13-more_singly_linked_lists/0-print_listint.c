#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint - prints elements of a linked list
 * @h: linked list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
 size_t nodes = 0;

 while (h)
 {
 printf("%d\n", h->data);
 nodes++;
 h = h->link;
 }

 return (nodes);
}

