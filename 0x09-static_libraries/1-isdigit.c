#include "main.h"
/**
 * _isdigit - checks if an integer is a digit
 * @c: integer to be checked
 * Return: if c is digit 1 otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
