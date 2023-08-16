#include "main.h"
/**
 *
 * print_last_digit - prints last digit of an integer
 * @x: integer being tested
 * Return: Result (Successful)
 */

int print_last_digit(int x)
{
	int result;
       
	result = x % 10;

	if (result < 0)
		result = result * -1;

	_putchar(result + '0');


	return (result);


}
