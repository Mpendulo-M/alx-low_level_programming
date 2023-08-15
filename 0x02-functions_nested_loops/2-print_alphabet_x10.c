
#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * print_alphabet_x10() print the aphabet ten  times
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10 ; i++)
	{
		int ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
	}
}
