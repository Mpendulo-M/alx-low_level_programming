#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char currChar = 'a';
	while (currChar <= 'z')
	{
		putchar(currChar);
		currChar++;
	}

	char CURRChar = 'A';
	while (CURRChar <= 'Z')
	{
		putchar(CURRChar);
		CURRChar++;
	}

	putchar('\n');

	return (0);
}
