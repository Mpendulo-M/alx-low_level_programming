#include "main.h"
/**
 * print_number - prints an integer using putchar
 *@n: digit to be printed
 *
 */

void print_number(int n)
{

	int T = 0;
	int h = 0;
	int t = 0;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	while (n >= 1000)
	{
		n = n - 1000;
		T++;
	}
	while (n >= 100)
	{
		n = n - 100;
		h++;
	}
	while (n >= 10)
	{
		n = n - 10;
		t++;
	}

	if (n == 0)
		_putchar(48);
	else if (T != 0)
	{
		_putchar(T + '0');
		_putchar(h + '0');
		_putchar(t + '0');
		_putchar(n + '0');
	}
	else if (h != 0)
	{
		_putchar(h + '0');
		_putchar(t + '0');
		_putchar(n + '0');
	}
	else if (t != 0)
	{
		_putchar(t + '0');
		_putchar(n + '0');
	}
	else
		_putchar(n + '0');


}
