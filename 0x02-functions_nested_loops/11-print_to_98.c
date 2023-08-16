#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints numbers till 98
 * @n: starting number
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (int i = n; i < 98; i++)
			printf("%d, ",i);
	}
	else if (n > 98)
	{
		for (int i = n; i > 98; i--)
			printf("%d, ",i);
	}

	printf("98\n");




}
