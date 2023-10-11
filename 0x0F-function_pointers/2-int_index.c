#include "function_pointers.h"
/**
 * int_index - provide index of mattching int
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer to funtion
 * Return: index or -1 if no match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (size <= 0)
		return (-1);

	for (count = 0;  count < size; count++)
	{
		if (cmp(array[count]))
			return (count);
	}
	return (-1);



}
