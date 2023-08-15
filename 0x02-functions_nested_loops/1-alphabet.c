#include "main.h"
/**
 * print_alphabet - Entry point
 * print_alphabet() prints all alphabets in lowercase
 */

void print_alphabet(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');

}
