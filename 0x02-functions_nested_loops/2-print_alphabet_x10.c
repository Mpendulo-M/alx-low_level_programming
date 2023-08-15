#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	
	for (int i = 0; i < 10 ; i++)
	{
		int ch = 'a';

		while (ch <= 'z')
		{
			putchar(ch);
			ch++;
		}
		putchar('\n');
	}

}

int main(void)
{
	print_alphabet_x10();

	return (0);
}
