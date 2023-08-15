#include "main.h"
/**
 *
 * print_last_digit - prints last digit of an integer
 * @x: integer being tested
 * Return: Result (Successful)
 */

int print_last_digit(int x)
{
	int result = x % 10;

	if (result < 10)
		result = result * -1;

	_putchar(result + '0');


	return (resut);


}
