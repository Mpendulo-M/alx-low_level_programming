#include <stdio.h>
/**
 *main - prints number of arguments passed
 *@argc: argument counter
 *@argv: argument vector
 *Return: 0 (successful)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	argc--;
	printf("%d\n", argc);

	return (0);
}
