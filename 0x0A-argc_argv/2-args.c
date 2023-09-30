#include <stdio.h>
/**
 *main - print all arguments
 *@argc: argument counter
 *@argv: argument vector
 *Return: 0 (successful)
 */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);


	return (0);
}

