#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char cc = 'z';
	
	while (cc >= 'a')
	{
		putchar(cc);
		cc--;
	}

	putchar('\n');

	return (0);
}

