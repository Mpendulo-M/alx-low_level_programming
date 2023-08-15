#include "main.h"
/**
 *
 * print_last_digit - prints last digit of an integer
 * @x: integer being tested
 * Return: 0 (Successful)
 */

int print_last_digit(int x)
{
	int result = x % 10;
	char charNum = result + '0';

	_putchar(charNum);

	return (0);


}
