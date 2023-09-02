#include <stdio.h>
#include <stdlib.h>
/**
 *main - multiplies 2 numbers
 *@argc: argument counter
 *@argv: argument vvector
 *Return: 0 (successful) otherwis ERROR
 */

int main(int argc, char *argv[])
{

	int result;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}


	return (0);
}
