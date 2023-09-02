#include "main.h"
#include <stdio.h>
/**
 *main - prints file name
 *@argc: number
 *@argv: array
 *Return: 0 successful
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

