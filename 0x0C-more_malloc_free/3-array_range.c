#include "main.h"
#include <stdlib.h>
/**
 *array_range - create array of integers
 *@min: starting int
 *@max: max int
 *Return: pointer to new array of integers
 */
int *array_range(int min, int max)
{
	int *ptr;
	int count;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * ((max - min) + 1));

	if (ptr == NULL)
		return (NULL);

	for (count = 0; min <= max; count++)
	{
		ptr[count] = min;
		min++;
	}
	return (ptr);
}
