#include "main.h"
#include <stdlib.h>
/**
 *alloc_grid -  function that returns a pointer to a 2 dimensional array of integer
 *@width: width of the 2D array
 *@height: height of 2D array
 *Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int x, y;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);
	
	if (ptr == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		ptr[x] = malloc(sizeof(int) * width);
		if (ptr[x] == NULL)
		{
			for (; x >= 0; x--)
				free(ptr[x]);

			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			ptr[x][y] = 0;
	}

	return (ptr);
}
