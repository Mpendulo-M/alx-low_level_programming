#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char cc = 'a';

	while (cc <= 'z')
	{
	putchar(cc);
	cc++;
	}

	putchar('\n');

	return (0);
}

