#include "main.h"
/**
 * print_most_numbers - prints numbers between 0-9 without 2and4
 */
void print_most_numbers(void)
{
	int c = '0';

	while (c <= '9')
	{
		if (c != '2' || c != '4')
			_putchar(c);
		c++;
	}

	_putchar('\n');
}
