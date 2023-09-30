#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - determines number of coins
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Successful)
 */
int main(int argc, char *argv[])
{
	int num, i, count;
	int change[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	count = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	count = 0;
	for (i = 0; i < 5; i++)
	{
		while (num >= change[i])
		{
			count++;
			num -= change[i];
		}
	}

	printf("%d\n", count);
	return (0);
}

