#include "main.h"
#include <stdlib.h>
/*
 *_calloc - allocate memory to array
 *@nmemb: num of elements
 *@size: size of elements
 *Return: pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);



}
