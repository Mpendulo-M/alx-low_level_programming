#include "main.h"
/**
 *
 * print_last_digit - prints last digit of an integer
 * @x: integer being tested
 * Return: (Successful)
 */

int print_last_digit(int x)
{
	int result = x % 10;
	
	_putchar(result);
	_putchar('\n');
	return (0);


}
