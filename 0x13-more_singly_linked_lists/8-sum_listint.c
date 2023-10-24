#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * sum_listint - calculates the sum of all elements
 * @head: first node
 *
 * Return: Total sum
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *temp = NULL;

	temp = head;

	while (temp)
	{
	total = total + temp->n;
	temp = temp->next;
	}
	return (total);
}
