#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char CURRChar = 'A';
	char currChar = 'a';

	while (currChar <= 'z')
	{
		putchar(currChar);
		currChar++;
	}

	while (CURRChar <= 'Z')
	{
		putchar(CURRChar);
		CURRChar++;
	}

	putchar('\n');

	return (0);
}
