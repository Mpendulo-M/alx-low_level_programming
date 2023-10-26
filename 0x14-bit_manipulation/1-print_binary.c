#include "main.h"
/**
 *print_binary - convert number to binary
 *@n: number to convert
 *
 */


void print_binary(unsigned long int n)
{

	int size = sizeof(unsigned long int) * 8;
	unsigned long int one = 1;
	unsigned long int mask = one << (size - 1);
	int i;

	for (i = 0; i < size; i++)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');

	mask >>= 1;
	}

	_putchar('\n');
}
