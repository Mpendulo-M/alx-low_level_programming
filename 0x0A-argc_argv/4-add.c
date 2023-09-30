#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - adds numbers
 * @argc: number of arguments
 * @argv: argumentts passed
 * Return: sum
 */
int main(int argc, char *argv[])
{
	int iNum, sum, i, count;
	bool bNum;

	i = 1;

	while (i < argc)
	{
		if (isdigit(argv[i][0]))
			bNum = true;
		else
		{
			bNum = false;
			break;
		}
		i++;
	}

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	if (bNum == false)
	{
		printf("Error\n");
		return (1);
	}
	sum = 0;
	count = 1;
	while (count < argc)
	{
		iNum = atoi(argv[count]);
		sum += iNum;
		count++;
	}

	printf("%d\n", sum);
	return (0);
}
