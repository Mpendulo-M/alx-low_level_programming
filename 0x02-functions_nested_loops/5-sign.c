#include "main.h"
/**
 * print_sign - prints the sign of a number
 *@n: the number to be checked
 *Return: 1 if number is postive, return 0 if number is zero, return -1 if number is negative
 */

int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (-1);

}
