#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - allocating memory using malloc
 *@b: byte size
 *Return: pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
