#include "main.h"
/**
 * print_number - prints an integer using putchar
 *@n: digit to be printed
 *
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');








}
