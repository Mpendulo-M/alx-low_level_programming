#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char cc1 = '0';
	char cc2 = 'a';

	while (cc1 <= '9')
	{
		putchar(cc1);
		cc1++;
	}

	while (cc2 <= 'f')
	{
		putchar(cc2);
		cc2++;
	}

	putchar('\n');

	return (0);

}
