#include "function_pointers.h"
/**
 * array_iterator - a funtion that iterates
 *@array: array
 *@size: how many times
 *@action: pointer to print
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{

	int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
