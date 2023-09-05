#include "main.h"
#include <stdlib.h>
/**
 *
 *
 *
 */
int **alloc_grid(int width, int height)
{
	int x, y;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = mallooc(sizeof(int *) * height);
	
	if (ptr == NULL)
		return (NULL);

	for (x = 0; x <height



}
