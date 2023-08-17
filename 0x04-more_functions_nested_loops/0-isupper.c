#include "main"
/**
 *
 *
 *
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		_putchar(c);
		_putchar(': ');
		_putchar('0');
		return (0);
	}
	else if ((c >= 97) && (c <= 122))
	{
		_putchar(c);
		_putchar(': ');
		_putchar('1');
		return (1);
	}

}
